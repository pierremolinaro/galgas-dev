#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-16.h"

//--------------------------------------------------------------------------------------------------
// @templateInstructionForeachForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionForeachForGeneration::cPtr_templateInstructionForeachForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mIsAscending (),
mProperty_mExpression (),
mProperty_mEnumeratorCppName (),
mProperty_mBeforeInstructionList (),
mProperty_mDoInstructionList (),
mProperty_mIndexCppName (),
mProperty_mBetweenInstructionList (),
mProperty_mAfterInstructionList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionForeachForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mIsAscending.printNonNullClassInstanceProperties ("mIsAscending") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mEnumeratorCppName.printNonNullClassInstanceProperties ("mEnumeratorCppName") ;
    mProperty_mBeforeInstructionList.printNonNullClassInstanceProperties ("mBeforeInstructionList") ;
    mProperty_mDoInstructionList.printNonNullClassInstanceProperties ("mDoInstructionList") ;
    mProperty_mIndexCppName.printNonNullClassInstanceProperties ("mIndexCppName") ;
    mProperty_mBetweenInstructionList.printNonNullClassInstanceProperties ("mBetweenInstructionList") ;
    mProperty_mAfterInstructionList.printNonNullClassInstanceProperties ("mAfterInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_templateInstructionForeachForGeneration::objectCompare (const GALGAS_templateInstructionForeachForGeneration & inOperand) const {
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

GALGAS_templateInstructionForeachForGeneration::GALGAS_templateInstructionForeachForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_templateInstructionForeachForGeneration GALGAS_templateInstructionForeachForGeneration::
init_21__21__21__21__21__21__21__21_ (const GALGAS_bool & in_mIsAscending,
                                      const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                      const GALGAS_string & in_mEnumeratorCppName,
                                      const GALGAS_templateInstructionListForGeneration & in_mBeforeInstructionList,
                                      const GALGAS_templateInstructionListForGeneration & in_mDoInstructionList,
                                      const GALGAS_string & in_mIndexCppName,
                                      const GALGAS_templateInstructionListForGeneration & in_mBetweenInstructionList,
                                      const GALGAS_templateInstructionListForGeneration & in_mAfterInstructionList,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionForeachForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionForeachForGeneration (inCompiler COMMA_THERE)) ;
  object->templateInstructionForeachForGeneration_init_21__21__21__21__21__21__21__21_ (in_mIsAscending, in_mExpression, in_mEnumeratorCppName, in_mBeforeInstructionList, in_mDoInstructionList, in_mIndexCppName, in_mBetweenInstructionList, in_mAfterInstructionList, inCompiler) ;
  const GALGAS_templateInstructionForeachForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachForGeneration::
templateInstructionForeachForGeneration_init_21__21__21__21__21__21__21__21_ (const GALGAS_bool & in_mIsAscending,
                                                                              const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                              const GALGAS_string & in_mEnumeratorCppName,
                                                                              const GALGAS_templateInstructionListForGeneration & in_mBeforeInstructionList,
                                                                              const GALGAS_templateInstructionListForGeneration & in_mDoInstructionList,
                                                                              const GALGAS_string & in_mIndexCppName,
                                                                              const GALGAS_templateInstructionListForGeneration & in_mBetweenInstructionList,
                                                                              const GALGAS_templateInstructionListForGeneration & in_mAfterInstructionList,
                                                                              Compiler * /* inCompiler */) {
  mProperty_mIsAscending = in_mIsAscending ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mEnumeratorCppName = in_mEnumeratorCppName ;
  mProperty_mBeforeInstructionList = in_mBeforeInstructionList ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mIndexCppName = in_mIndexCppName ;
  mProperty_mBetweenInstructionList = in_mBetweenInstructionList ;
  mProperty_mAfterInstructionList = in_mAfterInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachForGeneration::GALGAS_templateInstructionForeachForGeneration (const cPtr_templateInstructionForeachForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionForeachForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachForGeneration GALGAS_templateInstructionForeachForGeneration::class_func_new (const GALGAS_bool & in_mIsAscending,
                                                                                                               const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                                                               const GALGAS_string & in_mEnumeratorCppName,
                                                                                                               const GALGAS_templateInstructionListForGeneration & in_mBeforeInstructionList,
                                                                                                               const GALGAS_templateInstructionListForGeneration & in_mDoInstructionList,
                                                                                                               const GALGAS_string & in_mIndexCppName,
                                                                                                               const GALGAS_templateInstructionListForGeneration & in_mBetweenInstructionList,
                                                                                                               const GALGAS_templateInstructionListForGeneration & in_mAfterInstructionList
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionForeachForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_templateInstructionForeachForGeneration (in_mIsAscending, in_mExpression, in_mEnumeratorCppName, in_mBeforeInstructionList, in_mDoInstructionList, in_mIndexCppName, in_mBetweenInstructionList, in_mAfterInstructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_templateInstructionForeachForGeneration::readProperty_mIsAscending (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mIsAscending ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_templateInstructionForeachForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_templateInstructionForeachForGeneration::readProperty_mEnumeratorCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mEnumeratorCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionForeachForGeneration::readProperty_mBeforeInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mBeforeInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionForeachForGeneration::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_templateInstructionForeachForGeneration::readProperty_mIndexCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mIndexCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionForeachForGeneration::readProperty_mBetweenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mBetweenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionForeachForGeneration::readProperty_mAfterInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mAfterInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionForeachForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionForeachForGeneration::cPtr_templateInstructionForeachForGeneration (const GALGAS_bool & in_mIsAscending,
                                                                                            const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                                                            const GALGAS_string & in_mEnumeratorCppName,
                                                                                            const GALGAS_templateInstructionListForGeneration & in_mBeforeInstructionList,
                                                                                            const GALGAS_templateInstructionListForGeneration & in_mDoInstructionList,
                                                                                            const GALGAS_string & in_mIndexCppName,
                                                                                            const GALGAS_templateInstructionListForGeneration & in_mBetweenInstructionList,
                                                                                            const GALGAS_templateInstructionListForGeneration & in_mAfterInstructionList
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (THERE),
mProperty_mIsAscending (),
mProperty_mExpression (),
mProperty_mEnumeratorCppName (),
mProperty_mBeforeInstructionList (),
mProperty_mDoInstructionList (),
mProperty_mIndexCppName (),
mProperty_mBetweenInstructionList (),
mProperty_mAfterInstructionList () {
  mProperty_mIsAscending = in_mIsAscending ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mEnumeratorCppName = in_mEnumeratorCppName ;
  mProperty_mBeforeInstructionList = in_mBeforeInstructionList ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mIndexCppName = in_mIndexCppName ;
  mProperty_mBetweenInstructionList = in_mBetweenInstructionList ;
  mProperty_mAfterInstructionList = in_mAfterInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionForeachForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ;
}

void cPtr_templateInstructionForeachForGeneration::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionForeachForGeneration:") ;
  mProperty_mIsAscending.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEnumeratorCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBeforeInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIndexCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBetweenInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAfterInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionForeachForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionForeachForGeneration (mProperty_mIsAscending, mProperty_mExpression, mProperty_mEnumeratorCppName, mProperty_mBeforeInstructionList, mProperty_mDoInstructionList, mProperty_mIndexCppName, mProperty_mBetweenInstructionList, mProperty_mAfterInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @templateInstructionForeachForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ("templateInstructionForeachForGeneration",
                                                                                               & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionForeachForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionForeachForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionForeachForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionForeachForGeneration GALGAS_templateInstructionForeachForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionForeachForGeneration result ;
  const GALGAS_templateInstructionForeachForGeneration * p = (const GALGAS_templateInstructionForeachForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateInstructionForeachForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForeachForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionSwitchForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionSwitchForGeneration::cPtr_templateInstructionSwitchForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mEnumType (),
mProperty_mSwitchExpression (),
mProperty_mTemplateInstructionSwitchBranchList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionSwitchForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mEnumType.printNonNullClassInstanceProperties ("mEnumType") ;
    mProperty_mSwitchExpression.printNonNullClassInstanceProperties ("mSwitchExpression") ;
    mProperty_mTemplateInstructionSwitchBranchList.printNonNullClassInstanceProperties ("mTemplateInstructionSwitchBranchList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_templateInstructionSwitchForGeneration::objectCompare (const GALGAS_templateInstructionSwitchForGeneration & inOperand) const {
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

GALGAS_templateInstructionSwitchForGeneration::GALGAS_templateInstructionSwitchForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_templateInstructionSwitchForGeneration GALGAS_templateInstructionSwitchForGeneration::
init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mEnumType,
                  const GALGAS_semanticExpressionForGeneration & in_mSwitchExpression,
                  const GALGAS_templateInstructionSwitchBranchListForGeneration & in_mTemplateInstructionSwitchBranchList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionSwitchForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionSwitchForGeneration (inCompiler COMMA_THERE)) ;
  object->templateInstructionSwitchForGeneration_init_21__21__21_ (in_mEnumType, in_mSwitchExpression, in_mTemplateInstructionSwitchBranchList, inCompiler) ;
  const GALGAS_templateInstructionSwitchForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionSwitchForGeneration::
templateInstructionSwitchForGeneration_init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mEnumType,
                                                         const GALGAS_semanticExpressionForGeneration & in_mSwitchExpression,
                                                         const GALGAS_templateInstructionSwitchBranchListForGeneration & in_mTemplateInstructionSwitchBranchList,
                                                         Compiler * /* inCompiler */) {
  mProperty_mEnumType = in_mEnumType ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mTemplateInstructionSwitchBranchList = in_mTemplateInstructionSwitchBranchList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchForGeneration::GALGAS_templateInstructionSwitchForGeneration (const cPtr_templateInstructionSwitchForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionSwitchForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchForGeneration GALGAS_templateInstructionSwitchForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mEnumType,
                                                                                                             const GALGAS_semanticExpressionForGeneration & in_mSwitchExpression,
                                                                                                             const GALGAS_templateInstructionSwitchBranchListForGeneration & in_mTemplateInstructionSwitchBranchList
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_templateInstructionSwitchForGeneration (in_mEnumType, in_mSwitchExpression, in_mTemplateInstructionSwitchBranchList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_templateInstructionSwitchForGeneration::readProperty_mEnumType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_templateInstructionSwitchForGeneration * p = (cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
    return p->mProperty_mEnumType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_templateInstructionSwitchForGeneration::readProperty_mSwitchExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_templateInstructionSwitchForGeneration * p = (cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
    return p->mProperty_mSwitchExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchForGeneration::readProperty_mTemplateInstructionSwitchBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateInstructionSwitchBranchListForGeneration () ;
  }else{
    cPtr_templateInstructionSwitchForGeneration * p = (cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
    return p->mProperty_mTemplateInstructionSwitchBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionSwitchForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionSwitchForGeneration::cPtr_templateInstructionSwitchForGeneration (const GALGAS_unifiedTypeMapEntry & in_mEnumType,
                                                                                          const GALGAS_semanticExpressionForGeneration & in_mSwitchExpression,
                                                                                          const GALGAS_templateInstructionSwitchBranchListForGeneration & in_mTemplateInstructionSwitchBranchList
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (THERE),
mProperty_mEnumType (),
mProperty_mSwitchExpression (),
mProperty_mTemplateInstructionSwitchBranchList () {
  mProperty_mEnumType = in_mEnumType ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mTemplateInstructionSwitchBranchList = in_mTemplateInstructionSwitchBranchList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionSwitchForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ;
}

void cPtr_templateInstructionSwitchForGeneration::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionSwitchForGeneration:") ;
  mProperty_mEnumType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTemplateInstructionSwitchBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionSwitchForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionSwitchForGeneration (mProperty_mEnumType, mProperty_mSwitchExpression, mProperty_mTemplateInstructionSwitchBranchList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @templateInstructionSwitchForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ("templateInstructionSwitchForGeneration",
                                                                                              & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionSwitchForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionSwitchForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionSwitchForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchForGeneration GALGAS_templateInstructionSwitchForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchForGeneration result ;
  const GALGAS_templateInstructionSwitchForGeneration * p = (const GALGAS_templateInstructionSwitchForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateInstructionSwitchForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexiqueComponentAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexiqueComponentAST::cPtr_lexiqueComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mLexiqueComponentName (),
mProperty_mIsTemplate (),
mProperty_mTemplateDelimitorListAST (),
mProperty_mTemplateReplacementListAST (),
mProperty_mLexicalAttributeListAST (),
mProperty_mLexicalStyleListAST (),
mProperty_mTerminalDeclarationListAST (),
mProperty_mLexicalMessageDeclarationListAST (),
mProperty_mLexicalListDeclarationListAST (),
mProperty_mLexicalRuleListAST (),
mProperty_mIndexingListAST () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexiqueComponentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexiqueComponentName.printNonNullClassInstanceProperties ("mLexiqueComponentName") ;
    mProperty_mIsTemplate.printNonNullClassInstanceProperties ("mIsTemplate") ;
    mProperty_mTemplateDelimitorListAST.printNonNullClassInstanceProperties ("mTemplateDelimitorListAST") ;
    mProperty_mTemplateReplacementListAST.printNonNullClassInstanceProperties ("mTemplateReplacementListAST") ;
    mProperty_mLexicalAttributeListAST.printNonNullClassInstanceProperties ("mLexicalAttributeListAST") ;
    mProperty_mLexicalStyleListAST.printNonNullClassInstanceProperties ("mLexicalStyleListAST") ;
    mProperty_mTerminalDeclarationListAST.printNonNullClassInstanceProperties ("mTerminalDeclarationListAST") ;
    mProperty_mLexicalMessageDeclarationListAST.printNonNullClassInstanceProperties ("mLexicalMessageDeclarationListAST") ;
    mProperty_mLexicalListDeclarationListAST.printNonNullClassInstanceProperties ("mLexicalListDeclarationListAST") ;
    mProperty_mLexicalRuleListAST.printNonNullClassInstanceProperties ("mLexicalRuleListAST") ;
    mProperty_mIndexingListAST.printNonNullClassInstanceProperties ("mIndexingListAST") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexiqueComponentAST::objectCompare (const GALGAS_lexiqueComponentAST & inOperand) const {
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

GALGAS_lexiqueComponentAST::GALGAS_lexiqueComponentAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexiqueComponentAST GALGAS_lexiqueComponentAST::
init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (const GALGAS_bool & in_isPredefined,
                                                                  const GALGAS_lstring & in_mLexiqueComponentName,
                                                                  const GALGAS_bool & in_mIsTemplate,
                                                                  const GALGAS_templateDelimitorListAST & in_mTemplateDelimitorListAST,
                                                                  const GALGAS_templateReplacementListAST & in_mTemplateReplacementListAST,
                                                                  const GALGAS_lexicalAttributeListAST & in_mLexicalAttributeListAST,
                                                                  const GALGAS_lexicalStyleListAST & in_mLexicalStyleListAST,
                                                                  const GALGAS_terminalDeclarationListAST & in_mTerminalDeclarationListAST,
                                                                  const GALGAS_lexicalMessageDeclarationListAST & in_mLexicalMessageDeclarationListAST,
                                                                  const GALGAS_lexicalListDeclarationListAST & in_mLexicalListDeclarationListAST,
                                                                  const GALGAS_lexicalRuleListAST & in_mLexicalRuleListAST,
                                                                  const GALGAS_indexingListAST & in_mIndexingListAST,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cPtr_lexiqueComponentAST * object = nullptr ;
  macroMyNew (object, cPtr_lexiqueComponentAST (inCompiler COMMA_THERE)) ;
  object->lexiqueComponentAST_init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (in_isPredefined, in_mLexiqueComponentName, in_mIsTemplate, in_mTemplateDelimitorListAST, in_mTemplateReplacementListAST, in_mLexicalAttributeListAST, in_mLexicalStyleListAST, in_mTerminalDeclarationListAST, in_mLexicalMessageDeclarationListAST, in_mLexicalListDeclarationListAST, in_mLexicalRuleListAST, in_mIndexingListAST, inCompiler) ;
  const GALGAS_lexiqueComponentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueComponentAST::
lexiqueComponentAST_init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (const GALGAS_bool & in_isPredefined,
                                                                                      const GALGAS_lstring & in_mLexiqueComponentName,
                                                                                      const GALGAS_bool & in_mIsTemplate,
                                                                                      const GALGAS_templateDelimitorListAST & in_mTemplateDelimitorListAST,
                                                                                      const GALGAS_templateReplacementListAST & in_mTemplateReplacementListAST,
                                                                                      const GALGAS_lexicalAttributeListAST & in_mLexicalAttributeListAST,
                                                                                      const GALGAS_lexicalStyleListAST & in_mLexicalStyleListAST,
                                                                                      const GALGAS_terminalDeclarationListAST & in_mTerminalDeclarationListAST,
                                                                                      const GALGAS_lexicalMessageDeclarationListAST & in_mLexicalMessageDeclarationListAST,
                                                                                      const GALGAS_lexicalListDeclarationListAST & in_mLexicalListDeclarationListAST,
                                                                                      const GALGAS_lexicalRuleListAST & in_mLexicalRuleListAST,
                                                                                      const GALGAS_indexingListAST & in_mIndexingListAST,
                                                                                      Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mIsTemplate = in_mIsTemplate ;
  mProperty_mTemplateDelimitorListAST = in_mTemplateDelimitorListAST ;
  mProperty_mTemplateReplacementListAST = in_mTemplateReplacementListAST ;
  mProperty_mLexicalAttributeListAST = in_mLexicalAttributeListAST ;
  mProperty_mLexicalStyleListAST = in_mLexicalStyleListAST ;
  mProperty_mTerminalDeclarationListAST = in_mTerminalDeclarationListAST ;
  mProperty_mLexicalMessageDeclarationListAST = in_mLexicalMessageDeclarationListAST ;
  mProperty_mLexicalListDeclarationListAST = in_mLexicalListDeclarationListAST ;
  mProperty_mLexicalRuleListAST = in_mLexicalRuleListAST ;
  mProperty_mIndexingListAST = in_mIndexingListAST ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentAST::GALGAS_lexiqueComponentAST (const cPtr_lexiqueComponentAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexiqueComponentAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentAST GALGAS_lexiqueComponentAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                       const GALGAS_lstring & in_mLexiqueComponentName,
                                                                       const GALGAS_bool & in_mIsTemplate,
                                                                       const GALGAS_templateDelimitorListAST & in_mTemplateDelimitorListAST,
                                                                       const GALGAS_templateReplacementListAST & in_mTemplateReplacementListAST,
                                                                       const GALGAS_lexicalAttributeListAST & in_mLexicalAttributeListAST,
                                                                       const GALGAS_lexicalStyleListAST & in_mLexicalStyleListAST,
                                                                       const GALGAS_terminalDeclarationListAST & in_mTerminalDeclarationListAST,
                                                                       const GALGAS_lexicalMessageDeclarationListAST & in_mLexicalMessageDeclarationListAST,
                                                                       const GALGAS_lexicalListDeclarationListAST & in_mLexicalListDeclarationListAST,
                                                                       const GALGAS_lexicalRuleListAST & in_mLexicalRuleListAST,
                                                                       const GALGAS_indexingListAST & in_mIndexingListAST
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueComponentAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexiqueComponentAST (in_isPredefined, in_mLexiqueComponentName, in_mIsTemplate, in_mTemplateDelimitorListAST, in_mTemplateReplacementListAST, in_mLexicalAttributeListAST, in_mLexicalStyleListAST, in_mTerminalDeclarationListAST, in_mLexicalMessageDeclarationListAST, in_mLexicalListDeclarationListAST, in_mLexicalRuleListAST, in_mIndexingListAST COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexiqueComponentAST::readProperty_mLexiqueComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexiqueComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexiqueComponentAST::readProperty_mIsTemplate (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mIsTemplate ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorListAST GALGAS_lexiqueComponentAST::readProperty_mTemplateDelimitorListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateDelimitorListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mTemplateDelimitorListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST GALGAS_lexiqueComponentAST::readProperty_mTemplateReplacementListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateReplacementListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mTemplateReplacementListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST GALGAS_lexiqueComponentAST::readProperty_mLexicalAttributeListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lexicalAttributeListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexicalAttributeListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST GALGAS_lexiqueComponentAST::readProperty_mLexicalStyleListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lexicalStyleListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexicalStyleListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST GALGAS_lexiqueComponentAST::readProperty_mTerminalDeclarationListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_terminalDeclarationListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mTerminalDeclarationListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexiqueComponentAST::readProperty_mLexicalMessageDeclarationListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lexicalMessageDeclarationListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexicalMessageDeclarationListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST GALGAS_lexiqueComponentAST::readProperty_mLexicalListDeclarationListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lexicalListDeclarationListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexicalListDeclarationListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST GALGAS_lexiqueComponentAST::readProperty_mLexicalRuleListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lexicalRuleListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexicalRuleListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_indexingListAST GALGAS_lexiqueComponentAST::readProperty_mIndexingListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_indexingListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mIndexingListAST ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexiqueComponentAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexiqueComponentAST::cPtr_lexiqueComponentAST (const GALGAS_bool & in_isPredefined,
                                                    const GALGAS_lstring & in_mLexiqueComponentName,
                                                    const GALGAS_bool & in_mIsTemplate,
                                                    const GALGAS_templateDelimitorListAST & in_mTemplateDelimitorListAST,
                                                    const GALGAS_templateReplacementListAST & in_mTemplateReplacementListAST,
                                                    const GALGAS_lexicalAttributeListAST & in_mLexicalAttributeListAST,
                                                    const GALGAS_lexicalStyleListAST & in_mLexicalStyleListAST,
                                                    const GALGAS_terminalDeclarationListAST & in_mTerminalDeclarationListAST,
                                                    const GALGAS_lexicalMessageDeclarationListAST & in_mLexicalMessageDeclarationListAST,
                                                    const GALGAS_lexicalListDeclarationListAST & in_mLexicalListDeclarationListAST,
                                                    const GALGAS_lexicalRuleListAST & in_mLexicalRuleListAST,
                                                    const GALGAS_indexingListAST & in_mIndexingListAST
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_mLexiqueComponentName (),
mProperty_mIsTemplate (),
mProperty_mTemplateDelimitorListAST (),
mProperty_mTemplateReplacementListAST (),
mProperty_mLexicalAttributeListAST (),
mProperty_mLexicalStyleListAST (),
mProperty_mTerminalDeclarationListAST (),
mProperty_mLexicalMessageDeclarationListAST (),
mProperty_mLexicalListDeclarationListAST (),
mProperty_mLexicalRuleListAST (),
mProperty_mIndexingListAST () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mIsTemplate = in_mIsTemplate ;
  mProperty_mTemplateDelimitorListAST = in_mTemplateDelimitorListAST ;
  mProperty_mTemplateReplacementListAST = in_mTemplateReplacementListAST ;
  mProperty_mLexicalAttributeListAST = in_mLexicalAttributeListAST ;
  mProperty_mLexicalStyleListAST = in_mLexicalStyleListAST ;
  mProperty_mTerminalDeclarationListAST = in_mTerminalDeclarationListAST ;
  mProperty_mLexicalMessageDeclarationListAST = in_mLexicalMessageDeclarationListAST ;
  mProperty_mLexicalListDeclarationListAST = in_mLexicalListDeclarationListAST ;
  mProperty_mLexicalRuleListAST = in_mLexicalRuleListAST ;
  mProperty_mIndexingListAST = in_mIndexingListAST ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexiqueComponentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentAST ;
}

void cPtr_lexiqueComponentAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@lexiqueComponentAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsTemplate.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTemplateDelimitorListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTemplateReplacementListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexicalAttributeListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexicalStyleListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTerminalDeclarationListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexicalMessageDeclarationListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexicalListDeclarationListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexicalRuleListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIndexingListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexiqueComponentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexiqueComponentAST (mProperty_isPredefined, mProperty_mLexiqueComponentName, mProperty_mIsTemplate, mProperty_mTemplateDelimitorListAST, mProperty_mTemplateReplacementListAST, mProperty_mLexicalAttributeListAST, mProperty_mLexicalStyleListAST, mProperty_mTerminalDeclarationListAST, mProperty_mLexicalMessageDeclarationListAST, mProperty_mLexicalListDeclarationListAST, mProperty_mLexicalRuleListAST, mProperty_mIndexingListAST COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexiqueComponentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentAST ("lexiqueComponentAST",
                                                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexiqueComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexiqueComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueComponentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentAST GALGAS_lexiqueComponentAST::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueComponentAST result ;
  const GALGAS_lexiqueComponentAST * p = (const GALGAS_lexiqueComponentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexiqueComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexiqueComponentAST_2D_weak::objectCompare (const GALGAS_lexiqueComponentAST_2D_weak & inOperand) const {
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

GALGAS_lexiqueComponentAST_2D_weak::GALGAS_lexiqueComponentAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentAST_2D_weak & GALGAS_lexiqueComponentAST_2D_weak::operator = (const GALGAS_lexiqueComponentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentAST_2D_weak::GALGAS_lexiqueComponentAST_2D_weak (const GALGAS_lexiqueComponentAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentAST_2D_weak GALGAS_lexiqueComponentAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_lexiqueComponentAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentAST GALGAS_lexiqueComponentAST_2D_weak::bang_lexiqueComponentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexiqueComponentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexiqueComponentAST) ;
      result = GALGAS_lexiqueComponentAST ((cPtr_lexiqueComponentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexiqueComponentAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueComponentAST_2D_weak ("lexiqueComponentAST-weak",
                                                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexiqueComponentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexiqueComponentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueComponentAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentAST_2D_weak GALGAS_lexiqueComponentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueComponentAST_2D_weak result ;
  const GALGAS_lexiqueComponentAST_2D_weak * p = (const GALGAS_lexiqueComponentAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexiqueComponentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueComponentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateLexiqueComponentAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_templateLexiqueComponentAST::cPtr_templateLexiqueComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mLexiqueComponentName (),
mProperty_mLexiqueSuperComponentName (),
mProperty_mTemplateDelimitorList (),
mProperty_mTemplateReplacementList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateLexiqueComponentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexiqueComponentName.printNonNullClassInstanceProperties ("mLexiqueComponentName") ;
    mProperty_mLexiqueSuperComponentName.printNonNullClassInstanceProperties ("mLexiqueSuperComponentName") ;
    mProperty_mTemplateDelimitorList.printNonNullClassInstanceProperties ("mTemplateDelimitorList") ;
    mProperty_mTemplateReplacementList.printNonNullClassInstanceProperties ("mTemplateReplacementList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_templateLexiqueComponentAST::objectCompare (const GALGAS_templateLexiqueComponentAST & inOperand) const {
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

GALGAS_templateLexiqueComponentAST::GALGAS_templateLexiqueComponentAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_templateLexiqueComponentAST GALGAS_templateLexiqueComponentAST::
init_21_isPredefined_21__21__21__21_ (const GALGAS_bool & in_isPredefined,
                                      const GALGAS_lstring & in_mLexiqueComponentName,
                                      const GALGAS_lstring & in_mLexiqueSuperComponentName,
                                      const GALGAS_templateDelimitorListAST & in_mTemplateDelimitorList,
                                      const GALGAS_templateReplacementListAST & in_mTemplateReplacementList,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_templateLexiqueComponentAST * object = nullptr ;
  macroMyNew (object, cPtr_templateLexiqueComponentAST (inCompiler COMMA_THERE)) ;
  object->templateLexiqueComponentAST_init_21_isPredefined_21__21__21__21_ (in_isPredefined, in_mLexiqueComponentName, in_mLexiqueSuperComponentName, in_mTemplateDelimitorList, in_mTemplateReplacementList, inCompiler) ;
  const GALGAS_templateLexiqueComponentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::
templateLexiqueComponentAST_init_21_isPredefined_21__21__21__21_ (const GALGAS_bool & in_isPredefined,
                                                                  const GALGAS_lstring & in_mLexiqueComponentName,
                                                                  const GALGAS_lstring & in_mLexiqueSuperComponentName,
                                                                  const GALGAS_templateDelimitorListAST & in_mTemplateDelimitorList,
                                                                  const GALGAS_templateReplacementListAST & in_mTemplateReplacementList,
                                                                  Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mLexiqueSuperComponentName = in_mLexiqueSuperComponentName ;
  mProperty_mTemplateDelimitorList = in_mTemplateDelimitorList ;
  mProperty_mTemplateReplacementList = in_mTemplateReplacementList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateLexiqueComponentAST::GALGAS_templateLexiqueComponentAST (const cPtr_templateLexiqueComponentAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLexiqueComponentAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_templateLexiqueComponentAST GALGAS_templateLexiqueComponentAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                                       const GALGAS_lstring & in_mLexiqueComponentName,
                                                                                       const GALGAS_lstring & in_mLexiqueSuperComponentName,
                                                                                       const GALGAS_templateDelimitorListAST & in_mTemplateDelimitorList,
                                                                                       const GALGAS_templateReplacementListAST & in_mTemplateReplacementList
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_templateLexiqueComponentAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateLexiqueComponentAST (in_isPredefined, in_mLexiqueComponentName, in_mLexiqueSuperComponentName, in_mTemplateDelimitorList, in_mTemplateReplacementList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateLexiqueComponentAST::readProperty_mLexiqueComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_templateLexiqueComponentAST * p = (cPtr_templateLexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLexiqueComponentAST) ;
    return p->mProperty_mLexiqueComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateLexiqueComponentAST::readProperty_mLexiqueSuperComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_templateLexiqueComponentAST * p = (cPtr_templateLexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLexiqueComponentAST) ;
    return p->mProperty_mLexiqueSuperComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorListAST GALGAS_templateLexiqueComponentAST::readProperty_mTemplateDelimitorList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateDelimitorListAST () ;
  }else{
    cPtr_templateLexiqueComponentAST * p = (cPtr_templateLexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLexiqueComponentAST) ;
    return p->mProperty_mTemplateDelimitorList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST GALGAS_templateLexiqueComponentAST::readProperty_mTemplateReplacementList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_templateReplacementListAST () ;
  }else{
    cPtr_templateLexiqueComponentAST * p = (cPtr_templateLexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLexiqueComponentAST) ;
    return p->mProperty_mTemplateReplacementList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateLexiqueComponentAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateLexiqueComponentAST::cPtr_templateLexiqueComponentAST (const GALGAS_bool & in_isPredefined,
                                                                    const GALGAS_lstring & in_mLexiqueComponentName,
                                                                    const GALGAS_lstring & in_mLexiqueSuperComponentName,
                                                                    const GALGAS_templateDelimitorListAST & in_mTemplateDelimitorList,
                                                                    const GALGAS_templateReplacementListAST & in_mTemplateReplacementList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_mLexiqueComponentName (),
mProperty_mLexiqueSuperComponentName (),
mProperty_mTemplateDelimitorList (),
mProperty_mTemplateReplacementList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mLexiqueSuperComponentName = in_mLexiqueSuperComponentName ;
  mProperty_mTemplateDelimitorList = in_mTemplateDelimitorList ;
  mProperty_mTemplateReplacementList = in_mTemplateReplacementList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateLexiqueComponentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLexiqueComponentAST ;
}

void cPtr_templateLexiqueComponentAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@templateLexiqueComponentAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueSuperComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTemplateDelimitorList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTemplateReplacementList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateLexiqueComponentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateLexiqueComponentAST (mProperty_isPredefined, mProperty_mLexiqueComponentName, mProperty_mLexiqueSuperComponentName, mProperty_mTemplateDelimitorList, mProperty_mTemplateReplacementList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @templateLexiqueComponentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLexiqueComponentAST ("templateLexiqueComponentAST",
                                                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateLexiqueComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLexiqueComponentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateLexiqueComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLexiqueComponentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateLexiqueComponentAST GALGAS_templateLexiqueComponentAST::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateLexiqueComponentAST result ;
  const GALGAS_templateLexiqueComponentAST * p = (const GALGAS_templateLexiqueComponentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateLexiqueComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLexiqueComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalImplicitRuleAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalImplicitRuleAST::cPtr_lexicalImplicitRuleAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRuleAST (inCompiler COMMA_THERE),
mProperty_mListName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalImplicitRuleAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractLexicalRuleAST::printNonNullClassInstanceProperties () ;
    mProperty_mListName.printNonNullClassInstanceProperties ("mListName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalImplicitRuleAST::objectCompare (const GALGAS_lexicalImplicitRuleAST & inOperand) const {
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

GALGAS_lexicalImplicitRuleAST::GALGAS_lexicalImplicitRuleAST (void) :
GALGAS_abstractLexicalRuleAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST GALGAS_lexicalImplicitRuleAST::
init_21_ (const GALGAS_lstring & in_mListName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalImplicitRuleAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalImplicitRuleAST (inCompiler COMMA_THERE)) ;
  object->lexicalImplicitRuleAST_init_21_ (in_mListName, inCompiler) ;
  const GALGAS_lexicalImplicitRuleAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalImplicitRuleAST::
lexicalImplicitRuleAST_init_21_ (const GALGAS_lstring & in_mListName,
                                 Compiler * /* inCompiler */) {
  mProperty_mListName = in_mListName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST::GALGAS_lexicalImplicitRuleAST (const cPtr_lexicalImplicitRuleAST * inSourcePtr) :
GALGAS_abstractLexicalRuleAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalImplicitRuleAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST GALGAS_lexicalImplicitRuleAST::class_func_new (const GALGAS_lstring & in_mListName
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_lexicalImplicitRuleAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalImplicitRuleAST (in_mListName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalImplicitRuleAST::readProperty_mListName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalImplicitRuleAST * p = (cPtr_lexicalImplicitRuleAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalImplicitRuleAST) ;
    return p->mProperty_mListName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalImplicitRuleAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalImplicitRuleAST::cPtr_lexicalImplicitRuleAST (const GALGAS_lstring & in_mListName
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRuleAST (THERE),
mProperty_mListName () {
  mProperty_mListName = in_mListName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalImplicitRuleAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ;
}

void cPtr_lexicalImplicitRuleAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalImplicitRuleAST:") ;
  mProperty_mListName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalImplicitRuleAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalImplicitRuleAST (mProperty_mListName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalImplicitRuleAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ("lexicalImplicitRuleAST",
                                                                              & kTypeDescriptor_GALGAS_abstractLexicalRuleAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalImplicitRuleAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalImplicitRuleAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalImplicitRuleAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalImplicitRuleAST GALGAS_lexicalImplicitRuleAST::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalImplicitRuleAST result ;
  const GALGAS_lexicalImplicitRuleAST * p = (const GALGAS_lexicalImplicitRuleAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalImplicitRuleAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalImplicitRuleAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalCharacterSetMatchAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterSetMatchAST::cPtr_lexicalCharacterSetMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mCharacterSetName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalCharacterSetMatchAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mCharacterSetName.printNonNullClassInstanceProperties ("mCharacterSetName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalCharacterSetMatchAST::objectCompare (const GALGAS_lexicalCharacterSetMatchAST & inOperand) const {
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

GALGAS_lexicalCharacterSetMatchAST::GALGAS_lexicalCharacterSetMatchAST (void) :
GALGAS_lexicalExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST GALGAS_lexicalCharacterSetMatchAST::
init_21_ (const GALGAS_lstring & in_mCharacterSetName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalCharacterSetMatchAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalCharacterSetMatchAST (inCompiler COMMA_THERE)) ;
  object->lexicalCharacterSetMatchAST_init_21_ (in_mCharacterSetName, inCompiler) ;
  const GALGAS_lexicalCharacterSetMatchAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterSetMatchAST::
lexicalCharacterSetMatchAST_init_21_ (const GALGAS_lstring & in_mCharacterSetName,
                                      Compiler * /* inCompiler */) {
  mProperty_mCharacterSetName = in_mCharacterSetName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST::GALGAS_lexicalCharacterSetMatchAST (const cPtr_lexicalCharacterSetMatchAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCharacterSetMatchAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST GALGAS_lexicalCharacterSetMatchAST::class_func_new (const GALGAS_lstring & in_mCharacterSetName
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterSetMatchAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalCharacterSetMatchAST (in_mCharacterSetName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalCharacterSetMatchAST::readProperty_mCharacterSetName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalCharacterSetMatchAST * p = (cPtr_lexicalCharacterSetMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterSetMatchAST) ;
    return p->mProperty_mCharacterSetName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalCharacterSetMatchAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterSetMatchAST::cPtr_lexicalCharacterSetMatchAST (const GALGAS_lstring & in_mCharacterSetName
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mProperty_mCharacterSetName () {
  mProperty_mCharacterSetName = in_mCharacterSetName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalCharacterSetMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ;
}

void cPtr_lexicalCharacterSetMatchAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalCharacterSetMatchAST:") ;
  mProperty_mCharacterSetName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalCharacterSetMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalCharacterSetMatchAST (mProperty_mCharacterSetName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalCharacterSetMatchAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ("lexicalCharacterSetMatchAST",
                                                                                   & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCharacterSetMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCharacterSetMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterSetMatchAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterSetMatchAST GALGAS_lexicalCharacterSetMatchAST::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterSetMatchAST result ;
  const GALGAS_lexicalCharacterSetMatchAST * p = (const GALGAS_lexicalCharacterSetMatchAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalCharacterSetMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterSetMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalCharacterMatchAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterMatchAST::cPtr_lexicalCharacterMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mCharacter () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalCharacterMatchAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mCharacter.printNonNullClassInstanceProperties ("mCharacter") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalCharacterMatchAST::objectCompare (const GALGAS_lexicalCharacterMatchAST & inOperand) const {
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

GALGAS_lexicalCharacterMatchAST::GALGAS_lexicalCharacterMatchAST (void) :
GALGAS_lexicalExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST GALGAS_lexicalCharacterMatchAST::
init_21_ (const GALGAS_lchar & in_mCharacter,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalCharacterMatchAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalCharacterMatchAST (inCompiler COMMA_THERE)) ;
  object->lexicalCharacterMatchAST_init_21_ (in_mCharacter, inCompiler) ;
  const GALGAS_lexicalCharacterMatchAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterMatchAST::
lexicalCharacterMatchAST_init_21_ (const GALGAS_lchar & in_mCharacter,
                                   Compiler * /* inCompiler */) {
  mProperty_mCharacter = in_mCharacter ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST::GALGAS_lexicalCharacterMatchAST (const cPtr_lexicalCharacterMatchAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCharacterMatchAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST GALGAS_lexicalCharacterMatchAST::class_func_new (const GALGAS_lchar & in_mCharacter
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterMatchAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalCharacterMatchAST (in_mCharacter COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalCharacterMatchAST::readProperty_mCharacter (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lchar () ;
  }else{
    cPtr_lexicalCharacterMatchAST * p = (cPtr_lexicalCharacterMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterMatchAST) ;
    return p->mProperty_mCharacter ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalCharacterMatchAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterMatchAST::cPtr_lexicalCharacterMatchAST (const GALGAS_lchar & in_mCharacter
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mProperty_mCharacter () {
  mProperty_mCharacter = in_mCharacter ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalCharacterMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ;
}

void cPtr_lexicalCharacterMatchAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalCharacterMatchAST:") ;
  mProperty_mCharacter.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalCharacterMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalCharacterMatchAST (mProperty_mCharacter COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalCharacterMatchAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ("lexicalCharacterMatchAST",
                                                                                & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCharacterMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCharacterMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterMatchAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterMatchAST GALGAS_lexicalCharacterMatchAST::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterMatchAST result ;
  const GALGAS_lexicalCharacterMatchAST * p = (const GALGAS_lexicalCharacterMatchAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalCharacterMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalCharacterIntervalMatchAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterIntervalMatchAST::cPtr_lexicalCharacterIntervalMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mLowerBound (),
mProperty_mUpperBound () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalCharacterIntervalMatchAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLowerBound.printNonNullClassInstanceProperties ("mLowerBound") ;
    mProperty_mUpperBound.printNonNullClassInstanceProperties ("mUpperBound") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalCharacterIntervalMatchAST::objectCompare (const GALGAS_lexicalCharacterIntervalMatchAST & inOperand) const {
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

GALGAS_lexicalCharacterIntervalMatchAST::GALGAS_lexicalCharacterIntervalMatchAST (void) :
GALGAS_lexicalExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST GALGAS_lexicalCharacterIntervalMatchAST::
init_21__21_ (const GALGAS_lchar & in_mLowerBound,
              const GALGAS_lchar & in_mUpperBound,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalCharacterIntervalMatchAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalCharacterIntervalMatchAST (inCompiler COMMA_THERE)) ;
  object->lexicalCharacterIntervalMatchAST_init_21__21_ (in_mLowerBound, in_mUpperBound, inCompiler) ;
  const GALGAS_lexicalCharacterIntervalMatchAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterIntervalMatchAST::
lexicalCharacterIntervalMatchAST_init_21__21_ (const GALGAS_lchar & in_mLowerBound,
                                               const GALGAS_lchar & in_mUpperBound,
                                               Compiler * /* inCompiler */) {
  mProperty_mLowerBound = in_mLowerBound ;
  mProperty_mUpperBound = in_mUpperBound ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST::GALGAS_lexicalCharacterIntervalMatchAST (const cPtr_lexicalCharacterIntervalMatchAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCharacterIntervalMatchAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST GALGAS_lexicalCharacterIntervalMatchAST::class_func_new (const GALGAS_lchar & in_mLowerBound,
                                                                                                 const GALGAS_lchar & in_mUpperBound
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterIntervalMatchAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalCharacterIntervalMatchAST (in_mLowerBound, in_mUpperBound COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalCharacterIntervalMatchAST::readProperty_mLowerBound (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lchar () ;
  }else{
    cPtr_lexicalCharacterIntervalMatchAST * p = (cPtr_lexicalCharacterIntervalMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterIntervalMatchAST) ;
    return p->mProperty_mLowerBound ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalCharacterIntervalMatchAST::readProperty_mUpperBound (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lchar () ;
  }else{
    cPtr_lexicalCharacterIntervalMatchAST * p = (cPtr_lexicalCharacterIntervalMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterIntervalMatchAST) ;
    return p->mProperty_mUpperBound ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalCharacterIntervalMatchAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterIntervalMatchAST::cPtr_lexicalCharacterIntervalMatchAST (const GALGAS_lchar & in_mLowerBound,
                                                                              const GALGAS_lchar & in_mUpperBound
                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mProperty_mLowerBound (),
mProperty_mUpperBound () {
  mProperty_mLowerBound = in_mLowerBound ;
  mProperty_mUpperBound = in_mUpperBound ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalCharacterIntervalMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ;
}

void cPtr_lexicalCharacterIntervalMatchAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalCharacterIntervalMatchAST:") ;
  mProperty_mLowerBound.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUpperBound.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalCharacterIntervalMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalCharacterIntervalMatchAST (mProperty_mLowerBound, mProperty_mUpperBound COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalCharacterIntervalMatchAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ("lexicalCharacterIntervalMatchAST",
                                                                                        & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCharacterIntervalMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCharacterIntervalMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterIntervalMatchAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST GALGAS_lexicalCharacterIntervalMatchAST::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterIntervalMatchAST result ;
  const GALGAS_lexicalCharacterIntervalMatchAST * p = (const GALGAS_lexicalCharacterIntervalMatchAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalCharacterIntervalMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterIntervalMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalStringMatchAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalStringMatchAST::cPtr_lexicalStringMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mString () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalStringMatchAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mString.printNonNullClassInstanceProperties ("mString") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalStringMatchAST::objectCompare (const GALGAS_lexicalStringMatchAST & inOperand) const {
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

GALGAS_lexicalStringMatchAST::GALGAS_lexicalStringMatchAST (void) :
GALGAS_lexicalExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexicalStringMatchAST GALGAS_lexicalStringMatchAST::
init_21_ (const GALGAS_lstring & in_mString,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalStringMatchAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalStringMatchAST (inCompiler COMMA_THERE)) ;
  object->lexicalStringMatchAST_init_21_ (in_mString, inCompiler) ;
  const GALGAS_lexicalStringMatchAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStringMatchAST::
lexicalStringMatchAST_init_21_ (const GALGAS_lstring & in_mString,
                                Compiler * /* inCompiler */) {
  mProperty_mString = in_mString ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST::GALGAS_lexicalStringMatchAST (const cPtr_lexicalStringMatchAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalStringMatchAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST GALGAS_lexicalStringMatchAST::class_func_new (const GALGAS_lstring & in_mString
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStringMatchAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalStringMatchAST (in_mString COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalStringMatchAST::readProperty_mString (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalStringMatchAST * p = (cPtr_lexicalStringMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringMatchAST) ;
    return p->mProperty_mString ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalStringMatchAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalStringMatchAST::cPtr_lexicalStringMatchAST (const GALGAS_lstring & in_mString
                                                        COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mProperty_mString () {
  mProperty_mString = in_mString ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalStringMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringMatchAST ;
}

void cPtr_lexicalStringMatchAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalStringMatchAST:") ;
  mProperty_mString.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalStringMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalStringMatchAST (mProperty_mString COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalStringMatchAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStringMatchAST ("lexicalStringMatchAST",
                                                                             & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalStringMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringMatchAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalStringMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalStringMatchAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST GALGAS_lexicalStringMatchAST::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStringMatchAST result ;
  const GALGAS_lexicalStringMatchAST * p = (const GALGAS_lexicalStringMatchAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalStringMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStringMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalStringNotMatchAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalStringNotMatchAST::cPtr_lexicalStringNotMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mString (),
mProperty_mErrorMessage () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalStringNotMatchAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mString.printNonNullClassInstanceProperties ("mString") ;
    mProperty_mErrorMessage.printNonNullClassInstanceProperties ("mErrorMessage") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalStringNotMatchAST::objectCompare (const GALGAS_lexicalStringNotMatchAST & inOperand) const {
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

GALGAS_lexicalStringNotMatchAST::GALGAS_lexicalStringNotMatchAST (void) :
GALGAS_lexicalExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST GALGAS_lexicalStringNotMatchAST::
init_21__21_ (const GALGAS_lstring & in_mString,
              const GALGAS_lstring & in_mErrorMessage,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalStringNotMatchAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalStringNotMatchAST (inCompiler COMMA_THERE)) ;
  object->lexicalStringNotMatchAST_init_21__21_ (in_mString, in_mErrorMessage, inCompiler) ;
  const GALGAS_lexicalStringNotMatchAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStringNotMatchAST::
lexicalStringNotMatchAST_init_21__21_ (const GALGAS_lstring & in_mString,
                                       const GALGAS_lstring & in_mErrorMessage,
                                       Compiler * /* inCompiler */) {
  mProperty_mString = in_mString ;
  mProperty_mErrorMessage = in_mErrorMessage ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST::GALGAS_lexicalStringNotMatchAST (const cPtr_lexicalStringNotMatchAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalStringNotMatchAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST GALGAS_lexicalStringNotMatchAST::class_func_new (const GALGAS_lstring & in_mString,
                                                                                 const GALGAS_lstring & in_mErrorMessage
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStringNotMatchAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalStringNotMatchAST (in_mString, in_mErrorMessage COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalStringNotMatchAST::readProperty_mString (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalStringNotMatchAST * p = (cPtr_lexicalStringNotMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringNotMatchAST) ;
    return p->mProperty_mString ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalStringNotMatchAST::readProperty_mErrorMessage (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalStringNotMatchAST * p = (cPtr_lexicalStringNotMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringNotMatchAST) ;
    return p->mProperty_mErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalStringNotMatchAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalStringNotMatchAST::cPtr_lexicalStringNotMatchAST (const GALGAS_lstring & in_mString,
                                                              const GALGAS_lstring & in_mErrorMessage
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mProperty_mString (),
mProperty_mErrorMessage () {
  mProperty_mString = in_mString ;
  mProperty_mErrorMessage = in_mErrorMessage ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalStringNotMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ;
}

void cPtr_lexicalStringNotMatchAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalStringNotMatchAST:") ;
  mProperty_mString.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mErrorMessage.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalStringNotMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalStringNotMatchAST (mProperty_mString, mProperty_mErrorMessage COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalStringNotMatchAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ("lexicalStringNotMatchAST",
                                                                                & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalStringNotMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalStringNotMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalStringNotMatchAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST GALGAS_lexicalStringNotMatchAST::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStringNotMatchAST result ;
  const GALGAS_lexicalStringNotMatchAST * p = (const GALGAS_lexicalStringNotMatchAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalStringNotMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStringNotMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalSendTerminalByDefaultAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalSendTerminalByDefaultAST::cPtr_lexicalSendTerminalByDefaultAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalSendDefaultActionAST (inCompiler COMMA_THERE),
mProperty_mDefaultSentTerminal () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalSendTerminalByDefaultAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalSendDefaultActionAST::printNonNullClassInstanceProperties () ;
    mProperty_mDefaultSentTerminal.printNonNullClassInstanceProperties ("mDefaultSentTerminal") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalSendTerminalByDefaultAST::objectCompare (const GALGAS_lexicalSendTerminalByDefaultAST & inOperand) const {
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

GALGAS_lexicalSendTerminalByDefaultAST::GALGAS_lexicalSendTerminalByDefaultAST (void) :
GALGAS_lexicalSendDefaultActionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST GALGAS_lexicalSendTerminalByDefaultAST::
init_21_ (const GALGAS_lstring & in_mDefaultSentTerminal,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalSendTerminalByDefaultAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalSendTerminalByDefaultAST (inCompiler COMMA_THERE)) ;
  object->lexicalSendTerminalByDefaultAST_init_21_ (in_mDefaultSentTerminal, inCompiler) ;
  const GALGAS_lexicalSendTerminalByDefaultAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSendTerminalByDefaultAST::
lexicalSendTerminalByDefaultAST_init_21_ (const GALGAS_lstring & in_mDefaultSentTerminal,
                                          Compiler * /* inCompiler */) {
  mProperty_mDefaultSentTerminal = in_mDefaultSentTerminal ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST::GALGAS_lexicalSendTerminalByDefaultAST (const cPtr_lexicalSendTerminalByDefaultAST * inSourcePtr) :
GALGAS_lexicalSendDefaultActionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalSendTerminalByDefaultAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST GALGAS_lexicalSendTerminalByDefaultAST::class_func_new (const GALGAS_lstring & in_mDefaultSentTerminal
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSendTerminalByDefaultAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalSendTerminalByDefaultAST (in_mDefaultSentTerminal COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalSendTerminalByDefaultAST::readProperty_mDefaultSentTerminal (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalSendTerminalByDefaultAST * p = (cPtr_lexicalSendTerminalByDefaultAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSendTerminalByDefaultAST) ;
    return p->mProperty_mDefaultSentTerminal ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalSendTerminalByDefaultAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalSendTerminalByDefaultAST::cPtr_lexicalSendTerminalByDefaultAST (const GALGAS_lstring & in_mDefaultSentTerminal
                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalSendDefaultActionAST (THERE),
mProperty_mDefaultSentTerminal () {
  mProperty_mDefaultSentTerminal = in_mDefaultSentTerminal ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalSendTerminalByDefaultAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ;
}

void cPtr_lexicalSendTerminalByDefaultAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalSendTerminalByDefaultAST:") ;
  mProperty_mDefaultSentTerminal.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalSendTerminalByDefaultAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalSendTerminalByDefaultAST (mProperty_mDefaultSentTerminal COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalSendTerminalByDefaultAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ("lexicalSendTerminalByDefaultAST",
                                                                                       & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSendTerminalByDefaultAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSendTerminalByDefaultAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSendTerminalByDefaultAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST GALGAS_lexicalSendTerminalByDefaultAST::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSendTerminalByDefaultAST result ;
  const GALGAS_lexicalSendTerminalByDefaultAST * p = (const GALGAS_lexicalSendTerminalByDefaultAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalSendTerminalByDefaultAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSendTerminalByDefaultAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalErrorByDefaultAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalErrorByDefaultAST::cPtr_lexicalErrorByDefaultAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalSendDefaultActionAST (inCompiler COMMA_THERE),
mProperty_mDefaultErrorMessageName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalErrorByDefaultAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalSendDefaultActionAST::printNonNullClassInstanceProperties () ;
    mProperty_mDefaultErrorMessageName.printNonNullClassInstanceProperties ("mDefaultErrorMessageName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalErrorByDefaultAST::objectCompare (const GALGAS_lexicalErrorByDefaultAST & inOperand) const {
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

GALGAS_lexicalErrorByDefaultAST::GALGAS_lexicalErrorByDefaultAST (void) :
GALGAS_lexicalSendDefaultActionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST GALGAS_lexicalErrorByDefaultAST::
init_21_ (const GALGAS_lstring & in_mDefaultErrorMessageName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalErrorByDefaultAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalErrorByDefaultAST (inCompiler COMMA_THERE)) ;
  object->lexicalErrorByDefaultAST_init_21_ (in_mDefaultErrorMessageName, inCompiler) ;
  const GALGAS_lexicalErrorByDefaultAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalErrorByDefaultAST::
lexicalErrorByDefaultAST_init_21_ (const GALGAS_lstring & in_mDefaultErrorMessageName,
                                   Compiler * /* inCompiler */) {
  mProperty_mDefaultErrorMessageName = in_mDefaultErrorMessageName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST::GALGAS_lexicalErrorByDefaultAST (const cPtr_lexicalErrorByDefaultAST * inSourcePtr) :
GALGAS_lexicalSendDefaultActionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalErrorByDefaultAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST GALGAS_lexicalErrorByDefaultAST::class_func_new (const GALGAS_lstring & in_mDefaultErrorMessageName
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_lexicalErrorByDefaultAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalErrorByDefaultAST (in_mDefaultErrorMessageName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalErrorByDefaultAST::readProperty_mDefaultErrorMessageName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalErrorByDefaultAST * p = (cPtr_lexicalErrorByDefaultAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalErrorByDefaultAST) ;
    return p->mProperty_mDefaultErrorMessageName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalErrorByDefaultAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalErrorByDefaultAST::cPtr_lexicalErrorByDefaultAST (const GALGAS_lstring & in_mDefaultErrorMessageName
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalSendDefaultActionAST (THERE),
mProperty_mDefaultErrorMessageName () {
  mProperty_mDefaultErrorMessageName = in_mDefaultErrorMessageName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalErrorByDefaultAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ;
}

void cPtr_lexicalErrorByDefaultAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalErrorByDefaultAST:") ;
  mProperty_mDefaultErrorMessageName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalErrorByDefaultAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalErrorByDefaultAST (mProperty_mDefaultErrorMessageName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalErrorByDefaultAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ("lexicalErrorByDefaultAST",
                                                                                & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalErrorByDefaultAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalErrorByDefaultAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalErrorByDefaultAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST GALGAS_lexicalErrorByDefaultAST::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalErrorByDefaultAST result ;
  const GALGAS_lexicalErrorByDefaultAST * p = (const GALGAS_lexicalErrorByDefaultAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalErrorByDefaultAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalErrorByDefaultAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalAttributeInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalAttributeInputArgumentAST::cPtr_lexicalAttributeInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (inCompiler COMMA_THERE),
mProperty_mAttributeName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalAttributeInputArgumentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST::printNonNullClassInstanceProperties () ;
    mProperty_mAttributeName.printNonNullClassInstanceProperties ("mAttributeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalAttributeInputArgumentAST::objectCompare (const GALGAS_lexicalAttributeInputArgumentAST & inOperand) const {
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

GALGAS_lexicalAttributeInputArgumentAST::GALGAS_lexicalAttributeInputArgumentAST (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST GALGAS_lexicalAttributeInputArgumentAST::
init_21_ (const GALGAS_lstring & in_mAttributeName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalAttributeInputArgumentAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalAttributeInputArgumentAST (inCompiler COMMA_THERE)) ;
  object->lexicalAttributeInputArgumentAST_init_21_ (in_mAttributeName, inCompiler) ;
  const GALGAS_lexicalAttributeInputArgumentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputArgumentAST::
lexicalAttributeInputArgumentAST_init_21_ (const GALGAS_lstring & in_mAttributeName,
                                           Compiler * /* inCompiler */) {
  mProperty_mAttributeName = in_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST::GALGAS_lexicalAttributeInputArgumentAST (const cPtr_lexicalAttributeInputArgumentAST * inSourcePtr) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalAttributeInputArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST GALGAS_lexicalAttributeInputArgumentAST::class_func_new (const GALGAS_lstring & in_mAttributeName
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputArgumentAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalAttributeInputArgumentAST (in_mAttributeName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalAttributeInputArgumentAST::readProperty_mAttributeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalAttributeInputArgumentAST * p = (cPtr_lexicalAttributeInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalAttributeInputArgumentAST) ;
    return p->mProperty_mAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalAttributeInputArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalAttributeInputArgumentAST::cPtr_lexicalAttributeInputArgumentAST (const GALGAS_lstring & in_mAttributeName
                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (THERE),
mProperty_mAttributeName () {
  mProperty_mAttributeName = in_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalAttributeInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ;
}

void cPtr_lexicalAttributeInputArgumentAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalAttributeInputArgumentAST:") ;
  mProperty_mAttributeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalAttributeInputArgumentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalAttributeInputArgumentAST (mProperty_mAttributeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalAttributeInputArgumentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ("lexicalAttributeInputArgumentAST",
                                                                                        & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalAttributeInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalAttributeInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalAttributeInputArgumentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST GALGAS_lexicalAttributeInputArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputArgumentAST result ;
  const GALGAS_lexicalAttributeInputArgumentAST * p = (const GALGAS_lexicalAttributeInputArgumentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalAttributeInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalCharacterInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterInputArgumentAST::cPtr_lexicalCharacterInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (inCompiler COMMA_THERE),
mProperty_mCharacter () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalCharacterInputArgumentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST::printNonNullClassInstanceProperties () ;
    mProperty_mCharacter.printNonNullClassInstanceProperties ("mCharacter") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalCharacterInputArgumentAST::objectCompare (const GALGAS_lexicalCharacterInputArgumentAST & inOperand) const {
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

GALGAS_lexicalCharacterInputArgumentAST::GALGAS_lexicalCharacterInputArgumentAST (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST GALGAS_lexicalCharacterInputArgumentAST::
init_21_ (const GALGAS_lchar & in_mCharacter,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalCharacterInputArgumentAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalCharacterInputArgumentAST (inCompiler COMMA_THERE)) ;
  object->lexicalCharacterInputArgumentAST_init_21_ (in_mCharacter, inCompiler) ;
  const GALGAS_lexicalCharacterInputArgumentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterInputArgumentAST::
lexicalCharacterInputArgumentAST_init_21_ (const GALGAS_lchar & in_mCharacter,
                                           Compiler * /* inCompiler */) {
  mProperty_mCharacter = in_mCharacter ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST::GALGAS_lexicalCharacterInputArgumentAST (const cPtr_lexicalCharacterInputArgumentAST * inSourcePtr) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCharacterInputArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST GALGAS_lexicalCharacterInputArgumentAST::class_func_new (const GALGAS_lchar & in_mCharacter
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterInputArgumentAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalCharacterInputArgumentAST (in_mCharacter COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalCharacterInputArgumentAST::readProperty_mCharacter (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lchar () ;
  }else{
    cPtr_lexicalCharacterInputArgumentAST * p = (cPtr_lexicalCharacterInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterInputArgumentAST) ;
    return p->mProperty_mCharacter ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalCharacterInputArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterInputArgumentAST::cPtr_lexicalCharacterInputArgumentAST (const GALGAS_lchar & in_mCharacter
                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (THERE),
mProperty_mCharacter () {
  mProperty_mCharacter = in_mCharacter ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalCharacterInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST ;
}

void cPtr_lexicalCharacterInputArgumentAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalCharacterInputArgumentAST:") ;
  mProperty_mCharacter.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalCharacterInputArgumentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalCharacterInputArgumentAST (mProperty_mCharacter COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalCharacterInputArgumentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST ("lexicalCharacterInputArgumentAST",
                                                                                        & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCharacterInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCharacterInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterInputArgumentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST GALGAS_lexicalCharacterInputArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterInputArgumentAST result ;
  const GALGAS_lexicalCharacterInputArgumentAST * p = (const GALGAS_lexicalCharacterInputArgumentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalCharacterInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalUnsignedInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalUnsignedInputArgumentAST::cPtr_lexicalUnsignedInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (inCompiler COMMA_THERE),
mProperty_mUnsigned () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalUnsignedInputArgumentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST::printNonNullClassInstanceProperties () ;
    mProperty_mUnsigned.printNonNullClassInstanceProperties ("mUnsigned") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalUnsignedInputArgumentAST::objectCompare (const GALGAS_lexicalUnsignedInputArgumentAST & inOperand) const {
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

GALGAS_lexicalUnsignedInputArgumentAST::GALGAS_lexicalUnsignedInputArgumentAST (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexicalUnsignedInputArgumentAST GALGAS_lexicalUnsignedInputArgumentAST::
init_21_ (const GALGAS_lbigint & in_mUnsigned,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalUnsignedInputArgumentAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalUnsignedInputArgumentAST (inCompiler COMMA_THERE)) ;
  object->lexicalUnsignedInputArgumentAST_init_21_ (in_mUnsigned, inCompiler) ;
  const GALGAS_lexicalUnsignedInputArgumentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalUnsignedInputArgumentAST::
lexicalUnsignedInputArgumentAST_init_21_ (const GALGAS_lbigint & in_mUnsigned,
                                          Compiler * /* inCompiler */) {
  mProperty_mUnsigned = in_mUnsigned ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalUnsignedInputArgumentAST::GALGAS_lexicalUnsignedInputArgumentAST (const cPtr_lexicalUnsignedInputArgumentAST * inSourcePtr) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalUnsignedInputArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalUnsignedInputArgumentAST GALGAS_lexicalUnsignedInputArgumentAST::class_func_new (const GALGAS_lbigint & in_mUnsigned
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_lexicalUnsignedInputArgumentAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalUnsignedInputArgumentAST (in_mUnsigned COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lbigint GALGAS_lexicalUnsignedInputArgumentAST::readProperty_mUnsigned (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lbigint () ;
  }else{
    cPtr_lexicalUnsignedInputArgumentAST * p = (cPtr_lexicalUnsignedInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalUnsignedInputArgumentAST) ;
    return p->mProperty_mUnsigned ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalUnsignedInputArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalUnsignedInputArgumentAST::cPtr_lexicalUnsignedInputArgumentAST (const GALGAS_lbigint & in_mUnsigned
                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (THERE),
mProperty_mUnsigned () {
  mProperty_mUnsigned = in_mUnsigned ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalUnsignedInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST ;
}

void cPtr_lexicalUnsignedInputArgumentAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalUnsignedInputArgumentAST:") ;
  mProperty_mUnsigned.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalUnsignedInputArgumentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalUnsignedInputArgumentAST (mProperty_mUnsigned COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalUnsignedInputArgumentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST ("lexicalUnsignedInputArgumentAST",
                                                                                       & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalUnsignedInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalUnsignedInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalUnsignedInputArgumentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalUnsignedInputArgumentAST GALGAS_lexicalUnsignedInputArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalUnsignedInputArgumentAST result ;
  const GALGAS_lexicalUnsignedInputArgumentAST * p = (const GALGAS_lexicalUnsignedInputArgumentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalUnsignedInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalUnsignedInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalFunctionInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalFunctionInputArgumentAST::cPtr_lexicalFunctionInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mFunctionActualArgumentList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalFunctionInputArgumentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mFunctionActualArgumentList.printNonNullClassInstanceProperties ("mFunctionActualArgumentList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalFunctionInputArgumentAST::objectCompare (const GALGAS_lexicalFunctionInputArgumentAST & inOperand) const {
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

GALGAS_lexicalFunctionInputArgumentAST::GALGAS_lexicalFunctionInputArgumentAST (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexicalFunctionInputArgumentAST GALGAS_lexicalFunctionInputArgumentAST::
init_21__21_ (const GALGAS_lstring & in_mFunctionName,
              const GALGAS_lexicalFunctionCallActualArgumentListAST & in_mFunctionActualArgumentList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalFunctionInputArgumentAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalFunctionInputArgumentAST (inCompiler COMMA_THERE)) ;
  object->lexicalFunctionInputArgumentAST_init_21__21_ (in_mFunctionName, in_mFunctionActualArgumentList, inCompiler) ;
  const GALGAS_lexicalFunctionInputArgumentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFunctionInputArgumentAST::
lexicalFunctionInputArgumentAST_init_21__21_ (const GALGAS_lstring & in_mFunctionName,
                                              const GALGAS_lexicalFunctionCallActualArgumentListAST & in_mFunctionActualArgumentList,
                                              Compiler * /* inCompiler */) {
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFunctionActualArgumentList = in_mFunctionActualArgumentList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionInputArgumentAST::GALGAS_lexicalFunctionInputArgumentAST (const cPtr_lexicalFunctionInputArgumentAST * inSourcePtr) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalFunctionInputArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionInputArgumentAST GALGAS_lexicalFunctionInputArgumentAST::class_func_new (const GALGAS_lstring & in_mFunctionName,
                                                                                               const GALGAS_lexicalFunctionCallActualArgumentListAST & in_mFunctionActualArgumentList
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionInputArgumentAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalFunctionInputArgumentAST (in_mFunctionName, in_mFunctionActualArgumentList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalFunctionInputArgumentAST::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalFunctionInputArgumentAST * p = (cPtr_lexicalFunctionInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionInputArgumentAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionInputArgumentAST::readProperty_mFunctionActualArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lexicalFunctionCallActualArgumentListAST () ;
  }else{
    cPtr_lexicalFunctionInputArgumentAST * p = (cPtr_lexicalFunctionInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionInputArgumentAST) ;
    return p->mProperty_mFunctionActualArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalFunctionInputArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalFunctionInputArgumentAST::cPtr_lexicalFunctionInputArgumentAST (const GALGAS_lstring & in_mFunctionName,
                                                                            const GALGAS_lexicalFunctionCallActualArgumentListAST & in_mFunctionActualArgumentList
                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (THERE),
mProperty_mFunctionName (),
mProperty_mFunctionActualArgumentList () {
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFunctionActualArgumentList = in_mFunctionActualArgumentList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalFunctionInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST ;
}

void cPtr_lexicalFunctionInputArgumentAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalFunctionInputArgumentAST:") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionActualArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalFunctionInputArgumentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalFunctionInputArgumentAST (mProperty_mFunctionName, mProperty_mFunctionActualArgumentList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalFunctionInputArgumentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST ("lexicalFunctionInputArgumentAST",
                                                                                       & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionInputArgumentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionInputArgumentAST GALGAS_lexicalFunctionInputArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionInputArgumentAST result ;
  const GALGAS_lexicalFunctionInputArgumentAST * p = (const GALGAS_lexicalFunctionInputArgumentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalFunctionInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

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
mProperty_mUnicodeTestFunctions () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueAnalysisContext::~ GALGAS_lexiqueAnalysisContext (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_lexiqueAnalysisContext GALGAS_lexiqueAnalysisContext::init_21__21__21__21__21__21__21__21__21__21__21__21_ (const GALGAS_string & in_mLexiqueName,
                                                                                                                   const GALGAS_lexicalRoutineMap & in_mLexicalRoutineMessageMap,
                                                                                                                   const GALGAS_lexicalFunctionMap & in_mLexicalFunctionMap,
                                                                                                                   const GALGAS_lexicalMessageMap & in_mLexicalMessageMap,
                                                                                                                   const GALGAS_terminalMap & in_mTerminalMap,
                                                                                                                   const GALGAS_terminalList & in_mTerminalList,
                                                                                                                   const GALGAS_lexicalAttributeMap & in_mLexicalAttributeMap,
                                                                                                                   const GALGAS_lexicalExplicitTokenListMapMap & in_mLexicalTokenListMap,
                                                                                                                   const GALGAS_stringset & in_mUnicodeStringToGenerate,
                                                                                                                   const GALGAS_templateDelimitorList & in_mTemplateDelimitorList,
                                                                                                                   const GALGAS_styleMap & in_mStyleMap,
                                                                                                                   const GALGAS_stringset & in_mUnicodeTestFunctions,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexiqueAnalysisContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexiqueName = in_mLexiqueName ;
  result.mProperty_mLexicalRoutineMessageMap = in_mLexicalRoutineMessageMap ;
  result.mProperty_mLexicalFunctionMap = in_mLexicalFunctionMap ;
  result.mProperty_mLexicalMessageMap = in_mLexicalMessageMap ;
  result.mProperty_mTerminalMap = in_mTerminalMap ;
  result.mProperty_mTerminalList = in_mTerminalList ;
  result.mProperty_mLexicalAttributeMap = in_mLexicalAttributeMap ;
  result.mProperty_mLexicalTokenListMap = in_mLexicalTokenListMap ;
  result.mProperty_mUnicodeStringToGenerate = in_mUnicodeStringToGenerate ;
  result.mProperty_mTemplateDelimitorList = in_mTemplateDelimitorList ;
  result.mProperty_mStyleMap = in_mStyleMap ;
  result.mProperty_mUnicodeTestFunctions = in_mUnicodeTestFunctions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexiqueAnalysisContext::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

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
mProperty_mUnicodeTestFunctions (inOperand11) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueAnalysisContext GALGAS_lexiqueAnalysisContext::class_func_new (const GALGAS_string & in_mLexiqueName,
                                                                             const GALGAS_lexicalRoutineMap & in_mLexicalRoutineMessageMap,
                                                                             const GALGAS_lexicalFunctionMap & in_mLexicalFunctionMap,
                                                                             const GALGAS_lexicalMessageMap & in_mLexicalMessageMap,
                                                                             const GALGAS_terminalMap & in_mTerminalMap,
                                                                             const GALGAS_terminalList & in_mTerminalList,
                                                                             const GALGAS_lexicalAttributeMap & in_mLexicalAttributeMap,
                                                                             const GALGAS_lexicalExplicitTokenListMapMap & in_mLexicalTokenListMap,
                                                                             const GALGAS_stringset & in_mUnicodeStringToGenerate,
                                                                             const GALGAS_templateDelimitorList & in_mTemplateDelimitorList,
                                                                             const GALGAS_styleMap & in_mStyleMap,
                                                                             const GALGAS_stringset & in_mUnicodeTestFunctions,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexiqueAnalysisContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexiqueName = in_mLexiqueName ;
  result.mProperty_mLexicalRoutineMessageMap = in_mLexicalRoutineMessageMap ;
  result.mProperty_mLexicalFunctionMap = in_mLexicalFunctionMap ;
  result.mProperty_mLexicalMessageMap = in_mLexicalMessageMap ;
  result.mProperty_mTerminalMap = in_mTerminalMap ;
  result.mProperty_mTerminalList = in_mTerminalList ;
  result.mProperty_mLexicalAttributeMap = in_mLexicalAttributeMap ;
  result.mProperty_mLexicalTokenListMap = in_mLexicalTokenListMap ;
  result.mProperty_mUnicodeStringToGenerate = in_mUnicodeStringToGenerate ;
  result.mProperty_mTemplateDelimitorList = in_mTemplateDelimitorList ;
  result.mProperty_mStyleMap = in_mStyleMap ;
  result.mProperty_mUnicodeTestFunctions = in_mUnicodeTestFunctions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_lexiqueAnalysisContext::isValid (void) const {
  return mProperty_mLexiqueName.isValid () && mProperty_mLexicalRoutineMessageMap.isValid () && mProperty_mLexicalFunctionMap.isValid () && mProperty_mLexicalMessageMap.isValid () && mProperty_mTerminalMap.isValid () && mProperty_mTerminalList.isValid () && mProperty_mLexicalAttributeMap.isValid () && mProperty_mLexicalTokenListMap.isValid () && mProperty_mUnicodeStringToGenerate.isValid () && mProperty_mTemplateDelimitorList.isValid () && mProperty_mStyleMap.isValid () && mProperty_mUnicodeTestFunctions.isValid () ;
}

//--------------------------------------------------------------------------------------------------

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
  mProperty_mUnicodeTestFunctions.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexiqueAnalysisContext::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexiqueAnalysisContext:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalRoutineMessageMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalFunctionMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalMessageMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTerminalMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTerminalList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalAttributeMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalTokenListMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUnicodeStringToGenerate.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTemplateDelimitorList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStyleMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUnicodeTestFunctions.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexiqueAnalysisContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueAnalysisContext ("lexiqueAnalysisContext",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexiqueAnalysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueAnalysisContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexiqueAnalysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueAnalysisContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueAnalysisContext GALGAS_lexiqueAnalysisContext::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueAnalysisContext result ;
  const GALGAS_lexiqueAnalysisContext * p = (const GALGAS_lexiqueAnalysisContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexiqueAnalysisContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueAnalysisContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalDropInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalDropInstructionAST::cPtr_lexicalDropInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mTerminalName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalDropInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTerminalName.printNonNullClassInstanceProperties ("mTerminalName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalDropInstructionAST::objectCompare (const GALGAS_lexicalDropInstructionAST & inOperand) const {
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

GALGAS_lexicalDropInstructionAST::GALGAS_lexicalDropInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexicalDropInstructionAST GALGAS_lexicalDropInstructionAST::
init_21_ (const GALGAS_lstring & in_mTerminalName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalDropInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalDropInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalDropInstructionAST_init_21_ (in_mTerminalName, inCompiler) ;
  const GALGAS_lexicalDropInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalDropInstructionAST::
lexicalDropInstructionAST_init_21_ (const GALGAS_lstring & in_mTerminalName,
                                    Compiler * /* inCompiler */) {
  mProperty_mTerminalName = in_mTerminalName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalDropInstructionAST::GALGAS_lexicalDropInstructionAST (const cPtr_lexicalDropInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalDropInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalDropInstructionAST GALGAS_lexicalDropInstructionAST::class_func_new (const GALGAS_lstring & in_mTerminalName
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_lexicalDropInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalDropInstructionAST (in_mTerminalName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalDropInstructionAST::readProperty_mTerminalName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalDropInstructionAST * p = (cPtr_lexicalDropInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalDropInstructionAST) ;
    return p->mProperty_mTerminalName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalDropInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalDropInstructionAST::cPtr_lexicalDropInstructionAST (const GALGAS_lstring & in_mTerminalName
                                                                COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mTerminalName () {
  mProperty_mTerminalName = in_mTerminalName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalDropInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalDropInstructionAST ;
}

void cPtr_lexicalDropInstructionAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalDropInstructionAST:") ;
  mProperty_mTerminalName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalDropInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalDropInstructionAST (mProperty_mTerminalName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalDropInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalDropInstructionAST ("lexicalDropInstructionAST",
                                                                                 & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalDropInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalDropInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalDropInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalDropInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalDropInstructionAST GALGAS_lexicalDropInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalDropInstructionAST result ;
  const GALGAS_lexicalDropInstructionAST * p = (const GALGAS_lexicalDropInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalDropInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalDropInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalErrorInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalErrorInstructionAST::cPtr_lexicalErrorInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mErrorMessageName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalErrorInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mErrorMessageName.printNonNullClassInstanceProperties ("mErrorMessageName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalErrorInstructionAST::objectCompare (const GALGAS_lexicalErrorInstructionAST & inOperand) const {
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

GALGAS_lexicalErrorInstructionAST::GALGAS_lexicalErrorInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexicalErrorInstructionAST GALGAS_lexicalErrorInstructionAST::
init_21_ (const GALGAS_lstring & in_mErrorMessageName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalErrorInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalErrorInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalErrorInstructionAST_init_21_ (in_mErrorMessageName, inCompiler) ;
  const GALGAS_lexicalErrorInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalErrorInstructionAST::
lexicalErrorInstructionAST_init_21_ (const GALGAS_lstring & in_mErrorMessageName,
                                     Compiler * /* inCompiler */) {
  mProperty_mErrorMessageName = in_mErrorMessageName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorInstructionAST::GALGAS_lexicalErrorInstructionAST (const cPtr_lexicalErrorInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalErrorInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorInstructionAST GALGAS_lexicalErrorInstructionAST::class_func_new (const GALGAS_lstring & in_mErrorMessageName
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_lexicalErrorInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalErrorInstructionAST (in_mErrorMessageName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalErrorInstructionAST::readProperty_mErrorMessageName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalErrorInstructionAST * p = (cPtr_lexicalErrorInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalErrorInstructionAST) ;
    return p->mProperty_mErrorMessageName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalErrorInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalErrorInstructionAST::cPtr_lexicalErrorInstructionAST (const GALGAS_lstring & in_mErrorMessageName
                                                                  COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mErrorMessageName () {
  mProperty_mErrorMessageName = in_mErrorMessageName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalErrorInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorInstructionAST ;
}

void cPtr_lexicalErrorInstructionAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalErrorInstructionAST:") ;
  mProperty_mErrorMessageName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalErrorInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalErrorInstructionAST (mProperty_mErrorMessageName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalErrorInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalErrorInstructionAST ("lexicalErrorInstructionAST",
                                                                                  & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalErrorInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalErrorInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalErrorInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorInstructionAST GALGAS_lexicalErrorInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalErrorInstructionAST result ;
  const GALGAS_lexicalErrorInstructionAST * p = (const GALGAS_lexicalErrorInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalErrorInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalErrorInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalRewindInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalRewindInstructionAST::cPtr_lexicalRewindInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mLexicalTagName (),
mProperty_mTerminalName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalRewindInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexicalTagName.printNonNullClassInstanceProperties ("mLexicalTagName") ;
    mProperty_mTerminalName.printNonNullClassInstanceProperties ("mTerminalName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalRewindInstructionAST::objectCompare (const GALGAS_lexicalRewindInstructionAST & inOperand) const {
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

GALGAS_lexicalRewindInstructionAST::GALGAS_lexicalRewindInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST GALGAS_lexicalRewindInstructionAST::
init_21__21_ (const GALGAS_lstring & in_mLexicalTagName,
              const GALGAS_lstring & in_mTerminalName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalRewindInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalRewindInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalRewindInstructionAST_init_21__21_ (in_mLexicalTagName, in_mTerminalName, inCompiler) ;
  const GALGAS_lexicalRewindInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRewindInstructionAST::
lexicalRewindInstructionAST_init_21__21_ (const GALGAS_lstring & in_mLexicalTagName,
                                          const GALGAS_lstring & in_mTerminalName,
                                          Compiler * /* inCompiler */) {
  mProperty_mLexicalTagName = in_mLexicalTagName ;
  mProperty_mTerminalName = in_mTerminalName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST::GALGAS_lexicalRewindInstructionAST (const cPtr_lexicalRewindInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalRewindInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST GALGAS_lexicalRewindInstructionAST::class_func_new (const GALGAS_lstring & in_mLexicalTagName,
                                                                                       const GALGAS_lstring & in_mTerminalName
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRewindInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalRewindInstructionAST (in_mLexicalTagName, in_mTerminalName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalRewindInstructionAST::readProperty_mLexicalTagName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalRewindInstructionAST * p = (cPtr_lexicalRewindInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRewindInstructionAST) ;
    return p->mProperty_mLexicalTagName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalRewindInstructionAST::readProperty_mTerminalName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalRewindInstructionAST * p = (cPtr_lexicalRewindInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRewindInstructionAST) ;
    return p->mProperty_mTerminalName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalRewindInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalRewindInstructionAST::cPtr_lexicalRewindInstructionAST (const GALGAS_lstring & in_mLexicalTagName,
                                                                    const GALGAS_lstring & in_mTerminalName
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mLexicalTagName (),
mProperty_mTerminalName () {
  mProperty_mLexicalTagName = in_mLexicalTagName ;
  mProperty_mTerminalName = in_mTerminalName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalRewindInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRewindInstructionAST ;
}

void cPtr_lexicalRewindInstructionAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalRewindInstructionAST:") ;
  mProperty_mLexicalTagName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTerminalName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalRewindInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalRewindInstructionAST (mProperty_mLexicalTagName, mProperty_mTerminalName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalRewindInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRewindInstructionAST ("lexicalRewindInstructionAST",
                                                                                   & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRewindInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRewindInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRewindInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRewindInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST GALGAS_lexicalRewindInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRewindInstructionAST result ;
  const GALGAS_lexicalRewindInstructionAST * p = (const GALGAS_lexicalRewindInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalRewindInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRewindInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalAttributeInputOutputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalAttributeInputOutputArgumentAST::cPtr_lexicalAttributeInputOutputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRoutineActualArgumentAST (inCompiler COMMA_THERE),
mProperty_mAttributeName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalAttributeInputOutputArgumentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractLexicalRoutineActualArgumentAST::printNonNullClassInstanceProperties () ;
    mProperty_mAttributeName.printNonNullClassInstanceProperties ("mAttributeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalAttributeInputOutputArgumentAST::objectCompare (const GALGAS_lexicalAttributeInputOutputArgumentAST & inOperand) const {
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

GALGAS_lexicalAttributeInputOutputArgumentAST::GALGAS_lexicalAttributeInputOutputArgumentAST (void) :
GALGAS_abstractLexicalRoutineActualArgumentAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST GALGAS_lexicalAttributeInputOutputArgumentAST::
init_21__21_ (const GALGAS_location & in_mActualPassingModeLocation,
              const GALGAS_lstring & in_mAttributeName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalAttributeInputOutputArgumentAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalAttributeInputOutputArgumentAST (inCompiler COMMA_THERE)) ;
  object->lexicalAttributeInputOutputArgumentAST_init_21__21_ (in_mActualPassingModeLocation, in_mAttributeName, inCompiler) ;
  const GALGAS_lexicalAttributeInputOutputArgumentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputOutputArgumentAST::
lexicalAttributeInputOutputArgumentAST_init_21__21_ (const GALGAS_location & in_mActualPassingModeLocation,
                                                     const GALGAS_lstring & in_mAttributeName,
                                                     Compiler * /* inCompiler */) {
  mProperty_mActualPassingModeLocation = in_mActualPassingModeLocation ;
  mProperty_mAttributeName = in_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST::GALGAS_lexicalAttributeInputOutputArgumentAST (const cPtr_lexicalAttributeInputOutputArgumentAST * inSourcePtr) :
GALGAS_abstractLexicalRoutineActualArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalAttributeInputOutputArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST GALGAS_lexicalAttributeInputOutputArgumentAST::class_func_new (const GALGAS_location & in_mActualPassingModeLocation,
                                                                                                             const GALGAS_lstring & in_mAttributeName
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputOutputArgumentAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalAttributeInputOutputArgumentAST (in_mActualPassingModeLocation, in_mAttributeName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalAttributeInputOutputArgumentAST::readProperty_mAttributeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalAttributeInputOutputArgumentAST * p = (cPtr_lexicalAttributeInputOutputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalAttributeInputOutputArgumentAST) ;
    return p->mProperty_mAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalAttributeInputOutputArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalAttributeInputOutputArgumentAST::cPtr_lexicalAttributeInputOutputArgumentAST (const GALGAS_location & in_mActualPassingModeLocation,
                                                                                          const GALGAS_lstring & in_mAttributeName
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRoutineActualArgumentAST (in_mActualPassingModeLocation COMMA_THERE),
mProperty_mAttributeName () {
  mProperty_mActualPassingModeLocation = in_mActualPassingModeLocation ;
  mProperty_mAttributeName = in_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalAttributeInputOutputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST ;
}

void cPtr_lexicalAttributeInputOutputArgumentAST::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalAttributeInputOutputArgumentAST:") ;
  mProperty_mActualPassingModeLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAttributeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalAttributeInputOutputArgumentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalAttributeInputOutputArgumentAST (mProperty_mActualPassingModeLocation, mProperty_mAttributeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalAttributeInputOutputArgumentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST ("lexicalAttributeInputOutputArgumentAST",
                                                                                              & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalAttributeInputOutputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalAttributeInputOutputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalAttributeInputOutputArgumentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST GALGAS_lexicalAttributeInputOutputArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputOutputArgumentAST result ;
  const GALGAS_lexicalAttributeInputOutputArgumentAST * p = (const GALGAS_lexicalAttributeInputOutputArgumentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalAttributeInputOutputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeInputOutputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalRoutineCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalRoutineCallInstructionAST::cPtr_lexicalRoutineCallInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mActualArgumentList (),
mProperty_mErrorMessageList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalRoutineCallInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineName.printNonNullClassInstanceProperties ("mRoutineName") ;
    mProperty_mActualArgumentList.printNonNullClassInstanceProperties ("mActualArgumentList") ;
    mProperty_mErrorMessageList.printNonNullClassInstanceProperties ("mErrorMessageList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalRoutineCallInstructionAST::objectCompare (const GALGAS_lexicalRoutineCallInstructionAST & inOperand) const {
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

GALGAS_lexicalRoutineCallInstructionAST::GALGAS_lexicalRoutineCallInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexicalRoutineCallInstructionAST GALGAS_lexicalRoutineCallInstructionAST::
init_21__21__21_ (const GALGAS_lstring & in_mRoutineName,
                  const GALGAS_lexicalRoutineCallActualArgumentListAST & in_mActualArgumentList,
                  const GALGAS_lstringlist & in_mErrorMessageList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_lexicalRoutineCallInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalRoutineCallInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalRoutineCallInstructionAST_init_21__21__21_ (in_mRoutineName, in_mActualArgumentList, in_mErrorMessageList, inCompiler) ;
  const GALGAS_lexicalRoutineCallInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRoutineCallInstructionAST::
lexicalRoutineCallInstructionAST_init_21__21__21_ (const GALGAS_lstring & in_mRoutineName,
                                                   const GALGAS_lexicalRoutineCallActualArgumentListAST & in_mActualArgumentList,
                                                   const GALGAS_lstringlist & in_mErrorMessageList,
                                                   Compiler * /* inCompiler */) {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mActualArgumentList = in_mActualArgumentList ;
  mProperty_mErrorMessageList = in_mErrorMessageList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallInstructionAST::GALGAS_lexicalRoutineCallInstructionAST (const cPtr_lexicalRoutineCallInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalRoutineCallInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallInstructionAST GALGAS_lexicalRoutineCallInstructionAST::class_func_new (const GALGAS_lstring & in_mRoutineName,
                                                                                                 const GALGAS_lexicalRoutineCallActualArgumentListAST & in_mActualArgumentList,
                                                                                                 const GALGAS_lstringlist & in_mErrorMessageList
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineCallInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalRoutineCallInstructionAST (in_mRoutineName, in_mActualArgumentList, in_mErrorMessageList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalRoutineCallInstructionAST::readProperty_mRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalRoutineCallInstructionAST * p = (cPtr_lexicalRoutineCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRoutineCallInstructionAST) ;
    return p->mProperty_mRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallInstructionAST::readProperty_mActualArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lexicalRoutineCallActualArgumentListAST () ;
  }else{
    cPtr_lexicalRoutineCallInstructionAST * p = (cPtr_lexicalRoutineCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRoutineCallInstructionAST) ;
    return p->mProperty_mActualArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_lexicalRoutineCallInstructionAST::readProperty_mErrorMessageList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_lexicalRoutineCallInstructionAST * p = (cPtr_lexicalRoutineCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRoutineCallInstructionAST) ;
    return p->mProperty_mErrorMessageList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalRoutineCallInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalRoutineCallInstructionAST::cPtr_lexicalRoutineCallInstructionAST (const GALGAS_lstring & in_mRoutineName,
                                                                              const GALGAS_lexicalRoutineCallActualArgumentListAST & in_mActualArgumentList,
                                                                              const GALGAS_lstringlist & in_mErrorMessageList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mRoutineName (),
mProperty_mActualArgumentList (),
mProperty_mErrorMessageList () {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mActualArgumentList = in_mActualArgumentList ;
  mProperty_mErrorMessageList = in_mErrorMessageList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalRoutineCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineCallInstructionAST ;
}

void cPtr_lexicalRoutineCallInstructionAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalRoutineCallInstructionAST:") ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mErrorMessageList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalRoutineCallInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalRoutineCallInstructionAST (mProperty_mRoutineName, mProperty_mActualArgumentList, mProperty_mErrorMessageList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalRoutineCallInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineCallInstructionAST ("lexicalRoutineCallInstructionAST",
                                                                                        & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRoutineCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineCallInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRoutineCallInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineCallInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallInstructionAST GALGAS_lexicalRoutineCallInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineCallInstructionAST result ;
  const GALGAS_lexicalRoutineCallInstructionAST * p = (const GALGAS_lexicalRoutineCallInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalRoutineCallInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineCallInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalSimpleSendInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalSimpleSendInstructionAST::cPtr_lexicalSimpleSendInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mSentTerminal () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalSimpleSendInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mSentTerminal.printNonNullClassInstanceProperties ("mSentTerminal") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalSimpleSendInstructionAST::objectCompare (const GALGAS_lexicalSimpleSendInstructionAST & inOperand) const {
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

GALGAS_lexicalSimpleSendInstructionAST::GALGAS_lexicalSimpleSendInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST GALGAS_lexicalSimpleSendInstructionAST::
init_21_ (const GALGAS_lstring & in_mSentTerminal,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalSimpleSendInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalSimpleSendInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalSimpleSendInstructionAST_init_21_ (in_mSentTerminal, inCompiler) ;
  const GALGAS_lexicalSimpleSendInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSimpleSendInstructionAST::
lexicalSimpleSendInstructionAST_init_21_ (const GALGAS_lstring & in_mSentTerminal,
                                          Compiler * /* inCompiler */) {
  mProperty_mSentTerminal = in_mSentTerminal ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST::GALGAS_lexicalSimpleSendInstructionAST (const cPtr_lexicalSimpleSendInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalSimpleSendInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST GALGAS_lexicalSimpleSendInstructionAST::class_func_new (const GALGAS_lstring & in_mSentTerminal
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSimpleSendInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalSimpleSendInstructionAST (in_mSentTerminal COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalSimpleSendInstructionAST::readProperty_mSentTerminal (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalSimpleSendInstructionAST * p = (cPtr_lexicalSimpleSendInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSimpleSendInstructionAST) ;
    return p->mProperty_mSentTerminal ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalSimpleSendInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalSimpleSendInstructionAST::cPtr_lexicalSimpleSendInstructionAST (const GALGAS_lstring & in_mSentTerminal
                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mSentTerminal () {
  mProperty_mSentTerminal = in_mSentTerminal ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalSimpleSendInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST ;
}

void cPtr_lexicalSimpleSendInstructionAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalSimpleSendInstructionAST:") ;
  mProperty_mSentTerminal.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalSimpleSendInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalSimpleSendInstructionAST (mProperty_mSentTerminal COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalSimpleSendInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST ("lexicalSimpleSendInstructionAST",
                                                                                       & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSimpleSendInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSimpleSendInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSimpleSendInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST GALGAS_lexicalSimpleSendInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSimpleSendInstructionAST result ;
  const GALGAS_lexicalSimpleSendInstructionAST * p = (const GALGAS_lexicalSimpleSendInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalSimpleSendInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSimpleSendInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalTagInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalTagInstructionAST::cPtr_lexicalTagInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mLexicalTagName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalTagInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexicalTagName.printNonNullClassInstanceProperties ("mLexicalTagName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalTagInstructionAST::objectCompare (const GALGAS_lexicalTagInstructionAST & inOperand) const {
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

GALGAS_lexicalTagInstructionAST::GALGAS_lexicalTagInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST GALGAS_lexicalTagInstructionAST::
init_21_ (const GALGAS_lstring & in_mLexicalTagName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalTagInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalTagInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalTagInstructionAST_init_21_ (in_mLexicalTagName, inCompiler) ;
  const GALGAS_lexicalTagInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalTagInstructionAST::
lexicalTagInstructionAST_init_21_ (const GALGAS_lstring & in_mLexicalTagName,
                                   Compiler * /* inCompiler */) {
  mProperty_mLexicalTagName = in_mLexicalTagName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST::GALGAS_lexicalTagInstructionAST (const cPtr_lexicalTagInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalTagInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST GALGAS_lexicalTagInstructionAST::class_func_new (const GALGAS_lstring & in_mLexicalTagName
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTagInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalTagInstructionAST (in_mLexicalTagName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalTagInstructionAST::readProperty_mLexicalTagName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalTagInstructionAST * p = (cPtr_lexicalTagInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalTagInstructionAST) ;
    return p->mProperty_mLexicalTagName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalTagInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalTagInstructionAST::cPtr_lexicalTagInstructionAST (const GALGAS_lstring & in_mLexicalTagName
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mLexicalTagName () {
  mProperty_mLexicalTagName = in_mLexicalTagName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalTagInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagInstructionAST ;
}

void cPtr_lexicalTagInstructionAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalTagInstructionAST:") ;
  mProperty_mLexicalTagName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalTagInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalTagInstructionAST (mProperty_mLexicalTagName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalTagInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTagInstructionAST ("lexicalTagInstructionAST",
                                                                                & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalTagInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalTagInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalTagInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST GALGAS_lexicalTagInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTagInstructionAST result ;
  const GALGAS_lexicalTagInstructionAST * p = (const GALGAS_lexicalTagInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalTagInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTagInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalWarningInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalWarningInstructionAST::cPtr_lexicalWarningInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mWarningMessageName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalWarningInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mWarningMessageName.printNonNullClassInstanceProperties ("mWarningMessageName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalWarningInstructionAST::objectCompare (const GALGAS_lexicalWarningInstructionAST & inOperand) const {
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

GALGAS_lexicalWarningInstructionAST::GALGAS_lexicalWarningInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexicalWarningInstructionAST GALGAS_lexicalWarningInstructionAST::
init_21_ (const GALGAS_lstring & in_mWarningMessageName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalWarningInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalWarningInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalWarningInstructionAST_init_21_ (in_mWarningMessageName, inCompiler) ;
  const GALGAS_lexicalWarningInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalWarningInstructionAST::
lexicalWarningInstructionAST_init_21_ (const GALGAS_lstring & in_mWarningMessageName,
                                       Compiler * /* inCompiler */) {
  mProperty_mWarningMessageName = in_mWarningMessageName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalWarningInstructionAST::GALGAS_lexicalWarningInstructionAST (const cPtr_lexicalWarningInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalWarningInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalWarningInstructionAST GALGAS_lexicalWarningInstructionAST::class_func_new (const GALGAS_lstring & in_mWarningMessageName
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_lexicalWarningInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalWarningInstructionAST (in_mWarningMessageName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalWarningInstructionAST::readProperty_mWarningMessageName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalWarningInstructionAST * p = (cPtr_lexicalWarningInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalWarningInstructionAST) ;
    return p->mProperty_mWarningMessageName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalWarningInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalWarningInstructionAST::cPtr_lexicalWarningInstructionAST (const GALGAS_lstring & in_mWarningMessageName
                                                                      COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mWarningMessageName () {
  mProperty_mWarningMessageName = in_mWarningMessageName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalWarningInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalWarningInstructionAST ;
}

void cPtr_lexicalWarningInstructionAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalWarningInstructionAST:") ;
  mProperty_mWarningMessageName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalWarningInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalWarningInstructionAST (mProperty_mWarningMessageName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalWarningInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalWarningInstructionAST ("lexicalWarningInstructionAST",
                                                                                    & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalWarningInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalWarningInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalWarningInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalWarningInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalWarningInstructionAST GALGAS_lexicalWarningInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalWarningInstructionAST result ;
  const GALGAS_lexicalWarningInstructionAST * p = (const GALGAS_lexicalWarningInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalWarningInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalWarningInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @optionComponentDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_optionComponentDeclarationAST::cPtr_optionComponentDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mOptionComponentName (),
mProperty_mOptions () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionComponentDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mOptionComponentName.printNonNullClassInstanceProperties ("mOptionComponentName") ;
    mProperty_mOptions.printNonNullClassInstanceProperties ("mOptions") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_optionComponentDeclarationAST::objectCompare (const GALGAS_optionComponentDeclarationAST & inOperand) const {
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

GALGAS_optionComponentDeclarationAST::GALGAS_optionComponentDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_optionComponentDeclarationAST GALGAS_optionComponentDeclarationAST::
init_21_isPredefined_21__21_ (const GALGAS_bool & in_isPredefined,
                              const GALGAS_lstring & in_mOptionComponentName,
                              const GALGAS_commandLineOptionListAST & in_mOptions,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_optionComponentDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_optionComponentDeclarationAST (inCompiler COMMA_THERE)) ;
  object->optionComponentDeclarationAST_init_21_isPredefined_21__21_ (in_isPredefined, in_mOptionComponentName, in_mOptions, inCompiler) ;
  const GALGAS_optionComponentDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentDeclarationAST::
optionComponentDeclarationAST_init_21_isPredefined_21__21_ (const GALGAS_bool & in_isPredefined,
                                                            const GALGAS_lstring & in_mOptionComponentName,
                                                            const GALGAS_commandLineOptionListAST & in_mOptions,
                                                            Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptions = in_mOptions ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentDeclarationAST::GALGAS_optionComponentDeclarationAST (const cPtr_optionComponentDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionComponentDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentDeclarationAST GALGAS_optionComponentDeclarationAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                                           const GALGAS_lstring & in_mOptionComponentName,
                                                                                           const GALGAS_commandLineOptionListAST & in_mOptions
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_optionComponentDeclarationAST (in_isPredefined, in_mOptionComponentName, in_mOptions COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_optionComponentDeclarationAST::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_optionComponentDeclarationAST * p = (cPtr_optionComponentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentDeclarationAST) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST GALGAS_optionComponentDeclarationAST::readProperty_mOptions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_commandLineOptionListAST () ;
  }else{
    cPtr_optionComponentDeclarationAST * p = (cPtr_optionComponentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentDeclarationAST) ;
    return p->mProperty_mOptions ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionComponentDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_optionComponentDeclarationAST::cPtr_optionComponentDeclarationAST (const GALGAS_bool & in_isPredefined,
                                                                        const GALGAS_lstring & in_mOptionComponentName,
                                                                        const GALGAS_commandLineOptionListAST & in_mOptions
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_mOptionComponentName (),
mProperty_mOptions () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptions = in_mOptions ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_optionComponentDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentDeclarationAST ;
}

void cPtr_optionComponentDeclarationAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@optionComponentDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptions.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_optionComponentDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionComponentDeclarationAST (mProperty_isPredefined, mProperty_mOptionComponentName, mProperty_mOptions COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @optionComponentDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentDeclarationAST ("optionComponentDeclarationAST",
                                                                                     & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionComponentDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionComponentDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentDeclarationAST GALGAS_optionComponentDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentDeclarationAST result ;
  const GALGAS_optionComponentDeclarationAST * p = (const GALGAS_optionComponentDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_optionComponentDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @semanticDeclarationWithHeaderForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_semanticDeclarationWithHeaderForGeneration::cPtr_semanticDeclarationWithHeaderForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationForGeneration (inCompiler COMMA_THERE),
mProperty_generateHeader (),
mProperty_implementationCppFileName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_generateHeader.printNonNullClassInstanceProperties ("generateHeader") ;
    mProperty_implementationCppFileName.printNonNullClassInstanceProperties ("implementationCppFileName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_semanticDeclarationWithHeaderForGeneration::objectCompare (const GALGAS_semanticDeclarationWithHeaderForGeneration & inOperand) const {
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

GALGAS_semanticDeclarationWithHeaderForGeneration::GALGAS_semanticDeclarationWithHeaderForGeneration (void) :
GALGAS_semanticDeclarationForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration::GALGAS_semanticDeclarationWithHeaderForGeneration (const cPtr_semanticDeclarationWithHeaderForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticDeclarationWithHeaderForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_semanticDeclarationWithHeaderForGeneration::readProperty_generateHeader (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_semanticDeclarationWithHeaderForGeneration * p = (cPtr_semanticDeclarationWithHeaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticDeclarationWithHeaderForGeneration) ;
    return p->mProperty_generateHeader ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_semanticDeclarationWithHeaderForGeneration::readProperty_implementationCppFileName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_semanticDeclarationWithHeaderForGeneration * p = (cPtr_semanticDeclarationWithHeaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticDeclarationWithHeaderForGeneration) ;
    return p->mProperty_implementationCppFileName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @semanticDeclarationWithHeaderForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_semanticDeclarationWithHeaderForGeneration::cPtr_semanticDeclarationWithHeaderForGeneration (const GALGAS_bool & in_generateHeader,
                                                                                                  const GALGAS_string & in_implementationCppFileName
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationForGeneration (THERE),
mProperty_generateHeader (),
mProperty_implementationCppFileName () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
}


//--------------------------------------------------------------------------------------------------
//
//     @semanticDeclarationWithHeaderForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration ("semanticDeclarationWithHeaderForGeneration",
                                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticDeclarationWithHeaderForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticDeclarationWithHeaderForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationWithHeaderForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration GALGAS_semanticDeclarationWithHeaderForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationWithHeaderForGeneration result ;
  const GALGAS_semanticDeclarationWithHeaderForGeneration * p = (const GALGAS_semanticDeclarationWithHeaderForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticDeclarationWithHeaderForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationWithHeaderForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::objectCompare (const GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak & inOperand) const {
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

GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak & GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::operator = (const GALGAS_semanticDeclarationWithHeaderForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (const GALGAS_semanticDeclarationWithHeaderForGeneration & inSource) :
GALGAS_semanticDeclarationForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::bang_semanticDeclarationWithHeaderForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_semanticDeclarationWithHeaderForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticDeclarationWithHeaderForGeneration) ;
      result = GALGAS_semanticDeclarationWithHeaderForGeneration ((cPtr_semanticDeclarationWithHeaderForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticDeclarationWithHeaderForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak ("semanticDeclarationWithHeaderForGeneration-weak",
                                                                                                          & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak result ;
  const GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak * p = (const GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationWithHeaderForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@predefinedTypeAST typeKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum cPtr_predefinedTypeAST::getter_typeKind (Compiler */* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeKindEnum result_result ; // Returned variable
  result_result = GALGAS_typeKindEnum::class_func_otherType (SOURCE_FILE ("predefinedTypeAST.galgas", 41)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum callExtensionGetter_typeKind (const cPtr_predefinedTypeAST * inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  if (nullptr != inObject) {
    result = inObject->getter_typeKind (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @arrayTypeDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_arrayTypeDeclarationAST::cPtr_arrayTypeDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_arrayTypeName (),
mProperty_elementTypeName (),
mProperty_isUsefull (),
mProperty_equatable () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_arrayTypeDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_arrayTypeName.printNonNullClassInstanceProperties ("arrayTypeName") ;
    mProperty_elementTypeName.printNonNullClassInstanceProperties ("elementTypeName") ;
    mProperty_isUsefull.printNonNullClassInstanceProperties ("isUsefull") ;
    mProperty_equatable.printNonNullClassInstanceProperties ("equatable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_arrayTypeDeclarationAST::objectCompare (const GALGAS_arrayTypeDeclarationAST & inOperand) const {
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

GALGAS_arrayTypeDeclarationAST::GALGAS_arrayTypeDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_arrayTypeDeclarationAST GALGAS_arrayTypeDeclarationAST::
init_21_isPredefined_21__21__21_isUsefull_21_equatable (const GALGAS_bool & in_isPredefined,
                                                        const GALGAS_lstring & in_arrayTypeName,
                                                        const GALGAS_lstring & in_elementTypeName,
                                                        const GALGAS_bool & in_isUsefull,
                                                        const GALGAS_bool & in_equatable,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cPtr_arrayTypeDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_arrayTypeDeclarationAST (inCompiler COMMA_THERE)) ;
  object->arrayTypeDeclarationAST_init_21_isPredefined_21__21__21_isUsefull_21_equatable (in_isPredefined, in_arrayTypeName, in_elementTypeName, in_isUsefull, in_equatable, inCompiler) ;
  const GALGAS_arrayTypeDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeDeclarationAST::
arrayTypeDeclarationAST_init_21_isPredefined_21__21__21_isUsefull_21_equatable (const GALGAS_bool & in_isPredefined,
                                                                                const GALGAS_lstring & in_arrayTypeName,
                                                                                const GALGAS_lstring & in_elementTypeName,
                                                                                const GALGAS_bool & in_isUsefull,
                                                                                const GALGAS_bool & in_equatable,
                                                                                Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_arrayTypeName = in_arrayTypeName ;
  mProperty_elementTypeName = in_elementTypeName ;
  mProperty_isUsefull = in_isUsefull ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayTypeDeclarationAST::GALGAS_arrayTypeDeclarationAST (const cPtr_arrayTypeDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayTypeDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_arrayTypeDeclarationAST GALGAS_arrayTypeDeclarationAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                               const GALGAS_lstring & in_arrayTypeName,
                                                                               const GALGAS_lstring & in_elementTypeName,
                                                                               const GALGAS_bool & in_isUsefull,
                                                                               const GALGAS_bool & in_equatable
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_arrayTypeDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_arrayTypeDeclarationAST (in_isPredefined, in_arrayTypeName, in_elementTypeName, in_isUsefull, in_equatable COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_arrayTypeDeclarationAST::readProperty_arrayTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_arrayTypeDeclarationAST * p = (cPtr_arrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeDeclarationAST) ;
    return p->mProperty_arrayTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_arrayTypeDeclarationAST::readProperty_elementTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_arrayTypeDeclarationAST * p = (cPtr_arrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeDeclarationAST) ;
    return p->mProperty_elementTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_arrayTypeDeclarationAST::readProperty_isUsefull (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_arrayTypeDeclarationAST * p = (cPtr_arrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeDeclarationAST) ;
    return p->mProperty_isUsefull ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_arrayTypeDeclarationAST::readProperty_equatable (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_arrayTypeDeclarationAST * p = (cPtr_arrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeDeclarationAST) ;
    return p->mProperty_equatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @arrayTypeDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_arrayTypeDeclarationAST::cPtr_arrayTypeDeclarationAST (const GALGAS_bool & in_isPredefined,
                                                            const GALGAS_lstring & in_arrayTypeName,
                                                            const GALGAS_lstring & in_elementTypeName,
                                                            const GALGAS_bool & in_isUsefull,
                                                            const GALGAS_bool & in_equatable
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_arrayTypeName (),
mProperty_elementTypeName (),
mProperty_isUsefull (),
mProperty_equatable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_arrayTypeName = in_arrayTypeName ;
  mProperty_elementTypeName = in_elementTypeName ;
  mProperty_isUsefull = in_isUsefull ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_arrayTypeDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayTypeDeclarationAST ;
}

void cPtr_arrayTypeDeclarationAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@arrayTypeDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_arrayTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_elementTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isUsefull.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_equatable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_arrayTypeDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_arrayTypeDeclarationAST (mProperty_isPredefined, mProperty_arrayTypeName, mProperty_elementTypeName, mProperty_isUsefull, mProperty_equatable COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @arrayTypeDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayTypeDeclarationAST ("arrayTypeDeclarationAST",
                                                                               & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayTypeDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayTypeDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayTypeDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayTypeDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayTypeDeclarationAST GALGAS_arrayTypeDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_arrayTypeDeclarationAST result ;
  const GALGAS_arrayTypeDeclarationAST * p = (const GALGAS_arrayTypeDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_arrayTypeDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayTypeDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @semanticTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_semanticTypeForGeneration::cPtr_semanticTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationForGeneration (inCompiler COMMA_THERE),
mProperty_mSelfTypeEntry () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mSelfTypeEntry.printNonNullClassInstanceProperties ("mSelfTypeEntry") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_semanticTypeForGeneration::objectCompare (const GALGAS_semanticTypeForGeneration & inOperand) const {
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

GALGAS_semanticTypeForGeneration::GALGAS_semanticTypeForGeneration (void) :
GALGAS_semanticDeclarationForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration::GALGAS_semanticTypeForGeneration (const cPtr_semanticTypeForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_semanticTypeForGeneration::readProperty_mSelfTypeEntry (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_semanticTypeForGeneration * p = (cPtr_semanticTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticTypeForGeneration) ;
    return p->mProperty_mSelfTypeEntry ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @semanticTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_semanticTypeForGeneration::cPtr_semanticTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationForGeneration (THERE),
mProperty_mSelfTypeEntry () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
}


//--------------------------------------------------------------------------------------------------
//
//     @semanticTypeForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticTypeForGeneration ("semanticTypeForGeneration",
                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration GALGAS_semanticTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_semanticTypeForGeneration result ;
  const GALGAS_semanticTypeForGeneration * p = (const GALGAS_semanticTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_semanticTypeForGeneration_2D_weak::objectCompare (const GALGAS_semanticTypeForGeneration_2D_weak & inOperand) const {
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

GALGAS_semanticTypeForGeneration_2D_weak::GALGAS_semanticTypeForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration_2D_weak & GALGAS_semanticTypeForGeneration_2D_weak::operator = (const GALGAS_semanticTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration_2D_weak::GALGAS_semanticTypeForGeneration_2D_weak (const GALGAS_semanticTypeForGeneration & inSource) :
GALGAS_semanticDeclarationForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration_2D_weak GALGAS_semanticTypeForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_semanticTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration GALGAS_semanticTypeForGeneration_2D_weak::bang_semanticTypeForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_semanticTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticTypeForGeneration) ;
      result = GALGAS_semanticTypeForGeneration ((cPtr_semanticTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticTypeForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak ("semanticTypeForGeneration-weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration_2D_weak GALGAS_semanticTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_semanticTypeForGeneration_2D_weak result ;
  const GALGAS_semanticTypeForGeneration_2D_weak * p = (const GALGAS_semanticTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @boolsetDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_boolsetDeclarationAST::cPtr_boolsetDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mBoolsetTypeName (),
mProperty_mFlagList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolsetDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mBoolsetTypeName.printNonNullClassInstanceProperties ("mBoolsetTypeName") ;
    mProperty_mFlagList.printNonNullClassInstanceProperties ("mFlagList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_boolsetDeclarationAST::objectCompare (const GALGAS_boolsetDeclarationAST & inOperand) const {
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

GALGAS_boolsetDeclarationAST::GALGAS_boolsetDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_boolsetDeclarationAST GALGAS_boolsetDeclarationAST::
init_21_isPredefined_21__21_ (const GALGAS_bool & in_isPredefined,
                              const GALGAS_lstring & in_mBoolsetTypeName,
                              const GALGAS_lstringlist & in_mFlagList,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_boolsetDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_boolsetDeclarationAST (inCompiler COMMA_THERE)) ;
  object->boolsetDeclarationAST_init_21_isPredefined_21__21_ (in_isPredefined, in_mBoolsetTypeName, in_mFlagList, inCompiler) ;
  const GALGAS_boolsetDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::
boolsetDeclarationAST_init_21_isPredefined_21__21_ (const GALGAS_bool & in_isPredefined,
                                                    const GALGAS_lstring & in_mBoolsetTypeName,
                                                    const GALGAS_lstringlist & in_mFlagList,
                                                    Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mBoolsetTypeName = in_mBoolsetTypeName ;
  mProperty_mFlagList = in_mFlagList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST::GALGAS_boolsetDeclarationAST (const cPtr_boolsetDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolsetDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST GALGAS_boolsetDeclarationAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                           const GALGAS_lstring & in_mBoolsetTypeName,
                                                                           const GALGAS_lstringlist & in_mFlagList
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_boolsetDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_boolsetDeclarationAST (in_isPredefined, in_mBoolsetTypeName, in_mFlagList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_boolsetDeclarationAST::readProperty_mBoolsetTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_boolsetDeclarationAST * p = (cPtr_boolsetDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetDeclarationAST) ;
    return p->mProperty_mBoolsetTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_boolsetDeclarationAST::readProperty_mFlagList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_boolsetDeclarationAST * p = (cPtr_boolsetDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetDeclarationAST) ;
    return p->mProperty_mFlagList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @boolsetDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_boolsetDeclarationAST::cPtr_boolsetDeclarationAST (const GALGAS_bool & in_isPredefined,
                                                        const GALGAS_lstring & in_mBoolsetTypeName,
                                                        const GALGAS_lstringlist & in_mFlagList
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_mBoolsetTypeName (),
mProperty_mFlagList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mBoolsetTypeName = in_mBoolsetTypeName ;
  mProperty_mFlagList = in_mFlagList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolsetDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetDeclarationAST ;
}

void cPtr_boolsetDeclarationAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@boolsetDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBoolsetTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFlagList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolsetDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_boolsetDeclarationAST (mProperty_isPredefined, mProperty_mBoolsetTypeName, mProperty_mFlagList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @boolsetDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolsetDeclarationAST ("boolsetDeclarationAST",
                                                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolsetDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolsetDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolsetDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST GALGAS_boolsetDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_boolsetDeclarationAST result ;
  const GALGAS_boolsetDeclarationAST * p = (const GALGAS_boolsetDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_boolsetDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolsetDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @boolsetTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_boolsetTypeForGeneration::cPtr_boolsetTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mFlagList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolsetTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFlagList.printNonNullClassInstanceProperties ("mFlagList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_boolsetTypeForGeneration::objectCompare (const GALGAS_boolsetTypeForGeneration & inOperand) const {
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

GALGAS_boolsetTypeForGeneration::GALGAS_boolsetTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration GALGAS_boolsetTypeForGeneration::
init_21__21_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
              const GALGAS_lstringlist & in_mFlagList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_boolsetTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_boolsetTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->boolsetTypeForGeneration_init_21__21_ (in_mSelfTypeEntry, in_mFlagList, inCompiler) ;
  const GALGAS_boolsetTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_boolsetTypeForGeneration::
boolsetTypeForGeneration_init_21__21_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                       const GALGAS_lstringlist & in_mFlagList,
                                       Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mFlagList = in_mFlagList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration::GALGAS_boolsetTypeForGeneration (const cPtr_boolsetTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolsetTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration GALGAS_boolsetTypeForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                                 const GALGAS_lstringlist & in_mFlagList
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_boolsetTypeForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_boolsetTypeForGeneration (in_mSelfTypeEntry, in_mFlagList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_boolsetTypeForGeneration::readProperty_mFlagList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_boolsetTypeForGeneration * p = (cPtr_boolsetTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetTypeForGeneration) ;
    return p->mProperty_mFlagList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @boolsetTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_boolsetTypeForGeneration::cPtr_boolsetTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                              const GALGAS_lstringlist & in_mFlagList
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mFlagList () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mFlagList = in_mFlagList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolsetTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetTypeForGeneration ;
}

void cPtr_boolsetTypeForGeneration::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@boolsetTypeForGeneration:") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFlagList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolsetTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_boolsetTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mFlagList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @boolsetTypeForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolsetTypeForGeneration ("boolsetTypeForGeneration",
                                                                                & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolsetTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolsetTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolsetTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration GALGAS_boolsetTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_boolsetTypeForGeneration result ;
  const GALGAS_boolsetTypeForGeneration * p = (const GALGAS_boolsetTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_boolsetTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolsetTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_boolsetTypeForGeneration_2D_weak::objectCompare (const GALGAS_boolsetTypeForGeneration_2D_weak & inOperand) const {
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

GALGAS_boolsetTypeForGeneration_2D_weak::GALGAS_boolsetTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration_2D_weak & GALGAS_boolsetTypeForGeneration_2D_weak::operator = (const GALGAS_boolsetTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration_2D_weak::GALGAS_boolsetTypeForGeneration_2D_weak (const GALGAS_boolsetTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration_2D_weak GALGAS_boolsetTypeForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_boolsetTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration GALGAS_boolsetTypeForGeneration_2D_weak::bang_boolsetTypeForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_boolsetTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolsetTypeForGeneration) ;
      result = GALGAS_boolsetTypeForGeneration ((cPtr_boolsetTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @boolsetTypeForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolsetTypeForGeneration_2D_weak ("boolsetTypeForGeneration-weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolsetTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetTypeForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolsetTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolsetTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration_2D_weak GALGAS_boolsetTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_boolsetTypeForGeneration_2D_weak result ;
  const GALGAS_boolsetTypeForGeneration_2D_weak * p = (const GALGAS_boolsetTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_boolsetTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolsetTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @classDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_classDeclarationAST::cPtr_classDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mIsAbstract (),
mProperty_mIsReference (),
mProperty_mClassTypeName (),
mProperty_mSuperClassName (),
mProperty_mGenerateInSeparateFile (),
mProperty_mPropertyList (),
mProperty_clonable () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_classDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mIsAbstract.printNonNullClassInstanceProperties ("mIsAbstract") ;
    mProperty_mIsReference.printNonNullClassInstanceProperties ("mIsReference") ;
    mProperty_mClassTypeName.printNonNullClassInstanceProperties ("mClassTypeName") ;
    mProperty_mSuperClassName.printNonNullClassInstanceProperties ("mSuperClassName") ;
    mProperty_mGenerateInSeparateFile.printNonNullClassInstanceProperties ("mGenerateInSeparateFile") ;
    mProperty_mPropertyList.printNonNullClassInstanceProperties ("mPropertyList") ;
    mProperty_clonable.printNonNullClassInstanceProperties ("clonable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_classDeclarationAST::objectCompare (const GALGAS_classDeclarationAST & inOperand) const {
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

GALGAS_classDeclarationAST::GALGAS_classDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_classDeclarationAST GALGAS_classDeclarationAST::
init_21_isPredefined_21__21__21__21__21__21__21_ (const GALGAS_bool & in_isPredefined,
                                                  const GALGAS_bool & in_mIsAbstract,
                                                  const GALGAS_bool & in_mIsReference,
                                                  const GALGAS_lstring & in_mClassTypeName,
                                                  const GALGAS_lstring & in_mSuperClassName,
                                                  const GALGAS_bool & in_mGenerateInSeparateFile,
                                                  const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                                  const GALGAS_bool & in_clonable,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_classDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_classDeclarationAST (inCompiler COMMA_THERE)) ;
  object->classDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (in_isPredefined, in_mIsAbstract, in_mIsReference, in_mClassTypeName, in_mSuperClassName, in_mGenerateInSeparateFile, in_mPropertyList, in_clonable, inCompiler) ;
  const GALGAS_classDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::
classDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const GALGAS_bool & in_isPredefined,
                                                                      const GALGAS_bool & in_mIsAbstract,
                                                                      const GALGAS_bool & in_mIsReference,
                                                                      const GALGAS_lstring & in_mClassTypeName,
                                                                      const GALGAS_lstring & in_mSuperClassName,
                                                                      const GALGAS_bool & in_mGenerateInSeparateFile,
                                                                      const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                                                      const GALGAS_bool & in_clonable,
                                                                      Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mIsAbstract = in_mIsAbstract ;
  mProperty_mIsReference = in_mIsReference ;
  mProperty_mClassTypeName = in_mClassTypeName ;
  mProperty_mSuperClassName = in_mSuperClassName ;
  mProperty_mGenerateInSeparateFile = in_mGenerateInSeparateFile ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_clonable = in_clonable ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST::GALGAS_classDeclarationAST (const cPtr_classDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST GALGAS_classDeclarationAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                       const GALGAS_bool & in_mIsAbstract,
                                                                       const GALGAS_bool & in_mIsReference,
                                                                       const GALGAS_lstring & in_mClassTypeName,
                                                                       const GALGAS_lstring & in_mSuperClassName,
                                                                       const GALGAS_bool & in_mGenerateInSeparateFile,
                                                                       const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                                                       const GALGAS_bool & in_clonable
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_classDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_classDeclarationAST (in_isPredefined, in_mIsAbstract, in_mIsReference, in_mClassTypeName, in_mSuperClassName, in_mGenerateInSeparateFile, in_mPropertyList, in_clonable COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classDeclarationAST::readProperty_mIsAbstract (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mIsAbstract ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classDeclarationAST::readProperty_mIsReference (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mIsReference ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_classDeclarationAST::readProperty_mClassTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mClassTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_classDeclarationAST::readProperty_mSuperClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mSuperClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classDeclarationAST::readProperty_mGenerateInSeparateFile (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mGenerateInSeparateFile ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_classDeclarationAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_propertyInCollectionListAST () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classDeclarationAST::readProperty_clonable (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_clonable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @classDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_classDeclarationAST::cPtr_classDeclarationAST (const GALGAS_bool & in_isPredefined,
                                                    const GALGAS_bool & in_mIsAbstract,
                                                    const GALGAS_bool & in_mIsReference,
                                                    const GALGAS_lstring & in_mClassTypeName,
                                                    const GALGAS_lstring & in_mSuperClassName,
                                                    const GALGAS_bool & in_mGenerateInSeparateFile,
                                                    const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                                    const GALGAS_bool & in_clonable
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_mIsAbstract (),
mProperty_mIsReference (),
mProperty_mClassTypeName (),
mProperty_mSuperClassName (),
mProperty_mGenerateInSeparateFile (),
mProperty_mPropertyList (),
mProperty_clonable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mIsAbstract = in_mIsAbstract ;
  mProperty_mIsReference = in_mIsReference ;
  mProperty_mClassTypeName = in_mClassTypeName ;
  mProperty_mSuperClassName = in_mSuperClassName ;
  mProperty_mGenerateInSeparateFile = in_mGenerateInSeparateFile ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_clonable = in_clonable ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_classDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classDeclarationAST ;
}

void cPtr_classDeclarationAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@classDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsAbstract.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsReference.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mClassTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSuperClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGenerateInSeparateFile.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_clonable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_classDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_classDeclarationAST (mProperty_isPredefined, mProperty_mIsAbstract, mProperty_mIsReference, mProperty_mClassTypeName, mProperty_mSuperClassName, mProperty_mGenerateInSeparateFile, mProperty_mPropertyList, mProperty_clonable COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @classDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classDeclarationAST ("classDeclarationAST",
                                                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_classDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_classDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST GALGAS_classDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_classDeclarationAST result ;
  const GALGAS_classDeclarationAST * p = (const GALGAS_classDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_classDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @classTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_classTypeForGeneration::cPtr_classTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mIsAbstract (),
mProperty_mIsReference (),
mProperty_mSuperClass (),
mProperty_mAllTypedAttributeList (),
mProperty_mCurrentTypedAttributeList (),
mProperty_generateHeaderInSeparateFile (),
mProperty_initializerNeedsCompilerVariable (),
mProperty_propertyInitializationCode (),
mProperty_synthetizedInitializerArgumentList (),
mProperty_inheritedSynthetizedInitializerArgumentList (),
mProperty_initializerMap (),
mProperty_clonable () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_classTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mIsAbstract.printNonNullClassInstanceProperties ("mIsAbstract") ;
    mProperty_mIsReference.printNonNullClassInstanceProperties ("mIsReference") ;
    mProperty_mSuperClass.printNonNullClassInstanceProperties ("mSuperClass") ;
    mProperty_mAllTypedAttributeList.printNonNullClassInstanceProperties ("mAllTypedAttributeList") ;
    mProperty_mCurrentTypedAttributeList.printNonNullClassInstanceProperties ("mCurrentTypedAttributeList") ;
    mProperty_generateHeaderInSeparateFile.printNonNullClassInstanceProperties ("generateHeaderInSeparateFile") ;
    mProperty_initializerNeedsCompilerVariable.printNonNullClassInstanceProperties ("initializerNeedsCompilerVariable") ;
    mProperty_propertyInitializationCode.printNonNullClassInstanceProperties ("propertyInitializationCode") ;
    mProperty_synthetizedInitializerArgumentList.printNonNullClassInstanceProperties ("synthetizedInitializerArgumentList") ;
    mProperty_inheritedSynthetizedInitializerArgumentList.printNonNullClassInstanceProperties ("inheritedSynthetizedInitializerArgumentList") ;
    mProperty_initializerMap.printNonNullClassInstanceProperties ("initializerMap") ;
    mProperty_clonable.printNonNullClassInstanceProperties ("clonable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_classTypeForGeneration::objectCompare (const GALGAS_classTypeForGeneration & inOperand) const {
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

GALGAS_classTypeForGeneration::GALGAS_classTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_classTypeForGeneration GALGAS_classTypeForGeneration::
init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                          const GALGAS_bool & in_mIsAbstract,
                                                          const GALGAS_bool & in_mIsReference,
                                                          const GALGAS_unifiedTypeMapEntry & in_mSuperClass,
                                                          const GALGAS_typedPropertyList & in_mAllTypedAttributeList,
                                                          const GALGAS_typedPropertyList & in_mCurrentTypedAttributeList,
                                                          const GALGAS_bool & in_generateHeaderInSeparateFile,
                                                          const GALGAS_bool & in_initializerNeedsCompilerVariable,
                                                          const GALGAS_string & in_propertyInitializationCode,
                                                          const GALGAS_typedPropertyList & in_synthetizedInitializerArgumentList,
                                                          const GALGAS_typedPropertyList & in_inheritedSynthetizedInitializerArgumentList,
                                                          const GALGAS_initializerMap & in_initializerMap,
                                                          const GALGAS_bool & in_clonable,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cPtr_classTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_classTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->classTypeForGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (in_mSelfTypeEntry, in_mIsAbstract, in_mIsReference, in_mSuperClass, in_mAllTypedAttributeList, in_mCurrentTypedAttributeList, in_generateHeaderInSeparateFile, in_initializerNeedsCompilerVariable, in_propertyInitializationCode, in_synthetizedInitializerArgumentList, in_inheritedSynthetizedInitializerArgumentList, in_initializerMap, in_clonable, inCompiler) ;
  const GALGAS_classTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_classTypeForGeneration::
classTypeForGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                                 const GALGAS_bool & in_mIsAbstract,
                                                                                 const GALGAS_bool & in_mIsReference,
                                                                                 const GALGAS_unifiedTypeMapEntry & in_mSuperClass,
                                                                                 const GALGAS_typedPropertyList & in_mAllTypedAttributeList,
                                                                                 const GALGAS_typedPropertyList & in_mCurrentTypedAttributeList,
                                                                                 const GALGAS_bool & in_generateHeaderInSeparateFile,
                                                                                 const GALGAS_bool & in_initializerNeedsCompilerVariable,
                                                                                 const GALGAS_string & in_propertyInitializationCode,
                                                                                 const GALGAS_typedPropertyList & in_synthetizedInitializerArgumentList,
                                                                                 const GALGAS_typedPropertyList & in_inheritedSynthetizedInitializerArgumentList,
                                                                                 const GALGAS_initializerMap & in_initializerMap,
                                                                                 const GALGAS_bool & in_clonable,
                                                                                 Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mIsAbstract = in_mIsAbstract ;
  mProperty_mIsReference = in_mIsReference ;
  mProperty_mSuperClass = in_mSuperClass ;
  mProperty_mAllTypedAttributeList = in_mAllTypedAttributeList ;
  mProperty_mCurrentTypedAttributeList = in_mCurrentTypedAttributeList ;
  mProperty_generateHeaderInSeparateFile = in_generateHeaderInSeparateFile ;
  mProperty_initializerNeedsCompilerVariable = in_initializerNeedsCompilerVariable ;
  mProperty_propertyInitializationCode = in_propertyInitializationCode ;
  mProperty_synthetizedInitializerArgumentList = in_synthetizedInitializerArgumentList ;
  mProperty_inheritedSynthetizedInitializerArgumentList = in_inheritedSynthetizedInitializerArgumentList ;
  mProperty_initializerMap = in_initializerMap ;
  mProperty_clonable = in_clonable ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration::GALGAS_classTypeForGeneration (const cPtr_classTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration GALGAS_classTypeForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                             const GALGAS_bool & in_mIsAbstract,
                                                                             const GALGAS_bool & in_mIsReference,
                                                                             const GALGAS_unifiedTypeMapEntry & in_mSuperClass,
                                                                             const GALGAS_typedPropertyList & in_mAllTypedAttributeList,
                                                                             const GALGAS_typedPropertyList & in_mCurrentTypedAttributeList,
                                                                             const GALGAS_bool & in_generateHeaderInSeparateFile,
                                                                             const GALGAS_bool & in_initializerNeedsCompilerVariable,
                                                                             const GALGAS_string & in_propertyInitializationCode,
                                                                             const GALGAS_typedPropertyList & in_synthetizedInitializerArgumentList,
                                                                             const GALGAS_typedPropertyList & in_inheritedSynthetizedInitializerArgumentList,
                                                                             const GALGAS_initializerMap & in_initializerMap,
                                                                             const GALGAS_bool & in_clonable
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_classTypeForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_classTypeForGeneration (in_mSelfTypeEntry, in_mIsAbstract, in_mIsReference, in_mSuperClass, in_mAllTypedAttributeList, in_mCurrentTypedAttributeList, in_generateHeaderInSeparateFile, in_initializerNeedsCompilerVariable, in_propertyInitializationCode, in_synthetizedInitializerArgumentList, in_inheritedSynthetizedInitializerArgumentList, in_initializerMap, in_clonable COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classTypeForGeneration::readProperty_mIsAbstract (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    return p->mProperty_mIsAbstract ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classTypeForGeneration::readProperty_mIsReference (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    return p->mProperty_mIsReference ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_classTypeForGeneration::readProperty_mSuperClass (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    return p->mProperty_mSuperClass ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_classTypeForGeneration::readProperty_mAllTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    return p->mProperty_mAllTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_classTypeForGeneration::readProperty_mCurrentTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    return p->mProperty_mCurrentTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classTypeForGeneration::readProperty_generateHeaderInSeparateFile (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    return p->mProperty_generateHeaderInSeparateFile ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classTypeForGeneration::readProperty_initializerNeedsCompilerVariable (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    return p->mProperty_initializerNeedsCompilerVariable ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_classTypeForGeneration::readProperty_propertyInitializationCode (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    return p->mProperty_propertyInitializationCode ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_classTypeForGeneration::readProperty_synthetizedInitializerArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    return p->mProperty_synthetizedInitializerArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_classTypeForGeneration::readProperty_inheritedSynthetizedInitializerArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    return p->mProperty_inheritedSynthetizedInitializerArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_initializerMap GALGAS_classTypeForGeneration::readProperty_initializerMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_initializerMap () ;
  }else{
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    return p->mProperty_initializerMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classTypeForGeneration::readProperty_clonable (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    return p->mProperty_clonable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @classTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_classTypeForGeneration::cPtr_classTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                          const GALGAS_bool & in_mIsAbstract,
                                                          const GALGAS_bool & in_mIsReference,
                                                          const GALGAS_unifiedTypeMapEntry & in_mSuperClass,
                                                          const GALGAS_typedPropertyList & in_mAllTypedAttributeList,
                                                          const GALGAS_typedPropertyList & in_mCurrentTypedAttributeList,
                                                          const GALGAS_bool & in_generateHeaderInSeparateFile,
                                                          const GALGAS_bool & in_initializerNeedsCompilerVariable,
                                                          const GALGAS_string & in_propertyInitializationCode,
                                                          const GALGAS_typedPropertyList & in_synthetizedInitializerArgumentList,
                                                          const GALGAS_typedPropertyList & in_inheritedSynthetizedInitializerArgumentList,
                                                          const GALGAS_initializerMap & in_initializerMap,
                                                          const GALGAS_bool & in_clonable
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mIsAbstract (),
mProperty_mIsReference (),
mProperty_mSuperClass (),
mProperty_mAllTypedAttributeList (),
mProperty_mCurrentTypedAttributeList (),
mProperty_generateHeaderInSeparateFile (),
mProperty_initializerNeedsCompilerVariable (),
mProperty_propertyInitializationCode (),
mProperty_synthetizedInitializerArgumentList (),
mProperty_inheritedSynthetizedInitializerArgumentList (),
mProperty_initializerMap (),
mProperty_clonable () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mIsAbstract = in_mIsAbstract ;
  mProperty_mIsReference = in_mIsReference ;
  mProperty_mSuperClass = in_mSuperClass ;
  mProperty_mAllTypedAttributeList = in_mAllTypedAttributeList ;
  mProperty_mCurrentTypedAttributeList = in_mCurrentTypedAttributeList ;
  mProperty_generateHeaderInSeparateFile = in_generateHeaderInSeparateFile ;
  mProperty_initializerNeedsCompilerVariable = in_initializerNeedsCompilerVariable ;
  mProperty_propertyInitializationCode = in_propertyInitializationCode ;
  mProperty_synthetizedInitializerArgumentList = in_synthetizedInitializerArgumentList ;
  mProperty_inheritedSynthetizedInitializerArgumentList = in_inheritedSynthetizedInitializerArgumentList ;
  mProperty_initializerMap = in_initializerMap ;
  mProperty_clonable = in_clonable ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_classTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classTypeForGeneration ;
}

void cPtr_classTypeForGeneration::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@classTypeForGeneration:") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsAbstract.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsReference.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSuperClass.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAllTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCurrentTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_generateHeaderInSeparateFile.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_initializerNeedsCompilerVariable.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_propertyInitializationCode.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_synthetizedInitializerArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_inheritedSynthetizedInitializerArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_initializerMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_clonable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_classTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_classTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mIsAbstract, mProperty_mIsReference, mProperty_mSuperClass, mProperty_mAllTypedAttributeList, mProperty_mCurrentTypedAttributeList, mProperty_generateHeaderInSeparateFile, mProperty_initializerNeedsCompilerVariable, mProperty_propertyInitializationCode, mProperty_synthetizedInitializerArgumentList, mProperty_inheritedSynthetizedInitializerArgumentList, mProperty_initializerMap, mProperty_clonable COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @classTypeForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classTypeForGeneration ("classTypeForGeneration",
                                                                              & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_classTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_classTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration GALGAS_classTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_classTypeForGeneration result ;
  const GALGAS_classTypeForGeneration * p = (const GALGAS_classTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_classTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_classTypeForGeneration_2D_weak::objectCompare (const GALGAS_classTypeForGeneration_2D_weak & inOperand) const {
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

GALGAS_classTypeForGeneration_2D_weak::GALGAS_classTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration_2D_weak & GALGAS_classTypeForGeneration_2D_weak::operator = (const GALGAS_classTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration_2D_weak::GALGAS_classTypeForGeneration_2D_weak (const GALGAS_classTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration_2D_weak GALGAS_classTypeForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_classTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration GALGAS_classTypeForGeneration_2D_weak::bang_classTypeForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_classTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_classTypeForGeneration) ;
      result = GALGAS_classTypeForGeneration ((cPtr_classTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @classTypeForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classTypeForGeneration_2D_weak ("classTypeForGeneration-weak",
                                                                                      & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_classTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classTypeForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_classTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration_2D_weak GALGAS_classTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_classTypeForGeneration_2D_weak result ;
  const GALGAS_classTypeForGeneration_2D_weak * p = (const GALGAS_classTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_classTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @weakReferenceDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_weakReferenceDeclarationAST::cPtr_weakReferenceDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mClassTypeName (),
mProperty_mWeakReferenceTypeName (),
mProperty_mSuperWeakReferenceTypeName (),
mProperty_mGenerateInSeparateFile (),
mProperty_mPropertyList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_weakReferenceDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mClassTypeName.printNonNullClassInstanceProperties ("mClassTypeName") ;
    mProperty_mWeakReferenceTypeName.printNonNullClassInstanceProperties ("mWeakReferenceTypeName") ;
    mProperty_mSuperWeakReferenceTypeName.printNonNullClassInstanceProperties ("mSuperWeakReferenceTypeName") ;
    mProperty_mGenerateInSeparateFile.printNonNullClassInstanceProperties ("mGenerateInSeparateFile") ;
    mProperty_mPropertyList.printNonNullClassInstanceProperties ("mPropertyList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_weakReferenceDeclarationAST::objectCompare (const GALGAS_weakReferenceDeclarationAST & inOperand) const {
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

GALGAS_weakReferenceDeclarationAST::GALGAS_weakReferenceDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST GALGAS_weakReferenceDeclarationAST::
init_21_isPredefined_21__21__21__21__21_ (const GALGAS_bool & in_isPredefined,
                                          const GALGAS_lstring & in_mClassTypeName,
                                          const GALGAS_lstring & in_mWeakReferenceTypeName,
                                          const GALGAS_lstring & in_mSuperWeakReferenceTypeName,
                                          const GALGAS_bool & in_mGenerateInSeparateFile,
                                          const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_weakReferenceDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_weakReferenceDeclarationAST (inCompiler COMMA_THERE)) ;
  object->weakReferenceDeclarationAST_init_21_isPredefined_21__21__21__21__21_ (in_isPredefined, in_mClassTypeName, in_mWeakReferenceTypeName, in_mSuperWeakReferenceTypeName, in_mGenerateInSeparateFile, in_mPropertyList, inCompiler) ;
  const GALGAS_weakReferenceDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::
weakReferenceDeclarationAST_init_21_isPredefined_21__21__21__21__21_ (const GALGAS_bool & in_isPredefined,
                                                                      const GALGAS_lstring & in_mClassTypeName,
                                                                      const GALGAS_lstring & in_mWeakReferenceTypeName,
                                                                      const GALGAS_lstring & in_mSuperWeakReferenceTypeName,
                                                                      const GALGAS_bool & in_mGenerateInSeparateFile,
                                                                      const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                                                      Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mClassTypeName = in_mClassTypeName ;
  mProperty_mWeakReferenceTypeName = in_mWeakReferenceTypeName ;
  mProperty_mSuperWeakReferenceTypeName = in_mSuperWeakReferenceTypeName ;
  mProperty_mGenerateInSeparateFile = in_mGenerateInSeparateFile ;
  mProperty_mPropertyList = in_mPropertyList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST::GALGAS_weakReferenceDeclarationAST (const cPtr_weakReferenceDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_weakReferenceDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST GALGAS_weakReferenceDeclarationAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                                       const GALGAS_lstring & in_mClassTypeName,
                                                                                       const GALGAS_lstring & in_mWeakReferenceTypeName,
                                                                                       const GALGAS_lstring & in_mSuperWeakReferenceTypeName,
                                                                                       const GALGAS_bool & in_mGenerateInSeparateFile,
                                                                                       const GALGAS_propertyInCollectionListAST & in_mPropertyList
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_weakReferenceDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReferenceDeclarationAST (in_isPredefined, in_mClassTypeName, in_mWeakReferenceTypeName, in_mSuperWeakReferenceTypeName, in_mGenerateInSeparateFile, in_mPropertyList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_weakReferenceDeclarationAST::readProperty_mClassTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    return p->mProperty_mClassTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_weakReferenceDeclarationAST::readProperty_mWeakReferenceTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    return p->mProperty_mWeakReferenceTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_weakReferenceDeclarationAST::readProperty_mSuperWeakReferenceTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    return p->mProperty_mSuperWeakReferenceTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_weakReferenceDeclarationAST::readProperty_mGenerateInSeparateFile (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    return p->mProperty_mGenerateInSeparateFile ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_weakReferenceDeclarationAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_propertyInCollectionListAST () ;
  }else{
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @weakReferenceDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_weakReferenceDeclarationAST::cPtr_weakReferenceDeclarationAST (const GALGAS_bool & in_isPredefined,
                                                                    const GALGAS_lstring & in_mClassTypeName,
                                                                    const GALGAS_lstring & in_mWeakReferenceTypeName,
                                                                    const GALGAS_lstring & in_mSuperWeakReferenceTypeName,
                                                                    const GALGAS_bool & in_mGenerateInSeparateFile,
                                                                    const GALGAS_propertyInCollectionListAST & in_mPropertyList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_mClassTypeName (),
mProperty_mWeakReferenceTypeName (),
mProperty_mSuperWeakReferenceTypeName (),
mProperty_mGenerateInSeparateFile (),
mProperty_mPropertyList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mClassTypeName = in_mClassTypeName ;
  mProperty_mWeakReferenceTypeName = in_mWeakReferenceTypeName ;
  mProperty_mSuperWeakReferenceTypeName = in_mSuperWeakReferenceTypeName ;
  mProperty_mGenerateInSeparateFile = in_mGenerateInSeparateFile ;
  mProperty_mPropertyList = in_mPropertyList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_weakReferenceDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceDeclarationAST ;
}

void cPtr_weakReferenceDeclarationAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@weakReferenceDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mClassTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWeakReferenceTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSuperWeakReferenceTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGenerateInSeparateFile.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_weakReferenceDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_weakReferenceDeclarationAST (mProperty_isPredefined, mProperty_mClassTypeName, mProperty_mWeakReferenceTypeName, mProperty_mSuperWeakReferenceTypeName, mProperty_mGenerateInSeparateFile, mProperty_mPropertyList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @weakReferenceDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_weakReferenceDeclarationAST ("weakReferenceDeclarationAST",
                                                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_weakReferenceDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_weakReferenceDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_weakReferenceDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST GALGAS_weakReferenceDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_weakReferenceDeclarationAST result ;
  const GALGAS_weakReferenceDeclarationAST * p = (const GALGAS_weakReferenceDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_weakReferenceDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("weakReferenceDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @weakReferenceTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_weakReferenceTypeForGeneration::cPtr_weakReferenceTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mReferenceClassType (),
mProperty_mSuperClass (),
mProperty_allTypedPropertyList (),
mProperty_mTypedAttributeList (),
mProperty_generateHeaderInSeparateFile () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_weakReferenceTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mReferenceClassType.printNonNullClassInstanceProperties ("mReferenceClassType") ;
    mProperty_mSuperClass.printNonNullClassInstanceProperties ("mSuperClass") ;
    mProperty_allTypedPropertyList.printNonNullClassInstanceProperties ("allTypedPropertyList") ;
    mProperty_mTypedAttributeList.printNonNullClassInstanceProperties ("mTypedAttributeList") ;
    mProperty_generateHeaderInSeparateFile.printNonNullClassInstanceProperties ("generateHeaderInSeparateFile") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_weakReferenceTypeForGeneration::objectCompare (const GALGAS_weakReferenceTypeForGeneration & inOperand) const {
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

GALGAS_weakReferenceTypeForGeneration::GALGAS_weakReferenceTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration GALGAS_weakReferenceTypeForGeneration::
init_21__21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                              const GALGAS_unifiedTypeMapEntry & in_mReferenceClassType,
                              const GALGAS_unifiedTypeMapEntry & in_mSuperClass,
                              const GALGAS_typedPropertyList & in_allTypedPropertyList,
                              const GALGAS_typedPropertyList & in_mTypedAttributeList,
                              const GALGAS_bool & in_generateHeaderInSeparateFile,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_weakReferenceTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_weakReferenceTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->weakReferenceTypeForGeneration_init_21__21__21__21__21__21_ (in_mSelfTypeEntry, in_mReferenceClassType, in_mSuperClass, in_allTypedPropertyList, in_mTypedAttributeList, in_generateHeaderInSeparateFile, inCompiler) ;
  const GALGAS_weakReferenceTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceTypeForGeneration::
weakReferenceTypeForGeneration_init_21__21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                             const GALGAS_unifiedTypeMapEntry & in_mReferenceClassType,
                                                             const GALGAS_unifiedTypeMapEntry & in_mSuperClass,
                                                             const GALGAS_typedPropertyList & in_allTypedPropertyList,
                                                             const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                             const GALGAS_bool & in_generateHeaderInSeparateFile,
                                                             Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mReferenceClassType = in_mReferenceClassType ;
  mProperty_mSuperClass = in_mSuperClass ;
  mProperty_allTypedPropertyList = in_allTypedPropertyList ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_generateHeaderInSeparateFile = in_generateHeaderInSeparateFile ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration::GALGAS_weakReferenceTypeForGeneration (const cPtr_weakReferenceTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_weakReferenceTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration GALGAS_weakReferenceTypeForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                                             const GALGAS_unifiedTypeMapEntry & in_mReferenceClassType,
                                                                                             const GALGAS_unifiedTypeMapEntry & in_mSuperClass,
                                                                                             const GALGAS_typedPropertyList & in_allTypedPropertyList,
                                                                                             const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                                             const GALGAS_bool & in_generateHeaderInSeparateFile
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_weakReferenceTypeForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReferenceTypeForGeneration (in_mSelfTypeEntry, in_mReferenceClassType, in_mSuperClass, in_allTypedPropertyList, in_mTypedAttributeList, in_generateHeaderInSeparateFile COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_weakReferenceTypeForGeneration::readProperty_mReferenceClassType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_weakReferenceTypeForGeneration * p = (cPtr_weakReferenceTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceTypeForGeneration) ;
    return p->mProperty_mReferenceClassType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_weakReferenceTypeForGeneration::readProperty_mSuperClass (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_weakReferenceTypeForGeneration * p = (cPtr_weakReferenceTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceTypeForGeneration) ;
    return p->mProperty_mSuperClass ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_weakReferenceTypeForGeneration::readProperty_allTypedPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_weakReferenceTypeForGeneration * p = (cPtr_weakReferenceTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceTypeForGeneration) ;
    return p->mProperty_allTypedPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_weakReferenceTypeForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_weakReferenceTypeForGeneration * p = (cPtr_weakReferenceTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceTypeForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_weakReferenceTypeForGeneration::readProperty_generateHeaderInSeparateFile (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_weakReferenceTypeForGeneration * p = (cPtr_weakReferenceTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceTypeForGeneration) ;
    return p->mProperty_generateHeaderInSeparateFile ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @weakReferenceTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_weakReferenceTypeForGeneration::cPtr_weakReferenceTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                          const GALGAS_unifiedTypeMapEntry & in_mReferenceClassType,
                                                                          const GALGAS_unifiedTypeMapEntry & in_mSuperClass,
                                                                          const GALGAS_typedPropertyList & in_allTypedPropertyList,
                                                                          const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                          const GALGAS_bool & in_generateHeaderInSeparateFile
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mReferenceClassType (),
mProperty_mSuperClass (),
mProperty_allTypedPropertyList (),
mProperty_mTypedAttributeList (),
mProperty_generateHeaderInSeparateFile () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mReferenceClassType = in_mReferenceClassType ;
  mProperty_mSuperClass = in_mSuperClass ;
  mProperty_allTypedPropertyList = in_allTypedPropertyList ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_generateHeaderInSeparateFile = in_generateHeaderInSeparateFile ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_weakReferenceTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration ;
}

void cPtr_weakReferenceTypeForGeneration::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@weakReferenceTypeForGeneration:") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReferenceClassType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSuperClass.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_allTypedPropertyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_generateHeaderInSeparateFile.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_weakReferenceTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_weakReferenceTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mReferenceClassType, mProperty_mSuperClass, mProperty_allTypedPropertyList, mProperty_mTypedAttributeList, mProperty_generateHeaderInSeparateFile COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @weakReferenceTypeForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration ("weakReferenceTypeForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_weakReferenceTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_weakReferenceTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_weakReferenceTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration GALGAS_weakReferenceTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_weakReferenceTypeForGeneration result ;
  const GALGAS_weakReferenceTypeForGeneration * p = (const GALGAS_weakReferenceTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_weakReferenceTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("weakReferenceTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_weakReferenceTypeForGeneration_2D_weak::objectCompare (const GALGAS_weakReferenceTypeForGeneration_2D_weak & inOperand) const {
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

GALGAS_weakReferenceTypeForGeneration_2D_weak::GALGAS_weakReferenceTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration_2D_weak & GALGAS_weakReferenceTypeForGeneration_2D_weak::operator = (const GALGAS_weakReferenceTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration_2D_weak::GALGAS_weakReferenceTypeForGeneration_2D_weak (const GALGAS_weakReferenceTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration_2D_weak GALGAS_weakReferenceTypeForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_weakReferenceTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration GALGAS_weakReferenceTypeForGeneration_2D_weak::bang_weakReferenceTypeForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_weakReferenceTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_weakReferenceTypeForGeneration) ;
      result = GALGAS_weakReferenceTypeForGeneration ((cPtr_weakReferenceTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @weakReferenceTypeForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration_2D_weak ("weakReferenceTypeForGeneration-weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_weakReferenceTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_weakReferenceTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_weakReferenceTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration_2D_weak GALGAS_weakReferenceTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_weakReferenceTypeForGeneration_2D_weak result ;
  const GALGAS_weakReferenceTypeForGeneration_2D_weak * p = (const GALGAS_weakReferenceTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_weakReferenceTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("weakReferenceTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @enumDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_enumDeclarationAST::cPtr_enumDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_enumTypeName (),
mProperty_constantList (),
mProperty_comparison () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enumDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_enumTypeName.printNonNullClassInstanceProperties ("enumTypeName") ;
    mProperty_constantList.printNonNullClassInstanceProperties ("constantList") ;
    mProperty_comparison.printNonNullClassInstanceProperties ("comparison") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_enumDeclarationAST::objectCompare (const GALGAS_enumDeclarationAST & inOperand) const {
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

GALGAS_enumDeclarationAST::GALGAS_enumDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_enumDeclarationAST GALGAS_enumDeclarationAST::
init_21_isPredefined_21__21__21_comparison (const GALGAS_bool & in_isPredefined,
                                            const GALGAS_lstring & in_enumTypeName,
                                            const GALGAS_enumConstantList & in_constantList,
                                            const GALGAS_structComparison & in_comparison,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cPtr_enumDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_enumDeclarationAST (inCompiler COMMA_THERE)) ;
  object->enumDeclarationAST_init_21_isPredefined_21__21__21_comparison (in_isPredefined, in_enumTypeName, in_constantList, in_comparison, inCompiler) ;
  const GALGAS_enumDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::
enumDeclarationAST_init_21_isPredefined_21__21__21_comparison (const GALGAS_bool & in_isPredefined,
                                                               const GALGAS_lstring & in_enumTypeName,
                                                               const GALGAS_enumConstantList & in_constantList,
                                                               const GALGAS_structComparison & in_comparison,
                                                               Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_enumTypeName = in_enumTypeName ;
  mProperty_constantList = in_constantList ;
  mProperty_comparison = in_comparison ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST::GALGAS_enumDeclarationAST (const cPtr_enumDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST GALGAS_enumDeclarationAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                     const GALGAS_lstring & in_enumTypeName,
                                                                     const GALGAS_enumConstantList & in_constantList,
                                                                     const GALGAS_structComparison & in_comparison
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_enumDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_enumDeclarationAST (in_isPredefined, in_enumTypeName, in_constantList, in_comparison COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_enumDeclarationAST::readProperty_enumTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    return p->mProperty_enumTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantList GALGAS_enumDeclarationAST::readProperty_constantList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_enumConstantList () ;
  }else{
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    return p->mProperty_constantList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_structComparison GALGAS_enumDeclarationAST::readProperty_comparison (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_structComparison () ;
  }else{
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    return p->mProperty_comparison ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enumDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_enumDeclarationAST::cPtr_enumDeclarationAST (const GALGAS_bool & in_isPredefined,
                                                  const GALGAS_lstring & in_enumTypeName,
                                                  const GALGAS_enumConstantList & in_constantList,
                                                  const GALGAS_structComparison & in_comparison
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_enumTypeName (),
mProperty_constantList (),
mProperty_comparison () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_enumTypeName = in_enumTypeName ;
  mProperty_constantList = in_constantList ;
  mProperty_comparison = in_comparison ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enumDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclarationAST ;
}

void cPtr_enumDeclarationAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@enumDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_enumTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_constantList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_comparison.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumDeclarationAST (mProperty_isPredefined, mProperty_enumTypeName, mProperty_constantList, mProperty_comparison COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @enumDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumDeclarationAST ("enumDeclarationAST",
                                                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST GALGAS_enumDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumDeclarationAST result ;
  const GALGAS_enumDeclarationAST * p = (const GALGAS_enumDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @enumTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_enumTypeForGeneration::cPtr_enumTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_constantList (),
mProperty_associatedValuesTypes () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enumTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_constantList.printNonNullClassInstanceProperties ("constantList") ;
    mProperty_associatedValuesTypes.printNonNullClassInstanceProperties ("associatedValuesTypes") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_enumTypeForGeneration::objectCompare (const GALGAS_enumTypeForGeneration & inOperand) const {
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

GALGAS_enumTypeForGeneration::GALGAS_enumTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_enumTypeForGeneration GALGAS_enumTypeForGeneration::
init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                  const GALGAS_enumConstantListForGeneration & in_constantList,
                  const GALGAS__5B_unifiedTypeMapEntry_5D_ & in_associatedValuesTypes,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_enumTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_enumTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->enumTypeForGeneration_init_21__21__21_ (in_mSelfTypeEntry, in_constantList, in_associatedValuesTypes, inCompiler) ;
  const GALGAS_enumTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::
enumTypeForGeneration_init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                        const GALGAS_enumConstantListForGeneration & in_constantList,
                                        const GALGAS__5B_unifiedTypeMapEntry_5D_ & in_associatedValuesTypes,
                                        Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_constantList = in_constantList ;
  mProperty_associatedValuesTypes = in_associatedValuesTypes ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration::GALGAS_enumTypeForGeneration (const cPtr_enumTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration GALGAS_enumTypeForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                           const GALGAS_enumConstantListForGeneration & in_constantList,
                                                                           const GALGAS__5B_unifiedTypeMapEntry_5D_ & in_associatedValuesTypes
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_enumTypeForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_enumTypeForGeneration (in_mSelfTypeEntry, in_constantList, in_associatedValuesTypes COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration GALGAS_enumTypeForGeneration::readProperty_constantList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_enumConstantListForGeneration () ;
  }else{
    cPtr_enumTypeForGeneration * p = (cPtr_enumTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumTypeForGeneration) ;
    return p->mProperty_constantList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS__5B_unifiedTypeMapEntry_5D_ GALGAS_enumTypeForGeneration::readProperty_associatedValuesTypes (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS__5B_unifiedTypeMapEntry_5D_ () ;
  }else{
    cPtr_enumTypeForGeneration * p = (cPtr_enumTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumTypeForGeneration) ;
    return p->mProperty_associatedValuesTypes ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enumTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_enumTypeForGeneration::cPtr_enumTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                        const GALGAS_enumConstantListForGeneration & in_constantList,
                                                        const GALGAS__5B_unifiedTypeMapEntry_5D_ & in_associatedValuesTypes
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_constantList (),
mProperty_associatedValuesTypes () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_constantList = in_constantList ;
  mProperty_associatedValuesTypes = in_associatedValuesTypes ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enumTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumTypeForGeneration ;
}

void cPtr_enumTypeForGeneration::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@enumTypeForGeneration:") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_constantList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_associatedValuesTypes.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_constantList, mProperty_associatedValuesTypes COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @enumTypeForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumTypeForGeneration ("enumTypeForGeneration",
                                                                             & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration GALGAS_enumTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_enumTypeForGeneration result ;
  const GALGAS_enumTypeForGeneration * p = (const GALGAS_enumTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_enumTypeForGeneration_2D_weak::objectCompare (const GALGAS_enumTypeForGeneration_2D_weak & inOperand) const {
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

GALGAS_enumTypeForGeneration_2D_weak::GALGAS_enumTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration_2D_weak & GALGAS_enumTypeForGeneration_2D_weak::operator = (const GALGAS_enumTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration_2D_weak::GALGAS_enumTypeForGeneration_2D_weak (const GALGAS_enumTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration_2D_weak GALGAS_enumTypeForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_enumTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration GALGAS_enumTypeForGeneration_2D_weak::bang_enumTypeForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_enumTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumTypeForGeneration) ;
      result = GALGAS_enumTypeForGeneration ((cPtr_enumTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @enumTypeForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumTypeForGeneration_2D_weak ("enumTypeForGeneration-weak",
                                                                                     & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumTypeForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration_2D_weak GALGAS_enumTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_enumTypeForGeneration_2D_weak result ;
  const GALGAS_enumTypeForGeneration_2D_weak * p = (const GALGAS_enumTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@typeNameFormalParameterNameList initializerSignature'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_initializerSignature (const GALGAS_typeNameFormalParameterNameList & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("init") ;
  const GALGAS_typeNameFormalParameterNameList temp_0 = inObject ;
  cEnumerator_typeNameFormalParameterNameList enumerator_11787 (temp_0, EnumerationOrder::up) ;
  while (enumerator_11787.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("!").add_operation (enumerator_11787.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 313)) ;
    enumerator_11787.gotoNextObject () ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @externTypeDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_externTypeDeclarationAST::cPtr_externTypeDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mExternTypeName (),
mProperty_mCppPreDeclarationCode (),
mProperty_mCppClassCode (),
mProperty_externTypeInitializerList (),
mProperty_mExternTypeGetterList (),
mProperty_mExternTypeSetterList (),
mProperty_mExternTypeMethodList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_externTypeDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mExternTypeName.printNonNullClassInstanceProperties ("mExternTypeName") ;
    mProperty_mCppPreDeclarationCode.printNonNullClassInstanceProperties ("mCppPreDeclarationCode") ;
    mProperty_mCppClassCode.printNonNullClassInstanceProperties ("mCppClassCode") ;
    mProperty_externTypeInitializerList.printNonNullClassInstanceProperties ("externTypeInitializerList") ;
    mProperty_mExternTypeGetterList.printNonNullClassInstanceProperties ("mExternTypeGetterList") ;
    mProperty_mExternTypeSetterList.printNonNullClassInstanceProperties ("mExternTypeSetterList") ;
    mProperty_mExternTypeMethodList.printNonNullClassInstanceProperties ("mExternTypeMethodList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_externTypeDeclarationAST::objectCompare (const GALGAS_externTypeDeclarationAST & inOperand) const {
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

GALGAS_externTypeDeclarationAST::GALGAS_externTypeDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_externTypeDeclarationAST GALGAS_externTypeDeclarationAST::
init_21_isPredefined_21__21__21__21__21__21__21_ (const GALGAS_bool & in_isPredefined,
                                                  const GALGAS_lstring & in_mExternTypeName,
                                                  const GALGAS_string & in_mCppPreDeclarationCode,
                                                  const GALGAS_string & in_mCppClassCode,
                                                  const GALGAS_externTypeConstructorList & in_externTypeInitializerList,
                                                  const GALGAS_externTypeGetterList & in_mExternTypeGetterList,
                                                  const GALGAS_externTypeSetterList & in_mExternTypeSetterList,
                                                  const GALGAS_externTypeMethodList & in_mExternTypeMethodList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_externTypeDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_externTypeDeclarationAST (inCompiler COMMA_THERE)) ;
  object->externTypeDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (in_isPredefined, in_mExternTypeName, in_mCppPreDeclarationCode, in_mCppClassCode, in_externTypeInitializerList, in_mExternTypeGetterList, in_mExternTypeSetterList, in_mExternTypeMethodList, inCompiler) ;
  const GALGAS_externTypeDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::
externTypeDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const GALGAS_bool & in_isPredefined,
                                                                           const GALGAS_lstring & in_mExternTypeName,
                                                                           const GALGAS_string & in_mCppPreDeclarationCode,
                                                                           const GALGAS_string & in_mCppClassCode,
                                                                           const GALGAS_externTypeConstructorList & in_externTypeInitializerList,
                                                                           const GALGAS_externTypeGetterList & in_mExternTypeGetterList,
                                                                           const GALGAS_externTypeSetterList & in_mExternTypeSetterList,
                                                                           const GALGAS_externTypeMethodList & in_mExternTypeMethodList,
                                                                           Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mExternTypeName = in_mExternTypeName ;
  mProperty_mCppPreDeclarationCode = in_mCppPreDeclarationCode ;
  mProperty_mCppClassCode = in_mCppClassCode ;
  mProperty_externTypeInitializerList = in_externTypeInitializerList ;
  mProperty_mExternTypeGetterList = in_mExternTypeGetterList ;
  mProperty_mExternTypeSetterList = in_mExternTypeSetterList ;
  mProperty_mExternTypeMethodList = in_mExternTypeMethodList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationAST::GALGAS_externTypeDeclarationAST (const cPtr_externTypeDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externTypeDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationAST GALGAS_externTypeDeclarationAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                                 const GALGAS_lstring & in_mExternTypeName,
                                                                                 const GALGAS_string & in_mCppPreDeclarationCode,
                                                                                 const GALGAS_string & in_mCppClassCode,
                                                                                 const GALGAS_externTypeConstructorList & in_externTypeInitializerList,
                                                                                 const GALGAS_externTypeGetterList & in_mExternTypeGetterList,
                                                                                 const GALGAS_externTypeSetterList & in_mExternTypeSetterList,
                                                                                 const GALGAS_externTypeMethodList & in_mExternTypeMethodList
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_externTypeDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_externTypeDeclarationAST (in_isPredefined, in_mExternTypeName, in_mCppPreDeclarationCode, in_mCppClassCode, in_externTypeInitializerList, in_mExternTypeGetterList, in_mExternTypeSetterList, in_mExternTypeMethodList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externTypeDeclarationAST::readProperty_mExternTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_externTypeDeclarationAST::readProperty_mCppPreDeclarationCode (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mCppPreDeclarationCode ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_externTypeDeclarationAST::readProperty_mCppClassCode (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mCppClassCode ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList GALGAS_externTypeDeclarationAST::readProperty_externTypeInitializerList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_externTypeConstructorList () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_externTypeInitializerList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList GALGAS_externTypeDeclarationAST::readProperty_mExternTypeGetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_externTypeGetterList () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeGetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList GALGAS_externTypeDeclarationAST::readProperty_mExternTypeSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_externTypeSetterList () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList GALGAS_externTypeDeclarationAST::readProperty_mExternTypeMethodList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_externTypeMethodList () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeMethodList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @externTypeDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_externTypeDeclarationAST::cPtr_externTypeDeclarationAST (const GALGAS_bool & in_isPredefined,
                                                              const GALGAS_lstring & in_mExternTypeName,
                                                              const GALGAS_string & in_mCppPreDeclarationCode,
                                                              const GALGAS_string & in_mCppClassCode,
                                                              const GALGAS_externTypeConstructorList & in_externTypeInitializerList,
                                                              const GALGAS_externTypeGetterList & in_mExternTypeGetterList,
                                                              const GALGAS_externTypeSetterList & in_mExternTypeSetterList,
                                                              const GALGAS_externTypeMethodList & in_mExternTypeMethodList
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_mExternTypeName (),
mProperty_mCppPreDeclarationCode (),
mProperty_mCppClassCode (),
mProperty_externTypeInitializerList (),
mProperty_mExternTypeGetterList (),
mProperty_mExternTypeSetterList (),
mProperty_mExternTypeMethodList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mExternTypeName = in_mExternTypeName ;
  mProperty_mCppPreDeclarationCode = in_mCppPreDeclarationCode ;
  mProperty_mCppClassCode = in_mCppClassCode ;
  mProperty_externTypeInitializerList = in_externTypeInitializerList ;
  mProperty_mExternTypeGetterList = in_mExternTypeGetterList ;
  mProperty_mExternTypeSetterList = in_mExternTypeSetterList ;
  mProperty_mExternTypeMethodList = in_mExternTypeMethodList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_externTypeDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationAST ;
}

void cPtr_externTypeDeclarationAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@externTypeDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExternTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppPreDeclarationCode.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppClassCode.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_externTypeInitializerList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExternTypeGetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExternTypeSetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExternTypeMethodList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_externTypeDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_externTypeDeclarationAST (mProperty_isPredefined, mProperty_mExternTypeName, mProperty_mCppPreDeclarationCode, mProperty_mCppClassCode, mProperty_externTypeInitializerList, mProperty_mExternTypeGetterList, mProperty_mExternTypeSetterList, mProperty_mExternTypeMethodList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @externTypeDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeDeclarationAST ("externTypeDeclarationAST",
                                                                                & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationAST GALGAS_externTypeDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_externTypeDeclarationAST result ;
  const GALGAS_externTypeDeclarationAST * p = (const GALGAS_externTypeDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externTypeDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @externTypeDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_externTypeDeclarationForGeneration::cPtr_externTypeDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mExternTypeName (),
mProperty_mCppPreDeclarationCode (),
mProperty_mCppClassCode () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_externTypeDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExternTypeName.printNonNullClassInstanceProperties ("mExternTypeName") ;
    mProperty_mCppPreDeclarationCode.printNonNullClassInstanceProperties ("mCppPreDeclarationCode") ;
    mProperty_mCppClassCode.printNonNullClassInstanceProperties ("mCppClassCode") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_externTypeDeclarationForGeneration::objectCompare (const GALGAS_externTypeDeclarationForGeneration & inOperand) const {
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

GALGAS_externTypeDeclarationForGeneration::GALGAS_externTypeDeclarationForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration GALGAS_externTypeDeclarationForGeneration::
init_21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                      const GALGAS_string & in_mExternTypeName,
                      const GALGAS_string & in_mCppPreDeclarationCode,
                      const GALGAS_string & in_mCppClassCode,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_externTypeDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_externTypeDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->externTypeDeclarationForGeneration_init_21__21__21__21_ (in_mSelfTypeEntry, in_mExternTypeName, in_mCppPreDeclarationCode, in_mCppClassCode, inCompiler) ;
  const GALGAS_externTypeDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationForGeneration::
externTypeDeclarationForGeneration_init_21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                         const GALGAS_string & in_mExternTypeName,
                                                         const GALGAS_string & in_mCppPreDeclarationCode,
                                                         const GALGAS_string & in_mCppClassCode,
                                                         Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mExternTypeName = in_mExternTypeName ;
  mProperty_mCppPreDeclarationCode = in_mCppPreDeclarationCode ;
  mProperty_mCppClassCode = in_mCppClassCode ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration::GALGAS_externTypeDeclarationForGeneration (const cPtr_externTypeDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externTypeDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration GALGAS_externTypeDeclarationForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                                                     const GALGAS_string & in_mExternTypeName,
                                                                                                     const GALGAS_string & in_mCppPreDeclarationCode,
                                                                                                     const GALGAS_string & in_mCppClassCode
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_externTypeDeclarationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_externTypeDeclarationForGeneration (in_mSelfTypeEntry, in_mExternTypeName, in_mCppPreDeclarationCode, in_mCppClassCode COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_externTypeDeclarationForGeneration::readProperty_mExternTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_externTypeDeclarationForGeneration * p = (cPtr_externTypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationForGeneration) ;
    return p->mProperty_mExternTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_externTypeDeclarationForGeneration::readProperty_mCppPreDeclarationCode (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_externTypeDeclarationForGeneration * p = (cPtr_externTypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationForGeneration) ;
    return p->mProperty_mCppPreDeclarationCode ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_externTypeDeclarationForGeneration::readProperty_mCppClassCode (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_externTypeDeclarationForGeneration * p = (cPtr_externTypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationForGeneration) ;
    return p->mProperty_mCppClassCode ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @externTypeDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_externTypeDeclarationForGeneration::cPtr_externTypeDeclarationForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                                  const GALGAS_string & in_mExternTypeName,
                                                                                  const GALGAS_string & in_mCppPreDeclarationCode,
                                                                                  const GALGAS_string & in_mCppClassCode
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mExternTypeName (),
mProperty_mCppPreDeclarationCode (),
mProperty_mCppClassCode () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mExternTypeName = in_mExternTypeName ;
  mProperty_mCppPreDeclarationCode = in_mCppPreDeclarationCode ;
  mProperty_mCppClassCode = in_mCppClassCode ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_externTypeDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration ;
}

void cPtr_externTypeDeclarationForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@externTypeDeclarationForGeneration:") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExternTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppPreDeclarationCode.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppClassCode.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_externTypeDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_externTypeDeclarationForGeneration (mProperty_mSelfTypeEntry, mProperty_mExternTypeName, mProperty_mCppPreDeclarationCode, mProperty_mCppClassCode COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @externTypeDeclarationForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration ("externTypeDeclarationForGeneration",
                                                                                          & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration GALGAS_externTypeDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_externTypeDeclarationForGeneration result ;
  const GALGAS_externTypeDeclarationForGeneration * p = (const GALGAS_externTypeDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externTypeDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_externTypeDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_externTypeDeclarationForGeneration_2D_weak & inOperand) const {
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

GALGAS_externTypeDeclarationForGeneration_2D_weak::GALGAS_externTypeDeclarationForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration_2D_weak & GALGAS_externTypeDeclarationForGeneration_2D_weak::operator = (const GALGAS_externTypeDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration_2D_weak::GALGAS_externTypeDeclarationForGeneration_2D_weak (const GALGAS_externTypeDeclarationForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration_2D_weak GALGAS_externTypeDeclarationForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_externTypeDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration GALGAS_externTypeDeclarationForGeneration_2D_weak::bang_externTypeDeclarationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_externTypeDeclarationForGeneration) ;
      result = GALGAS_externTypeDeclarationForGeneration ((cPtr_externTypeDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @externTypeDeclarationForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration_2D_weak ("externTypeDeclarationForGeneration-weak",
                                                                                                  & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeDeclarationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeDeclarationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeDeclarationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration_2D_weak GALGAS_externTypeDeclarationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_externTypeDeclarationForGeneration_2D_weak result ;
  const GALGAS_externTypeDeclarationForGeneration_2D_weak * p = (const GALGAS_externTypeDeclarationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externTypeDeclarationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeDeclarationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @graphDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_graphDeclarationAST::cPtr_graphDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mGraphTypeName (),
mProperty_mAssociatedListTypeName (),
mProperty_mInsertModifierList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_graphDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mGraphTypeName.printNonNullClassInstanceProperties ("mGraphTypeName") ;
    mProperty_mAssociatedListTypeName.printNonNullClassInstanceProperties ("mAssociatedListTypeName") ;
    mProperty_mInsertModifierList.printNonNullClassInstanceProperties ("mInsertModifierList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_graphDeclarationAST::objectCompare (const GALGAS_graphDeclarationAST & inOperand) const {
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

GALGAS_graphDeclarationAST::GALGAS_graphDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_graphDeclarationAST GALGAS_graphDeclarationAST::
init_21_isPredefined_21__21__21_ (const GALGAS_bool & in_isPredefined,
                                  const GALGAS_lstring & in_mGraphTypeName,
                                  const GALGAS_lstring & in_mAssociatedListTypeName,
                                  const GALGAS_graphInsertModifierList & in_mInsertModifierList,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_graphDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_graphDeclarationAST (inCompiler COMMA_THERE)) ;
  object->graphDeclarationAST_init_21_isPredefined_21__21__21_ (in_isPredefined, in_mGraphTypeName, in_mAssociatedListTypeName, in_mInsertModifierList, inCompiler) ;
  const GALGAS_graphDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::
graphDeclarationAST_init_21_isPredefined_21__21__21_ (const GALGAS_bool & in_isPredefined,
                                                      const GALGAS_lstring & in_mGraphTypeName,
                                                      const GALGAS_lstring & in_mAssociatedListTypeName,
                                                      const GALGAS_graphInsertModifierList & in_mInsertModifierList,
                                                      Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mGraphTypeName = in_mGraphTypeName ;
  mProperty_mAssociatedListTypeName = in_mAssociatedListTypeName ;
  mProperty_mInsertModifierList = in_mInsertModifierList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationAST::GALGAS_graphDeclarationAST (const cPtr_graphDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_graphDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationAST GALGAS_graphDeclarationAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                       const GALGAS_lstring & in_mGraphTypeName,
                                                                       const GALGAS_lstring & in_mAssociatedListTypeName,
                                                                       const GALGAS_graphInsertModifierList & in_mInsertModifierList
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_graphDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_graphDeclarationAST (in_isPredefined, in_mGraphTypeName, in_mAssociatedListTypeName, in_mInsertModifierList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_graphDeclarationAST::readProperty_mGraphTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    return p->mProperty_mGraphTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_graphDeclarationAST::readProperty_mAssociatedListTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    return p->mProperty_mAssociatedListTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphDeclarationAST::readProperty_mInsertModifierList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_graphInsertModifierList () ;
  }else{
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    return p->mProperty_mInsertModifierList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @graphDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_graphDeclarationAST::cPtr_graphDeclarationAST (const GALGAS_bool & in_isPredefined,
                                                    const GALGAS_lstring & in_mGraphTypeName,
                                                    const GALGAS_lstring & in_mAssociatedListTypeName,
                                                    const GALGAS_graphInsertModifierList & in_mInsertModifierList
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_mGraphTypeName (),
mProperty_mAssociatedListTypeName (),
mProperty_mInsertModifierList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mGraphTypeName = in_mGraphTypeName ;
  mProperty_mAssociatedListTypeName = in_mAssociatedListTypeName ;
  mProperty_mInsertModifierList = in_mInsertModifierList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_graphDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationAST ;
}

void cPtr_graphDeclarationAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@graphDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGraphTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAssociatedListTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInsertModifierList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_graphDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_graphDeclarationAST (mProperty_isPredefined, mProperty_mGraphTypeName, mProperty_mAssociatedListTypeName, mProperty_mInsertModifierList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @graphDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphDeclarationAST ("graphDeclarationAST",
                                                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_graphDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_graphDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationAST GALGAS_graphDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_graphDeclarationAST result ;
  const GALGAS_graphDeclarationAST * p = (const GALGAS_graphDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_graphDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @graphDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_graphDeclarationForGeneration::cPtr_graphDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mAssociatedListTypeEntry (),
mProperty_mAssociatedListElementTypeEntry (),
mProperty_mInsertModifierList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_graphDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mAssociatedListTypeEntry.printNonNullClassInstanceProperties ("mAssociatedListTypeEntry") ;
    mProperty_mAssociatedListElementTypeEntry.printNonNullClassInstanceProperties ("mAssociatedListElementTypeEntry") ;
    mProperty_mInsertModifierList.printNonNullClassInstanceProperties ("mInsertModifierList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_graphDeclarationForGeneration::objectCompare (const GALGAS_graphDeclarationForGeneration & inOperand) const {
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

GALGAS_graphDeclarationForGeneration::GALGAS_graphDeclarationForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration GALGAS_graphDeclarationForGeneration::
init_21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                      const GALGAS_unifiedTypeMapEntry & in_mAssociatedListTypeEntry,
                      const GALGAS_unifiedTypeMapEntry & in_mAssociatedListElementTypeEntry,
                      const GALGAS_graphInsertModifierList & in_mInsertModifierList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_graphDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_graphDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->graphDeclarationForGeneration_init_21__21__21__21_ (in_mSelfTypeEntry, in_mAssociatedListTypeEntry, in_mAssociatedListElementTypeEntry, in_mInsertModifierList, inCompiler) ;
  const GALGAS_graphDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationForGeneration::
graphDeclarationForGeneration_init_21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                    const GALGAS_unifiedTypeMapEntry & in_mAssociatedListTypeEntry,
                                                    const GALGAS_unifiedTypeMapEntry & in_mAssociatedListElementTypeEntry,
                                                    const GALGAS_graphInsertModifierList & in_mInsertModifierList,
                                                    Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mAssociatedListTypeEntry = in_mAssociatedListTypeEntry ;
  mProperty_mAssociatedListElementTypeEntry = in_mAssociatedListElementTypeEntry ;
  mProperty_mInsertModifierList = in_mInsertModifierList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration::GALGAS_graphDeclarationForGeneration (const cPtr_graphDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_graphDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration GALGAS_graphDeclarationForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                                           const GALGAS_unifiedTypeMapEntry & in_mAssociatedListTypeEntry,
                                                                                           const GALGAS_unifiedTypeMapEntry & in_mAssociatedListElementTypeEntry,
                                                                                           const GALGAS_graphInsertModifierList & in_mInsertModifierList
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_graphDeclarationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_graphDeclarationForGeneration (in_mSelfTypeEntry, in_mAssociatedListTypeEntry, in_mAssociatedListElementTypeEntry, in_mInsertModifierList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_graphDeclarationForGeneration::readProperty_mAssociatedListTypeEntry (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_graphDeclarationForGeneration * p = (cPtr_graphDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
    return p->mProperty_mAssociatedListTypeEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_graphDeclarationForGeneration::readProperty_mAssociatedListElementTypeEntry (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_graphDeclarationForGeneration * p = (cPtr_graphDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
    return p->mProperty_mAssociatedListElementTypeEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphDeclarationForGeneration::readProperty_mInsertModifierList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_graphInsertModifierList () ;
  }else{
    cPtr_graphDeclarationForGeneration * p = (cPtr_graphDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
    return p->mProperty_mInsertModifierList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @graphDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_graphDeclarationForGeneration::cPtr_graphDeclarationForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                        const GALGAS_unifiedTypeMapEntry & in_mAssociatedListTypeEntry,
                                                                        const GALGAS_unifiedTypeMapEntry & in_mAssociatedListElementTypeEntry,
                                                                        const GALGAS_graphInsertModifierList & in_mInsertModifierList
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mAssociatedListTypeEntry (),
mProperty_mAssociatedListElementTypeEntry (),
mProperty_mInsertModifierList () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mAssociatedListTypeEntry = in_mAssociatedListTypeEntry ;
  mProperty_mAssociatedListElementTypeEntry = in_mAssociatedListElementTypeEntry ;
  mProperty_mInsertModifierList = in_mInsertModifierList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_graphDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationForGeneration ;
}

void cPtr_graphDeclarationForGeneration::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@graphDeclarationForGeneration:") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAssociatedListTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAssociatedListElementTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInsertModifierList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_graphDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_graphDeclarationForGeneration (mProperty_mSelfTypeEntry, mProperty_mAssociatedListTypeEntry, mProperty_mAssociatedListElementTypeEntry, mProperty_mInsertModifierList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @graphDeclarationForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphDeclarationForGeneration ("graphDeclarationForGeneration",
                                                                                     & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_graphDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_graphDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration GALGAS_graphDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_graphDeclarationForGeneration result ;
  const GALGAS_graphDeclarationForGeneration * p = (const GALGAS_graphDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_graphDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_graphDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_graphDeclarationForGeneration_2D_weak & inOperand) const {
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

GALGAS_graphDeclarationForGeneration_2D_weak::GALGAS_graphDeclarationForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration_2D_weak & GALGAS_graphDeclarationForGeneration_2D_weak::operator = (const GALGAS_graphDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration_2D_weak::GALGAS_graphDeclarationForGeneration_2D_weak (const GALGAS_graphDeclarationForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration_2D_weak GALGAS_graphDeclarationForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_graphDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration GALGAS_graphDeclarationForGeneration_2D_weak::bang_graphDeclarationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_graphDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_graphDeclarationForGeneration) ;
      result = GALGAS_graphDeclarationForGeneration ((cPtr_graphDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @graphDeclarationForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphDeclarationForGeneration_2D_weak ("graphDeclarationForGeneration-weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_graphDeclarationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_graphDeclarationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphDeclarationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration_2D_weak GALGAS_graphDeclarationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_graphDeclarationForGeneration_2D_weak result ;
  const GALGAS_graphDeclarationForGeneration_2D_weak * p = (const GALGAS_graphDeclarationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_graphDeclarationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphDeclarationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @listDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_listDeclarationAST::cPtr_listDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mListTypeName (),
mProperty_mPropertyList (),
mProperty_usefullList (),
mProperty_equatable () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_listDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mListTypeName.printNonNullClassInstanceProperties ("mListTypeName") ;
    mProperty_mPropertyList.printNonNullClassInstanceProperties ("mPropertyList") ;
    mProperty_usefullList.printNonNullClassInstanceProperties ("usefullList") ;
    mProperty_equatable.printNonNullClassInstanceProperties ("equatable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_listDeclarationAST::objectCompare (const GALGAS_listDeclarationAST & inOperand) const {
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

GALGAS_listDeclarationAST::GALGAS_listDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_listDeclarationAST GALGAS_listDeclarationAST::
init_21_isPredefined_21__21__21_usefullList_21_equatable (const GALGAS_bool & in_isPredefined,
                                                          const GALGAS_lstring & in_mListTypeName,
                                                          const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                                          const GALGAS_bool & in_usefullList,
                                                          const GALGAS_bool & in_equatable,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cPtr_listDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_listDeclarationAST (inCompiler COMMA_THERE)) ;
  object->listDeclarationAST_init_21_isPredefined_21__21__21_usefullList_21_equatable (in_isPredefined, in_mListTypeName, in_mPropertyList, in_usefullList, in_equatable, inCompiler) ;
  const GALGAS_listDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::
listDeclarationAST_init_21_isPredefined_21__21__21_usefullList_21_equatable (const GALGAS_bool & in_isPredefined,
                                                                             const GALGAS_lstring & in_mListTypeName,
                                                                             const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                                                             const GALGAS_bool & in_usefullList,
                                                                             const GALGAS_bool & in_equatable,
                                                                             Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mListTypeName = in_mListTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_usefullList = in_usefullList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listDeclarationAST::GALGAS_listDeclarationAST (const cPtr_listDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_listDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_listDeclarationAST GALGAS_listDeclarationAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                     const GALGAS_lstring & in_mListTypeName,
                                                                     const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                                                     const GALGAS_bool & in_usefullList,
                                                                     const GALGAS_bool & in_equatable
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_listDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_listDeclarationAST (in_isPredefined, in_mListTypeName, in_mPropertyList, in_usefullList, in_equatable COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_listDeclarationAST::readProperty_mListTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listDeclarationAST) ;
    return p->mProperty_mListTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_listDeclarationAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_propertyInCollectionListAST () ;
  }else{
    cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_listDeclarationAST::readProperty_usefullList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listDeclarationAST) ;
    return p->mProperty_usefullList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_listDeclarationAST::readProperty_equatable (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listDeclarationAST) ;
    return p->mProperty_equatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @listDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_listDeclarationAST::cPtr_listDeclarationAST (const GALGAS_bool & in_isPredefined,
                                                  const GALGAS_lstring & in_mListTypeName,
                                                  const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                                  const GALGAS_bool & in_usefullList,
                                                  const GALGAS_bool & in_equatable
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_mListTypeName (),
mProperty_mPropertyList (),
mProperty_usefullList (),
mProperty_equatable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mListTypeName = in_mListTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_usefullList = in_usefullList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_listDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listDeclarationAST ;
}

void cPtr_listDeclarationAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@listDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mListTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_usefullList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_equatable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_listDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_listDeclarationAST (mProperty_isPredefined, mProperty_mListTypeName, mProperty_mPropertyList, mProperty_usefullList, mProperty_equatable COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @listDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listDeclarationAST ("listDeclarationAST",
                                                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listDeclarationAST GALGAS_listDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_listDeclarationAST result ;
  const GALGAS_listDeclarationAST * p = (const GALGAS_listDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_listDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @listTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_listTypeForGeneration::cPtr_listTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mListElementTypeIndex (),
mProperty_mTypedAttributeList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_listTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mListElementTypeIndex.printNonNullClassInstanceProperties ("mListElementTypeIndex") ;
    mProperty_mTypedAttributeList.printNonNullClassInstanceProperties ("mTypedAttributeList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_listTypeForGeneration::objectCompare (const GALGAS_listTypeForGeneration & inOperand) const {
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

GALGAS_listTypeForGeneration::GALGAS_listTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_listTypeForGeneration GALGAS_listTypeForGeneration::
init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                  const GALGAS_unifiedTypeMapEntry & in_mListElementTypeIndex,
                  const GALGAS_typedPropertyList & in_mTypedAttributeList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_listTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_listTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->listTypeForGeneration_init_21__21__21_ (in_mSelfTypeEntry, in_mListElementTypeIndex, in_mTypedAttributeList, inCompiler) ;
  const GALGAS_listTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_listTypeForGeneration::
listTypeForGeneration_init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                        const GALGAS_unifiedTypeMapEntry & in_mListElementTypeIndex,
                                        const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                        Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mListElementTypeIndex = in_mListElementTypeIndex ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listTypeForGeneration::GALGAS_listTypeForGeneration (const cPtr_listTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_listTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_listTypeForGeneration GALGAS_listTypeForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                           const GALGAS_unifiedTypeMapEntry & in_mListElementTypeIndex,
                                                                           const GALGAS_typedPropertyList & in_mTypedAttributeList
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_listTypeForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_listTypeForGeneration (in_mSelfTypeEntry, in_mListElementTypeIndex, in_mTypedAttributeList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_listTypeForGeneration::readProperty_mListElementTypeIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_listTypeForGeneration * p = (cPtr_listTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listTypeForGeneration) ;
    return p->mProperty_mListElementTypeIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_listTypeForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_listTypeForGeneration * p = (cPtr_listTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listTypeForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @listTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_listTypeForGeneration::cPtr_listTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                        const GALGAS_unifiedTypeMapEntry & in_mListElementTypeIndex,
                                                        const GALGAS_typedPropertyList & in_mTypedAttributeList
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mListElementTypeIndex (),
mProperty_mTypedAttributeList () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mListElementTypeIndex = in_mListElementTypeIndex ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_listTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listTypeForGeneration ;
}

void cPtr_listTypeForGeneration::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@listTypeForGeneration:") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mListElementTypeIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_listTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_listTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mListElementTypeIndex, mProperty_mTypedAttributeList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @listTypeForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listTypeForGeneration ("listTypeForGeneration",
                                                                             & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listTypeForGeneration GALGAS_listTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_listTypeForGeneration result ;
  const GALGAS_listTypeForGeneration * p = (const GALGAS_listTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_listTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_listTypeForGeneration_2D_weak::objectCompare (const GALGAS_listTypeForGeneration_2D_weak & inOperand) const {
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

GALGAS_listTypeForGeneration_2D_weak::GALGAS_listTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_listTypeForGeneration_2D_weak & GALGAS_listTypeForGeneration_2D_weak::operator = (const GALGAS_listTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listTypeForGeneration_2D_weak::GALGAS_listTypeForGeneration_2D_weak (const GALGAS_listTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_listTypeForGeneration_2D_weak GALGAS_listTypeForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_listTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listTypeForGeneration GALGAS_listTypeForGeneration_2D_weak::bang_listTypeForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_listTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_listTypeForGeneration) ;
      result = GALGAS_listTypeForGeneration ((cPtr_listTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @listTypeForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listTypeForGeneration_2D_weak ("listTypeForGeneration-weak",
                                                                                     & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listTypeForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listTypeForGeneration_2D_weak GALGAS_listTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_listTypeForGeneration_2D_weak result ;
  const GALGAS_listTypeForGeneration_2D_weak * p = (const GALGAS_listTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_listTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dictDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_dictDeclarationAST::cPtr_dictDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mDictTypeName (),
mProperty_mKeyTypeName (),
mProperty_mPropertyList (),
mProperty_equatable () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dictDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mDictTypeName.printNonNullClassInstanceProperties ("mDictTypeName") ;
    mProperty_mKeyTypeName.printNonNullClassInstanceProperties ("mKeyTypeName") ;
    mProperty_mPropertyList.printNonNullClassInstanceProperties ("mPropertyList") ;
    mProperty_equatable.printNonNullClassInstanceProperties ("equatable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_dictDeclarationAST::objectCompare (const GALGAS_dictDeclarationAST & inOperand) const {
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

GALGAS_dictDeclarationAST::GALGAS_dictDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_dictDeclarationAST GALGAS_dictDeclarationAST::
init_21_isPredefined_21__21__21__21_equatable (const GALGAS_bool & in_isPredefined,
                                               const GALGAS_lstring & in_mDictTypeName,
                                               const GALGAS_lstring & in_mKeyTypeName,
                                               const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                               const GALGAS_bool & in_equatable,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cPtr_dictDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_dictDeclarationAST (inCompiler COMMA_THERE)) ;
  object->dictDeclarationAST_init_21_isPredefined_21__21__21__21_equatable (in_isPredefined, in_mDictTypeName, in_mKeyTypeName, in_mPropertyList, in_equatable, inCompiler) ;
  const GALGAS_dictDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::
dictDeclarationAST_init_21_isPredefined_21__21__21__21_equatable (const GALGAS_bool & in_isPredefined,
                                                                  const GALGAS_lstring & in_mDictTypeName,
                                                                  const GALGAS_lstring & in_mKeyTypeName,
                                                                  const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                                                  const GALGAS_bool & in_equatable,
                                                                  Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mDictTypeName = in_mDictTypeName ;
  mProperty_mKeyTypeName = in_mKeyTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dictDeclarationAST::GALGAS_dictDeclarationAST (const cPtr_dictDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dictDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_dictDeclarationAST GALGAS_dictDeclarationAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                     const GALGAS_lstring & in_mDictTypeName,
                                                                     const GALGAS_lstring & in_mKeyTypeName,
                                                                     const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                                                     const GALGAS_bool & in_equatable
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_dictDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_dictDeclarationAST (in_isPredefined, in_mDictTypeName, in_mKeyTypeName, in_mPropertyList, in_equatable COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_dictDeclarationAST::readProperty_mDictTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    return p->mProperty_mDictTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_dictDeclarationAST::readProperty_mKeyTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    return p->mProperty_mKeyTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_dictDeclarationAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_propertyInCollectionListAST () ;
  }else{
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_dictDeclarationAST::readProperty_equatable (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    return p->mProperty_equatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dictDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_dictDeclarationAST::cPtr_dictDeclarationAST (const GALGAS_bool & in_isPredefined,
                                                  const GALGAS_lstring & in_mDictTypeName,
                                                  const GALGAS_lstring & in_mKeyTypeName,
                                                  const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                                  const GALGAS_bool & in_equatable
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_mDictTypeName (),
mProperty_mKeyTypeName (),
mProperty_mPropertyList (),
mProperty_equatable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mDictTypeName = in_mDictTypeName ;
  mProperty_mKeyTypeName = in_mKeyTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_dictDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictDeclarationAST ;
}

void cPtr_dictDeclarationAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@dictDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDictTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKeyTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_equatable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dictDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dictDeclarationAST (mProperty_isPredefined, mProperty_mDictTypeName, mProperty_mKeyTypeName, mProperty_mPropertyList, mProperty_equatable COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @dictDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dictDeclarationAST ("dictDeclarationAST",
                                                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dictDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dictDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dictDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dictDeclarationAST GALGAS_dictDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_dictDeclarationAST result ;
  const GALGAS_dictDeclarationAST * p = (const GALGAS_dictDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_dictDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dictDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dictTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_dictTypeForGeneration::cPtr_dictTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mElementTypeEntry (),
mProperty_mDictTypeName (),
mProperty_mTypedAttributeList (),
mProperty_mKeyTypeName (),
mProperty_mOptionalElementTypeEntry () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dictTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mElementTypeEntry.printNonNullClassInstanceProperties ("mElementTypeEntry") ;
    mProperty_mDictTypeName.printNonNullClassInstanceProperties ("mDictTypeName") ;
    mProperty_mTypedAttributeList.printNonNullClassInstanceProperties ("mTypedAttributeList") ;
    mProperty_mKeyTypeName.printNonNullClassInstanceProperties ("mKeyTypeName") ;
    mProperty_mOptionalElementTypeEntry.printNonNullClassInstanceProperties ("mOptionalElementTypeEntry") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_dictTypeForGeneration::objectCompare (const GALGAS_dictTypeForGeneration & inOperand) const {
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

GALGAS_dictTypeForGeneration::GALGAS_dictTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_dictTypeForGeneration GALGAS_dictTypeForGeneration::
init_21__21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                              const GALGAS_unifiedTypeMapEntry & in_mElementTypeEntry,
                              const GALGAS_lstring & in_mDictTypeName,
                              const GALGAS_typedPropertyList & in_mTypedAttributeList,
                              const GALGAS_lstring & in_mKeyTypeName,
                              const GALGAS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_dictTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_dictTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->dictTypeForGeneration_init_21__21__21__21__21__21_ (in_mSelfTypeEntry, in_mElementTypeEntry, in_mDictTypeName, in_mTypedAttributeList, in_mKeyTypeName, in_mOptionalElementTypeEntry, inCompiler) ;
  const GALGAS_dictTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dictTypeForGeneration::
dictTypeForGeneration_init_21__21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                    const GALGAS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                    const GALGAS_lstring & in_mDictTypeName,
                                                    const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                    const GALGAS_lstring & in_mKeyTypeName,
                                                    const GALGAS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                                    Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mElementTypeEntry = in_mElementTypeEntry ;
  mProperty_mDictTypeName = in_mDictTypeName ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mKeyTypeName = in_mKeyTypeName ;
  mProperty_mOptionalElementTypeEntry = in_mOptionalElementTypeEntry ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dictTypeForGeneration::GALGAS_dictTypeForGeneration (const cPtr_dictTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dictTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_dictTypeForGeneration GALGAS_dictTypeForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                           const GALGAS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                                           const GALGAS_lstring & in_mDictTypeName,
                                                                           const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                           const GALGAS_lstring & in_mKeyTypeName,
                                                                           const GALGAS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_dictTypeForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_dictTypeForGeneration (in_mSelfTypeEntry, in_mElementTypeEntry, in_mDictTypeName, in_mTypedAttributeList, in_mKeyTypeName, in_mOptionalElementTypeEntry COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_dictTypeForGeneration::readProperty_mElementTypeEntry (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mElementTypeEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_dictTypeForGeneration::readProperty_mDictTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mDictTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_dictTypeForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_dictTypeForGeneration::readProperty_mKeyTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mKeyTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_dictTypeForGeneration::readProperty_mOptionalElementTypeEntry (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mOptionalElementTypeEntry ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dictTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_dictTypeForGeneration::cPtr_dictTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                        const GALGAS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                        const GALGAS_lstring & in_mDictTypeName,
                                                        const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                        const GALGAS_lstring & in_mKeyTypeName,
                                                        const GALGAS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mElementTypeEntry (),
mProperty_mDictTypeName (),
mProperty_mTypedAttributeList (),
mProperty_mKeyTypeName (),
mProperty_mOptionalElementTypeEntry () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mElementTypeEntry = in_mElementTypeEntry ;
  mProperty_mDictTypeName = in_mDictTypeName ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mKeyTypeName = in_mKeyTypeName ;
  mProperty_mOptionalElementTypeEntry = in_mOptionalElementTypeEntry ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_dictTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictTypeForGeneration ;
}

void cPtr_dictTypeForGeneration::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@dictTypeForGeneration:") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDictTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKeyTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionalElementTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dictTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dictTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mElementTypeEntry, mProperty_mDictTypeName, mProperty_mTypedAttributeList, mProperty_mKeyTypeName, mProperty_mOptionalElementTypeEntry COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @dictTypeForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dictTypeForGeneration ("dictTypeForGeneration",
                                                                             & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dictTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dictTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dictTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dictTypeForGeneration GALGAS_dictTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_dictTypeForGeneration result ;
  const GALGAS_dictTypeForGeneration * p = (const GALGAS_dictTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_dictTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dictTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_dictTypeForGeneration_2D_weak::objectCompare (const GALGAS_dictTypeForGeneration_2D_weak & inOperand) const {
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

GALGAS_dictTypeForGeneration_2D_weak::GALGAS_dictTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_dictTypeForGeneration_2D_weak & GALGAS_dictTypeForGeneration_2D_weak::operator = (const GALGAS_dictTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dictTypeForGeneration_2D_weak::GALGAS_dictTypeForGeneration_2D_weak (const GALGAS_dictTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_dictTypeForGeneration_2D_weak GALGAS_dictTypeForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_dictTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dictTypeForGeneration GALGAS_dictTypeForGeneration_2D_weak::bang_dictTypeForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dictTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dictTypeForGeneration) ;
      result = GALGAS_dictTypeForGeneration ((cPtr_dictTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @dictTypeForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dictTypeForGeneration_2D_weak ("dictTypeForGeneration-weak",
                                                                                     & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dictTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictTypeForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dictTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dictTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dictTypeForGeneration_2D_weak GALGAS_dictTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_dictTypeForGeneration_2D_weak result ;
  const GALGAS_dictTypeForGeneration_2D_weak * p = (const GALGAS_dictTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_dictTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dictTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @mapDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_mapDeclarationAST::cPtr_mapDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mMapTypeName (),
mProperty_mPropertyList (),
mProperty_mInsertMethodList (),
mProperty_mSearchMethodList (),
mProperty_mRemoveMethodList (),
mProperty_mInsertOrReplaceDeclarationListAST (),
mProperty_equatable () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_mapDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mMapTypeName.printNonNullClassInstanceProperties ("mMapTypeName") ;
    mProperty_mPropertyList.printNonNullClassInstanceProperties ("mPropertyList") ;
    mProperty_mInsertMethodList.printNonNullClassInstanceProperties ("mInsertMethodList") ;
    mProperty_mSearchMethodList.printNonNullClassInstanceProperties ("mSearchMethodList") ;
    mProperty_mRemoveMethodList.printNonNullClassInstanceProperties ("mRemoveMethodList") ;
    mProperty_mInsertOrReplaceDeclarationListAST.printNonNullClassInstanceProperties ("mInsertOrReplaceDeclarationListAST") ;
    mProperty_equatable.printNonNullClassInstanceProperties ("equatable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_mapDeclarationAST::objectCompare (const GALGAS_mapDeclarationAST & inOperand) const {
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

GALGAS_mapDeclarationAST::GALGAS_mapDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_mapDeclarationAST GALGAS_mapDeclarationAST::
init_21_isPredefined_21__21__21__21__21__21__21_equatable (const GALGAS_bool & in_isPredefined,
                                                           const GALGAS_lstring & in_mMapTypeName,
                                                           const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                                           const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                                           const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                                           const GALGAS_mapRemoveMethodListAST & in_mRemoveMethodList,
                                                           const GALGAS_insertOrReplaceDeclarationListAST & in_mInsertOrReplaceDeclarationListAST,
                                                           const GALGAS_bool & in_equatable,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cPtr_mapDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_mapDeclarationAST (inCompiler COMMA_THERE)) ;
  object->mapDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_equatable (in_isPredefined, in_mMapTypeName, in_mPropertyList, in_mInsertMethodList, in_mSearchMethodList, in_mRemoveMethodList, in_mInsertOrReplaceDeclarationListAST, in_equatable, inCompiler) ;
  const GALGAS_mapDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::
mapDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_equatable (const GALGAS_bool & in_isPredefined,
                                                                             const GALGAS_lstring & in_mMapTypeName,
                                                                             const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                                                             const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                                                             const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                                                             const GALGAS_mapRemoveMethodListAST & in_mRemoveMethodList,
                                                                             const GALGAS_insertOrReplaceDeclarationListAST & in_mInsertOrReplaceDeclarationListAST,
                                                                             const GALGAS_bool & in_equatable,
                                                                             Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mMapTypeName = in_mMapTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_mInsertMethodList = in_mInsertMethodList ;
  mProperty_mSearchMethodList = in_mSearchMethodList ;
  mProperty_mRemoveMethodList = in_mRemoveMethodList ;
  mProperty_mInsertOrReplaceDeclarationListAST = in_mInsertOrReplaceDeclarationListAST ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapDeclarationAST::GALGAS_mapDeclarationAST (const cPtr_mapDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mapDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_mapDeclarationAST GALGAS_mapDeclarationAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                   const GALGAS_lstring & in_mMapTypeName,
                                                                   const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                                                   const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                                                   const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                                                   const GALGAS_mapRemoveMethodListAST & in_mRemoveMethodList,
                                                                   const GALGAS_insertOrReplaceDeclarationListAST & in_mInsertOrReplaceDeclarationListAST,
                                                                   const GALGAS_bool & in_equatable
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_mapDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_mapDeclarationAST (in_isPredefined, in_mMapTypeName, in_mPropertyList, in_mInsertMethodList, in_mSearchMethodList, in_mRemoveMethodList, in_mInsertOrReplaceDeclarationListAST, in_equatable COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapDeclarationAST::readProperty_mMapTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mMapTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_mapDeclarationAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_propertyInCollectionListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_mapDeclarationAST::readProperty_mInsertMethodList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_insertMethodListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mInsertMethodList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapDeclarationAST::readProperty_mSearchMethodList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_mapSearchMethodListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mSearchMethodList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapDeclarationAST::readProperty_mRemoveMethodList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_mapRemoveMethodListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mRemoveMethodList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST GALGAS_mapDeclarationAST::readProperty_mInsertOrReplaceDeclarationListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_insertOrReplaceDeclarationListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mInsertOrReplaceDeclarationListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mapDeclarationAST::readProperty_equatable (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_equatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @mapDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_mapDeclarationAST::cPtr_mapDeclarationAST (const GALGAS_bool & in_isPredefined,
                                                const GALGAS_lstring & in_mMapTypeName,
                                                const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                                const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                                const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                                const GALGAS_mapRemoveMethodListAST & in_mRemoveMethodList,
                                                const GALGAS_insertOrReplaceDeclarationListAST & in_mInsertOrReplaceDeclarationListAST,
                                                const GALGAS_bool & in_equatable
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_mMapTypeName (),
mProperty_mPropertyList (),
mProperty_mInsertMethodList (),
mProperty_mSearchMethodList (),
mProperty_mRemoveMethodList (),
mProperty_mInsertOrReplaceDeclarationListAST (),
mProperty_equatable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mMapTypeName = in_mMapTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_mInsertMethodList = in_mInsertMethodList ;
  mProperty_mSearchMethodList = in_mSearchMethodList ;
  mProperty_mRemoveMethodList = in_mRemoveMethodList ;
  mProperty_mInsertOrReplaceDeclarationListAST = in_mInsertOrReplaceDeclarationListAST ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_mapDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapDeclarationAST ;
}

void cPtr_mapDeclarationAST::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@mapDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMapTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInsertMethodList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSearchMethodList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRemoveMethodList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInsertOrReplaceDeclarationListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_equatable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_mapDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_mapDeclarationAST (mProperty_isPredefined, mProperty_mMapTypeName, mProperty_mPropertyList, mProperty_mInsertMethodList, mProperty_mSearchMethodList, mProperty_mRemoveMethodList, mProperty_mInsertOrReplaceDeclarationListAST, mProperty_equatable COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @mapDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapDeclarationAST ("mapDeclarationAST",
                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapDeclarationAST GALGAS_mapDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_mapDeclarationAST result ;
  const GALGAS_mapDeclarationAST * p = (const GALGAS_mapDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_mapDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @mapTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_mapTypeForGeneration::cPtr_mapTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mElementTypeEntry (),
mProperty_mMapTypeName (),
mProperty_mTypedAttributeList (),
mProperty_mInsertMethodList (),
mProperty_mSearchMethodList (),
mProperty_mRemoveMethodList (),
mProperty_mHasInsertOrReplaceModifier (),
mProperty_mOptionalElementTypeEntry () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_mapTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mElementTypeEntry.printNonNullClassInstanceProperties ("mElementTypeEntry") ;
    mProperty_mMapTypeName.printNonNullClassInstanceProperties ("mMapTypeName") ;
    mProperty_mTypedAttributeList.printNonNullClassInstanceProperties ("mTypedAttributeList") ;
    mProperty_mInsertMethodList.printNonNullClassInstanceProperties ("mInsertMethodList") ;
    mProperty_mSearchMethodList.printNonNullClassInstanceProperties ("mSearchMethodList") ;
    mProperty_mRemoveMethodList.printNonNullClassInstanceProperties ("mRemoveMethodList") ;
    mProperty_mHasInsertOrReplaceModifier.printNonNullClassInstanceProperties ("mHasInsertOrReplaceModifier") ;
    mProperty_mOptionalElementTypeEntry.printNonNullClassInstanceProperties ("mOptionalElementTypeEntry") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_mapTypeForGeneration::objectCompare (const GALGAS_mapTypeForGeneration & inOperand) const {
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

GALGAS_mapTypeForGeneration::GALGAS_mapTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_mapTypeForGeneration GALGAS_mapTypeForGeneration::
init_21__21__21__21__21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                          const GALGAS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                          const GALGAS_lstring & in_mMapTypeName,
                                          const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                          const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                          const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                          const GALGAS_mapRemoveMethodListAST & in_mRemoveMethodList,
                                          const GALGAS_bool & in_mHasInsertOrReplaceModifier,
                                          const GALGAS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_mapTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_mapTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->mapTypeForGeneration_init_21__21__21__21__21__21__21__21__21_ (in_mSelfTypeEntry, in_mElementTypeEntry, in_mMapTypeName, in_mTypedAttributeList, in_mInsertMethodList, in_mSearchMethodList, in_mRemoveMethodList, in_mHasInsertOrReplaceModifier, in_mOptionalElementTypeEntry, inCompiler) ;
  const GALGAS_mapTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_mapTypeForGeneration::
mapTypeForGeneration_init_21__21__21__21__21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                               const GALGAS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                               const GALGAS_lstring & in_mMapTypeName,
                                                               const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                               const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                                               const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                                               const GALGAS_mapRemoveMethodListAST & in_mRemoveMethodList,
                                                               const GALGAS_bool & in_mHasInsertOrReplaceModifier,
                                                               const GALGAS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                                               Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mElementTypeEntry = in_mElementTypeEntry ;
  mProperty_mMapTypeName = in_mMapTypeName ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mInsertMethodList = in_mInsertMethodList ;
  mProperty_mSearchMethodList = in_mSearchMethodList ;
  mProperty_mRemoveMethodList = in_mRemoveMethodList ;
  mProperty_mHasInsertOrReplaceModifier = in_mHasInsertOrReplaceModifier ;
  mProperty_mOptionalElementTypeEntry = in_mOptionalElementTypeEntry ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapTypeForGeneration::GALGAS_mapTypeForGeneration (const cPtr_mapTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mapTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_mapTypeForGeneration GALGAS_mapTypeForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                         const GALGAS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                                         const GALGAS_lstring & in_mMapTypeName,
                                                                         const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                         const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                                                         const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                                                         const GALGAS_mapRemoveMethodListAST & in_mRemoveMethodList,
                                                                         const GALGAS_bool & in_mHasInsertOrReplaceModifier,
                                                                         const GALGAS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_mapTypeForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_mapTypeForGeneration (in_mSelfTypeEntry, in_mElementTypeEntry, in_mMapTypeName, in_mTypedAttributeList, in_mInsertMethodList, in_mSearchMethodList, in_mRemoveMethodList, in_mHasInsertOrReplaceModifier, in_mOptionalElementTypeEntry COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_mapTypeForGeneration::readProperty_mElementTypeEntry (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mElementTypeEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapTypeForGeneration::readProperty_mMapTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mMapTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_mapTypeForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_mapTypeForGeneration::readProperty_mInsertMethodList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_insertMethodListAST () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mInsertMethodList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapTypeForGeneration::readProperty_mSearchMethodList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_mapSearchMethodListAST () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mSearchMethodList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapTypeForGeneration::readProperty_mRemoveMethodList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_mapRemoveMethodListAST () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mRemoveMethodList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mapTypeForGeneration::readProperty_mHasInsertOrReplaceModifier (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mHasInsertOrReplaceModifier ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_mapTypeForGeneration::readProperty_mOptionalElementTypeEntry (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mOptionalElementTypeEntry ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @mapTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_mapTypeForGeneration::cPtr_mapTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                      const GALGAS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                      const GALGAS_lstring & in_mMapTypeName,
                                                      const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                      const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                                      const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                                      const GALGAS_mapRemoveMethodListAST & in_mRemoveMethodList,
                                                      const GALGAS_bool & in_mHasInsertOrReplaceModifier,
                                                      const GALGAS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mElementTypeEntry (),
mProperty_mMapTypeName (),
mProperty_mTypedAttributeList (),
mProperty_mInsertMethodList (),
mProperty_mSearchMethodList (),
mProperty_mRemoveMethodList (),
mProperty_mHasInsertOrReplaceModifier (),
mProperty_mOptionalElementTypeEntry () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mElementTypeEntry = in_mElementTypeEntry ;
  mProperty_mMapTypeName = in_mMapTypeName ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mInsertMethodList = in_mInsertMethodList ;
  mProperty_mSearchMethodList = in_mSearchMethodList ;
  mProperty_mRemoveMethodList = in_mRemoveMethodList ;
  mProperty_mHasInsertOrReplaceModifier = in_mHasInsertOrReplaceModifier ;
  mProperty_mOptionalElementTypeEntry = in_mOptionalElementTypeEntry ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_mapTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapTypeForGeneration ;
}

void cPtr_mapTypeForGeneration::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@mapTypeForGeneration:") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMapTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInsertMethodList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSearchMethodList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRemoveMethodList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasInsertOrReplaceModifier.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionalElementTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_mapTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_mapTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mElementTypeEntry, mProperty_mMapTypeName, mProperty_mTypedAttributeList, mProperty_mInsertMethodList, mProperty_mSearchMethodList, mProperty_mRemoveMethodList, mProperty_mHasInsertOrReplaceModifier, mProperty_mOptionalElementTypeEntry COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @mapTypeForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapTypeForGeneration ("mapTypeForGeneration",
                                                                            & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapTypeForGeneration GALGAS_mapTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_mapTypeForGeneration result ;
  const GALGAS_mapTypeForGeneration * p = (const GALGAS_mapTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_mapTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_mapTypeForGeneration_2D_weak::objectCompare (const GALGAS_mapTypeForGeneration_2D_weak & inOperand) const {
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

GALGAS_mapTypeForGeneration_2D_weak::GALGAS_mapTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapTypeForGeneration_2D_weak & GALGAS_mapTypeForGeneration_2D_weak::operator = (const GALGAS_mapTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapTypeForGeneration_2D_weak::GALGAS_mapTypeForGeneration_2D_weak (const GALGAS_mapTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapTypeForGeneration_2D_weak GALGAS_mapTypeForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_mapTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapTypeForGeneration GALGAS_mapTypeForGeneration_2D_weak::bang_mapTypeForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_mapTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_mapTypeForGeneration) ;
      result = GALGAS_mapTypeForGeneration ((cPtr_mapTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @mapTypeForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapTypeForGeneration_2D_weak ("mapTypeForGeneration-weak",
                                                                                    & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapTypeForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mapTypeForGeneration_2D_weak GALGAS_mapTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_mapTypeForGeneration_2D_weak result ;
  const GALGAS_mapTypeForGeneration_2D_weak * p = (const GALGAS_mapTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_mapTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @optionalTypeDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_optionalTypeDeclarationAST::cPtr_optionalTypeDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_optionalTypeName (),
mProperty_unwrappedTypeName (),
mProperty_isUsefull (),
mProperty_equatable () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionalTypeDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_optionalTypeName.printNonNullClassInstanceProperties ("optionalTypeName") ;
    mProperty_unwrappedTypeName.printNonNullClassInstanceProperties ("unwrappedTypeName") ;
    mProperty_isUsefull.printNonNullClassInstanceProperties ("isUsefull") ;
    mProperty_equatable.printNonNullClassInstanceProperties ("equatable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_optionalTypeDeclarationAST::objectCompare (const GALGAS_optionalTypeDeclarationAST & inOperand) const {
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

GALGAS_optionalTypeDeclarationAST::GALGAS_optionalTypeDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_optionalTypeDeclarationAST GALGAS_optionalTypeDeclarationAST::
init_21_isPredefined_21_optionalTypeName_21_unwrappedTypeName_21_isUsefull_21_equatable (const GALGAS_bool & in_isPredefined,
                                                                                         const GALGAS_lstring & in_optionalTypeName,
                                                                                         const GALGAS_lstring & in_unwrappedTypeName,
                                                                                         const GALGAS_bool & in_isUsefull,
                                                                                         const GALGAS_bool & in_equatable,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cPtr_optionalTypeDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_optionalTypeDeclarationAST (inCompiler COMMA_THERE)) ;
  object->optionalTypeDeclarationAST_init_21_isPredefined_21_optionalTypeName_21_unwrappedTypeName_21_isUsefull_21_equatable (in_isPredefined, in_optionalTypeName, in_unwrappedTypeName, in_isUsefull, in_equatable, inCompiler) ;
  const GALGAS_optionalTypeDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeDeclarationAST::
optionalTypeDeclarationAST_init_21_isPredefined_21_optionalTypeName_21_unwrappedTypeName_21_isUsefull_21_equatable (const GALGAS_bool & in_isPredefined,
                                                                                                                    const GALGAS_lstring & in_optionalTypeName,
                                                                                                                    const GALGAS_lstring & in_unwrappedTypeName,
                                                                                                                    const GALGAS_bool & in_isUsefull,
                                                                                                                    const GALGAS_bool & in_equatable,
                                                                                                                    Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_optionalTypeName = in_optionalTypeName ;
  mProperty_unwrappedTypeName = in_unwrappedTypeName ;
  mProperty_isUsefull = in_isUsefull ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalTypeDeclarationAST::GALGAS_optionalTypeDeclarationAST (const cPtr_optionalTypeDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionalTypeDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_optionalTypeDeclarationAST GALGAS_optionalTypeDeclarationAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                                     const GALGAS_lstring & in_optionalTypeName,
                                                                                     const GALGAS_lstring & in_unwrappedTypeName,
                                                                                     const GALGAS_bool & in_isUsefull,
                                                                                     const GALGAS_bool & in_equatable
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_optionalTypeDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_optionalTypeDeclarationAST (in_isPredefined, in_optionalTypeName, in_unwrappedTypeName, in_isUsefull, in_equatable COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_optionalTypeDeclarationAST::readProperty_optionalTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_optionalTypeDeclarationAST * p = (cPtr_optionalTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionalTypeDeclarationAST) ;
    return p->mProperty_optionalTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_optionalTypeDeclarationAST::readProperty_unwrappedTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_optionalTypeDeclarationAST * p = (cPtr_optionalTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionalTypeDeclarationAST) ;
    return p->mProperty_unwrappedTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionalTypeDeclarationAST::readProperty_isUsefull (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_optionalTypeDeclarationAST * p = (cPtr_optionalTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionalTypeDeclarationAST) ;
    return p->mProperty_isUsefull ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionalTypeDeclarationAST::readProperty_equatable (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_optionalTypeDeclarationAST * p = (cPtr_optionalTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionalTypeDeclarationAST) ;
    return p->mProperty_equatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionalTypeDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_optionalTypeDeclarationAST::cPtr_optionalTypeDeclarationAST (const GALGAS_bool & in_isPredefined,
                                                                  const GALGAS_lstring & in_optionalTypeName,
                                                                  const GALGAS_lstring & in_unwrappedTypeName,
                                                                  const GALGAS_bool & in_isUsefull,
                                                                  const GALGAS_bool & in_equatable
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_optionalTypeName (),
mProperty_unwrappedTypeName (),
mProperty_isUsefull (),
mProperty_equatable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_optionalTypeName = in_optionalTypeName ;
  mProperty_unwrappedTypeName = in_unwrappedTypeName ;
  mProperty_isUsefull = in_isUsefull ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_optionalTypeDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalTypeDeclarationAST ;
}

void cPtr_optionalTypeDeclarationAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@optionalTypeDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_optionalTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_unwrappedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isUsefull.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_equatable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_optionalTypeDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionalTypeDeclarationAST (mProperty_isPredefined, mProperty_optionalTypeName, mProperty_unwrappedTypeName, mProperty_isUsefull, mProperty_equatable COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @optionalTypeDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalTypeDeclarationAST ("optionalTypeDeclarationAST",
                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionalTypeDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalTypeDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionalTypeDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionalTypeDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalTypeDeclarationAST GALGAS_optionalTypeDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_optionalTypeDeclarationAST result ;
  const GALGAS_optionalTypeDeclarationAST * p = (const GALGAS_optionalTypeDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_optionalTypeDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionalTypeDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @optionalTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_optionalTypeForGeneration::cPtr_optionalTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_unwrappedType () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionalTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_unwrappedType.printNonNullClassInstanceProperties ("unwrappedType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_optionalTypeForGeneration::objectCompare (const GALGAS_optionalTypeForGeneration & inOperand) const {
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

GALGAS_optionalTypeForGeneration::GALGAS_optionalTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_optionalTypeForGeneration GALGAS_optionalTypeForGeneration::
init_21__21_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
              const GALGAS_unifiedTypeMapEntry & in_unwrappedType,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_optionalTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_optionalTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->optionalTypeForGeneration_init_21__21_ (in_mSelfTypeEntry, in_unwrappedType, inCompiler) ;
  const GALGAS_optionalTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeForGeneration::
optionalTypeForGeneration_init_21__21_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                        const GALGAS_unifiedTypeMapEntry & in_unwrappedType,
                                        Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_unwrappedType = in_unwrappedType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalTypeForGeneration::GALGAS_optionalTypeForGeneration (const cPtr_optionalTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionalTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_optionalTypeForGeneration GALGAS_optionalTypeForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                                   const GALGAS_unifiedTypeMapEntry & in_unwrappedType
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_optionalTypeForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_optionalTypeForGeneration (in_mSelfTypeEntry, in_unwrappedType COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_optionalTypeForGeneration::readProperty_unwrappedType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_optionalTypeForGeneration * p = (cPtr_optionalTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionalTypeForGeneration) ;
    return p->mProperty_unwrappedType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionalTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_optionalTypeForGeneration::cPtr_optionalTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                const GALGAS_unifiedTypeMapEntry & in_unwrappedType
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_unwrappedType () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_unwrappedType = in_unwrappedType ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_optionalTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalTypeForGeneration ;
}

void cPtr_optionalTypeForGeneration::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@optionalTypeForGeneration:") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_unwrappedType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_optionalTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionalTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_unwrappedType COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @optionalTypeForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalTypeForGeneration ("optionalTypeForGeneration",
                                                                                 & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionalTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionalTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionalTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalTypeForGeneration GALGAS_optionalTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_optionalTypeForGeneration result ;
  const GALGAS_optionalTypeForGeneration * p = (const GALGAS_optionalTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_optionalTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionalTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_optionalTypeForGeneration_2D_weak::objectCompare (const GALGAS_optionalTypeForGeneration_2D_weak & inOperand) const {
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

GALGAS_optionalTypeForGeneration_2D_weak::GALGAS_optionalTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalTypeForGeneration_2D_weak & GALGAS_optionalTypeForGeneration_2D_weak::operator = (const GALGAS_optionalTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalTypeForGeneration_2D_weak::GALGAS_optionalTypeForGeneration_2D_weak (const GALGAS_optionalTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalTypeForGeneration_2D_weak GALGAS_optionalTypeForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_optionalTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalTypeForGeneration GALGAS_optionalTypeForGeneration_2D_weak::bang_optionalTypeForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_optionalTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_optionalTypeForGeneration) ;
      result = GALGAS_optionalTypeForGeneration ((cPtr_optionalTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @optionalTypeForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalTypeForGeneration_2D_weak ("optionalTypeForGeneration-weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionalTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalTypeForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionalTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionalTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalTypeForGeneration_2D_weak GALGAS_optionalTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_optionalTypeForGeneration_2D_weak result ;
  const GALGAS_optionalTypeForGeneration_2D_weak * p = (const GALGAS_optionalTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_optionalTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionalTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @sortedListDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_sortedListDeclarationAST::cPtr_sortedListDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mSortedListTypeName (),
mProperty_mPropertyList (),
mProperty_mSortDescriptorList (),
mProperty_equatable () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sortedListDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mSortedListTypeName.printNonNullClassInstanceProperties ("mSortedListTypeName") ;
    mProperty_mPropertyList.printNonNullClassInstanceProperties ("mPropertyList") ;
    mProperty_mSortDescriptorList.printNonNullClassInstanceProperties ("mSortDescriptorList") ;
    mProperty_equatable.printNonNullClassInstanceProperties ("equatable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_sortedListDeclarationAST::objectCompare (const GALGAS_sortedListDeclarationAST & inOperand) const {
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

GALGAS_sortedListDeclarationAST::GALGAS_sortedListDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_sortedListDeclarationAST GALGAS_sortedListDeclarationAST::
init_21_isPredefined_21__21__21__21_equatable (const GALGAS_bool & in_isPredefined,
                                               const GALGAS_lstring & in_mSortedListTypeName,
                                               const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                               const GALGAS_sortedListSortDescriptorListAST & in_mSortDescriptorList,
                                               const GALGAS_bool & in_equatable,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cPtr_sortedListDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_sortedListDeclarationAST (inCompiler COMMA_THERE)) ;
  object->sortedListDeclarationAST_init_21_isPredefined_21__21__21__21_equatable (in_isPredefined, in_mSortedListTypeName, in_mPropertyList, in_mSortDescriptorList, in_equatable, inCompiler) ;
  const GALGAS_sortedListDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::
sortedListDeclarationAST_init_21_isPredefined_21__21__21__21_equatable (const GALGAS_bool & in_isPredefined,
                                                                        const GALGAS_lstring & in_mSortedListTypeName,
                                                                        const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                                                        const GALGAS_sortedListSortDescriptorListAST & in_mSortDescriptorList,
                                                                        const GALGAS_bool & in_equatable,
                                                                        Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mSortedListTypeName = in_mSortedListTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_mSortDescriptorList = in_mSortDescriptorList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListDeclarationAST::GALGAS_sortedListDeclarationAST (const cPtr_sortedListDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sortedListDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_sortedListDeclarationAST GALGAS_sortedListDeclarationAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                                 const GALGAS_lstring & in_mSortedListTypeName,
                                                                                 const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                                                                 const GALGAS_sortedListSortDescriptorListAST & in_mSortDescriptorList,
                                                                                 const GALGAS_bool & in_equatable
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_sortedListDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_sortedListDeclarationAST (in_isPredefined, in_mSortedListTypeName, in_mPropertyList, in_mSortDescriptorList, in_equatable COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_sortedListDeclarationAST::readProperty_mSortedListTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    return p->mProperty_mSortedListTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_sortedListDeclarationAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_propertyInCollectionListAST () ;
  }else{
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListDeclarationAST::readProperty_mSortDescriptorList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_sortedListSortDescriptorListAST () ;
  }else{
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    return p->mProperty_mSortDescriptorList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_sortedListDeclarationAST::readProperty_equatable (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    return p->mProperty_equatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @sortedListDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_sortedListDeclarationAST::cPtr_sortedListDeclarationAST (const GALGAS_bool & in_isPredefined,
                                                              const GALGAS_lstring & in_mSortedListTypeName,
                                                              const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                                              const GALGAS_sortedListSortDescriptorListAST & in_mSortDescriptorList,
                                                              const GALGAS_bool & in_equatable
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_mSortedListTypeName (),
mProperty_mPropertyList (),
mProperty_mSortDescriptorList (),
mProperty_equatable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mSortedListTypeName = in_mSortedListTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_mSortDescriptorList = in_mSortDescriptorList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sortedListDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListDeclarationAST ;
}

void cPtr_sortedListDeclarationAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@sortedListDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSortedListTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSortDescriptorList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_equatable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sortedListDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sortedListDeclarationAST (mProperty_isPredefined, mProperty_mSortedListTypeName, mProperty_mPropertyList, mProperty_mSortDescriptorList, mProperty_equatable COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @sortedListDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedListDeclarationAST ("sortedListDeclarationAST",
                                                                                & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sortedListDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sortedListDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortedListDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListDeclarationAST GALGAS_sortedListDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_sortedListDeclarationAST result ;
  const GALGAS_sortedListDeclarationAST * p = (const GALGAS_sortedListDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sortedListDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedListDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @sortedListTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_sortedListTypeForGeneration::cPtr_sortedListTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mListElementTypeIndex (),
mProperty_mTypedAttributeList (),
mProperty_mSortDescriptorList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sortedListTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mListElementTypeIndex.printNonNullClassInstanceProperties ("mListElementTypeIndex") ;
    mProperty_mTypedAttributeList.printNonNullClassInstanceProperties ("mTypedAttributeList") ;
    mProperty_mSortDescriptorList.printNonNullClassInstanceProperties ("mSortDescriptorList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_sortedListTypeForGeneration::objectCompare (const GALGAS_sortedListTypeForGeneration & inOperand) const {
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

GALGAS_sortedListTypeForGeneration::GALGAS_sortedListTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration GALGAS_sortedListTypeForGeneration::
init_21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                      const GALGAS_unifiedTypeMapEntry & in_mListElementTypeIndex,
                      const GALGAS_typedPropertyList & in_mTypedAttributeList,
                      const GALGAS_sortDescriptorListForGeneration & in_mSortDescriptorList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_sortedListTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_sortedListTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->sortedListTypeForGeneration_init_21__21__21__21_ (in_mSelfTypeEntry, in_mListElementTypeIndex, in_mTypedAttributeList, in_mSortDescriptorList, inCompiler) ;
  const GALGAS_sortedListTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_sortedListTypeForGeneration::
sortedListTypeForGeneration_init_21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                  const GALGAS_unifiedTypeMapEntry & in_mListElementTypeIndex,
                                                  const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                  const GALGAS_sortDescriptorListForGeneration & in_mSortDescriptorList,
                                                  Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mListElementTypeIndex = in_mListElementTypeIndex ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mSortDescriptorList = in_mSortDescriptorList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration::GALGAS_sortedListTypeForGeneration (const cPtr_sortedListTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sortedListTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration GALGAS_sortedListTypeForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                                       const GALGAS_unifiedTypeMapEntry & in_mListElementTypeIndex,
                                                                                       const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                                       const GALGAS_sortDescriptorListForGeneration & in_mSortDescriptorList
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_sortedListTypeForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_sortedListTypeForGeneration (in_mSelfTypeEntry, in_mListElementTypeIndex, in_mTypedAttributeList, in_mSortDescriptorList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_sortedListTypeForGeneration::readProperty_mListElementTypeIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_sortedListTypeForGeneration * p = (cPtr_sortedListTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListTypeForGeneration) ;
    return p->mProperty_mListElementTypeIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_sortedListTypeForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_sortedListTypeForGeneration * p = (cPtr_sortedListTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListTypeForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration GALGAS_sortedListTypeForGeneration::readProperty_mSortDescriptorList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_sortDescriptorListForGeneration () ;
  }else{
    cPtr_sortedListTypeForGeneration * p = (cPtr_sortedListTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListTypeForGeneration) ;
    return p->mProperty_mSortDescriptorList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @sortedListTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_sortedListTypeForGeneration::cPtr_sortedListTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                    const GALGAS_unifiedTypeMapEntry & in_mListElementTypeIndex,
                                                                    const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                    const GALGAS_sortDescriptorListForGeneration & in_mSortDescriptorList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mListElementTypeIndex (),
mProperty_mTypedAttributeList (),
mProperty_mSortDescriptorList () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mListElementTypeIndex = in_mListElementTypeIndex ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mSortDescriptorList = in_mSortDescriptorList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sortedListTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListTypeForGeneration ;
}

void cPtr_sortedListTypeForGeneration::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@sortedListTypeForGeneration:") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mListElementTypeIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSortDescriptorList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sortedListTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sortedListTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mListElementTypeIndex, mProperty_mTypedAttributeList, mProperty_mSortDescriptorList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @sortedListTypeForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedListTypeForGeneration ("sortedListTypeForGeneration",
                                                                                   & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sortedListTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sortedListTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortedListTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration GALGAS_sortedListTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sortedListTypeForGeneration result ;
  const GALGAS_sortedListTypeForGeneration * p = (const GALGAS_sortedListTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sortedListTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedListTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_sortedListTypeForGeneration_2D_weak::objectCompare (const GALGAS_sortedListTypeForGeneration_2D_weak & inOperand) const {
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

GALGAS_sortedListTypeForGeneration_2D_weak::GALGAS_sortedListTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration_2D_weak & GALGAS_sortedListTypeForGeneration_2D_weak::operator = (const GALGAS_sortedListTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration_2D_weak::GALGAS_sortedListTypeForGeneration_2D_weak (const GALGAS_sortedListTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration_2D_weak GALGAS_sortedListTypeForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_sortedListTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration GALGAS_sortedListTypeForGeneration_2D_weak::bang_sortedListTypeForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_sortedListTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sortedListTypeForGeneration) ;
      result = GALGAS_sortedListTypeForGeneration ((cPtr_sortedListTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @sortedListTypeForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedListTypeForGeneration_2D_weak ("sortedListTypeForGeneration-weak",
                                                                                           & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sortedListTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListTypeForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sortedListTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortedListTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration_2D_weak GALGAS_sortedListTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sortedListTypeForGeneration_2D_weak result ;
  const GALGAS_sortedListTypeForGeneration_2D_weak * p = (const GALGAS_sortedListTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sortedListTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedListTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @structDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_structDeclarationAST::cPtr_structDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_structTypeName (),
mProperty_mStructurePropertyListAST (),
mProperty_enumeratedElementTypeName (),
mProperty_comparison (),
mProperty_isUsefull () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_structDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_structTypeName.printNonNullClassInstanceProperties ("structTypeName") ;
    mProperty_mStructurePropertyListAST.printNonNullClassInstanceProperties ("mStructurePropertyListAST") ;
    mProperty_enumeratedElementTypeName.printNonNullClassInstanceProperties ("enumeratedElementTypeName") ;
    mProperty_comparison.printNonNullClassInstanceProperties ("comparison") ;
    mProperty_isUsefull.printNonNullClassInstanceProperties ("isUsefull") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_structDeclarationAST::objectCompare (const GALGAS_structDeclarationAST & inOperand) const {
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

GALGAS_structDeclarationAST::GALGAS_structDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_structDeclarationAST GALGAS_structDeclarationAST::
init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefull (const GALGAS_bool & in_isPredefined,
                                                                                      const GALGAS_lstring & in_structTypeName,
                                                                                      const GALGAS_propertyInCollectionListAST & in_mStructurePropertyListAST,
                                                                                      const GALGAS_string & in_enumeratedElementTypeName,
                                                                                      const GALGAS_structComparison & in_comparison,
                                                                                      const GALGAS_bool & in_isUsefull,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cPtr_structDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_structDeclarationAST (inCompiler COMMA_THERE)) ;
  object->structDeclarationAST_init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefull (in_isPredefined, in_structTypeName, in_mStructurePropertyListAST, in_enumeratedElementTypeName, in_comparison, in_isUsefull, inCompiler) ;
  const GALGAS_structDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_structDeclarationAST::
structDeclarationAST_init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefull (const GALGAS_bool & in_isPredefined,
                                                                                                           const GALGAS_lstring & in_structTypeName,
                                                                                                           const GALGAS_propertyInCollectionListAST & in_mStructurePropertyListAST,
                                                                                                           const GALGAS_string & in_enumeratedElementTypeName,
                                                                                                           const GALGAS_structComparison & in_comparison,
                                                                                                           const GALGAS_bool & in_isUsefull,
                                                                                                           Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_structTypeName = in_structTypeName ;
  mProperty_mStructurePropertyListAST = in_mStructurePropertyListAST ;
  mProperty_enumeratedElementTypeName = in_enumeratedElementTypeName ;
  mProperty_comparison = in_comparison ;
  mProperty_isUsefull = in_isUsefull ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structDeclarationAST::GALGAS_structDeclarationAST (const cPtr_structDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_structDeclarationAST GALGAS_structDeclarationAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                         const GALGAS_lstring & in_structTypeName,
                                                                         const GALGAS_propertyInCollectionListAST & in_mStructurePropertyListAST,
                                                                         const GALGAS_string & in_enumeratedElementTypeName,
                                                                         const GALGAS_structComparison & in_comparison,
                                                                         const GALGAS_bool & in_isUsefull
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_structDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_structDeclarationAST (in_isPredefined, in_structTypeName, in_mStructurePropertyListAST, in_enumeratedElementTypeName, in_comparison, in_isUsefull COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_structDeclarationAST::readProperty_structTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_structTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_structDeclarationAST::readProperty_mStructurePropertyListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_propertyInCollectionListAST () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_mStructurePropertyListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_structDeclarationAST::readProperty_enumeratedElementTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_enumeratedElementTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_structComparison GALGAS_structDeclarationAST::readProperty_comparison (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_structComparison () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_comparison ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_structDeclarationAST::readProperty_isUsefull (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_isUsefull ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @structDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_structDeclarationAST::cPtr_structDeclarationAST (const GALGAS_bool & in_isPredefined,
                                                      const GALGAS_lstring & in_structTypeName,
                                                      const GALGAS_propertyInCollectionListAST & in_mStructurePropertyListAST,
                                                      const GALGAS_string & in_enumeratedElementTypeName,
                                                      const GALGAS_structComparison & in_comparison,
                                                      const GALGAS_bool & in_isUsefull
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_structTypeName (),
mProperty_mStructurePropertyListAST (),
mProperty_enumeratedElementTypeName (),
mProperty_comparison (),
mProperty_isUsefull () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_structTypeName = in_structTypeName ;
  mProperty_mStructurePropertyListAST = in_mStructurePropertyListAST ;
  mProperty_enumeratedElementTypeName = in_enumeratedElementTypeName ;
  mProperty_comparison = in_comparison ;
  mProperty_isUsefull = in_isUsefull ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_structDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structDeclarationAST ;
}

void cPtr_structDeclarationAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@structDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_structTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructurePropertyListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_enumeratedElementTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_comparison.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isUsefull.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_structDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_structDeclarationAST (mProperty_isPredefined, mProperty_structTypeName, mProperty_mStructurePropertyListAST, mProperty_enumeratedElementTypeName, mProperty_comparison, mProperty_isUsefull COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @structDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structDeclarationAST ("structDeclarationAST",
                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structDeclarationAST GALGAS_structDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_structDeclarationAST result ;
  const GALGAS_structDeclarationAST * p = (const GALGAS_structDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_structDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @structTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_structTypeForGeneration::cPtr_structTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mTypedPropertyList (),
mProperty_mConstructorArgumentList (),
mProperty_mConstructorInitializationCode (),
mProperty_mConstructorNeedsCompilerVar (),
mProperty_synthetizeAnInitializer () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_structTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mTypedPropertyList.printNonNullClassInstanceProperties ("mTypedPropertyList") ;
    mProperty_mConstructorArgumentList.printNonNullClassInstanceProperties ("mConstructorArgumentList") ;
    mProperty_mConstructorInitializationCode.printNonNullClassInstanceProperties ("mConstructorInitializationCode") ;
    mProperty_mConstructorNeedsCompilerVar.printNonNullClassInstanceProperties ("mConstructorNeedsCompilerVar") ;
    mProperty_synthetizeAnInitializer.printNonNullClassInstanceProperties ("synthetizeAnInitializer") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_structTypeForGeneration::objectCompare (const GALGAS_structTypeForGeneration & inOperand) const {
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

GALGAS_structTypeForGeneration::GALGAS_structTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_structTypeForGeneration GALGAS_structTypeForGeneration::
init_21__21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                              const GALGAS_typedPropertyList & in_mTypedPropertyList,
                              const GALGAS_typedPropertyList & in_mConstructorArgumentList,
                              const GALGAS_string & in_mConstructorInitializationCode,
                              const GALGAS_bool & in_mConstructorNeedsCompilerVar,
                              const GALGAS_bool & in_synthetizeAnInitializer,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_structTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_structTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->structTypeForGeneration_init_21__21__21__21__21__21_ (in_mSelfTypeEntry, in_mTypedPropertyList, in_mConstructorArgumentList, in_mConstructorInitializationCode, in_mConstructorNeedsCompilerVar, in_synthetizeAnInitializer, inCompiler) ;
  const GALGAS_structTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_structTypeForGeneration::
structTypeForGeneration_init_21__21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                      const GALGAS_typedPropertyList & in_mTypedPropertyList,
                                                      const GALGAS_typedPropertyList & in_mConstructorArgumentList,
                                                      const GALGAS_string & in_mConstructorInitializationCode,
                                                      const GALGAS_bool & in_mConstructorNeedsCompilerVar,
                                                      const GALGAS_bool & in_synthetizeAnInitializer,
                                                      Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mTypedPropertyList = in_mTypedPropertyList ;
  mProperty_mConstructorArgumentList = in_mConstructorArgumentList ;
  mProperty_mConstructorInitializationCode = in_mConstructorInitializationCode ;
  mProperty_mConstructorNeedsCompilerVar = in_mConstructorNeedsCompilerVar ;
  mProperty_synthetizeAnInitializer = in_synthetizeAnInitializer ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structTypeForGeneration::GALGAS_structTypeForGeneration (const cPtr_structTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_structTypeForGeneration GALGAS_structTypeForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                               const GALGAS_typedPropertyList & in_mTypedPropertyList,
                                                                               const GALGAS_typedPropertyList & in_mConstructorArgumentList,
                                                                               const GALGAS_string & in_mConstructorInitializationCode,
                                                                               const GALGAS_bool & in_mConstructorNeedsCompilerVar,
                                                                               const GALGAS_bool & in_synthetizeAnInitializer
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_structTypeForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_structTypeForGeneration (in_mSelfTypeEntry, in_mTypedPropertyList, in_mConstructorArgumentList, in_mConstructorInitializationCode, in_mConstructorNeedsCompilerVar, in_synthetizeAnInitializer COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_structTypeForGeneration::readProperty_mTypedPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_structTypeForGeneration * p = (cPtr_structTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structTypeForGeneration) ;
    return p->mProperty_mTypedPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_structTypeForGeneration::readProperty_mConstructorArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_structTypeForGeneration * p = (cPtr_structTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structTypeForGeneration) ;
    return p->mProperty_mConstructorArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_structTypeForGeneration::readProperty_mConstructorInitializationCode (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_structTypeForGeneration * p = (cPtr_structTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structTypeForGeneration) ;
    return p->mProperty_mConstructorInitializationCode ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_structTypeForGeneration::readProperty_mConstructorNeedsCompilerVar (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_structTypeForGeneration * p = (cPtr_structTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structTypeForGeneration) ;
    return p->mProperty_mConstructorNeedsCompilerVar ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_structTypeForGeneration::readProperty_synthetizeAnInitializer (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_structTypeForGeneration * p = (cPtr_structTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structTypeForGeneration) ;
    return p->mProperty_synthetizeAnInitializer ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @structTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_structTypeForGeneration::cPtr_structTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                            const GALGAS_typedPropertyList & in_mTypedPropertyList,
                                                            const GALGAS_typedPropertyList & in_mConstructorArgumentList,
                                                            const GALGAS_string & in_mConstructorInitializationCode,
                                                            const GALGAS_bool & in_mConstructorNeedsCompilerVar,
                                                            const GALGAS_bool & in_synthetizeAnInitializer
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mTypedPropertyList (),
mProperty_mConstructorArgumentList (),
mProperty_mConstructorInitializationCode (),
mProperty_mConstructorNeedsCompilerVar (),
mProperty_synthetizeAnInitializer () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mTypedPropertyList = in_mTypedPropertyList ;
  mProperty_mConstructorArgumentList = in_mConstructorArgumentList ;
  mProperty_mConstructorInitializationCode = in_mConstructorInitializationCode ;
  mProperty_mConstructorNeedsCompilerVar = in_mConstructorNeedsCompilerVar ;
  mProperty_synthetizeAnInitializer = in_synthetizeAnInitializer ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_structTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structTypeForGeneration ;
}

void cPtr_structTypeForGeneration::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@structTypeForGeneration:") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypedPropertyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConstructorArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConstructorInitializationCode.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConstructorNeedsCompilerVar.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_synthetizeAnInitializer.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_structTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_structTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mTypedPropertyList, mProperty_mConstructorArgumentList, mProperty_mConstructorInitializationCode, mProperty_mConstructorNeedsCompilerVar, mProperty_synthetizeAnInitializer COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @structTypeForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structTypeForGeneration ("structTypeForGeneration",
                                                                               & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structTypeForGeneration GALGAS_structTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_structTypeForGeneration result ;
  const GALGAS_structTypeForGeneration * p = (const GALGAS_structTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_structTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_structTypeForGeneration_2D_weak::objectCompare (const GALGAS_structTypeForGeneration_2D_weak & inOperand) const {
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

GALGAS_structTypeForGeneration_2D_weak::GALGAS_structTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_structTypeForGeneration_2D_weak & GALGAS_structTypeForGeneration_2D_weak::operator = (const GALGAS_structTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structTypeForGeneration_2D_weak::GALGAS_structTypeForGeneration_2D_weak (const GALGAS_structTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_structTypeForGeneration_2D_weak GALGAS_structTypeForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_structTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structTypeForGeneration GALGAS_structTypeForGeneration_2D_weak::bang_structTypeForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_structTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_structTypeForGeneration) ;
      result = GALGAS_structTypeForGeneration ((cPtr_structTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @structTypeForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structTypeForGeneration_2D_weak ("structTypeForGeneration-weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structTypeForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_structTypeForGeneration_2D_weak GALGAS_structTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_structTypeForGeneration_2D_weak result ;
  const GALGAS_structTypeForGeneration_2D_weak * p = (const GALGAS_structTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_structTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractExtensionGetterAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_abstractExtensionGetterAST::cPtr_abstractExtensionGetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mAbstractExtensionGetterName (),
mProperty_mAbstractExtensionGetterFormalInputParameterList (),
mProperty_mAbstractExtensionGetterReturnedTypeName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractExtensionGetterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mAbstractExtensionGetterName.printNonNullClassInstanceProperties ("mAbstractExtensionGetterName") ;
    mProperty_mAbstractExtensionGetterFormalInputParameterList.printNonNullClassInstanceProperties ("mAbstractExtensionGetterFormalInputParameterList") ;
    mProperty_mAbstractExtensionGetterReturnedTypeName.printNonNullClassInstanceProperties ("mAbstractExtensionGetterReturnedTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_abstractExtensionGetterAST::objectCompare (const GALGAS_abstractExtensionGetterAST & inOperand) const {
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

GALGAS_abstractExtensionGetterAST::GALGAS_abstractExtensionGetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_abstractExtensionGetterAST GALGAS_abstractExtensionGetterAST::
init_21_isPredefined_21__21__21__21_ (const GALGAS_bool & in_isPredefined,
                                      const GALGAS_lstring & in_mTypeName,
                                      const GALGAS_lstring & in_mAbstractExtensionGetterName,
                                      const GALGAS_formalInputParameterListAST & in_mAbstractExtensionGetterFormalInputParameterList,
                                      const GALGAS_lstring & in_mAbstractExtensionGetterReturnedTypeName,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_abstractExtensionGetterAST * object = nullptr ;
  macroMyNew (object, cPtr_abstractExtensionGetterAST (inCompiler COMMA_THERE)) ;
  object->abstractExtensionGetterAST_init_21_isPredefined_21__21__21__21_ (in_isPredefined, in_mTypeName, in_mAbstractExtensionGetterName, in_mAbstractExtensionGetterFormalInputParameterList, in_mAbstractExtensionGetterReturnedTypeName, inCompiler) ;
  const GALGAS_abstractExtensionGetterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterAST::
abstractExtensionGetterAST_init_21_isPredefined_21__21__21__21_ (const GALGAS_bool & in_isPredefined,
                                                                 const GALGAS_lstring & in_mTypeName,
                                                                 const GALGAS_lstring & in_mAbstractExtensionGetterName,
                                                                 const GALGAS_formalInputParameterListAST & in_mAbstractExtensionGetterFormalInputParameterList,
                                                                 const GALGAS_lstring & in_mAbstractExtensionGetterReturnedTypeName,
                                                                 Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mAbstractExtensionGetterName = in_mAbstractExtensionGetterName ;
  mProperty_mAbstractExtensionGetterFormalInputParameterList = in_mAbstractExtensionGetterFormalInputParameterList ;
  mProperty_mAbstractExtensionGetterReturnedTypeName = in_mAbstractExtensionGetterReturnedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterAST::GALGAS_abstractExtensionGetterAST (const cPtr_abstractExtensionGetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionGetterAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterAST GALGAS_abstractExtensionGetterAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                                     const GALGAS_lstring & in_mTypeName,
                                                                                     const GALGAS_lstring & in_mAbstractExtensionGetterName,
                                                                                     const GALGAS_formalInputParameterListAST & in_mAbstractExtensionGetterFormalInputParameterList,
                                                                                     const GALGAS_lstring & in_mAbstractExtensionGetterReturnedTypeName
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionGetterAST result ;
  macroMyNew (result.mObjectPtr, cPtr_abstractExtensionGetterAST (in_isPredefined, in_mTypeName, in_mAbstractExtensionGetterName, in_mAbstractExtensionGetterFormalInputParameterList, in_mAbstractExtensionGetterReturnedTypeName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_abstractExtensionGetterAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_abstractExtensionGetterAST * p = (cPtr_abstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_abstractExtensionGetterAST::readProperty_mAbstractExtensionGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_abstractExtensionGetterAST * p = (cPtr_abstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
    return p->mProperty_mAbstractExtensionGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_abstractExtensionGetterAST::readProperty_mAbstractExtensionGetterFormalInputParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_formalInputParameterListAST () ;
  }else{
    cPtr_abstractExtensionGetterAST * p = (cPtr_abstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
    return p->mProperty_mAbstractExtensionGetterFormalInputParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_abstractExtensionGetterAST::readProperty_mAbstractExtensionGetterReturnedTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_abstractExtensionGetterAST * p = (cPtr_abstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
    return p->mProperty_mAbstractExtensionGetterReturnedTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractExtensionGetterAST class
//--------------------------------------------------------------------------------------------------

cPtr_abstractExtensionGetterAST::cPtr_abstractExtensionGetterAST (const GALGAS_bool & in_isPredefined,
                                                                  const GALGAS_lstring & in_mTypeName,
                                                                  const GALGAS_lstring & in_mAbstractExtensionGetterName,
                                                                  const GALGAS_formalInputParameterListAST & in_mAbstractExtensionGetterFormalInputParameterList,
                                                                  const GALGAS_lstring & in_mAbstractExtensionGetterReturnedTypeName
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_mTypeName (),
mProperty_mAbstractExtensionGetterName (),
mProperty_mAbstractExtensionGetterFormalInputParameterList (),
mProperty_mAbstractExtensionGetterReturnedTypeName () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mAbstractExtensionGetterName = in_mAbstractExtensionGetterName ;
  mProperty_mAbstractExtensionGetterFormalInputParameterList = in_mAbstractExtensionGetterFormalInputParameterList ;
  mProperty_mAbstractExtensionGetterReturnedTypeName = in_mAbstractExtensionGetterReturnedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_abstractExtensionGetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterAST ;
}

void cPtr_abstractExtensionGetterAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@abstractExtensionGetterAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionGetterFormalInputParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionGetterReturnedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_abstractExtensionGetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_abstractExtensionGetterAST (mProperty_isPredefined, mProperty_mTypeName, mProperty_mAbstractExtensionGetterName, mProperty_mAbstractExtensionGetterFormalInputParameterList, mProperty_mAbstractExtensionGetterReturnedTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @abstractExtensionGetterAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionGetterAST ("abstractExtensionGetterAST",
                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionGetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionGetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionGetterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterAST GALGAS_abstractExtensionGetterAST::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionGetterAST result ;
  const GALGAS_abstractExtensionGetterAST * p = (const GALGAS_abstractExtensionGetterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractExtensionGetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionGetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractExtensionGetterForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_abstractExtensionGetterForGeneration::cPtr_abstractExtensionGetterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mAbstractExtensionGetterName (),
mProperty_mResultType (),
mProperty_mAbstractExtensionGetterFormalParameterList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractExtensionGetterForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mAbstractExtensionGetterName.printNonNullClassInstanceProperties ("mAbstractExtensionGetterName") ;
    mProperty_mResultType.printNonNullClassInstanceProperties ("mResultType") ;
    mProperty_mAbstractExtensionGetterFormalParameterList.printNonNullClassInstanceProperties ("mAbstractExtensionGetterFormalParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_abstractExtensionGetterForGeneration::objectCompare (const GALGAS_abstractExtensionGetterForGeneration & inOperand) const {
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

GALGAS_abstractExtensionGetterForGeneration::GALGAS_abstractExtensionGetterForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration GALGAS_abstractExtensionGetterForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (const GALGAS_bool & in_generateHeader,
                                                                     const GALGAS_string & in_implementationCppFileName,
                                                                     const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                     const GALGAS_string & in_mAbstractExtensionGetterName,
                                                                     const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                     const GALGAS_formalInputParameterListForGeneration & in_mAbstractExtensionGetterFormalParameterList,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cPtr_abstractExtensionGetterForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_abstractExtensionGetterForGeneration (inCompiler COMMA_THERE)) ;
  object->abstractExtensionGetterForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mReceiverType, in_mAbstractExtensionGetterName, in_mResultType, in_mAbstractExtensionGetterFormalParameterList, inCompiler) ;
  const GALGAS_abstractExtensionGetterForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionGetterForGeneration::
abstractExtensionGetterForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (const GALGAS_bool & in_generateHeader,
                                                                                                          const GALGAS_string & in_implementationCppFileName,
                                                                                                          const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                          const GALGAS_string & in_mAbstractExtensionGetterName,
                                                                                                          const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                          const GALGAS_formalInputParameterListForGeneration & in_mAbstractExtensionGetterFormalParameterList,
                                                                                                          Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mAbstractExtensionGetterName = in_mAbstractExtensionGetterName ;
  mProperty_mResultType = in_mResultType ;
  mProperty_mAbstractExtensionGetterFormalParameterList = in_mAbstractExtensionGetterFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration::GALGAS_abstractExtensionGetterForGeneration (const cPtr_abstractExtensionGetterForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionGetterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration GALGAS_abstractExtensionGetterForGeneration::class_func_new (const GALGAS_bool & in_generateHeader,
                                                                                                         const GALGAS_string & in_implementationCppFileName,
                                                                                                         const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                         const GALGAS_string & in_mAbstractExtensionGetterName,
                                                                                                         const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                         const GALGAS_formalInputParameterListForGeneration & in_mAbstractExtensionGetterFormalParameterList
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionGetterForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_abstractExtensionGetterForGeneration (in_generateHeader, in_implementationCppFileName, in_mReceiverType, in_mAbstractExtensionGetterName, in_mResultType, in_mAbstractExtensionGetterFormalParameterList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_abstractExtensionGetterForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_abstractExtensionGetterForGeneration * p = (cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_abstractExtensionGetterForGeneration::readProperty_mAbstractExtensionGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_abstractExtensionGetterForGeneration * p = (cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
    return p->mProperty_mAbstractExtensionGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_abstractExtensionGetterForGeneration::readProperty_mResultType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_abstractExtensionGetterForGeneration * p = (cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
    return p->mProperty_mResultType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration GALGAS_abstractExtensionGetterForGeneration::readProperty_mAbstractExtensionGetterFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_formalInputParameterListForGeneration () ;
  }else{
    cPtr_abstractExtensionGetterForGeneration * p = (cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
    return p->mProperty_mAbstractExtensionGetterFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractExtensionGetterForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_abstractExtensionGetterForGeneration::cPtr_abstractExtensionGetterForGeneration (const GALGAS_bool & in_generateHeader,
                                                                                      const GALGAS_string & in_implementationCppFileName,
                                                                                      const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                      const GALGAS_string & in_mAbstractExtensionGetterName,
                                                                                      const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GALGAS_formalInputParameterListForGeneration & in_mAbstractExtensionGetterFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mAbstractExtensionGetterName (),
mProperty_mResultType (),
mProperty_mAbstractExtensionGetterFormalParameterList () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mAbstractExtensionGetterName = in_mAbstractExtensionGetterName ;
  mProperty_mResultType = in_mResultType ;
  mProperty_mAbstractExtensionGetterFormalParameterList = in_mAbstractExtensionGetterFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_abstractExtensionGetterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration ;
}

void cPtr_abstractExtensionGetterForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@abstractExtensionGetterForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionGetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_abstractExtensionGetterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_abstractExtensionGetterForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mReceiverType, mProperty_mAbstractExtensionGetterName, mProperty_mResultType, mProperty_mAbstractExtensionGetterFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @abstractExtensionGetterForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration ("abstractExtensionGetterForGeneration",
                                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionGetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionGetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionGetterForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration GALGAS_abstractExtensionGetterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionGetterForGeneration result ;
  const GALGAS_abstractExtensionGetterForGeneration * p = (const GALGAS_abstractExtensionGetterForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractExtensionGetterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionGetterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_abstractExtensionGetterForGeneration_2D_weak::objectCompare (const GALGAS_abstractExtensionGetterForGeneration_2D_weak & inOperand) const {
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

GALGAS_abstractExtensionGetterForGeneration_2D_weak::GALGAS_abstractExtensionGetterForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration_2D_weak & GALGAS_abstractExtensionGetterForGeneration_2D_weak::operator = (const GALGAS_abstractExtensionGetterForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration_2D_weak::GALGAS_abstractExtensionGetterForGeneration_2D_weak (const GALGAS_abstractExtensionGetterForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration_2D_weak GALGAS_abstractExtensionGetterForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_abstractExtensionGetterForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration GALGAS_abstractExtensionGetterForGeneration_2D_weak::bang_abstractExtensionGetterForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractExtensionGetterForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractExtensionGetterForGeneration) ;
      result = GALGAS_abstractExtensionGetterForGeneration ((cPtr_abstractExtensionGetterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractExtensionGetterForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration_2D_weak ("abstractExtensionGetterForGeneration-weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionGetterForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionGetterForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionGetterForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration_2D_weak GALGAS_abstractExtensionGetterForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionGetterForGeneration_2D_weak result ;
  const GALGAS_abstractExtensionGetterForGeneration_2D_weak * p = (const GALGAS_abstractExtensionGetterForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractExtensionGetterForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionGetterForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractExtensionMethodAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_abstractExtensionMethodAST::cPtr_abstractExtensionMethodAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mAbstractExtensionMethodName (),
mProperty_mAbstractExtensionMethodFormalParameterList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractExtensionMethodAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mAbstractExtensionMethodName.printNonNullClassInstanceProperties ("mAbstractExtensionMethodName") ;
    mProperty_mAbstractExtensionMethodFormalParameterList.printNonNullClassInstanceProperties ("mAbstractExtensionMethodFormalParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_abstractExtensionMethodAST::objectCompare (const GALGAS_abstractExtensionMethodAST & inOperand) const {
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

GALGAS_abstractExtensionMethodAST::GALGAS_abstractExtensionMethodAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_abstractExtensionMethodAST GALGAS_abstractExtensionMethodAST::
init_21_isPredefined_21__21__21_ (const GALGAS_bool & in_isPredefined,
                                  const GALGAS_lstring & in_mTypeName,
                                  const GALGAS_lstring & in_mAbstractExtensionMethodName,
                                  const GALGAS_formalParameterListAST & in_mAbstractExtensionMethodFormalParameterList,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_abstractExtensionMethodAST * object = nullptr ;
  macroMyNew (object, cPtr_abstractExtensionMethodAST (inCompiler COMMA_THERE)) ;
  object->abstractExtensionMethodAST_init_21_isPredefined_21__21__21_ (in_isPredefined, in_mTypeName, in_mAbstractExtensionMethodName, in_mAbstractExtensionMethodFormalParameterList, inCompiler) ;
  const GALGAS_abstractExtensionMethodAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodAST::
abstractExtensionMethodAST_init_21_isPredefined_21__21__21_ (const GALGAS_bool & in_isPredefined,
                                                             const GALGAS_lstring & in_mTypeName,
                                                             const GALGAS_lstring & in_mAbstractExtensionMethodName,
                                                             const GALGAS_formalParameterListAST & in_mAbstractExtensionMethodFormalParameterList,
                                                             Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mAbstractExtensionMethodName = in_mAbstractExtensionMethodName ;
  mProperty_mAbstractExtensionMethodFormalParameterList = in_mAbstractExtensionMethodFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodAST::GALGAS_abstractExtensionMethodAST (const cPtr_abstractExtensionMethodAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionMethodAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodAST GALGAS_abstractExtensionMethodAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                                     const GALGAS_lstring & in_mTypeName,
                                                                                     const GALGAS_lstring & in_mAbstractExtensionMethodName,
                                                                                     const GALGAS_formalParameterListAST & in_mAbstractExtensionMethodFormalParameterList
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionMethodAST result ;
  macroMyNew (result.mObjectPtr, cPtr_abstractExtensionMethodAST (in_isPredefined, in_mTypeName, in_mAbstractExtensionMethodName, in_mAbstractExtensionMethodFormalParameterList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_abstractExtensionMethodAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_abstractExtensionMethodAST * p = (cPtr_abstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_abstractExtensionMethodAST::readProperty_mAbstractExtensionMethodName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_abstractExtensionMethodAST * p = (cPtr_abstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
    return p->mProperty_mAbstractExtensionMethodName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_abstractExtensionMethodAST::readProperty_mAbstractExtensionMethodFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_formalParameterListAST () ;
  }else{
    cPtr_abstractExtensionMethodAST * p = (cPtr_abstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
    return p->mProperty_mAbstractExtensionMethodFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractExtensionMethodAST class
//--------------------------------------------------------------------------------------------------

cPtr_abstractExtensionMethodAST::cPtr_abstractExtensionMethodAST (const GALGAS_bool & in_isPredefined,
                                                                  const GALGAS_lstring & in_mTypeName,
                                                                  const GALGAS_lstring & in_mAbstractExtensionMethodName,
                                                                  const GALGAS_formalParameterListAST & in_mAbstractExtensionMethodFormalParameterList
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_mTypeName (),
mProperty_mAbstractExtensionMethodName (),
mProperty_mAbstractExtensionMethodFormalParameterList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mAbstractExtensionMethodName = in_mAbstractExtensionMethodName ;
  mProperty_mAbstractExtensionMethodFormalParameterList = in_mAbstractExtensionMethodFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_abstractExtensionMethodAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodAST ;
}

void cPtr_abstractExtensionMethodAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@abstractExtensionMethodAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionMethodName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_abstractExtensionMethodAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_abstractExtensionMethodAST (mProperty_isPredefined, mProperty_mTypeName, mProperty_mAbstractExtensionMethodName, mProperty_mAbstractExtensionMethodFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @abstractExtensionMethodAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionMethodAST ("abstractExtensionMethodAST",
                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionMethodAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionMethodAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionMethodAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodAST GALGAS_abstractExtensionMethodAST::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionMethodAST result ;
  const GALGAS_abstractExtensionMethodAST * p = (const GALGAS_abstractExtensionMethodAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractExtensionMethodAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionMethodAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractExtensionMethodForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_abstractExtensionMethodForGeneration::cPtr_abstractExtensionMethodForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mAbstractExtensionMethodName (),
mProperty_mAbstractExtensionMethodFormalParameterList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractExtensionMethodForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mAbstractExtensionMethodName.printNonNullClassInstanceProperties ("mAbstractExtensionMethodName") ;
    mProperty_mAbstractExtensionMethodFormalParameterList.printNonNullClassInstanceProperties ("mAbstractExtensionMethodFormalParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_abstractExtensionMethodForGeneration::objectCompare (const GALGAS_abstractExtensionMethodForGeneration & inOperand) const {
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

GALGAS_abstractExtensionMethodForGeneration::GALGAS_abstractExtensionMethodForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration GALGAS_abstractExtensionMethodForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21_ (const GALGAS_bool & in_generateHeader,
                                                                 const GALGAS_string & in_implementationCppFileName,
                                                                 const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                 const GALGAS_string & in_mAbstractExtensionMethodName,
                                                                 const GALGAS_formalParameterListForGeneration & in_mAbstractExtensionMethodFormalParameterList,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cPtr_abstractExtensionMethodForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_abstractExtensionMethodForGeneration (inCompiler COMMA_THERE)) ;
  object->abstractExtensionMethodForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mReceiverType, in_mAbstractExtensionMethodName, in_mAbstractExtensionMethodFormalParameterList, inCompiler) ;
  const GALGAS_abstractExtensionMethodForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionMethodForGeneration::
abstractExtensionMethodForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21_ (const GALGAS_bool & in_generateHeader,
                                                                                                      const GALGAS_string & in_implementationCppFileName,
                                                                                                      const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                      const GALGAS_string & in_mAbstractExtensionMethodName,
                                                                                                      const GALGAS_formalParameterListForGeneration & in_mAbstractExtensionMethodFormalParameterList,
                                                                                                      Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mAbstractExtensionMethodName = in_mAbstractExtensionMethodName ;
  mProperty_mAbstractExtensionMethodFormalParameterList = in_mAbstractExtensionMethodFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration::GALGAS_abstractExtensionMethodForGeneration (const cPtr_abstractExtensionMethodForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionMethodForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration GALGAS_abstractExtensionMethodForGeneration::class_func_new (const GALGAS_bool & in_generateHeader,
                                                                                                         const GALGAS_string & in_implementationCppFileName,
                                                                                                         const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                         const GALGAS_string & in_mAbstractExtensionMethodName,
                                                                                                         const GALGAS_formalParameterListForGeneration & in_mAbstractExtensionMethodFormalParameterList
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionMethodForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_abstractExtensionMethodForGeneration (in_generateHeader, in_implementationCppFileName, in_mReceiverType, in_mAbstractExtensionMethodName, in_mAbstractExtensionMethodFormalParameterList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_abstractExtensionMethodForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_abstractExtensionMethodForGeneration * p = (cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_abstractExtensionMethodForGeneration::readProperty_mAbstractExtensionMethodName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_abstractExtensionMethodForGeneration * p = (cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
    return p->mProperty_mAbstractExtensionMethodName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_abstractExtensionMethodForGeneration::readProperty_mAbstractExtensionMethodFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_formalParameterListForGeneration () ;
  }else{
    cPtr_abstractExtensionMethodForGeneration * p = (cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
    return p->mProperty_mAbstractExtensionMethodFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractExtensionMethodForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_abstractExtensionMethodForGeneration::cPtr_abstractExtensionMethodForGeneration (const GALGAS_bool & in_generateHeader,
                                                                                      const GALGAS_string & in_implementationCppFileName,
                                                                                      const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                      const GALGAS_string & in_mAbstractExtensionMethodName,
                                                                                      const GALGAS_formalParameterListForGeneration & in_mAbstractExtensionMethodFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mAbstractExtensionMethodName (),
mProperty_mAbstractExtensionMethodFormalParameterList () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mAbstractExtensionMethodName = in_mAbstractExtensionMethodName ;
  mProperty_mAbstractExtensionMethodFormalParameterList = in_mAbstractExtensionMethodFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_abstractExtensionMethodForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration ;
}

void cPtr_abstractExtensionMethodForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@abstractExtensionMethodForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionMethodName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_abstractExtensionMethodForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_abstractExtensionMethodForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mReceiverType, mProperty_mAbstractExtensionMethodName, mProperty_mAbstractExtensionMethodFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @abstractExtensionMethodForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration ("abstractExtensionMethodForGeneration",
                                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionMethodForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionMethodForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionMethodForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration GALGAS_abstractExtensionMethodForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionMethodForGeneration result ;
  const GALGAS_abstractExtensionMethodForGeneration * p = (const GALGAS_abstractExtensionMethodForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractExtensionMethodForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionMethodForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_abstractExtensionMethodForGeneration_2D_weak::objectCompare (const GALGAS_abstractExtensionMethodForGeneration_2D_weak & inOperand) const {
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

GALGAS_abstractExtensionMethodForGeneration_2D_weak::GALGAS_abstractExtensionMethodForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration_2D_weak & GALGAS_abstractExtensionMethodForGeneration_2D_weak::operator = (const GALGAS_abstractExtensionMethodForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration_2D_weak::GALGAS_abstractExtensionMethodForGeneration_2D_weak (const GALGAS_abstractExtensionMethodForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration_2D_weak GALGAS_abstractExtensionMethodForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_abstractExtensionMethodForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration GALGAS_abstractExtensionMethodForGeneration_2D_weak::bang_abstractExtensionMethodForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractExtensionMethodForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractExtensionMethodForGeneration) ;
      result = GALGAS_abstractExtensionMethodForGeneration ((cPtr_abstractExtensionMethodForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractExtensionMethodForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration_2D_weak ("abstractExtensionMethodForGeneration-weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionMethodForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionMethodForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionMethodForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration_2D_weak GALGAS_abstractExtensionMethodForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionMethodForGeneration_2D_weak result ;
  const GALGAS_abstractExtensionMethodForGeneration_2D_weak * p = (const GALGAS_abstractExtensionMethodForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractExtensionMethodForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionMethodForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractExtensionSetterAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_abstractExtensionSetterAST::cPtr_abstractExtensionSetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mAbstractExtensionSetterName (),
mProperty_mAbstractExtensionSetterFormalParameterList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractExtensionSetterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mAbstractExtensionSetterName.printNonNullClassInstanceProperties ("mAbstractExtensionSetterName") ;
    mProperty_mAbstractExtensionSetterFormalParameterList.printNonNullClassInstanceProperties ("mAbstractExtensionSetterFormalParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_abstractExtensionSetterAST::objectCompare (const GALGAS_abstractExtensionSetterAST & inOperand) const {
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

GALGAS_abstractExtensionSetterAST::GALGAS_abstractExtensionSetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_abstractExtensionSetterAST GALGAS_abstractExtensionSetterAST::
init_21_isPredefined_21__21__21_ (const GALGAS_bool & in_isPredefined,
                                  const GALGAS_lstring & in_mTypeName,
                                  const GALGAS_lstring & in_mAbstractExtensionSetterName,
                                  const GALGAS_formalParameterListAST & in_mAbstractExtensionSetterFormalParameterList,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_abstractExtensionSetterAST * object = nullptr ;
  macroMyNew (object, cPtr_abstractExtensionSetterAST (inCompiler COMMA_THERE)) ;
  object->abstractExtensionSetterAST_init_21_isPredefined_21__21__21_ (in_isPredefined, in_mTypeName, in_mAbstractExtensionSetterName, in_mAbstractExtensionSetterFormalParameterList, inCompiler) ;
  const GALGAS_abstractExtensionSetterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterAST::
abstractExtensionSetterAST_init_21_isPredefined_21__21__21_ (const GALGAS_bool & in_isPredefined,
                                                             const GALGAS_lstring & in_mTypeName,
                                                             const GALGAS_lstring & in_mAbstractExtensionSetterName,
                                                             const GALGAS_formalParameterListAST & in_mAbstractExtensionSetterFormalParameterList,
                                                             Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mAbstractExtensionSetterName = in_mAbstractExtensionSetterName ;
  mProperty_mAbstractExtensionSetterFormalParameterList = in_mAbstractExtensionSetterFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterAST::GALGAS_abstractExtensionSetterAST (const cPtr_abstractExtensionSetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionSetterAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterAST GALGAS_abstractExtensionSetterAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                                     const GALGAS_lstring & in_mTypeName,
                                                                                     const GALGAS_lstring & in_mAbstractExtensionSetterName,
                                                                                     const GALGAS_formalParameterListAST & in_mAbstractExtensionSetterFormalParameterList
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterAST result ;
  macroMyNew (result.mObjectPtr, cPtr_abstractExtensionSetterAST (in_isPredefined, in_mTypeName, in_mAbstractExtensionSetterName, in_mAbstractExtensionSetterFormalParameterList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_abstractExtensionSetterAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_abstractExtensionSetterAST * p = (cPtr_abstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_abstractExtensionSetterAST::readProperty_mAbstractExtensionSetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_abstractExtensionSetterAST * p = (cPtr_abstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterAST) ;
    return p->mProperty_mAbstractExtensionSetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_abstractExtensionSetterAST::readProperty_mAbstractExtensionSetterFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_formalParameterListAST () ;
  }else{
    cPtr_abstractExtensionSetterAST * p = (cPtr_abstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterAST) ;
    return p->mProperty_mAbstractExtensionSetterFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractExtensionSetterAST class
//--------------------------------------------------------------------------------------------------

cPtr_abstractExtensionSetterAST::cPtr_abstractExtensionSetterAST (const GALGAS_bool & in_isPredefined,
                                                                  const GALGAS_lstring & in_mTypeName,
                                                                  const GALGAS_lstring & in_mAbstractExtensionSetterName,
                                                                  const GALGAS_formalParameterListAST & in_mAbstractExtensionSetterFormalParameterList
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_mTypeName (),
mProperty_mAbstractExtensionSetterName (),
mProperty_mAbstractExtensionSetterFormalParameterList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mAbstractExtensionSetterName = in_mAbstractExtensionSetterName ;
  mProperty_mAbstractExtensionSetterFormalParameterList = in_mAbstractExtensionSetterFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_abstractExtensionSetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterAST ;
}

void cPtr_abstractExtensionSetterAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@abstractExtensionSetterAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionSetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionSetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_abstractExtensionSetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_abstractExtensionSetterAST (mProperty_isPredefined, mProperty_mTypeName, mProperty_mAbstractExtensionSetterName, mProperty_mAbstractExtensionSetterFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @abstractExtensionSetterAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionSetterAST ("abstractExtensionSetterAST",
                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionSetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionSetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionSetterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterAST GALGAS_abstractExtensionSetterAST::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterAST result ;
  const GALGAS_abstractExtensionSetterAST * p = (const GALGAS_abstractExtensionSetterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractExtensionSetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionSetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractExtensionSetterForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_abstractExtensionSetterForGeneration::cPtr_abstractExtensionSetterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mAbstractExtensionSetterName (),
mProperty_mAbstractExtensionSetterFormalParameterList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractExtensionSetterForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mAbstractExtensionSetterName.printNonNullClassInstanceProperties ("mAbstractExtensionSetterName") ;
    mProperty_mAbstractExtensionSetterFormalParameterList.printNonNullClassInstanceProperties ("mAbstractExtensionSetterFormalParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_abstractExtensionSetterForGeneration::objectCompare (const GALGAS_abstractExtensionSetterForGeneration & inOperand) const {
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

GALGAS_abstractExtensionSetterForGeneration::GALGAS_abstractExtensionSetterForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration GALGAS_abstractExtensionSetterForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21_ (const GALGAS_bool & in_generateHeader,
                                                                 const GALGAS_string & in_implementationCppFileName,
                                                                 const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                 const GALGAS_string & in_mAbstractExtensionSetterName,
                                                                 const GALGAS_formalParameterListForGeneration & in_mAbstractExtensionSetterFormalParameterList,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cPtr_abstractExtensionSetterForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_abstractExtensionSetterForGeneration (inCompiler COMMA_THERE)) ;
  object->abstractExtensionSetterForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mReceiverType, in_mAbstractExtensionSetterName, in_mAbstractExtensionSetterFormalParameterList, inCompiler) ;
  const GALGAS_abstractExtensionSetterForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_abstractExtensionSetterForGeneration::
abstractExtensionSetterForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21_ (const GALGAS_bool & in_generateHeader,
                                                                                                      const GALGAS_string & in_implementationCppFileName,
                                                                                                      const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                      const GALGAS_string & in_mAbstractExtensionSetterName,
                                                                                                      const GALGAS_formalParameterListForGeneration & in_mAbstractExtensionSetterFormalParameterList,
                                                                                                      Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mAbstractExtensionSetterName = in_mAbstractExtensionSetterName ;
  mProperty_mAbstractExtensionSetterFormalParameterList = in_mAbstractExtensionSetterFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration::GALGAS_abstractExtensionSetterForGeneration (const cPtr_abstractExtensionSetterForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionSetterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration GALGAS_abstractExtensionSetterForGeneration::class_func_new (const GALGAS_bool & in_generateHeader,
                                                                                                         const GALGAS_string & in_implementationCppFileName,
                                                                                                         const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                         const GALGAS_string & in_mAbstractExtensionSetterName,
                                                                                                         const GALGAS_formalParameterListForGeneration & in_mAbstractExtensionSetterFormalParameterList
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_abstractExtensionSetterForGeneration (in_generateHeader, in_implementationCppFileName, in_mReceiverType, in_mAbstractExtensionSetterName, in_mAbstractExtensionSetterFormalParameterList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_abstractExtensionSetterForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_abstractExtensionSetterForGeneration * p = (cPtr_abstractExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_abstractExtensionSetterForGeneration::readProperty_mAbstractExtensionSetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_abstractExtensionSetterForGeneration * p = (cPtr_abstractExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterForGeneration) ;
    return p->mProperty_mAbstractExtensionSetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_abstractExtensionSetterForGeneration::readProperty_mAbstractExtensionSetterFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_formalParameterListForGeneration () ;
  }else{
    cPtr_abstractExtensionSetterForGeneration * p = (cPtr_abstractExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterForGeneration) ;
    return p->mProperty_mAbstractExtensionSetterFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractExtensionSetterForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_abstractExtensionSetterForGeneration::cPtr_abstractExtensionSetterForGeneration (const GALGAS_bool & in_generateHeader,
                                                                                      const GALGAS_string & in_implementationCppFileName,
                                                                                      const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                      const GALGAS_string & in_mAbstractExtensionSetterName,
                                                                                      const GALGAS_formalParameterListForGeneration & in_mAbstractExtensionSetterFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mAbstractExtensionSetterName (),
mProperty_mAbstractExtensionSetterFormalParameterList () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mAbstractExtensionSetterName = in_mAbstractExtensionSetterName ;
  mProperty_mAbstractExtensionSetterFormalParameterList = in_mAbstractExtensionSetterFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_abstractExtensionSetterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration ;
}

void cPtr_abstractExtensionSetterForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@abstractExtensionSetterForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionSetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractExtensionSetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_abstractExtensionSetterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_abstractExtensionSetterForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mReceiverType, mProperty_mAbstractExtensionSetterName, mProperty_mAbstractExtensionSetterFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @abstractExtensionSetterForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration ("abstractExtensionSetterForGeneration",
                                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionSetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionSetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionSetterForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration GALGAS_abstractExtensionSetterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterForGeneration result ;
  const GALGAS_abstractExtensionSetterForGeneration * p = (const GALGAS_abstractExtensionSetterForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractExtensionSetterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionSetterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_abstractExtensionSetterForGeneration_2D_weak::objectCompare (const GALGAS_abstractExtensionSetterForGeneration_2D_weak & inOperand) const {
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

GALGAS_abstractExtensionSetterForGeneration_2D_weak::GALGAS_abstractExtensionSetterForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration_2D_weak & GALGAS_abstractExtensionSetterForGeneration_2D_weak::operator = (const GALGAS_abstractExtensionSetterForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration_2D_weak::GALGAS_abstractExtensionSetterForGeneration_2D_weak (const GALGAS_abstractExtensionSetterForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration_2D_weak GALGAS_abstractExtensionSetterForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration GALGAS_abstractExtensionSetterForGeneration_2D_weak::bang_abstractExtensionSetterForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractExtensionSetterForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractExtensionSetterForGeneration) ;
      result = GALGAS_abstractExtensionSetterForGeneration ((cPtr_abstractExtensionSetterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractExtensionSetterForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration_2D_weak ("abstractExtensionSetterForGeneration-weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionSetterForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionSetterForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionSetterForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration_2D_weak GALGAS_abstractExtensionSetterForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterForGeneration_2D_weak result ;
  const GALGAS_abstractExtensionSetterForGeneration_2D_weak * p = (const GALGAS_abstractExtensionSetterForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractExtensionSetterForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionSetterForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @extensionGetterAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_extensionGetterAST::cPtr_extensionGetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_requiresSelfForAccessingProperty (),
mProperty_mTypeName (),
mProperty_mExtensionGetterName (),
mProperty_mExtensionGetterFormalInputParameterList (),
mProperty_mExtensionGetterReturnedTypeName (),
mProperty_mExtensionGetterReturnedVariableName (),
mProperty_mExtensionGetterInstructionList (),
mProperty_mEndOfReaderLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_extensionGetterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_requiresSelfForAccessingProperty.printNonNullClassInstanceProperties ("requiresSelfForAccessingProperty") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mExtensionGetterName.printNonNullClassInstanceProperties ("mExtensionGetterName") ;
    mProperty_mExtensionGetterFormalInputParameterList.printNonNullClassInstanceProperties ("mExtensionGetterFormalInputParameterList") ;
    mProperty_mExtensionGetterReturnedTypeName.printNonNullClassInstanceProperties ("mExtensionGetterReturnedTypeName") ;
    mProperty_mExtensionGetterReturnedVariableName.printNonNullClassInstanceProperties ("mExtensionGetterReturnedVariableName") ;
    mProperty_mExtensionGetterInstructionList.printNonNullClassInstanceProperties ("mExtensionGetterInstructionList") ;
    mProperty_mEndOfReaderLocation.printNonNullClassInstanceProperties ("mEndOfReaderLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_extensionGetterAST::objectCompare (const GALGAS_extensionGetterAST & inOperand) const {
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

GALGAS_extensionGetterAST::GALGAS_extensionGetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_extensionGetterAST GALGAS_extensionGetterAST::
init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (const GALGAS_bool & in_isPredefined,
                                                                                      const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                                                                      const GALGAS_lstring & in_mTypeName,
                                                                                      const GALGAS_lstring & in_mExtensionGetterName,
                                                                                      const GALGAS_formalInputParameterListAST & in_mExtensionGetterFormalInputParameterList,
                                                                                      const GALGAS_lstring & in_mExtensionGetterReturnedTypeName,
                                                                                      const GALGAS_lstring & in_mExtensionGetterReturnedVariableName,
                                                                                      const GALGAS_semanticInstructionListAST & in_mExtensionGetterInstructionList,
                                                                                      const GALGAS_location & in_mEndOfReaderLocation,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cPtr_extensionGetterAST * object = nullptr ;
  macroMyNew (object, cPtr_extensionGetterAST (inCompiler COMMA_THERE)) ;
  object->extensionGetterAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (in_isPredefined, in_requiresSelfForAccessingProperty, in_mTypeName, in_mExtensionGetterName, in_mExtensionGetterFormalInputParameterList, in_mExtensionGetterReturnedTypeName, in_mExtensionGetterReturnedVariableName, in_mExtensionGetterInstructionList, in_mEndOfReaderLocation, inCompiler) ;
  const GALGAS_extensionGetterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_extensionGetterAST::
extensionGetterAST_init_21_isPredefined_21_requiresSelfForAccessingProperty_21__21__21__21__21__21__21_ (const GALGAS_bool & in_isPredefined,
                                                                                                         const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                                                                                         const GALGAS_lstring & in_mTypeName,
                                                                                                         const GALGAS_lstring & in_mExtensionGetterName,
                                                                                                         const GALGAS_formalInputParameterListAST & in_mExtensionGetterFormalInputParameterList,
                                                                                                         const GALGAS_lstring & in_mExtensionGetterReturnedTypeName,
                                                                                                         const GALGAS_lstring & in_mExtensionGetterReturnedVariableName,
                                                                                                         const GALGAS_semanticInstructionListAST & in_mExtensionGetterInstructionList,
                                                                                                         const GALGAS_location & in_mEndOfReaderLocation,
                                                                                                         Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_requiresSelfForAccessingProperty = in_requiresSelfForAccessingProperty ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mExtensionGetterName = in_mExtensionGetterName ;
  mProperty_mExtensionGetterFormalInputParameterList = in_mExtensionGetterFormalInputParameterList ;
  mProperty_mExtensionGetterReturnedTypeName = in_mExtensionGetterReturnedTypeName ;
  mProperty_mExtensionGetterReturnedVariableName = in_mExtensionGetterReturnedVariableName ;
  mProperty_mExtensionGetterInstructionList = in_mExtensionGetterInstructionList ;
  mProperty_mEndOfReaderLocation = in_mEndOfReaderLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterAST::GALGAS_extensionGetterAST (const cPtr_extensionGetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionGetterAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterAST GALGAS_extensionGetterAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                     const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                                                     const GALGAS_lstring & in_mTypeName,
                                                                     const GALGAS_lstring & in_mExtensionGetterName,
                                                                     const GALGAS_formalInputParameterListAST & in_mExtensionGetterFormalInputParameterList,
                                                                     const GALGAS_lstring & in_mExtensionGetterReturnedTypeName,
                                                                     const GALGAS_lstring & in_mExtensionGetterReturnedVariableName,
                                                                     const GALGAS_semanticInstructionListAST & in_mExtensionGetterInstructionList,
                                                                     const GALGAS_location & in_mEndOfReaderLocation
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterAST result ;
  macroMyNew (result.mObjectPtr, cPtr_extensionGetterAST (in_isPredefined, in_requiresSelfForAccessingProperty, in_mTypeName, in_mExtensionGetterName, in_mExtensionGetterFormalInputParameterList, in_mExtensionGetterReturnedTypeName, in_mExtensionGetterReturnedVariableName, in_mExtensionGetterInstructionList, in_mEndOfReaderLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_extensionGetterAST::readProperty_requiresSelfForAccessingProperty (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_requiresSelfForAccessingProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionGetterAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionGetterAST::readProperty_mExtensionGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_mExtensionGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_extensionGetterAST::readProperty_mExtensionGetterFormalInputParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_formalInputParameterListAST () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_mExtensionGetterFormalInputParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionGetterAST::readProperty_mExtensionGetterReturnedTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_mExtensionGetterReturnedTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionGetterAST::readProperty_mExtensionGetterReturnedVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_mExtensionGetterReturnedVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_extensionGetterAST::readProperty_mExtensionGetterInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_mExtensionGetterInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_extensionGetterAST::readProperty_mEndOfReaderLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_mEndOfReaderLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @extensionGetterAST class
//--------------------------------------------------------------------------------------------------

cPtr_extensionGetterAST::cPtr_extensionGetterAST (const GALGAS_bool & in_isPredefined,
                                                  const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                                  const GALGAS_lstring & in_mTypeName,
                                                  const GALGAS_lstring & in_mExtensionGetterName,
                                                  const GALGAS_formalInputParameterListAST & in_mExtensionGetterFormalInputParameterList,
                                                  const GALGAS_lstring & in_mExtensionGetterReturnedTypeName,
                                                  const GALGAS_lstring & in_mExtensionGetterReturnedVariableName,
                                                  const GALGAS_semanticInstructionListAST & in_mExtensionGetterInstructionList,
                                                  const GALGAS_location & in_mEndOfReaderLocation
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_requiresSelfForAccessingProperty (),
mProperty_mTypeName (),
mProperty_mExtensionGetterName (),
mProperty_mExtensionGetterFormalInputParameterList (),
mProperty_mExtensionGetterReturnedTypeName (),
mProperty_mExtensionGetterReturnedVariableName (),
mProperty_mExtensionGetterInstructionList (),
mProperty_mEndOfReaderLocation () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_requiresSelfForAccessingProperty = in_requiresSelfForAccessingProperty ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mExtensionGetterName = in_mExtensionGetterName ;
  mProperty_mExtensionGetterFormalInputParameterList = in_mExtensionGetterFormalInputParameterList ;
  mProperty_mExtensionGetterReturnedTypeName = in_mExtensionGetterReturnedTypeName ;
  mProperty_mExtensionGetterReturnedVariableName = in_mExtensionGetterReturnedVariableName ;
  mProperty_mExtensionGetterInstructionList = in_mExtensionGetterInstructionList ;
  mProperty_mEndOfReaderLocation = in_mEndOfReaderLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_extensionGetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterAST ;
}

void cPtr_extensionGetterAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@extensionGetterAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_requiresSelfForAccessingProperty.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtensionGetterFormalInputParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtensionGetterReturnedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtensionGetterReturnedVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtensionGetterInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfReaderLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_extensionGetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_extensionGetterAST (mProperty_isPredefined, mProperty_requiresSelfForAccessingProperty, mProperty_mTypeName, mProperty_mExtensionGetterName, mProperty_mExtensionGetterFormalInputParameterList, mProperty_mExtensionGetterReturnedTypeName, mProperty_mExtensionGetterReturnedVariableName, mProperty_mExtensionGetterInstructionList, mProperty_mEndOfReaderLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @extensionGetterAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterAST ("extensionGetterAST",
                                                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionGetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionGetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterAST GALGAS_extensionGetterAST::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterAST result ;
  const GALGAS_extensionGetterAST * p = (const GALGAS_extensionGetterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extensionGetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

