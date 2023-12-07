#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"

//----------------------------------------------------------------------------------------------------------------------
// @selectInstructionForGrammarAnalysis reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selectInstructionForGrammarAnalysis::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractSyntaxInstructionForGrammarAnalysis::printNonNullClassInstanceProperties () ;
    mProperty_mSelectBranchList.printNonNullClassInstanceProperties ("mSelectBranchList") ;
    mProperty_mAddedNonTerminalSymbolIndex.printNonNullClassInstanceProperties ("mAddedNonTerminalSymbolIndex") ;
  }
#endif

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
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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

GALGAS_branchListForGrammarAnalysis GALGAS_selectInstructionForGrammarAnalysis::readProperty_mSelectBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_branchListForGrammarAnalysis () ;
  }else{
    cPtr_selectInstructionForGrammarAnalysis * p = (cPtr_selectInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGrammarAnalysis) ;
    return p->mProperty_mSelectBranchList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_selectInstructionForGrammarAnalysis::readProperty_mAddedNonTerminalSymbolIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_selectInstructionForGrammarAnalysis * p = (cPtr_selectInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGrammarAnalysis) ;
    return p->mProperty_mAddedNonTerminalSymbolIndex ;
  }
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
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selectInstructionForGrammarAnalysis (mProperty_mStartLocation, mProperty_mSelectBranchList, mProperty_mAddedNonTerminalSymbolIndex COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @selectInstructionForGrammarAnalysis generic code implementation
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
  AC_GALGAS_root * result = nullptr ;
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
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selectInstructionForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_selectInstructionForGrammarAnalysis_2D_weak::objectCompare (const GALGAS_selectInstructionForGrammarAnalysis_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGrammarAnalysis_2D_weak::GALGAS_selectInstructionForGrammarAnalysis_2D_weak (void) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGrammarAnalysis_2D_weak & GALGAS_selectInstructionForGrammarAnalysis_2D_weak::operator = (const GALGAS_selectInstructionForGrammarAnalysis & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGrammarAnalysis_2D_weak::GALGAS_selectInstructionForGrammarAnalysis_2D_weak (const GALGAS_selectInstructionForGrammarAnalysis & inSource) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGrammarAnalysis_2D_weak GALGAS_selectInstructionForGrammarAnalysis_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_selectInstructionForGrammarAnalysis_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGrammarAnalysis GALGAS_selectInstructionForGrammarAnalysis_2D_weak::bang_selectInstructionForGrammarAnalysis_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_selectInstructionForGrammarAnalysis result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selectInstructionForGrammarAnalysis) ;
      result = GALGAS_selectInstructionForGrammarAnalysis ((cPtr_selectInstructionForGrammarAnalysis *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @selectInstructionForGrammarAnalysis-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis_2D_weak ("selectInstructionForGrammarAnalysis-weak",
                                                                    & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selectInstructionForGrammarAnalysis_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selectInstructionForGrammarAnalysis_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectInstructionForGrammarAnalysis_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGrammarAnalysis_2D_weak GALGAS_selectInstructionForGrammarAnalysis_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_selectInstructionForGrammarAnalysis_2D_weak result ;
  const GALGAS_selectInstructionForGrammarAnalysis_2D_weak * p = (const GALGAS_selectInstructionForGrammarAnalysis_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selectInstructionForGrammarAnalysis_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionForGrammarAnalysis-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @repeatInstructionForGrammarAnalysis reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_repeatInstructionForGrammarAnalysis::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractSyntaxInstructionForGrammarAnalysis::printNonNullClassInstanceProperties () ;
    mProperty_mRepeatBranchList.printNonNullClassInstanceProperties ("mRepeatBranchList") ;
    mProperty_mAddedNonTerminalSymbolIndex.printNonNullClassInstanceProperties ("mAddedNonTerminalSymbolIndex") ;
  }
#endif

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
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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

GALGAS_branchListForGrammarAnalysis GALGAS_repeatInstructionForGrammarAnalysis::readProperty_mRepeatBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_branchListForGrammarAnalysis () ;
  }else{
    cPtr_repeatInstructionForGrammarAnalysis * p = (cPtr_repeatInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGrammarAnalysis) ;
    return p->mProperty_mRepeatBranchList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_repeatInstructionForGrammarAnalysis::readProperty_mAddedNonTerminalSymbolIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_repeatInstructionForGrammarAnalysis * p = (cPtr_repeatInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGrammarAnalysis) ;
    return p->mProperty_mAddedNonTerminalSymbolIndex ;
  }
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
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_repeatInstructionForGrammarAnalysis (mProperty_mStartLocation, mProperty_mRepeatBranchList, mProperty_mAddedNonTerminalSymbolIndex COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @repeatInstructionForGrammarAnalysis generic code implementation
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
  AC_GALGAS_root * result = nullptr ;
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
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_repeatInstructionForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstructionForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_repeatInstructionForGrammarAnalysis_2D_weak::objectCompare (const GALGAS_repeatInstructionForGrammarAnalysis_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGrammarAnalysis_2D_weak::GALGAS_repeatInstructionForGrammarAnalysis_2D_weak (void) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGrammarAnalysis_2D_weak & GALGAS_repeatInstructionForGrammarAnalysis_2D_weak::operator = (const GALGAS_repeatInstructionForGrammarAnalysis & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGrammarAnalysis_2D_weak::GALGAS_repeatInstructionForGrammarAnalysis_2D_weak (const GALGAS_repeatInstructionForGrammarAnalysis & inSource) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGrammarAnalysis_2D_weak GALGAS_repeatInstructionForGrammarAnalysis_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_repeatInstructionForGrammarAnalysis_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGrammarAnalysis GALGAS_repeatInstructionForGrammarAnalysis_2D_weak::bang_repeatInstructionForGrammarAnalysis_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_repeatInstructionForGrammarAnalysis result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_repeatInstructionForGrammarAnalysis) ;
      result = GALGAS_repeatInstructionForGrammarAnalysis ((cPtr_repeatInstructionForGrammarAnalysis *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @repeatInstructionForGrammarAnalysis-weak generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis_2D_weak ("repeatInstructionForGrammarAnalysis-weak",
                                                                    & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_repeatInstructionForGrammarAnalysis_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_repeatInstructionForGrammarAnalysis_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_repeatInstructionForGrammarAnalysis_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGrammarAnalysis_2D_weak GALGAS_repeatInstructionForGrammarAnalysis_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_repeatInstructionForGrammarAnalysis_2D_weak result ;
  const GALGAS_repeatInstructionForGrammarAnalysis_2D_weak * p = (const GALGAS_repeatInstructionForGrammarAnalysis_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_repeatInstructionForGrammarAnalysis_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstructionForGrammarAnalysis-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_syntaxComponentListForGrammarAnalysis::copy (void) {
  cCollectionElement * result = nullptr ;
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
  cCollectionElement_syntaxComponentListForGrammarAnalysis * p = nullptr ;
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
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syntaxComponentListForGrammarAnalysis (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentListForGrammarAnalysis::setter_append (const GALGAS_productionRuleListForGrammarAnalysis inOperand0,
                                                                  const GALGAS_lstring inOperand1,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syntaxComponentListForGrammarAnalysis (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
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
      cCollectionElement * p = nullptr ;
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
      if (nullptr == p) {
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
  if (nullptr == p) {
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
  if (nullptr == p) {
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
  if (nullptr == p) {
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
  if (nullptr == p) {
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
  if (nullptr != p) {
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
  if (nullptr != p) {
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
  if (nullptr != p) {
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
  if (nullptr != p) {
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
//     @syntaxComponentListForGrammarAnalysis generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis ("syntaxComponentListForGrammarAnalysis",
                                                              nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxComponentListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxComponentListForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
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
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syntaxComponentListForGrammarAnalysis *> (p)) {
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
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_terminalSymbolsMapForGrammarAnalysis::copy (void) {
  cMapElement * result = nullptr ;
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
AC_GALGAS_map () {
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
  cMapElement_terminalSymbolsMapForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_terminalSymbolsMapForGrammarAnalysis (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@terminalSymbolsMapForGrammarAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis GALGAS_terminalSymbolsMapForGrammarAnalysis::add_operation (const GALGAS_terminalSymbolsMapForGrammarAnalysis & inOperand,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_terminalSymbolsMapForGrammarAnalysis result = *this ;
  cEnumerator_terminalSymbolsMapForGrammarAnalysis enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mTerminalIndex (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalSymbolsMapForGrammarAnalysis::setter_insertKey (GALGAS_lstring inKey,
                                                                    GALGAS_uint inArgument0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_terminalSymbolsMapForGrammarAnalysis * p = nullptr ;
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
  if (nullptr == p) {
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
  if (nullptr != p) {
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
  if (nullptr != p) {
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
  const bool result = nullptr != p ;
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
//     @terminalSymbolsMapForGrammarAnalysis generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis ("terminalSymbolsMapForGrammarAnalysis",
                                                             nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_terminalSymbolsMapForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_terminalSymbolsMapForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
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
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_terminalSymbolsMapForGrammarAnalysis *> (p)) {
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

void callExtensionMethod_transformInstruction (cPtr_syntaxInstructionAST * inObject,
                                               GALGAS_terminalSymbolsMapForGrammarAnalysis & io_ioActuallyUsedTerminalSymbolMap,
                                               const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constin_inNonTerminalSymbolMap,
                                               GALGAS_uint & io_ioAddedNonTerminalIndex,
                                               GALGAS_syntaxInstructionListForGrammarAnalysis & io_ioSyntaxInstructionList,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_syntaxInstructionAST) ;
    inObject->method_transformInstruction (io_ioActuallyUsedTerminalSymbolMap, constin_inNonTerminalSymbolMap, io_ioAddedNonTerminalIndex, io_ioSyntaxInstructionList, inCompiler COMMA_THERE) ;
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
    test_0 = GALGAS_bool (kIsEqual, temp_1.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 232)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_nodeName_9258 ;
      {
      extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[point] {}"), constinArgument_inRow, ioArgument_ioColumn, var_nodeName_9258, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 233)) ;
      }
      ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 239)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 239)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 239)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 239)).add_operation (var_nodeName_9258, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 239)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 239)) ;
      ioArgument_ioCurrentNode = var_nodeName_9258 ;
      ioArgument_ioArrowShape = GALGAS_string ("--") ;
      ioArgument_ioColumn.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 242)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_syntaxInstructionListForGrammarAnalysis temp_2 = inObject ;
    cEnumerator_syntaxInstructionListForGrammarAnalysis enumerator_9455 (temp_2, kENUMERATION_UP) ;
    while (enumerator_9455.hasCurrentObject ()) {
      callExtensionMethod_tikzNodeForSyntaxInstruction ((cPtr_abstractSyntaxInstructionForGrammarAnalysis *) enumerator_9455.current_mInstruction (HERE).ptr (), ioArgument_ioRowList, constinArgument_inRow, ioArgument_ioColumn, ioArgument_ioCurrentNode, ioArgument_ioArrowShape, ioArgument_ioArrows, ioArgument_ioMaxUsedRowIndex, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 245)) ;
      enumerator_9455.gotoNextObject () ;
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
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_rowList::copy (void) {
  cCollectionElement * result = nullptr ;
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
  cCollectionElement_rowList * p = nullptr ;
  macroMyNew (p, cCollectionElement_rowList (in_columns COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_rowList::addAssign_operation (const GALGAS__32_stringlist & inOperand0
                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_rowList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_rowList::setter_append (const GALGAS__32_stringlist inOperand0,
                                    C_Compiler * /* inCompiler */
                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_rowList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_rowList::setter_insertAtIndex (const GALGAS__32_stringlist inOperand0,
                                           const GALGAS_uint inInsertionIndex,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
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
      if (nullptr == p) {
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
  if (nullptr == p) {
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
  if (nullptr == p) {
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
  if (nullptr == p) {
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
  if (nullptr == p) {
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
  if (nullptr != p) {
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
  if (nullptr != p) {
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
//     @rowList generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_rowList ("rowList",
                                nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_rowList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rowList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_rowList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
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
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_rowList *> (p)) {
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
  GALGAS_uint var_length_10268 = temp_0.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 274)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsInfOrEqual, var_length_10268.objectCompare (constinArgument_inRow)).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_range enumerator_10340 (GALGAS_range (var_length_10268, constinArgument_inRow.substract_operation (var_length_10268, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 276)).add_operation (GALGAS_uint (1), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 276))), kENUMERATION_UP) ;
      while (enumerator_10340.hasCurrentObject ()) {
        ioObject.addAssign_operation (GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("production-rules-in-tex.galgas", 277))  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 277)) ;
        enumerator_10340.gotoNextObject () ;
      }
    }
  }
  const GALGAS_rowList temp_2 = ioObject ;
  GALGAS__32_stringlist var_cols_10400 = temp_2.getter_columnsAtIndex (constinArgument_inRow, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 281)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsInfOrEqual, var_cols_10400.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 283)).objectCompare (constinArgument_inColumn)).boolEnum () ;
    if (kBoolTrue == test_3) {
      cEnumerator_range enumerator_10529 (GALGAS_range (var_cols_10400.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 284)), constinArgument_inColumn.substract_operation (var_cols_10400.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 284)).add_operation (GALGAS_uint (1), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 284))), kENUMERATION_UP) ;
      while (enumerator_10529.hasCurrentObject ()) {
        var_cols_10400.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 285)) ;
        enumerator_10529.gotoNextObject () ;
      }
    }
  }
  outArgument_outNodeName = GALGAS_string ("p").add_operation (constinArgument_inRow.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 289)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 289)).add_operation (var_cols_10400.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 289)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 289)) ;
  var_cols_10400.addAssign_operation (outArgument_outNodeName, constinArgument_inNodeDefinition  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 290)) ;
  {
  ioObject.setter_setColumnsAtIndex (var_cols_10400, constinArgument_inRow, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 292)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractSyntaxInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_tikzNodeForSyntaxInstruction (cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
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
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
    inObject->method_tikzNodeForSyntaxInstruction (io_ioRowList, constin_inRow, io_ioColumn, io_ioCurrentNode, io_ioArrowShape, io_ioArrows, io_ioMaxUsedRowIndex, constin_inDebug, inCompiler COMMA_THERE) ;
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
  result_result = GALGAS_bool (kIsStrictSup, temp_0.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 564)).objectCompare (GALGAS_uint (uint32_t (4U)))) ;
  const GALGAS_syntaxInstructionListForGrammarAnalysis temp_1 = inObject ;
  cEnumerator_syntaxInstructionListForGrammarAnalysis enumerator_19877 (temp_1, kENUMERATION_UP) ;
  bool bool_2 = result_result.isValidAndTrue () ;
  if (enumerator_19877.hasCurrentObject () && bool_2) {
    while (enumerator_19877.hasCurrentObject () && bool_2) {
      result_result = callExtensionGetter_isLinear ((const cPtr_abstractSyntaxInstructionForGrammarAnalysis *) enumerator_19877.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 566)) ;
      enumerator_19877.gotoNextObject () ;
      if (enumerator_19877.hasCurrentObject ()) {
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

GALGAS_bool callExtensionGetter_isLinear (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isLinear (inCompiler COMMA_THERE) ;
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
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_programListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
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
  cCollectionElement_programListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_programListForGeneration (in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_programListForGeneration::addAssign_operation (const GALGAS_semanticDeclarationForGeneration & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_programListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_programListForGeneration::setter_append (const GALGAS_semanticDeclarationForGeneration inOperand0,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_programListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_programListForGeneration::setter_insertAtIndex (const GALGAS_semanticDeclarationForGeneration inOperand0,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
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
      if (nullptr == p) {
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
  if (nullptr == p) {
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
  if (nullptr == p) {
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
  if (nullptr == p) {
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
  if (nullptr == p) {
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
  if (nullptr != p) {
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
  if (nullptr != p) {
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
//     @programListForGeneration generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_programListForGeneration ("programListForGeneration",
                                                 nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_programListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_programListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
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
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_programListForGeneration *> (p)) {
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
//     @genericExtensionMethodListMap generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_genericExtensionMethodListMap ("genericExtensionMethodListMap",
                                                      nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_genericExtensionMethodListMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericExtensionMethodListMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_genericExtensionMethodListMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
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
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_genericExtensionMethodListMap *> (p)) {
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

void cPtr_semanticDeclarationAST::method_buildExtensionListMaps (GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
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

void callExtensionMethod_buildExtensionListMaps (cPtr_semanticDeclarationAST * inObject,
                                                 GALGAS_genericExtensionMethodListMap & io_ioAbstractExtensionSetterListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioExtensionSetterListMap,
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
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    inObject->method_buildExtensionListMaps  (io_ioAbstractExtensionSetterListMap, io_ioExtensionSetterListMap, io_ioOverridingExtensionSetterListMap, io_ioOverridingAbstractExtensionSetterListMap, io_ioAbstractExtensionMethodListMapAST, io_ioExtensionMethodListMap, io_ioOverridingExtensionMethodListMap, io_ioOverridingAbstractExtensionMethodListMap, io_ioAbstractExtensionGetterListMap, io_ioExtensionGetterListMap, io_ioOverridingExtensionGetterListMap, io_ioOverridingAbstractExtensionGetterListMap, inCompiler COMMA_THERE) ;
  }
}
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
                                                         const GALGAS_unifiedTypeMapEntry & inOperand0
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
//     @descendantClassListMap generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_descendantClassListMap ("descendantClassListMap",
                                               nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_descendantClassListMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_descendantClassListMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_descendantClassListMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
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
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_descendantClassListMap *> (p)) {
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
  cMapElement * result = nullptr ;
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
AC_GALGAS_map () {
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
  cMapElement_extensionMethodMapForGlobalCheckings * p = nullptr ;
  macroMyNew (p, cMapElement_extensionMethodMapForGlobalCheckings (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionMethodMapForGlobalCheckings insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings GALGAS_extensionMethodMapForGlobalCheckings::add_operation (const GALGAS_extensionMethodMapForGlobalCheckings & inOperand,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_extensionMethodMapForGlobalCheckings result = *this ;
  cEnumerator_extensionMethodMapForGlobalCheckings enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForGlobalCheckings::setter_insertKey (GALGAS_lstring inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForGlobalCheckings * p = nullptr ;
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
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_extensionMethodMapForGlobalCheckings) ;
  }else{
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @extensionMethodMapForGlobalCheckings generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings ("extensionMethodMapForGlobalCheckings",
                                                             nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionMethodMapForGlobalCheckings::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionMethodMapForGlobalCheckings::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
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
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extensionMethodMapForGlobalCheckings *> (p)) {
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
  cMapElement * result = nullptr ;
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
AC_GALGAS_map () {
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
  cMapElement_extensionSetterMapForGlobalCheckings * p = nullptr ;
  macroMyNew (p, cMapElement_extensionSetterMapForGlobalCheckings (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionSetterMapForGlobalCheckings insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings GALGAS_extensionSetterMapForGlobalCheckings::add_operation (const GALGAS_extensionSetterMapForGlobalCheckings & inOperand,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_extensionSetterMapForGlobalCheckings result = *this ;
  cEnumerator_extensionSetterMapForGlobalCheckings enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForGlobalCheckings::setter_insertKey (GALGAS_lstring inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForGlobalCheckings * p = nullptr ;
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
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_extensionSetterMapForGlobalCheckings) ;
  }else{
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @extensionSetterMapForGlobalCheckings generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings ("extensionSetterMapForGlobalCheckings",
                                                             nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionSetterMapForGlobalCheckings::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionSetterMapForGlobalCheckings::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
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
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extensionSetterMapForGlobalCheckings *> (p)) {
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
  cMapElement * result = nullptr ;
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
AC_GALGAS_map () {
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
  cMapElement_extensionGetterMapForGlobalCheckings * p = nullptr ;
  macroMyNew (p, cMapElement_extensionGetterMapForGlobalCheckings (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionGetterMapForGlobalCheckings insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings GALGAS_extensionGetterMapForGlobalCheckings::add_operation (const GALGAS_extensionGetterMapForGlobalCheckings & inOperand,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_extensionGetterMapForGlobalCheckings result = *this ;
  cEnumerator_extensionGetterMapForGlobalCheckings enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForGlobalCheckings::setter_insertKey (GALGAS_lstring inKey,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForGlobalCheckings * p = nullptr ;
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
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_extensionGetterMapForGlobalCheckings) ;
  }else{
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @extensionGetterMapForGlobalCheckings generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings ("extensionGetterMapForGlobalCheckings",
                                                             nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionGetterMapForGlobalCheckings::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionGetterMapForGlobalCheckings::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
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
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extensionGetterMapForGlobalCheckings *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterMapForGlobalCheckings", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
  return true ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_galgas_33_QualifiedFeatureList::copy (void) {
  cCollectionElement * result = nullptr ;
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
  cCollectionElement_galgas_33_QualifiedFeatureList * p = nullptr ;
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
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_galgas_33_QualifiedFeatureList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList::setter_append (const GALGAS_lstring inOperand0,
                                                           const GALGAS_lstring inOperand1,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_galgas_33_QualifiedFeatureList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
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
      cCollectionElement * p = nullptr ;
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
      if (nullptr == p) {
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
  if (nullptr == p) {
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
  if (nullptr == p) {
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
  if (nullptr == p) {
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
  if (nullptr == p) {
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
  if (nullptr != p) {
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
  if (nullptr != p) {
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
  if (nullptr != p) {
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
  if (nullptr != p) {
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
//     @galgas3QualifiedFeatureList generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList ("galgas3QualifiedFeatureList",
                                                       nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_galgas_33_QualifiedFeatureList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_galgas_33_QualifiedFeatureList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
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
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_galgas_33_QualifiedFeatureList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3QualifiedFeatureList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_header_i0_ (GALGAS_lbigint & outArgument_majorVersion,
                                                                                          GALGAS_lbigint & outArgument_minorVersion,
                                                                                          GALGAS_lbigint & outArgument_revisionVersion,
                                                                                          GALGAS_lstring & outArgument_targetName,
                                                                                          C_Lexique_galgasScanner * inCompiler) {
  outArgument_majorVersion.drop () ; // Release 'out' argument
  outArgument_minorVersion.drop () ; // Release 'out' argument
  outArgument_revisionVersion.drop () ; // Release 'out' argument
  outArgument_targetName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_project COMMA_SOURCE_FILE ("galgasProject.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasProject.galgas", 51)) ;
  outArgument_majorVersion = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 52)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 53)) ;
  outArgument_minorVersion = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 54)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 55)) ;
  outArgument_revisionVersion = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasProject.galgas", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasProject.galgas", 58)) ;
  outArgument_targetName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 59)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_header_i0_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_project COMMA_SOURCE_FILE ("galgasProject.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasProject.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 52)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 54)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasProject.galgas", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasProject.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 59)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_header_i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_project COMMA_SOURCE_FILE ("galgasProject.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasProject.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 52)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 53)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 54)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasProject.galgas", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasProject.galgas", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 59)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_ (GALGAS_galgas_33_ProjectComponentAST & outArgument_outProjectComponentAST,
                                                                                                                C_Lexique_galgasScanner * inCompiler) {
  outArgument_outProjectComponentAST.drop () ; // Release 'out' argument
  GALGAS_lbigint var_majorVersion_2691 ;
  GALGAS_lbigint var_minorVersion_2722 ;
  GALGAS_lbigint var_revisionVersion_2753 ;
  GALGAS_lstring var_targetName_2787 ;
  nt_project_5F_header_ (var_majorVersion_2691, var_minorVersion_2722, var_revisionVersion_2753, var_targetName_2787, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProject.galgas", 70)) ;
  GALGAS_lstringlist var_projectSourceList_2823 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasProject.galgas", 71)) ;
  GALGAS_lstringlist var_generateFeatureList_2865 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasProject.galgas", 72)) ;
  GALGAS_galgas_33_QualifiedFeatureList var_qualifiedFeatureList_2925 = GALGAS_galgas_33_QualifiedFeatureList::constructor_emptyList (SOURCE_FILE ("galgasProject.galgas", 73)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ProjectSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_quietOutputByDefault COMMA_SOURCE_FILE ("galgasProject.galgas", 76)) ;
      var_generateFeatureList_2865.addAssign_operation (GALGAS_string ("quietOutputByDefault").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 77))  COMMA_SOURCE_FILE ("galgasProject.galgas", 77)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_MacOS COMMA_SOURCE_FILE ("galgasProject.galgas", 79)) ;
      var_generateFeatureList_2865.addAssign_operation (GALGAS_string ("MacOS").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 80))  COMMA_SOURCE_FILE ("galgasProject.galgas", 80)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_makefile_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 82)) ;
      var_generateFeatureList_2865.addAssign_operation (GALGAS_string ("makefile-macosx").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 83))  COMMA_SOURCE_FILE ("galgasProject.galgas", 83)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_makefile_2D_unix COMMA_SOURCE_FILE ("galgasProject.galgas", 85)) ;
      var_generateFeatureList_2865.addAssign_operation (GALGAS_string ("makefile-unix").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 86))  COMMA_SOURCE_FILE ("galgasProject.galgas", 86)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 88)) ;
      var_generateFeatureList_2865.addAssign_operation (GALGAS_string ("makefile-x86linux32-on-macosx").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 89))  COMMA_SOURCE_FILE ("galgasProject.galgas", 89)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 91)) ;
      var_generateFeatureList_2865.addAssign_operation (GALGAS_string ("makefile-x86linux64-on-macosx").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 92))  COMMA_SOURCE_FILE ("galgasProject.galgas", 92)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 94)) ;
      var_generateFeatureList_2865.addAssign_operation (GALGAS_string ("makefile-win32-on-macosx").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 95))  COMMA_SOURCE_FILE ("galgasProject.galgas", 95)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_codeblocks_2D_windows COMMA_SOURCE_FILE ("galgasProject.galgas", 97)) ;
      var_generateFeatureList_2865.addAssign_operation (GALGAS_string ("codeblocks-windows").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 98))  COMMA_SOURCE_FILE ("galgasProject.galgas", 98)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_codeblocks_2D_linux_33__32_ COMMA_SOURCE_FILE ("galgasProject.galgas", 100)) ;
      var_generateFeatureList_2865.addAssign_operation (GALGAS_string ("codeblocks-linux32").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 101))  COMMA_SOURCE_FILE ("galgasProject.galgas", 101)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_codeblocks_2D_linux_36__34_ COMMA_SOURCE_FILE ("galgasProject.galgas", 103)) ;
      var_generateFeatureList_2865.addAssign_operation (GALGAS_string ("codeblocks-linux64").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 104))  COMMA_SOURCE_FILE ("galgasProject.galgas", 104)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_applicationBundleBase COMMA_SOURCE_FILE ("galgasProject.galgas", 106)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 107)) ;
      GALGAS_lstring var_featureValue_3952 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 108)) ;
      var_qualifiedFeatureList_2925.addAssign_operation (GALGAS_string ("applicationBundleBase").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 109)), var_featureValue_3952  COMMA_SOURCE_FILE ("galgasProject.galgas", 109)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_libpmAtPath COMMA_SOURCE_FILE ("galgasProject.galgas", 111)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 112)) ;
      GALGAS_lstring var_featureValue_4103 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 113)) ;
      var_qualifiedFeatureList_2925.addAssign_operation (GALGAS_string ("libpmAtPath").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 114)), var_featureValue_4103  COMMA_SOURCE_FILE ("galgasProject.galgas", 114)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_tool_2D_source COMMA_SOURCE_FILE ("galgasProject.galgas", 116)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 117)) ;
      GALGAS_lstring var_featureValue_4244 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 118)) ;
      var_qualifiedFeatureList_2925.addAssign_operation (GALGAS_string ("tool-source").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 119)), var_featureValue_4244  COMMA_SOURCE_FILE ("galgasProject.galgas", 119)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_MacOSDeployment COMMA_SOURCE_FILE ("galgasProject.galgas", 121)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 122)) ;
      GALGAS_lstring var_featureValue_4390 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 123)) ;
      var_qualifiedFeatureList_2925.addAssign_operation (GALGAS_string ("MacOSDeployment").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 124)), var_featureValue_4390  COMMA_SOURCE_FILE ("galgasProject.galgas", 124)) ;
    } break ;
    case 16: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_macCodeSign COMMA_SOURCE_FILE ("galgasProject.galgas", 126)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 127)) ;
      GALGAS_lstring var_featureValue_4536 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 128)) ;
      var_qualifiedFeatureList_2925.addAssign_operation (GALGAS_string ("macCodeSign").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 129)), var_featureValue_4536  COMMA_SOURCE_FILE ("galgasProject.galgas", 129)) ;
    } break ;
    case 17: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_app_2D_source COMMA_SOURCE_FILE ("galgasProject.galgas", 131)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 132)) ;
      GALGAS_lstring var_featureValue_4676 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 133)) ;
      var_qualifiedFeatureList_2925.addAssign_operation (GALGAS_string ("app-source").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 134)), var_featureValue_4676  COMMA_SOURCE_FILE ("galgasProject.galgas", 134)) ;
    } break ;
    case 18: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_app_2D_link COMMA_SOURCE_FILE ("galgasProject.galgas", 136)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 137)) ;
      GALGAS_lstring var_featureValue_4814 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 138)) ;
      var_qualifiedFeatureList_2925.addAssign_operation (GALGAS_string ("app-link").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 139)), var_featureValue_4814  COMMA_SOURCE_FILE ("galgasProject.galgas", 139)) ;
    } break ;
    case 19: {
      GALGAS_lstring var_filePath_4925 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 141)) ;
      var_projectSourceList_2823.addAssign_operation (var_filePath_4925  COMMA_SOURCE_FILE ("galgasProject.galgas", 142)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProject.galgas", 144)) ;
  outArgument_outProjectComponentAST = GALGAS_galgas_33_ProjectComponentAST::constructor_new (var_projectSourceList_2823, var_majorVersion_2691, var_minorVersion_2722, var_revisionVersion_2753, var_generateFeatureList_2865, var_qualifiedFeatureList_2925, var_targetName_2787, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasProject.galgas", 153))  COMMA_SOURCE_FILE ("galgasProject.galgas", 145)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_project_5F_header_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProject.galgas", 70)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ProjectSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_quietOutputByDefault COMMA_SOURCE_FILE ("galgasProject.galgas", 76)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_MacOS COMMA_SOURCE_FILE ("galgasProject.galgas", 79)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_makefile_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 82)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_makefile_2D_unix COMMA_SOURCE_FILE ("galgasProject.galgas", 85)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 88)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 91)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 94)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_codeblocks_2D_windows COMMA_SOURCE_FILE ("galgasProject.galgas", 97)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_codeblocks_2D_linux_33__32_ COMMA_SOURCE_FILE ("galgasProject.galgas", 100)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_codeblocks_2D_linux_36__34_ COMMA_SOURCE_FILE ("galgasProject.galgas", 103)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_applicationBundleBase COMMA_SOURCE_FILE ("galgasProject.galgas", 106)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 107)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 108)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_libpmAtPath COMMA_SOURCE_FILE ("galgasProject.galgas", 111)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 112)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 113)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_tool_2D_source COMMA_SOURCE_FILE ("galgasProject.galgas", 116)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 117)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 118)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_MacOSDeployment COMMA_SOURCE_FILE ("galgasProject.galgas", 121)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 122)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 123)) ;
    } break ;
    case 16: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_macCodeSign COMMA_SOURCE_FILE ("galgasProject.galgas", 126)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 127)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 128)) ;
    } break ;
    case 17: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_app_2D_source COMMA_SOURCE_FILE ("galgasProject.galgas", 131)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 132)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 133)) ;
    } break ;
    case 18: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_app_2D_link COMMA_SOURCE_FILE ("galgasProject.galgas", 136)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 137)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 138)) ;
    } break ;
    case 19: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 141)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProject.galgas", 144)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_project_5F_header_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasProject.galgas", 70)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ProjectSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_quietOutputByDefault COMMA_SOURCE_FILE ("galgasProject.galgas", 76)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_MacOS COMMA_SOURCE_FILE ("galgasProject.galgas", 79)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_makefile_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 82)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_makefile_2D_unix COMMA_SOURCE_FILE ("galgasProject.galgas", 85)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 88)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 91)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 94)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_codeblocks_2D_windows COMMA_SOURCE_FILE ("galgasProject.galgas", 97)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_codeblocks_2D_linux_33__32_ COMMA_SOURCE_FILE ("galgasProject.galgas", 100)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_codeblocks_2D_linux_36__34_ COMMA_SOURCE_FILE ("galgasProject.galgas", 103)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_applicationBundleBase COMMA_SOURCE_FILE ("galgasProject.galgas", 106)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 107)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 108)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_libpmAtPath COMMA_SOURCE_FILE ("galgasProject.galgas", 111)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 112)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 113)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_tool_2D_source COMMA_SOURCE_FILE ("galgasProject.galgas", 116)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 117)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 118)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_MacOSDeployment COMMA_SOURCE_FILE ("galgasProject.galgas", 121)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 122)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 123)) ;
    } break ;
    case 16: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_macCodeSign COMMA_SOURCE_FILE ("galgasProject.galgas", 126)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 127)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 128)) ;
    } break ;
    case 17: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_app_2D_source COMMA_SOURCE_FILE ("galgasProject.galgas", 131)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 132)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 133)) ;
    } break ;
    case 18: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_app_2D_link COMMA_SOURCE_FILE ("galgasProject.galgas", 136)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 137)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 138)) ;
    } break ;
    case 19: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 141)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasProject.galgas", 144)) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@AccessControlAST checkCompatibilityWithLet'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_checkCompatibilityWithLet (const GALGAS_AccessControlAST inObject,
                                                const GALGAS_location constinArgument_inLocation,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_AccessControlAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_AccessControlAST::kNotBuilt:
    break ;
  case GALGAS_AccessControlAST::kEnum_publicAccess:
    {
    }
    break ;
  case GALGAS_AccessControlAST::kEnum_protectedAccess:
    {
    }
    break ;
  case GALGAS_AccessControlAST::kEnum_protectedSetAccess:
    {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inLocation, GALGAS_string ("'protected(set)' and 'let' are incompatible"), fixItArray1  COMMA_SOURCE_FILE ("accessControl.galgas", 148)) ;
    }
    break ;
  case GALGAS_AccessControlAST::kEnum_privateAccess:
    {
    }
    break ;
  case GALGAS_AccessControlAST::kEnum_privateSetAccess:
    {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inLocation, GALGAS_string ("'private(set)' and 'let' are incompatible"), fixItArray2  COMMA_SOURCE_FILE ("accessControl.galgas", 151)) ;
    }
    break ;
  case GALGAS_AccessControlAST::kEnum_fileprivateAccess:
    {
    }
    break ;
  case GALGAS_AccessControlAST::kEnum_fileprivateSetAccess:
    {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inLocation, GALGAS_string ("'private(set)' and 'let' are incompatible"), fixItArray3  COMMA_SOURCE_FILE ("accessControl.galgas", 154)) ;
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@AccessControlAST accessControl'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_AccessControl extensionGetter_accessControl (const GALGAS_AccessControlAST & inObject,
                                                    const GALGAS_unifiedTypeMapEntry & constinArgument_inDeclaringType,
                                                    C_Compiler *
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_AccessControl result_result ; // Returned variable
  const GALGAS_AccessControlAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_AccessControlAST::kNotBuilt:
    break ;
  case GALGAS_AccessControlAST::kEnum_publicAccess:
    {
      result_result = GALGAS_AccessControl::constructor_publicAccess (SOURCE_FILE ("accessControl.galgas", 163)) ;
    }
    break ;
  case GALGAS_AccessControlAST::kEnum_protectedAccess:
    {
      result_result = GALGAS_AccessControl::constructor_protectedAccess (constinArgument_inDeclaringType  COMMA_SOURCE_FILE ("accessControl.galgas", 165)) ;
    }
    break ;
  case GALGAS_AccessControlAST::kEnum_protectedSetAccess:
    {
      result_result = GALGAS_AccessControl::constructor_protectedSetAccess (constinArgument_inDeclaringType  COMMA_SOURCE_FILE ("accessControl.galgas", 167)) ;
    }
    break ;
  case GALGAS_AccessControlAST::kEnum_privateAccess:
    {
      result_result = GALGAS_AccessControl::constructor_privateAccess (constinArgument_inDeclaringType  COMMA_SOURCE_FILE ("accessControl.galgas", 169)) ;
    }
    break ;
  case GALGAS_AccessControlAST::kEnum_privateSetAccess:
    {
      result_result = GALGAS_AccessControl::constructor_privateSetAccess (constinArgument_inDeclaringType  COMMA_SOURCE_FILE ("accessControl.galgas", 171)) ;
    }
    break ;
  case GALGAS_AccessControlAST::kEnum_fileprivateAccess:
    {
      const cEnumAssociatedValues_AccessControlAST_fileprivateAccess * extractPtr_5912 = (const cEnumAssociatedValues_AccessControlAST_fileprivateAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_location extractedValue_5813_declarationLocation = extractPtr_5912->mAssociatedValue0 ;
      result_result = GALGAS_AccessControl::constructor_fileprivateAccess (extractedValue_5813_declarationLocation  COMMA_SOURCE_FILE ("accessControl.galgas", 173)) ;
    }
    break ;
  case GALGAS_AccessControlAST::kEnum_fileprivateSetAccess:
    {
      const cEnumAssociatedValues_AccessControlAST_fileprivateSetAccess * extractPtr_6047 = (const cEnumAssociatedValues_AccessControlAST_fileprivateSetAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_location extractedValue_5945_declarationLocation = extractPtr_6047->mAssociatedValue0 ;
      result_result = GALGAS_AccessControl::constructor_fileprivateSetAccess (extractedValue_5945_declarationLocation  COMMA_SOURCE_FILE ("accessControl.galgas", 175)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@AccessControl checkSetAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_checkSetAccess (const GALGAS_AccessControl inObject,
                                     const GALGAS_selfAvailability constinArgument_inOptionalCurrentType,
                                     const GALGAS_location constinArgument_inErrorLocation,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_AccessControl temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_AccessControl::kNotBuilt:
    break ;
  case GALGAS_AccessControl::kEnum_publicAccess:
    {
    }
    break ;
  case GALGAS_AccessControl::kEnum_protectedAccess:
    {
      const cEnumAssociatedValues_AccessControl_protectedAccess * extractPtr_7662 = (const cEnumAssociatedValues_AccessControl_protectedAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMapEntry extractedValue_7026_declaringType = extractPtr_7662->mAssociatedValue0 ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GALGAS_selfAvailability::kNotBuilt:
        break ;
      case GALGAS_selfAvailability::kEnum_none:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'protected' qualifier)"), fixItArray1  COMMA_SOURCE_FILE ("accessControl.galgas", 203)) ;
        }
        break ;
      case GALGAS_selfAvailability::kEnum_available:
        {
          const cEnumAssociatedValues_selfAvailability_available * extractPtr_7652 = (const cEnumAssociatedValues_selfAvailability_available *) (constinArgument_inOptionalCurrentType.unsafePointer ()) ;
          const GALGAS_unifiedTypeMapEntry extractedValue_7205_t = extractPtr_7652->mAssociatedValue0 ;
          GALGAS_unifiedTypeMapEntry var_currentType_7225 = extractedValue_7205_t ;
          GALGAS_bool var_ok_7253 = GALGAS_bool (kIsEqual, extensionGetter_typeName (extractedValue_7026_declaringType, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 206)).objectCompare (extensionGetter_typeName (var_currentType_7225, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 206)))) ;
          bool loop_7317 = true ;
          while (loop_7317) {
            GALGAS_bool test_2 = var_ok_7253.operator_not (SOURCE_FILE ("accessControl.galgas", 207)) ;
            if (kBoolTrue == test_2.boolEnum ()) {
              test_2 = extensionGetter_definition (var_currentType_7225, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 207)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("accessControl.galgas", 207)).operator_not (SOURCE_FILE ("accessControl.galgas", 207)) ;
            }
            loop_7317 = test_2.isValid () ;
            if (loop_7317) {
              loop_7317 = test_2.boolValue () ;
            }
            if (loop_7317) {
              var_currentType_7225 = extensionGetter_definition (var_currentType_7225, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 208)).readProperty_mSuperType () ;
              var_ok_7253 = GALGAS_bool (kIsEqual, extensionGetter_typeName (extractedValue_7026_declaringType, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 209)).objectCompare (extensionGetter_typeName (var_currentType_7225, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 209)))) ;
            }
          }
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_ok_7253.operator_not (SOURCE_FILE ("accessControl.galgas", 211)).boolEnum () ;
            if (kBoolTrue == test_3) {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'protected' qualifier)"), fixItArray4  COMMA_SOURCE_FILE ("accessControl.galgas", 212)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GALGAS_AccessControl::kEnum_protectedSetAccess:
    {
      const cEnumAssociatedValues_AccessControl_protectedSetAccess * extractPtr_8346 = (const cEnumAssociatedValues_AccessControl_protectedSetAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMapEntry extractedValue_7695_declaringType = extractPtr_8346->mAssociatedValue0 ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GALGAS_selfAvailability::kNotBuilt:
        break ;
      case GALGAS_selfAvailability::kEnum_none:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticWarning (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'protected(set)' qualifier)"), fixItArray5  COMMA_SOURCE_FILE ("accessControl.galgas", 218)) ;
        }
        break ;
      case GALGAS_selfAvailability::kEnum_available:
        {
          const cEnumAssociatedValues_selfAvailability_available * extractPtr_8336 = (const cEnumAssociatedValues_selfAvailability_available *) (constinArgument_inOptionalCurrentType.unsafePointer ()) ;
          const GALGAS_unifiedTypeMapEntry extractedValue_7882_t = extractPtr_8336->mAssociatedValue0 ;
          GALGAS_unifiedTypeMapEntry var_currentType_7902 = extractedValue_7882_t ;
          GALGAS_bool var_ok_7930 = GALGAS_bool (kIsEqual, extensionGetter_typeName (extractedValue_7695_declaringType, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 221)).objectCompare (extensionGetter_typeName (var_currentType_7902, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 221)))) ;
          bool loop_7994 = true ;
          while (loop_7994) {
            GALGAS_bool test_6 = var_ok_7930.operator_not (SOURCE_FILE ("accessControl.galgas", 222)) ;
            if (kBoolTrue == test_6.boolEnum ()) {
              test_6 = extensionGetter_definition (var_currentType_7902, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 222)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("accessControl.galgas", 222)).operator_not (SOURCE_FILE ("accessControl.galgas", 222)) ;
            }
            loop_7994 = test_6.isValid () ;
            if (loop_7994) {
              loop_7994 = test_6.boolValue () ;
            }
            if (loop_7994) {
              var_currentType_7902 = extensionGetter_definition (var_currentType_7902, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 223)).readProperty_mSuperType () ;
              var_ok_7930 = GALGAS_bool (kIsEqual, extensionGetter_typeName (extractedValue_7695_declaringType, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 224)).objectCompare (extensionGetter_typeName (var_currentType_7902, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 224)))) ;
            }
          }
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = var_ok_7930.operator_not (SOURCE_FILE ("accessControl.galgas", 226)).boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticWarning (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'protected(set)' qualifier)"), fixItArray8  COMMA_SOURCE_FILE ("accessControl.galgas", 227)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GALGAS_AccessControl::kEnum_privateAccess:
    {
      const cEnumAssociatedValues_AccessControl_privateAccess * extractPtr_8741 = (const cEnumAssociatedValues_AccessControl_privateAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMapEntry extractedValue_8374_declaringType = extractPtr_8741->mAssociatedValue0 ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GALGAS_selfAvailability::kNotBuilt:
        break ;
      case GALGAS_selfAvailability::kEnum_none:
        {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray9  COMMA_SOURCE_FILE ("accessControl.galgas", 233)) ;
        }
        break ;
      case GALGAS_selfAvailability::kEnum_available:
        {
          const cEnumAssociatedValues_selfAvailability_available * extractPtr_8731 = (const cEnumAssociatedValues_selfAvailability_available *) (constinArgument_inOptionalCurrentType.unsafePointer ()) ;
          const GALGAS_unifiedTypeMapEntry extractedValue_8551_currentType = extractPtr_8731->mAssociatedValue0 ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsNotEqual, extensionGetter_typeName (extractedValue_8374_declaringType, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 235)).objectCompare (extensionGetter_typeName (extractedValue_8551_currentType, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 235)))).boolEnum () ;
            if (kBoolTrue == test_10) {
              TC_Array <C_FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray11  COMMA_SOURCE_FILE ("accessControl.galgas", 236)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GALGAS_AccessControl::kEnum_privateSetAccess:
    {
      const cEnumAssociatedValues_AccessControl_privateSetAccess * extractPtr_9152 = (const cEnumAssociatedValues_AccessControl_privateSetAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMapEntry extractedValue_8772_declaringType = extractPtr_9152->mAssociatedValue0 ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GALGAS_selfAvailability::kNotBuilt:
        break ;
      case GALGAS_selfAvailability::kEnum_none:
        {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticWarning (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'private(set)' qualifier)"), fixItArray12  COMMA_SOURCE_FILE ("accessControl.galgas", 242)) ;
        }
        break ;
      case GALGAS_selfAvailability::kEnum_available:
        {
          const cEnumAssociatedValues_selfAvailability_available * extractPtr_9142 = (const cEnumAssociatedValues_selfAvailability_available *) (constinArgument_inOptionalCurrentType.unsafePointer ()) ;
          const GALGAS_unifiedTypeMapEntry extractedValue_8957_currentType = extractPtr_9142->mAssociatedValue0 ;
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            test_13 = GALGAS_bool (kIsNotEqual, extensionGetter_typeName (extractedValue_8772_declaringType, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 244)).objectCompare (extensionGetter_typeName (extractedValue_8957_currentType, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 244)))).boolEnum () ;
            if (kBoolTrue == test_13) {
              TC_Array <C_FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'private(set)' qualifier)"), fixItArray14  COMMA_SOURCE_FILE ("accessControl.galgas", 245)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GALGAS_AccessControl::kEnum_fileprivateAccess:
    {
      const cEnumAssociatedValues_AccessControl_fileprivateAccess * extractPtr_9377 = (const cEnumAssociatedValues_AccessControl_fileprivateAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_location extractedValue_9184_declaringLocation = extractPtr_9377->mAssociatedValue0 ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (kIsNotEqual, extensionGetter_sourceFile (extractedValue_9184_declaringLocation, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 249)).objectCompare (extensionGetter_sourceFile (constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 249)))).boolEnum () ;
        if (kBoolTrue == test_15) {
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'fileprivate' qualifier)"), fixItArray16  COMMA_SOURCE_FILE ("accessControl.galgas", 250)) ;
        }
      }
    }
    break ;
  case GALGAS_AccessControl::kEnum_fileprivateSetAccess:
    {
      const cEnumAssociatedValues_AccessControl_fileprivateSetAccess * extractPtr_9610 = (const cEnumAssociatedValues_AccessControl_fileprivateSetAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_location extractedValue_9412_declaringLocation = extractPtr_9610->mAssociatedValue0 ;
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = GALGAS_bool (kIsNotEqual, extensionGetter_sourceFile (extractedValue_9412_declaringLocation, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 253)).objectCompare (extensionGetter_sourceFile (constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 253)))).boolEnum () ;
        if (kBoolTrue == test_17) {
          TC_Array <C_FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'fileprivate(set)' qualifier)"), fixItArray18  COMMA_SOURCE_FILE ("accessControl.galgas", 254)) ;
        }
      }
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@AccessControl checkGetAccess'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_checkGetAccess (const GALGAS_AccessControl inObject,
                                     const GALGAS_selfAvailability constinArgument_inOptionalCurrentType,
                                     const GALGAS_location constinArgument_inErrorLocation,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_AccessControl temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_AccessControl::kNotBuilt:
    break ;
  case GALGAS_AccessControl::kEnum_publicAccess:
    {
    }
    break ;
  case GALGAS_AccessControl::kEnum_protectedSetAccess:
    {
    }
    break ;
  case GALGAS_AccessControl::kEnum_privateSetAccess:
    {
    }
    break ;
  case GALGAS_AccessControl::kEnum_protectedAccess:
    {
      const cEnumAssociatedValues_AccessControl_protectedAccess * extractPtr_10641 = (const cEnumAssociatedValues_AccessControl_protectedAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMapEntry extractedValue_10007_declaringType = extractPtr_10641->mAssociatedValue0 ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GALGAS_selfAvailability::kNotBuilt:
        break ;
      case GALGAS_selfAvailability::kEnum_none:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray1  COMMA_SOURCE_FILE ("accessControl.galgas", 270)) ;
        }
        break ;
      case GALGAS_selfAvailability::kEnum_available:
        {
          const cEnumAssociatedValues_selfAvailability_available * extractPtr_10631 = (const cEnumAssociatedValues_selfAvailability_available *) (constinArgument_inOptionalCurrentType.unsafePointer ()) ;
          const GALGAS_unifiedTypeMapEntry extractedValue_10184_t = extractPtr_10631->mAssociatedValue0 ;
          GALGAS_unifiedTypeMapEntry var_currentType_10204 = extractedValue_10184_t ;
          GALGAS_bool var_ok_10232 = GALGAS_bool (kIsEqual, extensionGetter_typeName (extractedValue_10007_declaringType, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 273)).objectCompare (extensionGetter_typeName (var_currentType_10204, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 273)))) ;
          bool loop_10296 = true ;
          while (loop_10296) {
            GALGAS_bool test_2 = var_ok_10232.operator_not (SOURCE_FILE ("accessControl.galgas", 274)) ;
            if (kBoolTrue == test_2.boolEnum ()) {
              test_2 = extensionGetter_definition (var_currentType_10204, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 274)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("accessControl.galgas", 274)).operator_not (SOURCE_FILE ("accessControl.galgas", 274)) ;
            }
            loop_10296 = test_2.isValid () ;
            if (loop_10296) {
              loop_10296 = test_2.boolValue () ;
            }
            if (loop_10296) {
              var_currentType_10204 = extensionGetter_definition (var_currentType_10204, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 275)).readProperty_mSuperType () ;
              var_ok_10232 = GALGAS_bool (kIsEqual, extensionGetter_typeName (extractedValue_10007_declaringType, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 276)).objectCompare (extensionGetter_typeName (var_currentType_10204, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 276)))) ;
            }
          }
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_ok_10232.operator_not (SOURCE_FILE ("accessControl.galgas", 278)).boolEnum () ;
            if (kBoolTrue == test_3) {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'protected' qualifier)"), fixItArray4  COMMA_SOURCE_FILE ("accessControl.galgas", 279)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GALGAS_AccessControl::kEnum_privateAccess:
    {
      const cEnumAssociatedValues_AccessControl_privateAccess * extractPtr_11036 = (const cEnumAssociatedValues_AccessControl_privateAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMapEntry extractedValue_10669_declaringType = extractPtr_11036->mAssociatedValue0 ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GALGAS_selfAvailability::kNotBuilt:
        break ;
      case GALGAS_selfAvailability::kEnum_none:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray5  COMMA_SOURCE_FILE ("accessControl.galgas", 285)) ;
        }
        break ;
      case GALGAS_selfAvailability::kEnum_available:
        {
          const cEnumAssociatedValues_selfAvailability_available * extractPtr_11026 = (const cEnumAssociatedValues_selfAvailability_available *) (constinArgument_inOptionalCurrentType.unsafePointer ()) ;
          const GALGAS_unifiedTypeMapEntry extractedValue_10846_currentType = extractPtr_11026->mAssociatedValue0 ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsNotEqual, extensionGetter_typeName (extractedValue_10669_declaringType, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 287)).objectCompare (extensionGetter_typeName (extractedValue_10846_currentType, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 287)))).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray7  COMMA_SOURCE_FILE ("accessControl.galgas", 288)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GALGAS_AccessControl::kEnum_fileprivateAccess:
    {
      const cEnumAssociatedValues_AccessControl_fileprivateAccess * extractPtr_11261 = (const cEnumAssociatedValues_AccessControl_fileprivateAccess *) (temp_0.unsafePointer ()) ;
      const GALGAS_location extractedValue_11068_declaringLocation = extractPtr_11261->mAssociatedValue0 ;
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (kIsNotEqual, extensionGetter_sourceFile (extractedValue_11068_declaringLocation, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 292)).objectCompare (extensionGetter_sourceFile (constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 292)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("inaccessible property (due to 'fileprivate' qualifier)"), fixItArray9  COMMA_SOURCE_FILE ("accessControl.galgas", 293)) ;
        }
      }
    }
    break ;
  case GALGAS_AccessControl::kEnum_fileprivateSetAccess:
    {
    }
    break ;
  }
}




//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i0_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 23)) ;
  nt_expression_5F_ggs_33__ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i0_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 23)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 23)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i1_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 21)) ;
  GALGAS_semanticExpressionAST var_ifExpression_1020 ;
  nt_expression_5F_ggs_33__ (var_ifExpression_1020, inCompiler) ;
  GALGAS_location var_operatorLocation_1041 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_then COMMA_SOURCE_FILE ("expression-if.galgas", 24)) ;
  GALGAS_semanticExpressionAST var_thenExpression_1113 ;
  nt_expression_5F_ggs_33__ (var_thenExpression_1113, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 26)) ;
  GALGAS_semanticExpressionAST var_elseExpression_1166 ;
  nt_expression_5F_ggs_33__ (var_elseExpression_1166, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("expression-if.galgas", 28)) ;
  outArgument_outExpression = GALGAS_ifExpressionAST::constructor_new (var_operatorLocation_1041, var_ifExpression_1020, var_thenExpression_1113, var_elseExpression_1166  COMMA_SOURCE_FILE ("expression-if.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i1_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 21)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_then COMMA_SOURCE_FILE ("expression-if.galgas", 24)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 26)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("expression-if.galgas", 28)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 21)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_then COMMA_SOURCE_FILE ("expression-if.galgas", 24)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 26)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("expression-if.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i2_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_894 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 20)) ;
  nt_factor_5F_ggs_33__ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryPlusExpressionAST::constructor_new (var_operatorLocation_894, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i2_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 20)) ;
  nt_factor_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 20)) ;
  nt_factor_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i3_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_895 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 20)) ;
  nt_factor_5F_ggs_33__ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryMinusExpressionAST::constructor_new (var_operatorLocation_895, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i3_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 20)) ;
  nt_factor_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i3_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 20)) ;
  nt_factor_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i4_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_identifier_847 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-var.galgas", 18)) ;
  outArgument_outExpression = GALGAS_varInExpressionAST::constructor_new (var_identifier_847  COMMA_SOURCE_FILE ("expression-var.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i4_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-var.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i4_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-var.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__i5_ (GALGAS_actualOutputExpressionList & outArgument_outExpressionList,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("expression-output-expression-list.galgas", 20)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_ExpressionSyntax_0 (inCompiler) == 2) {
      GALGAS_lstring var_selector_994 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 23)) ;
      GALGAS_semanticExpressionAST var_expression_1055 ;
      nt_expression_5F_ggs_33__ (var_expression_1055, inCompiler) ;
      outArgument_outExpressionList.addAssign_operation (var_selector_994, var_expression_1055, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 25))  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 25)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__i5_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_ExpressionSyntax_0 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 23)) ;
      nt_expression_5F_ggs_33__parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__i5_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_ExpressionSyntax_0 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 23)) ;
      nt_expression_5F_ggs_33__indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i6_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_true COMMA_SOURCE_FILE ("expression-true-false.galgas", 24)) ;
  outArgument_outExpression = GALGAS_trueExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 25))  COMMA_SOURCE_FILE ("expression-true-false.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i6_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_true COMMA_SOURCE_FILE ("expression-true-false.galgas", 24)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i6_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_true COMMA_SOURCE_FILE ("expression-true-false.galgas", 24)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i7_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_false COMMA_SOURCE_FILE ("expression-true-false.galgas", 31)) ;
  outArgument_outExpression = GALGAS_falseExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 32))  COMMA_SOURCE_FILE ("expression-true-false.galgas", 32)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i7_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_false COMMA_SOURCE_FILE ("expression-true-false.galgas", 31)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i7_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_false COMMA_SOURCE_FILE ("expression-true-false.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i8_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_stringlist var_literalStringList_898 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-literal-string.galgas", 19)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_literalString_954 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 21)) ;
    var_literalStringList_898.addAssign_operation (var_literalString_954.readProperty_string ()  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 22)) ;
    if (select_galgas_33_ExpressionSyntax_1 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outExpression = GALGAS_literalStringExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 25)), var_literalStringList_898  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i8_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 21)) ;
    if (select_galgas_33_ExpressionSyntax_1 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i8_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 21)) ;
    if (select_galgas_33_ExpressionSyntax_1 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i9_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lchar var_literalChar_857 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-literal-char.galgas", 18)) ;
  outArgument_outExpression = GALGAS_literalCharExpressionAST::constructor_new (var_literalChar_857  COMMA_SOURCE_FILE ("expression-literal-char.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i9_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-literal-char.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i9_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-literal-char.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i10_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_ldouble var_literalDouble_863 = inCompiler->synthetizedAttribute_floatValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-literal-double.galgas", 18)) ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionAST::constructor_new (var_literalDouble_863  COMMA_SOURCE_FILE ("expression-literal-double.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i10_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-literal-double.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i10_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-literal-double.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i11_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lbigint var_literalInt_1735 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) ;
  outArgument_outExpression = GALGAS_literalBigIntExpressionAST::constructor_new (var_literalInt_1735  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 43)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i11_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i11_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_factor_5F_ggs_33__i12_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                             C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_simple_5F_expression_5F_ggs_33__ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_2 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_1389 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 37)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 38)) ;
      GALGAS_semanticExpressionAST var_leftOperand_1444 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_1508 ;
      nt_simple_5F_expression_5F_ggs_33__ (var_rightOperand_1508, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_1389, var_leftOperand_1444, GALGAS_comparison::constructor_equal (SOURCE_FILE ("expression-comparison.galgas", 41)), var_rightOperand_1508  COMMA_SOURCE_FILE ("expression-comparison.galgas", 41)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_1647 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 43)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 44)) ;
      GALGAS_semanticExpressionAST var_leftOperand_1702 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_1766 ;
      nt_simple_5F_expression_5F_ggs_33__ (var_rightOperand_1766, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_1647, var_leftOperand_1702, GALGAS_comparison::constructor_notEqual (SOURCE_FILE ("expression-comparison.galgas", 47)), var_rightOperand_1766  COMMA_SOURCE_FILE ("expression-comparison.galgas", 47)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_1908 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 49)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 50)) ;
      GALGAS_semanticExpressionAST var_leftOperand_1963 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2027 ;
      nt_simple_5F_expression_5F_ggs_33__ (var_rightOperand_2027, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_1908, var_leftOperand_1963, GALGAS_comparison::constructor_lowerOrEqual (SOURCE_FILE ("expression-comparison.galgas", 53)), var_rightOperand_2027  COMMA_SOURCE_FILE ("expression-comparison.galgas", 53)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_2173 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 55)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 56)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2228 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2292 ;
      nt_simple_5F_expression_5F_ggs_33__ (var_rightOperand_2292, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_2173, var_leftOperand_2228, GALGAS_comparison::constructor_greaterOrEqual (SOURCE_FILE ("expression-comparison.galgas", 59)), var_rightOperand_2292  COMMA_SOURCE_FILE ("expression-comparison.galgas", 59)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_2440 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 61)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 62)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2494 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2558 ;
      nt_simple_5F_expression_5F_ggs_33__ (var_rightOperand_2558, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_2440, var_leftOperand_2494, GALGAS_comparison::constructor_greaterThan (SOURCE_FILE ("expression-comparison.galgas", 65)), var_rightOperand_2558  COMMA_SOURCE_FILE ("expression-comparison.galgas", 65)) ;
    } break ;
    case 7: {
      GALGAS_location var_operatorLocation_2703 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 67)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 68)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2757 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2821 ;
      nt_simple_5F_expression_5F_ggs_33__ (var_rightOperand_2821, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_2703, var_leftOperand_2757, GALGAS_comparison::constructor_lowerThan (SOURCE_FILE ("expression-comparison.galgas", 71)), var_rightOperand_2821  COMMA_SOURCE_FILE ("expression-comparison.galgas", 71)) ;
    } break ;
    case 8: {
      GALGAS_location var_operatorLocation_2964 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 73)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 74)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3020 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3084 ;
      nt_simple_5F_expression_5F_ggs_33__ (var_rightOperand_3084, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_2964, var_leftOperand_3020, GALGAS_comparison::constructor_sameInstance (SOURCE_FILE ("expression-comparison.galgas", 77)), var_rightOperand_3084  COMMA_SOURCE_FILE ("expression-comparison.galgas", 77)) ;
    } break ;
    case 9: {
      GALGAS_location var_operatorLocation_3230 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 79)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 80)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3286 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3350 ;
      nt_simple_5F_expression_5F_ggs_33__ (var_rightOperand_3350, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_3230, var_leftOperand_3286, GALGAS_comparison::constructor_differentInstances (SOURCE_FILE ("expression-comparison.galgas", 83)), var_rightOperand_3350  COMMA_SOURCE_FILE ("expression-comparison.galgas", 83)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_factor_5F_ggs_33__i12_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_simple_5F_expression_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 38)) ;
      nt_simple_5F_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 44)) ;
      nt_simple_5F_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 50)) ;
      nt_simple_5F_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 56)) ;
      nt_simple_5F_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 62)) ;
      nt_simple_5F_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 68)) ;
      nt_simple_5F_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 74)) ;
      nt_simple_5F_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 80)) ;
      nt_simple_5F_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_factor_5F_ggs_33__i12_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 38)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 44)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 50)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 56)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 62)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 68)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 74)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 80)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_simple_5F_expression_5F_ggs_33__i13_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                               C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_term_5F_ggs_33__ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_3 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_2687 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 63)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 64)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2742 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2793 ;
      nt_term_5F_ggs_33__ (var_rightOperand_2793, inCompiler) ;
      outArgument_outExpression = GALGAS_leftShiftExpressionAST::constructor_new (var_operatorLocation_2687, var_leftOperand_2742, var_rightOperand_2793  COMMA_SOURCE_FILE ("expression-additive.galgas", 67)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_2923 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 69)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 70)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2978 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3029 ;
      nt_term_5F_ggs_33__ (var_rightOperand_3029, inCompiler) ;
      outArgument_outExpression = GALGAS_rightShiftExpressionAST::constructor_new (var_operatorLocation_2923, var_leftOperand_2978, var_rightOperand_3029  COMMA_SOURCE_FILE ("expression-additive.galgas", 73)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_3160 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 75)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 76)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3214 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3265 ;
      nt_term_5F_ggs_33__ (var_rightOperand_3265, inCompiler) ;
      outArgument_outExpression = GALGAS_addExpressionAST::constructor_new (var_operatorLocation_3160, var_leftOperand_3214, var_rightOperand_3265  COMMA_SOURCE_FILE ("expression-additive.galgas", 79)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_3389 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 81)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 82)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3444 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3495 ;
      nt_term_5F_ggs_33__ (var_rightOperand_3495, inCompiler) ;
      outArgument_outExpression = GALGAS_addExpressionNoOverflowAST::constructor_new (var_operatorLocation_3389, var_leftOperand_3444, var_rightOperand_3495  COMMA_SOURCE_FILE ("expression-additive.galgas", 85)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_3629 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 87)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 88)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3683 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3734 ;
      nt_term_5F_ggs_33__ (var_rightOperand_3734, inCompiler) ;
      outArgument_outExpression = GALGAS_subExpressionAST::constructor_new (var_operatorLocation_3629, var_leftOperand_3683, var_rightOperand_3734  COMMA_SOURCE_FILE ("expression-additive.galgas", 91)) ;
    } break ;
    case 7: {
      GALGAS_location var_operatorLocation_3858 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 93)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 94)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3913 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3964 ;
      nt_term_5F_ggs_33__ (var_rightOperand_3964, inCompiler) ;
      outArgument_outExpression = GALGAS_subExpressionNoOverflowAST::constructor_new (var_operatorLocation_3858, var_leftOperand_3913, var_rightOperand_3964  COMMA_SOURCE_FILE ("expression-additive.galgas", 97)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_simple_5F_expression_5F_ggs_33__i13_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_term_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 64)) ;
      nt_term_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 70)) ;
      nt_term_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 76)) ;
      nt_term_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 82)) ;
      nt_term_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 88)) ;
      nt_term_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 94)) ;
      nt_term_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_simple_5F_expression_5F_ggs_33__i13_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_term_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 64)) ;
      nt_term_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 70)) ;
      nt_term_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 76)) ;
      nt_term_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 82)) ;
      nt_term_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 88)) ;
      nt_term_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 94)) ;
      nt_term_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_term_5F_ggs_33__i14_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                               C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_factor_5F_ggs_33__ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_4 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_2355 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 55)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 56)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2409 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2485 ;
      nt_factor_5F_ggs_33__ (var_rightOperand_2485, inCompiler) ;
      outArgument_outExpression = GALGAS_multiplicationExpressionAST::constructor_new (var_operatorLocation_2355, var_leftOperand_2409, var_rightOperand_2485  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 59)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_2620 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 61)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 62)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2675 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2751 ;
      nt_factor_5F_ggs_33__ (var_rightOperand_2751, inCompiler) ;
      outArgument_outExpression = GALGAS_multiplicationExpressionNoOverflowAST::constructor_new (var_operatorLocation_2620, var_leftOperand_2675, var_rightOperand_2751  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 65)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_2896 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 67)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 68)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2950 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3003 ;
      nt_factor_5F_ggs_33__ (var_rightOperand_3003, inCompiler) ;
      outArgument_outExpression = GALGAS_divisionExpressionAST::constructor_new (var_operatorLocation_2896, var_leftOperand_2950, var_rightOperand_3003  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 71)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_3132 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 73)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 74)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3187 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3240 ;
      nt_factor_5F_ggs_33__ (var_rightOperand_3240, inCompiler) ;
      outArgument_outExpression = GALGAS_divisionExpressionNoOverflowAST::constructor_new (var_operatorLocation_3132, var_leftOperand_3187, var_rightOperand_3240  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 77)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_3379 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 79)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 80)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3435 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3488 ;
      nt_factor_5F_ggs_33__ (var_rightOperand_3488, inCompiler) ;
      outArgument_outExpression = GALGAS_moduloExpressionAST::constructor_new (var_operatorLocation_3379, var_leftOperand_3435, var_rightOperand_3488  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 83)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_term_5F_ggs_33__i14_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_factor_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 56)) ;
      nt_factor_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 62)) ;
      nt_factor_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 68)) ;
      nt_factor_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 74)) ;
      nt_factor_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 80)) ;
      nt_factor_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_term_5F_ggs_33__i14_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_factor_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 56)) ;
      nt_factor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 62)) ;
      nt_factor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 68)) ;
      nt_factor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 74)) ;
      nt_factor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 80)) ;
      nt_factor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_ggs_33__i15_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                     C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_or_5F_ggs_33__ (outArgument_outExpression, inCompiler) ;
  switch (select_galgas_33_ExpressionSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_location var_endOfReceiverExpression_1626 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 41)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas", 42)) ;
    GALGAS_dynamicTypeComparisonKind var_kind_1715 ;
    switch (select_galgas_33_ExpressionSyntax_6 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 45)) ;
      var_kind_1715 = GALGAS_dynamicTypeComparisonKind::constructor_equal (SOURCE_FILE ("expression-is-as.galgas", 46)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 48)) ;
      var_kind_1715 = GALGAS_dynamicTypeComparisonKind::constructor_inherited (SOURCE_FILE ("expression-is-as.galgas", 49)) ;
    } break ;
    case 3: {
      var_kind_1715 = GALGAS_dynamicTypeComparisonKind::constructor_inherited (SOURCE_FILE ("expression-is-as.galgas", 51)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 53)) ;
      var_kind_1715 = GALGAS_dynamicTypeComparisonKind::constructor_strictlyInherited (SOURCE_FILE ("expression-is-as.galgas", 54)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_typeName_1935 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 56)) ;
    outArgument_outExpression = GALGAS_testDynamicClassInExpressionAST::constructor_new (outArgument_outExpression, var_endOfReceiverExpression_1626, var_kind_1715, var_typeName_1935  COMMA_SOURCE_FILE ("expression-is-as.galgas", 57)) ;
  } break ;
  case 3: {
    GALGAS_location var_endOfReceiverExpression_2118 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 64)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("expression-is-as.galgas", 65)) ;
    GALGAS_lstring var_typeName_2189 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 66)) ;
    outArgument_outExpression = GALGAS_castInExpressionAST::constructor_new (outArgument_outExpression, var_endOfReceiverExpression_2118, var_typeName_2189  COMMA_SOURCE_FILE ("expression-is-as.galgas", 67)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_ggs_33__i15_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_5F_or_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_ExpressionSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas", 42)) ;
    switch (select_galgas_33_ExpressionSyntax_6 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 45)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 48)) ;
    } break ;
    case 3: {
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 53)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 56)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("expression-is-as.galgas", 65)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 66)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_ggs_33__i15_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_5F_or_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_ExpressionSyntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas", 42)) ;
    switch (select_galgas_33_ExpressionSyntax_6 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 45)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 48)) ;
    } break ;
    case 3: {
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 53)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 56)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("expression-is-as.galgas", 65)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 66)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i16_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 21)) ;
  GALGAS_lstring var_optionComponentName_961 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 23)) ;
  GALGAS_lstring var_optionName_1045 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 24)) ;
  GALGAS_lstring var_getterName_1078 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 25)) ;
  outArgument_outExpression = GALGAS_optionExpressionAST::constructor_new (var_optionComponentName_961, var_optionName_1045, var_getterName_1078  COMMA_SOURCE_FILE ("expression-option.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i16_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 27)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i16_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i17_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 35)) ;
  GALGAS_lstring var_optionName_1433 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 36)) ;
  GALGAS_lstring var_getterName_1466 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 37)) ;
  outArgument_outExpression = GALGAS_optionExpressionAST::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("galgas_builtin_options"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-option.galgas", 38))  COMMA_SOURCE_FILE ("expression-option.galgas", 38)), var_optionName_1433, var_getterName_1466  COMMA_SOURCE_FILE ("expression-option.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i17_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 39)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i17_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i18_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_lexique COMMA_SOURCE_FILE ("expression-lexique.galgas", 20)) ;
  GALGAS_lstring var_lexiqueName_940 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 22)) ;
  GALGAS_lstring var_getterName_982 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 23)) ;
  outArgument_outExpression = GALGAS_lexiqueIntrospectionExpressionAST::constructor_new (var_lexiqueName_940, var_getterName_982  COMMA_SOURCE_FILE ("expression-lexique.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i18_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_lexique COMMA_SOURCE_FILE ("expression-lexique.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i18_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_lexique COMMA_SOURCE_FILE ("expression-lexique.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i19_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 34)) ;
  GALGAS_lstring var_filewrapperName_1512 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 35)) ;
  switch (select_galgas_33_ExpressionSyntax_7 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GALGAS_filewrapperObjectInstanciationInExpressionAST::constructor_new (var_filewrapperName_1512  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 37)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 41)) ;
    switch (select_galgas_33_ExpressionSyntax_8 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_filePath_1740 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 43)) ;
      outArgument_outExpression = GALGAS_filewrapperInExpressionAST::constructor_new (var_filewrapperName_1512, var_filePath_1740  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 44)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_filewrapperTemplateName_1908 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 49)) ;
      GALGAS_actualOutputExpressionList var_expressionList_2003 ;
      nt_output_5F_expression_5F_list_5F_ggs_33__ (var_expressionList_2003, inCompiler) ;
      outArgument_outExpression = GALGAS_filewrapperTemplateInExpressionAST::constructor_new (var_filewrapperName_1512, var_filewrapperTemplateName_1908, var_expressionList_2003  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 51)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i19_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 34)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 35)) ;
  switch (select_galgas_33_ExpressionSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 41)) ;
    switch (select_galgas_33_ExpressionSyntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 43)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 49)) ;
      nt_output_5F_expression_5F_list_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 58)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i19_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_filewrapper COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 34)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 35)) ;
  switch (select_galgas_33_ExpressionSyntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 41)) ;
    switch (select_galgas_33_ExpressionSyntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 43)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 49)) ;
      nt_output_5F_expression_5F_list_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i20_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 10)) ;
  GALGAS_location var_startLocation_542 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 12)) ;
  GALGAS_semanticExpressionAST var_receiverExpression_623 ;
  nt_expression_5F_ggs_33__ (var_receiverExpression_623, inCompiler) ;
  GALGAS_lstring var_getterName_696 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-getter-call.galgas", 15)) ;
  GALGAS_actualOutputExpressionList var_expressionList_799 ;
  nt_output_5F_expression_5F_list_5F_ggs_33__ (var_expressionList_799, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 18)) ;
  GALGAS_location var_endLocation_830 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 19)) ;
  outArgument_outExpression = GALGAS_getterCallExpressionAST::constructor_new (GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorPropertyGetterCall.readProperty_value ()), var_receiverExpression_623, var_getterName_696, var_expressionList_799, var_startLocation_542.getter_union (var_endLocation_830, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 25))  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 20)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i20_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 10)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-getter-call.galgas", 15)) ;
  nt_output_5F_expression_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i20_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 10)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-getter-call.galgas", 15)) ;
  nt_output_5F_expression_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_i21_ (GALGAS_lstring & outArgument_outTypeName,
                                                                                                C_Lexique_galgasScanner * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  switch (select_galgas_33_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
    outArgument_outTypeName = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 28))  COMMA_SOURCE_FILE ("expression-constructor.galgas", 28)) ;
  } break ;
  case 2: {
    outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 30)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_i21_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 30)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_i21_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 30)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i22_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_1579 ;
  nt_optional_5F_type_ (var_typeName_1579, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 39)) ;
  GALGAS_location var_startOfExpression_1604 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 40)) ;
  GALGAS_lstring var_constructorName_1694 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-constructor.galgas", 42)) ;
  GALGAS_actualOutputExpressionList var_expressionList_1770 ;
  switch (select_galgas_33_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
    var_expressionList_1770 = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("expression-constructor.galgas", 46)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 48)) ;
    nt_output_5F_expression_5F_list_5F_ggs_33__ (var_expressionList_1770, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 50)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfExpression_1917 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 52)) ;
  outArgument_outExpression = GALGAS_constructorExpressionAST::constructor_new (var_typeName_1579, var_constructorName_1694, var_expressionList_1770, var_startOfExpression_1604.getter_union (var_endOfExpression_1917, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 57))  COMMA_SOURCE_FILE ("expression-constructor.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i22_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-constructor.galgas", 42)) ;
  switch (select_galgas_33_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 48)) ;
    nt_output_5F_expression_5F_list_5F_ggs_33__parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 50)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i22_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-constructor.galgas", 42)) ;
  switch (select_galgas_33_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 48)) ;
    nt_output_5F_expression_5F_list_5F_ggs_33__indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 50)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i23_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_2346 ;
  nt_optional_5F_type_ (var_typeName_2346, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("expression-constructor.galgas", 66)) ;
  outArgument_outExpression = GALGAS_defaultConstructorExpressionAST::constructor_new (var_typeName_2346  COMMA_SOURCE_FILE ("expression-constructor.galgas", 67)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i23_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("expression-constructor.galgas", 66)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i23_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("expression-constructor.galgas", 66)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i24_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_functionName_927 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 20)) ;
  GALGAS_actualOutputExpressionList var_expressionList_1037 ;
  nt_output_5F_expression_5F_list_5F_ggs_33__ (var_expressionList_1037, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 22)) ;
  outArgument_outExpression = GALGAS_functionCallExpressionAST::constructor_new (var_functionName_927, var_expressionList_1037  COMMA_SOURCE_FILE ("expression-function-call.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i24_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 20)) ;
  nt_output_5F_expression_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 22)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i24_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 20)) ;
  nt_output_5F_expression_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i25_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 18)) ;
  GALGAS_lstring var_typeName_874 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 19)) ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionAST::constructor_new (var_typeName_874  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 20)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i25_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 19)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i25_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i26_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_1965 ;
  nt_optional_5F_type_ (var_typeName_1965, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 45)) ;
  GALGAS_collectionValueElementList var_elementList_2018 = GALGAS_collectionValueElementList::constructor_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 46)) ;
  switch (select_galgas_33_ExpressionSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_abstractCollectionValueElement var_element_2138 ;
      nt_collection_5F_value_5F_element_ (var_element_2138, inCompiler) ;
      var_elementList_2018.addAssign_operation (var_element_2138  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 51)) ;
      if (select_galgas_33_ExpressionSyntax_12 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 53)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GALGAS_collectionValueAST::constructor_new (var_typeName_1965, var_elementList_2018, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 59))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i26_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 45)) ;
  switch (select_galgas_33_ExpressionSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_collection_5F_value_5F_element_parse (inCompiler) ;
      if (select_galgas_33_ExpressionSyntax_12 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 53)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 61)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i26_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 45)) ;
  switch (select_galgas_33_ExpressionSyntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_collection_5F_value_5F_element_indexing (inCompiler) ;
      if (select_galgas_33_ExpressionSyntax_12 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 53)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i27_ (GALGAS_abstractCollectionValueElement & outArgument_outValueElement,
                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outValueElement.drop () ; // Release 'out' argument
  GALGAS_actualOutputExpressionList var_expressionList_2582 = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 67)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_selector_2628 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 69)) ;
    GALGAS_semanticExpressionAST var_expression_2689 ;
    nt_expression_5F_ggs_33__ (var_expression_2689, inCompiler) ;
    var_expressionList_2582.addAssign_operation (var_selector_2628, var_expression_2689, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 71))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 71)) ;
    if (select_galgas_33_ExpressionSyntax_13 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outValueElement = GALGAS_expressionListCollectionValue::constructor_new (var_expressionList_2582, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 74))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 74)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i27_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 69)) ;
    nt_expression_5F_ggs_33__parse (inCompiler) ;
    if (select_galgas_33_ExpressionSyntax_13 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i27_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 69)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_ExpressionSyntax_13 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i28_ (GALGAS_abstractCollectionValueElement & outArgument_outValueElement,
                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outValueElement.drop () ; // Release 'out' argument
  GALGAS_semanticExpressionAST var_expression_3137 ;
  nt_expression_5F_ggs_33__ (var_expression_3137, inCompiler) ;
  outArgument_outValueElement = GALGAS_expressionCollectionValue::constructor_new (var_expression_3137, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 81))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 81)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i28_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i28_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i29_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("expression-self.galgas", 18)) ;
  outArgument_outExpression = GALGAS_selfInExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-self.galgas", 19))  COMMA_SOURCE_FILE ("expression-self.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i29_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("expression-self.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i29_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("expression-self.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i30_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_5F_ggs_33__ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_ExpressionSyntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 23)) ;
      GALGAS_lstring var_structFieldName_1023 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 24)) ;
      outArgument_outExpression = GALGAS_structPropertyAccessExpressionAST::constructor_new (var_structFieldName_1023.readProperty_location (), outArgument_outExpression, var_structFieldName_1023  COMMA_SOURCE_FILE ("expression-property-access.galgas", 25)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i30_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_primary_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_ExpressionSyntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 23)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 24)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i30_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_primary_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_ExpressionSyntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 23)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 24)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i31_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_890 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-not.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 20)) ;
  nt_factor_5F_ggs_33__ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_notExpressionAST::constructor_new (var_operatorLocation_890, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-not.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i31_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 20)) ;
  nt_factor_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i31_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 20)) ;
  nt_factor_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i32_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_892 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-tilde.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 20)) ;
  nt_factor_5F_ggs_33__ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_tildeExpressionAST::constructor_new (var_operatorLocation_892, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-tilde.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i32_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 20)) ;
  nt_factor_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i32_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 20)) ;
  nt_factor_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i33_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_890 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-bang.galgas", 19)) ;
  nt_primary_5F_ggs_33__ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-bang.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_bang COMMA_SOURCE_FILE ("expression-bang.galgas", 23)) ;
  outArgument_outExpression = GALGAS_bangExpressionAST::constructor_new (var_operatorLocation_890, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-bang.galgas", 24)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i33_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_primary_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-bang.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_bang COMMA_SOURCE_FILE ("expression-bang.galgas", 23)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i33_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_primary_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-bang.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_bang COMMA_SOURCE_FILE ("expression-bang.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i34_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_905 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 20)) ;
  nt_factor_5F_ggs_33__ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryWrappingMinusExpressionAST::constructor_new (var_operatorLocation_905, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i34_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 20)) ;
  nt_factor_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i34_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 20)) ;
  nt_factor_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_or_5F_ggs_33__i35_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_and_5F_ggs_33__ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_15 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_2343 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 55)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 56)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2397 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2458 ;
      nt_expression_5F_and_5F_ggs_33__ (var_rightOperand_2458, inCompiler) ;
      outArgument_outExpression = GALGAS_orExpressionAST::constructor_new (var_operatorLocation_2343, var_leftOperand_2397, var_rightOperand_2458  COMMA_SOURCE_FILE ("expression-or.galgas", 59)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_2581 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 61)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 62)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2636 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2697 ;
      nt_expression_5F_and_5F_ggs_33__ (var_rightOperand_2697, inCompiler) ;
      outArgument_outExpression = GALGAS_orShortExpressionAST::constructor_new (var_operatorLocation_2581, var_leftOperand_2636, var_rightOperand_2697  COMMA_SOURCE_FILE ("expression-or.galgas", 65)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_2825 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 67)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 68)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2879 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2940 ;
      nt_expression_5F_and_5F_ggs_33__ (var_rightOperand_2940, inCompiler) ;
      outArgument_outExpression = GALGAS_xorExpressionAST::constructor_new (var_operatorLocation_2825, var_leftOperand_2879, var_rightOperand_2940  COMMA_SOURCE_FILE ("expression-or.galgas", 71)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_3064 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 73)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 74)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3120 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3181 ;
      nt_expression_5F_and_5F_ggs_33__ (var_rightOperand_3181, inCompiler) ;
      outArgument_outExpression = GALGAS_closedSliceExpressionAST::constructor_new (var_operatorLocation_3064, var_leftOperand_3120, var_rightOperand_3181  COMMA_SOURCE_FILE ("expression-or.galgas", 77)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_3313 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 79)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 80)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3369 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3430 ;
      nt_expression_5F_and_5F_ggs_33__ (var_rightOperand_3430, inCompiler) ;
      outArgument_outExpression = GALGAS_openedSliceExpressionAST::constructor_new (var_operatorLocation_3313, var_leftOperand_3369, var_rightOperand_3430  COMMA_SOURCE_FILE ("expression-or.galgas", 83)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_or_5F_ggs_33__i35_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_5F_and_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 56)) ;
      nt_expression_5F_and_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 62)) ;
      nt_expression_5F_and_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 68)) ;
      nt_expression_5F_and_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 74)) ;
      nt_expression_5F_and_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 80)) ;
      nt_expression_5F_and_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_or_5F_ggs_33__i35_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_5F_and_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 56)) ;
      nt_expression_5F_and_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 62)) ;
      nt_expression_5F_and_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 68)) ;
      nt_expression_5F_and_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 74)) ;
      nt_expression_5F_and_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 80)) ;
      nt_expression_5F_and_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_and_5F_ggs_33__i36_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                            C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_factor_5F_ggs_33__ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_1349 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 31)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 32)) ;
      GALGAS_semanticExpressionAST var_leftOperand_1403 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_1488 ;
      nt_relation_5F_factor_5F_ggs_33__ (var_rightOperand_1488, inCompiler) ;
      outArgument_outExpression = GALGAS_andExpressionAST::constructor_new (var_operatorLocation_1349, var_leftOperand_1403, var_rightOperand_1488  COMMA_SOURCE_FILE ("expression-and.galgas", 35)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_1612 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 37)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 38)) ;
      GALGAS_semanticExpressionAST var_leftOperand_1667 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_1752 ;
      nt_relation_5F_factor_5F_ggs_33__ (var_rightOperand_1752, inCompiler) ;
      outArgument_outExpression = GALGAS_andShortExpressionAST::constructor_new (var_operatorLocation_1612, var_leftOperand_1667, var_rightOperand_1752  COMMA_SOURCE_FILE ("expression-and.galgas", 41)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_and_5F_ggs_33__i36_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_relation_5F_factor_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 32)) ;
      nt_relation_5F_factor_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 38)) ;
      nt_relation_5F_factor_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_and_5F_ggs_33__i36_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_relation_5F_factor_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 32)) ;
      nt_relation_5F_factor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 38)) ;
      nt_relation_5F_factor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_5F_ggs_33__i0_ (GALGAS_formalParameterListAST & outArgument_outFormalParameterList,
                                                                                                                                   C_Lexique_galgasScanner * inCompiler) {
  outArgument_outFormalParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalParameterList = GALGAS_formalParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 27)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_ParameterArgumentSyntax_0 (inCompiler) == 2) {
      GALGAS_lstring var_selector_1711 ;
      GALGAS_formalArgumentPassingModeAST var_mFormalParameterPassingMode_1760 ;
      switch (select_galgas_33_ParameterArgumentSyntax_1 (inCompiler)) {
      case 1: {
        var_selector_1711 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 33)) ;
        var_mFormalParameterPassingMode_1760 = GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 34)) ;
      } break ;
      case 2: {
        var_selector_1711 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 36)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 37)) ;
        var_mFormalParameterPassingMode_1760 = GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 38)) ;
      } break ;
      case 3: {
        var_selector_1711 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 40)) ;
        var_mFormalParameterPassingMode_1760 = GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 41)) ;
      } break ;
      case 4: {
        var_selector_1711 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 43)) ;
        var_mFormalParameterPassingMode_1760 = GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 44)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_formalParameterTypeName_2301 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 46)) ;
      GALGAS_bool var_mIsUnused_2341 ;
      switch (select_galgas_33_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
        var_mIsUnused_2341 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 51)) ;
        var_mIsUnused_2341 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterName_2484 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 54)) ;
      outArgument_outFormalParameterList.addAssign_operation (var_selector_1711, var_mFormalParameterPassingMode_1760, var_formalParameterTypeName_2301, var_mFormalParameterName_2484, var_mIsUnused_2341  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 55)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_5F_ggs_33__i0_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_ParameterArgumentSyntax_0 (inCompiler) == 2) {
      switch (select_galgas_33_ParameterArgumentSyntax_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 33)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 36)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 37)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 40)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 43)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 46)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 51)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 54)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_parameter_5F_list_5F_ggs_33__i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_ParameterArgumentSyntax_0 (inCompiler) == 2) {
      switch (select_galgas_33_ParameterArgumentSyntax_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 33)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 36)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 37)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 40)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 43)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 46)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 51)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 54)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_ggs_33__i1_ (GALGAS_actualParameterListAST & outArgument_outActualParameterList,
                                                                                                                                   C_Lexique_galgasScanner * inCompiler) {
  outArgument_outActualParameterList.drop () ; // Release 'out' argument
  outArgument_outActualParameterList = GALGAS_actualParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 69)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_3 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_3133 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 72)) ;
      GALGAS_semanticExpressionAST var_e_3194 ;
      nt_expression_5F_ggs_33__ (var_e_3194, inCompiler) ;
      GALGAS_location var_endOfExpressionLocation_3216 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 74)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputActualParameterAST::constructor_new (var_selector_3133, var_e_3194, var_endOfExpressionLocation_3216  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 75))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 75)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector_3417 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 81)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 83)) ;
        GALGAS_lstringlist var_poisonedVarNameList_3489 ;
        nt_poisoned_5F_var_5F_list_5F_ggs_33__ (var_poisonedVarNameList_3489, inCompiler) ;
        outArgument_outActualParameterList.addAssign_operation (GALGAS_inputSingleJokerActualParameterAST::constructor_new (var_selector_3417, var_poisonedVarNameList_3489  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 85))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 85)) ;
      } break ;
      case 2: {
        GALGAS_lbigint var_count_3652 = inCompiler->synthetizedAttribute_bigintValue () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 87)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 88)) ;
        GALGAS_uint var_n_3682 = var_count_3652.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 89)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsNotEqual, var_selector_3417.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("\?")) ;
            inCompiler->emitSemanticError (var_selector_3417.readProperty_location (), GALGAS_string ("the selector should be '\?'"), fixItArray2  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 91)) ;
          }
        }
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, var_n_3682.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (var_count_3652.readProperty_location (), GALGAS_string ("the count value should be > 0"), fixItArray4  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 94)) ;
          }
        }
        if (kBoolFalse == test_3) {
          if (var_n_3682.isValid ()) {
            uint32_t variant_3937 = var_n_3682.uintValue () ;
            bool loop_3937 = true ;
            while (loop_3937) {
              loop_3937 = GALGAS_bool (kIsStrictSup, var_n_3682.objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
              if (loop_3937) {
                loop_3937 = GALGAS_bool (kIsStrictSup, var_n_3682.objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
              }
              if (loop_3937 && (0 == variant_3937)) {
                loop_3937 = false ;
                inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 96)) ;
              }
              if (loop_3937) {
                variant_3937 -- ;
                outArgument_outActualParameterList.addAssign_operation (GALGAS_inputJokerActualParameterAST::constructor_new (var_selector_3417.readProperty_location (), var_n_3682  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 98))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 98)) ;
                var_n_3682.minusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 99)) ;
              }
            }
          }
        }
      } break ;
      default:
        break ;
      }
    } break ;
    case 4: {
      GALGAS_lstring var_selector_4149 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 104)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 105)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputSelfParameterAST::constructor_new (var_selector_4149  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 106))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 106)) ;
    } break ;
    case 5: {
      GALGAS_lstring var_selector_4275 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 108)) ;
      GALGAS_lstring var_outputInputActualParameterName_4308 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 109)) ;
      GALGAS_lstringlist var_structAttributeList_4349 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 110)) ;
      bool repeatFlag_5 = true ;
      while (repeatFlag_5) {
        if (select_galgas_33_ParameterArgumentSyntax_5 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 113)) ;
          GALGAS_lstring var_structAttributeName_4450 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 114)) ;
          var_structAttributeList_4349.addAssign_operation (var_structAttributeName_4450  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 115)) ;
        }else{
          repeatFlag_5 = false ;
        }
      }
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputActualParameterAST::constructor_new (var_selector_4275, var_outputInputActualParameterName_4308, var_structAttributeList_4349  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 117))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 117)) ;
    } break ;
    case 6: {
      GALGAS_lstring var_selector_4724 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 123)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 124)) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputSingleJokerParameterAST::constructor_new (var_selector_4724  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 125))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 125)) ;
    } break ;
    case 7: {
      GALGAS_lstring var_selector_4854 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 127)) ;
      GALGAS_lbigint var_count_4887 = inCompiler->synthetizedAttribute_bigintValue () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 128)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 129)) ;
      GALGAS_uint var_n_4913 = var_count_4887.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 130)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, var_selector_4854.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("!\?")) ;
          inCompiler->emitSemanticError (var_selector_4854.readProperty_location (), GALGAS_string ("the selector should be '!\?'"), fixItArray7  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 132)) ;
        }
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (kIsEqual, var_n_4913.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_count_4887.readProperty_location (), GALGAS_string ("the count value should be > 0"), fixItArray9  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 135)) ;
        }
      }
      if (kBoolFalse == test_8) {
        if (var_n_4913.isValid ()) {
          uint32_t variant_5157 = var_n_4913.uintValue () ;
          bool loop_5157 = true ;
          while (loop_5157) {
            loop_5157 = GALGAS_bool (kIsStrictSup, var_n_4913.objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
            if (loop_5157) {
              loop_5157 = GALGAS_bool (kIsStrictSup, var_n_4913.objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
            }
            if (loop_5157 && (0 == variant_5157)) {
              loop_5157 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 137)) ;
            }
            if (loop_5157) {
              variant_5157 -- ;
              outArgument_outActualParameterList.addAssign_operation (GALGAS_outputInputJokerParameterAST::constructor_new (var_selector_4854.readProperty_location (), var_n_4913  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 139))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 139)) ;
              var_n_4913.minusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 140)) ;
            }
          }
        }
      }
    } break ;
    case 8: {
      GALGAS_lstring var_selector_5385 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 144)) ;
      GALGAS_lstring var_inputActualParameterName_5418 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 145)) ;
      GALGAS_lstringlist var_poisonedVarNameList_5479 ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__ (var_poisonedVarNameList_5479, inCompiler) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualExistingVariableParameterAST::constructor_new (var_selector_5385, var_inputActualParameterName_5418, var_poisonedVarNameList_5479  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 147))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 147)) ;
    } break ;
    case 9: {
      GALGAS_lstring var_selector_5726 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 153)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 154)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 155)) ;
      GALGAS_lstring var_inputActualParameterName_5782 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 156)) ;
      GALGAS_lstringlist var_poisonedVarNameList_5843 ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__ (var_poisonedVarNameList_5843, inCompiler) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualSelfPropertyParameterAST::constructor_new (var_selector_5726, var_inputActualParameterName_5782, var_poisonedVarNameList_5843  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 158))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 158)) ;
    } break ;
    case 10: {
      GALGAS_lstring var_selector_6077 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 164)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 165)) ;
      GALGAS_lstringlist var_poisonedVarNameList_6135 ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__ (var_poisonedVarNameList_6135, inCompiler) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualSelfParameterAST::constructor_new (var_selector_6077, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 169)), var_poisonedVarNameList_6135  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 167))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 167)) ;
    } break ;
    case 11: {
      GALGAS_lstring var_selector_6351 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 173)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 174)) ;
      GALGAS_lstring var_declarationTypeName_6391 ;
      switch (select_galgas_33_ParameterArgumentSyntax_6 (inCompiler)) {
      case 1: {
        var_declarationTypeName_6391 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 177)) ;
      } break ;
      case 2: {
        var_declarationTypeName_6391 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 179)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_inputActualParameterName_6547 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 181)) ;
      GALGAS_lstringlist var_poisonedVarNameList_6608 ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__ (var_poisonedVarNameList_6608, inCompiler) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewVariableParameterAST::constructor_new (var_selector_6351, var_declarationTypeName_6391, var_inputActualParameterName_6547, var_poisonedVarNameList_6608  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 183))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 183)) ;
    } break ;
    case 12: {
      GALGAS_lstring var_selector_6894 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 190)) ;
      GALGAS_lstring var_declarationTypeName_6931 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 191)) ;
      GALGAS_lstring var_inputActualParameterName_6975 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 192)) ;
      GALGAS_lstringlist var_poisonedVarNameList_7036 ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__ (var_poisonedVarNameList_7036, inCompiler) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewVariableParameterAST::constructor_new (var_selector_6894, var_declarationTypeName_6931, var_inputActualParameterName_6975, var_poisonedVarNameList_7036  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 194))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 194)) ;
    } break ;
    case 13: {
      GALGAS_lstring var_selector_7306 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 201)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 202)) ;
      GALGAS_lstring var_declarationTypeName_7346 ;
      switch (select_galgas_33_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
        var_declarationTypeName_7346 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 205)) ;
      } break ;
      case 2: {
        var_declarationTypeName_7346 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 207)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_bool var_markedAsUnused_7494 ;
      switch (select_galgas_33_ParameterArgumentSyntax_8 (inCompiler)) {
      case 1: {
        var_markedAsUnused_7494 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 213)) ;
        var_markedAsUnused_7494 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_inputActualParameterName_7643 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 216)) ;
      GALGAS_lstringlist var_poisonedVarNameList_7704 ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__ (var_poisonedVarNameList_7704, inCompiler) ;
      outArgument_outActualParameterList.addAssign_operation (GALGAS_inputActualNewConstantParameterAST::constructor_new (var_selector_7306, var_declarationTypeName_7346, var_inputActualParameterName_7643, var_markedAsUnused_7494, var_poisonedVarNameList_7704  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 218))  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 218)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_ggs_33__i1_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 72)) ;
      nt_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 81)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 83)) ;
        nt_poisoned_5F_var_5F_list_5F_ggs_33__parse (inCompiler) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 87)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 88)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 104)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 105)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 108)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 109)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        if (select_galgas_33_ParameterArgumentSyntax_5 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 113)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 114)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 123)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 124)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 127)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 128)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 129)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 144)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 145)) ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 153)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 154)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 155)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 156)) ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 164)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 165)) ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 173)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 174)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 179)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 181)) ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 190)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 191)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 192)) ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 201)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 202)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 207)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_ParameterArgumentSyntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 213)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 216)) ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_ggs_33__i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ParameterArgumentSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 72)) ;
      nt_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 81)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_4 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 83)) ;
        nt_poisoned_5F_var_5F_list_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 87)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 88)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 104)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 105)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 108)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 109)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        if (select_galgas_33_ParameterArgumentSyntax_5 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 113)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 114)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 123)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 124)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 127)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 128)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 129)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 144)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 145)) ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 153)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 154)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 155)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 156)) ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 164)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 165)) ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 173)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 174)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 179)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 181)) ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 190)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 191)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 192)) ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 201)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 202)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_7 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 207)) ;
      } break ;
      default:
        break ;
      }
      switch (select_galgas_33_ParameterArgumentSyntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 213)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 216)) ;
      nt_poisoned_5F_var_5F_list_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__i2_ (GALGAS_formalInputParameterListAST & outArgument_outFormalInputParameterList,
                                                                                                                                            C_Lexique_galgasScanner * inCompiler) {
  outArgument_outFormalInputParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalInputParameterList = GALGAS_formalInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 233)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_ParameterArgumentSyntax_9 (inCompiler) == 2) {
      GALGAS_bool var_isConstant_8427 ;
      GALGAS_lstring var_selector_8453 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 237)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_10 (inCompiler)) {
      case 1: {
        var_isConstant_8427 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 241)) ;
        var_isConstant_8427 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterTypeName_8589 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 244)) ;
      GALGAS_bool var_mIsUnused_8630 ;
      switch (select_galgas_33_ParameterArgumentSyntax_11 (inCompiler)) {
      case 1: {
        var_mIsUnused_8630 = GALGAS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 249)) ;
        var_mIsUnused_8630 = GALGAS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_mFormalParameterName_8773 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 252)) ;
      outArgument_outFormalInputParameterList.addAssign_operation (var_selector_8453, var_mFormalParameterTypeName_8589, var_mFormalParameterName_8773, var_mIsUnused_8630, var_isConstant_8427  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 253)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__i2_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_ParameterArgumentSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 237)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_10 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 241)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 244)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_11 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 249)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 252)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_ParameterArgumentSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 237)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_10 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 241)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 244)) ;
      switch (select_galgas_33_ParameterArgumentSyntax_11 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 249)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 252)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i3_ (GALGAS_lstringlist & outArgument_outPoisonedVarNameList,
                                                                                                                               C_Lexique_galgasScanner * /* inCompiler */) {
  outArgument_outPoisonedVarNameList.drop () ; // Release 'out' argument
  outArgument_outPoisonedVarNameList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 265)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i3_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i3_indexing (C_Lexique_galgasScanner * /* inCompiler */) {
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i4_ (GALGAS_lstringlist & outArgument_outPoisonedVarNameList,
                                                                                                                               C_Lexique_galgasScanner * inCompiler) {
  outArgument_outPoisonedVarNameList.drop () ; // Release 'out' argument
  outArgument_outPoisonedVarNameList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 271)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_spoil COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 272)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_varName_9470 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 274)) ;
    outArgument_outPoisonedVarNameList.addAssign_operation (var_varName_9470  COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 275)) ;
    if (select_galgas_33_ParameterArgumentSyntax_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 277)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i4_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_spoil COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 272)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 274)) ;
    if (select_galgas_33_ParameterArgumentSyntax_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 277)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ParameterArgumentSyntax::rule_galgas_33_ParameterArgumentSyntax_poisoned_5F_var_5F_list_5F_ggs_33__i4_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_spoil COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 272)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 274)) ;
    if (select_galgas_33_ParameterArgumentSyntax_12 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("galgasParameterArgumentSyntax.galgas", 277)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_5F_ggs_33__i0_ (GALGAS_semanticInstructionListAST & outArgument_outInstructionsList,
                                                                                                                             C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstructionsList.drop () ; // Release 'out' argument
  outArgument_outInstructionsList = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 35)) ;
  switch (select_galgas_33_InstructionsSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_semanticInstructionAST var_instruction_2217 ;
      nt_semantic_5F_instruction_5F_ggs_33__ (var_instruction_2217, inCompiler) ;
      outArgument_outInstructionsList.addAssign_operation (var_instruction_2217  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 40)) ;
      if (select_galgas_33_InstructionsSyntax_1 (inCompiler) == 2) {
        switch (select_galgas_33_InstructionsSyntax_2 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 43)) ;
        } break ;
        case 2: {
          GALGAS_string var_separator_2339 = GALGAS_string::constructor_separatorString (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 45)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = var_separator_2339.getter_containsCharacter (GALGAS_char (TO_UNICODE (10)) COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 46)).operator_not (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 46)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (GALGAS_location::constructor_separator (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 47)), GALGAS_string ("instructions on same line should be separated by ';'"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 47)) ;
            }
          }
        } break ;
        default:
          break ;
        }
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_5F_ggs_33__i0_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_semantic_5F_instruction_5F_ggs_33__parse (inCompiler) ;
      if (select_galgas_33_InstructionsSyntax_1 (inCompiler) == 2) {
        switch (select_galgas_33_InstructionsSyntax_2 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 43)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_list_5F_ggs_33__i0_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_semantic_5F_instruction_5F_ggs_33__indexing (inCompiler) ;
      if (select_galgas_33_InstructionsSyntax_1 (inCompiler) == 2) {
        switch (select_galgas_33_InstructionsSyntax_2 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 43)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i1_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 60)) ;
  GALGAS_bool var_isUsefull_2971 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 64)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isUsefull_2971.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 66)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 66)) ;
        }
      }
      var_isUsefull_2971 = GALGAS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lstring var_mActionName_3185 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 70)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_3286 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (var_mFormalParameterList_3286, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_externProcedureDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (false), var_mActionName_3185, var_mFormalParameterList_3286, var_isUsefull_2971  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 72))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i1_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 60)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 64)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 70)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i1_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 60)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 64)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 70)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i2_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 86)) ;
  GALGAS_bool var_isUsefull_3917 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 90)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isUsefull_3917.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 92)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 92)) ;
        }
      }
      var_isUsefull_3917 = GALGAS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lstring var_mRoutineName_4122 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 96)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_4224 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (var_mFormalParameterList_4224, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 98)) ;
  GALGAS_semanticInstructionListAST var_mRoutineInstructionList_4323 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_mRoutineInstructionList_4323, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 100)) ;
  GALGAS_location var_endOfInstructionList_4363 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 101)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_procDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (false), var_mRoutineName_4122, var_mFormalParameterList_4224, var_isUsefull_3917, var_mRoutineInstructionList_4323, var_endOfInstructionList_4363  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 102))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 102)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i2_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 86)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 90)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 96)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 98)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 100)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i2_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 86)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 90)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 96)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 98)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 100)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i3_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 115)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 116)) ;
  GALGAS_bool var_isUsefull_4897 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 120)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isUsefull_4897.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 122)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 122)) ;
        }
      }
      var_isUsefull_4897 = GALGAS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lstring var_mRoutineName_5102 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 126)) ;
  GALGAS_formalParameterListAST var_mFormalParameterList_5204 ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__ (var_mFormalParameterList_5204, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 128)) ;
  GALGAS_semanticInstructionListAST var_mRoutineInstructionList_5303 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_mRoutineInstructionList_5303, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 130)) ;
  GALGAS_location var_endOfInstructionList_5343 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 131)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_procDeclarationAST::constructor_new (GALGAS_bool (false), GALGAS_bool (true), var_mRoutineName_5102, var_mFormalParameterList_5204, var_isUsefull_4897, var_mRoutineInstructionList_5303, var_endOfInstructionList_5343  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 132))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 132)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i3_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 115)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 116)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 120)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 126)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 128)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 130)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i3_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 115)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_proc COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 116)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 120)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 126)) ;
  nt_formal_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 128)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 130)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i4_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 148)) ;
  GALGAS_bool var_isOnce_6036 = GALGAS_bool (false) ;
  GALGAS_bool var_isUsefull_6059 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 153)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isOnce_6036.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 155)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 155)) ;
        }
      }
      var_isOnce_6036 = GALGAS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 159)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_isUsefull_6059.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          fixItArray4.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 161)), GALGAS_string ("duplicate attribute"), fixItArray4  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 161)) ;
        }
      }
      var_isUsefull_6059 = GALGAS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_functionName_6401 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 165)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_6515 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (var_formalInputParameterList_6515, inCompiler) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_isOnce_6036.boolEnum () ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsStrictSup, var_formalInputParameterList_6515.getter_count (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 167)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (var_functionName_6401.readProperty_location (), GALGAS_string ("an 'once' function should has no argument"), fixItArray6  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 168)) ;
      }
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 170)) ;
  GALGAS_lstring var_resultTypeName_6703 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 171)) ;
  GALGAS_lstring var_resultVariableName_6735 ;
  switch (select_galgas_33_InstructionsSyntax_7 (inCompiler)) {
  case 1: {
    var_resultVariableName_6735 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 174)) ;
  } break ;
  case 2: {
    var_resultVariableName_6735 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 176))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 176)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 178)) ;
  GALGAS_semanticInstructionListAST var_functionInstructionList_6948 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_functionInstructionList_6948, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 180)) ;
  GALGAS_location var_endOfFunctionInstructionList_6988 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 181)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_isOnce_6036.boolEnum () ;
    if (kBoolTrue == test_7) {
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_onceFunctionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName_6401, var_resultTypeName_6703, var_resultVariableName_6735, var_functionInstructionList_6948, var_endOfFunctionInstructionList_6988, GALGAS_bool (false), var_isUsefull_6059  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 183))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 183)) ;
    }
  }
  if (kBoolFalse == test_7) {
    ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_functionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName_6401, var_formalInputParameterList_6515, var_resultTypeName_6703, var_isUsefull_6059, var_resultVariableName_6735, var_functionInstructionList_6948, var_endOfFunctionInstructionList_6988, GALGAS_bool (false)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 194))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 194)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i4_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 148)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 153)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 159)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 165)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 170)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 171)) ;
  switch (select_galgas_33_InstructionsSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 174)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 178)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 180)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i4_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 148)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_6 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 153)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 159)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 165)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 170)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 171)) ;
  switch (select_galgas_33_InstructionsSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 174)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 178)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 180)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i5_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 211)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 212)) ;
  GALGAS_bool var_isOnce_7956 = GALGAS_bool (false) ;
  GALGAS_bool var_isUsefull_7979 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 217)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isOnce_7956.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 219)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 219)) ;
        }
      }
      var_isOnce_7956 = GALGAS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 223)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_isUsefull_7979.boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          fixItArray4.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 225)), GALGAS_string ("duplicate attribute"), fixItArray4  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 225)) ;
        }
      }
      var_isUsefull_7979 = GALGAS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_functionName_8321 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 229)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_8435 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (var_formalInputParameterList_8435, inCompiler) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_isOnce_7956.boolEnum () ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsStrictSup, var_formalInputParameterList_8435.getter_count (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 231)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (var_functionName_8321.readProperty_location (), GALGAS_string ("an 'once' function should has no argument"), fixItArray6  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 232)) ;
      }
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 234)) ;
  GALGAS_lstring var_resultTypeName_8623 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 235)) ;
  GALGAS_lstring var_resultVariableName_8655 ;
  switch (select_galgas_33_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
    var_resultVariableName_8655 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 238)) ;
  } break ;
  case 2: {
    var_resultVariableName_8655 = GALGAS_lstring::constructor_new (GALGAS_string ("result"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 240))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 240)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 242)) ;
  GALGAS_semanticInstructionListAST var_functionInstructionList_8868 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_functionInstructionList_8868, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 244)) ;
  GALGAS_location var_endOfFunctionInstructionList_8908 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 245)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_isOnce_7956.boolEnum () ;
    if (kBoolTrue == test_7) {
      ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_onceFunctionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName_8321, var_resultTypeName_8623, var_resultVariableName_8655, var_functionInstructionList_8868, var_endOfFunctionInstructionList_8908, GALGAS_bool (true), var_isUsefull_7979  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 247))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 247)) ;
    }
  }
  if (kBoolFalse == test_7) {
    ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_functionDeclarationAST::constructor_new (GALGAS_bool (false), var_functionName_8321, var_formalInputParameterList_8435, var_resultTypeName_8623, var_isUsefull_7979, var_resultVariableName_8655, var_functionInstructionList_8868, var_endOfFunctionInstructionList_8908, GALGAS_bool (true)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 258))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 258)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i5_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 211)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 212)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 217)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 223)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 229)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 234)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 235)) ;
  switch (select_galgas_33_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 238)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 242)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 244)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i5_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 211)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 212)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_once COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 217)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 223)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 229)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 234)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 235)) ;
  switch (select_galgas_33_InstructionsSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 238)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 242)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 244)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i6_ (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 277)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 278)) ;
  GALGAS_bool var_isUsefull_10108 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_10 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 282)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_isUsefull_10108.boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 284)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 284)) ;
        }
      }
      var_isUsefull_10108 = GALGAS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lstring var_mActionName_10313 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 288)) ;
  GALGAS_formalInputParameterListAST var_formalInputParameterList_10426 ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__ (var_formalInputParameterList_10426, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 290)) ;
  GALGAS_lstring var_resultTypeName_10477 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 291)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssign_operation (GALGAS_externFunctionDeclarationAST::constructor_new (GALGAS_bool (false), var_mActionName_10313, var_formalInputParameterList_10426, var_resultTypeName_10477, var_isUsefull_10108  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 292))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 292)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i6_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 277)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 278)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_10 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 282)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 288)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 290)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 291)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_declaration_5F_ggs_33__i6_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 277)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 278)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_10 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 282)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 288)) ;
  nt_formal_5F_input_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 290)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 291)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i7_ (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument_result,
                                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_result.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_11346 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 310)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_11346.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("\?")) ;
      inCompiler->emitSemanticError (var_selector_11346.readProperty_location (), GALGAS_string ("the selector should be '\?'"), fixItArray1  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 312)) ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 315)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 316))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 316)) ;
  } break ;
  case 2: {
    GALGAS_lstring var_actualParameterTypeName_11613 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 318)) ;
    GALGAS_lstring var_actualParameterName_11661 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 319)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::constructor_new (var_actualParameterTypeName_11613, var_actualParameterName_11661  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 320)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 322)) ;
    GALGAS_lstring var_actualParameterTypeName_11850 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 323)) ;
    GALGAS_lstring var_actualParameterName_11898 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 324)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::constructor_new (var_actualParameterTypeName_11850, var_actualParameterName_11898  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 325)) ;
  } break ;
  case 4: {
    GALGAS_lstring var_actualParameterName_12082 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 327)) ;
    outArgument_result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar::constructor_new (var_actualParameterName_12082  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 328)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i7_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 310)) ;
  switch (select_galgas_33_InstructionsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 315)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 318)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 319)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 322)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 323)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 324)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 327)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i7_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 310)) ;
  switch (select_galgas_33_InstructionsSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 315)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 318)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 319)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 322)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 323)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 324)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 327)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__i8_ (GALGAS_actualInputParameterListAST & outArgument_outActualInputParameterList,
                                                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outActualInputParameterList.drop () ; // Release 'out' argument
  outArgument_outActualInputParameterList = GALGAS_actualInputParameterListAST::constructor_emptyList (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 335)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_12 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_12539 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 338)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 339)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_12539, GALGAS_inputParameterAnonymousVariable::constructor_new (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 340))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 340)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_selector_12668 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 342)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 343)) ;
      GALGAS_lstring var_actualParameterTypeName_12708 ;
      switch (select_galgas_33_InstructionsSyntax_13 (inCompiler)) {
      case 1: {
        var_actualParameterTypeName_12708 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 346)) ;
      } break ;
      case 2: {
        var_actualParameterTypeName_12708 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 348)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_actualParameterName_12876 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 350)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_12668, GALGAS_inputParameterDeclaredVariable::constructor_new (var_actualParameterTypeName_12708, var_actualParameterName_12876  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 353))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 351)) ;
    } break ;
    case 4: {
      GALGAS_lstring var_selector_13069 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 355)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 356)) ;
      GALGAS_lstring var_actualParameterTypeName_13109 ;
      switch (select_galgas_33_InstructionsSyntax_14 (inCompiler)) {
      case 1: {
        var_actualParameterTypeName_13109 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas", 359)) ;
      } break ;
      case 2: {
        var_actualParameterTypeName_13109 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 361)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_actualParameterName_13277 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 363)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_13069, GALGAS_inputParameterDeclaredConstant::constructor_new (var_actualParameterTypeName_13109, var_actualParameterName_13277  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 366))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 364)) ;
    } break ;
    case 5: {
      GALGAS_lstring var_selector_13470 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 368)) ;
      GALGAS_lstring var_actualParameterName_13503 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 369)) ;
      outArgument_outActualInputParameterList.addAssign_operation (var_selector_13470, GALGAS_inputParameterVariable::constructor_new (var_actualParameterName_13503  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 370))  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 370)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__i8_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 338)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 339)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 342)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 343)) ;
      switch (select_galgas_33_InstructionsSyntax_13 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 348)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 350)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 355)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 356)) ;
      switch (select_galgas_33_InstructionsSyntax_14 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 361)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 363)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 368)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 369)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_5F_ggs_33__i8_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_12 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 338)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 339)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 342)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 343)) ;
      switch (select_galgas_33_InstructionsSyntax_13 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 348)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 350)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 355)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 356)) ;
      switch (select_galgas_33_InstructionsSyntax_14 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 361)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 363)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 368)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas", 369)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i9_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                     C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mTargetVariableName_1318 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 28)) ;
  GALGAS_lstring var_optionalProperty_1355 ;
  switch (select_galgas_33_InstructionsSyntax_15 (inCompiler)) {
  case 1: {
    var_optionalProperty_1355 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-assignment.galgas", 31)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 33)) ;
    GALGAS_lstring var_attributeName_1462 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 34)) ;
    var_optionalProperty_1355 = var_attributeName_1462 ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 37)) ;
  GALGAS_semanticExpressionAST var_mSourceExpression_1581 ;
  nt_expression_5F_ggs_33__ (var_mSourceExpression_1581, inCompiler) ;
  outArgument_outInstruction = GALGAS_assignmentInstructionAST::constructor_new (var_mTargetVariableName_1318.readProperty_location (), var_mTargetVariableName_1318, var_optionalProperty_1355, var_mSourceExpression_1581  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i9_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 28)) ;
  switch (select_galgas_33_InstructionsSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 33)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 34)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 37)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i9_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 28)) ;
  switch (select_galgas_33_InstructionsSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 33)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 34)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 37)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i10_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 51)) ;
  GALGAS_lstring var_mTargetVariableName_2016 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 52)) ;
  GALGAS_lstring var_optionalProperty_2053 ;
  switch (select_galgas_33_InstructionsSyntax_16 (inCompiler)) {
  case 1: {
    var_optionalProperty_2053 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-assignment.galgas", 55)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 57)) ;
    GALGAS_lstring var_attributeName_2160 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 58)) ;
    var_optionalProperty_2053 = var_attributeName_2160 ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 61)) ;
  GALGAS_semanticExpressionAST var_mSourceExpression_2279 ;
  nt_expression_5F_ggs_33__ (var_mSourceExpression_2279, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPropertyAssignmentInstructionAST::constructor_new (var_mTargetVariableName_2016.readProperty_location (), var_mTargetVariableName_2016, var_optionalProperty_2053, var_mSourceExpression_2279  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 63)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i10_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 52)) ;
  switch (select_galgas_33_InstructionsSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 57)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 58)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 61)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i10_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 51)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 52)) ;
  switch (select_galgas_33_InstructionsSyntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 57)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas", 58)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas", 61)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i11_ (GALGAS_castInstructionBranchListAST & ioArgument_ioCastInstructionBranchList,
                                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("instruction-cast.galgas", 31)) ;
  GALGAS_dynamicTypeComparisonKind var_kind_1543 ;
  switch (select_galgas_33_InstructionsSyntax_17 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 34)) ;
    var_kind_1543 = GALGAS_dynamicTypeComparisonKind::constructor_equal (SOURCE_FILE ("instruction-cast.galgas", 35)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 37)) ;
    var_kind_1543 = GALGAS_dynamicTypeComparisonKind::constructor_inherited (SOURCE_FILE ("instruction-cast.galgas", 38)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 40)) ;
    var_kind_1543 = GALGAS_dynamicTypeComparisonKind::constructor_strictlyInherited (SOURCE_FILE ("instruction-cast.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mTypeName_1706 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-cast.galgas", 43)) ;
  GALGAS_lstring var_mConstantVarName_1733 ;
  switch (select_galgas_33_InstructionsSyntax_18 (inCompiler)) {
  case 1: {
    var_mConstantVarName_1733 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-cast.galgas", 46)) ;
  } break ;
  case 2: {
    var_mConstantVarName_1733 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 48))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 48)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 50)) ;
  GALGAS_semanticInstructionListAST var_mCastBranchInstructionList_1985 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_mCastBranchInstructionList_1985, inCompiler) ;
  ioArgument_ioCastInstructionBranchList.addAssign_operation (var_mTypeName_1706, var_mConstantVarName_1733, var_mCastBranchInstructionList_1985, var_kind_1543, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 57))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i11_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("instruction-cast.galgas", 31)) ;
  switch (select_galgas_33_InstructionsSyntax_17 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 34)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 37)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 40)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-cast.galgas", 43)) ;
  switch (select_galgas_33_InstructionsSyntax_18 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-cast.galgas", 46)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 50)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_instruction_5F_branch_i11_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("instruction-cast.galgas", 31)) ;
  switch (select_galgas_33_InstructionsSyntax_17 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 34)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 37)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 40)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-cast.galgas", 43)) ;
  switch (select_galgas_33_InstructionsSyntax_18 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-cast.galgas", 46)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-cast.galgas", 50)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i12_ (GALGAS_semanticInstructionListAST & outArgument_outElseOrDefault,
                                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  outArgument_outElseOrDefault.drop () ; // Release 'out' argument
  switch (select_galgas_33_InstructionsSyntax_19 (inCompiler)) {
  case 1: {
    outArgument_outElseOrDefault = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 64)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-cast.galgas", 66)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (outArgument_outElseOrDefault, inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("instruction-cast.galgas", 69)) ;
    GALGAS_location var_instructionLocation_2515 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 70)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-cast.galgas", 71)) ;
    GALGAS_semanticExpressionAST var_errorLocationExpression_2618 ;
    nt_expression_5F_ggs_33__ (var_errorLocationExpression_2618, inCompiler) ;
    outArgument_outElseOrDefault = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 73)) ;
    GALGAS_stringlist temp_0 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 77)) ;
    temp_0.addAssign_operation (GALGAS_string ("cast instruction run-time error")  COMMA_SOURCE_FILE ("instruction-cast.galgas", 77)) ;
    outArgument_outElseOrDefault.addAssign_operation (GALGAS_errorInstructionAST::constructor_new (var_instructionLocation_2515, var_errorLocationExpression_2618, GALGAS_literalStringExpressionAST::constructor_new (var_instructionLocation_2515, temp_0  COMMA_SOURCE_FILE ("instruction-cast.galgas", 77)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 78)), GALGAS_fixitListAST::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 79))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 74))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 74)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i12_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-cast.galgas", 66)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("instruction-cast.galgas", 69)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-cast.galgas", 71)) ;
    nt_expression_5F_ggs_33__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_cast_5F_else_5F_or_5F_default_i12_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-cast.galgas", 66)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_default COMMA_SOURCE_FILE ("instruction-cast.galgas", 69)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-cast.galgas", 71)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i13_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_cast COMMA_SOURCE_FILE ("instruction-cast.galgas", 87)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOldStylePropertyDeclaration.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 89)), GALGAS_string ("This instruction is not handled in GALGAS 4"), fixItArray1  COMMA_SOURCE_FILE ("instruction-cast.galgas", 89)) ;
    }
  }
  GALGAS_location var_instructionLocation_3309 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 91)) ;
  GALGAS_semanticExpressionAST var_expression_3396 ;
  nt_expression_5F_ggs_33__ (var_expression_3396, inCompiler) ;
  GALGAS_castInstructionBranchListAST var_mCastInstructionBranchList_3415 = GALGAS_castInstructionBranchListAST::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 93)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    nt_cast_5F_instruction_5F_branch_ (var_mCastInstructionBranchList_3415, inCompiler) ;
    if (select_galgas_33_InstructionsSyntax_20 (inCompiler) == 2) {
    }else{
      repeatFlag_2 = false ;
    }
  }
  GALGAS_semanticInstructionListAST var_mElseOrDefault_3628 ;
  nt_cast_5F_else_5F_or_5F_default_ (var_mElseOrDefault_3628, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-cast.galgas", 99)) ;
  GALGAS_location var_endOfInstructionLocation_3661 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 100)) ;
  outArgument_outInstruction = GALGAS_structuredCastInstructionAST::constructor_new (var_instructionLocation_3309, var_expression_3396, var_mCastInstructionBranchList_3415, var_mElseOrDefault_3628, var_endOfInstructionLocation_3661  COMMA_SOURCE_FILE ("instruction-cast.galgas", 101)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i13_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_cast COMMA_SOURCE_FILE ("instruction-cast.galgas", 87)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_cast_5F_instruction_5F_branch_parse (inCompiler) ;
    if (select_galgas_33_InstructionsSyntax_20 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_cast_5F_else_5F_or_5F_default_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-cast.galgas", 99)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i13_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_cast COMMA_SOURCE_FILE ("instruction-cast.galgas", 87)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_cast_5F_instruction_5F_branch_indexing (inCompiler) ;
    if (select_galgas_33_InstructionsSyntax_20 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  nt_cast_5F_else_5F_or_5F_default_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-cast.galgas", 99)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i14_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (GALGAS_bool (false), outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i14_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i14_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i15_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 63)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (GALGAS_bool (true), outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i15_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 63)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i15_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 63)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i16_ (const GALGAS_bool constinArgument_inHasSelfPrefix,
                                                                                                                                              GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_receiverName_3180 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 72)) ;
  GALGAS_location var_instructionLocation_3201 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 73)) ;
  GALGAS_lstringlist var_mStructAttributeList_3259 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 74)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_21 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 77)) ;
      GALGAS_lstring var_attributeName_3340 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 78)) ;
      var_mStructAttributeList_3259.addAssign_operation (var_attributeName_3340  COMMA_SOURCE_FILE ("instruction-concat.galgas", 79)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_22 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 82)) ;
    GALGAS_semanticExpressionAST var_expression_3481 ;
    nt_expression_5F_ggs_33__ (var_expression_3481, inCompiler) ;
    outArgument_outInstruction = GALGAS_minusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_3201, constinArgument_inHasSelfPrefix, var_receiverName_3180, var_mStructAttributeList_3259, var_expression_3481  COMMA_SOURCE_FILE ("instruction-concat.galgas", 84)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 92)) ;
    switch (select_galgas_33_InstructionsSyntax_23 (inCompiler)) {
    case 1: {
      GALGAS_actualOutputExpressionList var_expressionList_3803 ;
      nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__ (var_expressionList_3803, inCompiler) ;
      outArgument_outInstruction = GALGAS_plusEqualElementsInstructionAST::constructor_new (var_instructionLocation_3201, constinArgument_inHasSelfPrefix, var_receiverName_3180, var_mStructAttributeList_3259, var_expressionList_3803  COMMA_SOURCE_FILE ("instruction-concat.galgas", 95)) ;
    } break ;
    case 2: {
      GALGAS_semanticExpressionAST var_expression_4095 ;
      nt_expression_5F_ggs_33__ (var_expression_4095, inCompiler) ;
      outArgument_outInstruction = GALGAS_plusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_3201, constinArgument_inHasSelfPrefix, var_receiverName_3180, var_mStructAttributeList_3259, var_expression_4095  COMMA_SOURCE_FILE ("instruction-concat.galgas", 104)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 113)) ;
    GALGAS_semanticExpressionAST var_expression_4398 ;
    nt_expression_5F_ggs_33__ (var_expression_4398, inCompiler) ;
    outArgument_outInstruction = GALGAS_mulEqualExpressionInstructionAST::constructor_new (var_instructionLocation_3201, constinArgument_inHasSelfPrefix, var_receiverName_3180, var_mStructAttributeList_3259, var_expression_4398  COMMA_SOURCE_FILE ("instruction-concat.galgas", 115)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 123)) ;
    GALGAS_semanticExpressionAST var_expression_4676 ;
    nt_expression_5F_ggs_33__ (var_expression_4676, inCompiler) ;
    outArgument_outInstruction = GALGAS_divEqualExpressionInstructionAST::constructor_new (var_instructionLocation_3201, constinArgument_inHasSelfPrefix, var_receiverName_3180, var_mStructAttributeList_3259, var_expression_4676  COMMA_SOURCE_FILE ("instruction-concat.galgas", 125)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i16_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 72)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_21 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 77)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 78)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_22 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 82)) ;
    nt_expression_5F_ggs_33__parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 92)) ;
    switch (select_galgas_33_InstructionsSyntax_23 (inCompiler)) {
    case 1: {
      nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 2: {
      nt_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 113)) ;
    nt_expression_5F_ggs_33__parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 123)) ;
    nt_expression_5F_ggs_33__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i16_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 72)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_21 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 77)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas", 78)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_22 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 82)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 92)) ;
    switch (select_galgas_33_InstructionsSyntax_23 (inCompiler)) {
    case 1: {
      nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 2: {
      nt_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 113)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 123)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__i17_ (GALGAS_actualOutputExpressionList & outArgument_outExpressionList,
                                                                                                                                           C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 138)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_selector_5170 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 140)) ;
    GALGAS_semanticExpressionAST var_expression_5231 ;
    nt_expression_5F_ggs_33__ (var_expression_5231, inCompiler) ;
    outArgument_outExpressionList.addAssign_operation (var_selector_5170, var_expression_5231, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 142))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 142)) ;
    if (select_galgas_33_InstructionsSyntax_24 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__i17_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 140)) ;
    nt_expression_5F_ggs_33__parse (inCompiler) ;
    if (select_galgas_33_InstructionsSyntax_24 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__i17_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-concat.galgas", 140)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_InstructionsSyntax_24 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i18_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas", 18)) ;
  GALGAS_location var_instructionLocation_864 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-drop.galgas", 19)) ;
  GALGAS_lstringlist var_dropList_922 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-drop.galgas", 20)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_variableName_971 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas", 22)) ;
    var_dropList_922.addAssign_operation (var_variableName_971  COMMA_SOURCE_FILE ("instruction-drop.galgas", 23)) ;
    if (select_galgas_33_InstructionsSyntax_25 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas", 25)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outInstruction = GALGAS_dropInstructionAST::constructor_new (var_instructionLocation_864, var_dropList_922  COMMA_SOURCE_FILE ("instruction-drop.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i18_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas", 18)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas", 22)) ;
    if (select_galgas_33_InstructionsSyntax_25 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas", 25)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i18_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas", 18)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas", 22)) ;
    if (select_galgas_33_InstructionsSyntax_25 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas", 25)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i19_ (GALGAS_fixitListAST & outArgument_outFixitListAST,
                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outFixitListAST.drop () ; // Release 'out' argument
  outArgument_outFixitListAST = GALGAS_fixitListAST::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 36)) ;
  switch (select_galgas_33_InstructionsSyntax_26 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas", 39)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("instruction-error.galgas", 40)) ;
    GALGAS_bool var_hasFixItRemove_1645 = GALGAS_bool (false) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_27 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_remove COMMA_SOURCE_FILE ("instruction-error.galgas", 44)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_hasFixItRemove_1645.boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 46)), GALGAS_string ("duplicated action"), fixItArray2  COMMA_SOURCE_FILE ("instruction-error.galgas", 46)) ;
          }
        }
        if (kBoolFalse == test_1) {
          outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItRemove (SOURCE_FILE ("instruction-error.galgas", 48))  COMMA_SOURCE_FILE ("instruction-error.galgas", 48)) ;
          var_hasFixItRemove_1645 = GALGAS_bool (true) ;
        }
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_replaceBy COMMA_SOURCE_FILE ("instruction-error.galgas", 52)) ;
        GALGAS_location var_errorLocation_1951 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 53)) ;
        GALGAS_semanticExpressionAST var_expression_2036 ;
        nt_expression_5F_ggs_33__ (var_expression_2036, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItReplace (var_expression_2036, var_errorLocation_1951  COMMA_SOURCE_FILE ("instruction-error.galgas", 55))  COMMA_SOURCE_FILE ("instruction-error.galgas", 55)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_insertAfter COMMA_SOURCE_FILE ("instruction-error.galgas", 57)) ;
        GALGAS_location var_errorLocation_2183 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 58)) ;
        GALGAS_semanticExpressionAST var_expression_2268 ;
        nt_expression_5F_ggs_33__ (var_expression_2268, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItInsertAfter (var_expression_2268, var_errorLocation_2183  COMMA_SOURCE_FILE ("instruction-error.galgas", 60))  COMMA_SOURCE_FILE ("instruction-error.galgas", 60)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_insertBefore COMMA_SOURCE_FILE ("instruction-error.galgas", 62)) ;
        GALGAS_location var_errorLocation_2420 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 63)) ;
        GALGAS_semanticExpressionAST var_expression_2505 ;
        nt_expression_5F_ggs_33__ (var_expression_2505, inCompiler) ;
        outArgument_outFixitListAST.addAssign_operation (GALGAS_fixitElementAST::constructor_fixItInsertBefore (var_expression_2505, var_errorLocation_2420  COMMA_SOURCE_FILE ("instruction-error.galgas", 65))  COMMA_SOURCE_FILE ("instruction-error.galgas", 65)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("instruction-error.galgas", 67)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i19_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_26 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas", 39)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("instruction-error.galgas", 40)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_27 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_remove COMMA_SOURCE_FILE ("instruction-error.galgas", 44)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_replaceBy COMMA_SOURCE_FILE ("instruction-error.galgas", 52)) ;
        nt_expression_5F_ggs_33__parse (inCompiler) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_insertAfter COMMA_SOURCE_FILE ("instruction-error.galgas", 57)) ;
        nt_expression_5F_ggs_33__parse (inCompiler) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_insertBefore COMMA_SOURCE_FILE ("instruction-error.galgas", 62)) ;
        nt_expression_5F_ggs_33__parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("instruction-error.galgas", 67)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_issue_5F_fixit_i19_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_26 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas", 39)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7B_ COMMA_SOURCE_FILE ("instruction-error.galgas", 40)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_InstructionsSyntax_27 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_remove COMMA_SOURCE_FILE ("instruction-error.galgas", 44)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_replaceBy COMMA_SOURCE_FILE ("instruction-error.galgas", 52)) ;
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_insertAfter COMMA_SOURCE_FILE ("instruction-error.galgas", 57)) ;
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_insertBefore COMMA_SOURCE_FILE ("instruction-error.galgas", 62)) ;
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__7D_ COMMA_SOURCE_FILE ("instruction-error.galgas", 67)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i20_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas", 74)) ;
  GALGAS_location var_instructionLocation_2862 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 75)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression_2949 ;
  nt_expression_5F_ggs_33__ (var_mReceiverExpression_2949, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 77)) ;
  GALGAS_semanticExpressionAST var_mErrorExpression_3027 ;
  nt_expression_5F_ggs_33__ (var_mErrorExpression_3027, inCompiler) ;
  GALGAS_lstringlist var_mBuiltVariableList_3052 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 79)) ;
  switch (select_galgas_33_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 82)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_builtVariableName_3155 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas", 84)) ;
      var_mBuiltVariableList_3052.addAssign_operation (var_builtVariableName_3155  COMMA_SOURCE_FILE ("instruction-error.galgas", 85)) ;
      if (select_galgas_33_InstructionsSyntax_29 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 87)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  GALGAS_fixitListAST var_fixitListAST_3300 ;
  nt_issue_5F_fixit_ (var_fixitListAST_3300, inCompiler) ;
  outArgument_outInstruction = GALGAS_errorInstructionAST::constructor_new (var_instructionLocation_2862, var_mReceiverExpression_2949, var_mErrorExpression_3027, var_mBuiltVariableList_3052, var_fixitListAST_3300  COMMA_SOURCE_FILE ("instruction-error.galgas", 91)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i20_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas", 74)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 77)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 82)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas", 84)) ;
      if (select_galgas_33_InstructionsSyntax_29 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 87)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  nt_issue_5F_fixit_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i20_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas", 74)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 77)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas", 82)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas", 84)) ;
      if (select_galgas_33_InstructionsSyntax_29 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas", 87)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  nt_issue_5F_fixit_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lbigint var_count_3616 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas", 76)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 77)) ;
  GALGAS_uint var_n_3638 = var_count_3616.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 78)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_n_3638.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_count_3616.readProperty_location (), GALGAS_string ("this value should be > 0"), fixItArray1  COMMA_SOURCE_FILE ("instruction-for.galgas", 80)) ;
    }
  }
  if (var_n_3638.isValid ()) {
    uint32_t variant_3739 = var_n_3638.uintValue () ;
    bool loop_3739 = true ;
    while (loop_3739) {
      loop_3739 = GALGAS_bool (kIsStrictSup, var_n_3638.objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
      if (loop_3739) {
        loop_3739 = GALGAS_bool (kIsStrictSup, var_n_3638.objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_3739 && (0 == variant_3739)) {
        loop_3739 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-for.galgas", 82)) ;
      }
      if (loop_3739) {
        variant_3739 -- ;
        ioArgument_ioElementList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 83)), GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 83))  COMMA_SOURCE_FILE ("instruction-for.galgas", 83)) ;
        var_n_3638.minusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 84)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas", 76)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 77)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i21_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas", 76)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 77)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i22_ (GALGAS_forInstructionEnumeratedObjectElementListAST & ioArgument_ioElementList,
                                                                                                                 C_Lexique_galgasScanner * inCompiler) {
  GALGAS_lstring var_typeName_4086 ;
  switch (select_galgas_33_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
    var_typeName_4086 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 93)) ;
  } break ;
  case 2: {
    var_typeName_4086 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 95)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 98)) ;
    ioArgument_ioElementList.addAssign_operation (var_typeName_4086, GALGAS_bool (true), GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 99))  COMMA_SOURCE_FILE ("instruction-for.galgas", 99)) ;
  } break ;
  case 2: {
    GALGAS_bool var_isUnused_4269 ;
    switch (select_galgas_33_InstructionsSyntax_32 (inCompiler)) {
    case 1: {
      var_isUnused_4269 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas", 105)) ;
      var_isUnused_4269 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_constantName_4409 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 108)) ;
    ioArgument_ioElementList.addAssign_operation (var_typeName_4086, var_isUnused_4269, var_constantName_4409  COMMA_SOURCE_FILE ("instruction-for.galgas", 109)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i22_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 95)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 98)) ;
  } break ;
  case 2: {
    switch (select_galgas_33_InstructionsSyntax_32 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas", 105)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 108)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_element_i22_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 95)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 98)) ;
  } break ;
  case 2: {
    switch (select_galgas_33_InstructionsSyntax_32 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("instruction-for.galgas", 105)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 108)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 116)) ;
  GALGAS_forInstructionEnumeratedObjectElementListAST var_elementList_4733 = GALGAS_forInstructionEnumeratedObjectElementListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 117)) ;
  GALGAS_bool var_endsWithEllipsis_4810 ;
  switch (select_galgas_33_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 120)) ;
    var_endsWithEllipsis_4810 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_for_5F_instruction_5F_element_ (var_elementList_4733, inCompiler) ;
      if (select_galgas_33_InstructionsSyntax_34 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_35 (inCompiler)) {
    case 1: {
      var_endsWithEllipsis_4810 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 130)) ;
      var_endsWithEllipsis_4810 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_location_5097 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 134)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 135)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 136)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_5190 ;
  nt_expression_5F_ggs_33__ (var_enumeratedExpression_5190, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionCstListInExpAST::constructor_new (var_elementList_4733, var_endsWithEllipsis_4810, var_enumeratedExpression_5190, var_location_5097  COMMA_SOURCE_FILE ("instruction-for.galgas", 138)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 116)) ;
  switch (select_galgas_33_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 120)) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_for_5F_instruction_5F_element_parse (inCompiler) ;
      if (select_galgas_33_InstructionsSyntax_34 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_35 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 130)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 135)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 136)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i23_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 116)) ;
  switch (select_galgas_33_InstructionsSyntax_33 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 120)) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_for_5F_instruction_5F_element_indexing (inCompiler) ;
      if (select_galgas_33_InstructionsSyntax_34 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    switch (select_galgas_33_InstructionsSyntax_35 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 130)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 135)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 136)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_5639 ;
  switch (select_galgas_33_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
    var_typeName_5639 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 151)) ;
  } break ;
  case 2: {
    var_typeName_5639 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 153)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_enumerationVariable_5745 ;
  switch (select_galgas_33_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 157)) ;
    var_enumerationVariable_5745 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 158)) ;
  } break ;
  case 2: {
    var_enumerationVariable_5745 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 160)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 162)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_5938 ;
  nt_expression_5F_ggs_33__ (var_enumeratedExpression_5938, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionVarInExpAST::constructor_new (var_typeName_5639, var_enumerationVariable_5745, var_enumeratedExpression_5938, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 168))  COMMA_SOURCE_FILE ("instruction-for.galgas", 164)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_parse (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 153)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 157)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 160)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 162)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i24_indexing (C_Lexique_galgasScanner * inCompiler) {
  switch (select_galgas_33_InstructionsSyntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-for.galgas", 153)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_37 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas", 157)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 160)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 162)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i25_ (GALGAS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 175)) ;
  GALGAS_location var_startLocation_6369 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 176)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 177)) ;
  GALGAS_lstring var_prefix_6425 ;
  switch (select_galgas_33_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
    var_prefix_6425 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas", 180)) ;
  } break ;
  case 2: {
    var_prefix_6425 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 182)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endLocation_6521 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 184)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 185)) ;
  GALGAS_semanticExpressionAST var_enumeratedExpression_6609 ;
  nt_expression_5F_ggs_33__ (var_enumeratedExpression_6609, inCompiler) ;
  outArgument_outEnumeratedObject = GALGAS_enumeratedCollectionImplicitVarInExpAST::constructor_new (var_prefix_6425, var_enumeratedExpression_6609, var_startLocation_6369.getter_union (var_endLocation_6521, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 190))  COMMA_SOURCE_FILE ("instruction-for.galgas", 187)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i25_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 175)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 177)) ;
  switch (select_galgas_33_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 182)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 185)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i25_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 175)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 177)) ;
  switch (select_galgas_33_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 182)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas", 185)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i26_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas", 197)) ;
  GALGAS_location var_instructionLocation_7019 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 198)) ;
  GALGAS_forInstructionEnumeratedObjectListAST var_mEnumeratedObjectList_7064 = GALGAS_forInstructionEnumeratedObjectListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 199)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_bool var_ascending_7157 ;
    switch (select_galgas_33_InstructionsSyntax_40 (inCompiler)) {
    case 1: {
      var_ascending_7157 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 205)) ;
      var_ascending_7157 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GALGAS_abstractEnumeratedCollectionAST var_enumeratedObject_7342 ;
    nt_for_5F_instruction_5F_enumerated_5F_object_ (var_enumeratedObject_7342, inCompiler) ;
    var_mEnumeratedObjectList_7064.addAssign_operation (var_ascending_7157, var_enumeratedObject_7342  COMMA_SOURCE_FILE ("instruction-for.galgas", 209)) ;
    if (select_galgas_33_InstructionsSyntax_39 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 211)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_semanticExpressionAST var_mWhileExpression_7478 ;
  switch (select_galgas_33_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
    var_mWhileExpression_7478 = GALGAS_trueExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 215))  COMMA_SOURCE_FILE ("instruction-for.galgas", 215)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas", 217)) ;
    nt_expression_5F_ggs_33__ (var_mWhileExpression_7478, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_while_5F_expression_7652 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 220)) ;
  GALGAS_semanticInstructionListAST var_mBeforeInstructionList_7728 ;
  switch (select_galgas_33_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
    var_mBeforeInstructionList_7728 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 223)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas", 225)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_mBeforeInstructionList_7728, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_before_5F_branch_7926 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 228)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas", 229)) ;
  GALGAS_lstring var_indexVariableName_7989 ;
  switch (select_galgas_33_InstructionsSyntax_43 (inCompiler)) {
  case 1: {
    var_indexVariableName_7989 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 232))  COMMA_SOURCE_FILE ("instruction-for.galgas", 232)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 234)) ;
    var_indexVariableName_7989 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 235)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 236)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_semanticInstructionListAST var_mDoInstructionList_8195 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_mDoInstructionList_8195, inCompiler) ;
  GALGAS_location var_endof_5F_do_5F_branch_8222 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 239)) ;
  GALGAS_semanticInstructionListAST var_mBetweenInstructionList_8291 ;
  switch (select_galgas_33_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
    var_mBetweenInstructionList_8291 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 242)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas", 244)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_mBetweenInstructionList_8291, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_between_5F_branch_8493 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 247)) ;
  GALGAS_semanticInstructionListAST var_mAfterInstructionList_8567 ;
  switch (select_galgas_33_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
    var_mAfterInstructionList_8567 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 250)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas", 252)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_mAfterInstructionList_8567, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endof_5F_after_5F_branch_8761 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 255)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas", 256)) ;
  GALGAS_location var_endof_5F_foreach_5F_instruction_8815 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 257)) ;
  outArgument_outInstruction = GALGAS_forInstructionAST::constructor_new (var_instructionLocation_7019, var_mEnumeratedObjectList_7064, var_indexVariableName_7989, var_mWhileExpression_7478, var_endof_5F_while_5F_expression_7652, var_mBeforeInstructionList_7728, var_endof_5F_before_5F_branch_7926, var_mBetweenInstructionList_8291, var_endof_5F_between_5F_branch_8493, var_mDoInstructionList_8195, var_endof_5F_do_5F_branch_8222, var_mAfterInstructionList_8567, var_endof_5F_after_5F_branch_8761, var_endof_5F_foreach_5F_instruction_8815  COMMA_SOURCE_FILE ("instruction-for.galgas", 258)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i26_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas", 197)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_40 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 205)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_parse (inCompiler) ;
    if (select_galgas_33_InstructionsSyntax_39 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 211)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas", 217)) ;
    nt_expression_5F_ggs_33__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas", 225)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas", 229)) ;
  switch (select_galgas_33_InstructionsSyntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 234)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 235)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 236)) ;
  } break ;
  default:
    break ;
  }
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas", 244)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas", 252)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas", 256)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i26_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas", 197)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_40 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas", 205)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_indexing (inCompiler) ;
    if (select_galgas_33_InstructionsSyntax_39 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas", 211)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas", 217)) ;
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas", 225)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas", 229)) ;
  switch (select_galgas_33_InstructionsSyntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas", 234)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas", 235)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas", 236)) ;
  } break ;
  default:
    break ;
  }
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas", 244)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas", 252)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas", 256)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i27_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 79)) ;
  GALGAS_location var_instructionLocation_3888 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 80)) ;
  GALGAS_lstring var_grammarComponentName_3956 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 81)) ;
  GALGAS_lstring var_labelName_4029 ;
  switch (select_galgas_33_InstructionsSyntax_46 (inCompiler)) {
  case 1: {
    var_labelName_4029 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 84))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 84)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 86)) ;
    var_labelName_4029 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 87)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 89)) ;
  GALGAS_actualParameterListAST var_actualParameterList_4232 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (var_actualParameterList_4232, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 91)) ;
  nt_grammar_5F_instruction_5F_core_ (var_instructionLocation_3888, var_actualParameterList_4232, var_grammarComponentName_3956, var_labelName_4029, outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i27_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 79)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 81)) ;
  switch (select_galgas_33_InstructionsSyntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 86)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 87)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 89)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 91)) ;
  nt_grammar_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i27_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 79)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 81)) ;
  switch (select_galgas_33_InstructionsSyntax_46 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 86)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 87)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 89)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 91)) ;
  nt_grammar_5F_instruction_5F_core_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                                  const GALGAS_actualParameterListAST constinArgument_actualParameterList,
                                                                                                                  const GALGAS_lstring constinArgument_inGrammarComponentName,
                                                                                                                  const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                  GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 102)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_4931 ;
  nt_expression_5F_ggs_33__ (var_sourceExpression_4931, inCompiler) ;
  GALGAS_location var_endOfSourceExpression_4956 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 104)) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_5115 ;
  switch (select_galgas_33_InstructionsSyntax_47 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_5115 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-grammar.galgas", 108)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 110)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult_5115, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_grammarInFileInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_4931, var_endOfSourceExpression_4956, constinArgument_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult_5115  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 113)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 102)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_47 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 110)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i28_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 102)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_47 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 110)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i29_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                                  const GALGAS_actualParameterListAST constinArgument_actualParameterList,
                                                                                                                  const GALGAS_lstring constinArgument_inGrammarComponentName,
                                                                                                                  const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                  GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 131)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_6237 ;
  nt_expression_5F_ggs_33__ (var_sourceExpression_6237, inCompiler) ;
  GALGAS_location var_endOfSourceExpression_6272 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 133)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 134)) ;
  GALGAS_semanticExpressionAST var_nameExpression_6360 ;
  nt_expression_5F_ggs_33__ (var_nameExpression_6360, inCompiler) ;
  GALGAS_location var_endOfNameExpression_6393 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 136)) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_6541 ;
  switch (select_galgas_33_InstructionsSyntax_48 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_6541 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-grammar.galgas", 140)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 142)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult_6541, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_grammarInStringInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_6237, var_endOfSourceExpression_6272, var_nameExpression_6360, var_endOfNameExpression_6393, constinArgument_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult_6541  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 145)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i29_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 131)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 134)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_48 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 142)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_i29_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 131)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 134)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_48 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 142)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i30_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 163)) ;
  GALGAS_location var_instructionLocation_7587 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 164)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOldStyleCollectionInitializer.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticWarning (var_instructionLocation_7587, GALGAS_string ("obsolete 'grammar' instruction syntax"), fixItArray1  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 166)) ;
    }
  }
  GALGAS_lstring var_grammarComponentName_7820 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 168)) ;
  GALGAS_lstring var_labelName_7893 ;
  switch (select_galgas_33_InstructionsSyntax_49 (inCompiler)) {
  case 1: {
    var_labelName_7893 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 171))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 171)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 173)) ;
    var_labelName_7893 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 174)) ;
  } break ;
  default:
    break ;
  }
  nt_grammar_5F_instruction_5F_core_5F_obsolete_ (var_instructionLocation_7587, var_grammarComponentName_7820, var_labelName_7893, outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i30_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 163)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 168)) ;
  switch (select_galgas_33_InstructionsSyntax_49 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 173)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 174)) ;
  } break ;
  default:
    break ;
  }
  nt_grammar_5F_instruction_5F_core_5F_obsolete_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i30_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas", 163)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 168)) ;
  switch (select_galgas_33_InstructionsSyntax_49 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas", 173)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas", 174)) ;
  } break ;
  default:
    break ;
  }
  nt_grammar_5F_instruction_5F_core_5F_obsolete_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i31_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                                              const GALGAS_lstring constinArgument_inGrammarComponentName,
                                                                                                                              const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                              GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 185)) ;
  GALGAS_semanticExpressionAST var_mSourceExpression_8638 ;
  nt_expression_5F_ggs_33__ (var_mSourceExpression_8638, inCompiler) ;
  GALGAS_location var_endOfSourceExpression_8664 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 187)) ;
  GALGAS_actualParameterListAST var_actualParameterList_8765 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (var_actualParameterList_8765, inCompiler) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_8905 ;
  switch (select_galgas_33_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_8905 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-grammar.galgas", 192)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 194)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult_8905, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_grammarInFileInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_mSourceExpression_8638, var_endOfSourceExpression_8664, var_actualParameterList_8765, var_grammarInstructionSyntaxDirectedTranslationResult_8905  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 197)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i31_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 185)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 194)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i31_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas", 185)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 194)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i32_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                                              const GALGAS_lstring constinArgument_inGrammarComponentName,
                                                                                                                              const GALGAS_lstring constinArgument_inLabelName,
                                                                                                                              GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                              C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 214)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 215)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_9989 ;
  nt_expression_5F_ggs_33__ (var_sourceExpression_9989, inCompiler) ;
  GALGAS_location var_endOfSourceExpression_10024 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 217)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 218)) ;
  GALGAS_semanticExpressionAST var_nameExpression_10112 ;
  nt_expression_5F_ggs_33__ (var_nameExpression_10112, inCompiler) ;
  GALGAS_location var_endOfNameExpression_10145 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 220)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 221)) ;
  GALGAS_actualParameterListAST var_actualParameterList_10243 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (var_actualParameterList_10243, inCompiler) ;
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_10383 ;
  switch (select_galgas_33_InstructionsSyntax_51 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_10383 = GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-grammar.galgas", 226)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 228)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (var_grammarInstructionSyntaxDirectedTranslationResult_10383, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_grammarInStringInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_9989, var_endOfSourceExpression_10024, var_nameExpression_10112, var_endOfNameExpression_10145, var_actualParameterList_10243, var_grammarInstructionSyntaxDirectedTranslationResult_10383  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 231)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i32_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 214)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 215)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 218)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 221)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 228)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_grammar_5F_instruction_5F_core_5F_obsolete_i32_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas", 214)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 215)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 218)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 221)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas", 228)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i33_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  nt_semantic_5F_instruction_5F_inc_5F_dec_ (GALGAS_bool (false), outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i33_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_semantic_5F_instruction_5F_inc_5F_dec_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i33_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_semantic_5F_instruction_5F_inc_5F_dec_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i34_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 57)) ;
  nt_semantic_5F_instruction_5F_inc_5F_dec_ (GALGAS_bool (true), outArgument_outInstruction, inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i34_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 57)) ;
  nt_semantic_5F_instruction_5F_inc_5F_dec_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i34_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 57)) ;
  nt_semantic_5F_instruction_5F_inc_5F_dec_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i35_ (const GALGAS_bool constinArgument_inPrefixedBySelf,
                                                                                                                         GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                         C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mReceiverName_2561 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 64)) ;
  GALGAS_lstringlist var_mStructAttributeList_2583 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 65)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_52 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 68)) ;
      GALGAS_lstring var_attributeName_2677 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 69)) ;
      var_mStructAttributeList_2583.addAssign_operation (var_attributeName_2677  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 70)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_53 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 73)) ;
    outArgument_outInstruction = GALGAS_incDecInstructionAST::constructor_new (var_mReceiverName_2561.readProperty_location (), constinArgument_inPrefixedBySelf, var_mReceiverName_2561, var_mStructAttributeList_2583, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 79))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 74)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 82)) ;
    outArgument_outInstruction = GALGAS_incDecNoOVFInstructionAST::constructor_new (var_mReceiverName_2561.readProperty_location (), constinArgument_inPrefixedBySelf, var_mReceiverName_2561, var_mStructAttributeList_2583, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 88))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 83)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 91)) ;
    outArgument_outInstruction = GALGAS_incDecNoOVFInstructionAST::constructor_new (var_mReceiverName_2561.readProperty_location (), constinArgument_inPrefixedBySelf, var_mReceiverName_2561, var_mStructAttributeList_2583, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 97))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 92)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 100)) ;
    outArgument_outInstruction = GALGAS_incDecInstructionAST::constructor_new (var_mReceiverName_2561.readProperty_location (), constinArgument_inPrefixedBySelf, var_mReceiverName_2561, var_mStructAttributeList_2583, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 106))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 101)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i35_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_52 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 68)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 69)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_53 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 73)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 82)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 91)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 100)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_inc_5F_dec_i35_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 64)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_52 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 68)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 69)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_53 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 73)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 82)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 91)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 100)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i36_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 114)) ;
  GALGAS_location var_instructionLocation_3823 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 115)) ;
  switch (select_galgas_33_InstructionsSyntax_54 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 117)) ;
    outArgument_outInstruction = GALGAS_selfIncDecInstructionAST::constructor_new (var_instructionLocation_3823, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 120))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 118)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 123)) ;
    outArgument_outInstruction = GALGAS_selfIncDecInstructionAST::constructor_new (var_instructionLocation_3823, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 126))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 124)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 129)) ;
    outArgument_outInstruction = GALGAS_selfIncDecNoOVFInstructionAST::constructor_new (var_instructionLocation_3823, GALGAS_incDecKind::constructor_increment (SOURCE_FILE ("instruction-inc-dec.galgas", 132))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 130)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 135)) ;
    outArgument_outInstruction = GALGAS_selfIncDecNoOVFInstructionAST::constructor_new (var_instructionLocation_3823, GALGAS_incDecKind::constructor_decrement (SOURCE_FILE ("instruction-inc-dec.galgas", 138))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 136)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i36_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 114)) ;
  switch (select_galgas_33_InstructionsSyntax_54 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 117)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 123)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 129)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 135)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i36_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 114)) ;
  switch (select_galgas_33_InstructionsSyntax_54 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 117)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 123)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2B__2B_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 129)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__26__2D__2D_ COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 135)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i37_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                             C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_location var_instructionLocation_2594 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 60)) ;
  GALGAS_ifExpressionList var_testExpression_2661 ;
  nt_if_5F_expression_5F_ggs_33__ (var_testExpression_2661, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas", 62)) ;
  GALGAS_semanticInstructionListAST var_then_5F_instructionList_2729 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_then_5F_instructionList_2729, inCompiler) ;
  GALGAS_location var_endOf_5F_then_5F_branchLocation_2758 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 64)) ;
  GALGAS_semanticInstructionListAST var_else_5F_instructionList_2837 ;
  switch (select_galgas_33_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
    var_else_5F_instructionList_2837 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 67)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 69)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_else_5F_instructionList_2837, inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas", 72)) ;
    GALGAS_semanticInstructionAST var_instruction_3065 ;
    nt_if_5F_instruction_5F_core_ (var_instruction_3065, inCompiler) ;
    GALGAS_semanticInstructionListAST temp_0 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 74)) ;
    temp_0.addAssign_operation (var_instruction_3065  COMMA_SOURCE_FILE ("instruction-if.galgas", 74)) ;
    var_else_5F_instructionList_2837 = temp_0 ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_ifInstructionAST::constructor_new (var_instructionLocation_2594, var_testExpression_2661, var_then_5F_instructionList_2729, var_endOf_5F_then_5F_branchLocation_2758, var_else_5F_instructionList_2837, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 82))  COMMA_SOURCE_FILE ("instruction-if.galgas", 76)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i37_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_if_5F_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas", 62)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 69)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas", 72)) ;
    nt_if_5F_instruction_5F_core_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_instruction_5F_core_i37_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_if_5F_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas", 62)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas", 69)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas", 72)) ;
    nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i38_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 89)) ;
  nt_if_5F_instruction_5F_core_ (outArgument_outInstruction, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas", 91)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i38_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 89)) ;
  nt_if_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas", 91)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i38_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas", 89)) ;
  nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas", 91)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_expression_5F_ggs_33__i39_ (GALGAS_ifExpressionList & outArgument_outExpressionList,
                                                                                                               C_Lexique_galgasScanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_ifExpressionList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 97)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_57 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 100)) ;
      GALGAS_lstring var_constantName_3889 ;
      switch (select_galgas_33_InstructionsSyntax_58 (inCompiler)) {
      case 1: {
        var_constantName_3889 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 103)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 105)) ;
        var_constantName_3889 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 106)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 108)) ;
      GALGAS_semanticExpressionAST var_expression_4072 ;
      nt_expression_5F_or_5F_ggs_33__ (var_expression_4072, inCompiler) ;
      GALGAS_location var_endOfReceiverExpression_4095 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 110)) ;
      switch (select_galgas_33_InstructionsSyntax_59 (inCompiler)) {
      case 1: {
        outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_letExp (var_constantName_3889, var_expression_4072, var_endOfReceiverExpression_4095, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 116))  COMMA_SOURCE_FILE ("instruction-if.galgas", 112))  COMMA_SOURCE_FILE ("instruction-if.galgas", 112)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("instruction-if.galgas", 119)) ;
        GALGAS_lstring var_typeName_4412 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 120)) ;
        outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_letExp (var_constantName_3889, var_expression_4072, var_endOfReceiverExpression_4095, var_typeName_4412  COMMA_SOURCE_FILE ("instruction-if.galgas", 121))  COMMA_SOURCE_FILE ("instruction-if.galgas", 121)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 129)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 130)) ;
      GALGAS_semanticExpressionAST var_receiverExpression_4724 ;
      nt_expression_5F_ggs_33__ (var_receiverExpression_4724, inCompiler) ;
      GALGAS_lstring var_optionalMethodName_4778 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 132)) ;
      GALGAS_optionalMethodActualArgumentList var_optionalMethodActualArgumentList_4843 = GALGAS_optionalMethodActualArgumentList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 133)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_InstructionsSyntax_60 (inCompiler)) {
        case 2: {
          GALGAS_lstring var_selector_4929 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-if.galgas", 136)) ;
          GALGAS_semanticExpressionAST var_expression_4971 ;
          nt_expression_5F_ggs_33__ (var_expression_4971, inCompiler) ;
          var_optionalMethodActualArgumentList_4843.addAssign_operation (var_selector_4929, GALGAS_optionalMethodActualArgument::constructor_actualOutput (var_expression_4971, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 138))  COMMA_SOURCE_FILE ("instruction-if.galgas", 138))  COMMA_SOURCE_FILE ("instruction-if.galgas", 138)) ;
        } break ;
        case 3: {
          GALGAS_lstring var_selector_5129 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("instruction-if.galgas", 140)) ;
          switch (select_galgas_33_InstructionsSyntax_61 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 142)) ;
            GALGAS_lstring var_typeName_5198 ;
            switch (select_galgas_33_InstructionsSyntax_62 (inCompiler)) {
            case 1: {
              var_typeName_5198 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-if.galgas", 145)) ;
            } break ;
            case 2: {
              var_typeName_5198 = inCompiler->synthetizedAttribute_tokenString () ;
              inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 147)) ;
            } break ;
            default:
              break ;
            }
            GALGAS_lstring var_constantName_5360 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 149)) ;
            var_optionalMethodActualArgumentList_4843.addAssign_operation (var_selector_5129, GALGAS_optionalMethodActualArgument::constructor_actualLetInput (var_typeName_5198, var_constantName_5360  COMMA_SOURCE_FILE ("instruction-if.galgas", 150))  COMMA_SOURCE_FILE ("instruction-if.galgas", 150)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-if.galgas", 152)) ;
            GALGAS_lstring var_typeName_5554 ;
            switch (select_galgas_33_InstructionsSyntax_63 (inCompiler)) {
            case 1: {
              var_typeName_5554 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-if.galgas", 155)) ;
            } break ;
            case 2: {
              var_typeName_5554 = inCompiler->synthetizedAttribute_tokenString () ;
              inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 157)) ;
            } break ;
            default:
              break ;
            }
            GALGAS_lstring var_variableName_5715 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 159)) ;
            var_optionalMethodActualArgumentList_4843.addAssign_operation (var_selector_5129, GALGAS_optionalMethodActualArgument::constructor_actualVarInput (var_typeName_5554, var_variableName_5715  COMMA_SOURCE_FILE ("instruction-if.galgas", 160))  COMMA_SOURCE_FILE ("instruction-if.galgas", 160)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 162)) ;
            var_optionalMethodActualArgumentList_4843.addAssign_operation (var_selector_5129, GALGAS_optionalMethodActualArgument::constructor_actualInputJoker (GALGAS_bool (true), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 163)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("instruction-if.galgas", 163))  COMMA_SOURCE_FILE ("instruction-if.galgas", 163)) ;
          } break ;
          case 4: {
            GALGAS_lbigint var_repetitionCount_6050 = inCompiler->synthetizedAttribute_bigintValue () ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-if.galgas", 165)) ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 166)) ;
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              test_2 = GALGAS_bool (kIsNotEqual, var_selector_5129.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_2) {
                TC_Array <C_FixItDescription> fixItArray3 ;
                appendFixItActions (fixItArray3, kFixItReplace, GALGAS_string ("\?")) ;
                inCompiler->emitSemanticError (var_selector_5129.readProperty_location (), GALGAS_string ("the selector should be '\?'"), fixItArray3  COMMA_SOURCE_FILE ("instruction-if.galgas", 168)) ;
              }
            }
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = GALGAS_bool (kIsEqual, var_repetitionCount_6050.readProperty_bigint ().objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 170)))).boolEnum () ;
              if (kBoolTrue == test_4) {
                TC_Array <C_FixItDescription> fixItArray5 ;
                inCompiler->emitSemanticError (var_repetitionCount_6050.readProperty_location (), GALGAS_string ("the repetition count should be > 0"), fixItArray5  COMMA_SOURCE_FILE ("instruction-if.galgas", 171)) ;
              }
            }
            cEnumerator_range enumerator_6408 (GALGAS_range (GALGAS_uint (uint32_t (0U)), var_repetitionCount_6050.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 173)).substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 173))), kENUMERATION_UP) ;
            while (enumerator_6408.hasCurrentObject ()) {
              var_optionalMethodActualArgumentList_4843.addAssign_operation (var_selector_5129, GALGAS_optionalMethodActualArgument::constructor_actualInputJoker (GALGAS_bool (false), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 174)), enumerator_6408.current (HERE)  COMMA_SOURCE_FILE ("instruction-if.galgas", 174))  COMMA_SOURCE_FILE ("instruction-if.galgas", 174)) ;
              enumerator_6408.gotoNextObject () ;
            }
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 178)) ;
      outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_optionalMethodCall (var_receiverExpression_4724, var_optionalMethodName_4778, var_optionalMethodActualArgumentList_4843  COMMA_SOURCE_FILE ("instruction-if.galgas", 179))  COMMA_SOURCE_FILE ("instruction-if.galgas", 179)) ;
    } break ;
    case 3: {
      GALGAS_semanticExpressionAST var_expression_6849 ;
      nt_expression_5F_ggs_33__ (var_expression_6849, inCompiler) ;
      outArgument_outExpressionList.addAssign_operation (GALGAS_ifExpressionKind::constructor_regularExp (var_expression_6849  COMMA_SOURCE_FILE ("instruction-if.galgas", 186))  COMMA_SOURCE_FILE ("instruction-if.galgas", 186)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_33_InstructionsSyntax_56 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-if.galgas", 189)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_expression_5F_ggs_33__i39_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_57 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 100)) ;
      switch (select_galgas_33_InstructionsSyntax_58 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 103)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 105)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 108)) ;
      nt_expression_5F_or_5F_ggs_33__parse (inCompiler) ;
      switch (select_galgas_33_InstructionsSyntax_59 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("instruction-if.galgas", 119)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 120)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 129)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 130)) ;
      nt_expression_5F_ggs_33__parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 132)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_InstructionsSyntax_60 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-if.galgas", 136)) ;
          nt_expression_5F_ggs_33__parse (inCompiler) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("instruction-if.galgas", 140)) ;
          switch (select_galgas_33_InstructionsSyntax_61 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 142)) ;
            switch (select_galgas_33_InstructionsSyntax_62 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 147)) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 149)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-if.galgas", 152)) ;
            switch (select_galgas_33_InstructionsSyntax_63 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 157)) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 159)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 162)) ;
          } break ;
          case 4: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-if.galgas", 165)) ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 166)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 178)) ;
    } break ;
    case 3: {
      nt_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_33_InstructionsSyntax_56 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-if.galgas", 189)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_if_5F_expression_5F_ggs_33__i39_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_57 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 100)) ;
      switch (select_galgas_33_InstructionsSyntax_58 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 103)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 105)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 108)) ;
      nt_expression_5F_or_5F_ggs_33__indexing (inCompiler) ;
      switch (select_galgas_33_InstructionsSyntax_59 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("instruction-if.galgas", 119)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 120)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 129)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-if.galgas", 130)) ;
      nt_expression_5F_ggs_33__indexing (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 132)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_InstructionsSyntax_60 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21_ COMMA_SOURCE_FILE ("instruction-if.galgas", 136)) ;
          nt_expression_5F_ggs_33__indexing (inCompiler) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3F_ COMMA_SOURCE_FILE ("instruction-if.galgas", 140)) ;
          switch (select_galgas_33_InstructionsSyntax_61 (inCompiler)) {
          case 1: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-if.galgas", 142)) ;
            switch (select_galgas_33_InstructionsSyntax_62 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 147)) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 149)) ;
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-if.galgas", 152)) ;
            switch (select_galgas_33_InstructionsSyntax_63 (inCompiler)) {
            case 1: {
            } break ;
            case 2: {
              inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-if.galgas", 157)) ;
            } break ;
            default:
              break ;
            }
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-if.galgas", 159)) ;
          } break ;
          case 3: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 162)) ;
          } break ;
          case 4: {
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-if.galgas", 165)) ;
            inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-if.galgas", 166)) ;
          } break ;
          default:
            break ;
          }
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-if.galgas", 178)) ;
    } break ;
    case 3: {
      nt_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_33_InstructionsSyntax_56 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-if.galgas", 189)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i40_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 35)) ;
  GALGAS_lstring var_typeName_1607 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 36)) ;
  GALGAS_lstring var_constantName_1638 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 37)) ;
  outArgument_outInstruction = GALGAS_undefinedLocalConstantDeclarationAST::constructor_new (var_typeName_1607.readProperty_location (), var_typeName_1607, var_constantName_1638  COMMA_SOURCE_FILE ("instruction-let.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i40_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 37)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i40_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 37)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i41_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
  GALGAS_lstring var_typeName_2013 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 49)) ;
  GALGAS_lstring var_variableName_2044 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 51)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_2115 ;
  nt_expression_5F_ggs_33__ (var_sourceExpression_2115, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName_2013.readProperty_location (), GALGAS_bool (true), var_typeName_2013, var_variableName_2044, var_sourceExpression_2115  COMMA_SOURCE_FILE ("instruction-let.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i41_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 51)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i41_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-let.galgas", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 50)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 51)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i42_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 64)) ;
  GALGAS_lstring var_variableName_2560 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 66)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_2631 ;
  nt_expression_5F_ggs_33__ (var_sourceExpression_2631, inCompiler) ;
  outArgument_outInstruction = GALGAS_localConstantDeclarationWithAssignmentAST::constructor_new (var_variableName_2560.readProperty_location (), var_variableName_2560, var_sourceExpression_2631  COMMA_SOURCE_FILE ("instruction-let.galgas", 68)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i42_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 64)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 66)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i42_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas", 64)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas", 66)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i43_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas", 26)) ;
  GALGAS_location var_instructionLocation_1088 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 27)) ;
  GALGAS_logListAST var_logList_1145 = GALGAS_logListAST::constructor_emptyList (SOURCE_FILE ("instruction-log.galgas", 28)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_65 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_loggedVariableName_1208 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 31)) ;
      var_logList_1145.addAssign_operation (var_loggedVariableName_1208, GALGAS_varInExpressionAST::constructor_new (var_loggedVariableName_1208  COMMA_SOURCE_FILE ("instruction-log.galgas", 32))  COMMA_SOURCE_FILE ("instruction-log.galgas", 32)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas", 34)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas", 35)) ;
      GALGAS_lstring var_propertyName_1375 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 36)) ;
      var_logList_1145.addAssign_operation (var_propertyName_1375, GALGAS_structPropertyAccessExpressionAST::constructor_new (var_propertyName_1375.readProperty_location (), GALGAS_selfInExpressionAST::constructor_new (var_propertyName_1375.readProperty_location ()  COMMA_SOURCE_FILE ("instruction-log.galgas", 39)), var_propertyName_1375  COMMA_SOURCE_FILE ("instruction-log.galgas", 39))  COMMA_SOURCE_FILE ("instruction-log.galgas", 37)) ;
    } break ;
    case 3: {
      GALGAS_lstring var_logMessage_1602 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas", 41)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas", 42)) ;
      GALGAS_semanticExpressionAST var_logExpression_1656 ;
      nt_expression_5F_ggs_33__ (var_logExpression_1656, inCompiler) ;
      var_logList_1145.addAssign_operation (var_logMessage_1602, var_logExpression_1656  COMMA_SOURCE_FILE ("instruction-log.galgas", 44)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_33_InstructionsSyntax_64 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas", 47)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outInstruction = GALGAS_logInstructionAST::constructor_new (var_instructionLocation_1088, var_logList_1145  COMMA_SOURCE_FILE ("instruction-log.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i43_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_65 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 31)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas", 34)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas", 35)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 36)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas", 41)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas", 42)) ;
      nt_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_33_InstructionsSyntax_64 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas", 47)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i43_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_log COMMA_SOURCE_FILE ("instruction-log.galgas", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_InstructionsSyntax_65 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 31)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-log.galgas", 34)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-log.galgas", 35)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-log.galgas", 36)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("instruction-log.galgas", 41)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-log.galgas", 42)) ;
      nt_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_33_InstructionsSyntax_64 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-log.galgas", 47)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i44_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 26)) ;
  GALGAS_location var_instructionLocation_1297 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 29)) ;
  GALGAS_semanticExpressionAST var_variantExpression_1407 ;
  nt_expression_5F_ggs_33__ (var_variantExpression_1407, inCompiler) ;
  GALGAS_location var_endOfVariantExpression_1433 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 32)) ;
  GALGAS_semanticInstructionListAST var_firstInstructions_1558 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_firstInstructions_1558, inCompiler) ;
  GALGAS_location var_endOfFirstInstructions_1591 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 37)) ;
  GALGAS_semanticExpressionAST var_loopExpression_1693 ;
  nt_expression_5F_ggs_33__ (var_loopExpression_1693, inCompiler) ;
  GALGAS_location var_endOfLoopExpression_1716 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 40)) ;
  GALGAS_semanticInstructionListAST var_secondInstructions_1832 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_secondInstructions_1832, inCompiler) ;
  GALGAS_location var_endOfSecondInstructions_1859 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 43)) ;
  GALGAS_location var_endOfLoopInstruction_1918 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 44)) ;
  outArgument_outInstruction = GALGAS_loopInstructionWithVariantAST::constructor_new (var_instructionLocation_1297, var_variantExpression_1407, var_endOfVariantExpression_1433, var_firstInstructions_1558, var_endOfFirstInstructions_1591, var_loopExpression_1693, var_endOfLoopExpression_1716, var_secondInstructions_1832, var_endOfSecondInstructions_1859, var_endOfLoopInstruction_1918  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 45)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i44_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 29)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 32)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 37)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 40)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 43)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i44_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 29)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 32)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 37)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 40)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 43)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i45_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 24)) ;
  GALGAS_location var_instructionLocation_1198 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 25)) ;
  GALGAS_semanticInstructionListAST var_firstInstructions_1305 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_firstInstructions_1305, inCompiler) ;
  GALGAS_location var_endOfFirstInstructions_1338 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 29)) ;
  GALGAS_semanticExpressionAST var_loopExpression_1440 ;
  nt_expression_5F_ggs_33__ (var_loopExpression_1440, inCompiler) ;
  GALGAS_location var_endOfLoopExpression_1463 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 31)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 32)) ;
  GALGAS_semanticInstructionListAST var_secondInstructions_1579 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_secondInstructions_1579, inCompiler) ;
  GALGAS_location var_endOfSecondInstructions_1606 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 35)) ;
  GALGAS_location var_endOfLoopInstruction_1665 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 36)) ;
  outArgument_outInstruction = GALGAS_loopInstructionWithoutVariantAST::constructor_new (var_instructionLocation_1198, var_firstInstructions_1305, var_endOfFirstInstructions_1338, var_loopExpression_1440, var_endOfLoopExpression_1463, var_secondInstructions_1579, var_endOfSecondInstructions_1606, var_endOfLoopInstruction_1665  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 37)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i45_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 24)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 29)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 32)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 35)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i45_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 24)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 29)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 32)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 35)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i46_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 20)) ;
  GALGAS_location var_instructionLocation_981 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 21)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression_1068 ;
  nt_expression_5F_ggs_33__ (var_mReceiverExpression_1068, inCompiler) ;
  GALGAS_lstring var_mMethodName_1110 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-method-call.galgas", 23)) ;
  GALGAS_actualParameterListAST var_actualParameterList_1184 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (var_actualParameterList_1184, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 25)) ;
  outArgument_outInstruction = GALGAS_methodCallInstructionAST::constructor_new (var_instructionLocation_981, var_mReceiverExpression_1068, var_mMethodName_1110, var_actualParameterList_1184  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i46_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 20)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-method-call.galgas", 23)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i46_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 20)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-method-call.galgas", 23)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-method-call.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i47_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_mRoutineName_520 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 10)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 11)) ;
  GALGAS_actualParameterListAST var_actualParameterList_624 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (var_actualParameterList_624, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 13)) ;
  outArgument_outInstruction = GALGAS_procCallInstructionAST::constructor_new (var_mRoutineName_520.readProperty_location (), var_mRoutineName_520, var_actualParameterList_624  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 14)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i47_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 10)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 11)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 13)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i47_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_routineCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 10)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 11)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 13)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i48_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 19)) ;
  GALGAS_location var_instructionLocation_896 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 21)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_991 ;
  nt_expression_5F_ggs_33__ (var_sourceExpression_991, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfAssignmentInstructionAST::constructor_new (var_instructionLocation_896, var_sourceExpression_991  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i48_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 21)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i48_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 21)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i49_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 42)) ;
  GALGAS_location var_instructionLocation_1894 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 44)) ;
  GALGAS_actualOutputExpressionList var_expressionList_2017 ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__ (var_expressionList_2017, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPlusEqualElementsInstructionAST::constructor_new (var_instructionLocation_1894, var_expressionList_2017  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 46)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i49_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 44)) ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i49_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 44)) ;
  nt_non_5F_empty_5F_output_5F_expression_5F_list_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i50_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 55)) ;
  GALGAS_location var_instructionLocation_2378 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 57)) ;
  GALGAS_semanticExpressionAST var_expression_2474 ;
  nt_expression_5F_ggs_33__ (var_expression_2474, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfPlusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_2378, var_expression_2474  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 59)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i50_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 57)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i50_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 57)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i51_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 68)) ;
  GALGAS_location var_instructionLocation_2829 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 69)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 70)) ;
  GALGAS_semanticExpressionAST var_expression_2925 ;
  nt_expression_5F_ggs_33__ (var_expression_2925, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfMinusEqualExpressionInstructionAST::constructor_new (var_instructionLocation_2829, var_expression_2925  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 72)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i51_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 70)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i51_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 68)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 70)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i52_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 81)) ;
  GALGAS_location var_instructionLocation_3281 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 83)) ;
  GALGAS_semanticExpressionAST var_expression_3377 ;
  nt_expression_5F_ggs_33__ (var_expression_3377, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfMulEqualExpressionInstructionAST::constructor_new (var_instructionLocation_3281, var_expression_3377  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 85)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i52_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 81)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 83)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i52_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 81)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 83)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i53_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 94)) ;
  GALGAS_location var_instructionLocation_3731 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 95)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 96)) ;
  GALGAS_semanticExpressionAST var_expression_3827 ;
  nt_expression_5F_ggs_33__ (var_expression_3827, inCompiler) ;
  outArgument_outInstruction = GALGAS_selfDivEqualExpressionInstructionAST::constructor_new (var_instructionLocation_3731, var_expression_3827  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 98)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i53_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 96)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i53_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 96)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i54_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 30)) ;
  GALGAS_location var_instructionLocation_1378 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 31)) ;
  GALGAS_lstring var_selector_1429 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 32)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_1429.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_selector_1429.readProperty_location (), GALGAS_string ("an empty selector '!\?' is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 34)) ;
    }
  }
  GALGAS_bool var_prefixedBySelf_1559 ;
  switch (select_galgas_33_InstructionsSyntax_66 (inCompiler)) {
  case 1: {
    var_prefixedBySelf_1559 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 40)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 41)) ;
    var_prefixedBySelf_1559 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mReceiverName_1702 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 44)) ;
  GALGAS_lstringlist var_mReceiverStructAttributes_1724 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 45)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_galgas_33_InstructionsSyntax_67 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 48)) ;
      GALGAS_lstring var_structAttribute_1823 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 49)) ;
      var_mReceiverStructAttributes_1724.addAssign_operation (var_structAttribute_1823  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 50)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  GALGAS_lstring var_typeNameForCasting_1916 ;
  switch (select_galgas_33_InstructionsSyntax_68 (inCompiler)) {
  case 1: {
    var_typeNameForCasting_1916 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-setter-call.galgas", 54)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 56)) ;
    var_typeNameForCasting_1916 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_mSetterName_2068 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 59)) ;
  GALGAS_actualParameterListAST var_actualParameterList_2142 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (var_actualParameterList_2142, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 61)) ;
  outArgument_outInstruction = GALGAS_setterCallInstructionAST::constructor_new (var_instructionLocation_1378, var_prefixedBySelf_1559, var_mReceiverName_1702, var_mReceiverStructAttributes_1724, var_typeNameForCasting_1916, var_mSetterName_2068, var_actualParameterList_2142  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i54_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 32)) ;
  switch (select_galgas_33_InstructionsSyntax_66 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 40)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 44)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_67 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 48)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 49)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_68 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 56)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 59)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 61)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i54_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 32)) ;
  switch (select_galgas_33_InstructionsSyntax_66 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 40)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 41)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 44)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_33_InstructionsSyntax_67 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 48)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 49)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_68 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_as COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 56)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 57)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 59)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i55_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 76)) ;
  GALGAS_location var_instructionLocation_2624 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 77)) ;
  GALGAS_lstring var_selector_2675 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 78)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_2675.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_selector_2675.readProperty_location (), GALGAS_string ("an empty selector '!\?' is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 80)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 82)) ;
  GALGAS_lstring var_mSetterName_2824 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 83)) ;
  GALGAS_actualParameterListAST var_actualParameterList_2898 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (var_actualParameterList_2898, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 85)) ;
  outArgument_outInstruction = GALGAS_selfSetterCallInstructionAST::constructor_new (var_instructionLocation_2624, var_mSetterName_2824, var_actualParameterList_2898  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 86)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i55_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 76)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 78)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 83)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 85)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i55_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 76)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 78)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 82)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 83)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 85)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i56_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
  GALGAS_location var_instructionLocation_1670 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 39)) ;
  GALGAS_semanticExpressionAST var_switchExpression_1734 ;
  nt_expression_5F_ggs_33__ (var_switchExpression_1734, inCompiler) ;
  GALGAS_location var_endOfSwitchExpression_1759 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 41)) ;
  GALGAS_switchBranchesAST var_switchBranches_1825 = GALGAS_switchBranchesAST::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 44)) ;
    GALGAS_lstringlist var_constantNameList_1915 ;
    GALGAS_switchExtractedValuesListAST var_associatedValuesExtraction_1975 ;
    nt_switch_5F_case_ (var_constantNameList_1915, var_associatedValuesExtraction_1975, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 48)) ;
    GALGAS_semanticInstructionListAST var_instructions_2056 ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_instructions_2056, inCompiler) ;
    var_switchBranches_1825.addAssign_operation (var_constantNameList_1915, var_associatedValuesExtraction_1975, var_instructions_2056, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 50))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 50)) ;
    if (select_galgas_33_InstructionsSyntax_69 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas", 53)) ;
  GALGAS_location var_endOfSwitchInstruction_2205 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 54)) ;
  outArgument_outInstruction = GALGAS_switchInstructionAST::constructor_new (var_instructionLocation_1670, var_switchExpression_1734, var_endOfSwitchExpression_1759, var_switchBranches_1825, var_endOfSwitchInstruction_2205  COMMA_SOURCE_FILE ("instruction-switch.galgas", 55)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i56_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 44)) ;
    nt_switch_5F_case_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 48)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
    if (select_galgas_33_InstructionsSyntax_69 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas", 53)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i56_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas", 38)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas", 44)) ;
    nt_switch_5F_case_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 48)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
    if (select_galgas_33_InstructionsSyntax_69 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas", 53)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_switch_5F_case_i57_ (GALGAS_lstringlist & outArgument_outConstantNameList,
                                                                                                  GALGAS_switchExtractedValuesListAST & outArgument_outAssociatedValuesExtraction,
                                                                                                  C_Lexique_galgasScanner * inCompiler) {
  outArgument_outConstantNameList.drop () ; // Release 'out' argument
  outArgument_outAssociatedValuesExtraction.drop () ; // Release 'out' argument
  outArgument_outConstantNameList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 70)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_constantName_2760 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 72)) ;
    outArgument_outConstantNameList.addAssign_operation (var_constantName_2760  COMMA_SOURCE_FILE ("instruction-switch.galgas", 73)) ;
    if (select_galgas_33_InstructionsSyntax_70 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 75)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outAssociatedValuesExtraction = GALGAS_switchExtractedValuesListAST::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 77)) ;
  switch (select_galgas_33_InstructionsSyntax_71 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 80)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_InstructionsSyntax_73 (inCompiler)) {
      case 1: {
        GALGAS_lbigint var_n_2967 = inCompiler->synthetizedAttribute_bigintValue () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas", 83)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 84)) ;
        cEnumerator_range enumerator_3010 (GALGAS_range (GALGAS_uint (uint32_t (0U)), var_n_2967.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 85)).substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 85))), kENUMERATION_UP) ;
        while (enumerator_3010.hasCurrentObject ()) {
          outArgument_outAssociatedValuesExtraction.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 86)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 86)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 86)) ;
          enumerator_3010.gotoNextObject () ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 89)) ;
        outArgument_outAssociatedValuesExtraction.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 90)), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 90)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("instruction-switch.galgas", 90)) ;
      } break ;
      case 3: {
        GALGAS_lstring var_typeName_3253 ;
        switch (select_galgas_33_InstructionsSyntax_74 (inCompiler)) {
        case 1: {
          var_typeName_3253 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-switch.galgas", 94)) ;
        } break ;
        case 2: {
          var_typeName_3253 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-switch.galgas", 96)) ;
        } break ;
        default:
          break ;
        }
        GALGAS_bool var_constantMarkedAsUnused_3392 ;
        switch (select_galgas_33_InstructionsSyntax_75 (inCompiler)) {
        case 1: {
          var_constantMarkedAsUnused_3392 = GALGAS_bool (false) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas", 102)) ;
          var_constantMarkedAsUnused_3392 = GALGAS_bool (true) ;
        } break ;
        default:
          break ;
        }
        GALGAS_lstring var_constantName_3602 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 105)) ;
        outArgument_outAssociatedValuesExtraction.addAssign_operation (var_typeName_3253, var_constantName_3602, var_constantMarkedAsUnused_3392  COMMA_SOURCE_FILE ("instruction-switch.galgas", 106)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_InstructionsSyntax_72 (inCompiler) == 2) {
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 110)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_switch_5F_case_i57_parse (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 72)) ;
    if (select_galgas_33_InstructionsSyntax_70 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 75)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_71 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 80)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_InstructionsSyntax_73 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas", 83)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 84)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 89)) ;
      } break ;
      case 3: {
        switch (select_galgas_33_InstructionsSyntax_74 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-switch.galgas", 94)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_InstructionsSyntax_75 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas", 102)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 105)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_InstructionsSyntax_72 (inCompiler) == 2) {
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 110)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_switch_5F_case_i57_indexing (C_Lexique_galgasScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 72)) ;
    if (select_galgas_33_InstructionsSyntax_70 (inCompiler) == 2) {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 75)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_33_InstructionsSyntax_71 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 80)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_33_InstructionsSyntax_73 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas", 83)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 84)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 89)) ;
      } break ;
      case 3: {
        switch (select_galgas_33_InstructionsSyntax_74 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-switch.galgas", 94)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        switch (select_galgas_33_InstructionsSyntax_75 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_unused COMMA_SOURCE_FILE ("instruction-switch.galgas", 102)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas", 105)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_InstructionsSyntax_72 (inCompiler) == 2) {
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas", 110)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i58_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 20)) ;
  GALGAS_location var_instructionLocation_961 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 21)) ;
  GALGAS_lstring var_mTypeName_1024 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 22)) ;
  GALGAS_lstring var_mMethodName_1100 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 23)) ;
  GALGAS_actualParameterListAST var_actualParameterList_1174 ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__ (var_actualParameterList_1174, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 25)) ;
  outArgument_outInstruction = GALGAS_typeMethodCallInstructionAST::constructor_new (var_instructionLocation_961, var_mTypeName_1024, var_mMethodName_1100, var_actualParameterList_1174  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i58_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 20)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 23)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i58_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5B_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 20)) ;
  inCompiler->enterIndexing (C_Lexique_galgasScanner::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 23)) ;
  nt_actual_5F_parameter_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__5D_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i59_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 26)) ;
  GALGAS_lstring var_typeName_1223 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 27)) ;
  GALGAS_lstring var_variableName_1254 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 28)) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationNoAssignmentAST::constructor_new (var_typeName_1223.readProperty_location (), var_typeName_1223, var_variableName_1254  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i59_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 28)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i59_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i60_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_1599 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 35)) ;
  GALGAS_lstring var_variableName_1630 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 36)) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationNoAssignmentAST::constructor_new (var_typeName_1599.readProperty_location (), var_typeName_1599, var_variableName_1630  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 37)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOldStyleLocalVarDeclaration.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("var @").add_operation (var_typeName_1599.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 40))) ;
      inCompiler->emitSemanticError (var_typeName_1599.readProperty_location (), GALGAS_string ("old style local variable declaration (due to '--error-old-style-local-var-declaration' option)"), fixItArray1  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 39)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i60_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 36)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i60_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i61_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 47)) ;
  GALGAS_lstring var_variableName_2243 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 49)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_2314 ;
  nt_expression_5F_ggs_33__ (var_sourceExpression_2314, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableDeclarationWithAssignmentAST::constructor_new (var_variableName_2243.readProperty_location (), var_variableName_2243, var_sourceExpression_2314  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 51)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i61_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 49)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i61_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 49)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i62_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 61)) ;
  GALGAS_lstring var_typeName_2711 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 62)) ;
  GALGAS_lstring var_variableName_2742 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 64)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_2813 ;
  nt_expression_5F_ggs_33__ (var_sourceExpression_2813, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName_2711.readProperty_location (), GALGAS_bool (false), var_typeName_2711, var_variableName_2742, var_sourceExpression_2813  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 66)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i62_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 64)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i62_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 64)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i63_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_3235 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 78)) ;
  GALGAS_lstring var_variableName_3266 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 80)) ;
  GALGAS_semanticExpressionAST var_sourceExpression_3337 ;
  nt_expression_5F_ggs_33__ (var_sourceExpression_3337, inCompiler) ;
  outArgument_outInstruction = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST::constructor_new (var_typeName_3235.readProperty_location (), GALGAS_bool (false), var_typeName_3235, var_variableName_3266, var_sourceExpression_3337  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 82)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOldStyleLocalVarDeclaration.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("var @").add_operation (var_typeName_3235.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91))) ;
      inCompiler->emitSemanticError (var_typeName_3235.readProperty_location (), GALGAS_string ("old style local variable declaration (due to '--error-old-style-local-var-declaration' option)"), fixItArray1  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 90)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i63_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 78)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 80)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i63_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__40_type COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 78)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 80)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i64_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas", 21)) ;
  GALGAS_location var_instructionLocation_989 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 22)) ;
  GALGAS_semanticExpressionAST var_mReceiverExpression_1076 ;
  nt_expression_5F_ggs_33__ (var_mReceiverExpression_1076, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas", 24)) ;
  GALGAS_semanticExpressionAST var_mWarningExpression_1154 ;
  nt_expression_5F_ggs_33__ (var_mWarningExpression_1154, inCompiler) ;
  GALGAS_fixitListAST var_fixitListAST_1210 ;
  nt_issue_5F_fixit_ (var_fixitListAST_1210, inCompiler) ;
  outArgument_outInstruction = GALGAS_warningInstructionAST::constructor_new (var_instructionLocation_989, var_mReceiverExpression_1076, var_mWarningExpression_1154, var_fixitListAST_1210  COMMA_SOURCE_FILE ("instruction-warning.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i64_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas", 21)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas", 24)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  nt_issue_5F_fixit_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i64_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas", 21)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas", 24)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  nt_issue_5F_fixit_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i65_ (GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                      C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("instruction-with.galgas", 44)) ;
  GALGAS_location var_instructionLocation_2101 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 45)) ;
  GALGAS_semanticExpressionAST var_keyExpression_2188 ;
  nt_expression_5F_ggs_33__ (var_keyExpression_2188, inCompiler) ;
  GALGAS_location var_endOfKeyExpression_2210 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 47)) ;
  GALGAS_lstring var_withPrefix_2263 ;
  switch (select_galgas_33_InstructionsSyntax_76 (inCompiler)) {
  case 1: {
    var_withPrefix_2263 = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 50))  COMMA_SOURCE_FILE ("instruction-with.galgas", 50)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-with.galgas", 52)) ;
    var_withPrefix_2263 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-with.galgas", 55)) ;
  nt_with_5F_instruction_5F_core_ (var_instructionLocation_2101, var_keyExpression_2188, var_endOfKeyExpression_2210, var_withPrefix_2263, outArgument_outInstruction, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-with.galgas", 57)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i65_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("instruction-with.galgas", 44)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_76 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-with.galgas", 52)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-with.galgas", 55)) ;
  nt_with_5F_instruction_5F_core_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-with.galgas", 57)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_semantic_5F_instruction_5F_ggs_33__i65_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_with COMMA_SOURCE_FILE ("instruction-with.galgas", 44)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_76 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__3A_ COMMA_SOURCE_FILE ("instruction-with.galgas", 52)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 53)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_in COMMA_SOURCE_FILE ("instruction-with.galgas", 55)) ;
  nt_with_5F_instruction_5F_core_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_end COMMA_SOURCE_FILE ("instruction-with.galgas", 57)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i66_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                               const GALGAS_semanticExpressionAST constinArgument_inKeyExpression,
                                                                                                               const GALGAS_location constinArgument_inEndOfKeyExpression,
                                                                                                               const GALGAS_lstring constinArgument_inWithPrefix,
                                                                                                               GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_semanticExpressionAST var_receiverExpression_2944 ;
  nt_expression_5F_ggs_33__ (var_receiverExpression_2944, inCompiler) ;
  GALGAS_location var_endOfReceiverExpression_2971 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 70)) ;
  GALGAS_lstring var_searchMethodNameForErrorSignaling_3029 ;
  switch (select_galgas_33_InstructionsSyntax_77 (inCompiler)) {
  case 1: {
    var_searchMethodNameForErrorSignaling_3029 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 73)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("instruction-with.galgas", 75)) ;
    var_searchMethodNameForErrorSignaling_3029 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 76)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 78)) ;
  GALGAS_semanticInstructionListAST var_mDoBranchInstructions_3299 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_mDoBranchInstructions_3299, inCompiler) ;
  GALGAS_location var_endOfDoInstructions_3329 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 80)) ;
  GALGAS_semanticInstructionListAST var_mElseBranchInstructions_3402 ;
  switch (select_galgas_33_InstructionsSyntax_78 (inCompiler)) {
  case 1: {
    var_mElseBranchInstructions_3402 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 83)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 85)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_searchMethodNameForErrorSignaling_3029.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (var_searchMethodNameForErrorSignaling_3029.readProperty_location (), GALGAS_string ("no 'else' branch if error on search is enabled"), fixItArray1  COMMA_SOURCE_FILE ("instruction-with.galgas", 87)) ;
      }
    }
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_mElseBranchInstructions_3402, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_readAccessWithInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inWithPrefix, var_receiverExpression_2944, var_endOfReceiverExpression_2971, constinArgument_inKeyExpression, constinArgument_inEndOfKeyExpression, var_searchMethodNameForErrorSignaling_3029, var_mDoBranchInstructions_3299, var_endOfDoInstructions_3329, var_mElseBranchInstructions_3402, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 102))  COMMA_SOURCE_FILE ("instruction-with.galgas", 91)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i66_parse (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_77 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("instruction-with.galgas", 75)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 76)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 78)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_78 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 85)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i66_indexing (C_Lexique_galgasScanner * inCompiler) {
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_77 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("instruction-with.galgas", 75)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 76)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 78)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_78 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 85)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i67_ (const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                               const GALGAS_semanticExpressionAST constinArgument_inKeyExpression,
                                                                                                               const GALGAS_location constinArgument_inEndOfKeyExpression,
                                                                                                               const GALGAS_lstring constinArgument_inWithPrefix,
                                                                                                               GALGAS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                               C_Lexique_galgasScanner * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_selector_4483 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-with.galgas", 115)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_selector_4483.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_selector_4483.readProperty_location (), GALGAS_string ("an empty selector '!\?' is required here"), fixItArray1  COMMA_SOURCE_FILE ("instruction-with.galgas", 117)) ;
    }
  }
  GALGAS_lstringlist var_structAttributeList_4607 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 119)) ;
  GALGAS_bool var_targetIsPrefixedBySelf_4659 ;
  GALGAS_lstring var_targetObjectName_4699 ;
  switch (select_galgas_33_InstructionsSyntax_79 (inCompiler)) {
  case 1: {
    var_targetIsPrefixedBySelf_4659 = GALGAS_bool (false) ;
    var_targetObjectName_4699 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 124)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      if (select_galgas_33_InstructionsSyntax_80 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 127)) ;
        GALGAS_lstring var_mStructFieldName_4864 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 128)) ;
        var_structAttributeList_4607.addAssign_operation (var_mStructFieldName_4864  COMMA_SOURCE_FILE ("instruction-with.galgas", 129)) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
  } break ;
  case 2: {
    var_targetIsPrefixedBySelf_4659 = GALGAS_bool (true) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-with.galgas", 133)) ;
    switch (select_galgas_33_InstructionsSyntax_81 (inCompiler)) {
    case 1: {
      var_targetObjectName_4699 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 135)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 137)) ;
      var_targetObjectName_4699 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 138)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        if (select_galgas_33_InstructionsSyntax_82 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 141)) ;
          GALGAS_lstring var_mStructFieldName_5177 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 142)) ;
          var_structAttributeList_4607.addAssign_operation (var_mStructFieldName_5177  COMMA_SOURCE_FILE ("instruction-with.galgas", 143)) ;
        }else{
          repeatFlag_3 = false ;
        }
      }
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOfReceiverExpression_5283 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 147)) ;
  GALGAS_lstring var_searchMethodNameForErrorSignaling_5341 ;
  switch (select_galgas_33_InstructionsSyntax_83 (inCompiler)) {
  case 1: {
    var_searchMethodNameForErrorSignaling_5341 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 150)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("instruction-with.galgas", 152)) ;
    var_searchMethodNameForErrorSignaling_5341 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 153)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 155)) ;
  GALGAS_semanticInstructionListAST var_mDoBranchInstructions_5611 ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_mDoBranchInstructions_5611, inCompiler) ;
  GALGAS_location var_endOf_5F_do_5F_instructions_5641 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 157)) ;
  GALGAS_semanticInstructionListAST var_mElseBranchInstructions_5716 ;
  switch (select_galgas_33_InstructionsSyntax_84 (inCompiler)) {
  case 1: {
    var_mElseBranchInstructions_5716 = GALGAS_semanticInstructionListAST::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 160)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 162)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsNotEqual, var_searchMethodNameForErrorSignaling_5341.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (var_searchMethodNameForErrorSignaling_5341.readProperty_location (), GALGAS_string ("no 'else' branch if error on search is enabled"), fixItArray5  COMMA_SOURCE_FILE ("instruction-with.galgas", 164)) ;
      }
    }
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__ (var_mElseBranchInstructions_5716, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_location var_endOf_5F_else_5F_instructions_6057 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 168)) ;
  outArgument_outInstruction = GALGAS_readWriteAccessWithInstructionAST::constructor_new (constinArgument_inInstructionLocation, constinArgument_inWithPrefix, var_targetObjectName_4699, var_targetIsPrefixedBySelf_4659, var_structAttributeList_4607, var_endOfReceiverExpression_5283, constinArgument_inKeyExpression, constinArgument_inEndOfKeyExpression, var_searchMethodNameForErrorSignaling_5341, var_mDoBranchInstructions_5611, var_endOf_5F_do_5F_instructions_5641, var_mElseBranchInstructions_5716, var_endOf_5F_else_5F_instructions_6057  COMMA_SOURCE_FILE ("instruction-with.galgas", 169)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i67_parse (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-with.galgas", 115)) ;
  switch (select_galgas_33_InstructionsSyntax_79 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 124)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_33_InstructionsSyntax_80 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 127)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 128)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-with.galgas", 133)) ;
    switch (select_galgas_33_InstructionsSyntax_81 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 137)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 138)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        if (select_galgas_33_InstructionsSyntax_82 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 141)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 142)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_83 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("instruction-with.galgas", 152)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 153)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 155)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_84 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 162)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_InstructionsSyntax::rule_galgas_33_InstructionsSyntax_with_5F_instruction_5F_core_i67_indexing (C_Lexique_galgasScanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-with.galgas", 115)) ;
  switch (select_galgas_33_InstructionsSyntax_79 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 124)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_33_InstructionsSyntax_80 (inCompiler) == 2) {
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 127)) ;
        inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 128)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_self COMMA_SOURCE_FILE ("instruction-with.galgas", 133)) ;
    switch (select_galgas_33_InstructionsSyntax_81 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 137)) ;
      inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 138)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        if (select_galgas_33_InstructionsSyntax_82 (inCompiler) == 2) {
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__2E_ COMMA_SOURCE_FILE ("instruction-with.galgas", 141)) ;
          inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 142)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  switch (select_galgas_33_InstructionsSyntax_83 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken__25_errorMessage COMMA_SOURCE_FILE ("instruction-with.galgas", 152)) ;
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_identifier COMMA_SOURCE_FILE ("instruction-with.galgas", 153)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_do COMMA_SOURCE_FILE ("instruction-with.galgas", 155)) ;
  nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_InstructionsSyntax_84 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgasScanner::kToken_else COMMA_SOURCE_FILE ("instruction-with.galgas", 162)) ;
    nt_semantic_5F_instruction_5F_list_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

