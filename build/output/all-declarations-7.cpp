#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//--------------------------------------------------------------------------------------------------
// @switchInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_switchInstructionAST::objectCompare (const GGS_switchInstructionAST & inOperand) const {
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

GGS_switchInstructionAST::GGS_switchInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_switchInstructionAST GGS_switchInstructionAST::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_semanticExpressionAST & in_mSwitchExpression,
                          const GGS_location & in_mEndOfSwitchExpression,
                          const GGS_switchBranchesAST & in_mBranches,
                          const GGS_location & in_mEndOf_5F_switch_5F_instruction,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_switchInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_switchInstructionAST (inCompiler COMMA_THERE)) ;
  object->switchInstructionAST_init_21__21__21__21__21_ (in_mInstructionLocation, in_mSwitchExpression, in_mEndOfSwitchExpression, in_mBranches, in_mEndOf_5F_switch_5F_instruction, inCompiler) ;
  const GGS_switchInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::
switchInstructionAST_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_semanticExpressionAST & in_mSwitchExpression,
                                               const GGS_location & in_mEndOfSwitchExpression,
                                               const GGS_switchBranchesAST & in_mBranches,
                                               const GGS_location & in_mEndOf_5F_switch_5F_instruction,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mEndOfSwitchExpression = in_mEndOfSwitchExpression ;
  mProperty_mBranches = in_mBranches ;
  mProperty_mEndOf_5F_switch_5F_instruction = in_mEndOf_5F_switch_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST::GGS_switchInstructionAST (const cPtr_switchInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST GGS_switchInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_semanticExpressionAST & in_mSwitchExpression,
                                                                   const GGS_location & in_mEndOfSwitchExpression,
                                                                   const GGS_switchBranchesAST & in_mBranches,
                                                                   const GGS_location & in_mEndOf_5F_switch_5F_instruction,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_switchInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_switchInstructionAST (in_mInstructionLocation, in_mSwitchExpression, in_mEndOfSwitchExpression, in_mBranches, in_mEndOf_5F_switch_5F_instruction,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_switchInstructionAST::readProperty_mSwitchExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mSwitchExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_switchInstructionAST::readProperty_mEndOfSwitchExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mEndOfSwitchExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesAST GGS_switchInstructionAST::readProperty_mBranches (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_switchBranchesAST () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mBranches ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_switchInstructionAST::readProperty_mEndOf_5F_switch_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mEndOf_5F_switch_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @switchInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionAST::cPtr_switchInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mSwitchExpression (),
mProperty_mEndOfSwitchExpression (),
mProperty_mBranches (),
mProperty_mEndOf_5F_switch_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionAST::cPtr_switchInstructionAST (const GGS_location & in_mInstructionLocation,
                                                      const GGS_semanticExpressionAST & in_mSwitchExpression,
                                                      const GGS_location & in_mEndOfSwitchExpression,
                                                      const GGS_switchBranchesAST & in_mBranches,
                                                      const GGS_location & in_mEndOf_5F_switch_5F_instruction,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mSwitchExpression (),
mProperty_mEndOfSwitchExpression (),
mProperty_mBranches (),
mProperty_mEndOf_5F_switch_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mEndOfSwitchExpression = in_mEndOfSwitchExpression ;
  mProperty_mBranches = in_mBranches ;
  mProperty_mEndOf_5F_switch_5F_instruction = in_mEndOf_5F_switch_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_switchInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST ;
}

void cPtr_switchInstructionAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@switchInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfSwitchExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBranches.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_switch_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_switchInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_switchInstructionAST (mProperty_mInstructionLocation, mProperty_mSwitchExpression, mProperty_mEndOfSwitchExpression, mProperty_mBranches, mProperty_mEndOf_5F_switch_5F_instruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_switchInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mSwitchExpression.printNonNullClassInstanceProperties ("mSwitchExpression") ;
    mProperty_mEndOfSwitchExpression.printNonNullClassInstanceProperties ("mEndOfSwitchExpression") ;
    mProperty_mBranches.printNonNullClassInstanceProperties ("mBranches") ;
    mProperty_mEndOf_5F_switch_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_switch_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @switchInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionAST ("switchInstructionAST",
                                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST GGS_switchInstructionAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_switchInstructionAST result ;
  const GGS_switchInstructionAST * p = (const GGS_switchInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_switchInstructionAST_2E_weak::objectCompare (const GGS_switchInstructionAST_2E_weak & inOperand) const {
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

GGS_switchInstructionAST_2E_weak::GGS_switchInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST_2E_weak & GGS_switchInstructionAST_2E_weak::operator = (const GGS_switchInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST_2E_weak::GGS_switchInstructionAST_2E_weak (const GGS_switchInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST_2E_weak GGS_switchInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_switchInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST GGS_switchInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_switchInstructionAST result ;
  if (isValid ()) {
    const cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_switchInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST GGS_switchInstructionAST_2E_weak::bang_switchInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_switchInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_switchInstructionAST) ;
      result = GGS_switchInstructionAST ((cPtr_switchInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @switchInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionAST_2E_weak ("switchInstructionAST.weak",
                                                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST_2E_weak GGS_switchInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_switchInstructionAST_2E_weak result ;
  const GGS_switchInstructionAST_2E_weak * p = (const GGS_switchInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@extractedAssociatedValuesForGeneration' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_extractedAssociatedValuesForGeneration : public cCollectionElement {
  public: GGS_extractedAssociatedValuesForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_extractedAssociatedValuesForGeneration (const GGS_unifiedTypeMapEntry & in_mType,
                                                                     const GGS_string & in_mCppName,
                                                                     const GGS_string & in_name
                                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_extractedAssociatedValuesForGeneration (const GGS_extractedAssociatedValuesForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_extractedAssociatedValuesForGeneration::cCollectionElement_extractedAssociatedValuesForGeneration (const GGS_unifiedTypeMapEntry & in_mType,
                                                                                                                      const GGS_string & in_mCppName,
                                                                                                                      const GGS_string & in_name
                                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType, in_mCppName, in_name) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_extractedAssociatedValuesForGeneration::cCollectionElement_extractedAssociatedValuesForGeneration (const GGS_extractedAssociatedValuesForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mType, inElement.mProperty_mCppName, inElement.mProperty_name) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_extractedAssociatedValuesForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_extractedAssociatedValuesForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_extractedAssociatedValuesForGeneration (mObject.mProperty_mType, mObject.mProperty_mCppName, mObject.mProperty_name COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @extractedAssociatedValuesForGeneration
//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration::GGS_extractedAssociatedValuesForGeneration (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration::GGS_extractedAssociatedValuesForGeneration (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    const GGS_extractedAssociatedValuesForGeneration_2E_element element (p->mObject.mProperty_mType, p->mObject.mProperty_mCppName, p->mObject.mProperty_name) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GGS_unifiedTypeMapEntry & in_mType,
                                                                            const GGS_string & in_mCppName,
                                                                            const GGS_string & in_name
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_extractedAssociatedValuesForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_extractedAssociatedValuesForGeneration (in_mType, in_mCppName, in_name COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extractedAssociatedValuesForGeneration::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_extractedAssociatedValuesForGeneration::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mType.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mCppName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mCppName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("name:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_name.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration GGS_extractedAssociatedValuesForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_extractedAssociatedValuesForGeneration result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration GGS_extractedAssociatedValuesForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extractedAssociatedValuesForGeneration result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::plusPlusAssignOperation (const GGS_extractedAssociatedValuesForGeneration_2E_element & inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration GGS_extractedAssociatedValuesForGeneration::class_func_listWithValue (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                                                                 const GGS_string & inOperand1,
                                                                                                                 const GGS_string & inOperand2
                                                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_extractedAssociatedValuesForGeneration_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_extractedAssociatedValuesForGeneration result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::addAssignOperation (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                     const GGS_string & inOperand1,
                                                                     const GGS_string & inOperand2
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_extractedAssociatedValuesForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::setter_append (const GGS_unifiedTypeMapEntry inOperand0,
                                                                const GGS_string inOperand1,
                                                                const GGS_string inOperand2,
                                                                Compiler * /* inCompiler */
                                                                COMMA_LOCATION_ARGS) {
  const GGS_extractedAssociatedValuesForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::setter_insertAtIndex (const GGS_unifiedTypeMapEntry inOperand0,
                                                                       const GGS_string inOperand1,
                                                                       const GGS_string inOperand2,
                                                                       const GGS_uint inInsertionIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_extractedAssociatedValuesForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::setter_removeAtIndex (GGS_unifiedTypeMapEntry & outOperand0,
                                                                       GGS_string & outOperand1,
                                                                       GGS_string & outOperand2,
                                                                       const GGS_uint inRemoveIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mType ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mCppName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_name ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::setter_popFirst (GGS_unifiedTypeMapEntry & outOperand0,
                                                                  GGS_string & outOperand1,
                                                                  GGS_string & outOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mType ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mCppName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_name ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::setter_popLast (GGS_unifiedTypeMapEntry & outOperand0,
                                                                 GGS_string & outOperand1,
                                                                 GGS_string & outOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mType ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mCppName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_name ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::method_first (GGS_unifiedTypeMapEntry & outOperand0,
                                                               GGS_string & outOperand1,
                                                               GGS_string & outOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mType ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mCppName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_name ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::method_last (GGS_unifiedTypeMapEntry & outOperand0,
                                                              GGS_string & outOperand1,
                                                              GGS_string & outOperand2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mType ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mCppName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_name ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration GGS_extractedAssociatedValuesForGeneration::add_operation (const GGS_extractedAssociatedValuesForGeneration & inOperand,
                                                                                                      Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extractedAssociatedValuesForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration GGS_extractedAssociatedValuesForGeneration::subList (const int32_t inStart,
                                                                                                const int32_t inLength,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_extractedAssociatedValuesForGeneration result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration GGS_extractedAssociatedValuesForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_extractedAssociatedValuesForGeneration result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration GGS_extractedAssociatedValuesForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_extractedAssociatedValuesForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration GGS_extractedAssociatedValuesForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_extractedAssociatedValuesForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::plusAssignOperation (const GGS_extractedAssociatedValuesForGeneration inList,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::setter_setMTypeAtIndex (GGS_unifiedTypeMapEntry inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mType = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_unifiedTypeMapEntry GGS_extractedAssociatedValuesForGeneration::getter_mTypeAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntry result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mType ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::setter_setMCppNameAtIndex (GGS_string inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mCppName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_extractedAssociatedValuesForGeneration::getter_mCppNameAtIndex (const GGS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mCppName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::setter_setNameAtIndex (GGS_string inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_name = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_extractedAssociatedValuesForGeneration::getter_nameAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_name ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @extractedAssociatedValuesForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_extractedAssociatedValuesForGeneration::DownEnumerator_extractedAssociatedValuesForGeneration (const GGS_extractedAssociatedValuesForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration_2E_element DownEnumerator_extractedAssociatedValuesForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_extractedAssociatedValuesForGeneration::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_extractedAssociatedValuesForGeneration::current_mCppName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCppName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_extractedAssociatedValuesForGeneration::current_name (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_name ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @extractedAssociatedValuesForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_extractedAssociatedValuesForGeneration::UpEnumerator_extractedAssociatedValuesForGeneration (const GGS_extractedAssociatedValuesForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration_2E_element UpEnumerator_extractedAssociatedValuesForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_extractedAssociatedValuesForGeneration::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_extractedAssociatedValuesForGeneration::current_mCppName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCppName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_extractedAssociatedValuesForGeneration::current_name (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_name ;
}




//--------------------------------------------------------------------------------------------------
//     @extractedAssociatedValuesForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration ("extractedAssociatedValuesForGeneration",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extractedAssociatedValuesForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extractedAssociatedValuesForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extractedAssociatedValuesForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration GGS_extractedAssociatedValuesForGeneration::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_extractedAssociatedValuesForGeneration result ;
  const GGS_extractedAssociatedValuesForGeneration * p = (const GGS_extractedAssociatedValuesForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extractedAssociatedValuesForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extractedAssociatedValuesForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@switchBranchesForGeneration' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_switchBranchesForGeneration : public cCollectionElement {
  public: GGS_switchBranchesForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_switchBranchesForGeneration (const GGS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                          const GGS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                          const GGS_uint & in_mEndOfBranchLocationIndex,
                                                          const GGS_semanticInstructionListForGeneration & in_mInstructions
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_switchBranchesForGeneration (const GGS_switchBranchesForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_switchBranchesForGeneration::cCollectionElement_switchBranchesForGeneration (const GGS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                                                                const GGS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                                                const GGS_uint & in_mEndOfBranchLocationIndex,
                                                                                                const GGS_semanticInstructionListForGeneration & in_mInstructions
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSwitchConstantList, in_mExtractedAssociatedValuesForGeneration, in_mEndOfBranchLocationIndex, in_mInstructions) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_switchBranchesForGeneration::cCollectionElement_switchBranchesForGeneration (const GGS_switchBranchesForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSwitchConstantList, inElement.mProperty_mExtractedAssociatedValuesForGeneration, inElement.mProperty_mEndOfBranchLocationIndex, inElement.mProperty_mInstructions) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_switchBranchesForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_switchBranchesForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_switchBranchesForGeneration (mObject.mProperty_mSwitchConstantList, mObject.mProperty_mExtractedAssociatedValuesForGeneration, mObject.mProperty_mEndOfBranchLocationIndex, mObject.mProperty_mInstructions COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @switchBranchesForGeneration
//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration::GGS_switchBranchesForGeneration (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration::GGS_switchBranchesForGeneration (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    const GGS_switchBranchesForGeneration_2E_element element (p->mObject.mProperty_mSwitchConstantList, p->mObject.mProperty_mExtractedAssociatedValuesForGeneration, p->mObject.mProperty_mEndOfBranchLocationIndex, p->mObject.mProperty_mInstructions) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GGS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                                 const GGS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                 const GGS_uint & in_mEndOfBranchLocationIndex,
                                                                 const GGS_semanticInstructionListForGeneration & in_mInstructions
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_switchBranchesForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_switchBranchesForGeneration (in_mSwitchConstantList, in_mExtractedAssociatedValuesForGeneration, in_mEndOfBranchLocationIndex, in_mInstructions COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_switchBranchesForGeneration::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_switchBranchesForGeneration::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSwitchConstantList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSwitchConstantList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mExtractedAssociatedValuesForGeneration:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mExtractedAssociatedValuesForGeneration.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOfBranchLocationIndex:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOfBranchLocationIndex.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInstructions:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstructions.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration GGS_switchBranchesForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_switchBranchesForGeneration result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration GGS_switchBranchesForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_switchBranchesForGeneration result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::plusPlusAssignOperation (const GGS_switchBranchesForGeneration_2E_element & inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration GGS_switchBranchesForGeneration::class_func_listWithValue (const GGS__5B_lstring_5D_ & inOperand0,
                                                                                           const GGS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                           const GGS_uint & inOperand2,
                                                                                           const GGS_semanticInstructionListForGeneration & inOperand3
                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_switchBranchesForGeneration_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  GGS_switchBranchesForGeneration result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::addAssignOperation (const GGS__5B_lstring_5D_ & inOperand0,
                                                          const GGS_extractedAssociatedValuesForGeneration & inOperand1,
                                                          const GGS_uint & inOperand2,
                                                          const GGS_semanticInstructionListForGeneration & inOperand3
                                                          COMMA_LOCATION_ARGS) {
  const GGS_switchBranchesForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::setter_append (const GGS__5B_lstring_5D_ inOperand0,
                                                     const GGS_extractedAssociatedValuesForGeneration inOperand1,
                                                     const GGS_uint inOperand2,
                                                     const GGS_semanticInstructionListForGeneration inOperand3,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  const GGS_switchBranchesForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::setter_insertAtIndex (const GGS__5B_lstring_5D_ inOperand0,
                                                            const GGS_extractedAssociatedValuesForGeneration inOperand1,
                                                            const GGS_uint inOperand2,
                                                            const GGS_semanticInstructionListForGeneration inOperand3,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const GGS_switchBranchesForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::setter_removeAtIndex (GGS__5B_lstring_5D_ & outOperand0,
                                                            GGS_extractedAssociatedValuesForGeneration & outOperand1,
                                                            GGS_uint & outOperand2,
                                                            GGS_semanticInstructionListForGeneration & outOperand3,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mSwitchConstantList ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mExtractedAssociatedValuesForGeneration ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mEndOfBranchLocationIndex ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mInstructions ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::setter_popFirst (GGS__5B_lstring_5D_ & outOperand0,
                                                       GGS_extractedAssociatedValuesForGeneration & outOperand1,
                                                       GGS_uint & outOperand2,
                                                       GGS_semanticInstructionListForGeneration & outOperand3,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSwitchConstantList ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mExtractedAssociatedValuesForGeneration ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mEndOfBranchLocationIndex ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mInstructions ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::setter_popLast (GGS__5B_lstring_5D_ & outOperand0,
                                                      GGS_extractedAssociatedValuesForGeneration & outOperand1,
                                                      GGS_uint & outOperand2,
                                                      GGS_semanticInstructionListForGeneration & outOperand3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSwitchConstantList ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mExtractedAssociatedValuesForGeneration ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mEndOfBranchLocationIndex ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mInstructions ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::method_first (GGS__5B_lstring_5D_ & outOperand0,
                                                    GGS_extractedAssociatedValuesForGeneration & outOperand1,
                                                    GGS_uint & outOperand2,
                                                    GGS_semanticInstructionListForGeneration & outOperand3,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSwitchConstantList ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mExtractedAssociatedValuesForGeneration ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mEndOfBranchLocationIndex ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mInstructions ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::method_last (GGS__5B_lstring_5D_ & outOperand0,
                                                   GGS_extractedAssociatedValuesForGeneration & outOperand1,
                                                   GGS_uint & outOperand2,
                                                   GGS_semanticInstructionListForGeneration & outOperand3,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSwitchConstantList ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mExtractedAssociatedValuesForGeneration ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mEndOfBranchLocationIndex ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mInstructions ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration GGS_switchBranchesForGeneration::add_operation (const GGS_switchBranchesForGeneration & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_switchBranchesForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration GGS_switchBranchesForGeneration::subList (const int32_t inStart,
                                                                          const int32_t inLength,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_switchBranchesForGeneration result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration GGS_switchBranchesForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_switchBranchesForGeneration result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration GGS_switchBranchesForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_switchBranchesForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration GGS_switchBranchesForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_switchBranchesForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::plusAssignOperation (const GGS_switchBranchesForGeneration inList,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::setter_setMSwitchConstantListAtIndex (GGS__5B_lstring_5D_ inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSwitchConstantList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS__5B_lstring_5D_ GGS_switchBranchesForGeneration::getter_mSwitchConstantListAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSwitchConstantList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::setter_setMExtractedAssociatedValuesForGenerationAtIndex (GGS_extractedAssociatedValuesForGeneration inOperand,
                                                                                                GGS_uint inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mExtractedAssociatedValuesForGeneration = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_extractedAssociatedValuesForGeneration GGS_switchBranchesForGeneration::getter_mExtractedAssociatedValuesForGenerationAtIndex (const GGS_uint & inIndex,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_extractedAssociatedValuesForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mExtractedAssociatedValuesForGeneration ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::setter_setMEndOfBranchLocationIndexAtIndex (GGS_uint inOperand,
                                                                                  GGS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfBranchLocationIndex = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_uint GGS_switchBranchesForGeneration::getter_mEndOfBranchLocationIndexAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfBranchLocationIndex ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_switchBranchesForGeneration::setter_setMInstructionsAtIndex (GGS_semanticInstructionListForGeneration inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructions = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_semanticInstructionListForGeneration GGS_switchBranchesForGeneration::getter_mInstructionsAtIndex (const GGS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_semanticInstructionListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructions ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @switchBranchesForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_switchBranchesForGeneration::DownEnumerator_switchBranchesForGeneration (const GGS_switchBranchesForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration_2E_element DownEnumerator_switchBranchesForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ DownEnumerator_switchBranchesForGeneration::current_mSwitchConstantList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSwitchConstantList ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration DownEnumerator_switchBranchesForGeneration::current_mExtractedAssociatedValuesForGeneration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExtractedAssociatedValuesForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_switchBranchesForGeneration::current_mEndOfBranchLocationIndex (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfBranchLocationIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration DownEnumerator_switchBranchesForGeneration::current_mInstructions (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructions ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @switchBranchesForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_switchBranchesForGeneration::UpEnumerator_switchBranchesForGeneration (const GGS_switchBranchesForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration_2E_element UpEnumerator_switchBranchesForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ UpEnumerator_switchBranchesForGeneration::current_mSwitchConstantList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSwitchConstantList ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration UpEnumerator_switchBranchesForGeneration::current_mExtractedAssociatedValuesForGeneration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExtractedAssociatedValuesForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_switchBranchesForGeneration::current_mEndOfBranchLocationIndex (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfBranchLocationIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration UpEnumerator_switchBranchesForGeneration::current_mInstructions (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructions ;
}




//--------------------------------------------------------------------------------------------------
//     @switchBranchesForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchBranchesForGeneration ("switchBranchesForGeneration",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchBranchesForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchBranchesForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchBranchesForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchBranchesForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration GGS_switchBranchesForGeneration::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_switchBranchesForGeneration result ;
  const GGS_switchBranchesForGeneration * p = (const GGS_switchBranchesForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchBranchesForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchBranchesForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @switchInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_switchInstructionForGeneration::objectCompare (const GGS_switchInstructionForGeneration & inOperand) const {
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

GGS_switchInstructionForGeneration::GGS_switchInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_switchInstructionForGeneration GGS_switchInstructionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mEnumType,
                  const GGS_semanticExpressionForGeneration & in_mSwitchExpression,
                  const GGS_switchBranchesForGeneration & in_mBranches,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_switchInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_switchInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->switchInstructionForGeneration_init_21__21__21_ (in_mEnumType, in_mSwitchExpression, in_mBranches, inCompiler) ;
  const GGS_switchInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionForGeneration::
switchInstructionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mEnumType,
                                                 const GGS_semanticExpressionForGeneration & in_mSwitchExpression,
                                                 const GGS_switchBranchesForGeneration & in_mBranches,
                                                 Compiler * /* inCompiler */) {
  mProperty_mEnumType = in_mEnumType ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mBranches = in_mBranches ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionForGeneration::GGS_switchInstructionForGeneration (const cPtr_switchInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_switchInstructionForGeneration GGS_switchInstructionForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mEnumType,
                                                                                       const GGS_semanticExpressionForGeneration & in_mSwitchExpression,
                                                                                       const GGS_switchBranchesForGeneration & in_mBranches,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_switchInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_switchInstructionForGeneration (in_mEnumType, in_mSwitchExpression, in_mBranches,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_switchInstructionForGeneration::readProperty_mEnumType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_switchInstructionForGeneration * p = (cPtr_switchInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionForGeneration) ;
    return p->mProperty_mEnumType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_switchInstructionForGeneration::readProperty_mSwitchExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_switchInstructionForGeneration * p = (cPtr_switchInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionForGeneration) ;
    return p->mProperty_mSwitchExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchesForGeneration GGS_switchInstructionForGeneration::readProperty_mBranches (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_switchBranchesForGeneration () ;
  }else{
    cPtr_switchInstructionForGeneration * p = (cPtr_switchInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionForGeneration) ;
    return p->mProperty_mBranches ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @switchInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionForGeneration::cPtr_switchInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mEnumType (),
mProperty_mSwitchExpression (),
mProperty_mBranches () {
}

//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionForGeneration::cPtr_switchInstructionForGeneration (const GGS_unifiedTypeMapEntry & in_mEnumType,
                                                                          const GGS_semanticExpressionForGeneration & in_mSwitchExpression,
                                                                          const GGS_switchBranchesForGeneration & in_mBranches,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mEnumType (),
mProperty_mSwitchExpression (),
mProperty_mBranches () {
  mProperty_mEnumType = in_mEnumType ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mBranches = in_mBranches ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_switchInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionForGeneration ;
}

void cPtr_switchInstructionForGeneration::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@switchInstructionForGeneration:") ;
  mProperty_mEnumType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBranches.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_switchInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_switchInstructionForGeneration (mProperty_mEnumType, mProperty_mSwitchExpression, mProperty_mBranches, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_switchInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mEnumType.printNonNullClassInstanceProperties ("mEnumType") ;
    mProperty_mSwitchExpression.printNonNullClassInstanceProperties ("mSwitchExpression") ;
    mProperty_mBranches.printNonNullClassInstanceProperties ("mBranches") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @switchInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionForGeneration ("switchInstructionForGeneration",
                                                                                   & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionForGeneration GGS_switchInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_switchInstructionForGeneration result ;
  const GGS_switchInstructionForGeneration * p = (const GGS_switchInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_switchInstructionForGeneration_2E_weak::objectCompare (const GGS_switchInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_switchInstructionForGeneration_2E_weak::GGS_switchInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionForGeneration_2E_weak & GGS_switchInstructionForGeneration_2E_weak::operator = (const GGS_switchInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionForGeneration_2E_weak::GGS_switchInstructionForGeneration_2E_weak (const GGS_switchInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_switchInstructionForGeneration_2E_weak GGS_switchInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_switchInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionForGeneration GGS_switchInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_switchInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_switchInstructionForGeneration * p = (cPtr_switchInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_switchInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionForGeneration GGS_switchInstructionForGeneration_2E_weak::bang_switchInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_switchInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_switchInstructionForGeneration) ;
      result = GGS_switchInstructionForGeneration ((cPtr_switchInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @switchInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionForGeneration_2E_weak ("switchInstructionForGeneration.weak",
                                                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionForGeneration_2E_weak GGS_switchInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_switchInstructionForGeneration_2E_weak result ;
  const GGS_switchInstructionForGeneration_2E_weak * p = (const GGS_switchInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_superMethodCallInstructionAST_2E_weak::objectCompare (const GGS_superMethodCallInstructionAST_2E_weak & inOperand) const {
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

GGS_superMethodCallInstructionAST_2E_weak::GGS_superMethodCallInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionAST_2E_weak & GGS_superMethodCallInstructionAST_2E_weak::operator = (const GGS_superMethodCallInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionAST_2E_weak::GGS_superMethodCallInstructionAST_2E_weak (const GGS_superMethodCallInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionAST_2E_weak GGS_superMethodCallInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_superMethodCallInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionAST GGS_superMethodCallInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_superMethodCallInstructionAST result ;
  if (isValid ()) {
    const cPtr_superMethodCallInstructionAST * p = (cPtr_superMethodCallInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_superMethodCallInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionAST GGS_superMethodCallInstructionAST_2E_weak::bang_superMethodCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_superMethodCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_superMethodCallInstructionAST) ;
      result = GGS_superMethodCallInstructionAST ((cPtr_superMethodCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @superMethodCallInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_superMethodCallInstructionAST_2E_weak ("superMethodCallInstructionAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_superMethodCallInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superMethodCallInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_superMethodCallInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_superMethodCallInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionAST_2E_weak GGS_superMethodCallInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_superMethodCallInstructionAST_2E_weak result ;
  const GGS_superMethodCallInstructionAST_2E_weak * p = (const GGS_superMethodCallInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_superMethodCallInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("superMethodCallInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @superMethodCallInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_superMethodCallInstructionForGeneration::objectCompare (const GGS_superMethodCallInstructionForGeneration & inOperand) const {
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

GGS_superMethodCallInstructionForGeneration::GGS_superMethodCallInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_superMethodCallInstructionForGeneration GGS_superMethodCallInstructionForGeneration::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_string & in_mMethodName,
                          const GGS_actualParameterListForGeneration & in_mActualParameterList,
                          const GGS_bool & in_mHasCompilerArgument,
                          const GGS_unifiedTypeMapEntry & in_mBaseType,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_superMethodCallInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_superMethodCallInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->superMethodCallInstructionForGeneration_init_21__21__21__21__21_ (in_mInstructionLocation, in_mMethodName, in_mActualParameterList, in_mHasCompilerArgument, in_mBaseType, inCompiler) ;
  const GGS_superMethodCallInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_superMethodCallInstructionForGeneration::
superMethodCallInstructionForGeneration_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_string & in_mMethodName,
                                                                  const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                  const GGS_bool & in_mHasCompilerArgument,
                                                                  const GGS_unifiedTypeMapEntry & in_mBaseType,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mMethodName = in_mMethodName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  mProperty_mBaseType = in_mBaseType ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionForGeneration::GGS_superMethodCallInstructionForGeneration (const cPtr_superMethodCallInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_superMethodCallInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionForGeneration GGS_superMethodCallInstructionForGeneration::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                         const GGS_string & in_mMethodName,
                                                                                                         const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                                         const GGS_bool & in_mHasCompilerArgument,
                                                                                                         const GGS_unifiedTypeMapEntry & in_mBaseType,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_superMethodCallInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_superMethodCallInstructionForGeneration (in_mInstructionLocation, in_mMethodName, in_mActualParameterList, in_mHasCompilerArgument, in_mBaseType,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_superMethodCallInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_superMethodCallInstructionForGeneration * p = (cPtr_superMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superMethodCallInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_superMethodCallInstructionForGeneration::readProperty_mMethodName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_superMethodCallInstructionForGeneration * p = (cPtr_superMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superMethodCallInstructionForGeneration) ;
    return p->mProperty_mMethodName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_superMethodCallInstructionForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualParameterListForGeneration () ;
  }else{
    cPtr_superMethodCallInstructionForGeneration * p = (cPtr_superMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superMethodCallInstructionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_superMethodCallInstructionForGeneration::readProperty_mHasCompilerArgument (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_superMethodCallInstructionForGeneration * p = (cPtr_superMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superMethodCallInstructionForGeneration) ;
    return p->mProperty_mHasCompilerArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_superMethodCallInstructionForGeneration::readProperty_mBaseType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_superMethodCallInstructionForGeneration * p = (cPtr_superMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superMethodCallInstructionForGeneration) ;
    return p->mProperty_mBaseType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @superMethodCallInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_superMethodCallInstructionForGeneration::cPtr_superMethodCallInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mMethodName (),
mProperty_mActualParameterList (),
mProperty_mHasCompilerArgument (),
mProperty_mBaseType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_superMethodCallInstructionForGeneration::cPtr_superMethodCallInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                            const GGS_string & in_mMethodName,
                                                                                            const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                            const GGS_bool & in_mHasCompilerArgument,
                                                                                            const GGS_unifiedTypeMapEntry & in_mBaseType,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mMethodName (),
mProperty_mActualParameterList (),
mProperty_mHasCompilerArgument (),
mProperty_mBaseType () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mMethodName = in_mMethodName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  mProperty_mBaseType = in_mBaseType ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_superMethodCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superMethodCallInstructionForGeneration ;
}

void cPtr_superMethodCallInstructionForGeneration::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@superMethodCallInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMethodName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBaseType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_superMethodCallInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_superMethodCallInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mMethodName, mProperty_mActualParameterList, mProperty_mHasCompilerArgument, mProperty_mBaseType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_superMethodCallInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mMethodName.printNonNullClassInstanceProperties ("mMethodName") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mHasCompilerArgument.printNonNullClassInstanceProperties ("mHasCompilerArgument") ;
    mProperty_mBaseType.printNonNullClassInstanceProperties ("mBaseType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @superMethodCallInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_superMethodCallInstructionForGeneration ("superMethodCallInstructionForGeneration",
                                                                                            & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_superMethodCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superMethodCallInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_superMethodCallInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_superMethodCallInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionForGeneration GGS_superMethodCallInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_superMethodCallInstructionForGeneration result ;
  const GGS_superMethodCallInstructionForGeneration * p = (const GGS_superMethodCallInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_superMethodCallInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("superMethodCallInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_superMethodCallInstructionForGeneration_2E_weak::objectCompare (const GGS_superMethodCallInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_superMethodCallInstructionForGeneration_2E_weak::GGS_superMethodCallInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionForGeneration_2E_weak & GGS_superMethodCallInstructionForGeneration_2E_weak::operator = (const GGS_superMethodCallInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionForGeneration_2E_weak::GGS_superMethodCallInstructionForGeneration_2E_weak (const GGS_superMethodCallInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionForGeneration_2E_weak GGS_superMethodCallInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_superMethodCallInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionForGeneration GGS_superMethodCallInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_superMethodCallInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_superMethodCallInstructionForGeneration * p = (cPtr_superMethodCallInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_superMethodCallInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionForGeneration GGS_superMethodCallInstructionForGeneration_2E_weak::bang_superMethodCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_superMethodCallInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_superMethodCallInstructionForGeneration) ;
      result = GGS_superMethodCallInstructionForGeneration ((cPtr_superMethodCallInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @superMethodCallInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_superMethodCallInstructionForGeneration_2E_weak ("superMethodCallInstructionForGeneration.weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_superMethodCallInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superMethodCallInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_superMethodCallInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_superMethodCallInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionForGeneration_2E_weak GGS_superMethodCallInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_superMethodCallInstructionForGeneration_2E_weak result ;
  const GGS_superMethodCallInstructionForGeneration_2E_weak * p = (const GGS_superMethodCallInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_superMethodCallInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("superMethodCallInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @loopInstructionWithoutVariantAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loopInstructionWithoutVariantAST::objectCompare (const GGS_loopInstructionWithoutVariantAST & inOperand) const {
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

GGS_loopInstructionWithoutVariantAST::GGS_loopInstructionWithoutVariantAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST GGS_loopInstructionWithoutVariantAST::
init_21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                      const GGS_semanticInstructionListAST & in_mFirstInstructions,
                                      const GGS_location & in_mEndOfFirstInstructions,
                                      const GGS_CommaSeparatedExpressionList & in_mLoopExpression,
                                      const GGS_location & in_mEndOfLoopExpression,
                                      const GGS_semanticInstructionListAST & in_mSecondInstructions,
                                      const GGS_location & in_mEndOfSecondInstructions,
                                      const GGS_location & in_mEndOfLoopInstruction,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_loopInstructionWithoutVariantAST * object = nullptr ;
  macroMyNew (object, cPtr_loopInstructionWithoutVariantAST (inCompiler COMMA_THERE)) ;
  object->loopInstructionWithoutVariantAST_init_21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mFirstInstructions, in_mEndOfFirstInstructions, in_mLoopExpression, in_mEndOfLoopExpression, in_mSecondInstructions, in_mEndOfSecondInstructions, in_mEndOfLoopInstruction, inCompiler) ;
  const GGS_loopInstructionWithoutVariantAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantAST::
loopInstructionWithoutVariantAST_init_21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                       const GGS_semanticInstructionListAST & in_mFirstInstructions,
                                                                       const GGS_location & in_mEndOfFirstInstructions,
                                                                       const GGS_CommaSeparatedExpressionList & in_mLoopExpression,
                                                                       const GGS_location & in_mEndOfLoopExpression,
                                                                       const GGS_semanticInstructionListAST & in_mSecondInstructions,
                                                                       const GGS_location & in_mEndOfSecondInstructions,
                                                                       const GGS_location & in_mEndOfLoopInstruction,
                                                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFirstInstructions = in_mFirstInstructions ;
  mProperty_mEndOfFirstInstructions = in_mEndOfFirstInstructions ;
  mProperty_mLoopExpression = in_mLoopExpression ;
  mProperty_mEndOfLoopExpression = in_mEndOfLoopExpression ;
  mProperty_mSecondInstructions = in_mSecondInstructions ;
  mProperty_mEndOfSecondInstructions = in_mEndOfSecondInstructions ;
  mProperty_mEndOfLoopInstruction = in_mEndOfLoopInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST::GGS_loopInstructionWithoutVariantAST (const cPtr_loopInstructionWithoutVariantAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loopInstructionWithoutVariantAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST GGS_loopInstructionWithoutVariantAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                           const GGS_semanticInstructionListAST & in_mFirstInstructions,
                                                                                           const GGS_location & in_mEndOfFirstInstructions,
                                                                                           const GGS_CommaSeparatedExpressionList & in_mLoopExpression,
                                                                                           const GGS_location & in_mEndOfLoopExpression,
                                                                                           const GGS_semanticInstructionListAST & in_mSecondInstructions,
                                                                                           const GGS_location & in_mEndOfSecondInstructions,
                                                                                           const GGS_location & in_mEndOfLoopInstruction,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithoutVariantAST result ;
  macroMyNew (result.mObjectPtr, cPtr_loopInstructionWithoutVariantAST (in_mInstructionLocation, in_mFirstInstructions, in_mEndOfFirstInstructions, in_mLoopExpression, in_mEndOfLoopExpression, in_mSecondInstructions, in_mEndOfSecondInstructions, in_mEndOfLoopInstruction,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_loopInstructionWithoutVariantAST::readProperty_mFirstInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mFirstInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithoutVariantAST::readProperty_mEndOfFirstInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mEndOfFirstInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList GGS_loopInstructionWithoutVariantAST::readProperty_mLoopExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_CommaSeparatedExpressionList () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mLoopExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithoutVariantAST::readProperty_mEndOfLoopExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mEndOfLoopExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_loopInstructionWithoutVariantAST::readProperty_mSecondInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mSecondInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithoutVariantAST::readProperty_mEndOfSecondInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mEndOfSecondInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithoutVariantAST::readProperty_mEndOfLoopInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mEndOfLoopInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @loopInstructionWithoutVariantAST class
//--------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithoutVariantAST::cPtr_loopInstructionWithoutVariantAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mFirstInstructions (),
mProperty_mEndOfFirstInstructions (),
mProperty_mLoopExpression (),
mProperty_mEndOfLoopExpression (),
mProperty_mSecondInstructions (),
mProperty_mEndOfSecondInstructions (),
mProperty_mEndOfLoopInstruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithoutVariantAST::cPtr_loopInstructionWithoutVariantAST (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_semanticInstructionListAST & in_mFirstInstructions,
                                                                              const GGS_location & in_mEndOfFirstInstructions,
                                                                              const GGS_CommaSeparatedExpressionList & in_mLoopExpression,
                                                                              const GGS_location & in_mEndOfLoopExpression,
                                                                              const GGS_semanticInstructionListAST & in_mSecondInstructions,
                                                                              const GGS_location & in_mEndOfSecondInstructions,
                                                                              const GGS_location & in_mEndOfLoopInstruction,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mFirstInstructions (),
mProperty_mEndOfFirstInstructions (),
mProperty_mLoopExpression (),
mProperty_mEndOfLoopExpression (),
mProperty_mSecondInstructions (),
mProperty_mEndOfSecondInstructions (),
mProperty_mEndOfLoopInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFirstInstructions = in_mFirstInstructions ;
  mProperty_mEndOfFirstInstructions = in_mEndOfFirstInstructions ;
  mProperty_mLoopExpression = in_mLoopExpression ;
  mProperty_mEndOfLoopExpression = in_mEndOfLoopExpression ;
  mProperty_mSecondInstructions = in_mSecondInstructions ;
  mProperty_mEndOfSecondInstructions = in_mEndOfSecondInstructions ;
  mProperty_mEndOfLoopInstruction = in_mEndOfLoopInstruction ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_loopInstructionWithoutVariantAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST ;
}

void cPtr_loopInstructionWithoutVariantAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@loopInstructionWithoutVariantAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFirstInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfFirstInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLoopExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfLoopExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSecondInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfSecondInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfLoopInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_loopInstructionWithoutVariantAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_loopInstructionWithoutVariantAST (mProperty_mInstructionLocation, mProperty_mFirstInstructions, mProperty_mEndOfFirstInstructions, mProperty_mLoopExpression, mProperty_mEndOfLoopExpression, mProperty_mSecondInstructions, mProperty_mEndOfSecondInstructions, mProperty_mEndOfLoopInstruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_loopInstructionWithoutVariantAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mFirstInstructions.printNonNullClassInstanceProperties ("mFirstInstructions") ;
    mProperty_mEndOfFirstInstructions.printNonNullClassInstanceProperties ("mEndOfFirstInstructions") ;
    mProperty_mLoopExpression.printNonNullClassInstanceProperties ("mLoopExpression") ;
    mProperty_mEndOfLoopExpression.printNonNullClassInstanceProperties ("mEndOfLoopExpression") ;
    mProperty_mSecondInstructions.printNonNullClassInstanceProperties ("mSecondInstructions") ;
    mProperty_mEndOfSecondInstructions.printNonNullClassInstanceProperties ("mEndOfSecondInstructions") ;
    mProperty_mEndOfLoopInstruction.printNonNullClassInstanceProperties ("mEndOfLoopInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @loopInstructionWithoutVariantAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST ("loopInstructionWithoutVariantAST",
                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_loopInstructionWithoutVariantAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_loopInstructionWithoutVariantAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_loopInstructionWithoutVariantAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST GGS_loopInstructionWithoutVariantAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithoutVariantAST result ;
  const GGS_loopInstructionWithoutVariantAST * p = (const GGS_loopInstructionWithoutVariantAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_loopInstructionWithoutVariantAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithoutVariantAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loopInstructionWithoutVariantAST_2E_weak::objectCompare (const GGS_loopInstructionWithoutVariantAST_2E_weak & inOperand) const {
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

GGS_loopInstructionWithoutVariantAST_2E_weak::GGS_loopInstructionWithoutVariantAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST_2E_weak & GGS_loopInstructionWithoutVariantAST_2E_weak::operator = (const GGS_loopInstructionWithoutVariantAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST_2E_weak::GGS_loopInstructionWithoutVariantAST_2E_weak (const GGS_loopInstructionWithoutVariantAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST_2E_weak GGS_loopInstructionWithoutVariantAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_loopInstructionWithoutVariantAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST GGS_loopInstructionWithoutVariantAST_2E_weak::unwrappedValue (void) const {
  GGS_loopInstructionWithoutVariantAST result ;
  if (isValid ()) {
    const cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_loopInstructionWithoutVariantAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST GGS_loopInstructionWithoutVariantAST_2E_weak::bang_loopInstructionWithoutVariantAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_loopInstructionWithoutVariantAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_loopInstructionWithoutVariantAST) ;
      result = GGS_loopInstructionWithoutVariantAST ((cPtr_loopInstructionWithoutVariantAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @loopInstructionWithoutVariantAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST_2E_weak ("loopInstructionWithoutVariantAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_loopInstructionWithoutVariantAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_loopInstructionWithoutVariantAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_loopInstructionWithoutVariantAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST_2E_weak GGS_loopInstructionWithoutVariantAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithoutVariantAST_2E_weak result ;
  const GGS_loopInstructionWithoutVariantAST_2E_weak * p = (const GGS_loopInstructionWithoutVariantAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_loopInstructionWithoutVariantAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithoutVariantAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @loopInstructionWithoutVariantForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loopInstructionWithoutVariantForGeneration::objectCompare (const GGS_loopInstructionWithoutVariantForGeneration & inOperand) const {
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

GGS_loopInstructionWithoutVariantForGeneration::GGS_loopInstructionWithoutVariantForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration GGS_loopInstructionWithoutVariantForGeneration::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_semanticInstructionListForGeneration & in_mFirstInstructions,
                      const GGS_ifTestListForGeneration & in_mLoopExpression,
                      const GGS_semanticInstructionListForGeneration & in_mSecondInstructions,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_loopInstructionWithoutVariantForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_loopInstructionWithoutVariantForGeneration (inCompiler COMMA_THERE)) ;
  object->loopInstructionWithoutVariantForGeneration_init_21__21__21__21_ (in_mInstructionLocation, in_mFirstInstructions, in_mLoopExpression, in_mSecondInstructions, inCompiler) ;
  const GGS_loopInstructionWithoutVariantForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantForGeneration::
loopInstructionWithoutVariantForGeneration_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                 const GGS_semanticInstructionListForGeneration & in_mFirstInstructions,
                                                                 const GGS_ifTestListForGeneration & in_mLoopExpression,
                                                                 const GGS_semanticInstructionListForGeneration & in_mSecondInstructions,
                                                                 Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFirstInstructions = in_mFirstInstructions ;
  mProperty_mLoopExpression = in_mLoopExpression ;
  mProperty_mSecondInstructions = in_mSecondInstructions ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration::GGS_loopInstructionWithoutVariantForGeneration (const cPtr_loopInstructionWithoutVariantForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loopInstructionWithoutVariantForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration GGS_loopInstructionWithoutVariantForGeneration::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                               const GGS_semanticInstructionListForGeneration & in_mFirstInstructions,
                                                                                                               const GGS_ifTestListForGeneration & in_mLoopExpression,
                                                                                                               const GGS_semanticInstructionListForGeneration & in_mSecondInstructions,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithoutVariantForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_loopInstructionWithoutVariantForGeneration (in_mInstructionLocation, in_mFirstInstructions, in_mLoopExpression, in_mSecondInstructions,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithoutVariantForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithoutVariantForGeneration * p = (cPtr_loopInstructionWithoutVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_loopInstructionWithoutVariantForGeneration::readProperty_mFirstInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_loopInstructionWithoutVariantForGeneration * p = (cPtr_loopInstructionWithoutVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantForGeneration) ;
    return p->mProperty_mFirstInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestListForGeneration GGS_loopInstructionWithoutVariantForGeneration::readProperty_mLoopExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ifTestListForGeneration () ;
  }else{
    cPtr_loopInstructionWithoutVariantForGeneration * p = (cPtr_loopInstructionWithoutVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantForGeneration) ;
    return p->mProperty_mLoopExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_loopInstructionWithoutVariantForGeneration::readProperty_mSecondInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_loopInstructionWithoutVariantForGeneration * p = (cPtr_loopInstructionWithoutVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantForGeneration) ;
    return p->mProperty_mSecondInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @loopInstructionWithoutVariantForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithoutVariantForGeneration::cPtr_loopInstructionWithoutVariantForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mFirstInstructions (),
mProperty_mLoopExpression (),
mProperty_mSecondInstructions () {
}

//--------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithoutVariantForGeneration::cPtr_loopInstructionWithoutVariantForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                                  const GGS_semanticInstructionListForGeneration & in_mFirstInstructions,
                                                                                                  const GGS_ifTestListForGeneration & in_mLoopExpression,
                                                                                                  const GGS_semanticInstructionListForGeneration & in_mSecondInstructions,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mFirstInstructions (),
mProperty_mLoopExpression (),
mProperty_mSecondInstructions () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFirstInstructions = in_mFirstInstructions ;
  mProperty_mLoopExpression = in_mLoopExpression ;
  mProperty_mSecondInstructions = in_mSecondInstructions ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_loopInstructionWithoutVariantForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration ;
}

void cPtr_loopInstructionWithoutVariantForGeneration::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@loopInstructionWithoutVariantForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFirstInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLoopExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSecondInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_loopInstructionWithoutVariantForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_loopInstructionWithoutVariantForGeneration (mProperty_mInstructionLocation, mProperty_mFirstInstructions, mProperty_mLoopExpression, mProperty_mSecondInstructions, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_loopInstructionWithoutVariantForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mFirstInstructions.printNonNullClassInstanceProperties ("mFirstInstructions") ;
    mProperty_mLoopExpression.printNonNullClassInstanceProperties ("mLoopExpression") ;
    mProperty_mSecondInstructions.printNonNullClassInstanceProperties ("mSecondInstructions") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @loopInstructionWithoutVariantForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration ("loopInstructionWithoutVariantForGeneration",
                                                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_loopInstructionWithoutVariantForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_loopInstructionWithoutVariantForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_loopInstructionWithoutVariantForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration GGS_loopInstructionWithoutVariantForGeneration::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithoutVariantForGeneration result ;
  const GGS_loopInstructionWithoutVariantForGeneration * p = (const GGS_loopInstructionWithoutVariantForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_loopInstructionWithoutVariantForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithoutVariantForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loopInstructionWithoutVariantForGeneration_2E_weak::objectCompare (const GGS_loopInstructionWithoutVariantForGeneration_2E_weak & inOperand) const {
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

GGS_loopInstructionWithoutVariantForGeneration_2E_weak::GGS_loopInstructionWithoutVariantForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration_2E_weak & GGS_loopInstructionWithoutVariantForGeneration_2E_weak::operator = (const GGS_loopInstructionWithoutVariantForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration_2E_weak::GGS_loopInstructionWithoutVariantForGeneration_2E_weak (const GGS_loopInstructionWithoutVariantForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration_2E_weak GGS_loopInstructionWithoutVariantForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_loopInstructionWithoutVariantForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration GGS_loopInstructionWithoutVariantForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_loopInstructionWithoutVariantForGeneration result ;
  if (isValid ()) {
    const cPtr_loopInstructionWithoutVariantForGeneration * p = (cPtr_loopInstructionWithoutVariantForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_loopInstructionWithoutVariantForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration GGS_loopInstructionWithoutVariantForGeneration_2E_weak::bang_loopInstructionWithoutVariantForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_loopInstructionWithoutVariantForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_loopInstructionWithoutVariantForGeneration) ;
      result = GGS_loopInstructionWithoutVariantForGeneration ((cPtr_loopInstructionWithoutVariantForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @loopInstructionWithoutVariantForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration_2E_weak ("loopInstructionWithoutVariantForGeneration.weak",
                                                                                                       & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_loopInstructionWithoutVariantForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_loopInstructionWithoutVariantForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_loopInstructionWithoutVariantForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantForGeneration_2E_weak GGS_loopInstructionWithoutVariantForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithoutVariantForGeneration_2E_weak result ;
  const GGS_loopInstructionWithoutVariantForGeneration_2E_weak * p = (const GGS_loopInstructionWithoutVariantForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_loopInstructionWithoutVariantForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithoutVariantForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeMethodCallInstructionAST_2E_weak::objectCompare (const GGS_typeMethodCallInstructionAST_2E_weak & inOperand) const {
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

GGS_typeMethodCallInstructionAST_2E_weak::GGS_typeMethodCallInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionAST_2E_weak & GGS_typeMethodCallInstructionAST_2E_weak::operator = (const GGS_typeMethodCallInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionAST_2E_weak::GGS_typeMethodCallInstructionAST_2E_weak (const GGS_typeMethodCallInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionAST_2E_weak GGS_typeMethodCallInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_typeMethodCallInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionAST GGS_typeMethodCallInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_typeMethodCallInstructionAST result ;
  if (isValid ()) {
    const cPtr_typeMethodCallInstructionAST * p = (cPtr_typeMethodCallInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_typeMethodCallInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionAST GGS_typeMethodCallInstructionAST_2E_weak::bang_typeMethodCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_typeMethodCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typeMethodCallInstructionAST) ;
      result = GGS_typeMethodCallInstructionAST ((cPtr_typeMethodCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @typeMethodCallInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionAST_2E_weak ("typeMethodCallInstructionAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeMethodCallInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMethodCallInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeMethodCallInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeMethodCallInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionAST_2E_weak GGS_typeMethodCallInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_typeMethodCallInstructionAST_2E_weak result ;
  const GGS_typeMethodCallInstructionAST_2E_weak * p = (const GGS_typeMethodCallInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeMethodCallInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeMethodCallInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeMethodCallInstructionForGeneration_2E_weak::objectCompare (const GGS_typeMethodCallInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_typeMethodCallInstructionForGeneration_2E_weak::GGS_typeMethodCallInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionForGeneration_2E_weak & GGS_typeMethodCallInstructionForGeneration_2E_weak::operator = (const GGS_typeMethodCallInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionForGeneration_2E_weak::GGS_typeMethodCallInstructionForGeneration_2E_weak (const GGS_typeMethodCallInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionForGeneration_2E_weak GGS_typeMethodCallInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_typeMethodCallInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionForGeneration GGS_typeMethodCallInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_typeMethodCallInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_typeMethodCallInstructionForGeneration * p = (cPtr_typeMethodCallInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_typeMethodCallInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionForGeneration GGS_typeMethodCallInstructionForGeneration_2E_weak::bang_typeMethodCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_typeMethodCallInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typeMethodCallInstructionForGeneration) ;
      result = GGS_typeMethodCallInstructionForGeneration ((cPtr_typeMethodCallInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @typeMethodCallInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration_2E_weak ("typeMethodCallInstructionForGeneration.weak",
                                                                                                   & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeMethodCallInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeMethodCallInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeMethodCallInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionForGeneration_2E_weak GGS_typeMethodCallInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_typeMethodCallInstructionForGeneration_2E_weak result ;
  const GGS_typeMethodCallInstructionForGeneration_2E_weak * p = (const GGS_typeMethodCallInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeMethodCallInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeMethodCallInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum fixitElementAST
//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST::GGS_fixitElementAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST GGS_fixitElementAST::class_func_fixItRemove (UNUSED_LOCATION_ARGS) {
  GGS_fixitElementAST result ;
  result.mEnum = Enumeration::enum_fixItRemove ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST GGS_fixitElementAST::class_func_fixItReplace (const GGS_semanticExpressionAST & inAssociatedValue0,
                                                                  const GGS_location & inAssociatedValue1
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementAST result ;
  result.mEnum = Enumeration::enum_fixItReplace ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_fixitElementAST_2E_fixItReplace (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST GGS_fixitElementAST::class_func_fixItInsertAfter (const GGS_semanticExpressionAST & inAssociatedValue0,
                                                                      const GGS_location & inAssociatedValue1
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementAST result ;
  result.mEnum = Enumeration::enum_fixItInsertAfter ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_fixitElementAST_2E_fixItInsertAfter (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST GGS_fixitElementAST::class_func_fixItInsertBefore (const GGS_semanticExpressionAST & inAssociatedValue0,
                                                                       const GGS_location & inAssociatedValue1
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementAST result ;
  result.mEnum = Enumeration::enum_fixItInsertBefore ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_fixitElementAST_2E_fixItInsertBefore (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST::method_extractFixItReplace (GGS_semanticExpressionAST & outAssociatedValue_exp,
                                                      GGS_location & outAssociatedValue_errorLocation,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fixItReplace) {
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_errorLocation.drop () ;
    String s ;
    s.appendCString ("method @fixitElementAST.fixItReplace invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_fixitElementAST_2E_fixItReplace *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_errorLocation = ptr->mProperty_errorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST::method_extractFixItInsertAfter (GGS_semanticExpressionAST & outAssociatedValue_exp,
                                                          GGS_location & outAssociatedValue_errorLocation,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fixItInsertAfter) {
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_errorLocation.drop () ;
    String s ;
    s.appendCString ("method @fixitElementAST.fixItInsertAfter invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_fixitElementAST_2E_fixItInsertAfter *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_errorLocation = ptr->mProperty_errorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST::method_extractFixItInsertBefore (GGS_semanticExpressionAST & outAssociatedValue_exp,
                                                           GGS_location & outAssociatedValue_errorLocation,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fixItInsertBefore) {
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_errorLocation.drop () ;
    String s ;
    s.appendCString ("method @fixitElementAST.fixItInsertBefore invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_fixitElementAST_2E_fixItInsertBefore *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_errorLocation = ptr->mProperty_errorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace_3F_ GGS_fixitElementAST::getter_getFixItReplace (UNUSED_LOCATION_ARGS) const {
  GGS_fixitElementAST_2E_fixItReplace_3F_ result ;
  if (mEnum == Enumeration::enum_fixItReplace) {
    const auto ptr = (const GGS_fixitElementAST_2E_fixItReplace *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_fixitElementAST_2E_fixItReplace (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST::getAssociatedValuesFor_fixItReplace (GGS_semanticExpressionAST & out_exp,
                                                               GGS_location & out_errorLocation) const {
  const auto ptr = (const GGS_fixitElementAST_2E_fixItReplace *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
  out_errorLocation = ptr->mProperty_errorLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter_3F_ GGS_fixitElementAST::getter_getFixItInsertAfter (UNUSED_LOCATION_ARGS) const {
  GGS_fixitElementAST_2E_fixItInsertAfter_3F_ result ;
  if (mEnum == Enumeration::enum_fixItInsertAfter) {
    const auto ptr = (const GGS_fixitElementAST_2E_fixItInsertAfter *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_fixitElementAST_2E_fixItInsertAfter (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST::getAssociatedValuesFor_fixItInsertAfter (GGS_semanticExpressionAST & out_exp,
                                                                   GGS_location & out_errorLocation) const {
  const auto ptr = (const GGS_fixitElementAST_2E_fixItInsertAfter *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
  out_errorLocation = ptr->mProperty_errorLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore_3F_ GGS_fixitElementAST::getter_getFixItInsertBefore (UNUSED_LOCATION_ARGS) const {
  GGS_fixitElementAST_2E_fixItInsertBefore_3F_ result ;
  if (mEnum == Enumeration::enum_fixItInsertBefore) {
    const auto ptr = (const GGS_fixitElementAST_2E_fixItInsertBefore *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_fixitElementAST_2E_fixItInsertBefore (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST::getAssociatedValuesFor_fixItInsertBefore (GGS_semanticExpressionAST & out_exp,
                                                                    GGS_location & out_errorLocation) const {
  const auto ptr = (const GGS_fixitElementAST_2E_fixItInsertBefore *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
  out_errorLocation = ptr->mProperty_errorLocation ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_fixitElementAST [5] = {
  "(not built)",
  "fixItRemove",
  "fixItReplace",
  "fixItInsertAfter",
  "fixItInsertBefore"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_fixitElementAST::getter_isFixItRemove (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fixItRemove == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_fixitElementAST::getter_isFixItReplace (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fixItReplace == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_fixitElementAST::getter_isFixItInsertAfter (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fixItInsertAfter == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_fixitElementAST::getter_isFixItInsertBefore (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fixItInsertBefore == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<enum @fixitElementAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_fixitElementAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @fixitElementAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementAST ("fixitElementAST",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST GGS_fixitElementAST::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_fixitElementAST result ;
  const GGS_fixitElementAST * p = (const GGS_fixitElementAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @errorInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_errorInstructionAST::objectCompare (const GGS_errorInstructionAST & inOperand) const {
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

GGS_errorInstructionAST::GGS_errorInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_errorInstructionAST GGS_errorInstructionAST::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_semanticExpressionAST & in_mLocationExpression,
                          const GGS_semanticExpressionAST & in_mMessageExpression,
                          const GGS_lstringlist & in_mBuiltVariableList,
                          const GGS_fixitListAST & in_mFixitListAST,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_errorInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_errorInstructionAST (inCompiler COMMA_THERE)) ;
  object->errorInstructionAST_init_21__21__21__21__21_ (in_mInstructionLocation, in_mLocationExpression, in_mMessageExpression, in_mBuiltVariableList, in_mFixitListAST, inCompiler) ;
  const GGS_errorInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_errorInstructionAST::
errorInstructionAST_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                              const GGS_semanticExpressionAST & in_mLocationExpression,
                                              const GGS_semanticExpressionAST & in_mMessageExpression,
                                              const GGS_lstringlist & in_mBuiltVariableList,
                                              const GGS_fixitListAST & in_mFixitListAST,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLocationExpression = in_mLocationExpression ;
  mProperty_mMessageExpression = in_mMessageExpression ;
  mProperty_mBuiltVariableList = in_mBuiltVariableList ;
  mProperty_mFixitListAST = in_mFixitListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionAST::GGS_errorInstructionAST (const cPtr_errorInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_errorInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_errorInstructionAST GGS_errorInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                 const GGS_semanticExpressionAST & in_mLocationExpression,
                                                                 const GGS_semanticExpressionAST & in_mMessageExpression,
                                                                 const GGS_lstringlist & in_mBuiltVariableList,
                                                                 const GGS_fixitListAST & in_mFixitListAST,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_errorInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_errorInstructionAST (in_mInstructionLocation, in_mLocationExpression, in_mMessageExpression, in_mBuiltVariableList, in_mFixitListAST,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_errorInstructionAST::readProperty_mLocationExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_errorInstructionAST * p = (cPtr_errorInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionAST) ;
    return p->mProperty_mLocationExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_errorInstructionAST::readProperty_mMessageExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_errorInstructionAST * p = (cPtr_errorInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionAST) ;
    return p->mProperty_mMessageExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_errorInstructionAST::readProperty_mBuiltVariableList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_errorInstructionAST * p = (cPtr_errorInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionAST) ;
    return p->mProperty_mBuiltVariableList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST GGS_errorInstructionAST::readProperty_mFixitListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_fixitListAST () ;
  }else{
    cPtr_errorInstructionAST * p = (cPtr_errorInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionAST) ;
    return p->mProperty_mFixitListAST ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @errorInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_errorInstructionAST::cPtr_errorInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mLocationExpression (),
mProperty_mMessageExpression (),
mProperty_mBuiltVariableList (),
mProperty_mFixitListAST () {
}

//--------------------------------------------------------------------------------------------------

cPtr_errorInstructionAST::cPtr_errorInstructionAST (const GGS_location & in_mInstructionLocation,
                                                    const GGS_semanticExpressionAST & in_mLocationExpression,
                                                    const GGS_semanticExpressionAST & in_mMessageExpression,
                                                    const GGS_lstringlist & in_mBuiltVariableList,
                                                    const GGS_fixitListAST & in_mFixitListAST,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mLocationExpression (),
mProperty_mMessageExpression (),
mProperty_mBuiltVariableList (),
mProperty_mFixitListAST () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLocationExpression = in_mLocationExpression ;
  mProperty_mMessageExpression = in_mMessageExpression ;
  mProperty_mBuiltVariableList = in_mBuiltVariableList ;
  mProperty_mFixitListAST = in_mFixitListAST ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_errorInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionAST ;
}

void cPtr_errorInstructionAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@errorInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocationExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMessageExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBuiltVariableList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFixitListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_errorInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_errorInstructionAST (mProperty_mInstructionLocation, mProperty_mLocationExpression, mProperty_mMessageExpression, mProperty_mBuiltVariableList, mProperty_mFixitListAST, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_errorInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLocationExpression.printNonNullClassInstanceProperties ("mLocationExpression") ;
    mProperty_mMessageExpression.printNonNullClassInstanceProperties ("mMessageExpression") ;
    mProperty_mBuiltVariableList.printNonNullClassInstanceProperties ("mBuiltVariableList") ;
    mProperty_mFixitListAST.printNonNullClassInstanceProperties ("mFixitListAST") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @errorInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_errorInstructionAST ("errorInstructionAST",
                                                                        & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_errorInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_errorInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_errorInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionAST GGS_errorInstructionAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_errorInstructionAST result ;
  const GGS_errorInstructionAST * p = (const GGS_errorInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_errorInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("errorInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_errorInstructionAST_2E_weak::objectCompare (const GGS_errorInstructionAST_2E_weak & inOperand) const {
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

GGS_errorInstructionAST_2E_weak::GGS_errorInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionAST_2E_weak & GGS_errorInstructionAST_2E_weak::operator = (const GGS_errorInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionAST_2E_weak::GGS_errorInstructionAST_2E_weak (const GGS_errorInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_errorInstructionAST_2E_weak GGS_errorInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_errorInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionAST GGS_errorInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_errorInstructionAST result ;
  if (isValid ()) {
    const cPtr_errorInstructionAST * p = (cPtr_errorInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_errorInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionAST GGS_errorInstructionAST_2E_weak::bang_errorInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_errorInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_errorInstructionAST) ;
      result = GGS_errorInstructionAST ((cPtr_errorInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @errorInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_errorInstructionAST_2E_weak ("errorInstructionAST.weak",
                                                                                & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_errorInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_errorInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_errorInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionAST_2E_weak GGS_errorInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_errorInstructionAST_2E_weak result ;
  const GGS_errorInstructionAST_2E_weak * p = (const GGS_errorInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_errorInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("errorInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@fixitListAST enterFixItListInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterFixItListInSemanticContext (const GGS_fixitListAST inObject,
                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_fixitListAST temp_0 = inObject ;
  UpEnumerator_fixitListAST enumerator_8096 (temp_0) ;
  while (enumerator_8096.hasCurrentObject ()) {
    switch (enumerator_8096.current_mElement (HERE).enumValue ()) {
    case GGS_fixitElementAST::Enumeration::invalid:
      break ;
    case GGS_fixitElementAST::Enumeration::enum_fixItRemove:
      break ;
    case GGS_fixitElementAST::Enumeration::enum_fixItReplace:
      {
        GGS_semanticExpressionAST extractedValue_8204_exp_0 ;
        GGS_location extractedValue_8208__1 ;
        enumerator_8096.current_mElement (HERE).getAssociatedValuesFor_fixItReplace (extractedValue_8204_exp_0, extractedValue_8208__1) ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_8204_exp_0.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 222)) ;
      }
      break ;
    case GGS_fixitElementAST::Enumeration::enum_fixItInsertBefore:
      {
        GGS_semanticExpressionAST extractedValue_8321_exp_0 ;
        GGS_location extractedValue_8325__1 ;
        enumerator_8096.current_mElement (HERE).getAssociatedValuesFor_fixItInsertBefore (extractedValue_8321_exp_0, extractedValue_8325__1) ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_8321_exp_0.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 224)) ;
      }
      break ;
    case GGS_fixitElementAST::Enumeration::enum_fixItInsertAfter:
      {
        GGS_semanticExpressionAST extractedValue_8437_exp_0 ;
        GGS_location extractedValue_8441__1 ;
        enumerator_8096.current_mElement (HERE).getAssociatedValuesFor_fixItInsertAfter (extractedValue_8437_exp_0, extractedValue_8441__1) ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_8437_exp_0.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 226)) ;
      }
      break ;
    }
    enumerator_8096.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//  Enum fixitElementForGeneration
//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration::GGS_fixitElementForGeneration (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration GGS_fixitElementForGeneration::class_func_fixItRemove (UNUSED_LOCATION_ARGS) {
  GGS_fixitElementForGeneration result ;
  result.mEnum = Enumeration::enum_fixItRemove ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration GGS_fixitElementForGeneration::class_func_fixItReplace (const GGS_semanticExpressionForGeneration & inAssociatedValue0
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementForGeneration result ;
  result.mEnum = Enumeration::enum_fixItReplace ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_fixitElementForGeneration_2E_fixItReplace (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration GGS_fixitElementForGeneration::class_func_fixItInsertBefore (const GGS_semanticExpressionForGeneration & inAssociatedValue0
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementForGeneration result ;
  result.mEnum = Enumeration::enum_fixItInsertBefore ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_fixitElementForGeneration_2E_fixItInsertBefore (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration GGS_fixitElementForGeneration::class_func_fixItInsertAfter (const GGS_semanticExpressionForGeneration & inAssociatedValue0
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementForGeneration result ;
  result.mEnum = Enumeration::enum_fixItInsertAfter ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_fixitElementForGeneration_2E_fixItInsertAfter (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration::method_extractFixItReplace (GGS_semanticExpressionForGeneration & outAssociatedValue_exp,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fixItReplace) {
    outAssociatedValue_exp.drop () ;
    String s ;
    s.appendCString ("method @fixitElementForGeneration.fixItReplace invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_fixitElementForGeneration_2E_fixItReplace *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration::method_extractFixItInsertBefore (GGS_semanticExpressionForGeneration & outAssociatedValue_exp,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fixItInsertBefore) {
    outAssociatedValue_exp.drop () ;
    String s ;
    s.appendCString ("method @fixitElementForGeneration.fixItInsertBefore invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_fixitElementForGeneration_2E_fixItInsertBefore *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration::method_extractFixItInsertAfter (GGS_semanticExpressionForGeneration & outAssociatedValue_exp,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fixItInsertAfter) {
    outAssociatedValue_exp.drop () ;
    String s ;
    s.appendCString ("method @fixitElementForGeneration.fixItInsertAfter invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_fixitElementForGeneration_2E_fixItInsertAfter *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace_3F_ GGS_fixitElementForGeneration::getter_getFixItReplace (UNUSED_LOCATION_ARGS) const {
  GGS_fixitElementForGeneration_2E_fixItReplace_3F_ result ;
  if (mEnum == Enumeration::enum_fixItReplace) {
    const auto ptr = (const GGS_fixitElementForGeneration_2E_fixItReplace *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_fixitElementForGeneration_2E_fixItReplace (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration::getAssociatedValuesFor_fixItReplace (GGS_semanticExpressionForGeneration & out_exp) const {
  const auto ptr = (const GGS_fixitElementForGeneration_2E_fixItReplace *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ GGS_fixitElementForGeneration::getter_getFixItInsertBefore (UNUSED_LOCATION_ARGS) const {
  GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ result ;
  if (mEnum == Enumeration::enum_fixItInsertBefore) {
    const auto ptr = (const GGS_fixitElementForGeneration_2E_fixItInsertBefore *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_fixitElementForGeneration_2E_fixItInsertBefore (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration::getAssociatedValuesFor_fixItInsertBefore (GGS_semanticExpressionForGeneration & out_exp) const {
  const auto ptr = (const GGS_fixitElementForGeneration_2E_fixItInsertBefore *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ GGS_fixitElementForGeneration::getter_getFixItInsertAfter (UNUSED_LOCATION_ARGS) const {
  GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ result ;
  if (mEnum == Enumeration::enum_fixItInsertAfter) {
    const auto ptr = (const GGS_fixitElementForGeneration_2E_fixItInsertAfter *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_fixitElementForGeneration_2E_fixItInsertAfter (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration::getAssociatedValuesFor_fixItInsertAfter (GGS_semanticExpressionForGeneration & out_exp) const {
  const auto ptr = (const GGS_fixitElementForGeneration_2E_fixItInsertAfter *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_fixitElementForGeneration [5] = {
  "(not built)",
  "fixItRemove",
  "fixItReplace",
  "fixItInsertBefore",
  "fixItInsertAfter"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_fixitElementForGeneration::getter_isFixItRemove (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fixItRemove == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_fixitElementForGeneration::getter_isFixItReplace (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fixItReplace == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_fixitElementForGeneration::getter_isFixItInsertBefore (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fixItInsertBefore == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_fixitElementForGeneration::getter_isFixItInsertAfter (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fixItInsertAfter == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<enum @fixitElementForGeneration: ") ;
  ioString.appendCString (gEnumNameArrayFor_fixitElementForGeneration [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @fixitElementForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration ("fixitElementForGeneration",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration GGS_fixitElementForGeneration::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_fixitElementForGeneration result ;
  const GGS_fixitElementForGeneration * p = (const GGS_fixitElementForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@fixitListForGeneration generateFixIt'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateFixIt (const GGS_fixitListForGeneration inObject,
                                    GGS_stringset & ioArgument_ioInclusionSet,
                                    GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                    GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                    const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                    GGS_string & ioArgument_ioGeneratedCode,
                                    GGS_string & outArgument_outFixItArrayCppName,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFixItArrayCppName.drop () ; // Release 'out' argument
  outArgument_outFixItArrayCppName = GGS_string ("fixItArray").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-error.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 416)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 417)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GenericArray <FixItDescription> ").add_operation (outArgument_outFixItArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 418)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 418)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 418)) ;
  const GGS_fixitListForGeneration temp_0 = inObject ;
  UpEnumerator_fixitListForGeneration enumerator_16235 (temp_0) ;
  while (enumerator_16235.hasCurrentObject ()) {
    switch (enumerator_16235.current_mElement (HERE).enumValue ()) {
    case GGS_fixitElementForGeneration::Enumeration::invalid:
      break ;
    case GGS_fixitElementForGeneration::Enumeration::enum_fixItRemove:
      {
        ioArgument_ioGeneratedCode.plusAssignOperation(outArgument_outFixItArrayCppName.add_operation (GGS_string (".appendObject (FixItDescription (EnumFixItKind::fixItRemove, \"\")) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 422)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 422)) ;
      }
      break ;
    case GGS_fixitElementForGeneration::Enumeration::enum_fixItReplace:
      {
        GGS_semanticExpressionForGeneration extractedValue_16477_exp_0 ;
        enumerator_16235.current_mElement (HERE).getAssociatedValuesFor_fixItReplace (extractedValue_16477_exp_0) ;
        GGS_string var_receiverCppVarName_16650 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_16477_exp_0.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_16650, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 424)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("appendFixItActions (").add_operation (outArgument_outFixItArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 431)).add_operation (GGS_string (", EnumFixItKind::fixItReplace, "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 431)).add_operation (var_receiverCppVarName_16650, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 431)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 431)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 431)) ;
      }
      break ;
    case GGS_fixitElementForGeneration::Enumeration::enum_fixItInsertBefore:
      {
        GGS_semanticExpressionForGeneration extractedValue_16876_exp_0 ;
        enumerator_16235.current_mElement (HERE).getAssociatedValuesFor_fixItInsertBefore (extractedValue_16876_exp_0) ;
        GGS_string var_receiverCppVarName_17049 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_16876_exp_0.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_17049, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 433)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("appendFixItActions (").add_operation (outArgument_outFixItArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 440)).add_operation (GGS_string (", EnumFixItKind::fixItInsertBefore, "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 440)).add_operation (var_receiverCppVarName_17049, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 440)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 440)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 440)) ;
      }
      break ;
    case GGS_fixitElementForGeneration::Enumeration::enum_fixItInsertAfter:
      {
        GGS_semanticExpressionForGeneration extractedValue_17279_exp_0 ;
        enumerator_16235.current_mElement (HERE).getAssociatedValuesFor_fixItInsertAfter (extractedValue_17279_exp_0) ;
        GGS_string var_receiverCppVarName_17452 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_17279_exp_0.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_17452, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 442)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("appendFixItActions (").add_operation (outArgument_outFixItArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 449)).add_operation (GGS_string (", EnumFixItKind::fixItInsertAfter, "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 449)).add_operation (var_receiverCppVarName_17452, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 449)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 449)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 449)) ;
      }
      break ;
    }
    enumerator_16235.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
// @errorInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_errorInstructionForGeneration::objectCompare (const GGS_errorInstructionForGeneration & inOperand) const {
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

GGS_errorInstructionForGeneration::GGS_errorInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_errorInstructionForGeneration GGS_errorInstructionForGeneration::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                          const GGS_semanticExpressionForGeneration & in_mErrorExpression,
                          const GGS_stringlist & in_mBuiltVariableCppNameList,
                          const GGS_fixitListForGeneration & in_mFixitListForGeneration,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_errorInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_errorInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->errorInstructionForGeneration_init_21__21__21__21__21_ (in_mInstructionLocation, in_mReceiverExpression, in_mErrorExpression, in_mBuiltVariableCppNameList, in_mFixitListForGeneration, inCompiler) ;
  const GGS_errorInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_errorInstructionForGeneration::
errorInstructionForGeneration_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                        const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                        const GGS_semanticExpressionForGeneration & in_mErrorExpression,
                                                        const GGS_stringlist & in_mBuiltVariableCppNameList,
                                                        const GGS_fixitListForGeneration & in_mFixitListForGeneration,
                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mErrorExpression = in_mErrorExpression ;
  mProperty_mBuiltVariableCppNameList = in_mBuiltVariableCppNameList ;
  mProperty_mFixitListForGeneration = in_mFixitListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionForGeneration::GGS_errorInstructionForGeneration (const cPtr_errorInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_errorInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_errorInstructionForGeneration GGS_errorInstructionForGeneration::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                     const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                     const GGS_semanticExpressionForGeneration & in_mErrorExpression,
                                                                                     const GGS_stringlist & in_mBuiltVariableCppNameList,
                                                                                     const GGS_fixitListForGeneration & in_mFixitListForGeneration,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_errorInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_errorInstructionForGeneration (in_mInstructionLocation, in_mReceiverExpression, in_mErrorExpression, in_mBuiltVariableCppNameList, in_mFixitListForGeneration,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_errorInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_errorInstructionForGeneration::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_errorInstructionForGeneration::readProperty_mErrorExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    return p->mProperty_mErrorExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_errorInstructionForGeneration::readProperty_mBuiltVariableCppNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringlist () ;
  }else{
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    return p->mProperty_mBuiltVariableCppNameList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration GGS_errorInstructionForGeneration::readProperty_mFixitListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_fixitListForGeneration () ;
  }else{
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    return p->mProperty_mFixitListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @errorInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_errorInstructionForGeneration::cPtr_errorInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mReceiverExpression (),
mProperty_mErrorExpression (),
mProperty_mBuiltVariableCppNameList (),
mProperty_mFixitListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

cPtr_errorInstructionForGeneration::cPtr_errorInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                        const GGS_semanticExpressionForGeneration & in_mErrorExpression,
                                                                        const GGS_stringlist & in_mBuiltVariableCppNameList,
                                                                        const GGS_fixitListForGeneration & in_mFixitListForGeneration,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mReceiverExpression (),
mProperty_mErrorExpression (),
mProperty_mBuiltVariableCppNameList (),
mProperty_mFixitListForGeneration () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mErrorExpression = in_mErrorExpression ;
  mProperty_mBuiltVariableCppNameList = in_mBuiltVariableCppNameList ;
  mProperty_mFixitListForGeneration = in_mFixitListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_errorInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionForGeneration ;
}

void cPtr_errorInstructionForGeneration::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@errorInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mErrorExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBuiltVariableCppNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFixitListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_errorInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_errorInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverExpression, mProperty_mErrorExpression, mProperty_mBuiltVariableCppNameList, mProperty_mFixitListForGeneration, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_errorInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mErrorExpression.printNonNullClassInstanceProperties ("mErrorExpression") ;
    mProperty_mBuiltVariableCppNameList.printNonNullClassInstanceProperties ("mBuiltVariableCppNameList") ;
    mProperty_mFixitListForGeneration.printNonNullClassInstanceProperties ("mFixitListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @errorInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_errorInstructionForGeneration ("errorInstructionForGeneration",
                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_errorInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_errorInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_errorInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionForGeneration GGS_errorInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_errorInstructionForGeneration result ;
  const GGS_errorInstructionForGeneration * p = (const GGS_errorInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_errorInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("errorInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_errorInstructionForGeneration_2E_weak::objectCompare (const GGS_errorInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_errorInstructionForGeneration_2E_weak::GGS_errorInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionForGeneration_2E_weak & GGS_errorInstructionForGeneration_2E_weak::operator = (const GGS_errorInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionForGeneration_2E_weak::GGS_errorInstructionForGeneration_2E_weak (const GGS_errorInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_errorInstructionForGeneration_2E_weak GGS_errorInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_errorInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionForGeneration GGS_errorInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_errorInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_errorInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionForGeneration GGS_errorInstructionForGeneration_2E_weak::bang_errorInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_errorInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_errorInstructionForGeneration) ;
      result = GGS_errorInstructionForGeneration ((cPtr_errorInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @errorInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_errorInstructionForGeneration_2E_weak ("errorInstructionForGeneration.weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_errorInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_errorInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_errorInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionForGeneration_2E_weak GGS_errorInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_errorInstructionForGeneration_2E_weak result ;
  const GGS_errorInstructionForGeneration_2E_weak * p = (const GGS_errorInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_errorInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("errorInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_methodCallInstructionAST_2E_weak::objectCompare (const GGS_methodCallInstructionAST_2E_weak & inOperand) const {
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

GGS_methodCallInstructionAST_2E_weak::GGS_methodCallInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionAST_2E_weak & GGS_methodCallInstructionAST_2E_weak::operator = (const GGS_methodCallInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionAST_2E_weak::GGS_methodCallInstructionAST_2E_weak (const GGS_methodCallInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionAST_2E_weak GGS_methodCallInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_methodCallInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionAST GGS_methodCallInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_methodCallInstructionAST result ;
  if (isValid ()) {
    const cPtr_methodCallInstructionAST * p = (cPtr_methodCallInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_methodCallInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionAST GGS_methodCallInstructionAST_2E_weak::bang_methodCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_methodCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_methodCallInstructionAST) ;
      result = GGS_methodCallInstructionAST ((cPtr_methodCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @methodCallInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_methodCallInstructionAST_2E_weak ("methodCallInstructionAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_methodCallInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_methodCallInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_methodCallInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionAST_2E_weak GGS_methodCallInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_methodCallInstructionAST_2E_weak result ;
  const GGS_methodCallInstructionAST_2E_weak * p = (const GGS_methodCallInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_methodCallInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("methodCallInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @methodCallInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_methodCallInstructionForGeneration::objectCompare (const GGS_methodCallInstructionForGeneration & inOperand) const {
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

GGS_methodCallInstructionForGeneration::GGS_methodCallInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_methodCallInstructionForGeneration GGS_methodCallInstructionForGeneration::
init_21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                      const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                      const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                      const GGS_string & in_mMethodName,
                                      const GGS_methodKind & in_mKind,
                                      const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                      const GGS_bool & in_mHasCompilerArgument,
                                      const GGS_unifiedTypeMapEntry & in_mMethodBaseType,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_methodCallInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_methodCallInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->methodCallInstructionForGeneration_init_21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mReceiverType, in_mReceiverExpression, in_mMethodName, in_mKind, in_mActualParameterList, in_mHasCompilerArgument, in_mMethodBaseType, inCompiler) ;
  const GGS_methodCallInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionForGeneration::
methodCallInstructionForGeneration_init_21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                         const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                         const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                         const GGS_string & in_mMethodName,
                                                                         const GGS_methodKind & in_mKind,
                                                                         const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                         const GGS_bool & in_mHasCompilerArgument,
                                                                         const GGS_unifiedTypeMapEntry & in_mMethodBaseType,
                                                                         Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mMethodName = in_mMethodName ;
  mProperty_mKind = in_mKind ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  mProperty_mMethodBaseType = in_mMethodBaseType ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionForGeneration::GGS_methodCallInstructionForGeneration (const cPtr_methodCallInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_methodCallInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionForGeneration GGS_methodCallInstructionForGeneration::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                               const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                               const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                               const GGS_string & in_mMethodName,
                                                                                               const GGS_methodKind & in_mKind,
                                                                                               const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                               const GGS_bool & in_mHasCompilerArgument,
                                                                                               const GGS_unifiedTypeMapEntry & in_mMethodBaseType,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  GGS_methodCallInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_methodCallInstructionForGeneration (in_mInstructionLocation, in_mReceiverType, in_mReceiverExpression, in_mMethodName, in_mKind, in_mActualParameterList, in_mHasCompilerArgument, in_mMethodBaseType,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_methodCallInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_methodCallInstructionForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_methodCallInstructionForGeneration::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_methodCallInstructionForGeneration::readProperty_mMethodName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mMethodName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_methodKind GGS_methodCallInstructionForGeneration::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_methodKind () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_methodCallInstructionForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualParameterListForGeneration () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_methodCallInstructionForGeneration::readProperty_mHasCompilerArgument (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mHasCompilerArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_methodCallInstructionForGeneration::readProperty_mMethodBaseType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mMethodBaseType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @methodCallInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_methodCallInstructionForGeneration::cPtr_methodCallInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mReceiverType (),
mProperty_mReceiverExpression (),
mProperty_mMethodName (),
mProperty_mKind (),
mProperty_mActualParameterList (),
mProperty_mHasCompilerArgument (),
mProperty_mMethodBaseType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_methodCallInstructionForGeneration::cPtr_methodCallInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                  const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                  const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                  const GGS_string & in_mMethodName,
                                                                                  const GGS_methodKind & in_mKind,
                                                                                  const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                  const GGS_bool & in_mHasCompilerArgument,
                                                                                  const GGS_unifiedTypeMapEntry & in_mMethodBaseType,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mReceiverType (),
mProperty_mReceiverExpression (),
mProperty_mMethodName (),
mProperty_mKind (),
mProperty_mActualParameterList (),
mProperty_mHasCompilerArgument (),
mProperty_mMethodBaseType () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mMethodName = in_mMethodName ;
  mProperty_mKind = in_mKind ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  mProperty_mMethodBaseType = in_mMethodBaseType ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_methodCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionForGeneration ;
}

void cPtr_methodCallInstructionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@methodCallInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMethodName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMethodBaseType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_methodCallInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_methodCallInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverType, mProperty_mReceiverExpression, mProperty_mMethodName, mProperty_mKind, mProperty_mActualParameterList, mProperty_mHasCompilerArgument, mProperty_mMethodBaseType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_methodCallInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mMethodName.printNonNullClassInstanceProperties ("mMethodName") ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mHasCompilerArgument.printNonNullClassInstanceProperties ("mHasCompilerArgument") ;
    mProperty_mMethodBaseType.printNonNullClassInstanceProperties ("mMethodBaseType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @methodCallInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_methodCallInstructionForGeneration ("methodCallInstructionForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_methodCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_methodCallInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_methodCallInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionForGeneration GGS_methodCallInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_methodCallInstructionForGeneration result ;
  const GGS_methodCallInstructionForGeneration * p = (const GGS_methodCallInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_methodCallInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("methodCallInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_methodCallInstructionForGeneration_2E_weak::objectCompare (const GGS_methodCallInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_methodCallInstructionForGeneration_2E_weak::GGS_methodCallInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionForGeneration_2E_weak & GGS_methodCallInstructionForGeneration_2E_weak::operator = (const GGS_methodCallInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionForGeneration_2E_weak::GGS_methodCallInstructionForGeneration_2E_weak (const GGS_methodCallInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionForGeneration_2E_weak GGS_methodCallInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_methodCallInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionForGeneration GGS_methodCallInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_methodCallInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_methodCallInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionForGeneration GGS_methodCallInstructionForGeneration_2E_weak::bang_methodCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_methodCallInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_methodCallInstructionForGeneration) ;
      result = GGS_methodCallInstructionForGeneration ((cPtr_methodCallInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @methodCallInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_methodCallInstructionForGeneration_2E_weak ("methodCallInstructionForGeneration.weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_methodCallInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_methodCallInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_methodCallInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionForGeneration_2E_weak GGS_methodCallInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_methodCallInstructionForGeneration_2E_weak result ;
  const GGS_methodCallInstructionForGeneration_2E_weak * p = (const GGS_methodCallInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_methodCallInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("methodCallInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVariableDeclarationWithAssignmentAST_2E_weak::objectCompare (const GGS_localVariableDeclarationWithAssignmentAST_2E_weak & inOperand) const {
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

GGS_localVariableDeclarationWithAssignmentAST_2E_weak::GGS_localVariableDeclarationWithAssignmentAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationWithAssignmentAST_2E_weak & GGS_localVariableDeclarationWithAssignmentAST_2E_weak::operator = (const GGS_localVariableDeclarationWithAssignmentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationWithAssignmentAST_2E_weak::GGS_localVariableDeclarationWithAssignmentAST_2E_weak (const GGS_localVariableDeclarationWithAssignmentAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationWithAssignmentAST_2E_weak GGS_localVariableDeclarationWithAssignmentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_localVariableDeclarationWithAssignmentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationWithAssignmentAST GGS_localVariableDeclarationWithAssignmentAST_2E_weak::unwrappedValue (void) const {
  GGS_localVariableDeclarationWithAssignmentAST result ;
  if (isValid ()) {
    const cPtr_localVariableDeclarationWithAssignmentAST * p = (cPtr_localVariableDeclarationWithAssignmentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_localVariableDeclarationWithAssignmentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationWithAssignmentAST GGS_localVariableDeclarationWithAssignmentAST_2E_weak::bang_localVariableDeclarationWithAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_localVariableDeclarationWithAssignmentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localVariableDeclarationWithAssignmentAST) ;
      result = GGS_localVariableDeclarationWithAssignmentAST ((cPtr_localVariableDeclarationWithAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @localVariableDeclarationWithAssignmentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST_2E_weak ("localVariableDeclarationWithAssignmentAST.weak",
                                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localVariableDeclarationWithAssignmentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVariableDeclarationWithAssignmentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVariableDeclarationWithAssignmentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationWithAssignmentAST_2E_weak GGS_localVariableDeclarationWithAssignmentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_localVariableDeclarationWithAssignmentAST_2E_weak result ;
  const GGS_localVariableDeclarationWithAssignmentAST_2E_weak * p = (const GGS_localVariableDeclarationWithAssignmentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVariableDeclarationWithAssignmentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableDeclarationWithAssignmentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVariableDeclarationNoAssignmentAST_2E_weak::objectCompare (const GGS_localVariableDeclarationNoAssignmentAST_2E_weak & inOperand) const {
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

GGS_localVariableDeclarationNoAssignmentAST_2E_weak::GGS_localVariableDeclarationNoAssignmentAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationNoAssignmentAST_2E_weak & GGS_localVariableDeclarationNoAssignmentAST_2E_weak::operator = (const GGS_localVariableDeclarationNoAssignmentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationNoAssignmentAST_2E_weak::GGS_localVariableDeclarationNoAssignmentAST_2E_weak (const GGS_localVariableDeclarationNoAssignmentAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationNoAssignmentAST_2E_weak GGS_localVariableDeclarationNoAssignmentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_localVariableDeclarationNoAssignmentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationNoAssignmentAST GGS_localVariableDeclarationNoAssignmentAST_2E_weak::unwrappedValue (void) const {
  GGS_localVariableDeclarationNoAssignmentAST result ;
  if (isValid ()) {
    const cPtr_localVariableDeclarationNoAssignmentAST * p = (cPtr_localVariableDeclarationNoAssignmentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_localVariableDeclarationNoAssignmentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationNoAssignmentAST GGS_localVariableDeclarationNoAssignmentAST_2E_weak::bang_localVariableDeclarationNoAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_localVariableDeclarationNoAssignmentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localVariableDeclarationNoAssignmentAST) ;
      result = GGS_localVariableDeclarationNoAssignmentAST ((cPtr_localVariableDeclarationNoAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @localVariableDeclarationNoAssignmentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableDeclarationNoAssignmentAST_2E_weak ("localVariableDeclarationNoAssignmentAST.weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localVariableDeclarationNoAssignmentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationNoAssignmentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVariableDeclarationNoAssignmentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVariableDeclarationNoAssignmentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationNoAssignmentAST_2E_weak GGS_localVariableDeclarationNoAssignmentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_localVariableDeclarationNoAssignmentAST_2E_weak result ;
  const GGS_localVariableDeclarationNoAssignmentAST_2E_weak * p = (const GGS_localVariableDeclarationNoAssignmentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVariableDeclarationNoAssignmentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableDeclarationNoAssignmentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @localVariableDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVariableDeclarationForGeneration::objectCompare (const GGS_localVariableDeclarationForGeneration & inOperand) const {
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

GGS_localVariableDeclarationForGeneration::GGS_localVariableDeclarationForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_localVariableDeclarationForGeneration GGS_localVariableDeclarationForGeneration::
init_21__21_ (const GGS_unifiedTypeMapEntry & in_mVariableType,
              const GGS_string & in_mCppVariableName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_localVariableDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_localVariableDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->localVariableDeclarationForGeneration_init_21__21_ (in_mVariableType, in_mCppVariableName, inCompiler) ;
  const GGS_localVariableDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationForGeneration::
localVariableDeclarationForGeneration_init_21__21_ (const GGS_unifiedTypeMapEntry & in_mVariableType,
                                                    const GGS_string & in_mCppVariableName,
                                                    Compiler * /* inCompiler */) {
  mProperty_mVariableType = in_mVariableType ;
  mProperty_mCppVariableName = in_mCppVariableName ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationForGeneration::GGS_localVariableDeclarationForGeneration (const cPtr_localVariableDeclarationForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationForGeneration GGS_localVariableDeclarationForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mVariableType,
                                                                                                     const GGS_string & in_mCppVariableName,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_localVariableDeclarationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_localVariableDeclarationForGeneration (in_mVariableType, in_mCppVariableName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_localVariableDeclarationForGeneration::readProperty_mVariableType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_localVariableDeclarationForGeneration * p = (cPtr_localVariableDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationForGeneration) ;
    return p->mProperty_mVariableType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_localVariableDeclarationForGeneration::readProperty_mCppVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_localVariableDeclarationForGeneration * p = (cPtr_localVariableDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationForGeneration) ;
    return p->mProperty_mCppVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @localVariableDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_localVariableDeclarationForGeneration::cPtr_localVariableDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mVariableType (),
mProperty_mCppVariableName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_localVariableDeclarationForGeneration::cPtr_localVariableDeclarationForGeneration (const GGS_unifiedTypeMapEntry & in_mVariableType,
                                                                                        const GGS_string & in_mCppVariableName,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mVariableType (),
mProperty_mCppVariableName () {
  mProperty_mVariableType = in_mVariableType ;
  mProperty_mCppVariableName = in_mCppVariableName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_localVariableDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ;
}

void cPtr_localVariableDeclarationForGeneration::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@localVariableDeclarationForGeneration:") ;
  mProperty_mVariableType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_localVariableDeclarationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_localVariableDeclarationForGeneration (mProperty_mVariableType, mProperty_mCppVariableName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_localVariableDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mVariableType.printNonNullClassInstanceProperties ("mVariableType") ;
    mProperty_mCppVariableName.printNonNullClassInstanceProperties ("mCppVariableName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @localVariableDeclarationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ("localVariableDeclarationForGeneration",
                                                                                          & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localVariableDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVariableDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVariableDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationForGeneration GGS_localVariableDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_localVariableDeclarationForGeneration result ;
  const GGS_localVariableDeclarationForGeneration * p = (const GGS_localVariableDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVariableDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVariableDeclarationForGeneration_2E_weak::objectCompare (const GGS_localVariableDeclarationForGeneration_2E_weak & inOperand) const {
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

GGS_localVariableDeclarationForGeneration_2E_weak::GGS_localVariableDeclarationForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationForGeneration_2E_weak & GGS_localVariableDeclarationForGeneration_2E_weak::operator = (const GGS_localVariableDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationForGeneration_2E_weak::GGS_localVariableDeclarationForGeneration_2E_weak (const GGS_localVariableDeclarationForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationForGeneration_2E_weak GGS_localVariableDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_localVariableDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationForGeneration GGS_localVariableDeclarationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_localVariableDeclarationForGeneration result ;
  if (isValid ()) {
    const cPtr_localVariableDeclarationForGeneration * p = (cPtr_localVariableDeclarationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_localVariableDeclarationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationForGeneration GGS_localVariableDeclarationForGeneration_2E_weak::bang_localVariableDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_localVariableDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localVariableDeclarationForGeneration) ;
      result = GGS_localVariableDeclarationForGeneration ((cPtr_localVariableDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @localVariableDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration_2E_weak ("localVariableDeclarationForGeneration.weak",
                                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localVariableDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVariableDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVariableDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationForGeneration_2E_weak GGS_localVariableDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_localVariableDeclarationForGeneration_2E_weak result ;
  const GGS_localVariableDeclarationForGeneration_2E_weak * p = (const GGS_localVariableDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVariableDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum ifExpressionKind
//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind::GGS_ifExpressionKind (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind GGS_ifExpressionKind::class_func_regularExp (const GGS_semanticExpressionAST & inAssociatedValue0,
                                                                  const GGS_location & inAssociatedValue1
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifExpressionKind result ;
  result.mEnum = Enumeration::enum_regularExp ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_ifExpressionKind_2E_regularExp (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind GGS_ifExpressionKind::class_func_letVarExp (const GGS_lstring & inAssociatedValue0,
                                                                 const GGS_bool & inAssociatedValue1,
                                                                 const GGS_semanticExpressionAST & inAssociatedValue2,
                                                                 const GGS_location & inAssociatedValue3,
                                                                 const GGS_lstring & inAssociatedValue4
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifExpressionKind result ;
  result.mEnum = Enumeration::enum_letVarExp ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_ifExpressionKind_2E_letVarExp (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3, inAssociatedValue4)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind::method_extractRegularExp (GGS_semanticExpressionAST & outAssociatedValue_exp,
                                                     GGS_location & outAssociatedValue_endOfExp,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_regularExp) {
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_endOfExp.drop () ;
    String s ;
    s.appendCString ("method @ifExpressionKind.regularExp invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_ifExpressionKind_2E_regularExp *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_endOfExp = ptr->mProperty_endOfExp ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind::method_extractLetVarExp (GGS_lstring & outAssociatedValue_varName,
                                                    GGS_bool & outAssociatedValue_isConstant,
                                                    GGS_semanticExpressionAST & outAssociatedValue_exp,
                                                    GGS_location & outAssociatedValue_endOfExp,
                                                    GGS_lstring & outAssociatedValue_typeName,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_letVarExp) {
    outAssociatedValue_varName.drop () ;
    outAssociatedValue_isConstant.drop () ;
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_endOfExp.drop () ;
    outAssociatedValue_typeName.drop () ;
    String s ;
    s.appendCString ("method @ifExpressionKind.letVarExp invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_ifExpressionKind_2E_letVarExp *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_varName = ptr->mProperty_varName ;
    outAssociatedValue_isConstant = ptr->mProperty_isConstant ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_endOfExp = ptr->mProperty_endOfExp ;
    outAssociatedValue_typeName = ptr->mProperty_typeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp_3F_ GGS_ifExpressionKind::getter_getRegularExp (UNUSED_LOCATION_ARGS) const {
  GGS_ifExpressionKind_2E_regularExp_3F_ result ;
  if (mEnum == Enumeration::enum_regularExp) {
    const auto ptr = (const GGS_ifExpressionKind_2E_regularExp *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_ifExpressionKind_2E_regularExp (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind::getAssociatedValuesFor_regularExp (GGS_semanticExpressionAST & out_exp,
                                                              GGS_location & out_endOfExp) const {
  const auto ptr = (const GGS_ifExpressionKind_2E_regularExp *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
  out_endOfExp = ptr->mProperty_endOfExp ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp_3F_ GGS_ifExpressionKind::getter_getLetVarExp (UNUSED_LOCATION_ARGS) const {
  GGS_ifExpressionKind_2E_letVarExp_3F_ result ;
  if (mEnum == Enumeration::enum_letVarExp) {
    const auto ptr = (const GGS_ifExpressionKind_2E_letVarExp *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_ifExpressionKind_2E_letVarExp (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind::getAssociatedValuesFor_letVarExp (GGS_lstring & out_varName,
                                                             GGS_bool & out_isConstant,
                                                             GGS_semanticExpressionAST & out_exp,
                                                             GGS_location & out_endOfExp,
                                                             GGS_lstring & out_typeName) const {
  const auto ptr = (const GGS_ifExpressionKind_2E_letVarExp *) mAssociatedValues.associatedValuesPointer () ;
  out_varName = ptr->mProperty_varName ;
  out_isConstant = ptr->mProperty_isConstant ;
  out_exp = ptr->mProperty_exp ;
  out_endOfExp = ptr->mProperty_endOfExp ;
  out_typeName = ptr->mProperty_typeName ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_ifExpressionKind [3] = {
  "(not built)",
  "regularExp",
  "letVarExp"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ifExpressionKind::getter_isRegularExp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_regularExp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ifExpressionKind::getter_isLetVarExp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_letVarExp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<enum @ifExpressionKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_ifExpressionKind [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @ifExpressionKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionKind ("ifExpressionKind",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifExpressionKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifExpressionKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifExpressionKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind GGS_ifExpressionKind::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_ifExpressionKind result ;
  const GGS_ifExpressionKind * p = (const GGS_ifExpressionKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifExpressionKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@CommaSeparatedExpressionList enterExpressionListInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterExpressionListInSemanticContext (const GGS_CommaSeparatedExpressionList inObject,
                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_CommaSeparatedExpressionList temp_0 = inObject ;
  UpEnumerator_CommaSeparatedExpressionList enumerator_5679 (temp_0) ;
  while (enumerator_5679.hasCurrentObject ()) {
    switch (enumerator_5679.current_mExpression (HERE).enumValue ()) {
    case GGS_ifExpressionKind::Enumeration::invalid:
      break ;
    case GGS_ifExpressionKind::Enumeration::enum_regularExp:
      {
        GGS_semanticExpressionAST extractedValue_5749_exp_0 ;
        GGS_location extractedValue_5753__1 ;
        enumerator_5679.current_mExpression (HERE).getAssociatedValuesFor_regularExp (extractedValue_5749_exp_0, extractedValue_5753__1) ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_5749_exp_0.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 168)) ;
      }
      break ;
    case GGS_ifExpressionKind::Enumeration::enum_letVarExp:
      {
        GGS_lstring extractedValue_5840__0 ;
        GGS_bool extractedValue_5840__1 ;
        GGS_semanticExpressionAST extractedValue_5842_exp_2 ;
        GGS_location extractedValue_5846__3 ;
        GGS_lstring extractedValue_5857_typeName_4 ;
        enumerator_5679.current_mExpression (HERE).getAssociatedValuesFor_letVarExp (extractedValue_5840__0, extractedValue_5840__1, extractedValue_5842_exp_2, extractedValue_5846__3, extractedValue_5857_typeName_4) ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_5842_exp_2.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 170)) ;
        {
        GGS_unifiedTypeMapEntry joker_5969 ; // Joker input parameter
        extensionSetter_makeEntry (ioArgument_ioTypeMap, extractedValue_5857_typeName_4, joker_5969, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 171)) ;
        }
      }
      break ;
    }
    enumerator_5679.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@CommaSeparatedExpressionList analyzeSemanticExpressionList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeSemanticExpressionList (const GGS_CommaSeparatedExpressionList inObject,
                                                    const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                    GGS_ifTestListForGeneration & outArgument_outTestListForGeneration,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTestListForGeneration.drop () ; // Release 'out' argument
  outArgument_outTestListForGeneration = GGS_ifTestListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_CommaSeparatedExpressionList temp_0 = inObject ;
  UpEnumerator_CommaSeparatedExpressionList enumerator_6618 (temp_0) ;
  while (enumerator_6618.hasCurrentObject ()) {
    switch (enumerator_6618.current_mExpression (HERE).enumValue ()) {
    case GGS_ifExpressionKind::Enumeration::invalid:
      break ;
    case GGS_ifExpressionKind::Enumeration::enum_regularExp:
      {
        GGS_semanticExpressionAST extractedValue_6688_exp_0 ;
        GGS_location extractedValue_6692_endOfExpression_1 ;
        enumerator_6618.current_mExpression (HERE).getAssociatedValuesFor_regularExp (extractedValue_6688_exp_0, extractedValue_6692_endOfExpression_1) ;
        GGS_semanticExpressionForGeneration var_analyzed_5F_if_5F_expression_6976 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_6688_exp_0.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 191)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_analyzed_5F_if_5F_expression_6976, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 188)) ;
        GGS_semanticExpressionForGeneration var_if_5F_expression_7149 ;
        {
        routine_checkExpressionIsBoolean_3F__3F__3F__21_ (constinArgument_inAnalysisContext, extractedValue_6692_endOfExpression_1, var_analyzed_5F_if_5F_expression_6976, var_if_5F_expression_7149, inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 197)) ;
        }
        outArgument_outTestListForGeneration.addAssignOperation (GGS_ifTestForGeneration::class_func_regular (var_if_5F_expression_7149  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 203))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 203)) ;
        {
        extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 204)) ;
        }
        {
        extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 205)) ;
        }
      }
      break ;
    case GGS_ifExpressionKind::Enumeration::enum_letVarExp:
      {
        GGS_lstring extractedValue_7353_varName_0 ;
        GGS_bool extractedValue_7361_isConstant_1 ;
        GGS_semanticExpressionAST extractedValue_7372_exp_2 ;
        GGS_location extractedValue_7376__3 ;
        GGS_lstring extractedValue_7387_typeName_4 ;
        enumerator_6618.current_mExpression (HERE).getAssociatedValuesFor_letVarExp (extractedValue_7353_varName_0, extractedValue_7361_isConstant_1, extractedValue_7372_exp_2, extractedValue_7376__3, extractedValue_7387_typeName_4) ;
        GGS_semanticExpressionForGeneration var_analyzedExpression_7664 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_7372_exp_2.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 210)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_analyzedExpression_7664, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 207)) ;
        GGS_unifiedTypeMapEntry var_castType_7705 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 216)) ;
        GGS_unifiedTypeMapEntry var_testType_7754 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 217)) ;
        GGS_unifiedTypeMapEntry var_unwrappedType_7841 = extensionGetter_definition (var_analyzedExpression_7664.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 219)).readProperty_unwrappedType () ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = var_unwrappedType_7841.getter_isNull (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 220)).operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 220)).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 221)) ;
            }
            {
            extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 222)) ;
            }
            GGS_string var_targetVariableCppName_8067 = GGS_string ("var_").add_operation (extractedValue_7353_varName_0.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 223)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 223)).add_operation (extractedValue_7353_varName_0.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 224)).getter_string (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 224)) ;
            GalgasBool test_2 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_2) {
              test_2 = GGS_bool (ComparisonKind::notEqual, extractedValue_7353_varName_0.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_2) {
                GalgasBool test_3 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_3) {
                  test_3 = extractedValue_7361_isConstant_1.boolEnum () ;
                  if (GalgasBool::boolTrue == test_3) {
                    {
                    extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, extractedValue_7353_varName_0, var_unwrappedType_7841, var_targetVariableCppName_8067, var_targetVariableCppName_8067, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 227)) ;
                    }
                  }
                }
                if (GalgasBool::boolFalse == test_3) {
                  {
                  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, extractedValue_7353_varName_0, GGS_bool (true), var_unwrappedType_7841, var_targetVariableCppName_8067, var_targetVariableCppName_8067, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 234)) ;
                  }
                }
              }
            }
            var_castType_7705 = var_unwrappedType_7841 ;
            var_testType_7754 = var_analyzedExpression_7664.readProperty_mResultType () ;
            outArgument_outTestListForGeneration.addAssignOperation (GGS_ifTestForGeneration::class_func_optionalExp (var_targetVariableCppName_8067, extractedValue_7361_isConstant_1, var_analyzedExpression_7664, var_unwrappedType_7841  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 245))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 245)) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = extensionGetter_definition (var_analyzedExpression_7664.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 252)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 252)).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GalgasBool test_5 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_5) {
                test_5 = GGS_bool (ComparisonKind::equal, extractedValue_7387_typeName_4.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_5) {
                  GenericArray <FixItDescription> fixItArray6 ;
                  inCompiler->emitSemanticError (extractedValue_7387_typeName_4.readProperty_location (), GGS_string ("on a class object, the 'as' clause is required"), fixItArray6  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 254)) ;
                  var_castType_7705.drop () ; // Release error dropped variable
                  var_testType_7754.drop () ; // Release error dropped variable
                }
              }
              if (GalgasBool::boolFalse == test_5) {
                var_castType_7705 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, extractedValue_7387_typeName_4, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 256)) ;
                var_testType_7754 = var_castType_7705 ;
                GGS_unifiedTypeMapEntry var_t_9582 = var_castType_7705 ;
                GGS_bool var_found_9617 = GGS_bool (ComparisonKind::equal, var_t_9582.objectCompare (var_analyzedExpression_7664.readProperty_mResultType ())) ;
                if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 261)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 261)).isValid ()) {
                  uint32_t variant_9673 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 261)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 261)).uintValue () ;
                  bool loop_9673 = true ;
                  while (loop_9673) {
                    loop_9673 = var_found_9617.operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)).operator_and (extensionGetter_definition (var_t_9582, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)).operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)) COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)).isValid () ;
                    if (loop_9673) {
                      loop_9673 = var_found_9617.operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)).operator_and (extensionGetter_definition (var_t_9582, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)).operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)) COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)).boolValue () ;
                    }
                    if (loop_9673 && (0 == variant_9673)) {
                      loop_9673 = false ;
                      inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 261)) ;
                    }
                    if (loop_9673) {
                      variant_9673 -= 1 ;
                      var_t_9582 = extensionGetter_definition (var_t_9582, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 263)).readProperty_superType () ;
                      var_found_9617 = GGS_bool (ComparisonKind::equal, var_t_9582.objectCompare (var_analyzedExpression_7664.readProperty_mResultType ())) ;
                    }
                  }
                }
                GalgasBool test_7 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_7) {
                  test_7 = var_found_9617.operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 266)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_7) {
                    GenericArray <FixItDescription> fixItArray8 ;
                    inCompiler->emitSemanticError (extractedValue_7387_typeName_4.readProperty_location (), GGS_string ("the '@").add_operation (extractedValue_7387_typeName_4.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 268)).add_operation (GGS_string ("' type is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 268)).add_operation (extensionGetter_definition (var_analyzedExpression_7664.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 269)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 268)).add_operation (GGS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 269)), fixItArray8  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 267)) ;
                  }
                }
              }
              {
              extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 273)) ;
              }
              {
              extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 274)) ;
              }
              GGS_string var_targetVariableCppName_10290 = GGS_string ("var_").add_operation (extractedValue_7353_varName_0.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 275)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 275)).add_operation (extractedValue_7353_varName_0.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 276)).getter_string (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 276)) ;
              GalgasBool test_9 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_9) {
                test_9 = GGS_bool (ComparisonKind::notEqual, extractedValue_7353_varName_0.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_9) {
                  GalgasBool test_10 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_10) {
                    test_10 = extractedValue_7361_isConstant_1.boolEnum () ;
                    if (GalgasBool::boolTrue == test_10) {
                      {
                      extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, extractedValue_7353_varName_0, var_castType_7705, var_targetVariableCppName_10290, var_targetVariableCppName_10290, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 279)) ;
                      }
                    }
                  }
                  if (GalgasBool::boolFalse == test_10) {
                    {
                    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, extractedValue_7353_varName_0, GGS_bool (true), var_castType_7705, var_targetVariableCppName_10290, var_targetVariableCppName_10290, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 286)) ;
                    }
                  }
                }
              }
              outArgument_outTestListForGeneration.addAssignOperation (GGS_ifTestForGeneration::class_func_letVarExp (var_targetVariableCppName_10290, var_analyzedExpression_7664, var_castType_7705, var_testType_7754  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 295))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 295)) ;
            }
          }
          if (GalgasBool::boolFalse == test_4) {
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              const GGS_typeKindEnum_2E_weakReferenceType var_weakRefType_11231 = extensionGetter_definition (var_analyzedExpression_7664.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 301)).readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 301)).unwrappedValue () ;
              if (!extensionGetter_definition (var_analyzedExpression_7664.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 301)).readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 301)).isValuated ()) {
                test_11 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_11) {
                GalgasBool test_12 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_12) {
                  test_12 = GGS_bool (ComparisonKind::equal, extractedValue_7387_typeName_4.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_12) {
                    var_castType_7705 = var_weakRefType_11231.readProperty_referenceType () ;
                  }
                }
                if (GalgasBool::boolFalse == test_12) {
                  var_castType_7705 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, extractedValue_7387_typeName_4, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 305)) ;
                }
                var_testType_7754 = var_castType_7705 ;
                GGS_unifiedTypeMapEntry var_t_11574 = var_castType_7705 ;
                GGS_bool var_found_11607 = GGS_bool (ComparisonKind::equal, var_t_11574.objectCompare (var_analyzedExpression_7664.readProperty_mResultType ())) ;
                GalgasBool test_13 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_13) {
                  test_13 = var_found_11607.boolEnum () ;
                  if (GalgasBool::boolTrue == test_13) {
                    extensionGetter_definition (var_castType_7705, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 311)).readProperty_typeKind ().method_extractWeakReferenceType (var_castType_7705, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 311)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_13) {
                  GalgasBool test_14 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_14) {
                    test_14 = GGS_bool (ComparisonKind::equal, var_t_11574.objectCompare (var_weakRefType_11231.readProperty_referenceType ())).boolEnum () ;
                    if (GalgasBool::boolTrue == test_14) {
                      var_found_11607 = GGS_bool (true) ;
                    }
                  }
                }
                if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 315)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 315)).isValid ()) {
                  uint32_t variant_11871 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 315)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 315)).uintValue () ;
                  bool loop_11871 = true ;
                  while (loop_11871) {
                    loop_11871 = var_found_11607.operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)).operator_and (extensionGetter_definition (var_t_11574, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)).operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)) COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)).isValid () ;
                    if (loop_11871) {
                      loop_11871 = var_found_11607.operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)).operator_and (extensionGetter_definition (var_t_11574, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)).operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)) COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)).boolValue () ;
                    }
                    if (loop_11871 && (0 == variant_11871)) {
                      loop_11871 = false ;
                      inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 315)) ;
                    }
                    if (loop_11871) {
                      variant_11871 -= 1 ;
                      var_t_11574 = extensionGetter_definition (var_t_11574, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 317)).readProperty_superType () ;
                      GalgasBool test_15 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_15) {
                        test_15 = GGS_bool (ComparisonKind::equal, var_t_11574.objectCompare (var_analyzedExpression_7664.readProperty_mResultType ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_15) {
                          var_found_11607 = GGS_bool (true) ;
                          extensionGetter_definition (var_castType_7705, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 320)).readProperty_typeKind ().method_extractWeakReferenceType (var_castType_7705, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 320)) ;
                        }
                      }
                      if (GalgasBool::boolFalse == test_15) {
                        GalgasBool test_16 = GalgasBool::boolTrue ;
                        if (GalgasBool::boolTrue == test_16) {
                          test_16 = GGS_bool (ComparisonKind::equal, var_t_11574.objectCompare (var_weakRefType_11231.readProperty_referenceType ())).boolEnum () ;
                          if (GalgasBool::boolTrue == test_16) {
                            var_found_11607 = GGS_bool (true) ;
                          }
                        }
                      }
                    }
                  }
                }
                GalgasBool test_17 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_17) {
                  test_17 = var_found_11607.operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 325)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_17) {
                    GenericArray <FixItDescription> fixItArray18 ;
                    inCompiler->emitSemanticError (extractedValue_7387_typeName_4.readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_castType_7705, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 327)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 327)).add_operation (GGS_string ("' type is not compatible with the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 327)).add_operation (extensionGetter_definition (var_analyzedExpression_7664.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 329)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 328)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 329)), fixItArray18  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 326)) ;
                  }
                }
                {
                extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 331)) ;
                }
                {
                extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 332)) ;
                }
                GGS_string var_targetVariableCppName_12681 = GGS_string ("var_").add_operation (extractedValue_7353_varName_0.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 333)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 333)).add_operation (extractedValue_7353_varName_0.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 334)).getter_string (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 334)) ;
                GalgasBool test_19 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_19) {
                  test_19 = GGS_bool (ComparisonKind::notEqual, extractedValue_7353_varName_0.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_19) {
                    GalgasBool test_20 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_20) {
                      test_20 = extractedValue_7361_isConstant_1.boolEnum () ;
                      if (GalgasBool::boolTrue == test_20) {
                        {
                        extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, extractedValue_7353_varName_0, var_castType_7705, var_targetVariableCppName_12681, var_targetVariableCppName_12681, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 337)) ;
                        }
                      }
                    }
                    if (GalgasBool::boolFalse == test_20) {
                      {
                      extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, extractedValue_7353_varName_0, GGS_bool (true), var_castType_7705, var_targetVariableCppName_12681, var_targetVariableCppName_12681, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 344)) ;
                      }
                    }
                  }
                }
                outArgument_outTestListForGeneration.addAssignOperation (GGS_ifTestForGeneration::class_func_letVarExp (var_targetVariableCppName_12681, var_analyzedExpression_7664, var_castType_7705, var_testType_7754  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 353))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 353)) ;
              }
            }
            if (GalgasBool::boolFalse == test_11) {
              GenericArray <FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (var_analyzedExpression_7664.readProperty_mLocation (), GGS_string ("expression should be a class instance, or a weak reference: it is an @").add_operation (extensionGetter_definition (var_analyzedExpression_7664.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 362)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 361)).add_operation (GGS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 362)), fixItArray21  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 360)) ;
            }
          }
        }
      }
      break ;
    }
    enumerator_6618.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//  Enum ifTestForGeneration
//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration::GGS_ifTestForGeneration (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration GGS_ifTestForGeneration::class_func_regular (const GGS_semanticExpressionForGeneration & inAssociatedValue0
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestForGeneration result ;
  result.mEnum = Enumeration::enum_regular ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_ifTestForGeneration_2E_regular (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration GGS_ifTestForGeneration::class_func_letVarExp (const GGS_string & inAssociatedValue0,
                                                                       const GGS_semanticExpressionForGeneration & inAssociatedValue1,
                                                                       const GGS_unifiedTypeMapEntry & inAssociatedValue2,
                                                                       const GGS_unifiedTypeMapEntry & inAssociatedValue3
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestForGeneration result ;
  result.mEnum = Enumeration::enum_letVarExp ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_ifTestForGeneration_2E_letVarExp (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration GGS_ifTestForGeneration::class_func_optionalExp (const GGS_string & inAssociatedValue0,
                                                                         const GGS_bool & inAssociatedValue1,
                                                                         const GGS_semanticExpressionForGeneration & inAssociatedValue2,
                                                                         const GGS_unifiedTypeMapEntry & inAssociatedValue3
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestForGeneration result ;
  result.mEnum = Enumeration::enum_optionalExp ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_ifTestForGeneration_2E_optionalExp (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration::method_extractRegular (GGS_semanticExpressionForGeneration & outAssociatedValue_exp,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_regular) {
    outAssociatedValue_exp.drop () ;
    String s ;
    s.appendCString ("method @ifTestForGeneration.regular invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_ifTestForGeneration_2E_regular *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration::method_extractLetVarExp (GGS_string & outAssociatedValue_targetVarCppName,
                                                       GGS_semanticExpressionForGeneration & outAssociatedValue_exp,
                                                       GGS_unifiedTypeMapEntry & outAssociatedValue_targetType,
                                                       GGS_unifiedTypeMapEntry & outAssociatedValue_testType,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_letVarExp) {
    outAssociatedValue_targetVarCppName.drop () ;
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_targetType.drop () ;
    outAssociatedValue_testType.drop () ;
    String s ;
    s.appendCString ("method @ifTestForGeneration.letVarExp invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_ifTestForGeneration_2E_letVarExp *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_targetVarCppName = ptr->mProperty_targetVarCppName ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_targetType = ptr->mProperty_targetType ;
    outAssociatedValue_testType = ptr->mProperty_testType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration::method_extractOptionalExp (GGS_string & outAssociatedValue_targetVarCppName,
                                                         GGS_bool & outAssociatedValue_isConstant,
                                                         GGS_semanticExpressionForGeneration & outAssociatedValue_exp,
                                                         GGS_unifiedTypeMapEntry & outAssociatedValue_targetType,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_optionalExp) {
    outAssociatedValue_targetVarCppName.drop () ;
    outAssociatedValue_isConstant.drop () ;
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_targetType.drop () ;
    String s ;
    s.appendCString ("method @ifTestForGeneration.optionalExp invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_ifTestForGeneration_2E_optionalExp *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_targetVarCppName = ptr->mProperty_targetVarCppName ;
    outAssociatedValue_isConstant = ptr->mProperty_isConstant ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_targetType = ptr->mProperty_targetType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular_3F_ GGS_ifTestForGeneration::getter_getRegular (UNUSED_LOCATION_ARGS) const {
  GGS_ifTestForGeneration_2E_regular_3F_ result ;
  if (mEnum == Enumeration::enum_regular) {
    const auto ptr = (const GGS_ifTestForGeneration_2E_regular *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_ifTestForGeneration_2E_regular (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration::getAssociatedValuesFor_regular (GGS_semanticExpressionForGeneration & out_exp) const {
  const auto ptr = (const GGS_ifTestForGeneration_2E_regular *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp_3F_ GGS_ifTestForGeneration::getter_getLetVarExp (UNUSED_LOCATION_ARGS) const {
  GGS_ifTestForGeneration_2E_letVarExp_3F_ result ;
  if (mEnum == Enumeration::enum_letVarExp) {
    const auto ptr = (const GGS_ifTestForGeneration_2E_letVarExp *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_ifTestForGeneration_2E_letVarExp (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration::getAssociatedValuesFor_letVarExp (GGS_string & out_targetVarCppName,
                                                                GGS_semanticExpressionForGeneration & out_exp,
                                                                GGS_unifiedTypeMapEntry & out_targetType,
                                                                GGS_unifiedTypeMapEntry & out_testType) const {
  const auto ptr = (const GGS_ifTestForGeneration_2E_letVarExp *) mAssociatedValues.associatedValuesPointer () ;
  out_targetVarCppName = ptr->mProperty_targetVarCppName ;
  out_exp = ptr->mProperty_exp ;
  out_targetType = ptr->mProperty_targetType ;
  out_testType = ptr->mProperty_testType ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp_3F_ GGS_ifTestForGeneration::getter_getOptionalExp (UNUSED_LOCATION_ARGS) const {
  GGS_ifTestForGeneration_2E_optionalExp_3F_ result ;
  if (mEnum == Enumeration::enum_optionalExp) {
    const auto ptr = (const GGS_ifTestForGeneration_2E_optionalExp *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_ifTestForGeneration_2E_optionalExp (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration::getAssociatedValuesFor_optionalExp (GGS_string & out_targetVarCppName,
                                                                  GGS_bool & out_isConstant,
                                                                  GGS_semanticExpressionForGeneration & out_exp,
                                                                  GGS_unifiedTypeMapEntry & out_targetType) const {
  const auto ptr = (const GGS_ifTestForGeneration_2E_optionalExp *) mAssociatedValues.associatedValuesPointer () ;
  out_targetVarCppName = ptr->mProperty_targetVarCppName ;
  out_isConstant = ptr->mProperty_isConstant ;
  out_exp = ptr->mProperty_exp ;
  out_targetType = ptr->mProperty_targetType ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_ifTestForGeneration [4] = {
  "(not built)",
  "regular",
  "letVarExp",
  "optionalExp"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ifTestForGeneration::getter_isRegular (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_regular == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ifTestForGeneration::getter_isLetVarExp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_letVarExp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ifTestForGeneration::getter_isOptionalExp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_optionalExp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<enum @ifTestForGeneration: ") ;
  ioString.appendCString (gEnumNameArrayFor_ifTestForGeneration [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @ifTestForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration ("ifTestForGeneration",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifTestForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration GGS_ifTestForGeneration::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_ifTestForGeneration result ;
  const GGS_ifTestForGeneration * p = (const GGS_ifTestForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ifTestListForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateInstruction (const GGS_ifTestListForGeneration inObject,
                                          GGS_stringset & ioArgument_ioInclusionSet,
                                          GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                          GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                          GGS_string & ioArgument_ioGeneratedCode,
                                          GGS_string & outArgument_outTestVar,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTestVar.drop () ; // Release 'out' argument
  outArgument_outTestVar = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 404)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 405)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GalgasBool ").add_operation (outArgument_outTestVar, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 406)).add_operation (GGS_string (" = GalgasBool::boolTrue ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 406)), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 406)) ;
  const GGS_ifTestListForGeneration temp_0 = inObject ;
  UpEnumerator_ifTestListForGeneration enumerator_15567 (temp_0) ;
  while (enumerator_15567.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (GalgasBool::boolTrue == ").add_operation (outArgument_outTestVar, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 408)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 408)), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 408)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 409)) ;
    }
    switch (enumerator_15567.current_mExpression (HERE).enumValue ()) {
    case GGS_ifTestForGeneration::Enumeration::invalid:
      break ;
    case GGS_ifTestForGeneration::Enumeration::enum_regular:
      {
        GGS_semanticExpressionForGeneration extractedValue_15757_exp_0 ;
        enumerator_15567.current_mExpression (HERE).getAssociatedValuesFor_regular (extractedValue_15757_exp_0) ;
        GGS_string var_cppVarName_15942 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_15757_exp_0.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_15942, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 412)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(outArgument_outTestVar.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 419)).add_operation (var_cppVarName_15942, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 419)).add_operation (GGS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 419)), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 419)) ;
      }
      break ;
    case GGS_ifTestForGeneration::Enumeration::enum_letVarExp:
      {
        GGS_string extractedValue_16065_targetVarCppName_0 ;
        GGS_semanticExpressionForGeneration extractedValue_16082_exp_1 ;
        GGS_unifiedTypeMapEntry extractedValue_16086_targetType_2 ;
        GGS_unifiedTypeMapEntry extractedValue_16097_testType_3 ;
        enumerator_15567.current_mExpression (HERE).getAssociatedValuesFor_letVarExp (extractedValue_16065_targetVarCppName_0, extractedValue_16082_exp_1, extractedValue_16086_targetType_2, extractedValue_16097_testType_3) ;
        extensionMethod_addHeaderFileName (extractedValue_16086_targetType_2, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 421)) ;
        extensionMethod_addHeaderFileName (extractedValue_16097_testType_3, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 422)) ;
        GGS_string var_targetTypeName_16231 = extensionGetter_identifierRepresentation (extractedValue_16086_targetType_2, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 423)) ;
        GGS_string var_testTypeName_16298 = extensionGetter_identifierRepresentation (extractedValue_16097_testType_3, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 424)) ;
        GGS_string var_cppVarName_16527 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_16082_exp_1.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_16527, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 425)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (var_targetTypeName_16231, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 432)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 432)).add_operation (extractedValue_16065_targetVarCppName_0, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 432)), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 432)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" (dynamic_cast <const cPtr_").add_operation (var_testTypeName_16298, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 433)).add_operation (GGS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 433)).add_operation (var_cppVarName_16527, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 433)).add_operation (GGS_string (".ptr ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 433)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (nullptr == ").add_operation (extractedValue_16065_targetVarCppName_0, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 434)).add_operation (GGS_string (".ptr ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 434)), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 434)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (outArgument_outTestVar, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 435)).add_operation (GGS_string (" = GalgasBool::boolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 435)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 436)) ;
      }
      break ;
    case GGS_ifTestForGeneration::Enumeration::enum_optionalExp:
      {
        GGS_string extractedValue_16953_targetVarCppName_0 ;
        GGS_bool extractedValue_16970_isConstant_1 ;
        GGS_semanticExpressionForGeneration extractedValue_16981_exp_2 ;
        GGS_unifiedTypeMapEntry extractedValue_16985_targetType_3 ;
        enumerator_15567.current_mExpression (HERE).getAssociatedValuesFor_optionalExp (extractedValue_16953_targetVarCppName_0, extractedValue_16970_isConstant_1, extractedValue_16981_exp_2, extractedValue_16985_targetType_3) ;
        GGS_string var_targetTypeName_17011 = extensionGetter_identifierRepresentation (extractedValue_16985_targetType_3, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 438)) ;
        GGS_string var_cppVarName_17244 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_16981_exp_2.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_17244, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 439)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = extractedValue_16970_isConstant_1.boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const "), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 447)) ;
          }
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (var_targetTypeName_17011, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 449)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 449)).add_operation (extractedValue_16953_targetVarCppName_0, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 449)), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 449)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" = ").add_operation (var_cppVarName_17244, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 450)).add_operation (GGS_string (".unwrappedValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 450)), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 450)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (!").add_operation (var_cppVarName_17244, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 451)).add_operation (GGS_string (".isValuated ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 451)), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 451)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (outArgument_outTestVar, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 452)).add_operation (GGS_string (" = GalgasBool::boolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 452)), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 452)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 453)) ;
      }
      break ;
    }
    enumerator_15567.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_terminalCheckInstructionAST_2E_weak::objectCompare (const GGS_terminalCheckInstructionAST_2E_weak & inOperand) const {
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

GGS_terminalCheckInstructionAST_2E_weak::GGS_terminalCheckInstructionAST_2E_weak (void) :
GGS_syntaxInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST_2E_weak & GGS_terminalCheckInstructionAST_2E_weak::operator = (const GGS_terminalCheckInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST_2E_weak::GGS_terminalCheckInstructionAST_2E_weak (const GGS_terminalCheckInstructionAST & inSource) :
GGS_syntaxInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST_2E_weak GGS_terminalCheckInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_terminalCheckInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST GGS_terminalCheckInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_terminalCheckInstructionAST result ;
  if (isValid ()) {
    const cPtr_terminalCheckInstructionAST * p = (cPtr_terminalCheckInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_terminalCheckInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST GGS_terminalCheckInstructionAST_2E_weak::bang_terminalCheckInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_terminalCheckInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_terminalCheckInstructionAST) ;
      result = GGS_terminalCheckInstructionAST ((cPtr_terminalCheckInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @terminalCheckInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalCheckInstructionAST_2E_weak ("terminalCheckInstructionAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalCheckInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalCheckInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalCheckInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST_2E_weak GGS_terminalCheckInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_terminalCheckInstructionAST_2E_weak result ;
  const GGS_terminalCheckInstructionAST_2E_weak * p = (const GGS_terminalCheckInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalCheckInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractSyntaxInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractSyntaxInstructionForGrammarAnalysis::objectCompare (const GGS_abstractSyntaxInstructionForGrammarAnalysis & inOperand) const {
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

GGS_abstractSyntaxInstructionForGrammarAnalysis::GGS_abstractSyntaxInstructionForGrammarAnalysis (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractSyntaxInstructionForGrammarAnalysis::
abstractSyntaxInstructionForGrammarAnalysis_init_21_ (const GGS_location & in_mStartLocation,
                                                      Compiler * /* inCompiler */) {
  mProperty_mStartLocation = in_mStartLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis::GGS_abstractSyntaxInstructionForGrammarAnalysis (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_abstractSyntaxInstructionForGrammarAnalysis::readProperty_mStartLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
    return p->mProperty_mStartLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractSyntaxInstructionForGrammarAnalysis class
//--------------------------------------------------------------------------------------------------

cPtr_abstractSyntaxInstructionForGrammarAnalysis::cPtr_abstractSyntaxInstructionForGrammarAnalysis (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mStartLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_abstractSyntaxInstructionForGrammarAnalysis::cPtr_abstractSyntaxInstructionForGrammarAnalysis (const GGS_location & in_mStartLocation,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mStartLocation () {
  mProperty_mStartLocation = in_mStartLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractSyntaxInstructionForGrammarAnalysis::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mStartLocation.printNonNullClassInstanceProperties ("mStartLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractSyntaxInstructionForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis ("abstractSyntaxInstructionForGrammarAnalysis",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractSyntaxInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractSyntaxInstructionForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractSyntaxInstructionForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis GGS_abstractSyntaxInstructionForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_abstractSyntaxInstructionForGrammarAnalysis result ;
  const GGS_abstractSyntaxInstructionForGrammarAnalysis * p = (const GGS_abstractSyntaxInstructionForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractSyntaxInstructionForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractSyntaxInstructionForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::objectCompare (const GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak & inOperand) const {
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

GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak & GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::operator = (const GGS_abstractSyntaxInstructionForGrammarAnalysis & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (const GGS_abstractSyntaxInstructionForGrammarAnalysis & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::unwrappedValue (void) const {
  GGS_abstractSyntaxInstructionForGrammarAnalysis result ;
  if (isValid ()) {
    const cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractSyntaxInstructionForGrammarAnalysis (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::bang_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractSyntaxInstructionForGrammarAnalysis result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
      result = GGS_abstractSyntaxInstructionForGrammarAnalysis ((cPtr_abstractSyntaxInstructionForGrammarAnalysis *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractSyntaxInstructionForGrammarAnalysis.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak ("abstractSyntaxInstructionForGrammarAnalysis.weak",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak result ;
  const GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak * p = (const GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractSyntaxInstructionForGrammarAnalysis.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_terminalCheckInstructionForGeneration_2E_weak::objectCompare (const GGS_terminalCheckInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_terminalCheckInstructionForGeneration_2E_weak::GGS_terminalCheckInstructionForGeneration_2E_weak (void) :
GGS_syntaxInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration_2E_weak & GGS_terminalCheckInstructionForGeneration_2E_weak::operator = (const GGS_terminalCheckInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration_2E_weak::GGS_terminalCheckInstructionForGeneration_2E_weak (const GGS_terminalCheckInstructionForGeneration & inSource) :
GGS_syntaxInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration_2E_weak GGS_terminalCheckInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_terminalCheckInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration GGS_terminalCheckInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_terminalCheckInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_terminalCheckInstructionForGeneration * p = (cPtr_terminalCheckInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_terminalCheckInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration GGS_terminalCheckInstructionForGeneration_2E_weak::bang_terminalCheckInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_terminalCheckInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_terminalCheckInstructionForGeneration) ;
      result = GGS_terminalCheckInstructionForGeneration ((cPtr_terminalCheckInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @terminalCheckInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration_2E_weak ("terminalCheckInstructionForGeneration.weak",
                                                                                                  & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalCheckInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalCheckInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalCheckInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration_2E_weak GGS_terminalCheckInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_terminalCheckInstructionForGeneration_2E_weak result ;
  const GGS_terminalCheckInstructionForGeneration_2E_weak * p = (const GGS_terminalCheckInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalCheckInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @loopInstructionWithVariantAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loopInstructionWithVariantAST::objectCompare (const GGS_loopInstructionWithVariantAST & inOperand) const {
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

GGS_loopInstructionWithVariantAST::GGS_loopInstructionWithVariantAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_loopInstructionWithVariantAST GGS_loopInstructionWithVariantAST::
init_21__21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                              const GGS_semanticExpressionAST & in_mVariantExpression,
                                              const GGS_location & in_mEndOfVariantExpression,
                                              const GGS_semanticInstructionListAST & in_mFirstInstructions,
                                              const GGS_location & in_mEndOfFirstInstructions,
                                              const GGS_semanticExpressionAST & in_mLoopExpression,
                                              const GGS_location & in_mEndOfLoopExpression,
                                              const GGS_semanticInstructionListAST & in_mSecondInstructions,
                                              const GGS_location & in_mEndOfSecondInstructions,
                                              const GGS_location & in_mEndOfLoopInstruction,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cPtr_loopInstructionWithVariantAST * object = nullptr ;
  macroMyNew (object, cPtr_loopInstructionWithVariantAST (inCompiler COMMA_THERE)) ;
  object->loopInstructionWithVariantAST_init_21__21__21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mVariantExpression, in_mEndOfVariantExpression, in_mFirstInstructions, in_mEndOfFirstInstructions, in_mLoopExpression, in_mEndOfLoopExpression, in_mSecondInstructions, in_mEndOfSecondInstructions, in_mEndOfLoopInstruction, inCompiler) ;
  const GGS_loopInstructionWithVariantAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantAST::
loopInstructionWithVariantAST_init_21__21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_semanticExpressionAST & in_mVariantExpression,
                                                                            const GGS_location & in_mEndOfVariantExpression,
                                                                            const GGS_semanticInstructionListAST & in_mFirstInstructions,
                                                                            const GGS_location & in_mEndOfFirstInstructions,
                                                                            const GGS_semanticExpressionAST & in_mLoopExpression,
                                                                            const GGS_location & in_mEndOfLoopExpression,
                                                                            const GGS_semanticInstructionListAST & in_mSecondInstructions,
                                                                            const GGS_location & in_mEndOfSecondInstructions,
                                                                            const GGS_location & in_mEndOfLoopInstruction,
                                                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVariantExpression = in_mVariantExpression ;
  mProperty_mEndOfVariantExpression = in_mEndOfVariantExpression ;
  mProperty_mFirstInstructions = in_mFirstInstructions ;
  mProperty_mEndOfFirstInstructions = in_mEndOfFirstInstructions ;
  mProperty_mLoopExpression = in_mLoopExpression ;
  mProperty_mEndOfLoopExpression = in_mEndOfLoopExpression ;
  mProperty_mSecondInstructions = in_mSecondInstructions ;
  mProperty_mEndOfSecondInstructions = in_mEndOfSecondInstructions ;
  mProperty_mEndOfLoopInstruction = in_mEndOfLoopInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST::GGS_loopInstructionWithVariantAST (const cPtr_loopInstructionWithVariantAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loopInstructionWithVariantAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST GGS_loopInstructionWithVariantAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                     const GGS_semanticExpressionAST & in_mVariantExpression,
                                                                                     const GGS_location & in_mEndOfVariantExpression,
                                                                                     const GGS_semanticInstructionListAST & in_mFirstInstructions,
                                                                                     const GGS_location & in_mEndOfFirstInstructions,
                                                                                     const GGS_semanticExpressionAST & in_mLoopExpression,
                                                                                     const GGS_location & in_mEndOfLoopExpression,
                                                                                     const GGS_semanticInstructionListAST & in_mSecondInstructions,
                                                                                     const GGS_location & in_mEndOfSecondInstructions,
                                                                                     const GGS_location & in_mEndOfLoopInstruction,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithVariantAST result ;
  macroMyNew (result.mObjectPtr, cPtr_loopInstructionWithVariantAST (in_mInstructionLocation, in_mVariantExpression, in_mEndOfVariantExpression, in_mFirstInstructions, in_mEndOfFirstInstructions, in_mLoopExpression, in_mEndOfLoopExpression, in_mSecondInstructions, in_mEndOfSecondInstructions, in_mEndOfLoopInstruction,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_loopInstructionWithVariantAST::readProperty_mVariantExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mVariantExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithVariantAST::readProperty_mEndOfVariantExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mEndOfVariantExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_loopInstructionWithVariantAST::readProperty_mFirstInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mFirstInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithVariantAST::readProperty_mEndOfFirstInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mEndOfFirstInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_loopInstructionWithVariantAST::readProperty_mLoopExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mLoopExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithVariantAST::readProperty_mEndOfLoopExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mEndOfLoopExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_loopInstructionWithVariantAST::readProperty_mSecondInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mSecondInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithVariantAST::readProperty_mEndOfSecondInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mEndOfSecondInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithVariantAST::readProperty_mEndOfLoopInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mEndOfLoopInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @loopInstructionWithVariantAST class
//--------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithVariantAST::cPtr_loopInstructionWithVariantAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mVariantExpression (),
mProperty_mEndOfVariantExpression (),
mProperty_mFirstInstructions (),
mProperty_mEndOfFirstInstructions (),
mProperty_mLoopExpression (),
mProperty_mEndOfLoopExpression (),
mProperty_mSecondInstructions (),
mProperty_mEndOfSecondInstructions (),
mProperty_mEndOfLoopInstruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithVariantAST::cPtr_loopInstructionWithVariantAST (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_semanticExpressionAST & in_mVariantExpression,
                                                                        const GGS_location & in_mEndOfVariantExpression,
                                                                        const GGS_semanticInstructionListAST & in_mFirstInstructions,
                                                                        const GGS_location & in_mEndOfFirstInstructions,
                                                                        const GGS_semanticExpressionAST & in_mLoopExpression,
                                                                        const GGS_location & in_mEndOfLoopExpression,
                                                                        const GGS_semanticInstructionListAST & in_mSecondInstructions,
                                                                        const GGS_location & in_mEndOfSecondInstructions,
                                                                        const GGS_location & in_mEndOfLoopInstruction,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mVariantExpression (),
mProperty_mEndOfVariantExpression (),
mProperty_mFirstInstructions (),
mProperty_mEndOfFirstInstructions (),
mProperty_mLoopExpression (),
mProperty_mEndOfLoopExpression (),
mProperty_mSecondInstructions (),
mProperty_mEndOfSecondInstructions (),
mProperty_mEndOfLoopInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVariantExpression = in_mVariantExpression ;
  mProperty_mEndOfVariantExpression = in_mEndOfVariantExpression ;
  mProperty_mFirstInstructions = in_mFirstInstructions ;
  mProperty_mEndOfFirstInstructions = in_mEndOfFirstInstructions ;
  mProperty_mLoopExpression = in_mLoopExpression ;
  mProperty_mEndOfLoopExpression = in_mEndOfLoopExpression ;
  mProperty_mSecondInstructions = in_mSecondInstructions ;
  mProperty_mEndOfSecondInstructions = in_mEndOfSecondInstructions ;
  mProperty_mEndOfLoopInstruction = in_mEndOfLoopInstruction ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_loopInstructionWithVariantAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithVariantAST ;
}

void cPtr_loopInstructionWithVariantAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@loopInstructionWithVariantAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mVariantExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfVariantExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFirstInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfFirstInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLoopExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfLoopExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSecondInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfSecondInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfLoopInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_loopInstructionWithVariantAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_loopInstructionWithVariantAST (mProperty_mInstructionLocation, mProperty_mVariantExpression, mProperty_mEndOfVariantExpression, mProperty_mFirstInstructions, mProperty_mEndOfFirstInstructions, mProperty_mLoopExpression, mProperty_mEndOfLoopExpression, mProperty_mSecondInstructions, mProperty_mEndOfSecondInstructions, mProperty_mEndOfLoopInstruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_loopInstructionWithVariantAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVariantExpression.printNonNullClassInstanceProperties ("mVariantExpression") ;
    mProperty_mEndOfVariantExpression.printNonNullClassInstanceProperties ("mEndOfVariantExpression") ;
    mProperty_mFirstInstructions.printNonNullClassInstanceProperties ("mFirstInstructions") ;
    mProperty_mEndOfFirstInstructions.printNonNullClassInstanceProperties ("mEndOfFirstInstructions") ;
    mProperty_mLoopExpression.printNonNullClassInstanceProperties ("mLoopExpression") ;
    mProperty_mEndOfLoopExpression.printNonNullClassInstanceProperties ("mEndOfLoopExpression") ;
    mProperty_mSecondInstructions.printNonNullClassInstanceProperties ("mSecondInstructions") ;
    mProperty_mEndOfSecondInstructions.printNonNullClassInstanceProperties ("mEndOfSecondInstructions") ;
    mProperty_mEndOfLoopInstruction.printNonNullClassInstanceProperties ("mEndOfLoopInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @loopInstructionWithVariantAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantAST ("loopInstructionWithVariantAST",
                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_loopInstructionWithVariantAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithVariantAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_loopInstructionWithVariantAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_loopInstructionWithVariantAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST GGS_loopInstructionWithVariantAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithVariantAST result ;
  const GGS_loopInstructionWithVariantAST * p = (const GGS_loopInstructionWithVariantAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_loopInstructionWithVariantAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithVariantAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loopInstructionWithVariantAST_2E_weak::objectCompare (const GGS_loopInstructionWithVariantAST_2E_weak & inOperand) const {
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

GGS_loopInstructionWithVariantAST_2E_weak::GGS_loopInstructionWithVariantAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST_2E_weak & GGS_loopInstructionWithVariantAST_2E_weak::operator = (const GGS_loopInstructionWithVariantAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST_2E_weak::GGS_loopInstructionWithVariantAST_2E_weak (const GGS_loopInstructionWithVariantAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST_2E_weak GGS_loopInstructionWithVariantAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_loopInstructionWithVariantAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST GGS_loopInstructionWithVariantAST_2E_weak::unwrappedValue (void) const {
  GGS_loopInstructionWithVariantAST result ;
  if (isValid ()) {
    const cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_loopInstructionWithVariantAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST GGS_loopInstructionWithVariantAST_2E_weak::bang_loopInstructionWithVariantAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_loopInstructionWithVariantAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_loopInstructionWithVariantAST) ;
      result = GGS_loopInstructionWithVariantAST ((cPtr_loopInstructionWithVariantAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @loopInstructionWithVariantAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantAST_2E_weak ("loopInstructionWithVariantAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_loopInstructionWithVariantAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithVariantAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_loopInstructionWithVariantAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_loopInstructionWithVariantAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST_2E_weak GGS_loopInstructionWithVariantAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithVariantAST_2E_weak result ;
  const GGS_loopInstructionWithVariantAST_2E_weak * p = (const GGS_loopInstructionWithVariantAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_loopInstructionWithVariantAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithVariantAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @loopInstructionWithVariantForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loopInstructionWithVariantForGeneration::objectCompare (const GGS_loopInstructionWithVariantForGeneration & inOperand) const {
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

GGS_loopInstructionWithVariantForGeneration::GGS_loopInstructionWithVariantForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration GGS_loopInstructionWithVariantForGeneration::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_semanticExpressionForGeneration & in_mVariantExpression,
                          const GGS_semanticInstructionListForGeneration & in_mFirstInstructions,
                          const GGS_semanticExpressionForGeneration & in_mLoopExpression,
                          const GGS_semanticInstructionListForGeneration & in_mSecondInstructions,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_loopInstructionWithVariantForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_loopInstructionWithVariantForGeneration (inCompiler COMMA_THERE)) ;
  object->loopInstructionWithVariantForGeneration_init_21__21__21__21__21_ (in_mInstructionLocation, in_mVariantExpression, in_mFirstInstructions, in_mLoopExpression, in_mSecondInstructions, inCompiler) ;
  const GGS_loopInstructionWithVariantForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantForGeneration::
loopInstructionWithVariantForGeneration_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_semanticExpressionForGeneration & in_mVariantExpression,
                                                                  const GGS_semanticInstructionListForGeneration & in_mFirstInstructions,
                                                                  const GGS_semanticExpressionForGeneration & in_mLoopExpression,
                                                                  const GGS_semanticInstructionListForGeneration & in_mSecondInstructions,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVariantExpression = in_mVariantExpression ;
  mProperty_mFirstInstructions = in_mFirstInstructions ;
  mProperty_mLoopExpression = in_mLoopExpression ;
  mProperty_mSecondInstructions = in_mSecondInstructions ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration::GGS_loopInstructionWithVariantForGeneration (const cPtr_loopInstructionWithVariantForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loopInstructionWithVariantForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration GGS_loopInstructionWithVariantForGeneration::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                         const GGS_semanticExpressionForGeneration & in_mVariantExpression,
                                                                                                         const GGS_semanticInstructionListForGeneration & in_mFirstInstructions,
                                                                                                         const GGS_semanticExpressionForGeneration & in_mLoopExpression,
                                                                                                         const GGS_semanticInstructionListForGeneration & in_mSecondInstructions,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithVariantForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_loopInstructionWithVariantForGeneration (in_mInstructionLocation, in_mVariantExpression, in_mFirstInstructions, in_mLoopExpression, in_mSecondInstructions,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithVariantForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithVariantForGeneration * p = (cPtr_loopInstructionWithVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_loopInstructionWithVariantForGeneration::readProperty_mVariantExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_loopInstructionWithVariantForGeneration * p = (cPtr_loopInstructionWithVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantForGeneration) ;
    return p->mProperty_mVariantExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_loopInstructionWithVariantForGeneration::readProperty_mFirstInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_loopInstructionWithVariantForGeneration * p = (cPtr_loopInstructionWithVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantForGeneration) ;
    return p->mProperty_mFirstInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_loopInstructionWithVariantForGeneration::readProperty_mLoopExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_loopInstructionWithVariantForGeneration * p = (cPtr_loopInstructionWithVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantForGeneration) ;
    return p->mProperty_mLoopExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_loopInstructionWithVariantForGeneration::readProperty_mSecondInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_loopInstructionWithVariantForGeneration * p = (cPtr_loopInstructionWithVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantForGeneration) ;
    return p->mProperty_mSecondInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @loopInstructionWithVariantForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithVariantForGeneration::cPtr_loopInstructionWithVariantForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mVariantExpression (),
mProperty_mFirstInstructions (),
mProperty_mLoopExpression (),
mProperty_mSecondInstructions () {
}

//--------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithVariantForGeneration::cPtr_loopInstructionWithVariantForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                            const GGS_semanticExpressionForGeneration & in_mVariantExpression,
                                                                                            const GGS_semanticInstructionListForGeneration & in_mFirstInstructions,
                                                                                            const GGS_semanticExpressionForGeneration & in_mLoopExpression,
                                                                                            const GGS_semanticInstructionListForGeneration & in_mSecondInstructions,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mVariantExpression (),
mProperty_mFirstInstructions (),
mProperty_mLoopExpression (),
mProperty_mSecondInstructions () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVariantExpression = in_mVariantExpression ;
  mProperty_mFirstInstructions = in_mFirstInstructions ;
  mProperty_mLoopExpression = in_mLoopExpression ;
  mProperty_mSecondInstructions = in_mSecondInstructions ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_loopInstructionWithVariantForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration ;
}

void cPtr_loopInstructionWithVariantForGeneration::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@loopInstructionWithVariantForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mVariantExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFirstInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLoopExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSecondInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_loopInstructionWithVariantForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_loopInstructionWithVariantForGeneration (mProperty_mInstructionLocation, mProperty_mVariantExpression, mProperty_mFirstInstructions, mProperty_mLoopExpression, mProperty_mSecondInstructions, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_loopInstructionWithVariantForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mVariantExpression.printNonNullClassInstanceProperties ("mVariantExpression") ;
    mProperty_mFirstInstructions.printNonNullClassInstanceProperties ("mFirstInstructions") ;
    mProperty_mLoopExpression.printNonNullClassInstanceProperties ("mLoopExpression") ;
    mProperty_mSecondInstructions.printNonNullClassInstanceProperties ("mSecondInstructions") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @loopInstructionWithVariantForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration ("loopInstructionWithVariantForGeneration",
                                                                                            & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_loopInstructionWithVariantForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_loopInstructionWithVariantForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_loopInstructionWithVariantForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration GGS_loopInstructionWithVariantForGeneration::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithVariantForGeneration result ;
  const GGS_loopInstructionWithVariantForGeneration * p = (const GGS_loopInstructionWithVariantForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_loopInstructionWithVariantForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithVariantForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loopInstructionWithVariantForGeneration_2E_weak::objectCompare (const GGS_loopInstructionWithVariantForGeneration_2E_weak & inOperand) const {
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

GGS_loopInstructionWithVariantForGeneration_2E_weak::GGS_loopInstructionWithVariantForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration_2E_weak & GGS_loopInstructionWithVariantForGeneration_2E_weak::operator = (const GGS_loopInstructionWithVariantForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration_2E_weak::GGS_loopInstructionWithVariantForGeneration_2E_weak (const GGS_loopInstructionWithVariantForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration_2E_weak GGS_loopInstructionWithVariantForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_loopInstructionWithVariantForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration GGS_loopInstructionWithVariantForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_loopInstructionWithVariantForGeneration result ;
  if (isValid ()) {
    const cPtr_loopInstructionWithVariantForGeneration * p = (cPtr_loopInstructionWithVariantForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_loopInstructionWithVariantForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration GGS_loopInstructionWithVariantForGeneration_2E_weak::bang_loopInstructionWithVariantForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_loopInstructionWithVariantForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_loopInstructionWithVariantForGeneration) ;
      result = GGS_loopInstructionWithVariantForGeneration ((cPtr_loopInstructionWithVariantForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @loopInstructionWithVariantForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration_2E_weak ("loopInstructionWithVariantForGeneration.weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_loopInstructionWithVariantForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_loopInstructionWithVariantForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_loopInstructionWithVariantForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration_2E_weak GGS_loopInstructionWithVariantForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_loopInstructionWithVariantForGeneration_2E_weak result ;
  const GGS_loopInstructionWithVariantForGeneration_2E_weak * p = (const GGS_loopInstructionWithVariantForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_loopInstructionWithVariantForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithVariantForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @syntaxSendInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxSendInstructionAST::objectCompare (const GGS_syntaxSendInstructionAST & inOperand) const {
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

GGS_syntaxSendInstructionAST::GGS_syntaxSendInstructionAST (void) :
GGS_syntaxInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_syntaxSendInstructionAST GGS_syntaxSendInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_syntaxSendInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_syntaxSendInstructionAST (inCompiler COMMA_THERE)) ;
  object->syntaxSendInstructionAST_init_21__21_ (in_mInstructionLocation, in_mExpression, inCompiler) ;
  const GGS_syntaxSendInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_syntaxSendInstructionAST::
syntaxSendInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                       const GGS_semanticExpressionAST & in_mExpression,
                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionAST::GGS_syntaxSendInstructionAST (const cPtr_syntaxSendInstructionAST * inSourcePtr) :
GGS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syntaxSendInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionAST GGS_syntaxSendInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                           const GGS_semanticExpressionAST & in_mExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_syntaxSendInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_syntaxSendInstructionAST (in_mInstructionLocation, in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_syntaxSendInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_syntaxSendInstructionAST * p = (cPtr_syntaxSendInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxSendInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syntaxSendInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_syntaxSendInstructionAST::cPtr_syntaxSendInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_syntaxSendInstructionAST::cPtr_syntaxSendInstructionAST (const GGS_location & in_mInstructionLocation,
                                                              const GGS_semanticExpressionAST & in_mExpression,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_syntaxSendInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstructionAST ;
}

void cPtr_syntaxSendInstructionAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@syntaxSendInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_syntaxSendInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_syntaxSendInstructionAST (mProperty_mInstructionLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_syntaxSendInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @syntaxSendInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxSendInstructionAST ("syntaxSendInstructionAST",
                                                                             & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxSendInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxSendInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxSendInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionAST GGS_syntaxSendInstructionAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_syntaxSendInstructionAST result ;
  const GGS_syntaxSendInstructionAST * p = (const GGS_syntaxSendInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxSendInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxSendInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxSendInstructionAST_2E_weak::objectCompare (const GGS_syntaxSendInstructionAST_2E_weak & inOperand) const {
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

GGS_syntaxSendInstructionAST_2E_weak::GGS_syntaxSendInstructionAST_2E_weak (void) :
GGS_syntaxInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionAST_2E_weak & GGS_syntaxSendInstructionAST_2E_weak::operator = (const GGS_syntaxSendInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionAST_2E_weak::GGS_syntaxSendInstructionAST_2E_weak (const GGS_syntaxSendInstructionAST & inSource) :
GGS_syntaxInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionAST_2E_weak GGS_syntaxSendInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_syntaxSendInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionAST GGS_syntaxSendInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_syntaxSendInstructionAST result ;
  if (isValid ()) {
    const cPtr_syntaxSendInstructionAST * p = (cPtr_syntaxSendInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_syntaxSendInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionAST GGS_syntaxSendInstructionAST_2E_weak::bang_syntaxSendInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_syntaxSendInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syntaxSendInstructionAST) ;
      result = GGS_syntaxSendInstructionAST ((cPtr_syntaxSendInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @syntaxSendInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxSendInstructionAST_2E_weak ("syntaxSendInstructionAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxSendInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxSendInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxSendInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionAST_2E_weak GGS_syntaxSendInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_syntaxSendInstructionAST_2E_weak result ;
  const GGS_syntaxSendInstructionAST_2E_weak * p = (const GGS_syntaxSendInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxSendInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxSendInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @syntaxSendInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxSendInstructionForGeneration::objectCompare (const GGS_syntaxSendInstructionForGeneration & inOperand) const {
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

GGS_syntaxSendInstructionForGeneration::GGS_syntaxSendInstructionForGeneration (void) :
GGS_syntaxInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_syntaxSendInstructionForGeneration GGS_syntaxSendInstructionForGeneration::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_semanticExpressionForGeneration & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_syntaxSendInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_syntaxSendInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->syntaxSendInstructionForGeneration_init_21__21_ (in_mInstructionLocation, in_mExpression, inCompiler) ;
  const GGS_syntaxSendInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_syntaxSendInstructionForGeneration::
syntaxSendInstructionForGeneration_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                 const GGS_semanticExpressionForGeneration & in_mExpression,
                                                 Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionForGeneration::GGS_syntaxSendInstructionForGeneration (const cPtr_syntaxSendInstructionForGeneration * inSourcePtr) :
GGS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syntaxSendInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionForGeneration GGS_syntaxSendInstructionForGeneration::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                               const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  GGS_syntaxSendInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_syntaxSendInstructionForGeneration (in_mInstructionLocation, in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_syntaxSendInstructionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_syntaxSendInstructionForGeneration * p = (cPtr_syntaxSendInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxSendInstructionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syntaxSendInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_syntaxSendInstructionForGeneration::cPtr_syntaxSendInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_syntaxSendInstructionForGeneration::cPtr_syntaxSendInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                  const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_syntaxSendInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration ;
}

void cPtr_syntaxSendInstructionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@syntaxSendInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_syntaxSendInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_syntaxSendInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_syntaxSendInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @syntaxSendInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration ("syntaxSendInstructionForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxSendInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxSendInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxSendInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionForGeneration GGS_syntaxSendInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_syntaxSendInstructionForGeneration result ;
  const GGS_syntaxSendInstructionForGeneration * p = (const GGS_syntaxSendInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxSendInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxSendInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxSendInstructionForGeneration_2E_weak::objectCompare (const GGS_syntaxSendInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_syntaxSendInstructionForGeneration_2E_weak::GGS_syntaxSendInstructionForGeneration_2E_weak (void) :
GGS_syntaxInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionForGeneration_2E_weak & GGS_syntaxSendInstructionForGeneration_2E_weak::operator = (const GGS_syntaxSendInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionForGeneration_2E_weak::GGS_syntaxSendInstructionForGeneration_2E_weak (const GGS_syntaxSendInstructionForGeneration & inSource) :
GGS_syntaxInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionForGeneration_2E_weak GGS_syntaxSendInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_syntaxSendInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionForGeneration GGS_syntaxSendInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_syntaxSendInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_syntaxSendInstructionForGeneration * p = (cPtr_syntaxSendInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_syntaxSendInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionForGeneration GGS_syntaxSendInstructionForGeneration_2E_weak::bang_syntaxSendInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_syntaxSendInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syntaxSendInstructionForGeneration) ;
      result = GGS_syntaxSendInstructionForGeneration ((cPtr_syntaxSendInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @syntaxSendInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration_2E_weak ("syntaxSendInstructionForGeneration.weak",
                                                                                               & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxSendInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxSendInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxSendInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionForGeneration_2E_weak GGS_syntaxSendInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_syntaxSendInstructionForGeneration_2E_weak result ;
  const GGS_syntaxSendInstructionForGeneration_2E_weak * p = (const GGS_syntaxSendInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxSendInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxSendInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::objectCompare (const GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak & inOperand) const {
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

GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak & GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::operator = (const GGS_localVariableOrConstantDeclarationWithAssignmentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak (const GGS_localVariableOrConstantDeclarationWithAssignmentAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithAssignmentAST GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::unwrappedValue (void) const {
  GGS_localVariableOrConstantDeclarationWithAssignmentAST result ;
  if (isValid ()) {
    const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_localVariableOrConstantDeclarationWithAssignmentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithAssignmentAST GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::bang_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_localVariableOrConstantDeclarationWithAssignmentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
      result = GGS_localVariableOrConstantDeclarationWithAssignmentAST ((cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @localVariableOrConstantDeclarationWithAssignmentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak ("localVariableOrConstantDeclarationWithAssignmentAST.weak",
                                                                                                                & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak result ;
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak * p = (const GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableOrConstantDeclarationWithAssignmentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_undefinedLocalConstantDeclarationAST_2E_weak::objectCompare (const GGS_undefinedLocalConstantDeclarationAST_2E_weak & inOperand) const {
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

GGS_undefinedLocalConstantDeclarationAST_2E_weak::GGS_undefinedLocalConstantDeclarationAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationAST_2E_weak & GGS_undefinedLocalConstantDeclarationAST_2E_weak::operator = (const GGS_undefinedLocalConstantDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationAST_2E_weak::GGS_undefinedLocalConstantDeclarationAST_2E_weak (const GGS_undefinedLocalConstantDeclarationAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationAST_2E_weak GGS_undefinedLocalConstantDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_undefinedLocalConstantDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationAST GGS_undefinedLocalConstantDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_undefinedLocalConstantDeclarationAST result ;
  if (isValid ()) {
    const cPtr_undefinedLocalConstantDeclarationAST * p = (cPtr_undefinedLocalConstantDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_undefinedLocalConstantDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationAST GGS_undefinedLocalConstantDeclarationAST_2E_weak::bang_undefinedLocalConstantDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_undefinedLocalConstantDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_undefinedLocalConstantDeclarationAST) ;
      result = GGS_undefinedLocalConstantDeclarationAST ((cPtr_undefinedLocalConstantDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @undefinedLocalConstantDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST_2E_weak ("undefinedLocalConstantDeclarationAST.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_undefinedLocalConstantDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_undefinedLocalConstantDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_undefinedLocalConstantDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationAST_2E_weak GGS_undefinedLocalConstantDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_undefinedLocalConstantDeclarationAST_2E_weak result ;
  const GGS_undefinedLocalConstantDeclarationAST_2E_weak * p = (const GGS_undefinedLocalConstantDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_undefinedLocalConstantDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("undefinedLocalConstantDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localConstantDeclarationWithAssignmentAST_2E_weak::objectCompare (const GGS_localConstantDeclarationWithAssignmentAST_2E_weak & inOperand) const {
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

GGS_localConstantDeclarationWithAssignmentAST_2E_weak::GGS_localConstantDeclarationWithAssignmentAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantDeclarationWithAssignmentAST_2E_weak & GGS_localConstantDeclarationWithAssignmentAST_2E_weak::operator = (const GGS_localConstantDeclarationWithAssignmentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantDeclarationWithAssignmentAST_2E_weak::GGS_localConstantDeclarationWithAssignmentAST_2E_weak (const GGS_localConstantDeclarationWithAssignmentAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_localConstantDeclarationWithAssignmentAST_2E_weak GGS_localConstantDeclarationWithAssignmentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_localConstantDeclarationWithAssignmentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantDeclarationWithAssignmentAST GGS_localConstantDeclarationWithAssignmentAST_2E_weak::unwrappedValue (void) const {
  GGS_localConstantDeclarationWithAssignmentAST result ;
  if (isValid ()) {
    const cPtr_localConstantDeclarationWithAssignmentAST * p = (cPtr_localConstantDeclarationWithAssignmentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_localConstantDeclarationWithAssignmentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantDeclarationWithAssignmentAST GGS_localConstantDeclarationWithAssignmentAST_2E_weak::bang_localConstantDeclarationWithAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_localConstantDeclarationWithAssignmentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localConstantDeclarationWithAssignmentAST) ;
      result = GGS_localConstantDeclarationWithAssignmentAST ((cPtr_localConstantDeclarationWithAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @localConstantDeclarationWithAssignmentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST_2E_weak ("localConstantDeclarationWithAssignmentAST.weak",
                                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localConstantDeclarationWithAssignmentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localConstantDeclarationWithAssignmentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localConstantDeclarationWithAssignmentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantDeclarationWithAssignmentAST_2E_weak GGS_localConstantDeclarationWithAssignmentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_localConstantDeclarationWithAssignmentAST_2E_weak result ;
  const GGS_localConstantDeclarationWithAssignmentAST_2E_weak * p = (const GGS_localConstantDeclarationWithAssignmentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localConstantDeclarationWithAssignmentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localConstantDeclarationWithAssignmentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @undefinedLocalConstantDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_undefinedLocalConstantDeclarationForGeneration::objectCompare (const GGS_undefinedLocalConstantDeclarationForGeneration & inOperand) const {
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

GGS_undefinedLocalConstantDeclarationForGeneration::GGS_undefinedLocalConstantDeclarationForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration GGS_undefinedLocalConstantDeclarationForGeneration::
init_21__21_ (const GGS_unifiedTypeMapEntry & in_mTargetType,
              const GGS_string & in_mCppVariableName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_undefinedLocalConstantDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_undefinedLocalConstantDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->undefinedLocalConstantDeclarationForGeneration_init_21__21_ (in_mTargetType, in_mCppVariableName, inCompiler) ;
  const GGS_undefinedLocalConstantDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_undefinedLocalConstantDeclarationForGeneration::
undefinedLocalConstantDeclarationForGeneration_init_21__21_ (const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                             const GGS_string & in_mCppVariableName,
                                                             Compiler * /* inCompiler */) {
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mCppVariableName = in_mCppVariableName ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration::GGS_undefinedLocalConstantDeclarationForGeneration (const cPtr_undefinedLocalConstantDeclarationForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration GGS_undefinedLocalConstantDeclarationForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                                                                                       const GGS_string & in_mCppVariableName,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_undefinedLocalConstantDeclarationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_undefinedLocalConstantDeclarationForGeneration (in_mTargetType, in_mCppVariableName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_undefinedLocalConstantDeclarationForGeneration::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_undefinedLocalConstantDeclarationForGeneration * p = (cPtr_undefinedLocalConstantDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_undefinedLocalConstantDeclarationForGeneration::readProperty_mCppVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_undefinedLocalConstantDeclarationForGeneration * p = (cPtr_undefinedLocalConstantDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
    return p->mProperty_mCppVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @undefinedLocalConstantDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_undefinedLocalConstantDeclarationForGeneration::cPtr_undefinedLocalConstantDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mTargetType (),
mProperty_mCppVariableName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_undefinedLocalConstantDeclarationForGeneration::cPtr_undefinedLocalConstantDeclarationForGeneration (const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                                                                          const GGS_string & in_mCppVariableName,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mTargetType (),
mProperty_mCppVariableName () {
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mCppVariableName = in_mCppVariableName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_undefinedLocalConstantDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ;
}

void cPtr_undefinedLocalConstantDeclarationForGeneration::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@undefinedLocalConstantDeclarationForGeneration:") ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_undefinedLocalConstantDeclarationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_undefinedLocalConstantDeclarationForGeneration (mProperty_mTargetType, mProperty_mCppVariableName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_undefinedLocalConstantDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mTargetType.printNonNullClassInstanceProperties ("mTargetType") ;
    mProperty_mCppVariableName.printNonNullClassInstanceProperties ("mCppVariableName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @undefinedLocalConstantDeclarationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ("undefinedLocalConstantDeclarationForGeneration",
                                                                                                   & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_undefinedLocalConstantDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_undefinedLocalConstantDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_undefinedLocalConstantDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration GGS_undefinedLocalConstantDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_undefinedLocalConstantDeclarationForGeneration result ;
  const GGS_undefinedLocalConstantDeclarationForGeneration * p = (const GGS_undefinedLocalConstantDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_undefinedLocalConstantDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("undefinedLocalConstantDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::objectCompare (const GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak & inOperand) const {
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

GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak & GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::operator = (const GGS_undefinedLocalConstantDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak (const GGS_undefinedLocalConstantDeclarationForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_undefinedLocalConstantDeclarationForGeneration result ;
  if (isValid ()) {
    const cPtr_undefinedLocalConstantDeclarationForGeneration * p = (cPtr_undefinedLocalConstantDeclarationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_undefinedLocalConstantDeclarationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::bang_undefinedLocalConstantDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_undefinedLocalConstantDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
      result = GGS_undefinedLocalConstantDeclarationForGeneration ((cPtr_undefinedLocalConstantDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @undefinedLocalConstantDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration_2E_weak ("undefinedLocalConstantDeclarationForGeneration.weak",
                                                                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak result ;
  const GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak * p = (const GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_undefinedLocalConstantDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("undefinedLocalConstantDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @localVariableOrConstantDeclarationWithSourceExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::objectCompare (const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration & inOperand) const {
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

GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mTargetType,
                      const GGS_bool & in_mIsConstant,
                      const GGS_string & in_mCppVariableName,
                      const GGS_semanticExpressionForGeneration & in_mSourceExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->localVariableOrConstantDeclarationWithSourceExpressionForGeneration_init_21__21__21__21_ (in_mTargetType, in_mIsConstant, in_mCppVariableName, in_mSourceExpression, inCompiler) ;
  const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::
localVariableOrConstantDeclarationWithSourceExpressionForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                                                          const GGS_bool & in_mIsConstant,
                                                                                          const GGS_string & in_mCppVariableName,
                                                                                          const GGS_semanticExpressionForGeneration & in_mSourceExpression,
                                                                                          Compiler * /* inCompiler */) {
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mIsConstant = in_mIsConstant ;
  mProperty_mCppVariableName = in_mCppVariableName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                                                                                                                                 const GGS_bool & in_mIsConstant,
                                                                                                                                                                 const GGS_string & in_mCppVariableName,
                                                                                                                                                                 const GGS_semanticExpressionForGeneration & in_mSourceExpression,
                                                                                                                                                                 Compiler * inCompiler
                                                                                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (in_mTargetType, in_mIsConstant, in_mCppVariableName, in_mSourceExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::readProperty_mIsConstant (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    return p->mProperty_mIsConstant ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::readProperty_mCppVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    return p->mProperty_mCppVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @localVariableOrConstantDeclarationWithSourceExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mTargetType (),
mProperty_mIsConstant (),
mProperty_mCppVariableName (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                                                                                                                    const GGS_bool & in_mIsConstant,
                                                                                                                                                    const GGS_string & in_mCppVariableName,
                                                                                                                                                    const GGS_semanticExpressionForGeneration & in_mSourceExpression,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mTargetType (),
mProperty_mIsConstant (),
mProperty_mCppVariableName (),
mProperty_mSourceExpression () {
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mIsConstant = in_mIsConstant ;
  mProperty_mCppVariableName = in_mCppVariableName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration ;
}

void cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::description (String & ioString,
                                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@localVariableOrConstantDeclarationWithSourceExpressionForGeneration:") ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsConstant.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (mProperty_mTargetType, mProperty_mIsConstant, mProperty_mCppVariableName, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mTargetType.printNonNullClassInstanceProperties ("mTargetType") ;
    mProperty_mIsConstant.printNonNullClassInstanceProperties ("mIsConstant") ;
    mProperty_mCppVariableName.printNonNullClassInstanceProperties ("mCppVariableName") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @localVariableOrConstantDeclarationWithSourceExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration ("localVariableOrConstantDeclarationWithSourceExpressionForGeneration",
                                                                                                                        & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                                                                Compiler * inCompiler
                                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration result ;
  const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableOrConstantDeclarationWithSourceExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::objectCompare (const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak & GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::operator = (const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak (const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::bang_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
      result = GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration ((cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @localVariableOrConstantDeclarationWithSourceExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak ("localVariableOrConstantDeclarationWithSourceExpressionForGeneration.weak",
                                                                                                                                & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                                                Compiler * inCompiler
                                                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak result ;
  const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak * p = (const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableOrConstantDeclarationWithSourceExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::objectCompare (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak & inOperand) const {
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

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak & GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::operator = (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::unwrappedValue (void) const {
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult result ;
  if (isValid ()) {
    const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * p = (cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::bang_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
      result = GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractGrammarInstructionSyntaxDirectedTranslationResult.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak ("abstractGrammarInstructionSyntaxDirectedTranslationResult.weak",
                                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                            Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak result ;
  const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak * p = (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractGrammarInstructionSyntaxDirectedTranslationResult.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @grammarInstructionSyntaxDirectedTranslationResultNone reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationResultNone::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationResultNone::GGS_grammarInstructionSyntaxDirectedTranslationResultNone (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone GGS_grammarInstructionSyntaxDirectedTranslationResultNone::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_grammarInstructionSyntaxDirectedTranslationResultNone * object = nullptr ;
  macroMyNew (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (inCompiler COMMA_THERE)) ;
  object->grammarInstructionSyntaxDirectedTranslationResultNone_init (inCompiler) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultNone result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::
grammarInstructionSyntaxDirectedTranslationResultNone_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone::GGS_grammarInstructionSyntaxDirectedTranslationResultNone (const cPtr_grammarInstructionSyntaxDirectedTranslationResultNone * inSourcePtr) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone) ;
}
//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone GGS_grammarInstructionSyntaxDirectedTranslationResultNone::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultNone result ;
  macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionSyntaxDirectedTranslationResultNone class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::description (String & ioString,
                                                                              const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@grammarInstructionSyntaxDirectedTranslationResultNone]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationResultNone generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone ("grammarInstructionSyntaxDirectedTranslationResultNone",
                                                                                                          & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInstructionSyntaxDirectedTranslationResultNone::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationResultNone::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationResultNone (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone GGS_grammarInstructionSyntaxDirectedTranslationResultNone::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultNone result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultNone * p = (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationResultNone *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultNone", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak & GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::operator = (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone & inSource) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::unwrappedValue (void) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultNone result ;
  if (isValid ()) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultNone * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultNone *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultNone (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::bang_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultNone result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone) ;
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultNone ((cPtr_grammarInstructionSyntaxDirectedTranslationResultNone *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationResultNone.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak ("grammarInstructionSyntaxDirectedTranslationResultNone.weak",
                                                                                                                  & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak * p = (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultNone.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @grammarInstructionSyntaxDirectedTranslationDropResult reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationDropResult::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationDropResult::GGS_grammarInstructionSyntaxDirectedTranslationDropResult (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult GGS_grammarInstructionSyntaxDirectedTranslationDropResult::
init_21_ (const GGS_location & in_mLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * object = nullptr ;
  macroMyNew (object, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (inCompiler COMMA_THERE)) ;
  object->grammarInstructionSyntaxDirectedTranslationDropResult_init_21_ (in_mLocation, inCompiler) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationDropResult result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::
grammarInstructionSyntaxDirectedTranslationDropResult_init_21_ (const GGS_location & in_mLocation,
                                                                Compiler * /* inCompiler */) {
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult::GGS_grammarInstructionSyntaxDirectedTranslationDropResult (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * inSourcePtr) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
}
//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult GGS_grammarInstructionSyntaxDirectedTranslationDropResult::class_func_new (const GGS_location & in_mLocation,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationDropResult result ;
  macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (in_mLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_grammarInstructionSyntaxDirectedTranslationDropResult::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * p = (cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionSyntaxDirectedTranslationDropResult class
//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (inCompiler COMMA_THERE),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (const GGS_location & in_mLocation,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (inCompiler COMMA_THERE),
mProperty_mLocation () {
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@grammarInstructionSyntaxDirectedTranslationDropResult:") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::printNonNullClassInstanceProperties () ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationDropResult generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult ("grammarInstructionSyntaxDirectedTranslationDropResult",
                                                                                                          & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInstructionSyntaxDirectedTranslationDropResult::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationDropResult::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationDropResult (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult GGS_grammarInstructionSyntaxDirectedTranslationDropResult::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationDropResult result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationDropResult * p = (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationDropResult *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationDropResult", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak & GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::operator = (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult & inSource) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::unwrappedValue (void) const {
  GGS_grammarInstructionSyntaxDirectedTranslationDropResult result ;
  if (isValid ()) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * p = (cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInstructionSyntaxDirectedTranslationDropResult (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::bang_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInstructionSyntaxDirectedTranslationDropResult result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
      result = GGS_grammarInstructionSyntaxDirectedTranslationDropResult ((cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationDropResult.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak ("grammarInstructionSyntaxDirectedTranslationDropResult.weak",
                                                                                                                  & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak * p = (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationDropResult.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak & GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::operator = (const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak (const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar & inSource) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::unwrappedValue (void) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInVar result ;
  if (isValid ()) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultInVar (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::bang_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInVar result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultInVar ((cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationResultInVar.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak ("grammarInstructionSyntaxDirectedTranslationResultInVar.weak",
                                                                                                                   & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak * p = (const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInVar.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak & GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::operator = (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inSource) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::unwrappedValue (void) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar result ;
  if (isValid ()) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::bang_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ((cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.weak",
                                                                                                                           & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak * p = (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak & GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::operator = (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inSource) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::unwrappedValue (void) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst result ;
  if (isValid ()) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::bang_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ((cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.weak",
                                                                                                                             & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak * p = (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInFileInstructionAST_2E_weak::objectCompare (const GGS_grammarInFileInstructionAST_2E_weak & inOperand) const {
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

GGS_grammarInFileInstructionAST_2E_weak::GGS_grammarInFileInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInFileInstructionAST_2E_weak & GGS_grammarInFileInstructionAST_2E_weak::operator = (const GGS_grammarInFileInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInFileInstructionAST_2E_weak::GGS_grammarInFileInstructionAST_2E_weak (const GGS_grammarInFileInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInFileInstructionAST_2E_weak GGS_grammarInFileInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInFileInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInFileInstructionAST GGS_grammarInFileInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_grammarInFileInstructionAST result ;
  if (isValid ()) {
    const cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInFileInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInFileInstructionAST GGS_grammarInFileInstructionAST_2E_weak::bang_grammarInFileInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInFileInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInFileInstructionAST) ;
      result = GGS_grammarInFileInstructionAST ((cPtr_grammarInFileInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInFileInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInFileInstructionAST_2E_weak ("grammarInFileInstructionAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInFileInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInFileInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInFileInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInFileInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInFileInstructionAST_2E_weak GGS_grammarInFileInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_grammarInFileInstructionAST_2E_weak result ;
  const GGS_grammarInFileInstructionAST_2E_weak * p = (const GGS_grammarInFileInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInFileInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInFileInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInStringInstructionAST_2E_weak::objectCompare (const GGS_grammarInStringInstructionAST_2E_weak & inOperand) const {
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

GGS_grammarInStringInstructionAST_2E_weak::GGS_grammarInStringInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInStringInstructionAST_2E_weak & GGS_grammarInStringInstructionAST_2E_weak::operator = (const GGS_grammarInStringInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInStringInstructionAST_2E_weak::GGS_grammarInStringInstructionAST_2E_weak (const GGS_grammarInStringInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInStringInstructionAST_2E_weak GGS_grammarInStringInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInStringInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInStringInstructionAST GGS_grammarInStringInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_grammarInStringInstructionAST result ;
  if (isValid ()) {
    const cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInStringInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInStringInstructionAST GGS_grammarInStringInstructionAST_2E_weak::bang_grammarInStringInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInStringInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInStringInstructionAST) ;
      result = GGS_grammarInStringInstructionAST ((cPtr_grammarInStringInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInStringInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInStringInstructionAST_2E_weak ("grammarInStringInstructionAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInStringInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInStringInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInStringInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInStringInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInStringInstructionAST_2E_weak GGS_grammarInStringInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_grammarInStringInstructionAST_2E_weak result ;
  const GGS_grammarInStringInstructionAST_2E_weak * p = (const GGS_grammarInStringInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInStringInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInStringInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @grammarInstructionWithSourceFileForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionWithSourceFileForGeneration::objectCompare (const GGS_grammarInstructionWithSourceFileForGeneration & inOperand) const {
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

GGS_grammarInstructionWithSourceFileForGeneration::GGS_grammarInstructionWithSourceFileForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration GGS_grammarInstructionWithSourceFileForGeneration::
init_21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                      const GGS_string & in_mGrammarName,
                                      const GGS_string & in_mLabelName,
                                      const GGS_semanticExpressionForGeneration & in_mSourceFileExpression,
                                      const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                      const GGS_bool & in_mGrammarHasTranslateFeature,
                                      const GGS_stringlist & in_mAssignementList,
                                      const GGS_string & in_mSyntaxDirectedTranslationResultVarName,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_grammarInstructionWithSourceFileForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_grammarInstructionWithSourceFileForGeneration (inCompiler COMMA_THERE)) ;
  object->grammarInstructionWithSourceFileForGeneration_init_21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mGrammarName, in_mLabelName, in_mSourceFileExpression, in_mActualParameterList, in_mGrammarHasTranslateFeature, in_mAssignementList, in_mSyntaxDirectedTranslationResultVarName, inCompiler) ;
  const GGS_grammarInstructionWithSourceFileForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceFileForGeneration::
grammarInstructionWithSourceFileForGeneration_init_21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                                    const GGS_string & in_mGrammarName,
                                                                                    const GGS_string & in_mLabelName,
                                                                                    const GGS_semanticExpressionForGeneration & in_mSourceFileExpression,
                                                                                    const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                    const GGS_bool & in_mGrammarHasTranslateFeature,
                                                                                    const GGS_stringlist & in_mAssignementList,
                                                                                    const GGS_string & in_mSyntaxDirectedTranslationResultVarName,
                                                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mGrammarName = in_mGrammarName ;
  mProperty_mLabelName = in_mLabelName ;
  mProperty_mSourceFileExpression = in_mSourceFileExpression ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mGrammarHasTranslateFeature = in_mGrammarHasTranslateFeature ;
  mProperty_mAssignementList = in_mAssignementList ;
  mProperty_mSyntaxDirectedTranslationResultVarName = in_mSyntaxDirectedTranslationResultVarName ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration::GGS_grammarInstructionWithSourceFileForGeneration (const cPtr_grammarInstructionWithSourceFileForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionWithSourceFileForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration GGS_grammarInstructionWithSourceFileForGeneration::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                     const GGS_string & in_mGrammarName,
                                                                                                                     const GGS_string & in_mLabelName,
                                                                                                                     const GGS_semanticExpressionForGeneration & in_mSourceFileExpression,
                                                                                                                     const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                                                     const GGS_bool & in_mGrammarHasTranslateFeature,
                                                                                                                     const GGS_stringlist & in_mAssignementList,
                                                                                                                     const GGS_string & in_mSyntaxDirectedTranslationResultVarName,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionWithSourceFileForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_grammarInstructionWithSourceFileForGeneration (in_mInstructionLocation, in_mGrammarName, in_mLabelName, in_mSourceFileExpression, in_mActualParameterList, in_mGrammarHasTranslateFeature, in_mAssignementList, in_mSyntaxDirectedTranslationResultVarName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_grammarInstructionWithSourceFileForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_grammarInstructionWithSourceFileForGeneration::readProperty_mGrammarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mGrammarName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_grammarInstructionWithSourceFileForGeneration::readProperty_mLabelName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mLabelName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_grammarInstructionWithSourceFileForGeneration::readProperty_mSourceFileExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mSourceFileExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_grammarInstructionWithSourceFileForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualParameterListForGeneration () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_grammarInstructionWithSourceFileForGeneration::readProperty_mGrammarHasTranslateFeature (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mGrammarHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_grammarInstructionWithSourceFileForGeneration::readProperty_mAssignementList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringlist () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mAssignementList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_grammarInstructionWithSourceFileForGeneration::readProperty_mSyntaxDirectedTranslationResultVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mSyntaxDirectedTranslationResultVarName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionWithSourceFileForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionWithSourceFileForGeneration::cPtr_grammarInstructionWithSourceFileForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mGrammarName (),
mProperty_mLabelName (),
mProperty_mSourceFileExpression (),
mProperty_mActualParameterList (),
mProperty_mGrammarHasTranslateFeature (),
mProperty_mAssignementList (),
mProperty_mSyntaxDirectedTranslationResultVarName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionWithSourceFileForGeneration::cPtr_grammarInstructionWithSourceFileForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                                        const GGS_string & in_mGrammarName,
                                                                                                        const GGS_string & in_mLabelName,
                                                                                                        const GGS_semanticExpressionForGeneration & in_mSourceFileExpression,
                                                                                                        const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                                        const GGS_bool & in_mGrammarHasTranslateFeature,
                                                                                                        const GGS_stringlist & in_mAssignementList,
                                                                                                        const GGS_string & in_mSyntaxDirectedTranslationResultVarName,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mGrammarName (),
mProperty_mLabelName (),
mProperty_mSourceFileExpression (),
mProperty_mActualParameterList (),
mProperty_mGrammarHasTranslateFeature (),
mProperty_mAssignementList (),
mProperty_mSyntaxDirectedTranslationResultVarName () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mGrammarName = in_mGrammarName ;
  mProperty_mLabelName = in_mLabelName ;
  mProperty_mSourceFileExpression = in_mSourceFileExpression ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mGrammarHasTranslateFeature = in_mGrammarHasTranslateFeature ;
  mProperty_mAssignementList = in_mAssignementList ;
  mProperty_mSyntaxDirectedTranslationResultVarName = in_mSyntaxDirectedTranslationResultVarName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_grammarInstructionWithSourceFileForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration ;
}

void cPtr_grammarInstructionWithSourceFileForGeneration::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@grammarInstructionWithSourceFileForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLabelName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceFileExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAssignementList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSyntaxDirectedTranslationResultVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInstructionWithSourceFileForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarInstructionWithSourceFileForGeneration (mProperty_mInstructionLocation, mProperty_mGrammarName, mProperty_mLabelName, mProperty_mSourceFileExpression, mProperty_mActualParameterList, mProperty_mGrammarHasTranslateFeature, mProperty_mAssignementList, mProperty_mSyntaxDirectedTranslationResultVarName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarInstructionWithSourceFileForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mGrammarName.printNonNullClassInstanceProperties ("mGrammarName") ;
    mProperty_mLabelName.printNonNullClassInstanceProperties ("mLabelName") ;
    mProperty_mSourceFileExpression.printNonNullClassInstanceProperties ("mSourceFileExpression") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mGrammarHasTranslateFeature.printNonNullClassInstanceProperties ("mGrammarHasTranslateFeature") ;
    mProperty_mAssignementList.printNonNullClassInstanceProperties ("mAssignementList") ;
    mProperty_mSyntaxDirectedTranslationResultVarName.printNonNullClassInstanceProperties ("mSyntaxDirectedTranslationResultVarName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionWithSourceFileForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration ("grammarInstructionWithSourceFileForGeneration",
                                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInstructionWithSourceFileForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionWithSourceFileForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionWithSourceFileForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration GGS_grammarInstructionWithSourceFileForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionWithSourceFileForGeneration result ;
  const GGS_grammarInstructionWithSourceFileForGeneration * p = (const GGS_grammarInstructionWithSourceFileForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionWithSourceFileForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionWithSourceFileForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::objectCompare (const GGS_grammarInstructionWithSourceFileForGeneration_2E_weak & inOperand) const {
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

GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::GGS_grammarInstructionWithSourceFileForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration_2E_weak & GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::operator = (const GGS_grammarInstructionWithSourceFileForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::GGS_grammarInstructionWithSourceFileForGeneration_2E_weak (const GGS_grammarInstructionWithSourceFileForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration_2E_weak GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInstructionWithSourceFileForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_grammarInstructionWithSourceFileForGeneration result ;
  if (isValid ()) {
    const cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInstructionWithSourceFileForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::bang_grammarInstructionWithSourceFileForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInstructionWithSourceFileForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionWithSourceFileForGeneration) ;
      result = GGS_grammarInstructionWithSourceFileForGeneration ((cPtr_grammarInstructionWithSourceFileForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionWithSourceFileForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration_2E_weak ("grammarInstructionWithSourceFileForGeneration.weak",
                                                                                                          & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionWithSourceFileForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration_2E_weak GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionWithSourceFileForGeneration_2E_weak result ;
  const GGS_grammarInstructionWithSourceFileForGeneration_2E_weak * p = (const GGS_grammarInstructionWithSourceFileForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionWithSourceFileForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionWithSourceFileForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @grammarInstructionWithSourceExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionWithSourceExpressionForGeneration::objectCompare (const GGS_grammarInstructionWithSourceExpressionForGeneration & inOperand) const {
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

GGS_grammarInstructionWithSourceExpressionForGeneration::GGS_grammarInstructionWithSourceExpressionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration GGS_grammarInstructionWithSourceExpressionForGeneration::
init_21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                          const GGS_string & in_mGrammarName,
                                          const GGS_string & in_mLabelName,
                                          const GGS_semanticExpressionForGeneration & in_mSourceStringExpression,
                                          const GGS_semanticExpressionForGeneration & in_mNameStringExpression,
                                          const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                          const GGS_bool & in_mGrammarHasTranslateFeature,
                                          const GGS_stringlist & in_mAssignementList,
                                          const GGS_string & in_mSyntaxDirectedTranslationResultVarName,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_grammarInstructionWithSourceExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_grammarInstructionWithSourceExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->grammarInstructionWithSourceExpressionForGeneration_init_21__21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mGrammarName, in_mLabelName, in_mSourceStringExpression, in_mNameStringExpression, in_mActualParameterList, in_mGrammarHasTranslateFeature, in_mAssignementList, in_mSyntaxDirectedTranslationResultVarName, inCompiler) ;
  const GGS_grammarInstructionWithSourceExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceExpressionForGeneration::
grammarInstructionWithSourceExpressionForGeneration_init_21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                                              const GGS_string & in_mGrammarName,
                                                                                              const GGS_string & in_mLabelName,
                                                                                              const GGS_semanticExpressionForGeneration & in_mSourceStringExpression,
                                                                                              const GGS_semanticExpressionForGeneration & in_mNameStringExpression,
                                                                                              const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                              const GGS_bool & in_mGrammarHasTranslateFeature,
                                                                                              const GGS_stringlist & in_mAssignementList,
                                                                                              const GGS_string & in_mSyntaxDirectedTranslationResultVarName,
                                                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mGrammarName = in_mGrammarName ;
  mProperty_mLabelName = in_mLabelName ;
  mProperty_mSourceStringExpression = in_mSourceStringExpression ;
  mProperty_mNameStringExpression = in_mNameStringExpression ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mGrammarHasTranslateFeature = in_mGrammarHasTranslateFeature ;
  mProperty_mAssignementList = in_mAssignementList ;
  mProperty_mSyntaxDirectedTranslationResultVarName = in_mSyntaxDirectedTranslationResultVarName ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration::GGS_grammarInstructionWithSourceExpressionForGeneration (const cPtr_grammarInstructionWithSourceExpressionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration GGS_grammarInstructionWithSourceExpressionForGeneration::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                                 const GGS_string & in_mGrammarName,
                                                                                                                                 const GGS_string & in_mLabelName,
                                                                                                                                 const GGS_semanticExpressionForGeneration & in_mSourceStringExpression,
                                                                                                                                 const GGS_semanticExpressionForGeneration & in_mNameStringExpression,
                                                                                                                                 const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                                                                 const GGS_bool & in_mGrammarHasTranslateFeature,
                                                                                                                                 const GGS_stringlist & in_mAssignementList,
                                                                                                                                 const GGS_string & in_mSyntaxDirectedTranslationResultVarName,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionWithSourceExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_grammarInstructionWithSourceExpressionForGeneration (in_mInstructionLocation, in_mGrammarName, in_mLabelName, in_mSourceStringExpression, in_mNameStringExpression, in_mActualParameterList, in_mGrammarHasTranslateFeature, in_mAssignementList, in_mSyntaxDirectedTranslationResultVarName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mGrammarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mGrammarName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mLabelName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mLabelName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mSourceStringExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mSourceStringExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mNameStringExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mNameStringExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualParameterListForGeneration () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mGrammarHasTranslateFeature (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mGrammarHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mAssignementList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringlist () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mAssignementList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mSyntaxDirectedTranslationResultVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mSyntaxDirectedTranslationResultVarName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionWithSourceExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionWithSourceExpressionForGeneration::cPtr_grammarInstructionWithSourceExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mGrammarName (),
mProperty_mLabelName (),
mProperty_mSourceStringExpression (),
mProperty_mNameStringExpression (),
mProperty_mActualParameterList (),
mProperty_mGrammarHasTranslateFeature (),
mProperty_mAssignementList (),
mProperty_mSyntaxDirectedTranslationResultVarName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionWithSourceExpressionForGeneration::cPtr_grammarInstructionWithSourceExpressionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                                                    const GGS_string & in_mGrammarName,
                                                                                                                    const GGS_string & in_mLabelName,
                                                                                                                    const GGS_semanticExpressionForGeneration & in_mSourceStringExpression,
                                                                                                                    const GGS_semanticExpressionForGeneration & in_mNameStringExpression,
                                                                                                                    const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                                                    const GGS_bool & in_mGrammarHasTranslateFeature,
                                                                                                                    const GGS_stringlist & in_mAssignementList,
                                                                                                                    const GGS_string & in_mSyntaxDirectedTranslationResultVarName,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mGrammarName (),
mProperty_mLabelName (),
mProperty_mSourceStringExpression (),
mProperty_mNameStringExpression (),
mProperty_mActualParameterList (),
mProperty_mGrammarHasTranslateFeature (),
mProperty_mAssignementList (),
mProperty_mSyntaxDirectedTranslationResultVarName () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mGrammarName = in_mGrammarName ;
  mProperty_mLabelName = in_mLabelName ;
  mProperty_mSourceStringExpression = in_mSourceStringExpression ;
  mProperty_mNameStringExpression = in_mNameStringExpression ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mGrammarHasTranslateFeature = in_mGrammarHasTranslateFeature ;
  mProperty_mAssignementList = in_mAssignementList ;
  mProperty_mSyntaxDirectedTranslationResultVarName = in_mSyntaxDirectedTranslationResultVarName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_grammarInstructionWithSourceExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration ;
}

void cPtr_grammarInstructionWithSourceExpressionForGeneration::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@grammarInstructionWithSourceExpressionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLabelName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceStringExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNameStringExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAssignementList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSyntaxDirectedTranslationResultVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInstructionWithSourceExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarInstructionWithSourceExpressionForGeneration (mProperty_mInstructionLocation, mProperty_mGrammarName, mProperty_mLabelName, mProperty_mSourceStringExpression, mProperty_mNameStringExpression, mProperty_mActualParameterList, mProperty_mGrammarHasTranslateFeature, mProperty_mAssignementList, mProperty_mSyntaxDirectedTranslationResultVarName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarInstructionWithSourceExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mGrammarName.printNonNullClassInstanceProperties ("mGrammarName") ;
    mProperty_mLabelName.printNonNullClassInstanceProperties ("mLabelName") ;
    mProperty_mSourceStringExpression.printNonNullClassInstanceProperties ("mSourceStringExpression") ;
    mProperty_mNameStringExpression.printNonNullClassInstanceProperties ("mNameStringExpression") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mGrammarHasTranslateFeature.printNonNullClassInstanceProperties ("mGrammarHasTranslateFeature") ;
    mProperty_mAssignementList.printNonNullClassInstanceProperties ("mAssignementList") ;
    mProperty_mSyntaxDirectedTranslationResultVarName.printNonNullClassInstanceProperties ("mSyntaxDirectedTranslationResultVarName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionWithSourceExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration ("grammarInstructionWithSourceExpressionForGeneration",
                                                                                                        & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInstructionWithSourceExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionWithSourceExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionWithSourceExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration GGS_grammarInstructionWithSourceExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionWithSourceExpressionForGeneration result ;
  const GGS_grammarInstructionWithSourceExpressionForGeneration * p = (const GGS_grammarInstructionWithSourceExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionWithSourceExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionWithSourceExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::objectCompare (const GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak & GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::operator = (const GGS_grammarInstructionWithSourceExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak (const GGS_grammarInstructionWithSourceExpressionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_grammarInstructionWithSourceExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInstructionWithSourceExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::bang_grammarInstructionWithSourceExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInstructionWithSourceExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
      result = GGS_grammarInstructionWithSourceExpressionForGeneration ((cPtr_grammarInstructionWithSourceExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionWithSourceExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration_2E_weak ("grammarInstructionWithSourceExpressionForGeneration.weak",
                                                                                                                & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak result ;
  const GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak * p = (const GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionWithSourceExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@forInstructionEnumeratedObjectElementListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_forInstructionEnumeratedObjectElementListAST : public cCollectionElement {
  public: GGS_forInstructionEnumeratedObjectElementListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_forInstructionEnumeratedObjectElementListAST (const GGS_lstring & in_mOptionalTypeName,
                                                                           const GGS_bool & in_mDeclaredAsUnused,
                                                                           const GGS_lstring & in_mOptionalConstantName
                                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_forInstructionEnumeratedObjectElementListAST (const GGS_forInstructionEnumeratedObjectElementListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_forInstructionEnumeratedObjectElementListAST::cCollectionElement_forInstructionEnumeratedObjectElementListAST (const GGS_lstring & in_mOptionalTypeName,
                                                                                                                                  const GGS_bool & in_mDeclaredAsUnused,
                                                                                                                                  const GGS_lstring & in_mOptionalConstantName
                                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionalTypeName, in_mDeclaredAsUnused, in_mOptionalConstantName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_forInstructionEnumeratedObjectElementListAST::cCollectionElement_forInstructionEnumeratedObjectElementListAST (const GGS_forInstructionEnumeratedObjectElementListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOptionalTypeName, inElement.mProperty_mDeclaredAsUnused, inElement.mProperty_mOptionalConstantName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_forInstructionEnumeratedObjectElementListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_forInstructionEnumeratedObjectElementListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_forInstructionEnumeratedObjectElementListAST (mObject.mProperty_mOptionalTypeName, mObject.mProperty_mDeclaredAsUnused, mObject.mProperty_mOptionalConstantName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @forInstructionEnumeratedObjectElementListAST
//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST::GGS_forInstructionEnumeratedObjectElementListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST::GGS_forInstructionEnumeratedObjectElementListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    const GGS_forInstructionEnumeratedObjectElementListAST_2E_element element (p->mObject.mProperty_mOptionalTypeName, p->mObject.mProperty_mDeclaredAsUnused, p->mObject.mProperty_mOptionalConstantName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                  const GGS_lstring & in_mOptionalTypeName,
                                                                                  const GGS_bool & in_mDeclaredAsUnused,
                                                                                  const GGS_lstring & in_mOptionalConstantName
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST (in_mOptionalTypeName, in_mDeclaredAsUnused, in_mOptionalConstantName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_forInstructionEnumeratedObjectElementListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_forInstructionEnumeratedObjectElementListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mOptionalTypeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOptionalTypeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mDeclaredAsUnused:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDeclaredAsUnused.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mOptionalConstantName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOptionalConstantName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST GGS_forInstructionEnumeratedObjectElementListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectElementListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST GGS_forInstructionEnumeratedObjectElementListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectElementListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::plusPlusAssignOperation (const GGS_forInstructionEnumeratedObjectElementListAST_2E_element & inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST GGS_forInstructionEnumeratedObjectElementListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                                             const GGS_bool & inOperand1,
                                                                                                                             const GGS_lstring & inOperand2
                                                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_forInstructionEnumeratedObjectElementListAST_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_forInstructionEnumeratedObjectElementListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                                           const GGS_bool & inOperand1,
                                                                           const GGS_lstring & inOperand2
                                                                           COMMA_LOCATION_ARGS) {
  const GGS_forInstructionEnumeratedObjectElementListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::setter_append (const GGS_lstring inOperand0,
                                                                      const GGS_bool inOperand1,
                                                                      const GGS_lstring inOperand2,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_LOCATION_ARGS) {
  const GGS_forInstructionEnumeratedObjectElementListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                             const GGS_bool inOperand1,
                                                                             const GGS_lstring inOperand2,
                                                                             const GGS_uint inInsertionIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_forInstructionEnumeratedObjectElementListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                             GGS_bool & outOperand1,
                                                                             GGS_lstring & outOperand2,
                                                                             const GGS_uint inRemoveIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mOptionalTypeName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mDeclaredAsUnused ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mOptionalConstantName ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                                        GGS_bool & outOperand1,
                                                                        GGS_lstring & outOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOptionalTypeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mDeclaredAsUnused ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mOptionalConstantName ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::setter_popLast (GGS_lstring & outOperand0,
                                                                       GGS_bool & outOperand1,
                                                                       GGS_lstring & outOperand2,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOptionalTypeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mDeclaredAsUnused ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mOptionalConstantName ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::method_first (GGS_lstring & outOperand0,
                                                                     GGS_bool & outOperand1,
                                                                     GGS_lstring & outOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOptionalTypeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mDeclaredAsUnused ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mOptionalConstantName ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::method_last (GGS_lstring & outOperand0,
                                                                    GGS_bool & outOperand1,
                                                                    GGS_lstring & outOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOptionalTypeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mDeclaredAsUnused ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mOptionalConstantName ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST GGS_forInstructionEnumeratedObjectElementListAST::add_operation (const GGS_forInstructionEnumeratedObjectElementListAST & inOperand,
                                                                                                                  Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectElementListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST GGS_forInstructionEnumeratedObjectElementListAST::subList (const int32_t inStart,
                                                                                                            const int32_t inLength,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectElementListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST GGS_forInstructionEnumeratedObjectElementListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectElementListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST GGS_forInstructionEnumeratedObjectElementListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectElementListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST GGS_forInstructionEnumeratedObjectElementListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectElementListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::plusAssignOperation (const GGS_forInstructionEnumeratedObjectElementListAST inList,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::setter_setMOptionalTypeNameAtIndex (GGS_lstring inOperand,
                                                                                           GGS_uint inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionalTypeName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_forInstructionEnumeratedObjectElementListAST::getter_mOptionalTypeNameAtIndex (const GGS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionalTypeName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::setter_setMDeclaredAsUnusedAtIndex (GGS_bool inOperand,
                                                                                           GGS_uint inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDeclaredAsUnused = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_bool GGS_forInstructionEnumeratedObjectElementListAST::getter_mDeclaredAsUnusedAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDeclaredAsUnused ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::setter_setMOptionalConstantNameAtIndex (GGS_lstring inOperand,
                                                                                               GGS_uint inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionalConstantName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_forInstructionEnumeratedObjectElementListAST::getter_mOptionalConstantNameAtIndex (const GGS_uint & inIndex,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionalConstantName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @forInstructionEnumeratedObjectElementListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_forInstructionEnumeratedObjectElementListAST::DownEnumerator_forInstructionEnumeratedObjectElementListAST (const GGS_forInstructionEnumeratedObjectElementListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST_2E_element DownEnumerator_forInstructionEnumeratedObjectElementListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_forInstructionEnumeratedObjectElementListAST::current_mOptionalTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionalTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_forInstructionEnumeratedObjectElementListAST::current_mDeclaredAsUnused (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDeclaredAsUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_forInstructionEnumeratedObjectElementListAST::current_mOptionalConstantName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionalConstantName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @forInstructionEnumeratedObjectElementListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_forInstructionEnumeratedObjectElementListAST::UpEnumerator_forInstructionEnumeratedObjectElementListAST (const GGS_forInstructionEnumeratedObjectElementListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST_2E_element UpEnumerator_forInstructionEnumeratedObjectElementListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_forInstructionEnumeratedObjectElementListAST::current_mOptionalTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionalTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_forInstructionEnumeratedObjectElementListAST::current_mDeclaredAsUnused (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDeclaredAsUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_forInstructionEnumeratedObjectElementListAST::current_mOptionalConstantName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionalConstantName ;
}




//--------------------------------------------------------------------------------------------------
//     @forInstructionEnumeratedObjectElementListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST ("forInstructionEnumeratedObjectElementListAST",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forInstructionEnumeratedObjectElementListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionEnumeratedObjectElementListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionEnumeratedObjectElementListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST GGS_forInstructionEnumeratedObjectElementListAST::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectElementListAST result ;
  const GGS_forInstructionEnumeratedObjectElementListAST * p = (const GGS_forInstructionEnumeratedObjectElementListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionEnumeratedObjectElementListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectElementListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractEnumeratedCollectionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractEnumeratedCollectionAST::objectCompare (const GGS_abstractEnumeratedCollectionAST & inOperand) const {
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

GGS_abstractEnumeratedCollectionAST::GGS_abstractEnumeratedCollectionAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractEnumeratedCollectionAST::
abstractEnumeratedCollectionAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST::GGS_abstractEnumeratedCollectionAST (const cPtr_abstractEnumeratedCollectionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractEnumeratedCollectionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractEnumeratedCollectionAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractEnumeratedCollectionAST::cPtr_abstractEnumeratedCollectionAST (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractEnumeratedCollectionAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractEnumeratedCollectionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST ("abstractEnumeratedCollectionAST",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractEnumeratedCollectionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractEnumeratedCollectionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractEnumeratedCollectionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST GGS_abstractEnumeratedCollectionAST::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_abstractEnumeratedCollectionAST result ;
  const GGS_abstractEnumeratedCollectionAST * p = (const GGS_abstractEnumeratedCollectionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractEnumeratedCollectionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractEnumeratedCollectionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractEnumeratedCollectionAST_2E_weak::objectCompare (const GGS_abstractEnumeratedCollectionAST_2E_weak & inOperand) const {
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

GGS_abstractEnumeratedCollectionAST_2E_weak::GGS_abstractEnumeratedCollectionAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST_2E_weak & GGS_abstractEnumeratedCollectionAST_2E_weak::operator = (const GGS_abstractEnumeratedCollectionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST_2E_weak::GGS_abstractEnumeratedCollectionAST_2E_weak (const GGS_abstractEnumeratedCollectionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST_2E_weak GGS_abstractEnumeratedCollectionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractEnumeratedCollectionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST GGS_abstractEnumeratedCollectionAST_2E_weak::unwrappedValue (void) const {
  GGS_abstractEnumeratedCollectionAST result ;
  if (isValid ()) {
    const cPtr_abstractEnumeratedCollectionAST * p = (cPtr_abstractEnumeratedCollectionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractEnumeratedCollectionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST GGS_abstractEnumeratedCollectionAST_2E_weak::bang_abstractEnumeratedCollectionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractEnumeratedCollectionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractEnumeratedCollectionAST) ;
      result = GGS_abstractEnumeratedCollectionAST ((cPtr_abstractEnumeratedCollectionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractEnumeratedCollectionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2E_weak ("abstractEnumeratedCollectionAST.weak",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractEnumeratedCollectionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractEnumeratedCollectionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractEnumeratedCollectionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST_2E_weak GGS_abstractEnumeratedCollectionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_abstractEnumeratedCollectionAST_2E_weak result ;
  const GGS_abstractEnumeratedCollectionAST_2E_weak * p = (const GGS_abstractEnumeratedCollectionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractEnumeratedCollectionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractEnumeratedCollectionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::objectCompare (const GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak & inOperand) const {
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

GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak (void) :
GGS_abstractEnumeratedCollectionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak & GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::operator = (const GGS_enumeratedCollectionImplicitVarInExpAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak (const GGS_enumeratedCollectionImplicitVarInExpAST & inSource) :
GGS_abstractEnumeratedCollectionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionImplicitVarInExpAST GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::unwrappedValue (void) const {
  GGS_enumeratedCollectionImplicitVarInExpAST result ;
  if (isValid ()) {
    const cPtr_enumeratedCollectionImplicitVarInExpAST * p = (cPtr_enumeratedCollectionImplicitVarInExpAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_enumeratedCollectionImplicitVarInExpAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionImplicitVarInExpAST GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::bang_enumeratedCollectionImplicitVarInExpAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_enumeratedCollectionImplicitVarInExpAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
      result = GGS_enumeratedCollectionImplicitVarInExpAST ((cPtr_enumeratedCollectionImplicitVarInExpAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @enumeratedCollectionImplicitVarInExpAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST_2E_weak ("enumeratedCollectionImplicitVarInExpAST.weak",
                                                                                                    & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak result ;
  const GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak * p = (const GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionImplicitVarInExpAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumeratedCollectionVarInExpAST_2E_weak::objectCompare (const GGS_enumeratedCollectionVarInExpAST_2E_weak & inOperand) const {
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

GGS_enumeratedCollectionVarInExpAST_2E_weak::GGS_enumeratedCollectionVarInExpAST_2E_weak (void) :
GGS_abstractEnumeratedCollectionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionVarInExpAST_2E_weak & GGS_enumeratedCollectionVarInExpAST_2E_weak::operator = (const GGS_enumeratedCollectionVarInExpAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionVarInExpAST_2E_weak::GGS_enumeratedCollectionVarInExpAST_2E_weak (const GGS_enumeratedCollectionVarInExpAST & inSource) :
GGS_abstractEnumeratedCollectionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionVarInExpAST_2E_weak GGS_enumeratedCollectionVarInExpAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_enumeratedCollectionVarInExpAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionVarInExpAST GGS_enumeratedCollectionVarInExpAST_2E_weak::unwrappedValue (void) const {
  GGS_enumeratedCollectionVarInExpAST result ;
  if (isValid ()) {
    const cPtr_enumeratedCollectionVarInExpAST * p = (cPtr_enumeratedCollectionVarInExpAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_enumeratedCollectionVarInExpAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionVarInExpAST GGS_enumeratedCollectionVarInExpAST_2E_weak::bang_enumeratedCollectionVarInExpAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_enumeratedCollectionVarInExpAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumeratedCollectionVarInExpAST) ;
      result = GGS_enumeratedCollectionVarInExpAST ((cPtr_enumeratedCollectionVarInExpAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @enumeratedCollectionVarInExpAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST_2E_weak ("enumeratedCollectionVarInExpAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumeratedCollectionVarInExpAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumeratedCollectionVarInExpAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumeratedCollectionVarInExpAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionVarInExpAST_2E_weak GGS_enumeratedCollectionVarInExpAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_enumeratedCollectionVarInExpAST_2E_weak result ;
  const GGS_enumeratedCollectionVarInExpAST_2E_weak * p = (const GGS_enumeratedCollectionVarInExpAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumeratedCollectionVarInExpAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionVarInExpAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @enumeratedCollectionCstListInExpAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumeratedCollectionCstListInExpAST::objectCompare (const GGS_enumeratedCollectionCstListInExpAST & inOperand) const {
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

GGS_enumeratedCollectionCstListInExpAST::GGS_enumeratedCollectionCstListInExpAST (void) :
GGS_abstractEnumeratedCollectionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST GGS_enumeratedCollectionCstListInExpAST::
init_21__21__21_ (const GGS_forInstructionEnumeratedObjectElementListAST & in_mElementList,
                  const GGS_semanticExpressionAST & in_mEnumeratedExpression,
                  const GGS_location & in_mEndOfEnumerationExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_enumeratedCollectionCstListInExpAST * object = nullptr ;
  macroMyNew (object, cPtr_enumeratedCollectionCstListInExpAST (inCompiler COMMA_THERE)) ;
  object->enumeratedCollectionCstListInExpAST_init_21__21__21_ (in_mElementList, in_mEnumeratedExpression, in_mEndOfEnumerationExpression, inCompiler) ;
  const GGS_enumeratedCollectionCstListInExpAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionCstListInExpAST::
enumeratedCollectionCstListInExpAST_init_21__21__21_ (const GGS_forInstructionEnumeratedObjectElementListAST & in_mElementList,
                                                      const GGS_semanticExpressionAST & in_mEnumeratedExpression,
                                                      const GGS_location & in_mEndOfEnumerationExpression,
                                                      Compiler * /* inCompiler */) {
  mProperty_mElementList = in_mElementList ;
  mProperty_mEnumeratedExpression = in_mEnumeratedExpression ;
  mProperty_mEndOfEnumerationExpression = in_mEndOfEnumerationExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST::GGS_enumeratedCollectionCstListInExpAST (const cPtr_enumeratedCollectionCstListInExpAST * inSourcePtr) :
GGS_abstractEnumeratedCollectionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumeratedCollectionCstListInExpAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST GGS_enumeratedCollectionCstListInExpAST::class_func_new (const GGS_forInstructionEnumeratedObjectElementListAST & in_mElementList,
                                                                                                 const GGS_semanticExpressionAST & in_mEnumeratedExpression,
                                                                                                 const GGS_location & in_mEndOfEnumerationExpression,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_enumeratedCollectionCstListInExpAST result ;
  macroMyNew (result.mObjectPtr, cPtr_enumeratedCollectionCstListInExpAST (in_mElementList, in_mEnumeratedExpression, in_mEndOfEnumerationExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST GGS_enumeratedCollectionCstListInExpAST::readProperty_mElementList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_forInstructionEnumeratedObjectElementListAST () ;
  }else{
    cPtr_enumeratedCollectionCstListInExpAST * p = (cPtr_enumeratedCollectionCstListInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
    return p->mProperty_mElementList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_enumeratedCollectionCstListInExpAST::readProperty_mEnumeratedExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_enumeratedCollectionCstListInExpAST * p = (cPtr_enumeratedCollectionCstListInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
    return p->mProperty_mEnumeratedExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_enumeratedCollectionCstListInExpAST::readProperty_mEndOfEnumerationExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_enumeratedCollectionCstListInExpAST * p = (cPtr_enumeratedCollectionCstListInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
    return p->mProperty_mEndOfEnumerationExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enumeratedCollectionCstListInExpAST class
//--------------------------------------------------------------------------------------------------

cPtr_enumeratedCollectionCstListInExpAST::cPtr_enumeratedCollectionCstListInExpAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractEnumeratedCollectionAST (inCompiler COMMA_THERE),
mProperty_mElementList (),
mProperty_mEnumeratedExpression (),
mProperty_mEndOfEnumerationExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_enumeratedCollectionCstListInExpAST::cPtr_enumeratedCollectionCstListInExpAST (const GGS_forInstructionEnumeratedObjectElementListAST & in_mElementList,
                                                                                    const GGS_semanticExpressionAST & in_mEnumeratedExpression,
                                                                                    const GGS_location & in_mEndOfEnumerationExpression,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractEnumeratedCollectionAST (inCompiler COMMA_THERE),
mProperty_mElementList (),
mProperty_mEnumeratedExpression (),
mProperty_mEndOfEnumerationExpression () {
  mProperty_mElementList = in_mElementList ;
  mProperty_mEnumeratedExpression = in_mEnumeratedExpression ;
  mProperty_mEndOfEnumerationExpression = in_mEndOfEnumerationExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_enumeratedCollectionCstListInExpAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST ;
}

void cPtr_enumeratedCollectionCstListInExpAST::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@enumeratedCollectionCstListInExpAST:") ;
  mProperty_mElementList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEnumeratedExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfEnumerationExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumeratedCollectionCstListInExpAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumeratedCollectionCstListInExpAST (mProperty_mElementList, mProperty_mEnumeratedExpression, mProperty_mEndOfEnumerationExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enumeratedCollectionCstListInExpAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractEnumeratedCollectionAST::printNonNullClassInstanceProperties () ;
    mProperty_mElementList.printNonNullClassInstanceProperties ("mElementList") ;
    mProperty_mEnumeratedExpression.printNonNullClassInstanceProperties ("mEnumeratedExpression") ;
    mProperty_mEndOfEnumerationExpression.printNonNullClassInstanceProperties ("mEndOfEnumerationExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @enumeratedCollectionCstListInExpAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST ("enumeratedCollectionCstListInExpAST",
                                                                                        & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumeratedCollectionCstListInExpAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumeratedCollectionCstListInExpAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumeratedCollectionCstListInExpAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST GGS_enumeratedCollectionCstListInExpAST::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_enumeratedCollectionCstListInExpAST result ;
  const GGS_enumeratedCollectionCstListInExpAST * p = (const GGS_enumeratedCollectionCstListInExpAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumeratedCollectionCstListInExpAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionCstListInExpAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumeratedCollectionCstListInExpAST_2E_weak::objectCompare (const GGS_enumeratedCollectionCstListInExpAST_2E_weak & inOperand) const {
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

GGS_enumeratedCollectionCstListInExpAST_2E_weak::GGS_enumeratedCollectionCstListInExpAST_2E_weak (void) :
GGS_abstractEnumeratedCollectionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST_2E_weak & GGS_enumeratedCollectionCstListInExpAST_2E_weak::operator = (const GGS_enumeratedCollectionCstListInExpAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST_2E_weak::GGS_enumeratedCollectionCstListInExpAST_2E_weak (const GGS_enumeratedCollectionCstListInExpAST & inSource) :
GGS_abstractEnumeratedCollectionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST_2E_weak GGS_enumeratedCollectionCstListInExpAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_enumeratedCollectionCstListInExpAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST GGS_enumeratedCollectionCstListInExpAST_2E_weak::unwrappedValue (void) const {
  GGS_enumeratedCollectionCstListInExpAST result ;
  if (isValid ()) {
    const cPtr_enumeratedCollectionCstListInExpAST * p = (cPtr_enumeratedCollectionCstListInExpAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_enumeratedCollectionCstListInExpAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST GGS_enumeratedCollectionCstListInExpAST_2E_weak::bang_enumeratedCollectionCstListInExpAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_enumeratedCollectionCstListInExpAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumeratedCollectionCstListInExpAST) ;
      result = GGS_enumeratedCollectionCstListInExpAST ((cPtr_enumeratedCollectionCstListInExpAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @enumeratedCollectionCstListInExpAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST_2E_weak ("enumeratedCollectionCstListInExpAST.weak",
                                                                                                & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumeratedCollectionCstListInExpAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumeratedCollectionCstListInExpAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumeratedCollectionCstListInExpAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST_2E_weak GGS_enumeratedCollectionCstListInExpAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_enumeratedCollectionCstListInExpAST_2E_weak result ;
  const GGS_enumeratedCollectionCstListInExpAST_2E_weak * p = (const GGS_enumeratedCollectionCstListInExpAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumeratedCollectionCstListInExpAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionCstListInExpAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@forInstructionEnumeratedObjectListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_forInstructionEnumeratedObjectListAST : public cCollectionElement {
  public: GGS_forInstructionEnumeratedObjectListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_forInstructionEnumeratedObjectListAST (const GGS_bool & in_mAscending,
                                                                    const GGS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection
                                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_forInstructionEnumeratedObjectListAST (const GGS_forInstructionEnumeratedObjectListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_forInstructionEnumeratedObjectListAST::cCollectionElement_forInstructionEnumeratedObjectListAST (const GGS_bool & in_mAscending,
                                                                                                                    const GGS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection
                                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAscending, in_mEnumeratedCollection) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_forInstructionEnumeratedObjectListAST::cCollectionElement_forInstructionEnumeratedObjectListAST (const GGS_forInstructionEnumeratedObjectListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAscending, inElement.mProperty_mEnumeratedCollection) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_forInstructionEnumeratedObjectListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_forInstructionEnumeratedObjectListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_forInstructionEnumeratedObjectListAST (mObject.mProperty_mAscending, mObject.mProperty_mEnumeratedCollection COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @forInstructionEnumeratedObjectListAST
//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST::GGS_forInstructionEnumeratedObjectListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST::GGS_forInstructionEnumeratedObjectListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    const GGS_forInstructionEnumeratedObjectListAST_2E_element element (p->mObject.mProperty_mAscending, p->mObject.mProperty_mEnumeratedCollection) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                           const GGS_bool & in_mAscending,
                                                                           const GGS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListAST (in_mAscending, in_mEnumeratedCollection COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_forInstructionEnumeratedObjectListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_forInstructionEnumeratedObjectListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mAscending:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mAscending.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEnumeratedCollection:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEnumeratedCollection.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST GGS_forInstructionEnumeratedObjectListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST GGS_forInstructionEnumeratedObjectListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::plusPlusAssignOperation (const GGS_forInstructionEnumeratedObjectListAST_2E_element & inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST GGS_forInstructionEnumeratedObjectListAST::class_func_listWithValue (const GGS_bool & inOperand0,
                                                                                                               const GGS_abstractEnumeratedCollectionAST & inOperand1
                                                                                                               COMMA_LOCATION_ARGS) {
  const GGS_forInstructionEnumeratedObjectListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_forInstructionEnumeratedObjectListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::addAssignOperation (const GGS_bool & inOperand0,
                                                                    const GGS_abstractEnumeratedCollectionAST & inOperand1
                                                                    COMMA_LOCATION_ARGS) {
  const GGS_forInstructionEnumeratedObjectListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::setter_append (const GGS_bool inOperand0,
                                                               const GGS_abstractEnumeratedCollectionAST inOperand1,
                                                               Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  const GGS_forInstructionEnumeratedObjectListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::setter_insertAtIndex (const GGS_bool inOperand0,
                                                                      const GGS_abstractEnumeratedCollectionAST inOperand1,
                                                                      const GGS_uint inInsertionIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  const GGS_forInstructionEnumeratedObjectListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::setter_removeAtIndex (GGS_bool & outOperand0,
                                                                      GGS_abstractEnumeratedCollectionAST & outOperand1,
                                                                      const GGS_uint inRemoveIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mAscending ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mEnumeratedCollection ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::setter_popFirst (GGS_bool & outOperand0,
                                                                 GGS_abstractEnumeratedCollectionAST & outOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mAscending ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mEnumeratedCollection ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::setter_popLast (GGS_bool & outOperand0,
                                                                GGS_abstractEnumeratedCollectionAST & outOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mAscending ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mEnumeratedCollection ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::method_first (GGS_bool & outOperand0,
                                                              GGS_abstractEnumeratedCollectionAST & outOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mAscending ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mEnumeratedCollection ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::method_last (GGS_bool & outOperand0,
                                                             GGS_abstractEnumeratedCollectionAST & outOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mAscending ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mEnumeratedCollection ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST GGS_forInstructionEnumeratedObjectListAST::add_operation (const GGS_forInstructionEnumeratedObjectListAST & inOperand,
                                                                                                    Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST GGS_forInstructionEnumeratedObjectListAST::subList (const int32_t inStart,
                                                                                              const int32_t inLength,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST GGS_forInstructionEnumeratedObjectListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST GGS_forInstructionEnumeratedObjectListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST GGS_forInstructionEnumeratedObjectListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::plusAssignOperation (const GGS_forInstructionEnumeratedObjectListAST inList,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::setter_setMAscendingAtIndex (GGS_bool inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mAscending = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_bool GGS_forInstructionEnumeratedObjectListAST::getter_mAscendingAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mAscending ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::setter_setMEnumeratedCollectionAtIndex (GGS_abstractEnumeratedCollectionAST inOperand,
                                                                                        GGS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEnumeratedCollection = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_abstractEnumeratedCollectionAST GGS_forInstructionEnumeratedObjectListAST::getter_mEnumeratedCollectionAtIndex (const GGS_uint & inIndex,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_abstractEnumeratedCollectionAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEnumeratedCollection ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @forInstructionEnumeratedObjectListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_forInstructionEnumeratedObjectListAST::DownEnumerator_forInstructionEnumeratedObjectListAST (const GGS_forInstructionEnumeratedObjectListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST_2E_element DownEnumerator_forInstructionEnumeratedObjectListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_forInstructionEnumeratedObjectListAST::current_mAscending (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAscending ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST DownEnumerator_forInstructionEnumeratedObjectListAST::current_mEnumeratedCollection (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEnumeratedCollection ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @forInstructionEnumeratedObjectListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_forInstructionEnumeratedObjectListAST::UpEnumerator_forInstructionEnumeratedObjectListAST (const GGS_forInstructionEnumeratedObjectListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST_2E_element UpEnumerator_forInstructionEnumeratedObjectListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_forInstructionEnumeratedObjectListAST::current_mAscending (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAscending ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST UpEnumerator_forInstructionEnumeratedObjectListAST::current_mEnumeratedCollection (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEnumeratedCollection ;
}




//--------------------------------------------------------------------------------------------------
//     @forInstructionEnumeratedObjectListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST ("forInstructionEnumeratedObjectListAST",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forInstructionEnumeratedObjectListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionEnumeratedObjectListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionEnumeratedObjectListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST GGS_forInstructionEnumeratedObjectListAST::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectListAST result ;
  const GGS_forInstructionEnumeratedObjectListAST * p = (const GGS_forInstructionEnumeratedObjectListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionEnumeratedObjectListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_forInstructionAST_2E_weak::objectCompare (const GGS_forInstructionAST_2E_weak & inOperand) const {
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

GGS_forInstructionAST_2E_weak::GGS_forInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionAST_2E_weak & GGS_forInstructionAST_2E_weak::operator = (const GGS_forInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionAST_2E_weak::GGS_forInstructionAST_2E_weak (const GGS_forInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_forInstructionAST_2E_weak GGS_forInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_forInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionAST GGS_forInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_forInstructionAST result ;
  if (isValid ()) {
    const cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_forInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionAST GGS_forInstructionAST_2E_weak::bang_forInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_forInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forInstructionAST) ;
      result = GGS_forInstructionAST ((cPtr_forInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @forInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionAST_2E_weak ("forInstructionAST.weak",
                                                                              & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionAST_2E_weak GGS_forInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_forInstructionAST_2E_weak result ;
  const GGS_forInstructionAST_2E_weak * p = (const GGS_forInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

