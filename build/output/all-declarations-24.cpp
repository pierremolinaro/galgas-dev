#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-24.h"

//--------------------------------------------------------------------------------------------------
// @templateInstructionExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionExpressionForGeneration::cPtr_templateInstructionExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_templateInstructionExpressionForGeneration::objectCompare (const GALGAS_templateInstructionExpressionForGeneration & inOperand) const {
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

GALGAS_templateInstructionExpressionForGeneration::GALGAS_templateInstructionExpressionForGeneration (void) :
GALGAS_templateInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_templateInstructionExpressionForGeneration GALGAS_templateInstructionExpressionForGeneration::
init_21_ (const GALGAS_semanticExpressionForGeneration & in_mExpression,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->templateInstructionExpressionForGeneration_init_21_ (in_mExpression, inCompiler) ;
  const GALGAS_templateInstructionExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionExpressionForGeneration::
templateInstructionExpressionForGeneration_init_21_ (const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                     Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionForGeneration::GALGAS_templateInstructionExpressionForGeneration (const cPtr_templateInstructionExpressionForGeneration * inSourcePtr) :
GALGAS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionForGeneration GALGAS_templateInstructionExpressionForGeneration::class_func_new (const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_templateInstructionExpressionForGeneration (in_mExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_templateInstructionExpressionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_templateInstructionExpressionForGeneration * p = (cPtr_templateInstructionExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionExpressionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionExpressionForGeneration::cPtr_templateInstructionExpressionForGeneration (const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (THERE),
mProperty_mExpression () {
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ;
}

void cPtr_templateInstructionExpressionForGeneration::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionExpressionForGeneration:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionExpressionForGeneration (mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @templateInstructionExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ("templateInstructionExpressionForGeneration",
                                                                                                  & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionExpressionForGeneration GALGAS_templateInstructionExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionExpressionForGeneration result ;
  const GALGAS_templateInstructionExpressionForGeneration * p = (const GALGAS_templateInstructionExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateInstructionExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticContext::GALGAS_semanticContext (void) :
mProperty_routineMap (),
mProperty_mFunctionMap (),
mProperty_mFilewrapperMap (),
mProperty_grammarMap (),
mProperty_mOptionComponentMapForSemanticAnalysis (),
mProperty_mLexiqueComponentMapForSemanticAnalysis (),
mProperty_mSyntaxComponentMapForSemanticAnalysis (),
mProperty_galgas_34_ () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::init_21_galgas_34_ (const GALGAS_bool & in_galgas_34_,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_galgas_34_ = in_galgas_34_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticContext::setInitializedProperties (Compiler * inCompiler) {
  mProperty_routineMap = GALGAS_routineMap::init (inCompiler COMMA_HERE) ;
  mProperty_mFunctionMap = GALGAS_functionMap::init (inCompiler COMMA_HERE) ;
  mProperty_mFilewrapperMap = GALGAS_filewrapperMap::init (inCompiler COMMA_HERE) ;
  mProperty_grammarMap = GALGAS_grammarMap::init (inCompiler COMMA_HERE) ;
  mProperty_mOptionComponentMapForSemanticAnalysis = GALGAS_optionComponentMapForSemanticAnalysis::init (inCompiler COMMA_HERE) ;
  mProperty_mLexiqueComponentMapForSemanticAnalysis = GALGAS_lexiqueComponentMapForSemanticAnalysis::init (inCompiler COMMA_HERE) ;
  mProperty_mSyntaxComponentMapForSemanticAnalysis = GALGAS_syntaxComponentMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticContext::GALGAS_semanticContext (const GALGAS_routineMap & inOperand0,
                                                const GALGAS_functionMap & inOperand1,
                                                const GALGAS_filewrapperMap & inOperand2,
                                                const GALGAS_grammarMap & inOperand3,
                                                const GALGAS_optionComponentMapForSemanticAnalysis & inOperand4,
                                                const GALGAS_lexiqueComponentMapForSemanticAnalysis & inOperand5,
                                                const GALGAS_syntaxComponentMap & inOperand6,
                                                const GALGAS_bool & inOperand7) :
mProperty_routineMap (inOperand0),
mProperty_mFunctionMap (inOperand1),
mProperty_mFilewrapperMap (inOperand2),
mProperty_grammarMap (inOperand3),
mProperty_mOptionComponentMapForSemanticAnalysis (inOperand4),
mProperty_mLexiqueComponentMapForSemanticAnalysis (inOperand5),
mProperty_mSyntaxComponentMapForSemanticAnalysis (inOperand6),
mProperty_galgas_34_ (inOperand7) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::class_func_new (const GALGAS_bool & in_galgas4,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_galgas_34_ = in_galgas4 ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_semanticContext::isValid (void) const {
  return mProperty_routineMap.isValid () && mProperty_mFunctionMap.isValid () && mProperty_mFilewrapperMap.isValid () && mProperty_grammarMap.isValid () && mProperty_mOptionComponentMapForSemanticAnalysis.isValid () && mProperty_mLexiqueComponentMapForSemanticAnalysis.isValid () && mProperty_mSyntaxComponentMapForSemanticAnalysis.isValid () && mProperty_galgas_34_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticContext::drop (void) {
  mProperty_routineMap.drop () ;
  mProperty_mFunctionMap.drop () ;
  mProperty_mFilewrapperMap.drop () ;
  mProperty_grammarMap.drop () ;
  mProperty_mOptionComponentMapForSemanticAnalysis.drop () ;
  mProperty_mLexiqueComponentMapForSemanticAnalysis.drop () ;
  mProperty_mSyntaxComponentMapForSemanticAnalysis.drop () ;
  mProperty_galgas_34_.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticContext::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticContext:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_routineMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFunctionMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFilewrapperMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_grammarMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionComponentMapForSemanticAnalysis.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexiqueComponentMapForSemanticAnalysis.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSyntaxComponentMapForSemanticAnalysis.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_galgas_34_.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  const GALGAS_semanticContext * p = (const GALGAS_semanticContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @optionComponentForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_optionComponentForGeneration::cPtr_optionComponentForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mBoolOptionSortedList (),
mProperty_mUIntOptionSortedList (),
mProperty_mStringOptionSortedList (),
mProperty_mStringListSortedList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionComponentForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mIsPredefined.printNonNullClassInstanceProperties ("mIsPredefined") ;
    mProperty_mOptionComponentName.printNonNullClassInstanceProperties ("mOptionComponentName") ;
    mProperty_mBoolOptionSortedList.printNonNullClassInstanceProperties ("mBoolOptionSortedList") ;
    mProperty_mUIntOptionSortedList.printNonNullClassInstanceProperties ("mUIntOptionSortedList") ;
    mProperty_mStringOptionSortedList.printNonNullClassInstanceProperties ("mStringOptionSortedList") ;
    mProperty_mStringListSortedList.printNonNullClassInstanceProperties ("mStringListSortedList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_optionComponentForGeneration::objectCompare (const GALGAS_optionComponentForGeneration & inOperand) const {
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

GALGAS_optionComponentForGeneration::GALGAS_optionComponentForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_optionComponentForGeneration GALGAS_optionComponentForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const GALGAS_bool & in_generateHeader,
                                                                             const GALGAS_string & in_implementationCppFileName,
                                                                             const GALGAS_bool & in_mIsPredefined,
                                                                             const GALGAS_string & in_mOptionComponentName,
                                                                             const GALGAS_commandLineOptionSortedList & in_mBoolOptionSortedList,
                                                                             const GALGAS_commandLineOptionSortedList & in_mUIntOptionSortedList,
                                                                             const GALGAS_commandLineOptionSortedList & in_mStringOptionSortedList,
                                                                             const GALGAS_commandLineOptionSortedList & in_mStringListSortedList,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cPtr_optionComponentForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_optionComponentForGeneration (inCompiler COMMA_THERE)) ;
  object->optionComponentForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mIsPredefined, in_mOptionComponentName, in_mBoolOptionSortedList, in_mUIntOptionSortedList, in_mStringOptionSortedList, in_mStringListSortedList, inCompiler) ;
  const GALGAS_optionComponentForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::
optionComponentForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const GALGAS_bool & in_generateHeader,
                                                                                                          const GALGAS_string & in_implementationCppFileName,
                                                                                                          const GALGAS_bool & in_mIsPredefined,
                                                                                                          const GALGAS_string & in_mOptionComponentName,
                                                                                                          const GALGAS_commandLineOptionSortedList & in_mBoolOptionSortedList,
                                                                                                          const GALGAS_commandLineOptionSortedList & in_mUIntOptionSortedList,
                                                                                                          const GALGAS_commandLineOptionSortedList & in_mStringOptionSortedList,
                                                                                                          const GALGAS_commandLineOptionSortedList & in_mStringListSortedList,
                                                                                                          Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mIsPredefined = in_mIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mBoolOptionSortedList = in_mBoolOptionSortedList ;
  mProperty_mUIntOptionSortedList = in_mUIntOptionSortedList ;
  mProperty_mStringOptionSortedList = in_mStringOptionSortedList ;
  mProperty_mStringListSortedList = in_mStringListSortedList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration::GALGAS_optionComponentForGeneration (const cPtr_optionComponentForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionComponentForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration GALGAS_optionComponentForGeneration::class_func_new (const GALGAS_bool & in_generateHeader,
                                                                                         const GALGAS_string & in_implementationCppFileName,
                                                                                         const GALGAS_bool & in_mIsPredefined,
                                                                                         const GALGAS_string & in_mOptionComponentName,
                                                                                         const GALGAS_commandLineOptionSortedList & in_mBoolOptionSortedList,
                                                                                         const GALGAS_commandLineOptionSortedList & in_mUIntOptionSortedList,
                                                                                         const GALGAS_commandLineOptionSortedList & in_mStringOptionSortedList,
                                                                                         const GALGAS_commandLineOptionSortedList & in_mStringListSortedList
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_optionComponentForGeneration (in_generateHeader, in_implementationCppFileName, in_mIsPredefined, in_mOptionComponentName, in_mBoolOptionSortedList, in_mUIntOptionSortedList, in_mStringOptionSortedList, in_mStringListSortedList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionComponentForGeneration::readProperty_mIsPredefined (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mIsPredefined ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_optionComponentForGeneration::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionSortedList GALGAS_optionComponentForGeneration::readProperty_mBoolOptionSortedList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_commandLineOptionSortedList () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mBoolOptionSortedList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionSortedList GALGAS_optionComponentForGeneration::readProperty_mUIntOptionSortedList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_commandLineOptionSortedList () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mUIntOptionSortedList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionSortedList GALGAS_optionComponentForGeneration::readProperty_mStringOptionSortedList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_commandLineOptionSortedList () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mStringOptionSortedList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionSortedList GALGAS_optionComponentForGeneration::readProperty_mStringListSortedList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_commandLineOptionSortedList () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mStringListSortedList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionComponentForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_optionComponentForGeneration::cPtr_optionComponentForGeneration (const GALGAS_bool & in_generateHeader,
                                                                      const GALGAS_string & in_implementationCppFileName,
                                                                      const GALGAS_bool & in_mIsPredefined,
                                                                      const GALGAS_string & in_mOptionComponentName,
                                                                      const GALGAS_commandLineOptionSortedList & in_mBoolOptionSortedList,
                                                                      const GALGAS_commandLineOptionSortedList & in_mUIntOptionSortedList,
                                                                      const GALGAS_commandLineOptionSortedList & in_mStringOptionSortedList,
                                                                      const GALGAS_commandLineOptionSortedList & in_mStringListSortedList
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName COMMA_THERE),
mProperty_mIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mBoolOptionSortedList (),
mProperty_mUIntOptionSortedList (),
mProperty_mStringOptionSortedList (),
mProperty_mStringListSortedList () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mIsPredefined = in_mIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mBoolOptionSortedList = in_mBoolOptionSortedList ;
  mProperty_mUIntOptionSortedList = in_mUIntOptionSortedList ;
  mProperty_mStringOptionSortedList = in_mStringOptionSortedList ;
  mProperty_mStringListSortedList = in_mStringListSortedList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_optionComponentForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentForGeneration ;
}

void cPtr_optionComponentForGeneration::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@optionComponentForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBoolOptionSortedList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUIntOptionSortedList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStringOptionSortedList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStringListSortedList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_optionComponentForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionComponentForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mIsPredefined, mProperty_mOptionComponentName, mProperty_mBoolOptionSortedList, mProperty_mUIntOptionSortedList, mProperty_mStringOptionSortedList, mProperty_mStringListSortedList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @optionComponentForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentForGeneration ("optionComponentForGeneration",
                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionComponentForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionComponentForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration GALGAS_optionComponentForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentForGeneration result ;
  const GALGAS_optionComponentForGeneration * p = (const GALGAS_optionComponentForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_optionComponentForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_optionComponentForGeneration_2D_weak::objectCompare (const GALGAS_optionComponentForGeneration_2D_weak & inOperand) const {
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

GALGAS_optionComponentForGeneration_2D_weak::GALGAS_optionComponentForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration_2D_weak & GALGAS_optionComponentForGeneration_2D_weak::operator = (const GALGAS_optionComponentForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration_2D_weak::GALGAS_optionComponentForGeneration_2D_weak (const GALGAS_optionComponentForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration_2D_weak GALGAS_optionComponentForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_optionComponentForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration GALGAS_optionComponentForGeneration_2D_weak::bang_optionComponentForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_optionComponentForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_optionComponentForGeneration) ;
      result = GALGAS_optionComponentForGeneration ((cPtr_optionComponentForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @optionComponentForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentForGeneration_2D_weak ("optionComponentForGeneration-weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionComponentForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionComponentForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionComponentForGeneration_2D_weak GALGAS_optionComponentForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentForGeneration_2D_weak result ;
  const GALGAS_optionComponentForGeneration_2D_weak * p = (const GALGAS_optionComponentForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_optionComponentForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @arrayTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_arrayTypeForGeneration::cPtr_arrayTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_elementType () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_arrayTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_elementType.printNonNullClassInstanceProperties ("elementType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_arrayTypeForGeneration::objectCompare (const GALGAS_arrayTypeForGeneration & inOperand) const {
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

GALGAS_arrayTypeForGeneration::GALGAS_arrayTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_arrayTypeForGeneration GALGAS_arrayTypeForGeneration::
init_21__21_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
              const GALGAS_unifiedTypeMapEntry & in_elementType,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_arrayTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_arrayTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->arrayTypeForGeneration_init_21__21_ (in_mSelfTypeEntry, in_elementType, inCompiler) ;
  const GALGAS_arrayTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeForGeneration::
arrayTypeForGeneration_init_21__21_ (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                     const GALGAS_unifiedTypeMapEntry & in_elementType,
                                     Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_elementType = in_elementType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration::GALGAS_arrayTypeForGeneration (const cPtr_arrayTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration GALGAS_arrayTypeForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                             const GALGAS_unifiedTypeMapEntry & in_elementType
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_arrayTypeForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_arrayTypeForGeneration (in_mSelfTypeEntry, in_elementType COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_arrayTypeForGeneration::readProperty_elementType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_arrayTypeForGeneration * p = (cPtr_arrayTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeForGeneration) ;
    return p->mProperty_elementType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @arrayTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_arrayTypeForGeneration::cPtr_arrayTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                          const GALGAS_unifiedTypeMapEntry & in_elementType
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_elementType () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_elementType = in_elementType ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_arrayTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayTypeForGeneration ;
}

void cPtr_arrayTypeForGeneration::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@arrayTypeForGeneration:") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_elementType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_arrayTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_arrayTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_elementType COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @arrayTypeForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayTypeForGeneration ("arrayTypeForGeneration",
                                                                              & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration GALGAS_arrayTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_arrayTypeForGeneration result ;
  const GALGAS_arrayTypeForGeneration * p = (const GALGAS_arrayTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_arrayTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_arrayTypeForGeneration_2D_weak::objectCompare (const GALGAS_arrayTypeForGeneration_2D_weak & inOperand) const {
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

GALGAS_arrayTypeForGeneration_2D_weak::GALGAS_arrayTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration_2D_weak & GALGAS_arrayTypeForGeneration_2D_weak::operator = (const GALGAS_arrayTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration_2D_weak::GALGAS_arrayTypeForGeneration_2D_weak (const GALGAS_arrayTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration_2D_weak GALGAS_arrayTypeForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_arrayTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration GALGAS_arrayTypeForGeneration_2D_weak::bang_arrayTypeForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_arrayTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_arrayTypeForGeneration) ;
      result = GALGAS_arrayTypeForGeneration ((cPtr_arrayTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @arrayTypeForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayTypeForGeneration_2D_weak ("arrayTypeForGeneration-weak",
                                                                                      & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayTypeForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayTypeForGeneration_2D_weak GALGAS_arrayTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_arrayTypeForGeneration_2D_weak result ;
  const GALGAS_arrayTypeForGeneration_2D_weak * p = (const GALGAS_arrayTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_arrayTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertDeclaredLocalVariable'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertDeclaredLocalVariable (GALGAS_localVarManager & ioObject,
                                                  const GALGAS_lstring constinArgument_inVarName,
                                                  const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                  const GALGAS_string constinArgument_inCppName,
                                                  const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GALGAS_localVariableAttributes::class_func_none (SOURCE_FILE ("variable-manager.galgas", 36)), GALGAS_localVarValuation::class_func_declared (GALGAS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 31)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@routineMap insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (GALGAS_routineMap & ioObject,
                                const GALGAS_lstring constinArgument_inRoutineName,
                                const GALGAS_formalParameterSignature constinArgument_inRoutineSignature,
                                const GALGAS_bool constinArgument_inIsFilePrivate,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineArgumentMap var_routineArgumentMap_2898 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_routineMap temp_1 = ioObject ;
    test_0 = temp_1.readProperty_mInternalRoutineMap ().getter_hasKey (constinArgument_inRoutineName.readProperty_string () COMMA_SOURCE_FILE ("routineMap.galgas", 72)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_routineMap temp_2 = ioObject ;
      temp_2.readProperty_mInternalRoutineMap ().method_searchKey (constinArgument_inRoutineName, var_routineArgumentMap_2898, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 73)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_routineArgumentMap_2898 = GALGAS_routineArgumentMap::init (inCompiler COMMA_HERE) ;
  }
  GALGAS_string var_routineArguments_3111 = function_routineArgumentFromFormalParameters (constinArgument_inRoutineSignature, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 77)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_routineArgumentMap_2898.getter_hasKey (var_routineArguments_3111 COMMA_SOURCE_FILE ("routineMap.galgas", 78)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), GALGAS_string ("duplicated declaration of the ").add_operation (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 79)).add_operation (var_routineArguments_3111, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 79)).add_operation (GALGAS_string (" routine"), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 79)), fixItArray4  COMMA_SOURCE_FILE ("routineMap.galgas", 79)) ;
    }
  }
  if (kBoolFalse == test_3) {
    {
    var_routineArgumentMap_2898.setter_insertKey (GALGAS_lstring::init_21__21_ (var_routineArguments_3111, constinArgument_inRoutineName.readProperty_location (), inCompiler COMMA_HERE), constinArgument_inRoutineSignature, constinArgument_inIsFilePrivate, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 81)) ;
    }
    {
    ioObject.mProperty_mInternalRoutineMap.setter_insertOrReplace (constinArgument_inRoutineName, var_routineArgumentMap_2898 COMMA_SOURCE_FILE ("routineMap.galgas", 86)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------

GALGAS_analysisContext::GALGAS_analysisContext (void) :
mProperty_semanticContext (),
mProperty_predefinedTypes (),
mProperty_selfObjectCppName (),
mProperty_selfAvailability (),
mProperty_selfObjectCppPrefixForAccessingProperty (),
mProperty_requiresSelfForAccessingProperty () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_analysisContext::~ GALGAS_analysisContext (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_analysisContext GALGAS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (const GALGAS_semanticContext & in_semanticContext,
                                                                                                                                                                                     const GALGAS_predefinedTypes & in_predefinedTypes,
                                                                                                                                                                                     const GALGAS_string & in_selfObjectCppName,
                                                                                                                                                                                     const GALGAS_selfAvailability & in_selfAvailability,
                                                                                                                                                                                     const GALGAS_string & in_selfObjectCppPrefixForAccessingProperty,
                                                                                                                                                                                     const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                                                                                                                                                                     Compiler * inCompiler
                                                                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_analysisContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_semanticContext = in_semanticContext ;
  result.mProperty_predefinedTypes = in_predefinedTypes ;
  result.mProperty_selfObjectCppName = in_selfObjectCppName ;
  result.mProperty_selfAvailability = in_selfAvailability ;
  result.mProperty_selfObjectCppPrefixForAccessingProperty = in_selfObjectCppPrefixForAccessingProperty ;
  result.mProperty_requiresSelfForAccessingProperty = in_requiresSelfForAccessingProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_analysisContext::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_analysisContext::GALGAS_analysisContext (const GALGAS_semanticContext & inOperand0,
                                                const GALGAS_predefinedTypes & inOperand1,
                                                const GALGAS_string & inOperand2,
                                                const GALGAS_selfAvailability & inOperand3,
                                                const GALGAS_string & inOperand4,
                                                const GALGAS_bool & inOperand5) :
mProperty_semanticContext (inOperand0),
mProperty_predefinedTypes (inOperand1),
mProperty_selfObjectCppName (inOperand2),
mProperty_selfAvailability (inOperand3),
mProperty_selfObjectCppPrefixForAccessingProperty (inOperand4),
mProperty_requiresSelfForAccessingProperty (inOperand5) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_analysisContext GALGAS_analysisContext::class_func_new (const GALGAS_semanticContext & in_semanticContext,
                                                               const GALGAS_predefinedTypes & in_predefinedTypes,
                                                               const GALGAS_string & in_selfObjectCppName,
                                                               const GALGAS_selfAvailability & in_selfAvailability,
                                                               const GALGAS_string & in_selfObjectCppPrefixForAccessingProperty,
                                                               const GALGAS_bool & in_requiresSelfForAccessingProperty,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_analysisContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_semanticContext = in_semanticContext ;
  result.mProperty_predefinedTypes = in_predefinedTypes ;
  result.mProperty_selfObjectCppName = in_selfObjectCppName ;
  result.mProperty_selfAvailability = in_selfAvailability ;
  result.mProperty_selfObjectCppPrefixForAccessingProperty = in_selfObjectCppPrefixForAccessingProperty ;
  result.mProperty_requiresSelfForAccessingProperty = in_requiresSelfForAccessingProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_analysisContext::isValid (void) const {
  return mProperty_semanticContext.isValid () && mProperty_predefinedTypes.isValid () && mProperty_selfObjectCppName.isValid () && mProperty_selfAvailability.isValid () && mProperty_selfObjectCppPrefixForAccessingProperty.isValid () && mProperty_requiresSelfForAccessingProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_analysisContext::drop (void) {
  mProperty_semanticContext.drop () ;
  mProperty_predefinedTypes.drop () ;
  mProperty_selfObjectCppName.drop () ;
  mProperty_selfAvailability.drop () ;
  mProperty_selfObjectCppPrefixForAccessingProperty.drop () ;
  mProperty_requiresSelfForAccessingProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_analysisContext::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @analysisContext:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_semanticContext.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_predefinedTypes.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_selfObjectCppName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_selfAvailability.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_selfObjectCppPrefixForAccessingProperty.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_requiresSelfForAccessingProperty.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @analysisContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_analysisContext ("analysisContext",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_analysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_analysisContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_analysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_analysisContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_analysisContext GALGAS_analysisContext::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_analysisContext result ;
  const GALGAS_analysisContext * p = (const GALGAS_analysisContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_analysisContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("analysisContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@productionRuleListForGrammarAnalysis-element displayRule'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_displayRule (const GALGAS_productionRuleListForGrammarAnalysis_2D_element inObject,
                                  const GALGAS_string constinArgument_inSyntaxComponentName,
                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                  Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_currentNode_5020 = GALGAS_string ("P0start") ;
  GALGAS_rowList temp_0 = GALGAS_rowList::init (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 118)) ;
  GALGAS__32_stringlist temp_1 = GALGAS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 118)) ;
  temp_1.enterElement (GALGAS__32_stringlist_2D_element::init_21__21_ (var_currentNode_5020, GALGAS_string ("[firstPoint] ()"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 118)) ;
  temp_0.enterElement (GALGAS_rowList_2D_element::init_21_ (temp_1, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 118)) ;
  GALGAS_rowList var_rowArray_5059 = temp_0 ;
  GALGAS_string var_arrows_5137 = GALGAS_string::makeEmptyString () ;
  GALGAS_string var_arrowStyle_5163 = GALGAS_string ("--") ;
  GALGAS_uint var_column_5193 = GALGAS_uint (uint32_t (1U)) ;
  GALGAS_uint var_unusedMaxUsedRowIndex_5216 = GALGAS_uint (uint32_t (0U)) ;
  const GALGAS_productionRuleListForGrammarAnalysis_2D_element temp_2 = inObject ;
  cEnumerator_syntaxInstructionListForGrammarAnalysis enumerator_5258 (temp_2.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_5258.hasCurrentObject ()) {
    callExtensionMethod_tikzNodeForSyntaxInstruction ((cPtr_abstractSyntaxInstructionForGrammarAnalysis *) enumerator_5258.current_mInstruction (HERE).ptr (), var_rowArray_5059, GALGAS_uint (uint32_t (0U)), var_column_5193, var_currentNode_5020, var_arrowStyle_5163, var_arrows_5137, var_unusedMaxUsedRowIndex_5216, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 124)) ;
    enumerator_5258.gotoNextObject () ;
  }
  GALGAS_string var_lastNodeName_5655 ;
  {
  extensionSetter_appendRow (var_rowArray_5059, GALGAS_string ("[lastPoint] ()"), GALGAS_uint (uint32_t (0U)), var_column_5193, var_lastNodeName_5655, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 136)) ;
  }
  var_arrows_5137.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (var_currentNode_5020, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).add_operation (GALGAS_string (") -- ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).add_operation (var_lastNodeName_5655, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)) ;
  const GALGAS_productionRuleListForGrammarAnalysis_2D_element temp_3 = inObject ;
  GALGAS_location var_loc_5774 = temp_3.readProperty_mLeftNonterminalSymbol ().readProperty_location () ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\ruleSubsection{").add_operation (function_escapeForTex (constinArgument_inSyntaxComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 140)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 141)).add_operation (function_escapeForTex (var_loc_5774.getter_file (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 143)).getter_lastPathComponent (SOURCE_FILE ("production-rules-in-tex.galgas", 143)).getter_stringByDeletingPathExtension (SOURCE_FILE ("production-rules-in-tex.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 142)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 143)).add_operation (function_escapeForTex (var_loc_5774.getter_startLine (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 144)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 144)).add_operation (GALGAS_string ("}\n\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 144)).add_operation (GALGAS_string ("\\begin{tikzpicture}\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 145)).add_operation (GALGAS_string ("  \\matrix[column sep=\\ruleMatrixColumnSeparation, row sep=\\ruleMatrixRowSeparation] {\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 140)) ;
  cEnumerator_rowList enumerator_6196 (var_rowArray_5059, EnumerationOrder::down) ;
  while (enumerator_6196.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("    "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 149)) ;
    cEnumerator__32_stringlist enumerator_6268 (enumerator_6196.current_columns (HERE), EnumerationOrder::up) ;
    while (enumerator_6268.hasCurrentObject ()) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (ComparisonKind::equal, enumerator_6268.current (HERE).readProperty_mValue_30_ ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_4) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("& "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 152)) ;
        }
      }
      if (kBoolFalse == test_4) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\node (").add_operation (enumerator_6268.current (HERE).readProperty_mValue_30_ (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)).add_operation (enumerator_6268.current (HERE).readProperty_mValue_31_ (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)).add_operation (GALGAS_string ("; & "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)) ;
      }
      enumerator_6268.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\\\\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 157)) ;
    enumerator_6196.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  };\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 159)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_arrows_5137, inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 161)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("\\end{tikzpicture}\n\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 162)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addICNS_file'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addICNS_5F_file (GALGAS_XcodeProjectDescriptor & ioObject,
                                      const GALGAS_string constinArgument_inFileName,
                                      GALGAS_string & outArgument_outFileRef,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 32)) ;
  }
  ioObject.mProperty_mICNS_5F_fileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 33)) ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_templateAnalysisContext::GALGAS_templateAnalysisContext (void) :
mProperty_mSemanticContext (),
mProperty_mPredefinedTypes (),
mProperty_mTemplateVariableMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateAnalysisContext::~ GALGAS_templateAnalysisContext (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_templateAnalysisContext GALGAS_templateAnalysisContext::init_21__21__21_ (const GALGAS_semanticContext & in_mSemanticContext,
                                                                                 const GALGAS_predefinedTypes & in_mPredefinedTypes,
                                                                                 const GALGAS_templateVariableMap & in_mTemplateVariableMap,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateAnalysisContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSemanticContext = in_mSemanticContext ;
  result.mProperty_mPredefinedTypes = in_mPredefinedTypes ;
  result.mProperty_mTemplateVariableMap = in_mTemplateVariableMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateAnalysisContext::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateAnalysisContext::GALGAS_templateAnalysisContext (const GALGAS_semanticContext & inOperand0,
                                                                const GALGAS_predefinedTypes & inOperand1,
                                                                const GALGAS_templateVariableMap & inOperand2) :
mProperty_mSemanticContext (inOperand0),
mProperty_mPredefinedTypes (inOperand1),
mProperty_mTemplateVariableMap (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateAnalysisContext GALGAS_templateAnalysisContext::class_func_new (const GALGAS_semanticContext & in_mSemanticContext,
                                                                               const GALGAS_predefinedTypes & in_mPredefinedTypes,
                                                                               const GALGAS_templateVariableMap & in_mTemplateVariableMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateAnalysisContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSemanticContext = in_mSemanticContext ;
  result.mProperty_mPredefinedTypes = in_mPredefinedTypes ;
  result.mProperty_mTemplateVariableMap = in_mTemplateVariableMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_templateAnalysisContext::isValid (void) const {
  return mProperty_mSemanticContext.isValid () && mProperty_mPredefinedTypes.isValid () && mProperty_mTemplateVariableMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateAnalysisContext::drop (void) {
  mProperty_mSemanticContext.drop () ;
  mProperty_mPredefinedTypes.drop () ;
  mProperty_mTemplateVariableMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateAnalysisContext::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateAnalysisContext:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSemanticContext.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPredefinedTypes.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTemplateVariableMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @templateAnalysisContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateAnalysisContext ("templateAnalysisContext",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateAnalysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateAnalysisContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateAnalysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateAnalysisContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateAnalysisContext GALGAS_templateAnalysisContext::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateAnalysisContext result ;
  const GALGAS_templateAnalysisContext * p = (const GALGAS_templateAnalysisContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateAnalysisContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateAnalysisContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_propertyAccessRequiresSelf ("galgas_cli_options",
                                         "propertyAccessRequiresSelf",
                                         0,
                                         "error-property-access-without-self",
                                         "'self' is required for accessing properties in getter, setter and methods") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_checkEntityUsefulness ("galgas_cli_options",
                                         "checkEntityUsefulness",
                                         0,
                                         "check-usefulness",
                                         "Check Entity Usefulness") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_displayUnicodeLexicalTestFunctions ("galgas_cli_options",
                                         "displayUnicodeLexicalTestFunctions",
                                         0,
                                         "display-lexical-test-functions",
                                         "Display Unicode Lexical Test Functions") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_emitClassGraph ("galgas_cli_options",
                                         "emitClassGraph",
                                         0,
                                         "emit-class-graph",
                                         "Emit class graph in dot file") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_emitSyntaxDiagrams ("galgas_cli_options",
                                         "emitSyntaxDiagrams",
                                         0,
                                         "emit-syntax-diagrams",
                                         "Emit grammar syntax diagrams in TEX files") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorAnomynousForInstructionEnumeratedObject ("galgas_cli_options",
                                         "errorAnomynousForInstructionEnumeratedObject",
                                         0,
                                         "error-anonymous-for-instruction",
                                         "Error on anonymous 'for' instruction enumerated object ('for () in ...')") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall ("galgas_cli_options",
                                         "errorObsoleteGetterCall",
                                         0,
                                         "error-on-obsolete-getter-call",
                                         "Error on call of an obsolete getter") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorPropertyGetterCall ("galgas_cli_options",
                                         "errorPropertyGetterCall",
                                         0,
                                         "error-property-getter-call",
                                         "Error on calling property getter (instead of dot notation)") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorEllipsisInEnumeratedObject ("galgas_cli_options",
                                         "errorEllipsisInEnumeratedObject",
                                         0,
                                         "error-ellipsis-in-for-instruction",
                                         "Error on ellipsis in enumerated object ('for (x y ...) in xxx')") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOnGetterCallWithNoArgument ("galgas_cli_options",
                                         "errorOnGetterCallWithNoArgument",
                                         0,
                                         "error-on-getter-call-with-no-argument",
                                         "Error on getter call; with no argument (GGS4, suppress parenthesis)") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOldStyleCollectionInitializer ("galgas_cli_options",
                                         "errorOldStyleCollectionInitializer",
                                         0,
                                         "error-old-syle-collection-initializer",
                                         "Error on old style collection initializer") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOldStyleLocalVarDeclaration ("galgas_cli_options",
                                         "errorOldStyleLocalVarDeclaration",
                                         0,
                                         "error-old-style-local-var-declaration",
                                         "Error on old style local variable declaration") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorOldStylePropertyDeclaration ("galgas_cli_options",
                                         "errorOldStylePropertyDeclaration",
                                         0,
                                         "error-old-style-property-declaration",
                                         "Error on old style property declaration") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_errorUsingNewInsteadOfInit ("galgas_cli_options",
                                         "errorUsingNewInsteadOfInit",
                                         0,
                                         "error-using-new-instead-of-init",
                                         "GGS3: error on using 'new' instead of 'init'") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateManyFiles ("galgas_cli_options",
                                         "generateManyFiles",
                                         0,
                                         "generate-many-cpp-files",
                                         "Generate many C++ implementation files") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_generateOneHeader ("galgas_cli_options",
                                         "generateOneHeader",
                                         0,
                                         "generate-one-cpp-header",
                                         "Generate one C++ header file for all declarations") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile ("galgas_cli_options",
                                         "outputHTMLgrammarFile",
                                         0,
                                         "output-html-grammar-file",
                                         "Output a HTML file for every grammar component") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_outputHTMLTypeListFile ("galgas_cli_options",
                                         "outputHTMLTypeListFile",
                                         84,
                                         "output-html-type-dump-file",
                                         "Output a HTML file that contains all defined types") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_printPredefinedLexicalActions ("galgas_cli_options",
                                         "printPredefinedLexicalActions",
                                         0,
                                         "print-predefined-lexical-actions",
                                         "Print the list of predefined lexical routines and functions") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_check_5F_big_5F_int ("galgas_cli_options",
                                         "check_big_int",
                                         0,
                                         "check-big-int",
                                         "Run bit integers checks") ;

BoolCommandLineOption gOption_galgas_5F_cli_5F_options_warningNotGalgas_34_Feature ("galgas_cli_options",
                                         "warningNotGalgas4Feature",
                                         0,
                                         "warns-on-feature-not-handled-in-galgas4",
                                         "Warns on feature not handled in galgas 4") ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

UIntCommandLineOption gOption_galgas_5F_cli_5F_options_macosxSDK ("galgas_cli_options",
                                         "macosxSDK",
                                         0,
                                         "macosx",
                                         "Generate an Xcode project for OS X",
                                         0) ;

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

StringCommandLineOption gOption_galgas_5F_cli_5F_options_create_5F_project ("galgas_cli_options",
                                         "create_project",
                                         0,
                                         "create-project",
                                         "Create a new GALGAS Project",
                                         "") ;

StringCommandLineOption gOption_galgas_5F_cli_5F_options_extractLIBPMOption ("galgas_cli_options",
                                         "extractLIBPMOption",
                                         0,
                                         "extract-libpm",
                                         "Extract embedded LIBPM at given path",
                                         "") ;

StringCommandLineOption gOption_galgas_5F_cli_5F_options_cppCompile ("galgas_cli_options",
                                         "cppCompile",
                                         0,
                                         "compile",
                                         "Perform C++ compilation on 'string' target",
                                         "") ;

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'projectCreationFileWrapper'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_projectCreationFileWrapper_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_projectCreationFileWrapper_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_projectCreationFileWrapper (
  "",
  0,
  gWrapperAllFiles_projectCreationFileWrapper_0,
  0,
  gWrapperAllDirectories_projectCreationFileWrapper_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_project'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("project (0:0:1) -> ") ;
  result.appendString (in_PROJECT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("+PROJECT.galgasProject.galgasTemplate", 1)).stringValue ()) ;
  result.appendString (" {\n#--- Targets\n  %makefile-unix\n  %makefile-macosx\n  %makefile-x86linux32-on-macosx\n  %makefile-x86linux64-on-macosx\n  %makefile-win32-on-macosx\n  %MacOS\n  %applicationBundleBase : \"fr.what\"\n  %codeblocks-windows\n  %codeblocks-linux32\n  %codeblocks-linux64\n\n#--- Source files\n  \"galgas-sources/") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("-lexique.galgas\"\n  \"galgas-sources/") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("-options.galgas\"\n  \"galgas-sources/") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("-semantics.galgas\"\n  \"galgas-sources/") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("-syntax.galgas\"\n  \"galgas-sources/") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("-grammar.galgas\"\n  \"galgas-sources/") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("-cocoa.galgas\"\n  \"galgas-sources/") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("-program.galgas\"\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_cocoa'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (Compiler * /* inCompiler */,
                                                                               const GALGAS_string & in_PROJECT_5F_NAME
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("gui cocoa {\n  with option ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_options\n\n  with lexique ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_lexique {\n    fileExtension: \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\"\n    title: \"Source\"\n    blockComment : \"#\"\n  }\n\n}\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_grammar'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("grammar ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_grammar \"LL1\" {\n  syntax ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_syntax\n  <start_symbol>\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_lexique'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("lexique ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_lexique {\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Identifiers and keywords                                                                     \n#-----------------------------------------------------------------------------------------------------------------------\n\n@string tokenString\n\nstyle keywordsStyle -> \"Keywords\"\n\n$identifier$ ! tokenString error message \"an identifier\"\n\n#--- This is the keyword list\nlist keyWordList style keywordsStyle error message \"the '%K' keyword\" {\n  \"begin\",\n  \"end\"\n}\n\nrule 'a'->'z' |  'A'->'Z' {\n  repeat\n    enterCharacterIntoString (!\?tokenString !*)\n  while 'a'->'z' | 'A'->'Z' | '_' | '0'->'9' :\n  end\n  send search tokenString in keyWordList default $identifier$\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Literal decimal integers                                                                     \n#-----------------------------------------------------------------------------------------------------------------------\n\nstyle integerStyle -> \"Integer Constants\"\n@uint uint32value\n$integer$ !uint32value style integerStyle error message \"a 32-bit unsigned decimal number\"\n\nmessage decimalNumberTooLarge : \"decimal number too large\"\nmessage internalError : \"internal error\"\n\nrule '0'->'9' {\n  enterCharacterIntoString (!\?tokenString !*)\n  repeat\n  while '0'->'9' :\n    enterCharacterIntoString (!\?tokenString !*)\n  while '_' :\n  end\n  convertDecimalStringIntoUInt (!tokenString !\?uint32value error decimalNumberTooLarge, internalError)\n  send $integer$\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Literal character strings                                                                    \n#-----------------------------------------------------------------------------------------------------------------------\n\nstyle stringStyle -> \"String Constants\"\n$\"string\"$ ! tokenString style stringStyle %nonAtomicSelection error message \"a character string constant \\\"...\\\"\"\n\n\nmessage incorrectStringEnd : \"string does not end with '\\\"'\"\n\nrule '\"' {\n  repeat\n   while ' ' | '!' | '#'-> '\\uFFFD' :\n    enterCharacterIntoString (!\?tokenString !*)\n  end\n  select\n  case '\"' :\n    send $\"string\"$\n  default\n    error incorrectStringEnd\n  end\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Delimiters                                                                                   \n#-----------------------------------------------------------------------------------------------------------------------\n\nstyle delimitersStyle -> \"Delimiters\"\nlist delimitorsList style delimitersStyle error message \"the '%K' delimitor\" {\n  \":\",    \",\",    \";\",   \"!\",  \"{\",  \"}\", \"->\", \"@\", \"*\", \"-\"\n}\n\nrule list delimitorsList\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Comments                                                                                     \n#-----------------------------------------------------------------------------------------------------------------------\n\nstyle commentStyle -> \"Comments\"\n$comment$ style commentStyle %nonAtomicSelection error message \"a comment\"\nrule '#' {\n  repeat\n  while '\\u0001' -> '\\u0009' | '\\u000B' | '\\u000C' | '\\u000E' -> '\\uFFFD' :\n  end\n  drop $comment$\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Separators                                                                                   \n#-----------------------------------------------------------------------------------------------------------------------\n\nrule '\\u0001' -> ' ' {\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_options'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("option ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_options {\n\n# ADD YOUR CODE\n\n}\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_program'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_PROJECT_5F_NAME
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#--- Prologue routine\nbefore {\n}\n\n#--- 'when' clauses\ncase . \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\"\nmessage \"a source text file with the .") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString (" extension\"\ngrammar ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_grammar\n\?sourceFilePath:@lstring inSourceFile {\n  grammar ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_grammar () in inSourceFile\n}\n\n#--- Epilogue routine\nafter {\n}\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_semantics'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (Compiler * /* inCompiler */,
                                                                                   const GALGAS_string & /* in_PROJECT_5F_NAME */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n# ADD YOUR CODE\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_syntax'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (Compiler * /* inCompiler */,
                                                                                const GALGAS_string & in_PROJECT_5F_NAME
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("syntax ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_syntax (") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_lexique) {\n\nrule <start_symbol> {\n  # ADD YOUR SYNTAX INSTRUCTIONS\n}\n\n# ADD OTHER RULES\n\n}\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'performProjectCreation?'
//
//--------------------------------------------------------------------------------------------------

void routine_performProjectCreation_3F_ (const GALGAS_string constinArgument_inProjectPath,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_projectName_2479 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas", 46)) ;
  GALGAS_string var_galgas_5F_sources_5F_DIR_2561 = constinArgument_inProjectPath.add_operation (GALGAS_string ("/galgas-sources"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)) ;
  var_galgas_5F_sources_5F_DIR_2561.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (inCompiler, var_projectName_2479 COMMA_SOURCE_FILE ("projectCreation.galgas", 50))).method_writeToFile (constinArgument_inProjectPath.add_operation (GALGAS_string ("/+"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)).add_operation (var_projectName_2479, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)).add_operation (GALGAS_string (".galgasProject"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (inCompiler, var_projectName_2479 COMMA_SOURCE_FILE ("projectCreation.galgas", 51))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2561.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)).add_operation (var_projectName_2479, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)).add_operation (GALGAS_string ("-cocoa.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (inCompiler, var_projectName_2479 COMMA_SOURCE_FILE ("projectCreation.galgas", 52))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2561.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 52)).add_operation (var_projectName_2479, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 52)).add_operation (GALGAS_string ("-grammar.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 52)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (inCompiler, var_projectName_2479 COMMA_SOURCE_FILE ("projectCreation.galgas", 53))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2561.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 53)).add_operation (var_projectName_2479, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 53)).add_operation (GALGAS_string ("-lexique.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 53)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (inCompiler, var_projectName_2479 COMMA_SOURCE_FILE ("projectCreation.galgas", 54))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2561.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 54)).add_operation (var_projectName_2479, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 54)).add_operation (GALGAS_string ("-options.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 54)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (inCompiler, var_projectName_2479 COMMA_SOURCE_FILE ("projectCreation.galgas", 55))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2561.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 55)).add_operation (var_projectName_2479, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 55)).add_operation (GALGAS_string ("-program.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 55)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (inCompiler, var_projectName_2479 COMMA_SOURCE_FILE ("projectCreation.galgas", 56))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2561.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 56)).add_operation (var_projectName_2479, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 56)).add_operation (GALGAS_string ("-semantics.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 56)) ;
  GALGAS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (inCompiler, var_projectName_2479 COMMA_SOURCE_FILE ("projectCreation.galgas", 57))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2561.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 57)).add_operation (var_projectName_2479, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 57)).add_operation (GALGAS_string ("-syntax.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 57)) ;
  {
  routine_println_3F_ (GALGAS_string ("*** DONE ***"), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 59)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'projectCreation?'
//
//--------------------------------------------------------------------------------------------------

void routine_projectCreation_3F_ (const GALGAS_string constinArgument_inProjectPath,
                                  Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::greaterThan, constinArgument_inProjectPath.getter_count (SOURCE_FILE ("projectCreation.galgas", 65)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_println_3F_ (GALGAS_string ("*** PERFORM PROJECT CREATION (--create-project=").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 66)).add_operation (GALGAS_string (" option) ***"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 66)) ;
      }
      GALGAS_string var_projectName_4215 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas", 68)) ;
      GALGAS_bool var_ok_4277 = var_projectName_4215.getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 69)).getter_isalpha (SOURCE_FILE ("projectCreation.galgas", 69)) ;
      GALGAS_uint var_idx_4340 = GALGAS_uint (uint32_t (1U)) ;
      if (var_projectName_4215.getter_count (SOURCE_FILE ("projectCreation.galgas", 71)).isValid ()) {
        uint32_t variant_4352 = var_projectName_4215.getter_count (SOURCE_FILE ("projectCreation.galgas", 71)).uintValue () ;
        bool loop_4352 = true ;
        while (loop_4352) {
          loop_4352 = GALGAS_bool (ComparisonKind::lowerThan, var_idx_4340.objectCompare (var_projectName_4215.getter_count (SOURCE_FILE ("projectCreation.galgas", 72)))).operator_and (var_ok_4277 COMMA_SOURCE_FILE ("projectCreation.galgas", 72)).isValid () ;
          if (loop_4352) {
            loop_4352 = GALGAS_bool (ComparisonKind::lowerThan, var_idx_4340.objectCompare (var_projectName_4215.getter_count (SOURCE_FILE ("projectCreation.galgas", 72)))).operator_and (var_ok_4277 COMMA_SOURCE_FILE ("projectCreation.galgas", 72)).boolValue () ;
          }
          if (loop_4352 && (0 == variant_4352)) {
            loop_4352 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("projectCreation.galgas", 71)) ;
          }
          if (loop_4352) {
            variant_4352 -- ;
            GALGAS_char var_c_4441 = var_projectName_4215.getter_characterAtIndex (var_idx_4340, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 73)) ;
            var_ok_4277 = var_c_4441.getter_isalnum (SOURCE_FILE ("projectCreation.galgas", 74)).operator_or (GALGAS_bool (ComparisonKind::equal, var_c_4441.objectCompare (GALGAS_char (TO_UNICODE (95)))) COMMA_SOURCE_FILE ("projectCreation.galgas", 74)) ;
            var_idx_4340.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 75)) ;
          }
        }
      }
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_ok_4277.operator_not (SOURCE_FILE ("projectCreation.galgas", 77)).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          routine_println_3F_ (GALGAS_string ("** Cannot create GALGAS project: the project name '").add_operation (var_projectName_4215, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 78)).add_operation (GALGAS_string ("' should begin by a letter followed by zero, one or more letters, digits and underscore character."), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 79)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 78)) ;
          }
        }
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_ok_4277.boolEnum () ;
        if (kBoolTrue == test_2) {
          var_ok_4277 = constinArgument_inProjectPath.getter_directoryExists (SOURCE_FILE ("projectCreation.galgas", 83)).operator_not (SOURCE_FILE ("projectCreation.galgas", 83)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_ok_4277.operator_not (SOURCE_FILE ("projectCreation.galgas", 84)).boolEnum () ;
            if (kBoolTrue == test_3) {
              {
              routine_println_3F_ (GALGAS_string ("*** Cannot create GALGAS project: '").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 85)).add_operation (GALGAS_string ("' directory already exists.***"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 85)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 85)) ;
              }
            }
          }
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_ok_4277.boolEnum () ;
        if (kBoolTrue == test_4) {
          {
          routine_performProjectCreation_3F_ (constinArgument_inProjectPath, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 89)) ;
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterTemplateString&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterTemplateString_26_ (GALGAS_templateInstructionListAST & ioArgument_outResultingInstructionList,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s_21506 = GALGAS_string::class_func_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 604)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::greaterThan, var_s_21506.getter_count (SOURCE_FILE ("templateSyntax.galgas", 605)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_outResultingInstructionList.addAssign_operation (GALGAS_templateInstructionStringAST::init_21_ (var_s_21506, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas", 606)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateGetterCallInExpressionAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateGetterCallInExpressionAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_receiverExpression_3806 ;
  const GALGAS_templateGetterCallInExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_receiverExpression_3806, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 80)) ;
  GALGAS_unifiedTypeMapEntry var_receiverType_3856 = var_receiverExpression_3806.readProperty_mResultType () ;
  GALGAS_string var_receiverTypeName_3908 = extensionGetter_definition (var_receiverType_3856, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 88)).readProperty_typeName ().readProperty_string () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_bool test_2 = extensionGetter_definition (var_receiverType_3856, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 90)).readProperty_typeKind ().getter_isStructType (SOURCE_FILE ("templateAnalysis.galgas", 90)) ;
    if (kBoolTrue != test_2.boolEnum ()) {
      test_2 = extensionGetter_definition (var_receiverType_3856, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 90)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 90)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateGetterCallInExpressionAST temp_3 = this ;
      test_1 = GALGAS_bool (ComparisonKind::equal, temp_3.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 91)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const GALGAS_templateGetterCallInExpressionAST temp_4 = this ;
        const GALGAS_propertyMap_2D_element var_theGetter_4180 = extensionGetter_definition (var_receiverType_3856, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 92)).readProperty_propertyMap ().readSubscript__3F_ (temp_4.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
        if (!extensionGetter_definition (var_receiverType_3856, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 92)).readProperty_propertyMap ().readSubscript__3F_ (temp_4.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
          test_1 = kBoolFalse ;
        }
        if (kBoolTrue == test_1) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorPropertyGetterCall.readProperty_value ()).boolEnum () ;
            if (kBoolTrue == test_5) {
              const GALGAS_templateGetterCallInExpressionAST temp_6 = this ;
              TC_Array <FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (temp_6.readProperty_mExpressionLocation (), GALGAS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 94)) ;
            }
          }
          const GALGAS_templateGetterCallInExpressionAST temp_8 = this ;
          extensionMethod_checkSetAccess (var_theGetter_4180.readProperty_mAccessControl (), GALGAS_selfAvailability::class_func_none (SOURCE_FILE ("templateAnalysis.galgas", 96)), temp_8.readProperty_mGetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 96)) ;
          const GALGAS_templateGetterCallInExpressionAST temp_9 = this ;
          const GALGAS_templateGetterCallInExpressionAST temp_10 = this ;
          outArgument_outExpression = GALGAS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_theGetter_4180.readProperty_mPropertyType (), temp_9.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_3806, temp_10.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE) ;
        }
      }
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_getterMap var_getterMap_4749 = extensionGetter_definition (var_receiverType_3856, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 105)).readProperty_getterMap () ;
    GALGAS_functionSignature var_getterFormalArgumentTypeList_4849 ;
    GALGAS_methodKind var_kind_4898 ;
    GALGAS_bool var_hasCompilerArgument_4917 ;
    GALGAS_unifiedTypeMapEntry var_returnedType_4966 ;
    GALGAS_stringlist var_fieldList_4987 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
    const GALGAS_templateGetterCallInExpressionAST temp_11 = this ;
    GALGAS_string var_actualGetterName_5022 = temp_11.readProperty_mGetterName ().readProperty_string () ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      const GALGAS_templateGetterCallInExpressionAST temp_13 = this ;
      test_12 = var_getterMap_4749.getter_hasKey (temp_13.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 113)).boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_string var_actualGetterNameString_5304 ;
        const GALGAS_templateGetterCallInExpressionAST temp_14 = this ;
        GALGAS_location joker_5226 ; // Joker input parameter
        GALGAS_methodQualifier joker_5288 ; // Joker input parameter
        var_getterMap_4749.method_searchKey (temp_14.readProperty_mGetterName (), var_kind_4898, var_getterFormalArgumentTypeList_4849, joker_5226, var_hasCompilerArgument_4917, var_returnedType_4966, joker_5288, var_actualGetterNameString_5304, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 114)) ;
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          test_15 = GALGAS_bool (ComparisonKind::notEqual, var_actualGetterNameString_5304.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_15) {
            var_actualGetterName_5022 = var_actualGetterNameString_5304 ;
            enumGalgasBool test_16 = kBoolTrue ;
            if (kBoolTrue == test_16) {
              test_16 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall.readProperty_value ()).boolEnum () ;
              if (kBoolTrue == test_16) {
                const GALGAS_templateGetterCallInExpressionAST temp_17 = this ;
                TC_Array <FixItDescription> fixItArray18 ;
                appendFixItActions (fixItArray18, kFixItReplace, var_actualGetterName_5022) ;
                inCompiler->emitSemanticError (temp_17.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("obsolete getter"), fixItArray18  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 126)) ;
              }
            }
          }
        }
      }
    }
    if (kBoolFalse == test_12) {
      GALGAS_uint var_matchingReaderCount_5637 = GALGAS_uint (uint32_t (0U)) ;
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_3856, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 131)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_structType (SOURCE_FILE ("templateAnalysis.galgas", 131)))).boolEnum () ;
        if (kBoolTrue == test_19) {
          var_getterFormalArgumentTypeList_4849 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
          var_hasCompilerArgument_4917 = GALGAS_bool (true) ;
          var_returnedType_4966 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("templateAnalysis.galgas", 134)) ;
          var_kind_4898 = GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas", 135)) ;
          cEnumerator_typedPropertyList enumerator_5954 (extensionGetter_definition (var_receiverType_3856, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 136)).readProperty_currentTypedPropertyList (), EnumerationOrder::up) ;
          while (enumerator_5954.hasCurrentObject ()) {
            GALGAS_getterMap var_aMap_6039 = extensionGetter_definition (enumerator_5954.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 137)).readProperty_getterMap () ;
            const GALGAS_templateGetterCallInExpressionAST temp_20 = this ;
            const cMapElement_getterMap * objectArray_6098 = (const cMapElement_getterMap *) var_aMap_6039.readAccessForWithInstruction (temp_20.readProperty_mGetterName ().readProperty_string ()) ;
            if (nullptr != objectArray_6098) {
                macroValidSharedObject (objectArray_6098, cMapElement_getterMap) ;
              var_matchingReaderCount_5637.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 139)) ;
              var_getterFormalArgumentTypeList_4849 = objectArray_6098->mProperty_mArgumentTypeList ;
              var_hasCompilerArgument_4917 = objectArray_6098->mProperty_mHasCompilerArgument ;
              var_returnedType_4966 = objectArray_6098->mProperty_mReturnedType ;
              var_kind_4898 = objectArray_6098->mProperty_mKind ;
              enumGalgasBool test_21 = kBoolTrue ;
              if (kBoolTrue == test_21) {
                test_21 = GALGAS_bool (ComparisonKind::notEqual, objectArray_6098->mProperty_mGetterNameThatObsoletesInvokationName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_21) {
                  var_actualGetterName_5022 = objectArray_6098->mProperty_mGetterNameThatObsoletesInvokationName ;
                }
              }
              var_fieldList_4987.addAssign_operation (enumerator_5954.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 147)) ;
            }
            enumerator_5954.gotoNextObject () ;
          }
          enumGalgasBool test_22 = kBoolTrue ;
          if (kBoolTrue == test_22) {
            test_22 = GALGAS_bool (ComparisonKind::equal, var_matchingReaderCount_5637.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_22) {
              const GALGAS_templateGetterCallInExpressionAST temp_23 = this ;
              const GALGAS_templateGetterCallInExpressionAST temp_24 = this ;
              TC_Array <FixItDescription> fixItArray25 ;
              inCompiler->emitSemanticError (temp_23.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverTypeName_3908, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 152)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 152)).add_operation (temp_24.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 152)).add_operation (GALGAS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 152)), fixItArray25  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 151)) ;
              var_getterFormalArgumentTypeList_4849.drop () ; // Release error dropped variable
              var_hasCompilerArgument_4917.drop () ; // Release error dropped variable
              var_returnedType_4966.drop () ; // Release error dropped variable
              var_kind_4898.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_22) {
            enumGalgasBool test_26 = kBoolTrue ;
            if (kBoolTrue == test_26) {
              test_26 = GALGAS_bool (ComparisonKind::greaterThan, var_matchingReaderCount_5637.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
              if (kBoolTrue == test_26) {
                GALGAS_string var_s_6969 = GALGAS_string::makeEmptyString () ;
                cEnumerator_stringlist enumerator_6991 (var_fieldList_4987, EnumerationOrder::up) ;
                while (enumerator_6991.hasCurrentObject ()) {
                  var_s_6969.plusAssign_operation(enumerator_6991.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 158)) ;
                  if (enumerator_6991.hasNextObject ()) {
                    var_s_6969.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 159)) ;
                  }
                  enumerator_6991.gotoNextObject () ;
                }
                const GALGAS_templateGetterCallInExpressionAST temp_27 = this ;
                const GALGAS_templateGetterCallInExpressionAST temp_28 = this ;
                TC_Array <FixItDescription> fixItArray29 ;
                inCompiler->emitSemanticError (temp_27.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverTypeName_3908, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 162)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 162)).add_operation (temp_28.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 162)).add_operation (GALGAS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 162)).add_operation (var_s_6969, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 163)).add_operation (GALGAS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 163)), fixItArray29  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 161)) ;
                var_getterFormalArgumentTypeList_4849.drop () ; // Release error dropped variable
                var_hasCompilerArgument_4917.drop () ; // Release error dropped variable
                var_returnedType_4966.drop () ; // Release error dropped variable
                var_kind_4898.drop () ; // Release error dropped variable
              }
            }
          }
        }
      }
      if (kBoolFalse == test_19) {
        enumGalgasBool test_30 = kBoolTrue ;
        if (kBoolTrue == test_30) {
          test_30 = GALGAS_bool (ComparisonKind::equal, var_getterMap_4749.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 166)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_30) {
            const GALGAS_templateGetterCallInExpressionAST temp_31 = this ;
            TC_Array <FixItDescription> fixItArray32 ;
            inCompiler->emitSemanticError (temp_31.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverTypeName_3908, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 168)).add_operation (GALGAS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 168)), fixItArray32  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 167)) ;
            var_getterFormalArgumentTypeList_4849.drop () ; // Release error dropped variable
            var_hasCompilerArgument_4917.drop () ; // Release error dropped variable
            var_returnedType_4966.drop () ; // Release error dropped variable
            var_kind_4898.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_30) {
          const GALGAS_templateGetterCallInExpressionAST temp_33 = this ;
          const GALGAS_templateGetterCallInExpressionAST temp_34 = this ;
          TC_Array <FixItDescription> fixItArray35 ;
          appendFixItActions (fixItArray35, kFixItReplace, var_getterMap_4749.getter_keyList (SOURCE_FILE ("templateAnalysis.galgas", 174))) ;
          inCompiler->emitSemanticError (temp_33.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_receiverTypeName_3908, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 172)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 172)).add_operation (temp_34.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 172)).add_operation (GALGAS_string ("' getter"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 172)), fixItArray35  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 171)) ;
          var_getterFormalArgumentTypeList_4849.drop () ; // Release error dropped variable
          var_hasCompilerArgument_4917.drop () ; // Release error dropped variable
          var_returnedType_4966.drop () ; // Release error dropped variable
          var_kind_4898.drop () ; // Release error dropped variable
        }
      }
    }
    enumGalgasBool test_36 = kBoolTrue ;
    if (kBoolTrue == test_36) {
      const GALGAS_templateGetterCallInExpressionAST temp_37 = this ;
      test_36 = GALGAS_bool (ComparisonKind::notEqual, temp_37.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 178)).objectCompare (var_getterFormalArgumentTypeList_4849.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 178)))).boolEnum () ;
      if (kBoolTrue == test_36) {
        const GALGAS_templateGetterCallInExpressionAST temp_38 = this ;
        const GALGAS_templateGetterCallInExpressionAST temp_39 = this ;
        const GALGAS_templateGetterCallInExpressionAST temp_40 = this ;
        TC_Array <FixItDescription> fixItArray41 ;
        inCompiler->emitSemanticError (temp_38.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_39.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 179)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 179)).add_operation (var_receiverTypeName_3908, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 179)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 179)).add_operation (var_getterFormalArgumentTypeList_4849.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 180)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 179)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 180)).add_operation (temp_40.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 181)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 180)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 181)), fixItArray41  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 179)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_36) {
      GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_8393 = GALGAS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
      const GALGAS_templateGetterCallInExpressionAST temp_42 = this ;
      cEnumerator_templateExpressionListAST enumerator_8471 (temp_42.readProperty_mExpressionList (), EnumerationOrder::up) ;
      cEnumerator_functionSignature enumerator_8570 (var_getterFormalArgumentTypeList_4849, EnumerationOrder::up) ;
      while (enumerator_8471.hasCurrentObject () && enumerator_8570.hasCurrentObject ()) {
        enumGalgasBool test_43 = kBoolTrue ;
        if (kBoolTrue == test_43) {
          test_43 = GALGAS_bool (ComparisonKind::notEqual, enumerator_8570.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_8471.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_43) {
            GALGAS_string temp_44 ;
            const enumGalgasBool test_45 = GALGAS_bool (ComparisonKind::notEqual, enumerator_8570.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_45) {
              temp_44 = enumerator_8570.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 187)) ;
            }else if (kBoolFalse == test_45) {
              temp_44 = GALGAS_string::makeEmptyString () ;
            }
            GALGAS_string var_s_8695 = GALGAS_string ("!").add_operation (temp_44, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 187)) ;
            TC_Array <FixItDescription> fixItArray46 ;
            appendFixItActions (fixItArray46, kFixItReplace, var_s_8695) ;
            inCompiler->emitSemanticError (enumerator_8471.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_8695, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 188)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 188)), fixItArray46  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 188)) ;
          }
        }
        GALGAS_semanticExpressionForGeneration var_exp_9103 ;
        callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_8471.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_exp_9103, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 190)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_8570.current_mFormalArgumentType (HERE), var_exp_9103.readProperty_mResultType (), enumerator_8471.current_mEndOfExpressionLocation (HERE), var_exp_9103, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 197)) ;
        }
        var_constructorEffectiveParameterList_8393.addAssign_operation (var_exp_9103  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 198)) ;
        enumerator_8471.gotoNextObject () ;
        enumerator_8570.gotoNextObject () ;
      }
      enumGalgasBool test_47 = kBoolTrue ;
      if (kBoolTrue == test_47) {
        const GALGAS_templateGetterCallInExpressionAST temp_48 = this ;
        GALGAS_bool test_49 = GALGAS_bool (ComparisonKind::notEqual, var_actualGetterName_5022.objectCompare (temp_48.readProperty_mGetterName ().readProperty_string ())) ;
        if (kBoolTrue == test_49.boolEnum ()) {
          test_49 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall.readProperty_value ()) ;
        }
        test_47 = test_49.boolEnum () ;
        if (kBoolTrue == test_47) {
          const GALGAS_templateGetterCallInExpressionAST temp_50 = this ;
          TC_Array <FixItDescription> fixItArray51 ;
          appendFixItActions (fixItArray51, kFixItReplace, var_actualGetterName_5022) ;
          inCompiler->emitSemanticError (temp_50.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("obsolete getter"), fixItArray51  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 201)) ;
        }
      }
      const GALGAS_templateGetterCallInExpressionAST temp_52 = this ;
      outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_returnedType_4966, temp_52.readProperty_mGetterName ().readProperty_location (), var_kind_4898, var_receiverExpression_3806, var_fieldList_4987, var_actualGetterName_5022, var_constructorEffectiveParameterList_8393, var_hasCompilerArgument_4917, inCompiler COMMA_HERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateClassFunctionAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateClassFunctionAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateClassFunctionAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_constructorType_10361 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 228)) ;
  GALGAS_classFunctionMap var_classFunctionMap_10493 = extensionGetter_definition (var_constructorType_10361, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 230)).readProperty_classFunctionMap () ;
  GALGAS_unifiedTypeMapEntry var_returnedType_10612 ;
  GALGAS_bool var_hasCompilerArgument_10637 ;
  GALGAS_functionSignature var_classFuncFormalArgumentTypeList_10682 ;
  const GALGAS_templateClassFunctionAST temp_1 = this ;
  const cMapElement_classFunctionMap * objectArray_10716 = (const cMapElement_classFunctionMap *) var_classFunctionMap_10493.readAccessForWithInstruction (temp_1.readProperty_mClassFunctionName ().readProperty_string ()) ;
  if (nullptr != objectArray_10716) {
      macroValidSharedObject (objectArray_10716, cMapElement_classFunctionMap) ;
    var_classFuncFormalArgumentTypeList_10682 = objectArray_10716->mProperty_mArgumentTypeList ;
    var_hasCompilerArgument_10637 = objectArray_10716->mProperty_mHasCompilerArgument ;
    var_returnedType_10612 = objectArray_10716->mProperty_mReturnedType ;
  }else{
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::equal, var_classFunctionMap_10493.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 240)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_templateClassFunctionAST temp_3 = this ;
        const GALGAS_templateClassFunctionAST temp_4 = this ;
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mClassFunctionName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 242)).add_operation (GALGAS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 242)), fixItArray5  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 241)) ;
        var_classFuncFormalArgumentTypeList_10682.drop () ; // Release error dropped variable
        var_hasCompilerArgument_10637.drop () ; // Release error dropped variable
        var_returnedType_10612.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_templateClassFunctionAST temp_6 = this ;
      const GALGAS_templateClassFunctionAST temp_7 = this ;
      const GALGAS_templateClassFunctionAST temp_8 = this ;
      TC_Array <FixItDescription> fixItArray9 ;
      appendFixItActions (fixItArray9, kFixItReplace, var_classFunctionMap_10493.getter_keyList (SOURCE_FILE ("templateAnalysis.galgas", 248))) ;
      inCompiler->emitSemanticError (temp_6.readProperty_mClassFunctionName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_7.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 246)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 246)).add_operation (temp_8.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 246)).add_operation (GALGAS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 246)), fixItArray9  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 245)) ;
      var_classFuncFormalArgumentTypeList_10682.drop () ; // Release error dropped variable
      var_hasCompilerArgument_10637.drop () ; // Release error dropped variable
      var_returnedType_10612.drop () ; // Release error dropped variable
    }
  }
  GALGAS_semanticExpressionListForGeneration var_classFunctionEffectiveParameterList_11510 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_templateClassFunctionAST temp_11 = this ;
    test_10 = GALGAS_bool (ComparisonKind::notEqual, temp_11.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 253)).objectCompare (var_classFuncFormalArgumentTypeList_10682.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 253)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_templateClassFunctionAST temp_12 = this ;
      const GALGAS_templateClassFunctionAST temp_13 = this ;
      const GALGAS_templateClassFunctionAST temp_14 = this ;
      TC_Array <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mClassFunctionName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_13.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 255)).add_operation (GALGAS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 255)).add_operation (extensionGetter_definition (var_constructorType_10361, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 255)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 255)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 255)).add_operation (var_classFuncFormalArgumentTypeList_10682.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 256)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 255)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 256)).add_operation (temp_14.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 257)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 256)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 257)), fixItArray15  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 254)) ;
      var_classFunctionEffectiveParameterList_11510.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_10) {
    var_classFunctionEffectiveParameterList_11510 = GALGAS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    const GALGAS_templateClassFunctionAST temp_16 = this ;
    cEnumerator_templateExpressionListAST enumerator_12122 (temp_16.readProperty_mExpressionList (), EnumerationOrder::up) ;
    cEnumerator_functionSignature enumerator_12211 (var_classFuncFormalArgumentTypeList_10682, EnumerationOrder::up) ;
    while (enumerator_12122.hasCurrentObject () && enumerator_12211.hasCurrentObject ()) {
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = GALGAS_bool (ComparisonKind::notEqual, enumerator_12211.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_12122.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_17) {
          GALGAS_string temp_18 ;
          const enumGalgasBool test_19 = GALGAS_bool (ComparisonKind::notEqual, enumerator_12211.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_19) {
            temp_18 = enumerator_12211.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 263)) ;
          }else if (kBoolFalse == test_19) {
            temp_18 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_12335 = GALGAS_string ("!").add_operation (temp_18, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 263)) ;
          TC_Array <FixItDescription> fixItArray20 ;
          appendFixItActions (fixItArray20, kFixItReplace, var_s_12335) ;
          inCompiler->emitSemanticError (enumerator_12122.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_12335, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 264)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 264)), fixItArray20  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 264)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_exp_12727 ;
      callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_12122.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_exp_12727, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 266)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_12211.current_mFormalArgumentType (HERE), var_exp_12727.readProperty_mResultType (), enumerator_12122.current_mEndOfExpressionLocation (HERE), var_exp_12727, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 273)) ;
      }
      var_classFunctionEffectiveParameterList_11510.addAssign_operation (var_exp_12727  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 274)) ;
      enumerator_12122.gotoNextObject () ;
      enumerator_12211.gotoNextObject () ;
    }
  }
  const GALGAS_templateClassFunctionAST temp_21 = this ;
  const GALGAS_templateClassFunctionAST temp_22 = this ;
  outArgument_outExpression = GALGAS_classFuncExpressionForGeneration::init_21__21__21__21__21__21_ (var_returnedType_10612, temp_21.readProperty_mClassFunctionName ().readProperty_location (), var_constructorType_10361, temp_22.readProperty_mClassFunctionName ().readProperty_string (), var_classFunctionEffectiveParameterList_11510, var_hasCompilerArgument_10637, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateFileWrapperTemplateCallAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateFileWrapperTemplateCallAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateFileWrapperTemplateCallAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mFileWrapperName ().readProperty_location (), GALGAS_string ("unhandled @templateFileWrapperTemplateCallAST templateExpressionAnalysis"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 299)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateAndOperationAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateAndOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_14633 ;
  const GALGAS_templateAndOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_14633, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 314)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_14874 ;
  const GALGAS_templateAndOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_14874, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 322)) ;
  {
  const GALGAS_templateAndOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_14633.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 331)).readProperty_features ().getter_infixAndOperator (SOURCE_FILE ("templateAnalysis.galgas", 331)), GALGAS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_14633, var_rightExpression_14874, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 330)) ;
  }
  const GALGAS_templateAndOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_14633.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_14633, GALGAS_binaryOperator::class_func_operator_5F_and (SOURCE_FILE ("templateAnalysis.galgas", 342)), var_rightExpression_14874, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateOrOperationAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateOrOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_15954 ;
  const GALGAS_templateOrOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_15954, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 357)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_16195 ;
  const GALGAS_templateOrOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_16195, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 365)) ;
  {
  const GALGAS_templateOrOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_15954.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 374)).readProperty_features ().getter_infixOrOperator (SOURCE_FILE ("templateAnalysis.galgas", 374)), GALGAS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_15954, var_rightExpression_16195, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 373)) ;
  }
  const GALGAS_templateOrOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_15954.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_15954, GALGAS_binaryOperator::class_func_operator_5F_or (SOURCE_FILE ("templateAnalysis.galgas", 385)), var_rightExpression_16195, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateXorOperationAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateXorOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_17274 ;
  const GALGAS_templateXorOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_17274, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 400)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_17515 ;
  const GALGAS_templateXorOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_17515, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 408)) ;
  {
  const GALGAS_templateXorOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_17274.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 417)).readProperty_features ().getter_infixXorOperator (SOURCE_FILE ("templateAnalysis.galgas", 417)), GALGAS_string ("^"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_17274, var_rightExpression_17515, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 416)) ;
  }
  const GALGAS_templateXorOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_17274.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_17274, GALGAS_binaryOperator::class_func_operator_5F_xor (SOURCE_FILE ("templateAnalysis.galgas", 428)), var_rightExpression_17515, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateTrueBoolAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateTrueBoolAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                  GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                  const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                  GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateTrueBoolAST temp_0 = this ;
  outArgument_outExpression = GALGAS_trueExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateFalseBoolAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateFalseBoolAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                   GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                   const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                   GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateFalseBoolAST temp_0 = this ;
  outArgument_outExpression = GALGAS_falseExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralStringExpressionAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralStringExpressionAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s_19466 = GALGAS_string::makeEmptyString () ;
  const GALGAS_templateLiteralStringExpressionAST temp_0 = this ;
  cEnumerator_stringlist enumerator_19480 (temp_0.readProperty_mLiteralStringList (), EnumerationOrder::up) ;
  while (enumerator_19480.hasCurrentObject ()) {
    var_s_19466.plusAssign_operation(enumerator_19480.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 468)) ;
    enumerator_19480.gotoNextObject () ;
  }
  const GALGAS_templateLiteralStringExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalStringExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_1.readProperty_mLocation (), var_s_19466, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralUIntExpressionAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralUIntExpressionAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                               GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateLiteralUIntExpressionAST temp_0 = this ;
  const GALGAS_templateLiteralUIntExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_0.readProperty_mLiteralInt ().readProperty_location (), temp_1.readProperty_mLiteralInt ().readProperty_bigint (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralCharExpressionAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralCharExpressionAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                               GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateLiteralCharExpressionAST temp_0 = this ;
  const GALGAS_templateLiteralCharExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalCharExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_0.readProperty_mLiteralChar ().readProperty_location (), temp_1.readProperty_mLiteralChar ().readProperty_char (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLiteralDoubleExpressionAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralDoubleExpressionAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateLiteralDoubleExpressionAST temp_0 = this ;
  const GALGAS_templateLiteralDoubleExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mDoubleType (), temp_0.readProperty_mLiteralDouble ().readProperty_location (), temp_1.readProperty_mLiteralDouble ().readProperty_double (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateNotOperatorAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateNotOperatorAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_23747 ;
  const GALGAS_templateNotOperatorAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_23747, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 571)) ;
  GALGAS_unifiedTypeMapEntry var_type_23822 = var_expression_23747.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_23822, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 580)).readProperty_features ().getter_prefixNotOperator (SOURCE_FILE ("templateAnalysis.galgas", 580)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 580)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateNotOperatorAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_23822, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 582)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 582)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 582)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 581)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_templateNotOperatorAST temp_4 = this ;
    outArgument_outExpression = GALGAS_notExpressionForGeneration::init_21__21__21_ (var_type_23822, temp_4.readProperty_mOperatorLocation (), var_expression_23747, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLogicalNegateAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateLogicalNegateAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_24808 ;
  const GALGAS_templateLogicalNegateAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_24808, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 604)) ;
  GALGAS_unifiedTypeMapEntry var_type_24883 = var_expression_24808.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_24883, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 613)).readProperty_features ().getter_prefixTildeOperator (SOURCE_FILE ("templateAnalysis.galgas", 613)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 613)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateLogicalNegateAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_24883, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 615)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 615)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 615)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 614)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_templateLogicalNegateAST temp_4 = this ;
    outArgument_outExpression = GALGAS_tildeExpressionForGeneration::init_21__21__21_ (var_type_24883, temp_4.readProperty_mOperatorLocation (), var_expression_24808, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateTestDynamicClassAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateTestDynamicClassAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_25916 ;
  const GALGAS_templateTestDynamicClassAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_25916, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 636)) ;
  const GALGAS_templateTestDynamicClassAST temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_castType_25964 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 644)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_25916.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 646)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 646)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_unifiedTypeMapEntry var_t_26213 = var_castType_25964 ;
      GALGAS_bool var_found_26240 = GALGAS_bool (ComparisonKind::equal, var_t_26213.objectCompare (var_expression_25916.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 650)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 650)).isValid ()) {
        uint32_t variant_26280 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 650)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 650)).uintValue () ;
        bool loop_26280 = true ;
        while (loop_26280) {
          loop_26280 = var_found_26240.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 651)).operator_and (extensionGetter_definition (var_t_26213, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 651)).readProperty_superType ().getter_isNull (SOURCE_FILE ("templateAnalysis.galgas", 651)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 651)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 651)).isValid () ;
          if (loop_26280) {
            loop_26280 = var_found_26240.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 651)).operator_and (extensionGetter_definition (var_t_26213, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 651)).readProperty_superType ().getter_isNull (SOURCE_FILE ("templateAnalysis.galgas", 651)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 651)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 651)).boolValue () ;
          }
          if (loop_26280 && (0 == variant_26280)) {
            loop_26280 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("templateAnalysis.galgas", 650)) ;
          }
          if (loop_26280) {
            variant_26280 -- ;
            var_t_26213 = extensionGetter_definition (var_t_26213, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 652)).readProperty_superType () ;
            var_found_26240 = GALGAS_bool (ComparisonKind::equal, var_t_26213.objectCompare (var_expression_25916.readProperty_mResultType ())) ;
          }
        }
      }
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_found_26240.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 655)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_templateTestDynamicClassAST temp_4 = this ;
          const GALGAS_templateTestDynamicClassAST temp_5 = this ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 657)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 657)).add_operation (extensionGetter_definition (var_expression_25916.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 657)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 657)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 657)), fixItArray6  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 656)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_2) {
    TC_Array <FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_25916.readProperty_mLocation (), GALGAS_string ("expression should be a class instance: it is an @").add_operation (extensionGetter_definition (var_expression_25916.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 661)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 660)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 661)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 660)) ;
  }
  const GALGAS_templateTestDynamicClassAST temp_8 = this ;
  const GALGAS_templateTestDynamicClassAST temp_9 = this ;
  outArgument_outExpression = GALGAS_testDynamicClassInExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_25916, temp_9.readProperty_mTypeComparisonKind (), var_castType_25964, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateOptionAccessAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateOptionAccessAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateOptionAccessAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_27480 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 681)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_27480 COMMA_SOURCE_FILE ("templateAnalysis.galgas", 682)) ;
  }
  GALGAS_bool var_optionComponentIsPredefined_27774 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_27833 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_27878 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_27923 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_27970 ;
  const GALGAS_templateOptionAccessAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionComponentIsPredefined_27774, var_boolOptionMap_27833, var_uintOptionMap_27878, var_stringOptionMap_27923, var_stringListOptionMap_27970, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 683)) ;
  const GALGAS_templateOptionAccessAST temp_2 = this ;
  GALGAS_bool var_found_28000 = var_boolOptionMap_27833.getter_hasKey (temp_2.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 691)) ;
  GALGAS_unifiedTypeMapEntry var_returnedType_28083 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_found_28000.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 693)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_templateOptionAccessAST temp_4 = this ;
      var_found_28000 = var_uintOptionMap_27878.getter_hasKey (temp_4.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 694)) ;
      var_returnedType_28083 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType () ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_found_28000.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 697)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_templateOptionAccessAST temp_6 = this ;
      var_found_28000 = var_stringOptionMap_27923.getter_hasKey (temp_6.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 698)) ;
      var_returnedType_28083 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_found_28000.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 701)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_templateOptionAccessAST temp_8 = this ;
      var_found_28000 = var_stringListOptionMap_27970.getter_hasKey (temp_8.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 702)) ;
      var_returnedType_28083 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType () ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_found_28000.boolEnum () ;
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_templateOptionAccessAST temp_11 = this ;
        test_10 = GALGAS_bool (ComparisonKind::equal, temp_11.readProperty_mGetterName ().readProperty_string ().objectCompare (GALGAS_string ("value"))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_templateOptionAccessAST temp_12 = this ;
          const GALGAS_templateOptionAccessAST temp_13 = this ;
          const GALGAS_templateOptionAccessAST temp_14 = this ;
          outArgument_outExpression = GALGAS_optionValueExpressionForGeneration::init_21__21__21__21__21_ (var_returnedType_28083, temp_12.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_27774, temp_13.readProperty_mOptionComponentName ().readProperty_string (), temp_14.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_HERE) ;
        }
      }
      if (kBoolFalse == test_10) {
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          const GALGAS_templateOptionAccessAST temp_16 = this ;
          test_15 = GALGAS_bool (ComparisonKind::equal, temp_16.readProperty_mGetterName ().readProperty_string ().objectCompare (GALGAS_string ("char"))).boolEnum () ;
          if (kBoolTrue == test_15) {
            const GALGAS_templateOptionAccessAST temp_17 = this ;
            const GALGAS_templateOptionAccessAST temp_18 = this ;
            const GALGAS_templateOptionAccessAST temp_19 = this ;
            outArgument_outExpression = GALGAS_optionCharExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_17.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_27774, temp_18.readProperty_mOptionComponentName ().readProperty_string (), temp_19.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_HERE) ;
          }
        }
        if (kBoolFalse == test_15) {
          enumGalgasBool test_20 = kBoolTrue ;
          if (kBoolTrue == test_20) {
            const GALGAS_templateOptionAccessAST temp_21 = this ;
            test_20 = GALGAS_bool (ComparisonKind::equal, temp_21.readProperty_mGetterName ().readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
            if (kBoolTrue == test_20) {
              const GALGAS_templateOptionAccessAST temp_22 = this ;
              const GALGAS_templateOptionAccessAST temp_23 = this ;
              const GALGAS_templateOptionAccessAST temp_24 = this ;
              outArgument_outExpression = GALGAS_optionStringExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_27774, temp_23.readProperty_mOptionComponentName ().readProperty_string (), temp_24.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_HERE) ;
            }
          }
          if (kBoolFalse == test_20) {
            enumGalgasBool test_25 = kBoolTrue ;
            if (kBoolTrue == test_25) {
              const GALGAS_templateOptionAccessAST temp_26 = this ;
              test_25 = GALGAS_bool (ComparisonKind::equal, temp_26.readProperty_mGetterName ().readProperty_string ().objectCompare (GALGAS_string ("comment"))).boolEnum () ;
              if (kBoolTrue == test_25) {
                const GALGAS_templateOptionAccessAST temp_27 = this ;
                const GALGAS_templateOptionAccessAST temp_28 = this ;
                const GALGAS_templateOptionAccessAST temp_29 = this ;
                outArgument_outExpression = GALGAS_optionCommentExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_27.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_27774, temp_28.readProperty_mOptionComponentName ().readProperty_string (), temp_29.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_HERE) ;
              }
            }
            if (kBoolFalse == test_25) {
              const GALGAS_templateOptionAccessAST temp_30 = this ;
              TC_Array <FixItDescription> fixItArray31 ;
              inCompiler->emitSemanticError (temp_30.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option"), fixItArray31  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 739)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
      }
    }
  }
  if (kBoolFalse == test_9) {
    GALGAS_stringset var_s_30082 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
    cEnumerator_commandLineOptionMap enumerator_30109 (var_boolOptionMap_27833, EnumerationOrder::up) ;
    while (enumerator_30109.hasCurrentObject ()) {
      var_s_30082.addAssign_operation (enumerator_30109.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 744)) ;
      enumerator_30109.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_30177 (var_uintOptionMap_27878, EnumerationOrder::up) ;
    while (enumerator_30177.hasCurrentObject ()) {
      var_s_30082.addAssign_operation (enumerator_30177.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 747)) ;
      enumerator_30177.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_30245 (var_stringOptionMap_27923, EnumerationOrder::up) ;
    while (enumerator_30245.hasCurrentObject ()) {
      var_s_30082.addAssign_operation (enumerator_30245.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 750)) ;
      enumerator_30245.gotoNextObject () ;
    }
    const GALGAS_templateOptionAccessAST temp_32 = this ;
    const GALGAS_templateOptionAccessAST temp_33 = this ;
    const GALGAS_templateOptionAccessAST temp_34 = this ;
    TC_Array <FixItDescription> fixItArray35 ;
    appendFixItActions (fixItArray35, kFixItReplace, var_s_30082) ;
    inCompiler->emitSemanticError (temp_32.readProperty_mOptionName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_33.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 753)).add_operation (GALGAS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 753)).add_operation (temp_34.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 753)).add_operation (GALGAS_string ("' option"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 753)), fixItArray35  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 752)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateFunctionCallAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateFunctionCallAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateFunctionCallAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_31022 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 770)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_31022 COMMA_SOURCE_FILE ("templateAnalysis.galgas", 771)) ;
  }
  GALGAS_functionSignature var_functionSignature_31323 ;
  GALGAS_unifiedTypeMapEntry var_resultType_31371 ;
  GALGAS_bool var_isInternal_31397 ;
  const GALGAS_templateFunctionCallAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().method_searchKey (temp_1.readProperty_mFunctionName (), var_functionSignature_31323, var_resultType_31371, var_isInternal_31397, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 773)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_31397.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateFunctionCallAST temp_3 = this ;
      GALGAS_location var_procDeclarationLocation_31461 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().getter_locationForKey (temp_3.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 781)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_templateFunctionCallAST temp_5 = this ;
        test_4 = GALGAS_bool (ComparisonKind::notEqual, temp_5.readProperty_mFunctionName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 782)).objectCompare (var_procDeclarationLocation_31461.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 782)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_templateFunctionCallAST temp_6 = this ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_31461.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 783)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 783)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 783)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 783)) ;
        }
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_templateFunctionCallAST temp_9 = this ;
    test_8 = GALGAS_bool (ComparisonKind::notEqual, var_functionSignature_31323.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 787)).objectCompare (temp_9.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 787)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_templateFunctionCallAST temp_10 = this ;
      const GALGAS_templateFunctionCallAST temp_11 = this ;
      const GALGAS_templateFunctionCallAST temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_11.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 789)).add_operation (GALGAS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 789)).add_operation (var_functionSignature_31323.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 789)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 789)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 789)).add_operation (GALGAS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 789)).add_operation (temp_12.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 790)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 790)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 790)).add_operation (GALGAS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 790)), fixItArray13  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 788)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_8) {
    GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_32184 = GALGAS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    const GALGAS_templateFunctionCallAST temp_14 = this ;
    cEnumerator_functionSignature enumerator_32308 (var_functionSignature_31323, EnumerationOrder::up) ;
    cEnumerator_templateExpressionListAST enumerator_32362 (temp_14.readProperty_mExpressionList (), EnumerationOrder::up) ;
    while (enumerator_32308.hasCurrentObject () && enumerator_32362.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression_32620 ;
      callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_32362.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_32620, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 796)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_32308.current_mFormalArgumentType (HERE), var_expression_32620.readProperty_mResultType (), enumerator_32362.current_mEndOfExpressionLocation (HERE), var_expression_32620, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 803)) ;
      }
      var_semanticExpressionListForGeneration_32184.addAssign_operation (var_expression_32620  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 804)) ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (ComparisonKind::notEqual, enumerator_32308.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_32362.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          GALGAS_string temp_16 ;
          const enumGalgasBool test_17 = GALGAS_bool (ComparisonKind::notEqual, enumerator_32308.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_17) {
            temp_16 = enumerator_32308.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 806)) ;
          }else if (kBoolFalse == test_17) {
            temp_16 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_32913 = GALGAS_string ("!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 806)) ;
          TC_Array <FixItDescription> fixItArray18 ;
          appendFixItActions (fixItArray18, kFixItReplace, var_s_32913) ;
          inCompiler->emitSemanticError (enumerator_32362.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_32913, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 807)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 807)), fixItArray18  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 807)) ;
        }
      }
      enumerator_32308.gotoNextObject () ;
      enumerator_32362.gotoNextObject () ;
    }
    const GALGAS_templateFunctionCallAST temp_19 = this ;
    const GALGAS_templateFunctionCallAST temp_20 = this ;
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::init_21__21__21__21_ (var_resultType_31371, temp_19.readProperty_mFunctionName ().readProperty_location (), temp_20.readProperty_mFunctionName ().readProperty_string (), var_semanticExpressionListForGeneration_32184, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateExtensionTemplateCallAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateExtensionTemplateCallAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                               GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                               const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                               GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateExtensionTemplateCallAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mTemplateName ().readProperty_location (), GALGAS_string ("INTERNAL ERROR: @templateExtensionTemplateCallAST templateExpressionAnalysis not implemented yet"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 830)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateVarInExpressionAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateVarInExpressionAST::method_templateExpressionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                         GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_type_34793 ;
  GALGAS_string var_sourceVariableCppName_34803 ;
  const GALGAS_templateVarInExpressionAST temp_0 = this ;
  constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap ().method_searchKey (temp_0.readProperty_mVarName (), var_type_34793, var_sourceVariableCppName_34803, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 846)) ;
  const GALGAS_templateVarInExpressionAST temp_1 = this ;
  outArgument_outExpression = GALGAS_varInExpressionForGeneration::init_21__21__21__21_ (var_type_34793, temp_1.readProperty_mVarName ().readProperty_location (), var_sourceVariableCppName_34803, var_sourceVariableCppName_34803, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateAddOperationAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateAddOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_35728 ;
  const GALGAS_templateAddOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_35728, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 866)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_35969 ;
  const GALGAS_templateAddOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_35969, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 874)) ;
  {
  const GALGAS_templateAddOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_35728.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 883)).readProperty_features ().getter_infixAddOperator (SOURCE_FILE ("templateAnalysis.galgas", 883)), GALGAS_string ("+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_35728, var_rightExpression_35969, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 882)) ;
  }
  const GALGAS_templateAddOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_35728.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_35728, GALGAS_binaryOperator::class_func_add (SOURCE_FILE ("templateAnalysis.galgas", 894)), var_rightExpression_35969, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateSubOperationAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateSubOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_37189 ;
  const GALGAS_templateSubOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_37189, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 911)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_37430 ;
  const GALGAS_templateSubOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_37430, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 919)) ;
  {
  const GALGAS_templateSubOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_37189.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 928)).readProperty_features ().getter_infixSubOperator (SOURCE_FILE ("templateAnalysis.galgas", 928)), GALGAS_string ("-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_37189, var_rightExpression_37430, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 927)) ;
  }
  const GALGAS_templateSubOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_37189.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_37189, GALGAS_binaryOperator::class_func_sub (SOURCE_FILE ("templateAnalysis.galgas", 939)), var_rightExpression_37430, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateMultiplyOperationAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateMultiplyOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_38659 ;
  const GALGAS_templateMultiplyOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_38659, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 956)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_38900 ;
  const GALGAS_templateMultiplyOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_38900, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 964)) ;
  {
  const GALGAS_templateMultiplyOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_38659.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 973)).readProperty_features ().getter_infixMulOperator (SOURCE_FILE ("templateAnalysis.galgas", 973)), GALGAS_string ("*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_38659, var_rightExpression_38900, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 972)) ;
  }
  const GALGAS_templateMultiplyOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_38659.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_38659, GALGAS_binaryOperator::class_func_multiply_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 984)), var_rightExpression_38900, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateDivideOperationAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateDivideOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_40130 ;
  const GALGAS_templateDivideOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_40130, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1001)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_40371 ;
  const GALGAS_templateDivideOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_40371, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1009)) ;
  {
  const GALGAS_templateDivideOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_40130.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1018)).readProperty_features ().getter_infixDivOperator (SOURCE_FILE ("templateAnalysis.galgas", 1018)), GALGAS_string ("/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_40130, var_rightExpression_40371, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1017)) ;
  }
  const GALGAS_templateDivideOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_40130.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_40130, GALGAS_binaryOperator::class_func_divide_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 1029)), var_rightExpression_40371, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateModuloOperationAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateModuloOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_41595 ;
  const GALGAS_templateModuloOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_41595, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1046)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_41836 ;
  const GALGAS_templateModuloOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_41836, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1054)) ;
  {
  const GALGAS_templateModuloOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_41595.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1063)).readProperty_features ().getter_infixModOperator (SOURCE_FILE ("templateAnalysis.galgas", 1063)), GALGAS_string ("mod"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_41595, var_rightExpression_41836, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1062)) ;
  }
  const GALGAS_templateModuloOperationAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_41595.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_41595, GALGAS_binaryOperator::class_func_modulo_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 1074)), var_rightExpression_41836, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateUnaryMinusOperationAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateUnaryMinusOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_43026 ;
  const GALGAS_templateUnaryMinusOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_43026, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1091)) ;
  GALGAS_unifiedTypeMapEntry var_type_43101 = var_expression_43026.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_43101, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1100)).readProperty_features ().getter_prefixMinusOperator (SOURCE_FILE ("templateAnalysis.galgas", 1100)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1100)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateUnaryMinusOperationAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_43101, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1102)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1102)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1102)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1101)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_templateUnaryMinusOperationAST temp_4 = this ;
    outArgument_outExpression = GALGAS_unaryMinusExpressionForGeneration::init_21__21__21_ (var_type_43101, temp_4.readProperty_mOperatorLocation (), var_expression_43026, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structFieldAccessTemplateExpressionAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structFieldAccessTemplateExpressionAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_44309 ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_44309, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1125)) ;
  GALGAS_unifiedTypeMapEntry var_type_44388 = var_expression_44309.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_bool test_2 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_type_44388, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1134)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_structType (SOURCE_FILE ("templateAnalysis.galgas", 1134)))) ;
    if (kBoolTrue == test_2.boolEnum ()) {
      test_2 = extensionGetter_definition (var_type_44388, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1134)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 1134)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1134)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_structFieldAccessTemplateExpressionAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mStructFieldName ().readProperty_location (), GALGAS_string ("the '.' operator requires the receiver to be a struct ou a class"), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1135)) ;
    }
  }
  GALGAS_propertyMap var_propertyMap_44631 = extensionGetter_definition (var_type_44388, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1137)).readProperty_propertyMap () ;
  GALGAS_AccessControl var_accessControl_44728 ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_5 = this ;
  GALGAS_bool joker_44742 ; // Joker input parameter
  var_propertyMap_44631.method_searchKey (temp_5.readProperty_mStructFieldName (), var_accessControl_44728, joker_44742, var_type_44388, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1138)) ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_6 = this ;
  extensionMethod_checkSetAccess (var_accessControl_44728, GALGAS_selfAvailability::class_func_none (SOURCE_FILE ("templateAnalysis.galgas", 1139)), temp_6.readProperty_mStructFieldName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1139)) ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_7 = this ;
  const GALGAS_structFieldAccessTemplateExpressionAST temp_8 = this ;
  outArgument_outExpression = GALGAS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_type_44388, temp_7.readProperty_mOperatorLocation (), var_expression_44309, temp_8.readProperty_mStructFieldName ().readProperty_string (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateEqualTestAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateEqualTestAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_45862 ;
  const GALGAS_templateEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_45862, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1164)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_46107 ;
  const GALGAS_templateEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_46107, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1172)) ;
  {
  const GALGAS_templateEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_45862.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1181)).readProperty_features ().getter_equatable (SOURCE_FILE ("templateAnalysis.galgas", 1181)).operator_or (extensionGetter_definition (var_leftExpression_45862.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1181)).readProperty_features ().getter_comparable (SOURCE_FILE ("templateAnalysis.galgas", 1181)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1181)), GALGAS_string ("=="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_45862, var_rightExpression_46107, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1180)) ;
  }
  const GALGAS_templateEqualTestAST temp_3 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_45862, GALGAS_comparison::class_func_equal (SOURCE_FILE ("templateAnalysis.galgas", 1192)), var_rightExpression_46107, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateNonEqualTestAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateNonEqualTestAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_47253 ;
  const GALGAS_templateNonEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_47253, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1207)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_47498 ;
  const GALGAS_templateNonEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_47498, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1215)) ;
  {
  const GALGAS_templateNonEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_47253.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1224)).readProperty_features ().getter_equatable (SOURCE_FILE ("templateAnalysis.galgas", 1224)).operator_or (extensionGetter_definition (var_leftExpression_47253.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1224)).readProperty_features ().getter_comparable (SOURCE_FILE ("templateAnalysis.galgas", 1224)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1224)), GALGAS_string ("!="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_47253, var_rightExpression_47498, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1223)) ;
  }
  const GALGAS_templateNonEqualTestAST temp_3 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_47253, GALGAS_comparison::class_func_notEqual (SOURCE_FILE ("templateAnalysis.galgas", 1235)), var_rightExpression_47498, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateStrictInfTestAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateStrictInfTestAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_48648 ;
  const GALGAS_templateStrictInfTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_48648, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1250)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_48893 ;
  const GALGAS_templateStrictInfTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_48893, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1258)) ;
  {
  const GALGAS_templateStrictInfTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_48648.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1267)).readProperty_features ().getter_comparable (SOURCE_FILE ("templateAnalysis.galgas", 1267)), GALGAS_string ("<"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_48648, var_rightExpression_48893, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1266)) ;
  }
  const GALGAS_templateStrictInfTestAST temp_3 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_48648, GALGAS_comparison::class_func_lowerThan (SOURCE_FILE ("templateAnalysis.galgas", 1278)), var_rightExpression_48893, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInfOrEqualTestAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInfOrEqualTestAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_49981 ;
  const GALGAS_templateInfOrEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_49981, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1293)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_50226 ;
  const GALGAS_templateInfOrEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_50226, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1301)) ;
  {
  const GALGAS_templateInfOrEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_49981.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1310)).readProperty_features ().getter_comparable (SOURCE_FILE ("templateAnalysis.galgas", 1310)), GALGAS_string ("<="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_49981, var_rightExpression_50226, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1309)) ;
  }
  const GALGAS_templateInfOrEqualTestAST temp_3 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_49981, GALGAS_comparison::class_func_lowerOrEqual (SOURCE_FILE ("templateAnalysis.galgas", 1321)), var_rightExpression_50226, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateStrictSupTestAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateStrictSupTestAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_51317 ;
  const GALGAS_templateStrictSupTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_51317, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1336)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_51562 ;
  const GALGAS_templateStrictSupTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_51562, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1344)) ;
  {
  const GALGAS_templateStrictSupTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_51317.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1353)).readProperty_features ().getter_comparable (SOURCE_FILE ("templateAnalysis.galgas", 1353)), GALGAS_string (">"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_51317, var_rightExpression_51562, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1352)) ;
  }
  const GALGAS_templateStrictSupTestAST temp_3 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_51317, GALGAS_comparison::class_func_greaterThan (SOURCE_FILE ("templateAnalysis.galgas", 1364)), var_rightExpression_51562, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateSupOrEqualTestAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateSupOrEqualTestAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_52652 ;
  const GALGAS_templateSupOrEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_52652, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1379)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_52897 ;
  const GALGAS_templateSupOrEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_52897, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1387)) ;
  {
  const GALGAS_templateSupOrEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_52652.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1396)).readProperty_features ().getter_comparable (SOURCE_FILE ("templateAnalysis.galgas", 1396)), GALGAS_string (">="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_52652, var_rightExpression_52897, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1395)) ;
  }
  const GALGAS_templateSupOrEqualTestAST temp_3 = this ;
  outArgument_outExpression = GALGAS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_52652, GALGAS_comparison::class_func_greaterOrEqual (SOURCE_FILE ("templateAnalysis.galgas", 1407)), var_rightExpression_52897, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLeftShiftOperationAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateLeftShiftOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_53995 ;
  const GALGAS_templateLeftShiftOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_53995, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1422)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_54240 ;
  const GALGAS_templateLeftShiftOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_54240, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1430)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_54321 = var_leftExpression_53995.readProperty_mResultType () ;
  GALGAS_unifiedTypeMapEntry var_rightType_54386 = var_rightExpression_54240.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_leftType_54321, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1440)).readProperty_features ().getter_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas", 1440)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1440)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateLeftShiftOperationAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_54321, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1442)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1442)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1442)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1441)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_rightType_54386, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1444)).readProperty_typeName ().readProperty_string ().objectCompare (GALGAS_string ("uint"))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateLeftShiftOperationAST temp_6 = this ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (extensionGetter_definition (var_rightType_54386, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1446)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1446)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1446)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1445)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateLeftShiftOperationAST temp_8 = this ;
      outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_54321, temp_8.readProperty_mOperatorLocation (), var_leftExpression_53995, GALGAS_binaryOperator::class_func_leftShift (SOURCE_FILE ("templateAnalysis.galgas", 1454)), var_rightExpression_54240, inCompiler COMMA_HERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateRightShiftOperationAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateRightShiftOperationAST::method_templateExpressionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_55740 ;
  const GALGAS_templateRightShiftOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_55740, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1470)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_55985 ;
  const GALGAS_templateRightShiftOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_55985, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1478)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_56066 = var_leftExpression_55740.readProperty_mResultType () ;
  GALGAS_unifiedTypeMapEntry var_rightType_56131 = var_rightExpression_55985.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_leftType_56066, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1488)).readProperty_features ().getter_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas", 1488)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1488)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_templateRightShiftOperationAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_56066, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1490)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1490)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1490)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1489)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_rightType_56131, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1492)).readProperty_typeName ().readProperty_string ().objectCompare (GALGAS_string ("uint"))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_templateRightShiftOperationAST temp_6 = this ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (extensionGetter_definition (var_rightType_56131, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1494)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1494)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1494)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1493)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_templateRightShiftOperationAST temp_8 = this ;
      outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_56066, temp_8.readProperty_mOperatorLocation (), var_leftExpression_55740, GALGAS_binaryOperator::class_func_rightShift (SOURCE_FILE ("templateAnalysis.galgas", 1502)), var_rightExpression_55985, inCompiler COMMA_HERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'templateInstructionListAnalysis?&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      const GALGAS_templateInstructionListAST constinArgument_inInstructionList,
                                                                      GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_templateInstructionListAST enumerator_57827 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_57827.hasCurrentObject ()) {
    callExtensionMethod_templateInstructionAnalysis ((cPtr_templateInstructionAST *) enumerator_57827.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1532)) ;
    enumerator_57827.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionStringAST templateInstructionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionStringAST::method_templateInstructionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                            GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                            const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                            GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                            GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateInstructionStringAST temp_0 = this ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionStringForGeneration::init_21_ (temp_0.readProperty_mTemplateString (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1551)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionExpressionAST templateInstructionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionExpressionAST::method_templateInstructionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_59157 ;
  const GALGAS_templateInstructionExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_59157, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1563)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_59157.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1570)).readProperty_typeName ().readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateInstructionExpressionAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLocation (), GALGAS_string ("expression type should be '@string' (it is '@").add_operation (extensionGetter_definition (var_expression_59157.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1571)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1571)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1571)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1571)) ;
    }
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionExpressionForGeneration::init_21_ (var_expression_59157, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1573)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateBlockInstructionAST templateInstructionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionAST::method_templateInstructionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_60035 ;
  const GALGAS_templateBlockInstructionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_60035, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1585)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_expression_60035.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1592)).readProperty_typeName ().readProperty_string ().objectCompare (GALGAS_string ("bigint"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_getterCallExpressionForGeneration var_conversionExpression_60132 = GALGAS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_expression_60035.readProperty_mResultType (), var_expression_60035.readProperty_mLocation (), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas", 1596)), var_expression_60035, GALGAS_stringlist::init (inCompiler COMMA_HERE), GALGAS_string ("uint"), GALGAS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE), GALGAS_bool (true), inCompiler COMMA_HERE) ;
      var_expression_60035 = var_conversionExpression_60132 ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_60035.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1604)).readProperty_typeName ().readProperty_string ().objectCompare (GALGAS_string ("uint"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_templateBlockInstructionAST temp_3 = this ;
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mLocation (), GALGAS_string ("expression type should be '@uint' (it is '@").add_operation (extensionGetter_definition (var_expression_60035.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1605)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1605)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1605)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1605)) ;
      }
    }
  }
  GALGAS_templateInstructionListForGeneration var_blockInstructionList_60601 = GALGAS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_templateBlockInstructionAST temp_5 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_5.readProperty_mBlockInstructionList (), var_blockInstructionList_60601, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1608)) ;
  }
  const GALGAS_templateBlockInstructionAST temp_6 = this ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateBlockInstructionForGeneration::init_21__21__21_ (var_expression_60035, temp_6.readProperty_mLocation (), var_blockInstructionList_60601, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1616)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionGetColumnLocationAST templateInstructionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGetColumnLocationAST::method_templateInstructionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                       GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                       const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                       GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                       GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionGetColumnLocationForGeneration::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1628)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionGotoColumnLocationAST templateInstructionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGotoColumnLocationAST::method_templateInstructionAnalysis (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                        GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                        const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                        GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionGotoColumnLocationForGeneration::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1640)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionIfAST templateInstructionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionIfAST::method_templateInstructionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionIfBranchListForGeneration var_templateInstructionIfBranchList_62452 = GALGAS_templateInstructionIfBranchListForGeneration::init (inCompiler COMMA_HERE) ;
  const GALGAS_templateInstructionIfAST temp_0 = this ;
  cEnumerator_templateInstructionIfBranchListAST enumerator_62554 (temp_0.readProperty_mTemplateInstructionIfBranchList (), EnumerationOrder::up) ;
  while (enumerator_62554.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression_62780 ;
    callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_62554.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_62780, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1655)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_62780.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1662)).readProperty_typeName ().readProperty_string ().objectCompare (GALGAS_string ("bool"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_expression_62780.readProperty_mLocation (), GALGAS_string ("'if' expression type should be '@bool' (it is '@").add_operation (extensionGetter_definition (var_expression_62780.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1663)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1663)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1663)), fixItArray2  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1663)) ;
      }
    }
    GALGAS_templateInstructionListForGeneration var_instructionList_63034 = GALGAS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
    {
    routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, enumerator_62554.current_mInstructionList (HERE), var_instructionList_63034, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1666)) ;
    }
    var_templateInstructionIfBranchList_62452.addAssign_operation (var_expression_62780, var_instructionList_63034  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1674)) ;
    enumerator_62554.gotoNextObject () ;
  }
  GALGAS_templateInstructionListForGeneration var_elseInstructionList_63379 = GALGAS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_templateInstructionIfAST temp_3 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mElseInstructionList (), var_elseInstructionList_63379, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1678)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionIfForGeneration::init_21__21_ (var_templateInstructionIfBranchList_62452, var_elseInstructionList_63379, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1687)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'templateCodeGenerationForListInstruction?&&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (const GALGAS_templateInstructionListForGeneration constinArgument_inInstructionList,
                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_templateInstructionListForGeneration enumerator_2230 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_2230.hasCurrentObject ()) {
    callExtensionMethod_templateCodeGeneration ((cPtr_templateInstructionForGeneration *) enumerator_2230.current_mInstruction (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 41)) ;
    enumerator_2230.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionStringForGeneration templateCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionStringForGeneration::method_templateCodeGeneration (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                 GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                 GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                 GALGAS_bool & /* ioArgument_ioUseColumnMarker */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateInstructionStringForGeneration temp_0 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result.appendString (").add_operation (temp_0.readProperty_mTemplateString ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("templateCodeGeneration.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 59)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 59)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 59)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionExpressionForGeneration templateCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionExpressionForGeneration::method_templateCodeGeneration (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     GALGAS_bool & /* ioArgument_ioUseColumnMarker */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_cppName_3466 ;
  const GALGAS_templateInstructionExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppName_3466, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 71)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result.appendString (").add_operation (var_cppName_3466, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 72)).add_operation (GALGAS_string (".stringValue ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 72)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 72)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateBlockInstructionForGeneration templateCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionForGeneration::method_templateCodeGeneration (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_indendationVarCppName_4052 ;
  const GALGAS_templateBlockInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_indendationVarCppName_4052, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 84)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_indendationVarCppName_4052, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 85)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 85)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 85)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  result.incIndentation (int32_t (").add_operation (var_indendationVarCppName_4052, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 86)).add_operation (GALGAS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 86)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 87)) ;
  {
  const GALGAS_templateBlockInstructionForGeneration temp_1 = this ;
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_1.readProperty_mBlockInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 88)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_indendationVarCppName_4052, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 96)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 96)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 96)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  result.incIndentation (- int32_t (").add_operation (var_indendationVarCppName_4052, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 97)).add_operation (GALGAS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 97)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 98)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionGetColumnLocationForGeneration templateCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGetColumnLocationForGeneration::method_templateCodeGeneration (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                            GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                            GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                            GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                            GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GALGAS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("columnMarker = result.currentColumn () ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 110)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionGotoColumnLocationForGeneration templateCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGotoColumnLocationForGeneration::method_templateCodeGeneration (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                             GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                             GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                             GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                             GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GALGAS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result.appendSpacesUntilColumn (columnMarker) ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 122)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionIfForGeneration templateCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionIfForGeneration::method_templateCodeGeneration (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateInstructionIfForGeneration temp_0 = this ;
  cEnumerator_templateInstructionIfBranchListForGeneration enumerator_6284 (temp_0.readProperty_mTemplateInstructionIfBranchList (), EnumerationOrder::up) ;
  while (enumerator_6284.hasCurrentObject ()) {
    GALGAS_string var_ifVarCppName_6527 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_6284.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifVarCppName_6527, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 135)) ;
    GALGAS_string var_testVar_6554 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("templateCodeGeneration.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 142)) ;
    ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 143)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar_6554, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 144)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 144)).add_operation (var_ifVarCppName_6527, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 144)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 144)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_testVar_6554, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case kBoolTrue : {\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 146)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 147)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_6284.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 148)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 156)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 157)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case kBoolFalse : {\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 158)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 159)) ;
    }
    enumerator_6284.gotoNextObject () ;
  }
  {
  const GALGAS_templateInstructionIfForGeneration temp_1 = this ;
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_1.readProperty_mElseInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 162)) ;
  }
  const GALGAS_templateInstructionIfForGeneration temp_2 = this ;
  cEnumerator_templateInstructionIfBranchListForGeneration enumerator_7519 (temp_2.readProperty_mTemplateInstructionIfBranchList (), EnumerationOrder::up) ;
  while (enumerator_7519.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 171)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  } break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 172)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("default :\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 173)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 174)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 175)) ;
    enumerator_7519.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionForeachAST templateInstructionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachAST::method_templateInstructionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_7471 ;
  const GALGAS_templateInstructionForeachAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_7471, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 215)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_7592 = extensionGetter_definition (var_expression_7471.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 223)).readProperty_enumerationDescriptorList () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::equal, var_enumerationDescriptor_7592.getter_count (SOURCE_FILE ("template-for-instruction.galgas", 224)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_expression_7471.readProperty_mLocation (), GALGAS_string ("expression of '@").add_operation (extensionGetter_definition (var_expression_7471.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 225)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 225)).add_operation (GALGAS_string ("' cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 225)), fixItArray2  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 225)) ;
    }
  }
  GALGAS_templateInstructionListForGeneration var_beforeInstructionList_7893 = GALGAS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_templateInstructionForeachAST temp_3 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mBeforeInstructionList (), var_beforeInstructionList_7893, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 229)) ;
  }
  const GALGAS_templateInstructionForeachAST temp_4 = this ;
  GALGAS_string var_enumeratorCppName_8187 = GALGAS_string ("enumerator_").add_operation (temp_4.readProperty_mIndexIdentifier ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 238)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 238)) ;
  GALGAS_templateVariableMap var_doVariableMap_8290 = constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap () ;
  const GALGAS_templateInstructionForeachAST temp_5 = this ;
  const GALGAS_templateInstructionForeachAST temp_6 = this ;
  GALGAS_string var_cppIndexVarName_8351 = GALGAS_string ("index_").add_operation (temp_5.readProperty_mIndexIdentifier ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 240)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 240)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 240)).add_operation (temp_6.readProperty_mIndexIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 241)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_templateInstructionForeachAST temp_8 = this ;
    test_7 = GALGAS_bool (ComparisonKind::notEqual, temp_8.readProperty_mIndexIdentifier ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      {
      const GALGAS_templateInstructionForeachAST temp_9 = this ;
      var_doVariableMap_8290.setter_insertKey (temp_9.readProperty_mIndexIdentifier (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), var_cppIndexVarName_8351, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 243)) ;
      }
    }
  }
  const GALGAS_templateInstructionForeachAST temp_10 = this ;
  switch (temp_10.readProperty_mEnumeratedObjectProperties ().enumValue ()) {
  case GALGAS_templateInstructionForEnumerationAST::Enumeration::invalid:
    break ;
  case GALGAS_templateInstructionForEnumerationAST::Enumeration::enum_implicit:
    {
      GALGAS_string extractedValue_8745_prefix_0 ;
      GALGAS_location extractedValue_8762_remplacementRange_1 ;
      temp_10.readProperty_mEnumeratedObjectProperties ().getAssociatedValuesFor_implicit (extractedValue_8745_prefix_0, extractedValue_8762_remplacementRange_1) ;
      GALGAS_string var_suggestion_8791 = GALGAS_string ("(") ;
      cEnumerator_enumerationDescriptorList enumerator_8832 (var_enumerationDescriptor_7592, EnumerationOrder::up) ;
      while (enumerator_8832.hasCurrentObject ()) {
        {
        var_doVariableMap_8290.setter_insertKey (GALGAS_lstring::init_21__21_ (extractedValue_8745_prefix_0.add_operation (enumerator_8832.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 251)), var_expression_7471.readProperty_mLocation (), inCompiler COMMA_HERE), enumerator_8832.current_mEnumeratedType (HERE), var_enumeratorCppName_8187.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 253)).add_operation (enumerator_8832.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 253)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 250)) ;
        }
        var_suggestion_8791.plusAssign_operation(extractedValue_8745_prefix_0.add_operation (enumerator_8832.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 255)) ;
        if (enumerator_8832.hasNextObject ()) {
          var_suggestion_8791.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 257)) ;
        }
        enumerator_8832.gotoNextObject () ;
      }
      var_suggestion_8791.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 259)) ;
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorAnomynousForInstructionEnumeratedObject.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <FixItDescription> fixItArray12 ;
          appendFixItActions (fixItArray12, kFixItReplace, var_suggestion_8791) ;
          inCompiler->emitSemanticError (extractedValue_8762_remplacementRange_1, GALGAS_string ("anonymous 'for' enumerated object (due to '--error-anonymous-for-instruction' option)"), fixItArray12  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 261)) ;
        }
      }
    }
    break ;
  case GALGAS_templateInstructionForEnumerationAST::Enumeration::enum_explicit:
    {
      GALGAS_lstringlist extractedValue_9512_enumeration_0 ;
      GALGAS_location extractedValue_9534_errorLocation_1 ;
      temp_10.readProperty_mEnumeratedObjectProperties ().getAssociatedValuesFor_explicit (extractedValue_9512_enumeration_0, extractedValue_9534_errorLocation_1) ;
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (ComparisonKind::notEqual, extractedValue_9512_enumeration_0.getter_count (SOURCE_FILE ("template-for-instruction.galgas", 266)).objectCompare (var_enumerationDescriptor_7592.getter_count (SOURCE_FILE ("template-for-instruction.galgas", 266)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (extractedValue_9534_errorLocation_1, var_enumerationDescriptor_7592.getter_count (SOURCE_FILE ("template-for-instruction.galgas", 268)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 268)).add_operation (GALGAS_string (" variables are required here ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 268)).add_operation (extractedValue_9512_enumeration_0.getter_count (SOURCE_FILE ("template-for-instruction.galgas", 269)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 268)).add_operation (GALGAS_string (" provided)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 269)), fixItArray14  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 267)) ;
        }
      }
      if (kBoolFalse == test_13) {
        cEnumerator_enumerationDescriptorList enumerator_9802 (var_enumerationDescriptor_7592, EnumerationOrder::up) ;
        cEnumerator_lstringlist enumerator_9856 (extractedValue_9512_enumeration_0, EnumerationOrder::up) ;
        while (enumerator_9802.hasCurrentObject () && enumerator_9856.hasCurrentObject ()) {
          enumGalgasBool test_15 = kBoolTrue ;
          if (kBoolTrue == test_15) {
            test_15 = GALGAS_bool (ComparisonKind::notEqual, enumerator_9856.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_15) {
              {
              var_doVariableMap_8290.setter_insertKey (enumerator_9856.current_mValue (HERE), enumerator_9802.current_mEnumeratedType (HERE), var_enumeratorCppName_8187.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 277)).add_operation (enumerator_9802.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 277)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 274)) ;
              }
            }
          }
          enumerator_9802.gotoNextObject () ;
          enumerator_9856.gotoNextObject () ;
        }
      }
    }
    break ;
  }
  GALGAS_templateAnalysisContext var_doAnalysisContext_10225 = GALGAS_templateAnalysisContext::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mSemanticContext (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes (), var_doVariableMap_8290, inCompiler COMMA_HERE) ;
  GALGAS_templateInstructionListForGeneration var_doInstructionList_10378 = GALGAS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_templateInstructionForeachAST temp_16 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_doAnalysisContext_10225, ioArgument_ioTypeMap, temp_16.readProperty_mDoInstructionList (), var_doInstructionList_10378, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 288)) ;
  }
  GALGAS_templateInstructionListForGeneration var_betweenInstructionList_10665 = GALGAS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_templateInstructionForeachAST temp_17 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_17.readProperty_mBetweenInstructionList (), var_betweenInstructionList_10665, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 298)) ;
  }
  GALGAS_templateInstructionListForGeneration var_afterInstructionList_10965 = GALGAS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_templateInstructionForeachAST temp_18 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_18.readProperty_mAfterInstructionList (), var_afterInstructionList_10965, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 308)) ;
  }
  const GALGAS_templateInstructionForeachAST temp_19 = this ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionForeachForGeneration::init_21__21__21__21__21__21__21__21_ (temp_19.readProperty_mIsAscending (), var_expression_7471, var_enumeratorCppName_8187, var_beforeInstructionList_7893, var_doInstructionList_10378, var_cppIndexVarName_8351, var_betweenInstructionList_10665, var_afterInstructionList_10965, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 317)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionForeachForGeneration templateCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachForGeneration::method_templateCodeGeneration (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_foreachVarCppName_12776 ;
  const GALGAS_templateInstructionForeachForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_foreachVarCppName_12776, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 353)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_templateInstructionForeachForGeneration temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::greaterThan, temp_2.readProperty_mIndexCppName ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 355)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateInstructionForeachForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_3.readProperty_mIndexCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 356)).add_operation (GALGAS_string (" (0) ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 356)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_foreachVarCppName_12776, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 359)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 359)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 360)) ;
  }
  const GALGAS_templateInstructionForeachForGeneration temp_4 = this ;
  const GALGAS_templateInstructionForeachForGeneration temp_5 = this ;
  const GALGAS_templateInstructionForeachForGeneration temp_6 = this ;
  GALGAS_string temp_7 ;
  const enumGalgasBool test_8 = temp_6.readProperty_mIsAscending ().boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = GALGAS_string ("EnumerationOrder::up") ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_string ("EnumerationOrder::down") ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cEnumerator_").add_operation (extensionGetter_identifierRepresentation (temp_4.readProperty_mExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 361)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 361)).add_operation (temp_5.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 361)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 361)).add_operation (var_foreachVarCppName_12776, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 361)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 361)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 361)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 362)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 361)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_templateInstructionForeachForGeneration temp_10 = this ;
    const GALGAS_templateInstructionForeachForGeneration temp_11 = this ;
    test_9 = GALGAS_bool (ComparisonKind::greaterThan, temp_10.readProperty_mBeforeInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 364)).add_operation (temp_11.readProperty_mAfterInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 364)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_templateInstructionForeachForGeneration temp_12 = this ;
      const GALGAS_templateInstructionForeachForGeneration temp_13 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool nonEmpty_").add_operation (temp_12.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 365)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 365)).add_operation (temp_13.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 365)).add_operation (GALGAS_string (".hasCurrentObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 365)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 365)) ;
    }
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    const GALGAS_templateInstructionForeachForGeneration temp_15 = this ;
    test_14 = GALGAS_bool (ComparisonKind::greaterThan, temp_15.readProperty_mBeforeInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 367)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_templateInstructionForeachForGeneration temp_16 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nonEmpty_").add_operation (temp_16.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 368)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 368)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 369)) ;
      }
      {
      const GALGAS_templateInstructionForeachForGeneration temp_17 = this ;
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_17.readProperty_mBeforeInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 370)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 378)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 379)) ;
    }
  }
  const GALGAS_templateInstructionForeachForGeneration temp_18 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (temp_18.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 381)).add_operation (GALGAS_string (".hasCurrentObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 381)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 381)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 382)) ;
  }
  {
  const GALGAS_templateInstructionForeachForGeneration temp_19 = this ;
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_19.readProperty_mDoInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 384)) ;
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    const GALGAS_templateInstructionForeachForGeneration temp_21 = this ;
    test_20 = GALGAS_bool (ComparisonKind::greaterThan, temp_21.readProperty_mBetweenInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 393)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_20) {
      const GALGAS_templateInstructionForeachForGeneration temp_22 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (temp_22.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 394)).add_operation (GALGAS_string (".hasNextObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 394)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 395)) ;
      }
      {
      const GALGAS_templateInstructionForeachForGeneration temp_23 = this ;
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_23.readProperty_mBetweenInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 396)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 404)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 405)) ;
    }
  }
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    const GALGAS_templateInstructionForeachForGeneration temp_25 = this ;
    test_24 = GALGAS_bool (ComparisonKind::greaterThan, temp_25.readProperty_mIndexCppName ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 408)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_24) {
      const GALGAS_templateInstructionForeachForGeneration temp_26 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(temp_26.readProperty_mIndexCppName ().add_operation (GALGAS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 409)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 409)) ;
    }
  }
  const GALGAS_templateInstructionForeachForGeneration temp_27 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_27.readProperty_mEnumeratorCppName ().add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 412)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 412)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 413)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 414)) ;
  enumGalgasBool test_28 = kBoolTrue ;
  if (kBoolTrue == test_28) {
    const GALGAS_templateInstructionForeachForGeneration temp_29 = this ;
    test_28 = GALGAS_bool (ComparisonKind::greaterThan, temp_29.readProperty_mAfterInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 416)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_28) {
      const GALGAS_templateInstructionForeachForGeneration temp_30 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nonEmpty_").add_operation (temp_30.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 417)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 417)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 417)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 418)) ;
      }
      {
      const GALGAS_templateInstructionForeachForGeneration temp_31 = this ;
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_31.readProperty_mAfterInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 419)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 427)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 428)) ;
    }
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 431)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 432)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionSwitchAST templateInstructionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionSwitchAST::method_templateInstructionAnalysis (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_switchExpression_5519 ;
  const GALGAS_templateInstructionSwitchAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_switchExpression_5519, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 139)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_typeKindEnum_2D_enumType var_enumType_5549 = extensionGetter_definition (var_switchExpression_5519.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 146)).readProperty_typeKind ().getter_enumType (SOURCE_FILE ("template-switch-instruction.galgas", 146)).unwrappedValue () ;
    if (!extensionGetter_definition (var_switchExpression_5519.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 146)).readProperty_typeKind ().getter_enumType (SOURCE_FILE ("template-switch-instruction.galgas", 146)).isValuated ()) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      GALGAS_stringset var_constantsNamedInSwitchInstruction_5646 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
      GALGAS_templateInstructionSwitchBranchListForGeneration var_templateInstructionSwitchBranchList_5767 = GALGAS_templateInstructionSwitchBranchListForGeneration::init (inCompiler COMMA_HERE) ;
      const GALGAS_templateInstructionSwitchAST temp_2 = this ;
      cEnumerator_templateInstructionSwitchBranchListAST enumerator_5876 (temp_2.readProperty_templateInstructionSwitchBranchList (), EnumerationOrder::up) ;
      while (enumerator_5876.hasCurrentObject ()) {
        GALGAS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration_5987 = GALGAS_extractedAssociatedValuesForGeneration::init (inCompiler COMMA_HERE) ;
        GALGAS_templateAnalysisContext var_analysisContext_6041 = constinArgument_inAnalysisContext ;
        cEnumerator__5B_lstring_5D_ enumerator_6103 (enumerator_5876.current_constantList (HERE), EnumerationOrder::up) ;
        while (enumerator_6103.hasCurrentObject ()) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_enumType_5549.readProperty_constantMap ().getter_hasKey (enumerator_6103.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 154)).boolEnum () ;
            if (kBoolTrue == test_3) {
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = var_constantsNamedInSwitchInstruction_5646.getter_hasKey (enumerator_6103.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 155)).boolEnum () ;
                if (kBoolTrue == test_4) {
                  TC_Array <FixItDescription> fixItArray5 ;
                  inCompiler->emitSemanticError (enumerator_6103.current (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_6103.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 157)).add_operation (GALGAS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 157)), fixItArray5  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 156)) ;
                }
              }
              var_constantsNamedInSwitchInstruction_5646.addAssign_operation (enumerator_6103.current (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 159)) ;
              GALGAS_associatedValueDescriptorList var_associatedTypeList_6572 ;
              GALGAS_uint joker_6533 ; // Joker input parameter
              var_enumType_5549.readProperty_constantMap ().method_searchKey (enumerator_6103.current (HERE), joker_6533, var_associatedTypeList_6572, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 160)) ;
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = GALGAS_bool (ComparisonKind::greaterThan, var_associatedTypeList_6572.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 161)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (ComparisonKind::equal, enumerator_5876.current_associatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 161)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 161)).boolEnum () ;
                if (kBoolTrue == test_6) {
                  TC_Array <FixItDescription> fixItArray7 ;
                  inCompiler->emitSemanticError (enumerator_6103.current (HERE).readProperty_location (), GALGAS_string ("the associated values of '").add_operation (enumerator_6103.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 163)).add_operation (GALGAS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 163)), fixItArray7  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 162)) ;
                }
              }
              if (kBoolFalse == test_6) {
                enumGalgasBool test_8 = kBoolTrue ;
                if (kBoolTrue == test_8) {
                  test_8 = GALGAS_bool (ComparisonKind::equal, var_associatedTypeList_6572.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 164)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (ComparisonKind::greaterThan, enumerator_5876.current_associatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 164)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 164)).boolEnum () ;
                  if (kBoolTrue == test_8) {
                    TC_Array <FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (enumerator_6103.current (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_6103.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 166)).add_operation (GALGAS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 166)), fixItArray9  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 165)) ;
                  }
                }
                if (kBoolFalse == test_8) {
                  enumGalgasBool test_10 = kBoolTrue ;
                  if (kBoolTrue == test_10) {
                    test_10 = GALGAS_bool (ComparisonKind::notEqual, var_associatedTypeList_6572.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 167)).objectCompare (enumerator_5876.current_associatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 167)))).boolEnum () ;
                    if (kBoolTrue == test_10) {
                      GALGAS_string temp_11 ;
                      const enumGalgasBool test_12 = GALGAS_bool (ComparisonKind::greaterThan, var_associatedTypeList_6572.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 170)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
                      if (kBoolTrue == test_12) {
                        temp_11 = GALGAS_string ("s") ;
                      }else if (kBoolFalse == test_12) {
                        temp_11 = GALGAS_string::makeEmptyString () ;
                      }
                      TC_Array <FixItDescription> fixItArray13 ;
                      inCompiler->emitSemanticError (enumerator_6103.current (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_6103.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)).add_operation (GALGAS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)).add_operation (var_associatedTypeList_6572.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 169)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)).add_operation (GALGAS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)), fixItArray13  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 168)) ;
                    }
                  }
                  if (kBoolFalse == test_10) {
                    cEnumerator_associatedValueDescriptorList enumerator_7370 (var_associatedTypeList_6572, EnumerationOrder::up) ;
                    cEnumerator_switchExtractedValuesListAST enumerator_7435 (enumerator_5876.current_associatedValuesExtraction (HERE), EnumerationOrder::up) ;
                    GALGAS_uint index_7352 (uint32_t (0)) ;
                    while (enumerator_7370.hasCurrentObject () && enumerator_7435.hasCurrentObject ()) {
                      enumGalgasBool test_14 = kBoolTrue ;
                      if (kBoolTrue == test_14) {
                        test_14 = GALGAS_bool (ComparisonKind::notEqual, enumerator_7435.current_mExtractedValueTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                        if (kBoolTrue == test_14) {
                          enumGalgasBool test_15 = kBoolTrue ;
                          if (kBoolTrue == test_15) {
                            test_15 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_7370.current (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 174)).readProperty_typeName ().readProperty_string ().objectCompare (enumerator_7435.current_mExtractedValueTypeName (HERE).readProperty_string ())).boolEnum () ;
                            if (kBoolTrue == test_15) {
                              TC_Array <FixItDescription> fixItArray16 ;
                              inCompiler->emitSemanticError (enumerator_7435.current_mExtractedValueTypeName (HERE).readProperty_location (), GALGAS_string ("the required type is '@").add_operation (extensionGetter_definition (enumerator_7370.current (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 175)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 175)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 175)), fixItArray16  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 175)) ;
                            }
                          }
                        }
                      }
                      GALGAS_string var_cppName_7843 = GALGAS_string ("extractedValue_").add_operation (enumerator_7435.current_mExtractedValueName (HERE).readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 178)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 178)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 178)).add_operation (enumerator_7435.current_mExtractedValueName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 179)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 179)).add_operation (index_7352.getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 179)) ;
                      var_extractedAssociatedValuesForGeneration_5987.addAssign_operation (enumerator_7370.current (HERE).readProperty_type (), var_cppName_7843, enumerator_7370.current (HERE).readProperty_name ()  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 180)) ;
                      enumGalgasBool test_17 = kBoolTrue ;
                      if (kBoolTrue == test_17) {
                        test_17 = GALGAS_bool (ComparisonKind::notEqual, enumerator_7435.current_mExtractedValueName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                        if (kBoolTrue == test_17) {
                          {
                          var_analysisContext_6041.mProperty_mTemplateVariableMap.setter_insertKey (enumerator_7435.current_mExtractedValueName (HERE), enumerator_7370.current (HERE).readProperty_type (), var_cppName_7843, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 185)) ;
                          }
                        }
                      }
                      enumerator_7370.gotoNextObject () ;
                      enumerator_7435.gotoNextObject () ;
                      index_7352.increment_operation (inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 172)) ;
                    }
                  }
                }
              }
            }
          }
          if (kBoolFalse == test_3) {
            TC_Array <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (enumerator_6103.current (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_6103.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 195)).add_operation (GALGAS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 195)).add_operation (extensionGetter_definition (var_switchExpression_5519.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 196)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 195)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 196)), fixItArray18  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 194)) ;
          }
          enumerator_6103.gotoNextObject () ;
        }
        GALGAS_templateInstructionListForGeneration var_instructionList_8679 = GALGAS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
        {
        routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_6041, ioArgument_ioTypeMap, enumerator_5876.current_instructionList (HERE), var_instructionList_8679, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 200)) ;
        }
        var_templateInstructionSwitchBranchList_5767.addAssign_operation (enumerator_5876.current_constantList (HERE), var_extractedAssociatedValuesForGeneration_5987, enumerator_5876.current_endOfBranch (HERE).getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 211)), var_instructionList_8679  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 208)) ;
        enumerator_5876.gotoNextObject () ;
      }
      GALGAS_stringset var_forgottenConstants_9158 = var_enumType_5549.readProperty_constantMap ().getter_keySet (SOURCE_FILE ("template-switch-instruction.galgas", 215)).substract_operation (var_constantsNamedInSwitchInstruction_5646, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 215)) ;
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = GALGAS_bool (ComparisonKind::greaterThan, var_forgottenConstants_9158.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 216)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_19) {
          GALGAS_string var_s_9306 = GALGAS_string::makeEmptyString () ;
          cEnumerator_stringset enumerator_9324 (var_forgottenConstants_9158, EnumerationOrder::up) ;
          while (enumerator_9324.hasCurrentObject ()) {
            var_s_9306.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_9324.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 219)) ;
            enumerator_9324.gotoNextObject () ;
          }
          const GALGAS_templateInstructionSwitchAST temp_20 = this ;
          TC_Array <FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (temp_20.readProperty_switchExpressionEndLocation (), GALGAS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_9306, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 222)), fixItArray21  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 221)) ;
        }
      }
      ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionSwitchForGeneration::init_21__21__21_ (var_switchExpression_5519.readProperty_mResultType (), var_switchExpression_5519, var_templateInstructionSwitchBranchList_5767, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 225)) ;
    }
  }
  if (kBoolFalse == test_1) {
    TC_Array <FixItDescription> fixItArray22 ;
    inCompiler->emitSemanticError (var_switchExpression_5519.readProperty_mLocation (), GALGAS_string ("'switch' expression type should be an enumeration (it is a ").add_operation (extensionGetter_string (extensionGetter_definition (var_switchExpression_5519.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 232)).readProperty_typeKind (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 231)).add_operation (GALGAS_string (" type)"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 232)), fixItArray22  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 231)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateInstructionSwitchForGeneration templateCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionSwitchForGeneration::method_templateCodeGeneration (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_switchVarCppName_11400 ;
  const GALGAS_templateInstructionSwitchForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_switchExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVarCppName_11400, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 265)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_switchVarCppName_11400, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 273)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 273)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 274)) ;
  const GALGAS_templateInstructionSwitchForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_identifierRepresentation (temp_1.readProperty_switchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 275)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 275)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("::Enumeration::invalid :\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 276)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 277)) ;
  const GALGAS_templateInstructionSwitchForGeneration temp_2 = this ;
  cEnumerator_templateInstructionSwitchBranchListForGeneration enumerator_11729 (temp_2.readProperty_templateInstructionSwitchBranchList (), EnumerationOrder::up) ;
  while (enumerator_11729.hasCurrentObject ()) {
    cEnumerator__5B_lstring_5D_ enumerator_11799 (enumerator_11729.current (HERE).readProperty_mConstantList (), EnumerationOrder::up) ;
    while (enumerator_11799.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 281)) ;
      const GALGAS_templateInstructionSwitchForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_identifierRepresentation (temp_3.readProperty_switchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 282)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("::Enumeration::enum_"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 283)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_11799.current (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-switch-instruction.galgas", 284)).add_operation (GALGAS_string (" :\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 284)) ;
      enumerator_11799.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 286)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 287)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_11729.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ().getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 288)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        cEnumerator_extractedAssociatedValuesForGeneration enumerator_12257 (enumerator_11729.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration (), EnumerationOrder::up) ;
        while (enumerator_12257.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_12257.current (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 290)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 290)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_12257.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 291)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 291)) ;
          enumerator_12257.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_switchVarCppName_11400, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 293)).add_operation (GALGAS_string (".getAssociatedValuesFor_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 293)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 293)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_11729.current (HERE).readProperty_mConstantList ().readSubscript__3F_ (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-switch-instruction.galgas", 294)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 294)) ;
        cEnumerator_extractedAssociatedValuesForGeneration enumerator_12666 (enumerator_11729.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration (), EnumerationOrder::up) ;
        while (enumerator_12666.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_12666.current (HERE).readProperty_mCppName (), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 296)) ;
          if (enumerator_12666.hasNextObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 297)) ;
          }
          enumerator_12666.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 299)) ;
      }
    }
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_11729.current (HERE).readProperty_mInstructionList ().getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 301)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 302)) ;
        }
        {
        routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_11729.current (HERE).readProperty_mInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 303)) ;
        }
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 311)) ;
        }
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 313)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 314)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 315)) ;
    }
    enumerator_11729.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 318)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexiqueComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexiqueComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexiqueComponentAST temp_0 = this ;
  result_result = GALGAS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 810)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueComponentAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueComponentAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                               GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                               GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                               GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                               GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                               GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueComponentAST temp_0 = this ;
  const GALGAS_lexiqueComponentAST temp_1 = this ;
  GALGAS_lstring var_key_29543 = GALGAS_lstring::init_21__21_ (GALGAS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 822)), temp_1.readProperty_mLexiqueComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_lexiqueComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_29543, temp_2, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 823)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueComponentAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueComponentAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                         const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                         const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                         const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeMap var_lexicalTypeMap_30407 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 836)) ;
  GALGAS_lexicalAttributeMap var_lexicalAttributeMap_30474 = GALGAS_lexicalAttributeMap::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_lexiqueComponentAST temp_0 = this ;
  routine_buildLexicalAttributeMap_3F__3F__26_ (var_lexicalTypeMap_30407, temp_0.readProperty_mLexicalAttributeListAST (), var_lexicalAttributeMap_30474, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 838)) ;
  }
  GALGAS_terminalMap var_terminalMap_30670 = GALGAS_terminalMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_lexiqueComponentAST temp_1 = this ;
  cEnumerator_terminalDeclarationListAST enumerator_30718 (temp_1.readProperty_mTerminalDeclarationListAST (), EnumerationOrder::up) ;
  while (enumerator_30718.hasCurrentObject ()) {
    GALGAS_lexicalSentValueList var_argumentTypeList_30768 = GALGAS_lexicalSentValueList::init (inCompiler COMMA_HERE) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_30837 (enumerator_30718.current_mSentAttributeList (HERE), EnumerationOrder::up) ;
    while (enumerator_30837.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_30935 ;
      var_lexicalAttributeMap_30474.method_searchKey (enumerator_30837.current_mAttributeName (HERE), var_attributeLexicalType_30935, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 848)) ;
      var_argumentTypeList_30768.addAssign_operation (enumerator_30837.current_mFormalSelector (HERE), enumerator_30837.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_30935  COMMA_SOURCE_FILE ("lexique-component.galgas", 849)) ;
      enumerator_30837.gotoNextObject () ;
    }
    {
    var_terminalMap_30670.setter_insertKey (enumerator_30718.current_mName (HERE), var_argumentTypeList_30768, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 851)) ;
    }
    enumerator_30718.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_2 = this ;
  cEnumerator_lexicalListDeclarationListAST enumerator_31150 (temp_2.readProperty_mLexicalListDeclarationListAST (), EnumerationOrder::up) ;
  while (enumerator_31150.hasCurrentObject ()) {
    GALGAS_lexicalSentValueList var_argumentTypeList_31212 = GALGAS_lexicalSentValueList::init (inCompiler COMMA_HERE) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_31281 (enumerator_31150.current_mSentAttributeList (HERE), EnumerationOrder::up) ;
    while (enumerator_31281.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_31380 ;
      var_lexicalAttributeMap_30474.method_searchKey (enumerator_31281.current_mAttributeName (HERE), var_attributeLexicalType_31380, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 857)) ;
      var_argumentTypeList_31212.addAssign_operation (enumerator_31281.current_mFormalSelector (HERE), enumerator_31281.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_31380  COMMA_SOURCE_FILE ("lexique-component.galgas", 858)) ;
      enumerator_31281.gotoNextObject () ;
    }
    cEnumerator_lexicalListEntryListAST enumerator_31528 (enumerator_31150.current_mEntryList (HERE), EnumerationOrder::up) ;
    while (enumerator_31528.hasCurrentObject ()) {
      {
      var_terminalMap_30670.setter_insertKey (enumerator_31528.current_mTerminalSpelling (HERE), var_argumentTypeList_31212, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 861)) ;
      }
      enumerator_31528.gotoNextObject () ;
    }
    enumerator_31150.gotoNextObject () ;
  }
  {
  const GALGAS_lexiqueComponentAST temp_3 = this ;
  const GALGAS_lexiqueComponentAST temp_4 = this ;
  const GALGAS_lexiqueComponentAST temp_5 = this ;
  const GALGAS_lexiqueComponentAST temp_6 = this ;
  const GALGAS_lexiqueComponentAST temp_7 = this ;
  const GALGAS_lexiqueComponentAST temp_8 = this ;
  const GALGAS_lexiqueComponentAST temp_9 = this ;
  ioArgument_ioSemanticContext.mProperty_mLexiqueComponentMapForSemanticAnalysis.setter_insertKey (temp_3.readProperty_mLexiqueComponentName (), temp_4.readProperty_mIsTemplate (), var_terminalMap_30670, temp_5.readProperty_mIndexingListAST (), temp_6.readProperty_mTerminalDeclarationListAST (), temp_7.readProperty_mLexicalAttributeListAST (), temp_8.readProperty_mLexicalStyleListAST (), temp_9.readProperty_mLexicalListDeclarationListAST (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 865)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueComponentAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueComponentAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                        const GALGAS_string /* constinArgument_inProductDirectory */,
                                                        const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                        const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                        GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueComponentAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_32761 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 888)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_32761, var_nameForUsefulness_32761, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 889)) ;
  }
  GALGAS_lexicalTypeMap var_lexicalTypeMap_33014 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 891)) ;
  GALGAS_lexicalRoutineMap var_lexicalRoutineMap_33152 ;
  {
  routine_buildLexicalRoutineMap_21_ (var_lexicalRoutineMap_33152, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 893)) ;
  }
  GALGAS_lexicalFunctionMap var_lexicalFunctionMap_33271 ;
  {
  routine_buildLexicalFunctionMap_21_ (var_lexicalFunctionMap_33271, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 895)) ;
  }
  GALGAS_stringset var_unicodeTestFunctions_33398 ;
  {
  routine_lexicalUnicodeTestFunctionAnalysis_21_ (var_unicodeTestFunctions_33398, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 897)) ;
  }
  const GALGAS_lexiqueComponentAST temp_1 = this ;
  GALGAS_lexiqueAnalysisContext var_lexiqueAnalysisContext_33491 = GALGAS_lexiqueAnalysisContext::init_21__21__21__21__21__21__21__21__21__21__21__21_ (temp_1.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexicalRoutineMap_33152, var_lexicalFunctionMap_33271, GALGAS_lexicalMessageMap::init (inCompiler COMMA_HERE), GALGAS_terminalMap::init (inCompiler COMMA_HERE), GALGAS_terminalList::init (inCompiler COMMA_HERE), GALGAS_lexicalAttributeMap::init (inCompiler COMMA_HERE), GALGAS_lexicalExplicitTokenListMapMap::init (inCompiler COMMA_HERE), GALGAS_stringset::init (inCompiler COMMA_HERE), GALGAS_templateDelimitorList::init (inCompiler COMMA_HERE), GALGAS_styleMap::init (inCompiler COMMA_HERE), var_unicodeTestFunctions_33398, inCompiler COMMA_HERE) ;
  GALGAS_bigint var_styleIndex_33899 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 914)) ;
  const GALGAS_lexiqueComponentAST temp_2 = this ;
  cEnumerator_lexicalStyleListAST enumerator_33927 (temp_2.readProperty_mLexicalStyleListAST (), EnumerationOrder::up) ;
  while (enumerator_33927.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_33491.mProperty_mStyleMap.setter_insertKey (enumerator_33927.current_mName (HERE), enumerator_33927.current_mComment (HERE), var_styleIndex_33899.getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 916)), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 916)) ;
    }
    var_styleIndex_33899.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 917)), inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 917)) ;
    enumerator_33927.gotoNextObject () ;
  }
  {
  const GALGAS_lexiqueComponentAST temp_3 = this ;
  routine_buildLexicalAttributeMap_3F__3F__26_ (var_lexicalTypeMap_33014, temp_3.readProperty_mLexicalAttributeListAST (), var_lexiqueAnalysisContext_33491.mProperty_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 920)) ;
  }
  const GALGAS_lexiqueComponentAST temp_4 = this ;
  cEnumerator_terminalDeclarationListAST enumerator_34417 (temp_4.readProperty_mTerminalDeclarationListAST (), EnumerationOrder::up) ;
  while (enumerator_34417.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex_34491 = GALGAS_uint (uint32_t (0U)) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_34417.current_mStyle (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique-component.galgas", 928)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_lstring joker_34610 ; // Joker input parameter
        var_lexiqueAnalysisContext_33491.readProperty_mStyleMap ().method_searchKey (enumerator_34417.current_mStyle (HERE), joker_34610, var_terminalStyleIndex_34491, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 929)) ;
      }
    }
    GALGAS_lexicalSentValueList var_argumentTypeList_34650 = GALGAS_lexicalSentValueList::init (inCompiler COMMA_HERE) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_34719 (enumerator_34417.current_mSentAttributeList (HERE), EnumerationOrder::up) ;
    while (enumerator_34719.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_34842 ;
      var_lexiqueAnalysisContext_33491.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_34719.current_mAttributeName (HERE), var_attributeLexicalType_34842, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 933)) ;
      var_argumentTypeList_34650.addAssign_operation (enumerator_34719.current_mFormalSelector (HERE), enumerator_34719.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_34842  COMMA_SOURCE_FILE ("lexique-component.galgas", 934)) ;
      enumerator_34719.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_33491.mProperty_mTerminalMap.setter_insertKey (enumerator_34417.current_mName (HERE), var_argumentTypeList_34650, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 936)) ;
    }
    var_lexiqueAnalysisContext_33491.mProperty_mTerminalList.addAssign_operation (enumerator_34417.current_mName (HERE), var_argumentTypeList_34650, enumerator_34417.current_mSyntaxErrorMessage (HERE).readProperty_string (), enumerator_34417.current_isEndOfTemplateMark (HERE), enumerator_34417.current_nonAtomicSelection (HERE).operator_not (SOURCE_FILE ("lexique-component.galgas", 959)), var_terminalStyleIndex_34491  COMMA_SOURCE_FILE ("lexique-component.galgas", 954)) ;
    enumerator_34417.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_6 = this ;
  cEnumerator_lexicalListDeclarationListAST enumerator_36004 (temp_6.readProperty_mLexicalListDeclarationListAST (), EnumerationOrder::up) ;
  while (enumerator_36004.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex_36072 = GALGAS_uint (uint32_t (0U)) ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_36004.current_mStyle (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique-component.galgas", 964)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_lstring joker_36191 ; // Joker input parameter
        var_lexiqueAnalysisContext_33491.readProperty_mStyleMap ().method_searchKey (enumerator_36004.current_mStyle (HERE), joker_36191, var_terminalStyleIndex_36072, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 965)) ;
      }
    }
    GALGAS_lexicalSentValueList var_argumentTypeList_36231 = GALGAS_lexicalSentValueList::init (inCompiler COMMA_HERE) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_36300 (enumerator_36004.current_mSentAttributeList (HERE), EnumerationOrder::up) ;
    while (enumerator_36300.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_36423 ;
      var_lexiqueAnalysisContext_33491.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_36300.current_mAttributeName (HERE), var_attributeLexicalType_36423, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 969)) ;
      var_argumentTypeList_36231.addAssign_operation (enumerator_36300.current_mFormalSelector (HERE), enumerator_36300.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_36423  COMMA_SOURCE_FILE ("lexique-component.galgas", 970)) ;
      enumerator_36300.gotoNextObject () ;
    }
    GALGAS_lexicalExplicitTokenListMap var_lexicalTokenListMap_36578 = GALGAS_lexicalExplicitTokenListMap::init (inCompiler COMMA_HERE) ;
    GALGAS_tokenSortedlist var_tokenSortedlist_36611 = GALGAS_tokenSortedlist::init (inCompiler COMMA_HERE) ;
    cEnumerator_lexicalListEntryListAST enumerator_36710 (enumerator_36004.current_mEntryList (HERE), EnumerationOrder::up) ;
    while (enumerator_36710.hasCurrentObject ()) {
      GALGAS_string var_syntaxErrorMessage_36756 = enumerator_36004.current_mSyntaxErrorMessage (HERE).readProperty_string ().getter_stringByReplacingStringByString (GALGAS_string ("%K"), enumerator_36710.current_mTerminalSpelling (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 975)) ;
      var_lexiqueAnalysisContext_33491.mProperty_mTerminalList.addAssign_operation (enumerator_36710.current_mTerminalSpelling (HERE), var_argumentTypeList_36231, var_syntaxErrorMessage_36756, enumerator_36710.current_isEndOfTemplateMark (HERE), enumerator_36710.current_nonAtomicSelection (HERE).operator_not (SOURCE_FILE ("lexique-component.galgas", 981)), var_terminalStyleIndex_36072  COMMA_SOURCE_FILE ("lexique-component.galgas", 976)) ;
      {
      var_lexiqueAnalysisContext_33491.mProperty_mTerminalMap.setter_insertKey (enumerator_36710.current_mTerminalSpelling (HERE), var_argumentTypeList_36231, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 983)) ;
      }
      {
      var_lexicalTokenListMap_36578.setter_insertKey (enumerator_36710.current_mEntrySpelling (HERE), enumerator_36710.current_mTerminalSpelling (HERE), enumerator_36710.current_nonAtomicSelection (HERE), enumerator_36710.current_isEndOfTemplateMark (HERE), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 984)) ;
      }
      var_tokenSortedlist_36611.addAssign_operation (enumerator_36710.current_mEntrySpelling (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique-component.galgas", 990)), enumerator_36710.current_mEntrySpelling (HERE).readProperty_string (), enumerator_36710.current_mTerminalSpelling (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 990)) ;
      var_lexiqueAnalysisContext_33491.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_36710.current_mEntrySpelling (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 991)) ;
      enumerator_36710.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_33491.mProperty_mLexicalTokenListMap.setter_insertKey (enumerator_36004.current_mName (HERE), var_lexicalTokenListMap_36578, var_tokenSortedlist_36611, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 993)) ;
    }
    enumerator_36004.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_8 = this ;
  cEnumerator_lexicalMessageDeclarationListAST enumerator_37798 (temp_8.readProperty_mLexicalMessageDeclarationListAST (), EnumerationOrder::up) ;
  while (enumerator_37798.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_33491.mProperty_mLexicalMessageMap.setter_insertKey (enumerator_37798.current_mMessageName (HERE), enumerator_37798.current_mMessageValue (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 997)) ;
    }
    enumerator_37798.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_9 = this ;
  cEnumerator_lexicalRuleListAST enumerator_38020 (temp_9.readProperty_mLexicalRuleListAST (), EnumerationOrder::up) ;
  while (enumerator_38020.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRule ((cPtr_abstractLexicalRuleAST *) enumerator_38020.current_mLexicalRule (HERE).ptr (), var_lexiqueAnalysisContext_33491, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1001)) ;
    enumerator_38020.gotoNextObject () ;
  }
  cEnumerator_lexicalMessageMap enumerator_38212 (var_lexiqueAnalysisContext_33491.readProperty_mLexicalMessageMap (), EnumerationOrder::up) ;
  while (enumerator_38212.hasCurrentObject ()) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = enumerator_38212.current_mMessageIsUsed (HERE).operator_not (SOURCE_FILE ("lexique-component.galgas", 1005)).boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticWarning (enumerator_38212.current_lkey (HERE).readProperty_location (), GALGAS_string ("unused message"), fixItArray11  COMMA_SOURCE_FILE ("lexique-component.galgas", 1006)) ;
      }
    }
    enumerator_38212.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_12 = this ;
  cEnumerator_templateDelimitorListAST enumerator_38466 (temp_12.readProperty_mTemplateDelimitorListAST (), EnumerationOrder::up) ;
  while (enumerator_38466.hasCurrentObject ()) {
    var_lexiqueAnalysisContext_33491.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_38466.current_mStartString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 1011)) ;
    var_lexiqueAnalysisContext_33491.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_38466.current_mEndString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 1012)) ;
    var_lexiqueAnalysisContext_33491.mProperty_mTemplateDelimitorList.addAssign_operation (enumerator_38466.current_mStartString (HERE), enumerator_38466.current_mEndString (HERE), enumerator_38466.current_mPreserved (HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas", 1013)) ;
    enumerator_38466.gotoNextObject () ;
  }
  GALGAS_stringset var_indexNameSet_38789 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
  const GALGAS_lexiqueComponentAST temp_13 = this ;
  cEnumerator_indexingListAST enumerator_38825 (temp_13.readProperty_mIndexingListAST (), EnumerationOrder::up) ;
  while (enumerator_38825.hasCurrentObject ()) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = var_indexNameSet_38789.getter_hasKey (enumerator_38825.current_mIndexName (HERE).readProperty_string () COMMA_SOURCE_FILE ("lexique-component.galgas", 1017)).boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_38825.current_mIndexName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_38825.current_mIndexName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1018)).add_operation (GALGAS_string ("' index is already declared"), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1018)), fixItArray15  COMMA_SOURCE_FILE ("lexique-component.galgas", 1018)) ;
      }
    }
    var_indexNameSet_38789.addAssign_operation (enumerator_38825.current_mIndexName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 1020)) ;
    enumerator_38825.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_16 = this ;
  cEnumerator_templateReplacementListAST enumerator_39142 (temp_16.readProperty_mTemplateReplacementListAST (), EnumerationOrder::up) ;
  while (enumerator_39142.hasCurrentObject ()) {
    var_lexiqueAnalysisContext_33491.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_39142.current_mMatchString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 1024)) ;
    var_lexiqueAnalysisContext_33491.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_39142.current_mReplacementString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 1025)) ;
    enumerator_39142.gotoNextObject () ;
  }
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    test_17 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("lexique-component.galgas", 1029)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_17) {
      const GALGAS_lexiqueComponentAST temp_18 = this ;
      const GALGAS_lexiqueComponentAST temp_19 = this ;
      const GALGAS_lexiqueComponentAST temp_20 = this ;
      const GALGAS_lexiqueComponentAST temp_21 = this ;
      GALGAS_string var_headerContents_39510 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_headerZone_32_ (inCompiler, temp_18.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-component.galgas", 1032)), temp_19.readProperty_mLexicalListDeclarationListAST (), var_lexiqueAnalysisContext_33491, temp_20.readProperty_mTemplateDelimitorListAST (), temp_21.readProperty_mIndexingListAST () COMMA_SOURCE_FILE ("lexique-component.galgas", 1031))) ;
      const GALGAS_lexiqueComponentAST temp_22 = this ;
      const GALGAS_lexiqueComponentAST temp_23 = this ;
      const GALGAS_lexiqueComponentAST temp_24 = this ;
      const GALGAS_lexiqueComponentAST temp_25 = this ;
      const GALGAS_lexiqueComponentAST temp_26 = this ;
      const GALGAS_lexiqueComponentAST temp_27 = this ;
      const GALGAS_lexiqueComponentAST temp_28 = this ;
      GALGAS_string var_cppContents_39812 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_implementationZone_32_Galgas_33_ (inCompiler, temp_22.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-component.galgas", 1040)), extensionGetter_useLoopLocalVar (temp_23.readProperty_mLexicalRuleListAST (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1041)), var_lexiqueAnalysisContext_33491.readProperty_mLexicalAttributeMap (), var_lexiqueAnalysisContext_33491.readProperty_mLexicalMessageMap (), var_lexiqueAnalysisContext_33491.readProperty_mTerminalList (), var_lexiqueAnalysisContext_33491.readProperty_mLexicalTokenListMap (), var_lexiqueAnalysisContext_33491.readProperty_mUnicodeStringToGenerate (), temp_24.readProperty_mLexicalRuleListAST (), var_lexiqueAnalysisContext_33491, temp_25.readProperty_mTemplateDelimitorListAST (), temp_26.readProperty_mLexiqueComponentName ().readProperty_string (), temp_27.readProperty_mTemplateReplacementListAST (), temp_28.readProperty_mLexicalStyleListAST () COMMA_SOURCE_FILE ("lexique-component.galgas", 1039))) ;
      const GALGAS_lexiqueComponentAST temp_29 = this ;
      GALGAS_string var_objCocoaHeader_40510 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (inCompiler, temp_29.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexiqueAnalysisContext_33491 COMMA_SOURCE_FILE ("lexique-component.galgas", 1055))) ;
      const GALGAS_lexiqueComponentAST temp_30 = this ;
      const GALGAS_lexiqueComponentAST temp_31 = this ;
      const GALGAS_lexiqueComponentAST temp_32 = this ;
      const GALGAS_lexiqueComponentAST temp_33 = this ;
      const GALGAS_lexiqueComponentAST temp_34 = this ;
      const GALGAS_lexiqueComponentAST temp_35 = this ;
      const GALGAS_lexiqueComponentAST temp_36 = this ;
      GALGAS_string var_objCocoaImplementation_40702 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaImplementationZone_32_ (inCompiler, GALGAS_string ("lexique-").add_operation (temp_30.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("lexique-component.galgas", 1061)), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1061)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1061)), temp_31.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexiqueAnalysisContext_33491.readProperty_mLexicalAttributeMap (), var_lexiqueAnalysisContext_33491.readProperty_mLexicalMessageMap (), var_lexiqueAnalysisContext_33491.readProperty_mTerminalList (), var_lexiqueAnalysisContext_33491.readProperty_mUnicodeStringToGenerate (), temp_32.readProperty_mLexicalRuleListAST (), var_lexiqueAnalysisContext_33491, temp_33.readProperty_mTemplateReplacementListAST (), temp_34.readProperty_mIndexingListAST (), temp_35.readProperty_mLexicalStyleListAST (), temp_36.readProperty_mTemplateDelimitorListAST () COMMA_SOURCE_FILE ("lexique-component.galgas", 1060))) ;
      const GALGAS_lexiqueComponentAST temp_37 = this ;
      const GALGAS_lexiqueComponentAST temp_38 = this ;
      const GALGAS_lexiqueComponentAST temp_39 = this ;
      const GALGAS_lexiqueComponentAST temp_40 = this ;
      const GALGAS_lexiqueComponentAST temp_41 = this ;
      const GALGAS_lexiqueComponentAST temp_42 = this ;
      const GALGAS_lexiqueComponentAST temp_43 = this ;
      GALGAS_string var_swiftCocoaImplementation_41372 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_swiftCocoaImplementationZone_32_ (inCompiler, GALGAS_string ("lexique-").add_operation (temp_37.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("lexique-component.galgas", 1076)), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1076)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1076)), temp_38.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexiqueAnalysisContext_33491.readProperty_mLexicalAttributeMap (), var_lexiqueAnalysisContext_33491.readProperty_mLexicalMessageMap (), var_lexiqueAnalysisContext_33491.readProperty_mTerminalList (), var_lexiqueAnalysisContext_33491.readProperty_mUnicodeStringToGenerate (), temp_39.readProperty_mLexicalRuleListAST (), var_lexiqueAnalysisContext_33491, temp_40.readProperty_mTemplateReplacementListAST (), temp_41.readProperty_mIndexingListAST (), temp_42.readProperty_mLexicalStyleListAST (), temp_43.readProperty_mTemplateDelimitorListAST () COMMA_SOURCE_FILE ("lexique-component.galgas", 1075))) ;
      const GALGAS_lexiqueComponentAST temp_44 = this ;
      const GALGAS_lexiqueComponentAST temp_45 = this ;
      ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_lexiqueDeclarationForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21_ (GALGAS_bool (true), GALGAS_string ("lexique-").add_operation (temp_44.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("lexique-component.galgas", 1094)), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1094)), temp_45.readProperty_mLexiqueComponentName ().readProperty_string (), GALGAS_string::makeEmptyString (), var_headerContents_39510, var_cppContents_39812, var_objCocoaHeader_40510, var_objCocoaImplementation_40702, var_swiftCocoaImplementation_41372, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas", 1090)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'lexiqueGenerationTemplates'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_lexiqueGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_lexiqueGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_lexiqueGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_lexiqueGenerationTemplates_0,
  0,
  gWrapperAllDirectories_lexiqueGenerationTemplates_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates headerZone2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_headerZone_32_ (Compiler * inCompiler,
                                                                             const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                             const GALGAS_lexicalListDeclarationListAST & in_DELIMITOR_5F_LIST_5F_LIST,
                                                                             const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                             const GALGAS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                             const GALGAS_indexingListAST & in_INDEXING_5F_LIST
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("LEXIQUE ").add_operation (in_LEXIQUE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"Lexique.h\"\n\n//--------------------------------------------------------------------------------------------------\n//                    E X T E R N    R O U T I N E S\n//--------------------------------------------------------------------------------------------------\n") ;
  GALGAS_uint index_654_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap ().isValid ()) {
    cEnumerator_lexicalRoutineMap enumerator_654 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap (), EnumerationOrder::up) ;
    while (enumerator_654.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_654.current_mIsExtern (HERE).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("\nvoid scanner_routine_") ;
        result.appendString (enumerator_654.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (Lexique & inLexique") ;
        GALGAS_uint index_873_ (0) ;
        if (enumerator_654.current_mLexicalRoutineFormalArgumentList (HERE).isValid ()) {
          cEnumerator_lexicalRoutineFormalArgumentList enumerator_873 (enumerator_654.current_mLexicalRoutineFormalArgumentList (HERE), EnumerationOrder::up) ;
          while (enumerator_873.hasCurrentObject ()) {
            result.appendString (",\n                ") ;
            result.appendString (extensionGetter_cppConstInFormalArgument (enumerator_873.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (extensionGetter_cppTypeName (enumerator_873.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 18)).stringValue ()) ;
            result.appendString (extensionGetter_cppReferenceInFormalArgument (enumerator_873.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 19)).stringValue ()) ;
            result.appendString (" ") ;
            result.appendString (enumerator_873.current_mArgumentNameForComment (HERE).stringValue ()) ;
            index_873_.increment () ;
            enumerator_873.gotoNextObject () ;
          }
        }
        GALGAS_uint index_1226_ (0) ;
        if (enumerator_654.current_mErrorMessageList (HERE).isValid ()) {
          cEnumerator_stringlist enumerator_1226 (enumerator_654.current_mErrorMessageList (HERE), EnumerationOrder::up) ;
          while (enumerator_1226.hasCurrentObject ()) {
            result.appendString (",\n                const char * ") ;
            result.appendString (enumerator_1226.current_mValue (HERE).stringValue ()) ;
            index_1226_.increment () ;
            enumerator_1226.gotoNextObject () ;
          }
        }
        result.appendString (") ;\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_654_.increment () ;
      enumerator_654.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                    E X T E R N    F U N C T I O N S\n//--------------------------------------------------------------------------------------------------\n") ;
  GALGAS_uint index_1712_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap ().isValid ()) {
    cEnumerator_lexicalFunctionMap enumerator_1712 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap (), EnumerationOrder::up) ;
    while (enumerator_1712.hasCurrentObject ()) {
      const enumGalgasBool test_1 = enumerator_1712.current_mIsExtern (HERE).boolEnum () ;
      switch (test_1) {
      case kBoolTrue : {
        result.appendString ("\n") ;
        result.appendString (extensionGetter_cppTypeName (enumerator_1712.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 35)).stringValue ()) ;
        result.appendString (" scanner_function_") ;
        result.appendString (enumerator_1712.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (Lexique & inLexique") ;
        GALGAS_uint index_1907_ (0) ;
        if (enumerator_1712.current_mLexicalTypeList (HERE).isValid ()) {
          cEnumerator_lexicalFunctionFormalArgumentList enumerator_1907 (enumerator_1712.current_mLexicalTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_1907.hasCurrentObject ()) {
            result.appendString (",\n                const ") ;
            result.appendString (extensionGetter_cppTypeName (enumerator_1907.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 37)).stringValue ()) ;
            result.appendString (" ") ;
            result.appendString (enumerator_1907.current_mArgumentNameForComment (HERE).stringValue ()) ;
            index_1907_.increment () ;
            enumerator_1907.gotoNextObject () ;
          }
        }
        result.appendString (") ;\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_1712_.increment () ;
      enumerator_1712.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                       T O K E N    C L A S S\n//--------------------------------------------------------------------------------------------------\n\nclass cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public cToken {\n") ;
  GALGAS_uint index_2424_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_2424 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap (), EnumerationOrder::up) ;
    while (enumerator_2424.hasCurrentObject ()) {
      result.appendString ("  public: ") ;
      result.appendString (extensionGetter_cppTypeName (enumerator_2424.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 50)).stringValue ()) ;
      result.appendString (" mLexicalAttribute_") ;
      result.appendString (enumerator_2424.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 50)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_2424_.increment () ;
      enumerator_2424.gotoNextObject () ;
    }
  }
  result.appendString ("\n  public: cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n//                     S C A N N E R    C L A S S\n//--------------------------------------------------------------------------------------------------\n\nclass Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public Lexique {\n//--- Constructors\n  public: Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (Compiler * inCallerCompiler,\n                       const String & inSourceFileName\n                       COMMA_LOCATION_ARGS) ;\n\n  public: Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (Compiler * inCallerCompiler,\n                       const String & inSourceString,\n                       const String & inStringForError\n                       COMMA_LOCATION_ARGS) ;\n\n//--- Instrospection\n  public: static GALGAS_stringlist symbols (LOCATION_ARGS) ;\n\n//--- Declaring a protected virtual destructor enables the compiler to raise\n//    an error if a direct delete is performed; only the static method\n//    SharedObject::detachPointer may invoke delete.\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    protected: virtual ~ Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) { }\n  #endif\n") ;
  const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 80)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.appendString ("\n//--- Scanner mode for template scanner\n  private: int32_t mMatchedTemplateDelimiterIndex ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n\n\n//--- Terminal symbols enumeration\n  public: enum {kToken_") ;
  GALGAS_uint index_4079_idx (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_4079 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), EnumerationOrder::up) ;
    while (enumerator_4079.hasCurrentObject ()) {
      result.appendString (",\n   kToken_") ;
      result.appendString (enumerator_4079.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 89)).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (index_4079_idx.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 89)).getter_string (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 89)).stringValue ()) ;
      result.appendString (" */ ") ;
      index_4079_idx.increment () ;
      enumerator_4079.gotoNextObject () ;
    }
  }
  result.appendString ("} ;\n") ;
  GALGAS_uint index_4294_ (0) ;
  if (in_DELIMITOR_5F_LIST_5F_LIST.isValid ()) {
    cEnumerator_lexicalListDeclarationListAST enumerator_4294 (in_DELIMITOR_5F_LIST_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4294.hasCurrentObject ()) {
      result.appendString ("\n//--- Key words table '") ;
      result.appendString (enumerator_4294.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("'\n  public: static int32_t search_into_") ;
      result.appendString (enumerator_4294.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" (const String & inSearchedString) ;\n") ;
      index_4294_.increment () ;
      enumerator_4294.gotoNextObject () ;
    }
  }
  result.appendString ("  \n\n//--- Assign from attribute\n") ;
  GALGAS_uint index_4560_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_4560 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap (), EnumerationOrder::up) ;
    while (enumerator_4560.hasCurrentObject ()) {
      result.appendString ("  public: GALGAS_l") ;
      result.appendString (extensionGetter_lexicalTypeBaseName (enumerator_4560.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 102)).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 102)).stringValue ()) ;
      result.appendString (" synthetizedAttribute_") ;
      result.appendString (enumerator_4560.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 102)).stringValue ()) ;
      result.appendString (" (void) const ;\n") ;
      index_4560_.increment () ;
      enumerator_4560.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n//--- Attribute access\n") ;
  GALGAS_uint index_4834_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_4834 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap (), EnumerationOrder::up) ;
    while (enumerator_4834.hasCurrentObject ()) {
      result.appendString ("  public: ") ;
      result.appendString (extensionGetter_cppTypeName (enumerator_4834.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 109)).stringValue ()) ;
      result.appendString (" attributeValue_") ;
      result.appendString (enumerator_4834.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 109)).stringValue ()) ;
      result.appendString (" (void) const ;\n") ;
      index_4834_.increment () ;
      enumerator_4834.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n//--- indexing keys\n") ;
  GALGAS_uint index_5061_ (0) ;
  if (in_INDEXING_5F_LIST.isValid ()) {
    cEnumerator_indexingListAST enumerator_5061 (in_INDEXING_5F_LIST, EnumerationOrder::up) ;
    const bool nonEmpty_enumerator_5061 = enumerator_5061.hasCurrentObject () ;
    if (nonEmpty_enumerator_5061) {
      result.appendString ("  public: enum {") ;
    }
    while (enumerator_5061.hasCurrentObject ()) {
      result.appendString ("\n    kIndexing_") ;
      result.appendString (enumerator_5061.current_mIndexName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 117)).stringValue ()) ;
      if (enumerator_5061.hasNextObject ()) {
        result.appendString (",") ;
      }
      index_5061_.increment () ;
      enumerator_5061.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_5061) {
      result.appendString ("\n  } ;\n") ;
    }
  }
  result.appendString ("\n//--- Parse lexical token\n  protected: void internalParseLexicalToken (cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & token) ;\n  protected: virtual bool parseLexicalToken (void) override ;\n\n//--- Get terminal message\n  protected: virtual String getMessageForTerminal (const int32_t inTerminalSymbol) const override ;\n\n//--- Get terminal count\n  public: virtual int32_t terminalVocabularyCount (void) const override { return ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 130)).getter_string (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 130)).stringValue ()) ;
  result.appendString (" ; }\n\n//--- Get Token String\n  public: virtual String getCurrentTokenString (const cToken * inTokenPtr) const override ;\n\n//--- Enter Token\n  protected: void enterToken (cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & ioToken) ;\n\n//--- Style name for Latex\n  protected: virtual String styleNameForIndex (const uint32_t inStyleIndex) const override ;\n  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const override ;\n} ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates implementationZone2Galgas3'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_implementationZone_32_Galgas_33_ (Compiler * inCompiler,
                                                                                               const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                               const GALGAS_bool & in_USE_5F_LOOP_5F_LOCAL_5F_VARIABLE,
                                                                                               const GALGAS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                               const GALGAS_lexicalMessageMap & in_LEXICAL_5F_MESSAGE_5F_MAP,
                                                                                               const GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                               const GALGAS_lexicalExplicitTokenListMapMap & in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP,
                                                                                               const GALGAS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                               const GALGAS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                               const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                               const GALGAS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                               const GALGAS_string & in_LEXIQUE_5F_COMPONENT_5F_NAME,
                                                                                               const GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                               const GALGAS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//     L E X I Q U E                                                                             \n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"unicode_character_cpp.h\"\n#include \"scanner_actions.h\"\n#include \"cLexiqueIntrospection.h\"\n\n//--------------------------------------------------------------------------------------------------\n\ncTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void)") ;
  GALGAS_uint index_651_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_651 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, EnumerationOrder::up) ;
    const bool nonEmpty_enumerator_651 = enumerator_651.hasCurrentObject () ;
    if (nonEmpty_enumerator_651) {
      result.appendString (" :\n") ;
    }
    while (enumerator_651.hasCurrentObject ()) {
      result.appendString ("mLexicalAttribute_") ;
      result.appendString (enumerator_651.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 16)).stringValue ()) ;
      result.appendString (" ()") ;
      if (enumerator_651.hasNextObject ()) {
        result.appendString (",\n") ;
      }
      index_651_.increment () ;
      enumerator_651.gotoNextObject () ;
    }
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nLexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * inCallerCompiler,\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const String & inSourceFileName\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\nLexique (inCallerCompiler, inSourceFileName COMMA_THERE)") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 28)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString (",\nmMatchedTemplateDelimiterIndex (-1)") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nLexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * inCallerCompiler,\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const String & inSourceString,\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const String & inStringForError\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\nLexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE)") ;
  const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 41)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString (",\nmMatchedTemplateDelimiterIndex (-1)") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n//                        Lexical error message list                                             \n//--------------------------------------------------------------------------------------------------\n") ;
  GALGAS_uint index_2085_ (0) ;
  if (in_LEXICAL_5F_MESSAGE_5F_MAP.isValid ()) {
    cEnumerator_lexicalMessageMap enumerator_2085 (in_LEXICAL_5F_MESSAGE_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_2085.hasCurrentObject ()) {
      result.appendString ("\nstatic const char * gLexicalMessage_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_2085.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (enumerator_2085.current_mLexicalMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 52)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_2085_.increment () ;
      enumerator_2085.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                getMessageForTerminal                                                          \n//--------------------------------------------------------------------------------------------------\n\nString Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getMessageForTerminal (const int32_t inTerminalIndex) const {\n  String result = \"<unknown>\" ;\n  if ((inTerminalIndex >= 0) && (inTerminalIndex < ") ;
  result.appendString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 61)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 61)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 61)).stringValue ()) ;
  result.appendString (")) {\n    static const char * syntaxErrorMessageArray [") ;
  result.appendString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 62)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 62)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 62)).stringValue ()) ;
  result.appendString ("] = {kEndOfSourceLexicalErrorMessage") ;
  GALGAS_uint index_2948_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_2948 (in_TERMINAL_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2948.hasCurrentObject ()) {
      result.appendString (",\n        ") ;
      result.appendString (enumerator_2948.current_mSyntaxErrorMessage (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 64)).stringValue ()) ;
      index_2948_.increment () ;
      enumerator_2948.gotoNextObject () ;
    }
  }
  result.appendString ("\n    } ;\n    result = syntaxErrorMessageArray [inTerminalIndex] ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//                      U N I C O D E    S T R I N G S                                           \n//--------------------------------------------------------------------------------------------------\n") ;
  GALGAS_uint index_3471_ (0) ;
  if (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES.isValid ()) {
    cEnumerator_stringset enumerator_3471 (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES, EnumerationOrder::up) ;
    while (enumerator_3471.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_3471.current_key (HERE).getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 77)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_2) {
      case kBoolTrue : {
        result.appendString ("\n//--- Unicode string for '$") ;
        result.appendString (enumerator_3471.current_key (HERE).getter_utf_38_RepresentationWithoutDelimiters (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 78)).stringValue ()) ;
        result.appendString ("$'\nstatic const std::initializer_list <utf32> kUnicodeString_") ;
        result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_3471.current_key (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).stringValue ()) ;
        result.appendString (" = ") ;
        result.appendString (enumerator_3471.current_key (HERE).getter_utf_33__32_Representation (GALGAS_bool (false) COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).stringValue ()) ;
        result.appendString (" ;\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_3471_.increment () ;
      enumerator_3471.gotoNextObject () ;
    }
  }
  result.appendString ("\n") ;
  GALGAS_uint index_3920_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_3920 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_3920.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n//             Key words table '") ;
      result.appendString (enumerator_3920.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("'      \n//--------------------------------------------------------------------------------------------------\n\nstatic const int32_t ktable_size_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3920.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (enumerator_3920.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 88)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 88)).stringValue ()) ;
      result.appendString (" ;\n\nstatic const C_unicode_lexique_table_entry ktable_for_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3920.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" [ktable_size_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3920.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("] = {\n") ;
      GALGAS_uint index_4611_ (0) ;
      if (enumerator_3920.current_mTokenSortedList (HERE).isValid ()) {
        cEnumerator_tokenSortedlist enumerator_4611 (enumerator_3920.current_mTokenSortedList (HERE), EnumerationOrder::up) ;
        while (enumerator_4611.hasCurrentObject ()) {
          result.appendString ("  C_unicode_lexique_table_entry (kUnicodeString_") ;
          result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_4611.current_mName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 91)).stringValue ()) ;
          result.appendString (", Lexique_") ;
          result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
          result.appendString ("::kToken_") ;
          result.appendString (enumerator_4611.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 91)).stringValue ()) ;
          result.appendString (")") ;
          if (enumerator_4611.hasNextObject ()) {
            result.appendString (",\n") ;
          }
          index_4611_.increment () ;
          enumerator_4611.gotoNextObject () ;
        }
      }
      result.appendString ("\n} ;\n\nint32_t Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::search_into_") ;
      result.appendString (enumerator_3920.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" (const String & inSearchedString) {\n  return searchInList (inSearchedString, ktable_for_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3920.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (", ktable_size_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3920.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (") ;\n}\n\n") ;
      index_3920_.increment () ;
      enumerator_3920.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                          getCurrentTokenString                                                \n//--------------------------------------------------------------------------------------------------\n\nString Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getCurrentTokenString (const cToken * inTokenPtr) const {\n  const cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * ptr = (const cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) inTokenPtr ;\n  String s ;\n  if (ptr == nullptr) {\n    s.appendCString (\"$$\") ;\n  }else{\n    switch (ptr->mTokenCode) {\n    case kToken_:\n      s.appendCString (\"$$\") ;\n      break ;\n") ;
  GALGAS_uint index_5958_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_5958 (in_TERMINAL_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5958.hasCurrentObject ()) {
      result.appendString ("    case kToken_") ;
      result.appendString (enumerator_5958.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 115)).stringValue ()) ;
      result.appendString (":\n      s.appendChar (TO_UNICODE ('$')) ;\n      s.appendCString (") ;
      result.appendString (enumerator_5958.current_mTerminalName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 117)).stringValue ()) ;
      result.appendString (") ;\n      s.appendChar (TO_UNICODE ('$')) ;\n") ;
      GALGAS_uint index_6317_ (0) ;
      if (enumerator_5958.current_mSentAttributeList (HERE).isValid ()) {
        cEnumerator_lexicalSentValueList enumerator_6317 (enumerator_5958.current_mSentAttributeList (HERE), EnumerationOrder::up) ;
        while (enumerator_6317.hasCurrentObject ()) {
          result.appendString ("      s.appendChar (TO_UNICODE (' ')) ;\n      s.") ;
          result.appendString (extensionGetter_appendMethodName (enumerator_6317.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 121)).stringValue ()) ;
          result.appendString (" (ptr->mLexicalAttribute_") ;
          result.appendString (enumerator_6317.current_mLexicalAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 121)).stringValue ()) ;
          result.appendString (extensionGetter_appendArgumentOfMethod (enumerator_6317.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 121)).stringValue ()) ;
          result.appendString (") ;\n") ;
          index_6317_.increment () ;
          enumerator_6317.gotoNextObject () ;
        }
      }
      result.appendString ("      break ;\n") ;
      index_5958_.increment () ;
      enumerator_5958.gotoNextObject () ;
    }
  }
  result.appendString ("    default:\n      break ;\n    }\n  }\n  return s ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//                           Template Delimiters                                                 \n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_7181_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().isValid ()) {
    cEnumerator_templateDelimitorList enumerator_7181 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList (), EnumerationOrder::up) ;
    const bool nonEmpty_enumerator_7181 = enumerator_7181.hasCurrentObject () ;
    if (nonEmpty_enumerator_7181) {
      result.appendString ("static const TemplateDelimiter ") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_kTemplateDefinitionArray [") ;
      result.appendString (in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 137)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 137)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_7181.hasCurrentObject ()) {
      result.appendString ("  TemplateDelimiter (kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_7181.current_mStartString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_7181.current_mStartString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).stringValue ()) ;
      result.appendString (", ") ;
      const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_7181.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 139)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_3) {
      case kBoolTrue : {
        result.appendString ("{}, 0,") ;
        } break ;
      case kBoolFalse : {
        result.appendString ("kUnicodeString_") ;
        result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_7181.current_mEndString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 142)).stringValue ()) ;
        result.appendString (", ") ;
        result.appendString (enumerator_7181.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 142)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 142)).stringValue ()) ;
        result.appendString (",") ;
        } break ;
      default :
        break ;
      }
      result.appendString (" nullptr, ") ;
      result.appendString (enumerator_7181.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 145)).getter_cString (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 145)).stringValue ()) ;
      result.appendString (")") ;
      if (enumerator_7181.hasNextObject ()) {
        result.appendString (",\n") ;
      }
      index_7181_.increment () ;
      enumerator_7181.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_7181) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                           Template Replacements                                               \n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_8182_ (0) ;
  if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
    cEnumerator_templateReplacementListAST enumerator_8182 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, EnumerationOrder::up) ;
    const bool nonEmpty_enumerator_8182 = enumerator_8182.hasCurrentObject () ;
    if (nonEmpty_enumerator_8182) {
      result.appendString ("static const TemplateDelimiter ") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_kTemplateReplacementArray [") ;
      result.appendString (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 156)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 156)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_8182.hasCurrentObject ()) {
      result.appendString ("  TemplateDelimiter (kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_8182.current_mMatchString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 158)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_8182.current_mMatchString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 158)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 158)).stringValue ()) ;
      result.appendString (", kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_8182.current_mReplacementString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_8182.current_mReplacementString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).stringValue ()) ;
      result.appendString (", ") ;
      const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::equal, enumerator_8182.current_mReplacementFunction (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 160)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_4) {
      case kBoolTrue : {
        result.appendString ("nullptr") ;
        } break ;
      case kBoolFalse : {
        result.appendString ("scanner_routine_") ;
        result.appendString (enumerator_8182.current_mReplacementFunction (HERE).readProperty_string ().stringValue ()) ;
        } break ;
      default :
        break ;
      }
      result.appendString (", true)") ;
      if (enumerator_8182.hasNextObject ()) {
        result.appendString (",\n") ;
      }
      index_8182_.increment () ;
      enumerator_8182.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_8182) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//            Terminal Symbols as end of script in template mark                                 \n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_5 = GALGAS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 174)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_5) {
  case kBoolTrue : {
    GALGAS_uint index_9328_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
      cEnumerator_terminalList enumerator_9328 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), EnumerationOrder::up) ;
      const bool nonEmpty_enumerator_9328 = enumerator_9328.hasCurrentObject () ;
      if (nonEmpty_enumerator_9328) {
        result.appendString ("static const bool ") ;
        result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_kEndOfScriptInTemplateArray [") ;
        result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 176)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 176)).stringValue ()) ;
        result.appendString ("] = {\n") ;
      }
      while (enumerator_9328.hasCurrentObject ()) {
        result.appendString ("  ") ;
        result.appendString (enumerator_9328.current_isEndOfTemplateMark (HERE).getter_cString (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 177)).stringValue ()) ;
        result.appendString (" /* ") ;
        result.appendString (enumerator_9328.current_mTerminalName (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" */") ;
        if (enumerator_9328.hasNextObject ()) {
          result.appendString (",\n") ;
        }
        index_9328_.increment () ;
        enumerator_9328.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_9328) {
        result.appendString ("\n} ;\n") ;
      }
    }
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//               INTERNAL PARSE LEXICAL TOKEN                                         \n//--------------------------------------------------------------------------------------------------\n\nvoid Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalParseLexicalToken (cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & token) {\n") ;
  const enumGalgasBool test_6 = in_USE_5F_LOOP_5F_LOCAL_5F_VARIABLE.boolEnum () ;
  switch (test_6) {
  case kBoolTrue : {
    result.appendString ("  bool loop = true ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  GALGAS_uint index_9966_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_9966 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_9966.hasCurrentObject ()) {
      result.appendString ("  token.mLexicalAttribute_") ;
      result.appendString (enumerator_9966.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 193)).stringValue ()) ;
      result.appendString (extensionGetter_initialization (enumerator_9966.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 193)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_9966_.increment () ;
      enumerator_9966.gotoNextObject () ;
    }
  }
  result.appendString ("  mTokenStartLocation = mCurrentLocation ;\n  try{\n") ;
  if (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).isValid ()) {
    result.incIndentation (int32_t (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).uintValue ())) ;
  }
  GALGAS_uint index_10187_ (0) ;
  if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
    cEnumerator_lexicalRuleListAST enumerator_10187 (in_LEXICAL_5F_RULE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10187.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_generateLexicalRuleCode ((const cPtr_abstractLexicalRuleAST *) enumerator_10187.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_IDENTIFIER, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 200)).stringValue ()) ;
      index_10187_.increment () ;
      enumerator_10187.gotoNextObject () ;
    }
  }
  if (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).isValid ()) {
    result.incIndentation (- int32_t (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).uintValue ())) ;
  }
  result.appendString ("if (testForInputUTF32Char (TO_UNICODE ('\\0'))) { // End of source text \? \n      token.mTokenCode = kToken_ ; // Empty string code\n    }else{ // Unknown input character\n      unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;\n      token.mTokenCode = -1 ; // No token\n      advance () ; // ... go throught unknown character\n    }\n  }catch (const C_lexicalErrorException &) {\n    token.mTokenCode = -1 ; // No token\n    advance () ; // ... go throught unknown character\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n//               P A R S E    L E X I C A L    T O K E N                                         \n//--------------------------------------------------------------------------------------------------\n\nbool Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::parseLexicalToken (void) {\n  cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" token ;\n  token.mTokenCode = -1 ;\n  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n") ;
  const enumGalgasBool test_7 = GALGAS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 225)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_7) {
  case kBoolTrue : {
    result.appendString ("    if ((mMatchedTemplateDelimiterIndex >= 0)\n     && (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength > 0)\n     && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n      const bool foundEndDelimitor = testForInputUTF32String (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndString,\n                                                               true) ;\n      if (foundEndDelimitor) {\n        mMatchedTemplateDelimiterIndex = -1 ;\n      }\n    }\n    while ((mMatchedTemplateDelimiterIndex < 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n      int32_t replacementIndex = 0 ;\n      while (replacementIndex >= 0) {\n        replacementIndex = findTemplateDelimiterIndex (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateReplacementArray, ") ;
    result.appendString (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 238)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 238)).stringValue ()) ;
    result.appendString (") ;\n        if (replacementIndex >= 0) {\n          if (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateReplacementArray [replacementIndex].mReplacementFunction == nullptr) {\n            token.mTemplateStringBeforeToken.appendString (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateReplacementArray [replacementIndex].mEndString) ;\n          }else{\n            String s ;\n            while (notTestForInputUTF32String (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateReplacementArray [replacementIndex].mEndString,\n                                                kEndOfSourceLexicalErrorMessage\n                                               COMMA_HERE)) {\n              s.appendChar (previousChar ()) ;\n            }\n            ") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateReplacementArray [replacementIndex].mReplacementFunction (*this, s, token.mTemplateStringBeforeToken) ;\n          }\n        }\n      }\n      mMatchedTemplateDelimiterIndex = findTemplateDelimiterIndex (") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kTemplateDefinitionArray, ") ;
    result.appendString (in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 253)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 253)).stringValue ()) ;
    result.appendString (") ;\n      if (mMatchedTemplateDelimiterIndex < 0) {\n        token.mTemplateStringBeforeToken.appendChar (mCurrentChar) ;\n        advance () ;\n      }\n    }\n    if ((mMatchedTemplateDelimiterIndex >= 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n      internalParseLexicalToken (token) ;\n    }\n    if ((token.mTokenCode > 0) && ") ;
    result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
    result.appendString ("_kEndOfScriptInTemplateArray [token.mTokenCode - 1]) {\n      mMatchedTemplateDelimiterIndex = -1 ;\n    }\n  ") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("    internalParseLexicalToken (token) ;") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("\n  }\n  if (UNICODE_VALUE (mCurrentChar) == '\\0') {\n    token.mTokenCode = 0 ;\n    enterToken (token) ;\n  }\n  return token.mTokenCode > 0 ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//                         E N T E R    T O K E N                                                \n//--------------------------------------------------------------------------------------------------\n\nvoid Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::enterToken (cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & ioToken) {\n  cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * ptr = nullptr ;\n  macroMyNew (ptr, cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ()) ;\n  ptr->mTokenCode = ioToken.mTokenCode ;\n  ptr->mStartLocation = mTokenStartLocation ;\n  ptr->mEndLocation = mTokenEndLocation ;\n  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;\n  ioToken.mTemplateStringBeforeToken = \"\" ;\n") ;
  GALGAS_uint index_14631_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_14631 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_14631.hasCurrentObject ()) {
      result.appendString ("  ptr->mLexicalAttribute_") ;
      result.appendString (enumerator_14631.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 290)).stringValue ()) ;
      result.appendString (" = ioToken.mLexicalAttribute_") ;
      result.appendString (enumerator_14631.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 290)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_14631_.increment () ;
      enumerator_14631.gotoNextObject () ;
    }
  }
  result.appendString ("  enterTokenFromPointer (ptr) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//               A T T R I B U T E   A C C E S S                                                 \n") ;
  GALGAS_uint index_15061_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_15061 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_15061.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
      result.appendString (extensionGetter_cppTypeName (enumerator_15061.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 300)).stringValue ()) ;
      result.appendString (" Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::attributeValue_") ;
      result.appendString (enumerator_15061.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 300)).stringValue ()) ;
      result.appendString (" (void) const {\n  cTokenFor_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * ptr = (cTokenFor_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) currentTokenPtr (HERE) ;\n  return ptr->mLexicalAttribute_") ;
      result.appendString (enumerator_15061.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 302)).stringValue ()) ;
      result.appendString (" ;\n}\n\n") ;
      index_15061_.increment () ;
      enumerator_15061.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//         A S S I G N    F R O M    A T T R I B U T E                                           \n") ;
  GALGAS_uint index_15766_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_15766 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_15766.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGALGAS_l") ;
      result.appendString (extensionGetter_lexicalTypeBaseName (enumerator_15766.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 310)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 310)).stringValue ()) ;
      result.appendString (" Lexique_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("::synthetizedAttribute_") ;
      result.appendString (enumerator_15766.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 310)).stringValue ()) ;
      result.appendString (" (void) const {\n  cTokenFor_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" * ptr = (cTokenFor_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (" *) currentTokenPtr (HERE) ;\n  macroValidSharedObject (ptr, cTokenFor_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString (") ;\n  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;\n  GALGAS_") ;
      result.appendString (extensionGetter_lexicalTypeBaseName (enumerator_15766.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 314)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 314)).stringValue ()) ;
      result.appendString (" value (ptr->mLexicalAttribute_") ;
      result.appendString (enumerator_15766.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 314)).stringValue ()) ;
      result.appendString (") ;\n  GALGAS_l") ;
      result.appendString (extensionGetter_lexicalTypeBaseName (enumerator_15766.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 315)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 315)).stringValue ()) ;
      result.appendString (" result (value, currentLocation) ;\n  return result ;\n}\n\n") ;
      index_15766_.increment () ;
      enumerator_15766.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//                         I N T R O S P E C T I O N                                             \n//--------------------------------------------------------------------------------------------------\n\nGALGAS_stringlist Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::symbols (LOCATION_ARGS) {\n  GALGAS_stringlist result = GALGAS_stringlist::class_func_emptyList (THERE) ;\n") ;
  GALGAS_uint index_17269_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_17269 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), EnumerationOrder::up) ;
    while (enumerator_17269.hasCurrentObject ()) {
      result.appendString ("  result.addAssign_operation (GALGAS_string (") ;
      result.appendString (enumerator_17269.current_mTerminalName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 326)).stringValue ()) ;
      result.appendString (") COMMA_HERE) ;\n") ;
      index_17269_.increment () ;
      enumerator_17269.gotoNextObject () ;
    }
  }
  result.appendString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void getKeywordLists_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (TC_UniqueArray <String> & ") ;
  const enumGalgasBool test_8 = GALGAS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 334)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_8) {
  case kBoolTrue : {
    result.appendString ("/* ioList */") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("ioList") ;
    } break ;
  default :
    break ;
  }
  result.appendString (") {\n") ;
  GALGAS_uint index_17782_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_17782 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_17782.hasCurrentObject ()) {
      result.appendString ("  ioList.appendObject (") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 338)).add_operation (enumerator_17782.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 338)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 338)).stringValue ()) ;
      result.appendString (") ;\n") ;
      index_17782_.increment () ;
      enumerator_17782.gotoNextObject () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void getKeywordsForIdentifier_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const String & ") ;
  const enumGalgasBool test_9 = GALGAS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 344)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_9) {
  case kBoolTrue : {
    result.appendString ("/* inIdentifier */") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("inIdentifier") ;
    } break ;
  default :
    break ;
  }
  result.appendString (",\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("bool & ") ;
  const enumGalgasBool test_10 = GALGAS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 345)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_10) {
  case kBoolTrue : {
    result.appendString ("/* ioFound */") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("ioFound") ;
    } break ;
  default :
    break ;
  }
  result.appendString (",\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("TC_UniqueArray <String> & ") ;
  const enumGalgasBool test_11 = GALGAS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 346)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_11) {
  case kBoolTrue : {
    result.appendString ("/* ioList */") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("ioList") ;
    } break ;
  default :
    break ;
  }
  result.appendString (") {\n") ;
  GALGAS_uint index_18491_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_18491 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_18491.hasCurrentObject ()) {
      result.appendString ("  if (inIdentifier == ") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 350)).add_operation (enumerator_18491.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 350)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 350)).stringValue ()) ;
      result.appendString (") {\n    ioFound = true ;\n") ;
      GALGAS_uint index_18688_ (0) ;
      if (enumerator_18491.current_mTokenSortedList (HERE).isValid ()) {
        cEnumerator_tokenSortedlist enumerator_18688 (enumerator_18491.current_mTokenSortedList (HERE), EnumerationOrder::up) ;
        while (enumerator_18688.hasCurrentObject ()) {
          result.appendString ("    ioList.appendObject (") ;
          result.appendString (enumerator_18688.current_mName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 353)).stringValue ()) ;
          result.appendString (") ;\n") ;
          index_18688_.increment () ;
          enumerator_18688.gotoNextObject () ;
        }
      }
      result.appendString ("    ioList.sortArrayUsingCompareMethod() ;\n  }\n") ;
      index_18491_.increment () ;
      enumerator_18491.gotoNextObject () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic cLexiqueIntrospection lexiqueIntrospection_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n__attribute__ ((used))\n__attribute__ ((unused)) (getKeywordLists_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (", getKeywordsForIdentifier_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n\n//--------------------------------------------------------------------------------------------------\n//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           \n//--------------------------------------------------------------------------------------------------\n\nuint32_t Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::styleIndexForTerminal (const int32_t inTerminalIndex) const {\n  static const uint32_t kTerminalSymbolStyles [") ;
  result.appendString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 371)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 371)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 371)).stringValue ()) ;
  result.appendString ("] = {0") ;
  GALGAS_uint index_19784_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_19784 (in_TERMINAL_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_19784.hasCurrentObject ()) {
      result.appendString (",\n    ") ;
      result.appendString (enumerator_19784.current_mStyleIndex (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 373)).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_19784.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 373)).stringValue ()) ;
      result.appendString (" */") ;
      index_19784_.increment () ;
      enumerator_19784.gotoNextObject () ;
    }
  }
  result.appendString ("\n  } ;\n  return (inTerminalIndex >= 0) \? kTerminalSymbolStyles [inTerminalIndex] : 0 ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      \n//--------------------------------------------------------------------------------------------------\n\nString Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::styleNameForIndex (const uint32_t inStyleIndex) const {\n  String result ;\n  if (inStyleIndex < ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 384)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 384)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 384)).stringValue ()) ;
  result.appendString (") {\n    static const char * kStyleArray [") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 385)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 385)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 385)).stringValue ()) ;
  result.appendString ("] = {\n      \"\"") ;
  GALGAS_uint index_20620_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_20620 (in_LEXICAL_5F_STYLE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_20620.hasCurrentObject ()) {
      result.appendString (",\n      ") ;
      result.appendString (enumerator_20620.current_mName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 388)).stringValue ()) ;
      index_20620_.increment () ;
      enumerator_20620.gotoNextObject () ;
    }
  }
  result.appendString ("\n    } ;\n    result = kStyleArray [inStyleIndex] ;\n  }\n  return result ;\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates cocoaHeaderZone2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (Compiler * inCompiler,
                                                                                  const GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                  const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("\n#import \"OC_Lexique.h\"\n\n//--------------------------------------------------------------------------------------------------\n//\n//                    E X T E R N    R O U T I N E S\n//\n//--------------------------------------------------------------------------------------------------\n") ;
  GALGAS_uint index_417_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap ().isValid ()) {
    cEnumerator_lexicalRoutineMap enumerator_417 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap (), EnumerationOrder::up) ;
    while (enumerator_417.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_417.current_mIsExtern (HERE).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("\nvoid scanner_cocoa_routine_") ;
        result.appendString (enumerator_417.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("BOOL * ioScanningOk") ;
        GALGAS_uint index_646_ (0) ;
        if (enumerator_417.current_mLexicalRoutineFormalArgumentList (HERE).isValid ()) {
          cEnumerator_lexicalRoutineFormalArgumentList enumerator_646 (enumerator_417.current_mLexicalRoutineFormalArgumentList (HERE), EnumerationOrder::up) ;
          while (enumerator_646.hasCurrentObject ()) {
            result.appendString (",\n                ") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString (extensionGetter_cppConstInFormalArgument (enumerator_646.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 14)).stringValue ()) ;
            result.appendString (extensionGetter_cocoaTypeName (enumerator_646.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (extensionGetter_cocoaPointerInFormalArgument (enumerator_646.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 16)).stringValue ()) ;
            result.appendString (" ") ;
            result.appendString (enumerator_646.current_mArgumentNameForComment (HERE).stringValue ()) ;
            index_646_.increment () ;
            enumerator_646.gotoNextObject () ;
          }
        }
        result.appendString (") ;\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_417_.increment () ;
      enumerator_417.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//\n//                    E X T E R N    F U N C T I O N S\n//\n//--------------------------------------------------------------------------------------------------\n") ;
  GALGAS_uint index_1392_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap ().isValid ()) {
    cEnumerator_lexicalFunctionMap enumerator_1392 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap (), EnumerationOrder::up) ;
    while (enumerator_1392.hasCurrentObject ()) {
      const enumGalgasBool test_1 = enumerator_1392.current_mIsExtern (HERE).boolEnum () ;
      switch (test_1) {
      case kBoolTrue : {
        result.appendString ("\n") ;
        result.appendString (extensionGetter_cppTypeName (enumerator_1392.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 31)).stringValue ()) ;
        result.appendString (" scanner_cocoa_function_") ;
        result.appendString (enumerator_1392.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("BOOL * ioScanningOk") ;
        GALGAS_uint index_1597_ (0) ;
        if (enumerator_1392.current_mLexicalTypeList (HERE).isValid ()) {
          cEnumerator_lexicalFunctionFormalArgumentList enumerator_1597 (enumerator_1392.current_mLexicalTypeList (HERE), EnumerationOrder::up) ;
          while (enumerator_1597.hasCurrentObject ()) {
            result.appendString (",\n                ") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString ("const ") ;
            result.appendString (extensionGetter_cppTypeName (enumerator_1597.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 33)).stringValue ()) ;
            result.appendString (" ") ;
            result.appendString (enumerator_1597.current_mArgumentNameForComment (HERE).stringValue ()) ;
            index_1597_.increment () ;
            enumerator_1597.gotoNextObject () ;
          }
        }
        result.appendString (") ;\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_1392_.increment () ;
      enumerator_1392.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//\n//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N\n//\n//--------------------------------------------------------------------------------------------------\n\nenum {") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_1_") ;
  GALGAS_uint index_2198_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_2198 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), EnumerationOrder::up) ;
    while (enumerator_2198.hasCurrentObject ()) {
      result.appendString (",\n  ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_2198.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 48)).stringValue ()) ;
      index_2198_.increment () ;
      enumerator_2198.gotoNextObject () ;
    }
  }
  result.appendString ("\n} ;\n\n//--------------------------------------------------------------------------------------------------\n//\n//                     S C A N N E R    C L A S S\n//\n//--------------------------------------------------------------------------------------------------\n\n@interface OC_Lexique_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : OC_Lexique {\n//--- Attributes\n") ;
  GALGAS_uint index_2719_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_2719 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap (), EnumerationOrder::up) ;
    while (enumerator_2719.hasCurrentObject ()) {
      result.appendString ("  @protected ") ;
      result.appendString (extensionGetter_cocoaTypeName (enumerator_2719.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 62)).stringValue ()) ;
      result.appendString (" mLexicalAttribute_") ;
      result.appendString (enumerator_2719.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" ;\n") ;
      index_2719_.increment () ;
      enumerator_2719.gotoNextObject () ;
    }
  }
  result.appendString ("\n}\n\n- (NSUInteger) terminalVocabularyCount ;\n\n- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal ;\n\n- (BOOL) internalParseLexicalTokenForLexicalColoring ;\n\n- (void) parseLexicalTokenForLexicalColoring ;\n\n- (NSUInteger) styleCount ;\n\n- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex ;\n\n- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex ;\n\n- (NSArray *) indexingTitles ; // Array of NSString\n\n- (BOOL) isTemplateLexique ;\n\n- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex ;\n\n@end\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates cocoaImplementationZone2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaImplementationZone_32_ (Compiler * inCompiler,
                                                                                          const GALGAS_string & in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME,
                                                                                          const GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                          const GALGAS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                          const GALGAS_lexicalMessageMap & /* in_LEXICAL_5F_MESSAGE_5F_MAP */,
                                                                                          const GALGAS_terminalList & /* in_TERMINAL_5F_LIST */,
                                                                                          const GALGAS_stringset & /* in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES */,
                                                                                          const GALGAS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                          const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                          const GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                          const GALGAS_indexingListAST & in_INDEXING_5F_LIST,
                                                                                          const GALGAS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST,
                                                                                          const GALGAS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n#import \"") ;
  result.appendString (in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME.stringValue ()) ;
  result.appendString (".h\"\n#import \"PMDebug.h\"\n\n//--------------------------------------------------------------------------------------------------\n\n@implementation OC_Lexique_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//\n//                           Template Replacements\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 15)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("static NSArray * kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 16)).stringValue ()) ;
    result.appendString (" ; // Of NSString \n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//\n//                           Template Delimiters\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::greaterThan, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 25)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("static NSArray * kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 26)).stringValue ()) ;
    result.appendString (" ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n- (instancetype) init {\n  self = [super init] ;\n  if (self) {\n    noteObjectAllocation (self) ;\n") ;
  GALGAS_uint index_1321_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_1321 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_1321.hasCurrentObject ()) {
      result.appendString ("    mLexicalAttribute_") ;
      result.appendString (enumerator_1321.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (extensionGetter_cocoaInitializationCode (enumerator_1321.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 36)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_1321_.increment () ;
      enumerator_1321.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n") ;
  const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::greaterThan, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 39)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.appendString ("  if (nil == kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 40)).stringValue ()) ;
    result.appendString (") {\n    kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 41)).stringValue ()) ;
    result.appendString (" = [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_1811_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().isValid ()) {
      cEnumerator_templateDelimitorList enumerator_1811 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList (), EnumerationOrder::up) ;
      while (enumerator_1811.hasCurrentObject ()) {
        result.appendString ("      [[OC_GGS_TemplateDelimiter alloc] initWithStartString:@") ;
        result.appendString (enumerator_1811.current_mStartString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 43)).stringValue ()) ;
        result.appendString (" endString:") ;
        const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_1811.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 44)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        switch (test_3) {
        case kBoolTrue : {
          result.appendString ("nil") ;
          } break ;
        case kBoolFalse : {
          result.appendString ("@") ;
          result.appendString (enumerator_1811.current_mEndString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 47)).stringValue ()) ;
          } break ;
        default :
          break ;
        }
        result.appendString (" discardStartString:") ;
        result.appendString (enumerator_1811.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 50)).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 50)).stringValue ()) ;
        result.appendString ("],\n") ;
        index_1811_.increment () ;
        enumerator_1811.gotoNextObject () ;
      }
    }
    result.appendString ("      nil\n    ] ;\n  }\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 57)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_4) {
  case kBoolTrue : {
    result.appendString ("  if (nil == kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 58)).stringValue ()) ;
    result.appendString (") {\n\n    kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 59)).stringValue ()) ;
    result.appendString (" = [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_2576_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      cEnumerator_templateReplacementListAST enumerator_2576 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_2576.hasCurrentObject ()) {
        result.appendString ("      @") ;
        result.appendString (enumerator_2576.current_mMatchString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 61)).stringValue ()) ;
        result.appendString (", ") ;
        index_2576_.increment () ;
        enumerator_2576.gotoNextObject () ;
      }
    }
    result.appendString ("      nil\n    ] ;\n  }\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("  return self ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n- (void) dealloc {\n  noteObjectDeallocation (self) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//                 I N D E X I N G    T I T L E S\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSArray *) indexingTitles { // Array of NSString\n") ;
  const enumGalgasBool test_5 = GALGAS_bool (ComparisonKind::greaterThan, in_INDEXING_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 84)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_5) {
  case kBoolTrue : {
    result.appendString ("  return [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_3317_ (0) ;
    if (in_INDEXING_5F_LIST.isValid ()) {
      cEnumerator_indexingListAST enumerator_3317 (in_INDEXING_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_3317.hasCurrentObject ()) {
        result.appendString ("    @") ;
        result.appendString (enumerator_3317.current_mIndexComment (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 88)).stringValue ()) ;
        result.appendString (",\n") ;
        index_3317_.increment () ;
        enumerator_3317.gotoNextObject () ;
      }
    }
    result.appendString ("    NULL\n  ] ;\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("\n  return [NSArray array] ;\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n//\n//            Terminal Symbols as end of script in template mark\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 105)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_6) {
  case kBoolTrue : {
    GALGAS_uint index_4116_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
      cEnumerator_terminalList enumerator_4116 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), EnumerationOrder::up) ;
      const bool nonEmpty_enumerator_4116 = enumerator_4116.hasCurrentObject () ;
      if (nonEmpty_enumerator_4116) {
        result.appendString ("static const BOOL kEndOfScriptInTemplateArray_") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 107)).stringValue ()) ;
        result.appendString (" [") ;
        result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 107)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 107)).stringValue ()) ;
        result.appendString ("] = {\n") ;
      }
      while (enumerator_4116.hasCurrentObject ()) {
        result.appendString ("  ") ;
        result.appendString (enumerator_4116.current_isEndOfTemplateMark (HERE).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 108)).stringValue ()) ;
        result.appendString (" /* ") ;
        result.appendString (enumerator_4116.current_mTerminalName (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" */") ;
        if (enumerator_4116.hasNextObject ()) {
          result.appendString (",\n") ;
        }
        index_4116_.increment () ;
        enumerator_4116.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_4116) {
        result.appendString ("\n} ;\n") ;
      }
    }
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n\n") ;
  GALGAS_uint index_4409_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalTokenListMap ().isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_4409 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalTokenListMap (), EnumerationOrder::up) ;
    while (enumerator_4409.hasCurrentObject ()) {
      const enumGalgasBool test_7 = enumerator_4409.current_mShouldBeGenerated (HERE).boolEnum () ;
      switch (test_7) {
      case kBoolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//             Key words table '") ;
        result.appendString (enumerator_4409.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("'      \n//\n//--------------------------------------------------------------------------------------------------\n\nstatic const C_cocoa_lexique_table_entry ktable_for_") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 123)).stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_4409.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" [") ;
        result.appendString (enumerator_4409.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 123)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 123)).stringValue ()) ;
        result.appendString ("] = {\n") ;
        GALGAS_uint index_5051_ (0) ;
        if (enumerator_4409.current_mTokenSortedList (HERE).isValid ()) {
          cEnumerator_tokenSortedlist enumerator_5051 (enumerator_4409.current_mTokenSortedList (HERE), EnumerationOrder::up) ;
          while (enumerator_5051.hasCurrentObject ()) {
            result.appendString ("  {") ;
            result.appendString (enumerator_5051.current_mName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 125)).stringValue ()) ;
            result.appendString (", ") ;
            result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
            result.appendString ("_1_") ;
            result.appendString (enumerator_5051.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 125)).stringValue ()) ;
            result.appendString ("}") ;
            if (enumerator_5051.hasNextObject ()) {
              result.appendString (",\n") ;
            }
            index_5051_.increment () ;
            enumerator_5051.gotoNextObject () ;
          }
        }
        result.appendString ("\n} ;\n\nstatic NSInteger search_into_") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 129)).stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_4409.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (NSString * inSearchedString) {\n  return searchStringInTable (inSearchedString, ktable_for_") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 130)).stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_4409.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (", ") ;
        result.appendString (enumerator_4409.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 130)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 130)).stringValue ()) ;
        result.appendString (") ;\n}\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_4409_.increment () ;
      enumerator_4409.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//\n//               I N T E R N A L    P A R S E    L E X I C A L    T O K E N\n//\n//--------------------------------------------------------------------------------------------------\n\n- (BOOL) internalParseLexicalTokenForLexicalColoring {\n  BOOL scanningOk = YES ;\n") ;
  GALGAS_uint index_6023_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_6023 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_6023.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (extensionGetter_cocoaResetPrefix (enumerator_6023.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 144)).stringValue ()) ;
      result.appendString ("mLexicalAttribute_") ;
      result.appendString (enumerator_6023.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (extensionGetter_cocoaReset (enumerator_6023.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 144)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_6023_.increment () ;
      enumerator_6023.gotoNextObject () ;
    }
  }
  result.appendString ("  mTokenStartLocation = mCurrentLocation ;\n") ;
  if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).isValid ()) {
    result.incIndentation (int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).uintValue ())) ;
  }
  GALGAS_uint index_6241_ (0) ;
  if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
    cEnumerator_lexicalRuleListAST enumerator_6241 (in_LEXICAL_5F_RULE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6241.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_generateObjcCocoaCode ((const cPtr_abstractLexicalRuleAST *) enumerator_6241.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_CLASS_5F_NAME, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 150)).stringValue ()) ;
      index_6241_.increment () ;
      enumerator_6241.gotoNextObject () ;
    }
  }
  if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).isValid ()) {
    result.incIndentation (- int32_t (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).uintValue ())) ;
  }
  result.appendString ("  if ([self testForInputChar:'\\0']) { // End of source text \?\n    mTokenCode = ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_1_ ; // Empty string code\n  }else{ // Unknown input character\n    scanningOk = NO ;\n    [self advance] ;\n  }\n  return scanningOk ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//               P A R S E    L E X I C A L    T O K E N\n//\n//--------------------------------------------------------------------------------------------------\n\n- (void) parseLexicalTokenForLexicalColoring {\n  BOOL scanningOk = YES ;\n  mTokenCode = 0 ;\n  while ((mTokenCode == 0) && (mCurrentChar != '\\0')) {\n") ;
  const enumGalgasBool test_8 = GALGAS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 173)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_8) {
  case kBoolTrue : {
    result.appendString ("    if ((mMatchedTemplateDelimiterIndex >= 0) && ([[kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 174)).stringValue ()) ;
    result.appendString (" objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] startString].length > 0)) {\n      const BOOL foundEndDelimitor = [self testForInputString:[[kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 175)).stringValue ()) ;
    result.appendString (" objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] endString] advance:YES] ;\n      if (foundEndDelimitor) {\n        mMatchedTemplateDelimiterIndex = -1 ;\n      }\n    }\n    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar != '\\0')) {\n      ") ;
    const enumGalgasBool test_9 = GALGAS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 181)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    switch (test_9) {
    case kBoolTrue : {
      result.appendString ("\n      [self searchForReplacementPattern:kTemplateReplacementArray_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 182)).stringValue ()) ;
      result.appendString ("] ;\n      ") ;
      } break ;
    case kBoolFalse : {
      } break ;
    default :
      break ;
    }
    result.appendString ("\n      mMatchedTemplateDelimiterIndex = [self findTemplateDelimiterIndex:kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 184)).stringValue ()) ;
    result.appendString ("] ;\n      if (mMatchedTemplateDelimiterIndex < 0) {\n        [self advance] ;\n        mTokenCode = -2 ;\n      }\n    }\n    if ((mMatchedTemplateDelimiterIndex >= 0) && (mTokenCode == 0) && (mCurrentChar != '\\0') && scanningOk) {\n      scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;\n    }\n    if ((mTokenCode > 0) && kEndOfScriptInTemplateArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 193)).stringValue ()) ;
    result.appendString (" [mTokenCode - 1]) {\n      mMatchedTemplateDelimiterIndex = -1 ;\n    }") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("    scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("\n  }\n//--- Error \?\n  if (! scanningOk) {\n    mTokenCode = -1 ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//                   T E R M I N A L    C O U N T\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSUInteger) terminalVocabularyCount {\n  return ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 211)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 211)).stringValue ()) ;
  result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//                     S T Y L E   C O U N T\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSUInteger) styleCount {\n  return ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 221)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 221)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 221)).stringValue ()) ;
  result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//                I S    T E M P L A T E    L E X I Q U E\n//\n//--------------------------------------------------------------------------------------------------\n\n- (BOOL) isTemplateLexique {\n  return ") ;
  result.appendString (GALGAS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 231)).objectCompare (GALGAS_uint (uint32_t (0U)))).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 231)).stringValue ()) ;
  result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//   S T Y L E   I N D E X    F O R    T E R M I N A L\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal {\n  static const NSUInteger kTerminalSymbolStyles [") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 241)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 241)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 241)).stringValue ()) ;
  result.appendString ("] = {0") ;
  GALGAS_uint index_10280_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_10280 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), EnumerationOrder::up) ;
    while (enumerator_10280.hasCurrentObject ()) {
      result.appendString (",\n    ") ;
      result.appendString (enumerator_10280.current_mStyleIndex (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 243)).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_10280.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 243)).stringValue ()) ;
      result.appendString (" */") ;
      index_10280_.increment () ;
      enumerator_10280.gotoNextObject () ;
    }
  }
  result.appendString ("\n  } ;\n  return kTerminalSymbolStyles [inTerminal] ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//    A T O M I C    S E L E C T I O N   F O R    T E R M I N A L\n//\n//--------------------------------------------------------------------------------------------------\n\n- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex {\n  static const BOOL kTerminalAtomicSelection [") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 255)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 255)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 255)).stringValue ()) ;
  result.appendString ("] = {NO") ;
  GALGAS_uint index_11065_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_11065 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), EnumerationOrder::up) ;
    while (enumerator_11065.hasCurrentObject ()) {
      result.appendString (",\n    ") ;
      result.appendString (enumerator_11065.current_atomicSelection (HERE).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 257)).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_11065.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 257)).stringValue ()) ;
      result.appendString (" */") ;
      index_11065_.increment () ;
      enumerator_11065.gotoNextObject () ;
    }
  }
  result.appendString ("\n  } ;\n  return kTerminalAtomicSelection [inTokenIndex] ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//             S T Y L E   N A M E    F O R    I N D E X\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex {\n  NSString * result = nil ;\n  if ((inIndex >= 0) && (inIndex < ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 270)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 270)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 270)).stringValue ()) ;
  result.appendString (")) {\n    NSString * kStyleArray [") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 271)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 271)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 271)).stringValue ()) ;
  result.appendString ("] = {\n      @\"Default Style\"") ;
  GALGAS_uint index_11837_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_11837 (in_LEXICAL_5F_STYLE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11837.hasCurrentObject ()) {
      result.appendString (",\n      @") ;
      result.appendString (enumerator_11837.current_mComment (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 274)).stringValue ()) ;
      index_11837_.increment () ;
      enumerator_11837.gotoNextObject () ;
    }
  }
  result.appendString ("\n    } ;\n    result = kStyleArray [inIndex] ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//         S T Y L E   I D E N T I F I E R    F O R    I N D E X\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex {\n  NSString * result = nil ;\n  if ((inIndex >= 0) && (inIndex < ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 289)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 289)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 289)).stringValue ()) ;
  result.appendString (")) {\n    NSString * kStyleArray [") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 290)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 290)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 290)).stringValue ()) ;
  result.appendString ("] = {\n      @\"") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"") ;
  GALGAS_uint index_12590_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_12590 (in_LEXICAL_5F_STYLE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12590.hasCurrentObject ()) {
      result.appendString (",\n      @\"") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_12590.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\"") ;
      index_12590_.increment () ;
      enumerator_12590.gotoNextObject () ;
    }
  }
  result.appendString ("\n    } ;\n    result = kStyleArray [inIndex] ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//         L E X I Q U E   I D E N T I F I E R\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) lexiqueIdentifier {\n  return @\"") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n@end\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates swiftCocoaImplementationZone2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_swiftCocoaImplementationZone_32_ (Compiler * inCompiler,
                                                                                               const GALGAS_string & /* in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME */,
                                                                                               const GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                               const GALGAS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                               const GALGAS_lexicalMessageMap & /* in_LEXICAL_5F_MESSAGE_5F_MAP */,
                                                                                               const GALGAS_terminalList & /* in_TERMINAL_5F_LIST */,
                                                                                               const GALGAS_stringset & /* in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES */,
                                                                                               const GALGAS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                               const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                               const GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                               const GALGAS_indexingListAST & in_INDEXING_5F_LIST,
                                                                                               const GALGAS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST,
                                                                                               const GALGAS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//   LEXIQUE ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nfileprivate let gFont_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" = EBGenericPreferenceProperty <NSFont> (\n  defaultValue: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular),\n  prefKey: \"FontFor_\" + ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexiqueIdentifier ()\n)\n\n//--------------------------------------------------------------------------------------------------\n\nfileprivate let gLineHeight_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" = EBGenericPreferenceProperty <Int> (\n  defaultValue: 12,\n  prefKey: \"LineHeightFor_\" + ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexiqueIdentifier ()\n)\n\n//--------------------------------------------------------------------------------------------------\n\nfileprivate let gColors_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : [EBGenericPreferenceProperty <NSColor>] = [\n  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: \"ColorFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"),\n") ;
  GALGAS_uint index_1117_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_1117 (in_LEXICAL_5F_STYLE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1117.hasCurrentObject ()) {
      result.appendString ("  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: \"ColorFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_1117.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\"),\n") ;
      index_1117_.increment () ;
      enumerator_1117.gotoNextObject () ;
    }
  }
  result.appendString ("  EBGenericPreferenceProperty <NSColor> (defaultValue: .red, prefKey: \"ColorFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexical_error\"),\n  EBGenericPreferenceProperty <NSColor> (defaultValue: .gray, prefKey: \"ColorFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_template\")\n]\n\n//--------------------------------------------------------------------------------------------------\n\nfileprivate let gBoldStyle_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : [EBGenericPreferenceProperty <Bool>] = [\n  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: \"BoldFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"),\n") ;
  GALGAS_uint index_1833_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_1833 (in_LEXICAL_5F_STYLE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1833.hasCurrentObject ()) {
      result.appendString ("  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: \"BoldFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_1833.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\"),\n") ;
      index_1833_.increment () ;
      enumerator_1833.gotoNextObject () ;
    }
  }
  result.appendString ("  EBGenericPreferenceProperty <Bool> (defaultValue: true, prefKey: \"BoldFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexical_error\"),\n  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: \"BoldFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_template\")\n]\n\n//--------------------------------------------------------------------------------------------------\n\nfileprivate let gItalicStyle_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : [EBGenericPreferenceProperty <Bool>] = [\n  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: \"ItalicFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"),\n") ;
  GALGAS_uint index_2540_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_2540 (in_LEXICAL_5F_STYLE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2540.hasCurrentObject ()) {
      result.appendString ("  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: \"ItalicFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_2540.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\"),\n") ;
      index_2540_.increment () ;
      enumerator_2540.gotoNextObject () ;
    }
  }
  result.appendString ("  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: \"ItalicFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexical_error\"),\n  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: \"ItalicFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_template\")\n]\n\n//--------------------------------------------------------------------------------------------------\n//                           Template Replacements\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 60)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("fileprivate let kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 61)).stringValue ()) ;
    result.appendString (" : [String] = [\n") ;
    GALGAS_uint index_3411_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      cEnumerator_templateReplacementListAST enumerator_3411 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_3411.hasCurrentObject ()) {
        result.appendString ("  ") ;
        result.appendString (enumerator_3411.current_mMatchString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 64)).stringValue ()) ;
        if (enumerator_3411.hasNextObject ()) {
          result.appendString (",\n") ;
        }
        index_3411_.increment () ;
        enumerator_3411.gotoNextObject () ;
      }
    }
    result.appendString ("\n]\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//                           Template Delimiters\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::greaterThan, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 74)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("fileprivate let kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 75)).stringValue ()) ;
    result.appendString (" : [SWIFT_TemplateDelimiter] = [\n") ;
    GALGAS_uint index_4057_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().isValid ()) {
      cEnumerator_templateDelimitorList enumerator_4057 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList (), EnumerationOrder::up) ;
      while (enumerator_4057.hasCurrentObject ()) {
        result.appendString ("  SWIFT_TemplateDelimiter (startString: ") ;
        result.appendString (enumerator_4057.current_mStartString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 78)).stringValue ()) ;
        result.appendString (", endString: ") ;
        const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_4057.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 79)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        switch (test_2) {
        case kBoolTrue : {
          result.appendString ("nil") ;
          } break ;
        case kBoolFalse : {
          result.appendString (enumerator_4057.current_mEndString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 82)).stringValue ()) ;
          } break ;
        default :
          break ;
        }
        result.appendString (", discardStartString: ") ;
        result.appendString (enumerator_4057.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 85)).getter_cString (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 85)).stringValue ()) ;
        result.appendString (")") ;
        if (enumerator_4057.hasNextObject ()) {
          result.appendString (",\n") ;
        }
        index_4057_.increment () ;
        enumerator_4057.gotoNextObject () ;
      }
    }
    result.appendString ("\n]\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N\n//--------------------------------------------------------------------------------------------------\n\nlet ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_1_ : UInt16 = 0\n") ;
  GALGAS_uint index_4808_idx (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_4808 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), EnumerationOrder::up) ;
    while (enumerator_4808.hasCurrentObject ()) {
      result.appendString ("let ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_4808.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 99)).stringValue ()) ;
      result.appendString (" : UInt16 = ") ;
      result.appendString (index_4808_idx.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 99)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 99)).stringValue ()) ;
      result.appendString ("\n") ;
      index_4808_idx.increment () ;
      enumerator_4808.gotoNextObject () ;
    }
  }
  result.appendString ("let ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_ERROR : UInt16 = ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 101)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 101)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 101)).stringValue ()) ;
  result.appendString ("\nlet ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_TEMPLATE : UInt16 = ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 102)).add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 102)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 102)).stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\nfunc ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexiqueIdentifier () -> String {\n  return \"") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"\n}\n\n//--------------------------------------------------------------------------------------------------\n\nfunc ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_styleNameFor (styleIndex inIndex : UInt8) -> String {\n  let kStyleArray : [String] = [\n    \"Default Style\", // 0\n") ;
  GALGAS_uint index_5636_idx (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_5636 (in_LEXICAL_5F_STYLE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5636.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_5636.current_mComment (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 117)).stringValue ()) ;
      result.appendString (", // ") ;
      result.appendString (index_5636_idx.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 117)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 117)).stringValue ()) ;
      result.appendString ("\n") ;
      index_5636_idx.increment () ;
      enumerator_5636.gotoNextObject () ;
    }
  }
  result.appendString ("    \"Lexical error\", // ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 119)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 119)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 119)).stringValue ()) ;
  result.appendString ("\n    \"Template\" // ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 120)).add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 120)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 120)).stringValue ()) ;
  result.appendString ("\n  ]\n  return kStyleArray [Int (inIndex)]\n}\n\n//--------------------------------------------------------------------------------------------------\n\nfunc ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_styleIdentifierFor (styleIndex inIndex : UInt8) -> String {\n  let kStyleArray : [String] = [\n    \"") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\", // 0\n") ;
  GALGAS_uint index_6203_idx (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_6203 (in_LEXICAL_5F_STYLE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_6203.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 131)).add_operation (enumerator_6203.current_mName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 131)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 131)).stringValue ()) ;
      result.appendString (", // ") ;
      result.appendString (index_6203_idx.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 131)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 131)).stringValue ()) ;
      result.appendString ("\n") ;
      index_6203_idx.increment () ;
      enumerator_6203.gotoNextObject () ;
    }
  }
  result.appendString ("    ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.add_operation (GALGAS_string (".ERROR"), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 133)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 133)).stringValue ()) ;
  result.appendString (", // ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 133)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 133)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 133)).stringValue ()) ;
  result.appendString ("\n    ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.add_operation (GALGAS_string (".TEMPLATE"), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 134)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 134)).stringValue ()) ;
  result.appendString (" // ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 134)).add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 134)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 134)).stringValue ()) ;
  result.appendString ("\n  ]\n  return kStyleArray [Int (inIndex)]\n}\n\n//--------------------------------------------------------------------------------------------------\n//                     S C A N N E R    C L A S S\n//--------------------------------------------------------------------------------------------------\n\nclass SWIFT_Lexique_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : SWIFT_Lexique {\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GALGAS_uint index_7133_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_7133 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap (), EnumerationOrder::up) ;
    while (enumerator_7133.hasCurrentObject ()) {
      result.appendString ("  private var mLexicalAttribute_") ;
      result.appendString (enumerator_7133.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (extensionGetter_swiftTypeName (enumerator_7133.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 149)).stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (extensionGetter_swiftInitializationCode (enumerator_7133.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 149)).stringValue ()) ;
      result.appendString ("\n") ;
      index_7133_.increment () ;
      enumerator_7133.gotoNextObject () ;
    }
  }
  result.appendString ("\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func lexiqueIdentifier () -> String {\n    return ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexiqueIdentifier ()\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func isTemplateLexique () -> Bool {\n    return ") ;
  result.appendString (GALGAS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 161)).objectCompare (GALGAS_uint (uint32_t (0U)))).getter_cString (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 161)).stringValue ()) ;
  result.appendString ("\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func terminalVocabularyCount () -> Int {\n    return ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 167)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 167)).stringValue ()) ;
  result.appendString ("\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var font : EBGenericPreferenceProperty <NSFont> { return gFont_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var lineHeight : EBGenericPreferenceProperty <Int> { return gLineHeight_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func color (forStyle inStyleIndex : UInt8) -> EBGenericPreferenceProperty <NSColor> {\n    return gColors_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" [Int (inStyleIndex)]\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func bold (forStyle inStyleIndex : UInt8) -> EBGenericPreferenceProperty <Bool> {\n    return gBoldStyle_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" [Int (inStyleIndex)]\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func italic (forStyle inStyleIndex : UInt8) -> EBGenericPreferenceProperty <Bool> {\n    return gItalicStyle_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" [Int (inStyleIndex)]\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func styleIndexFor (token inTokenIndex : UInt16) -> UInt8 {\n    let kTerminalSymbolStyles : [UInt8] = [\n      0, // Default\n") ;
  GALGAS_uint index_9551_idx (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_9551 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), EnumerationOrder::up) ;
    while (enumerator_9551.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_9551.current_mStyleIndex (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 203)).stringValue ()) ;
      result.appendString (", // ") ;
      result.appendString (index_9551_idx.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 203)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 203)).stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_9551.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 203)).stringValue ()) ;
      result.appendString ("\n") ;
      index_9551_idx.increment () ;
      enumerator_9551.gotoNextObject () ;
    }
  }
  result.appendString ("      ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 205)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 205)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 205)).stringValue ()) ;
  result.appendString (", // ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 205)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 205)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 205)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_ERROR\n      ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 206)).add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 206)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 206)).stringValue ()) ;
  result.appendString ("  // ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 206)).add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 206)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 206)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_TEMPLATE\n    ]\n    return kTerminalSymbolStyles [Int (inTokenIndex)]\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func atomicSelectionFor (token inTokenIndex : UInt16) -> Bool {\n    let kTerminalAtomicSelection : [Bool] = [\n      false, // Default\n") ;
  GALGAS_uint index_10399_idx (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_10399 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), EnumerationOrder::up) ;
    while (enumerator_10399.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_10399.current_atomicSelection (HERE).getter_cString (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 218)).stringValue ()) ;
      result.appendString (", // ") ;
      result.appendString (index_10399_idx.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 218)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 218)).stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_10399.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 218)).stringValue ()) ;
      result.appendString ("\n") ;
      index_10399_idx.increment () ;
      enumerator_10399.gotoNextObject () ;
    }
  }
  result.appendString ("      false, // ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 220)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 220)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 220)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_ERROR\n      false  // ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 221)).add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 221)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 221)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_TEMPLATE\n    ]\n    return kTerminalAtomicSelection [Int (inTokenIndex)]\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func indexingTitles () -> [String] {\n") ;
  const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::greaterThan, in_INDEXING_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 230)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_3) {
  case kBoolTrue : {
    result.appendString ("    return [\n") ;
    GALGAS_uint index_11105_ (0) ;
    if (in_INDEXING_5F_LIST.isValid ()) {
      cEnumerator_indexingListAST enumerator_11105 (in_INDEXING_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_11105.hasCurrentObject ()) {
        result.appendString ("      ") ;
        result.appendString (enumerator_11105.current_mIndexComment (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 234)).stringValue ()) ;
        result.appendString (" /* ") ;
        result.appendString (enumerator_11105.current_mIndexName (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" */") ;
        if (enumerator_11105.hasNextObject ()) {
          result.appendString (",\n") ;
        }
        index_11105_.increment () ;
        enumerator_11105.gotoNextObject () ;
      }
    }
    result.appendString ("\n    ]\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("\n    return []\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  S T Y L E S\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func styleCount () -> UInt8 {\n    return ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 251)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 251)).stringValue ()) ;
  result.appendString ("\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func styleNameFor (styleIndex inIndex : UInt8) -> String {\n    return ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_styleNameFor (styleIndex: inIndex)\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func styleIdentifierFor (styleIndex inIndex : UInt8) -> String {\n    return ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_styleIdentifierFor (styleIndex: inIndex)\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Lexical analysis\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func parseLexicalTokenForLexicalColoring () -> SWIFT_Token {\n    var loop = true\n    var scanningOk = true\n") ;
  GALGAS_uint index_12561_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_12561 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_12561.hasCurrentObject ()) {
      result.appendString ("    self.mLexicalAttribute_") ;
      result.appendString (enumerator_12561.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (extensionGetter_swiftInitializationCode (enumerator_12561.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 274)).stringValue ()) ;
      result.appendString ("\n") ;
      index_12561_.increment () ;
      enumerator_12561.gotoNextObject () ;
    }
  }
  result.appendString ("    var tokenCode : UInt16 = 0\n    let startLocation = self.currentLocation\n") ;
  if (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 279)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 279)).isValid ()) {
    result.incIndentation (int32_t (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 279)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 279)).uintValue ())) ;
  }
  GALGAS_uint index_12798_ (0) ;
  if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
    cEnumerator_lexicalRuleListAST enumerator_12798 (in_LEXICAL_5F_RULE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12798.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_generateSwiftCocoaCode ((const cPtr_abstractLexicalRuleAST *) enumerator_12798.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_CLASS_5F_NAME, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 281)).stringValue ()) ;
      index_12798_.increment () ;
      enumerator_12798.gotoNextObject () ;
    }
  }
  if (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 279)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 279)).isValid ()) {
    result.incIndentation (- int32_t (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 279)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 279)).uintValue ())) ;
  }
  result.appendString ("if self.testForInputChar (0) { // End of source text \?\n      tokenCode = ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_1_ ; // Empty string code\n    }else{ // Unknown input character\n      tokenCode = ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_TEMPLATE\n      self.advance ()\n    }\n    return SWIFT_Token (\n      range: NSRange (location: startLocation, length: self.currentLocation - startLocation),\n      tokenCode: tokenCode,\n      templateDelimiterIndex: self.mEndTemplateDelimiterIndex\n    )\n  }\n  \n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n/* - (instancetype) init {\n  self = [super init] ;\n  if (self) {\n    noteObjectAllocation (self) ;\n") ;
  GALGAS_uint index_13744_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_13744 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_13744.hasCurrentObject ()) {
      result.appendString ("    mLexicalAttribute_") ;
      result.appendString (enumerator_13744.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (extensionGetter_cocoaInitializationCode (enumerator_13744.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 309)).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_13744_.increment () ;
      enumerator_13744.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n") ;
  const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::greaterThan, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 312)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_4) {
  case kBoolTrue : {
    result.appendString ("  if (nil == kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 313)).stringValue ()) ;
    result.appendString (") {\n    kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 314)).stringValue ()) ;
    result.appendString (" = [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_14234_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().isValid ()) {
      cEnumerator_templateDelimitorList enumerator_14234 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList (), EnumerationOrder::up) ;
      while (enumerator_14234.hasCurrentObject ()) {
        result.appendString ("      [[OC_GGS_TemplateDelimiter alloc] initWithStartString:@") ;
        result.appendString (enumerator_14234.current_mStartString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 316)).stringValue ()) ;
        result.appendString (" endString:") ;
        const enumGalgasBool test_5 = GALGAS_bool (ComparisonKind::equal, enumerator_14234.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 317)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        switch (test_5) {
        case kBoolTrue : {
          result.appendString ("nil") ;
          } break ;
        case kBoolFalse : {
          result.appendString ("@") ;
          result.appendString (enumerator_14234.current_mEndString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 320)).stringValue ()) ;
          } break ;
        default :
          break ;
        }
        result.appendString (" discardStartString:") ;
        result.appendString (enumerator_14234.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 323)).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 323)).stringValue ()) ;
        result.appendString ("],\n") ;
        index_14234_.increment () ;
        enumerator_14234.gotoNextObject () ;
      }
    }
    result.appendString ("      nil\n    ] ;\n  }\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 330)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_6) {
  case kBoolTrue : {
    result.appendString ("  if (nil == kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 331)).stringValue ()) ;
    result.appendString (") {\n\n    kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 332)).stringValue ()) ;
    result.appendString (" = [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_14999_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      cEnumerator_templateReplacementListAST enumerator_14999 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_14999.hasCurrentObject ()) {
        result.appendString ("      @") ;
        result.appendString (enumerator_14999.current_mMatchString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 334)).stringValue ()) ;
        result.appendString (", ") ;
        index_14999_.increment () ;
        enumerator_14999.gotoNextObject () ;
      }
    }
    result.appendString ("      nil\n    ] ;\n  }\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("  return self ;\n} */\n\n//--------------------------------------------------------------------------------------------------\n//\n//            Terminal Symbols as end of script in template mark\n//\n//--------------------------------------------------------------------------------------------------\n\n/*\n") ;
  const enumGalgasBool test_7 = GALGAS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 350)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_7) {
  case kBoolTrue : {
    GALGAS_uint index_15809_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
      cEnumerator_terminalList enumerator_15809 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), EnumerationOrder::up) ;
      const bool nonEmpty_enumerator_15809 = enumerator_15809.hasCurrentObject () ;
      if (nonEmpty_enumerator_15809) {
        result.appendString ("static const BOOL kEndOfScriptInTemplateArray_") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 352)).stringValue ()) ;
        result.appendString (" [") ;
        result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 352)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 352)).stringValue ()) ;
        result.appendString ("] = {\n") ;
      }
      while (enumerator_15809.hasCurrentObject ()) {
        result.appendString ("  ") ;
        result.appendString (enumerator_15809.current_isEndOfTemplateMark (HERE).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 353)).stringValue ()) ;
        result.appendString (" /* ") ;
        result.appendString (enumerator_15809.current_mTerminalName (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" */") ;
        if (enumerator_15809.hasNextObject ()) {
          result.appendString (",\n") ;
        }
        index_15809_.increment () ;
        enumerator_15809.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_15809) {
        result.appendString ("\n} ;\n") ;
      }
    }
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n*/\n\n\n") ;
  GALGAS_uint index_16105_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalTokenListMap ().isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_16105 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalTokenListMap (), EnumerationOrder::up) ;
    while (enumerator_16105.hasCurrentObject ()) {
      const enumGalgasBool test_8 = enumerator_16105.current_mShouldBeGenerated (HERE).boolEnum () ;
      switch (test_8) {
      case kBoolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//             Key words table '") ;
        result.appendString (enumerator_16105.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("'      \n//\n//--------------------------------------------------------------------------------------------------\n\nfileprivate func search_into_") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 369)).stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_16105.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (_ inSearchedString : String) -> UInt16 {\n  let dictionary : [String : UInt16] = [\n") ;
        GALGAS_uint index_16751_ (0) ;
        if (enumerator_16105.current_mTokenSortedList (HERE).isValid ()) {
          cEnumerator_tokenSortedlist enumerator_16751 (enumerator_16105.current_mTokenSortedList (HERE), EnumerationOrder::up) ;
          while (enumerator_16751.hasCurrentObject ()) {
            result.appendString ("    ") ;
            result.appendString (enumerator_16751.current_mName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 372)).stringValue ()) ;
            result.appendString (" : ") ;
            result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
            result.appendString ("_1_") ;
            result.appendString (enumerator_16751.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 372)).stringValue ()) ;
            if (enumerator_16751.hasNextObject ()) {
              result.appendString (",\n") ;
            }
            index_16751_.increment () ;
            enumerator_16751.gotoNextObject () ;
          }
        }
        result.appendString ("\n  ]\n  return dictionary [inSearchedString, default: ") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
        result.appendString ("_1_]\n}\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_16105_.increment () ;
      enumerator_16105.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n\n\n//--------------------------------------------------------------------------------------------------\n//\n//               P A R S E    L E X I C A L    T O K E N\n//\n//--------------------------------------------------------------------------------------------------\n\n/* - (void) parseLexicalTokenForLexicalColoring {\n  BOOL scanningOk = YES ;\n  mTokenCode = 0 ;\n  while ((mTokenCode == 0) && (mCurrentChar != '\\0')) {\n") ;
  const enumGalgasBool test_9 = GALGAS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 395)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_9) {
  case kBoolTrue : {
    result.appendString ("    if ((mMatchedTemplateDelimiterIndex >= 0) && ([[kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 396)).stringValue ()) ;
    result.appendString (" objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] startString].length > 0)) {\n      const BOOL foundEndDelimitor = [self testForInputString:[[kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 397)).stringValue ()) ;
    result.appendString (" objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] endString] advance:YES] ;\n      if (foundEndDelimitor) {\n        mMatchedTemplateDelimiterIndex = -1 ;\n      }\n    }\n    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar != '\\0')) {\n      ") ;
    const enumGalgasBool test_10 = GALGAS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 403)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    switch (test_10) {
    case kBoolTrue : {
      result.appendString ("\n      [self searchForReplacementPattern:kTemplateReplacementArray_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 404)).stringValue ()) ;
      result.appendString ("] ;\n      ") ;
      } break ;
    case kBoolFalse : {
      } break ;
    default :
      break ;
    }
    result.appendString ("\n      mMatchedTemplateDelimiterIndex = [self findTemplateDelimiterIndex:kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 406)).stringValue ()) ;
    result.appendString ("] ;\n      if (mMatchedTemplateDelimiterIndex < 0) {\n        [self advance] ;\n        mTokenCode = -2 ;\n      }\n    }\n    if ((mMatchedTemplateDelimiterIndex >= 0) && (mTokenCode == 0) && (mCurrentChar != '\\0') && scanningOk) {\n      scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;\n    }\n    if ((mTokenCode > 0) && kEndOfScriptInTemplateArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 415)).stringValue ()) ;
    result.appendString (" [mTokenCode - 1]) {\n      mMatchedTemplateDelimiterIndex = -1 ;\n    }") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("    scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("\n  }\n//--- Error \?\n  if (! scanningOk) {\n    mTokenCode = -1 ;\n  }\n}\n\n*/\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@templateLexiqueComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_templateLexiqueComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_templateLexiqueComponentAST temp_0 = this ;
  result_result = GALGAS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 223)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLexiqueComponentAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                       GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                       GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                       GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateLexiqueComponentAST temp_0 = this ;
  const GALGAS_templateLexiqueComponentAST temp_1 = this ;
  GALGAS_lstring var_key_8225 = GALGAS_lstring::init_21__21_ (GALGAS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 235)), temp_1.readProperty_mLexiqueComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_templateLexiqueComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_8225, temp_2, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 236)) ;
  }
  const GALGAS_templateLexiqueComponentAST temp_3 = this ;
  const GALGAS_templateLexiqueComponentAST temp_4 = this ;
  GALGAS_lstring var_superKey_8381 = GALGAS_lstring::init_21__21_ (GALGAS_string ("lexique ").add_operation (temp_3.readProperty_mLexiqueSuperComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 237)), temp_4.readProperty_mLexiqueComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_8225, var_superKey_8381 COMMA_SOURCE_FILE ("template-lexique-component.galgas", 238)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLexiqueComponentAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                 const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                 const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_superLexiqueIsTemplate_9363 ;
  GALGAS_terminalMap var_terminalMap_9396 ;
  GALGAS_indexingListAST var_indexingListAST_9418 ;
  GALGAS_terminalDeclarationListAST var_terminalListAST_9473 ;
  GALGAS_lexicalAttributeListAST var_lexicalAttributeListAST_9499 ;
  GALGAS_lexicalStyleListAST var_lexicalStyleListAST_9533 ;
  GALGAS_lexicalListDeclarationListAST var_lexicalListDeclarationListAST_9563 ;
  const GALGAS_templateLexiqueComponentAST temp_0 = this ;
  ioArgument_ioSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_0.readProperty_mLexiqueSuperComponentName (), var_superLexiqueIsTemplate_9363, var_terminalMap_9396, var_indexingListAST_9418, var_terminalListAST_9473, var_lexicalAttributeListAST_9499, var_lexicalStyleListAST_9533, var_lexicalListDeclarationListAST_9563, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 251)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_superLexiqueIsTemplate_9363.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_templateLexiqueComponentAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLexiqueSuperComponentName ().readProperty_location (), GALGAS_string ("cannot inherit from a template lexique"), fixItArray3  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 263)) ;
    }
  }
  {
  const GALGAS_templateLexiqueComponentAST temp_4 = this ;
  ioArgument_ioSemanticContext.mProperty_mLexiqueComponentMapForSemanticAnalysis.setter_insertKey (temp_4.readProperty_mLexiqueComponentName (), GALGAS_bool (true), var_terminalMap_9396, var_indexingListAST_9418, var_terminalListAST_9473, var_lexicalAttributeListAST_9499, var_lexicalStyleListAST_9533, var_lexicalListDeclarationListAST_9563, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 266)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@templateLexiqueComponentAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_templateLexiqueComponentAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_10807 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 289)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10807, var_nameForUsefulness_10807, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 290)) ;
  }
  GALGAS_terminalDeclarationListAST var_terminalListAST_11244 ;
  GALGAS_lexicalAttributeListAST var_lexicalAttributeListAST_11270 ;
  GALGAS_lexicalStyleListAST var_lexicalStyleListAST_11304 ;
  GALGAS_lexicalListDeclarationListAST var_lexicalListDeclarationListAST_11334 ;
  const GALGAS_templateLexiqueComponentAST temp_1 = this ;
  GALGAS_bool joker_11147 ; // Joker input parameter
  GALGAS_terminalMap joker_11183 ; // Joker input parameter
  GALGAS_indexingListAST joker_11208 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueSuperComponentName (), joker_11147, joker_11183, joker_11208, var_terminalListAST_11244, var_lexicalAttributeListAST_11270, var_lexicalStyleListAST_11304, var_lexicalListDeclarationListAST_11334, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 292)) ;
  GALGAS_lexicalTypeMap var_lexicalTypeMap_11463 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 303)) ;
  GALGAS_lexicalRoutineMap var_lexicalRoutineMap_11601 ;
  {
  routine_buildLexicalRoutineMap_21_ (var_lexicalRoutineMap_11601, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 305)) ;
  }
  GALGAS_lexicalFunctionMap var_lexicalFunctionMap_11720 ;
  {
  routine_buildLexicalFunctionMap_21_ (var_lexicalFunctionMap_11720, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 307)) ;
  }
  GALGAS_stringset var_unicodeTestFunctions_11847 ;
  {
  routine_lexicalUnicodeTestFunctionAnalysis_21_ (var_unicodeTestFunctions_11847, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 309)) ;
  }
  const GALGAS_templateLexiqueComponentAST temp_2 = this ;
  GALGAS_lexiqueAnalysisContext var_lexiqueAnalysisContext_11940 = GALGAS_lexiqueAnalysisContext::init_21__21__21__21__21__21__21__21__21__21__21__21_ (temp_2.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexicalRoutineMap_11601, var_lexicalFunctionMap_11720, GALGAS_lexicalMessageMap::init (inCompiler COMMA_HERE), GALGAS_terminalMap::init (inCompiler COMMA_HERE), GALGAS_terminalList::init (inCompiler COMMA_HERE), GALGAS_lexicalAttributeMap::init (inCompiler COMMA_HERE), GALGAS_lexicalExplicitTokenListMapMap::init (inCompiler COMMA_HERE), GALGAS_stringset::init (inCompiler COMMA_HERE), GALGAS_templateDelimitorList::init (inCompiler COMMA_HERE), GALGAS_styleMap::init (inCompiler COMMA_HERE), var_unicodeTestFunctions_11847, inCompiler COMMA_HERE) ;
  GALGAS_bigint var_styleIndex_12348 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 326)) ;
  cEnumerator_lexicalStyleListAST enumerator_12376 (var_lexicalStyleListAST_11304, EnumerationOrder::up) ;
  while (enumerator_12376.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_11940.mProperty_mStyleMap.setter_insertKey (enumerator_12376.current_mName (HERE), enumerator_12376.current_mComment (HERE), var_styleIndex_12348.getter_uint (inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 328)) ;
    }
    var_styleIndex_12348.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 329)), inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 329)) ;
    enumerator_12376.gotoNextObject () ;
  }
  {
  routine_buildLexicalAttributeMap_3F__3F__26_ (var_lexicalTypeMap_11463, var_lexicalAttributeListAST_11270, var_lexiqueAnalysisContext_11940.mProperty_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 332)) ;
  }
  GALGAS_terminalList var_terminalList_12796 = GALGAS_terminalList::init (inCompiler COMMA_HERE) ;
  cEnumerator_terminalDeclarationListAST enumerator_12892 (var_terminalListAST_11244, EnumerationOrder::up) ;
  while (enumerator_12892.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex_12949 = GALGAS_uint (uint32_t (0U)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_12892.current_mStyle (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template-lexique-component.galgas", 341)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_lstring joker_13068 ; // Joker input parameter
        var_lexiqueAnalysisContext_11940.readProperty_mStyleMap ().method_searchKey (enumerator_12892.current_mStyle (HERE), joker_13068, var_terminalStyleIndex_12949, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 342)) ;
      }
    }
    GALGAS_lexicalSentValueList var_argumentTypeList_13108 = GALGAS_lexicalSentValueList::init (inCompiler COMMA_HERE) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_13177 (enumerator_12892.current_mSentAttributeList (HERE), EnumerationOrder::up) ;
    while (enumerator_13177.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_13300 ;
      var_lexiqueAnalysisContext_11940.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_13177.current_mAttributeName (HERE), var_attributeLexicalType_13300, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 346)) ;
      var_argumentTypeList_13108.addAssign_operation (enumerator_13177.current_mFormalSelector (HERE), enumerator_13177.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_13300  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 347)) ;
      enumerator_13177.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_11940.mProperty_mTerminalMap.setter_insertKey (enumerator_12892.current_mName (HERE), var_argumentTypeList_13108, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 349)) ;
    }
    var_terminalList_12796.addAssign_operation (enumerator_12892.current_mName (HERE), var_argumentTypeList_13108, enumerator_12892.current_mSyntaxErrorMessage (HERE).readProperty_string (), enumerator_12892.current_isEndOfTemplateMark (HERE), enumerator_12892.current_nonAtomicSelection (HERE).operator_not (SOURCE_FILE ("template-lexique-component.galgas", 355)), var_terminalStyleIndex_12949  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 350)) ;
    enumerator_12892.gotoNextObject () ;
  }
  cEnumerator_lexicalListDeclarationListAST enumerator_13770 (var_lexicalListDeclarationListAST_11334, EnumerationOrder::up) ;
  while (enumerator_13770.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex_13832 = GALGAS_uint (uint32_t (0U)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_13770.current_mStyle (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template-lexique-component.galgas", 360)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_lstring joker_13951 ; // Joker input parameter
        var_lexiqueAnalysisContext_11940.readProperty_mStyleMap ().method_searchKey (enumerator_13770.current_mStyle (HERE), joker_13951, var_terminalStyleIndex_13832, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 361)) ;
      }
    }
    GALGAS_lexicalSentValueList var_argumentTypeList_13991 = GALGAS_lexicalSentValueList::init (inCompiler COMMA_HERE) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_14060 (enumerator_13770.current_mSentAttributeList (HERE), EnumerationOrder::up) ;
    while (enumerator_14060.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_14183 ;
      var_lexiqueAnalysisContext_11940.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_14060.current_mAttributeName (HERE), var_attributeLexicalType_14183, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 365)) ;
      var_argumentTypeList_13991.addAssign_operation (enumerator_14060.current_mFormalSelector (HERE), enumerator_14060.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_14183  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 366)) ;
      enumerator_14060.gotoNextObject () ;
    }
    cEnumerator_lexicalListEntryListAST enumerator_14349 (enumerator_13770.current_mEntryList (HERE), EnumerationOrder::up) ;
    while (enumerator_14349.hasCurrentObject ()) {
      GALGAS_string var_syntaxErrorMessage_14395 = enumerator_13770.current_mSyntaxErrorMessage (HERE).readProperty_string ().getter_stringByReplacingStringByString (GALGAS_string ("%K"), enumerator_14349.current_mTerminalSpelling (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 369)) ;
      var_terminalList_12796.addAssign_operation (enumerator_14349.current_mTerminalSpelling (HERE), var_argumentTypeList_13991, var_syntaxErrorMessage_14395, enumerator_14349.current_isEndOfTemplateMark (HERE), enumerator_14349.current_nonAtomicSelection (HERE).operator_not (SOURCE_FILE ("template-lexique-component.galgas", 375)), var_terminalStyleIndex_13832  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 370)) ;
      enumerator_14349.gotoNextObject () ;
    }
    enumerator_13770.gotoNextObject () ;
  }
  GALGAS_stringset var_unicodeStringToGenerate_14829 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
  GALGAS_templateDelimitorList var_templateDelimitorList_14887 = GALGAS_templateDelimitorList::init (inCompiler COMMA_HERE) ;
  const GALGAS_templateLexiqueComponentAST temp_5 = this ;
  cEnumerator_templateDelimitorListAST enumerator_14962 (temp_5.readProperty_mTemplateDelimitorList (), EnumerationOrder::up) ;
  while (enumerator_14962.hasCurrentObject ()) {
    var_unicodeStringToGenerate_14829.addAssign_operation (enumerator_14962.current_mStartString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 383)) ;
    var_unicodeStringToGenerate_14829.addAssign_operation (enumerator_14962.current_mEndString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 384)) ;
    var_templateDelimitorList_14887.addAssign_operation (enumerator_14962.current_mStartString (HERE), enumerator_14962.current_mEndString (HERE), enumerator_14962.current_mPreserved (HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 385)) ;
    enumerator_14962.gotoNextObject () ;
  }
  const GALGAS_templateLexiqueComponentAST temp_6 = this ;
  cEnumerator_templateReplacementListAST enumerator_15295 (temp_6.readProperty_mTemplateReplacementList (), EnumerationOrder::up) ;
  while (enumerator_15295.hasCurrentObject ()) {
    var_unicodeStringToGenerate_14829.addAssign_operation (enumerator_15295.current_mMatchString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 389)) ;
    var_unicodeStringToGenerate_14829.addAssign_operation (enumerator_15295.current_mReplacementString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 390)) ;
    enumerator_15295.gotoNextObject () ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("template-lexique-component.galgas", 394)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_templateLexiqueComponentAST temp_8 = this ;
      const GALGAS_templateLexiqueComponentAST temp_9 = this ;
      GALGAS_string var_headerContents_15614 = GALGAS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_cppHeader (inCompiler, temp_8.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 397)), temp_9.readProperty_mLexiqueSuperComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 398)) COMMA_SOURCE_FILE ("template-lexique-component.galgas", 396))) ;
      const GALGAS_templateLexiqueComponentAST temp_10 = this ;
      const GALGAS_templateLexiqueComponentAST temp_11 = this ;
      const GALGAS_templateLexiqueComponentAST temp_12 = this ;
      const GALGAS_templateLexiqueComponentAST temp_13 = this ;
      GALGAS_string var_cppContents_15857 = GALGAS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_cppImplementation (inCompiler, temp_10.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 402)), temp_11.readProperty_mLexiqueSuperComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 403)), var_lexiqueAnalysisContext_11940.readProperty_mLexicalTokenListMap (), var_unicodeStringToGenerate_14829, var_templateDelimitorList_14887, var_terminalList_12796, temp_12.readProperty_mLexiqueComponentName ().readProperty_string (), temp_13.readProperty_mTemplateReplacementList () COMMA_SOURCE_FILE ("template-lexique-component.galgas", 401))) ;
      const GALGAS_templateLexiqueComponentAST temp_14 = this ;
      const GALGAS_templateLexiqueComponentAST temp_15 = this ;
      const GALGAS_templateLexiqueComponentAST temp_16 = this ;
      GALGAS_string var_objcCocoaHeader_16327 = GALGAS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_objcCocoaHeaderZone (inCompiler, temp_14.readProperty_mLexiqueComponentName ().readProperty_string (), temp_15.readProperty_mLexiqueSuperComponentName ().readProperty_string (), GALGAS_string ("lexique-").add_operation (temp_16.readProperty_mLexiqueSuperComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 415)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 415)) COMMA_SOURCE_FILE ("template-lexique-component.galgas", 412))) ;
      const GALGAS_templateLexiqueComponentAST temp_17 = this ;
      const GALGAS_templateLexiqueComponentAST temp_18 = this ;
      const GALGAS_templateLexiqueComponentAST temp_19 = this ;
      GALGAS_string var_objcCocoaImplementation_16642 = GALGAS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_objcCocoaImplementationZone (inCompiler, GALGAS_string ("lexique-").add_operation (temp_17.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 419)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 419)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 419)), temp_18.readProperty_mLexiqueComponentName ().readProperty_string (), var_terminalList_12796, var_templateDelimitorList_14887, temp_19.readProperty_mTemplateReplacementList () COMMA_SOURCE_FILE ("template-lexique-component.galgas", 418))) ;
      const GALGAS_templateLexiqueComponentAST temp_20 = this ;
      const GALGAS_templateLexiqueComponentAST temp_21 = this ;
      const GALGAS_templateLexiqueComponentAST temp_22 = this ;
      const GALGAS_templateLexiqueComponentAST temp_23 = this ;
      GALGAS_string var_swiftCocoaImplementation_17009 = GALGAS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_swiftCocoaImplementationZone (inCompiler, GALGAS_string ("lexique-").add_operation (temp_20.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 427)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 427)), temp_21.readProperty_mLexiqueComponentName ().readProperty_string (), temp_22.readProperty_mLexiqueSuperComponentName ().readProperty_string (), var_terminalList_12796, var_templateDelimitorList_14887, temp_23.readProperty_mTemplateReplacementList () COMMA_SOURCE_FILE ("template-lexique-component.galgas", 426))) ;
      const GALGAS_templateLexiqueComponentAST temp_24 = this ;
      const GALGAS_templateLexiqueComponentAST temp_25 = this ;
      const GALGAS_templateLexiqueComponentAST temp_26 = this ;
      ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_lexiqueDeclarationForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21_ (GALGAS_bool (true), GALGAS_string ("lexique-").add_operation (temp_24.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 439)), temp_25.readProperty_mLexiqueComponentName ().readProperty_string (), temp_26.readProperty_mLexiqueSuperComponentName ().readProperty_string (), var_headerContents_15614, var_cppContents_15857, var_objcCocoaHeader_16327, var_objcCocoaImplementation_16642, var_swiftCocoaImplementation_17009, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 435)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'templateLexiqueGenerationTemplates'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_templateLexiqueGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_templateLexiqueGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_templateLexiqueGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_templateLexiqueGenerationTemplates_0,
  0,
  gWrapperAllDirectories_templateLexiqueGenerationTemplates_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates cppHeader'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_templateLexiqueGenerationTemplates_cppHeader (Compiler * inCompiler,
                                                                                const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                const GALGAS_string & in_SUPER_5F_LEXIQUE_5F_IDENTIFIER
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("LEXIQUE ").add_operation (in_LEXIQUE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("template_lexique_header_template_zone_2.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"Lexique.h\"\n\n//--------------------------------------------------------------------------------------------------\n//                       T O K E N    C L A S S\n//--------------------------------------------------------------------------------------------------\n\ntypedef cTokenFor_") ;
  result.appendString (in_SUPER_5F_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ;\n\n//--------------------------------------------------------------------------------------------------\n//                     S C A N N E R    C L A S S\n//--------------------------------------------------------------------------------------------------\n\nclass Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public Lexique_") ;
  result.appendString (in_SUPER_5F_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" {\n//--- Constructors\n  public: Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (Compiler * inCallerCompiler,\n                       const String & inSourceFileName\n                       COMMA_LOCATION_ARGS) ;\n\n  public: Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (Compiler * inCallerCompiler,\n                       const String & inSourceString,\n                       const String & inStringForError\n                       COMMA_LOCATION_ARGS) ;\n\n//--- Instrospection\n  public: static GALGAS_stringlist symbols (LOCATION_ARGS) ;\n\n//--- Declaring a protected virtual destructor enables the compiler to raise\n//    an error if a direct delete is performed; only the static method\n//    SharedObject::detachPointer may invoke delete.\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    protected: virtual ~ Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) { }\n  #endif\n//--- Scanner mode for template scanner\n  private: int32_t mMatchedTemplateDelimiterIndex ;\n\n//--- Parse lexical token\n  protected: virtual bool parseLexicalToken (void) override ;\n} ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates cppImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_templateLexiqueGenerationTemplates_cppImplementation (Compiler * inCompiler,
                                                                                        const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                        const GALGAS_string & in_SUPER_5F_LEXIQUE_5F_IDENTIFIER,
                                                                                        const GALGAS_lexicalExplicitTokenListMapMap & in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP,
                                                                                        const GALGAS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                        const GALGAS_templateDelimitorList & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                        const GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                        const GALGAS_string & in_LEXIQUE_5F_COMPONENT_5F_NAME,
                                                                                        const GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//     L E X I Q U E\n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"unicode_character_cpp.h\"\n#include \"scanner_actions.h\"\n#include \"cLexiqueIntrospection.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nLexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * inCallerCompiler,\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const String & inSourceFileName\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\nLexique_") ;
  result.appendString (in_SUPER_5F_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inCallerCompiler, inSourceFileName COMMA_THERE),\nmMatchedTemplateDelimiterIndex (-1) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nLexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("Compiler * inCallerCompiler,\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const String & inSourceString,\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const String & inStringForError\n                ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) :\nLexique_") ;
  result.appendString (in_SUPER_5F_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (inCallerCompiler, inSourceString, inStringForError COMMA_THERE),\nmMatchedTemplateDelimiterIndex (-1) {\n}\n\n//--------------------------------------------------------------------------------------------------\n//                      U N I C O D E    S T R I N G S\n//--------------------------------------------------------------------------------------------------\n") ;
  GALGAS_uint index_1535_ (0) ;
  if (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES.isValid ()) {
    cEnumerator_stringset enumerator_1535 (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES, EnumerationOrder::up) ;
    while (enumerator_1535.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_1535.current_key (HERE).getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 35)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("\n//--- Unicode string for '$") ;
        result.appendString (enumerator_1535.current_key (HERE).getter_utf_38_RepresentationWithoutDelimiters (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 36)).stringValue ()) ;
        result.appendString ("$'\nstatic const std::initializer_list <utf32> kUnicodeString_") ;
        result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_1535.current_key (HERE).getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 37)).stringValue ()) ;
        result.appendString (" = ") ;
        result.appendString (enumerator_1535.current_key (HERE).getter_utf_33__32_Representation (GALGAS_bool (false) COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 37)).stringValue ()) ;
        result.appendString (" ;\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_1535_.increment () ;
      enumerator_1535.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                           Template Delimiters\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_2328_ (0) ;
  if (in_TEMPLATE_5F_DELIMITOR_5F_LIST.isValid ()) {
    cEnumerator_templateDelimitorList enumerator_2328 (in_TEMPLATE_5F_DELIMITOR_5F_LIST, EnumerationOrder::up) ;
    const bool nonEmpty_enumerator_2328 = enumerator_2328.hasCurrentObject () ;
    if (nonEmpty_enumerator_2328) {
      result.appendString ("static const TemplateDelimiter ") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_kTemplateDefinitionArray [") ;
      result.appendString (in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 46)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 46)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_2328.hasCurrentObject ()) {
      result.appendString ("  TemplateDelimiter (kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_2328.current_mStartString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 47)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_2328.current_mStartString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 47)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 47)).stringValue ()) ;
      result.appendString (", ") ;
      const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_2328.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 48)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_1) {
      case kBoolTrue : {
        result.appendString ("{}, 0,") ;
        } break ;
      case kBoolFalse : {
        result.appendString ("kUnicodeString_") ;
        result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_2328.current_mEndString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 51)).stringValue ()) ;
        result.appendString (", ") ;
        result.appendString (enumerator_2328.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 51)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 51)).stringValue ()) ;
        result.appendString (",") ;
        } break ;
      default :
        break ;
      }
      result.appendString (" nullptr, ") ;
      result.appendString (enumerator_2328.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 54)).getter_cString (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 54)).stringValue ()) ;
      result.appendString (")") ;
      if (enumerator_2328.hasNextObject ()) {
        result.appendString (",\n") ;
      }
      index_2328_.increment () ;
      enumerator_2328.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_2328) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                           Template Replacements\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_3282_ (0) ;
  if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
    cEnumerator_templateReplacementListAST enumerator_3282 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, EnumerationOrder::up) ;
    const bool nonEmpty_enumerator_3282 = enumerator_3282.hasCurrentObject () ;
    if (nonEmpty_enumerator_3282) {
      result.appendString ("static const TemplateDelimiter ") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_kTemplateReplacementArray [") ;
      result.appendString (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 65)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 65)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_3282.hasCurrentObject ()) {
      result.appendString ("  TemplateDelimiter (kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3282.current_mMatchString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 67)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_3282.current_mMatchString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 67)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 67)).stringValue ()) ;
      result.appendString (", kUnicodeString_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3282.current_mReplacementString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 68)).stringValue ()) ;
      result.appendString (", ") ;
      result.appendString (enumerator_3282.current_mReplacementString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 68)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 68)).stringValue ()) ;
      result.appendString (", ") ;
      const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_3282.current_mReplacementFunction (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 69)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_2) {
      case kBoolTrue : {
        result.appendString ("nullptr") ;
        } break ;
      case kBoolFalse : {
        result.appendString ("scanner_routine_") ;
        result.appendString (enumerator_3282.current_mReplacementFunction (HERE).readProperty_string ().stringValue ()) ;
        } break ;
      default :
        break ;
      }
      result.appendString (", true)") ;
      if (enumerator_3282.hasNextObject ()) {
        result.appendString (",\n") ;
      }
      index_3282_.increment () ;
      enumerator_3282.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_3282) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//            Terminal Symbols as end of script in template mark\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_4233_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_4233 (in_TERMINAL_5F_LIST, EnumerationOrder::up) ;
    const bool nonEmpty_enumerator_4233 = enumerator_4233.hasCurrentObject () ;
    if (nonEmpty_enumerator_4233) {
      result.appendString ("static const bool ") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_kEndOfScriptInTemplateArray [") ;
      result.appendString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 84)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 84)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_4233.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4233.current_isEndOfTemplateMark (HERE).getter_cString (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 85)).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_4233.current_mTerminalName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" */") ;
      if (enumerator_4233.hasNextObject ()) {
        result.appendString (",\n") ;
      }
      index_4233_.increment () ;
      enumerator_4233.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_4233) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//               P A R S E    L E X I C A L    T O K E N\n//--------------------------------------------------------------------------------------------------\n\nbool Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::parseLexicalToken (void) {\n  cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" token ;\n  token.mTokenCode = -1 ;\n  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n    if ((mMatchedTemplateDelimiterIndex >= 0)\n        && (") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength > 0)\n        && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n      const bool foundEndDelimitor = testForInputUTF32String (") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndString,\n                                                               true) ;\n      if (foundEndDelimitor) {\n        mMatchedTemplateDelimiterIndex = -1 ;\n      }\n    }\n    while ((mMatchedTemplateDelimiterIndex < 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n      int32_t replacementIndex = 0 ;\n      while (replacementIndex >= 0) {\n        replacementIndex = findTemplateDelimiterIndex (") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_kTemplateReplacementArray, ") ;
  result.appendString (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 110)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 110)).stringValue ()) ;
  result.appendString (") ;\n        if (replacementIndex >= 0) {\n          if (") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_kTemplateReplacementArray [replacementIndex].mReplacementFunction == nullptr) {\n            token.mTemplateStringBeforeToken.appendString (") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_kTemplateReplacementArray [replacementIndex].mEndString) ;\n          }else{\n            String s ;\n            while (notTestForInputUTF32String (") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_kTemplateReplacementArray [replacementIndex].mEndString,\n                                               kEndOfSourceLexicalErrorMessage\n                                               COMMA_HERE)) {\n              s.appendChar (previousChar ()) ;\n            }\n            ") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_kTemplateReplacementArray [replacementIndex].mReplacementFunction (*this, s, token.mTemplateStringBeforeToken) ;\n          }\n        }\n      }\n      mMatchedTemplateDelimiterIndex = findTemplateDelimiterIndex (") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_kTemplateDefinitionArray, ") ;
  result.appendString (in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 125)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 125)).stringValue ()) ;
  result.appendString (") ;\n      if (mMatchedTemplateDelimiterIndex < 0) {\n        token.mTemplateStringBeforeToken.appendChar (mCurrentChar) ;\n        advance () ;\n      }\n    }\n    if ((mMatchedTemplateDelimiterIndex >= 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n      internalParseLexicalToken (token) ;\n    }\n    if ((token.mTokenCode > 0) && ") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("_kEndOfScriptInTemplateArray [token.mTokenCode - 1]) {\n      mMatchedTemplateDelimiterIndex = -1 ;\n    }\n  }\n  if (UNICODE_VALUE (mCurrentChar) == '\\0') {\n    token.mTokenCode = 0 ;\n    enterToken (token) ;\n  }\n  return token.mTokenCode > 0 ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//                         I N T R O S P E C T I O N\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_stringlist Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::symbols (LOCATION_ARGS) {\n  GALGAS_stringlist result = GALGAS_stringlist::class_func_emptyList (THERE) ;\n") ;
  GALGAS_uint index_7720_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_7720 (in_TERMINAL_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7720.hasCurrentObject ()) {
      result.appendString ("  result.addAssign_operation (GALGAS_string (") ;
      result.appendString (enumerator_7720.current_mTerminalName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 152)).stringValue ()) ;
      result.appendString (") COMMA_HERE) ;\n") ;
      index_7720_.increment () ;
      enumerator_7720.gotoNextObject () ;
    }
  }
  result.appendString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void getKeywordLists_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (TC_UniqueArray <String> & ") ;
  const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 160)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_3) {
  case kBoolTrue : {
    result.appendString ("/* ioList */") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("ioList") ;
    } break ;
  default :
    break ;
  }
  result.appendString (") {\n") ;
  GALGAS_uint index_8233_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_8233 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_8233.hasCurrentObject ()) {
      result.appendString ("  ioList.appendObject (") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 164)).add_operation (enumerator_8233.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 164)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 164)).stringValue ()) ;
      result.appendString (") ;\n") ;
      index_8233_.increment () ;
      enumerator_8233.gotoNextObject () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void getKeywordsForIdentifier_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const String & ") ;
  const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 170)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_4) {
  case kBoolTrue : {
    result.appendString ("/* inIdentifier */") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("inIdentifier") ;
    } break ;
  default :
    break ;
  }
  result.appendString (",\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("bool & ") ;
  const enumGalgasBool test_5 = GALGAS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 171)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_5) {
  case kBoolTrue : {
    result.appendString ("/* ioFound */") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("ioFound") ;
    } break ;
  default :
    break ;
  }
  result.appendString (",\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("TC_UniqueArray <String> & ") ;
  const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 172)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_6) {
  case kBoolTrue : {
    result.appendString ("/* ioList */") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("ioList") ;
    } break ;
  default :
    break ;
  }
  result.appendString (") {\n") ;
  GALGAS_uint index_8942_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_8942 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_8942.hasCurrentObject ()) {
      result.appendString ("  if (inIdentifier == ") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 176)).add_operation (enumerator_8942.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 176)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 176)).stringValue ()) ;
      result.appendString (") {\n    ioFound = true ;\n") ;
      GALGAS_uint index_9139_ (0) ;
      if (enumerator_8942.current_mTokenSortedList (HERE).isValid ()) {
        cEnumerator_tokenSortedlist enumerator_9139 (enumerator_8942.current_mTokenSortedList (HERE), EnumerationOrder::up) ;
        while (enumerator_9139.hasCurrentObject ()) {
          result.appendString ("    ioList.appendObject (") ;
          result.appendString (enumerator_9139.current_mName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 179)).stringValue ()) ;
          result.appendString (") ;\n") ;
          index_9139_.increment () ;
          enumerator_9139.gotoNextObject () ;
        }
      }
      result.appendString ("    ioList.sortArrayUsingCompareMethod() ;\n  }\n") ;
      index_8942_.increment () ;
      enumerator_8942.gotoNextObject () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic cLexiqueIntrospection lexiqueIntrospection_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n__attribute__ ((used))\n__attribute__ ((unused)) (getKeywordLists_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (", getKeywordsForIdentifier_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates objcCocoaHeaderZone'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_templateLexiqueGenerationTemplates_objcCocoaHeaderZone (Compiler * /* inCompiler */,
                                                                                          const GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                          const GALGAS_string & in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                          const GALGAS_string & in_SUPER_5F_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n#import \"") ;
  result.appendString (in_SUPER_5F_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME.stringValue ()) ;
  result.appendString (".h\"\n\n//--------------------------------------------------------------------------------------------------\n//\n//                     S C A N N E R    C L A S S\n//\n//--------------------------------------------------------------------------------------------------\n\n@interface OC_Lexique_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : OC_Lexique_") ;
  result.appendString (in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" {\n}\n- (void) parseLexicalTokenForLexicalColoring ;\n\n- (BOOL) isTemplateLexique ;\n\n@end\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates objcCocoaImplementationZone'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_templateLexiqueGenerationTemplates_objcCocoaImplementationZone (Compiler * /* inCompiler */,
                                                                                                  const GALGAS_string & in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME,
                                                                                                  const GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                                  const GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                                  const GALGAS_templateDelimitorList & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                                  const GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n#import \"") ;
  result.appendString (in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME.stringValue ()) ;
  result.appendString (".h\"\n#import \"PMDebug.h\"\n\n//--------------------------------------------------------------------------------------------------\n\n@implementation OC_Lexique_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//\n//                           Template Replacements\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 15)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("static NSArray * kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 16)).stringValue ()) ;
    result.appendString (" ; // Of NSString \n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//\n//                           Template Delimiters\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 25)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("static NSArray * kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 26)).stringValue ()) ;
    result.appendString (" ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//\n//                           init\n//\n//--------------------------------------------------------------------------------------------------\n\n- (instancetype) init {\n  self = [super init] ;\n  if (self) {\n    noteObjectAllocation (self) ;\n  }\n") ;
  const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 39)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.appendString ("  if (nil == kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 40)).stringValue ()) ;
    result.appendString (") {\n    kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 41)).stringValue ()) ;
    result.appendString (" = [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_1724_ (0) ;
    if (in_TEMPLATE_5F_DELIMITOR_5F_LIST.isValid ()) {
      cEnumerator_templateDelimitorList enumerator_1724 (in_TEMPLATE_5F_DELIMITOR_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_1724.hasCurrentObject ()) {
        result.appendString ("      [[OC_GGS_TemplateDelimiter alloc] initWithStartString:@") ;
        result.appendString (enumerator_1724.current_mStartString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 43)).stringValue ()) ;
        result.appendString (" endString:") ;
        const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_1724.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 44)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        switch (test_3) {
        case kBoolTrue : {
          result.appendString ("nil") ;
          } break ;
        case kBoolFalse : {
          result.appendString ("@") ;
          result.appendString (enumerator_1724.current_mEndString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 47)).stringValue ()) ;
          } break ;
        default :
          break ;
        }
        result.appendString (" discardStartString:") ;
        result.appendString (enumerator_1724.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 50)).getter_ocString (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 50)).stringValue ()) ;
        result.appendString ("],\n") ;
        index_1724_.increment () ;
        enumerator_1724.gotoNextObject () ;
      }
    }
    result.appendString ("      nil\n    ] ;\n  }\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 57)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_4) {
  case kBoolTrue : {
    result.appendString ("  if (nil == kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 58)).stringValue ()) ;
    result.appendString (") {\n    kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 59)).stringValue ()) ;
    result.appendString (" = [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_2487_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      cEnumerator_templateReplacementListAST enumerator_2487 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_2487.hasCurrentObject ()) {
        result.appendString ("      @") ;
        result.appendString (enumerator_2487.current_mMatchString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 61)).stringValue ()) ;
        result.appendString (",\n") ;
        index_2487_.increment () ;
        enumerator_2487.gotoNextObject () ;
      }
    }
    result.appendString ("      nil\n    ] ;\n  }\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("  return self ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n- (void) dealloc {\n  noteObjectDeallocation (self) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//            Terminal Symbols as end of script in template mark\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_3349_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_3349 (in_TERMINAL_5F_LIST, EnumerationOrder::up) ;
    const bool nonEmpty_enumerator_3349 = enumerator_3349.hasCurrentObject () ;
    if (nonEmpty_enumerator_3349) {
      result.appendString ("static const BOOL kEndOfScriptInTemplateArray_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 83)).stringValue ()) ;
      result.appendString (" [") ;
      result.appendString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 83)).getter_string (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 83)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_3349.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_3349.current_isEndOfTemplateMark (HERE).getter_ocString (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 84)).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_3349.current_mTerminalName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" */") ;
      if (enumerator_3349.hasNextObject ()) {
        result.appendString (",\n") ;
      }
      index_3349_.increment () ;
      enumerator_3349.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_3349) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//\n//               P A R S E    L E X I C A L    T O K E N\n//\n//--------------------------------------------------------------------------------------------------\n\n- (void) parseLexicalTokenForLexicalColoring {\n  BOOL scanningOk = YES ;\n  mTokenCode = 0 ;\n  while ((mTokenCode == 0) && (mCurrentChar != '\\0')) {\n    mTokenStartLocation = mCurrentLocation ;\n    if ((mMatchedTemplateDelimiterIndex >= 0) && ([[kTemplateDefinitionArray_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 100)).stringValue ()) ;
  result.appendString (" objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] startString].length > 0)) {\n      const BOOL foundEndDelimitor = [self testForInputString:[[kTemplateDefinitionArray_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 101)).stringValue ()) ;
  result.appendString (" objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] endString] advance:YES] ;\n      if (foundEndDelimitor) {\n        mMatchedTemplateDelimiterIndex = -1 ;\n      }\n    }\n    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar != '\\0')) {\n      [self searchForReplacementPattern:kTemplateReplacementArray_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 107)).stringValue ()) ;
  result.appendString ("] ;\n      mMatchedTemplateDelimiterIndex = [self findTemplateDelimiterIndex:kTemplateDefinitionArray_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 108)).stringValue ()) ;
  result.appendString ("] ;\n      if (mMatchedTemplateDelimiterIndex < 0) {\n        [self advance] ;\n        mTokenCode = -2 ;\n      }\n    }\n    if ((mMatchedTemplateDelimiterIndex >= 0) && (mTokenCode == 0) && (mCurrentChar != '\\0') && scanningOk) {\n      scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;\n    }\n    if ((mTokenCode > 0) && kEndOfScriptInTemplateArray_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 117)).stringValue ()) ;
  result.appendString (" [mTokenCode - 1]) {\n      mMatchedTemplateDelimiterIndex = -1 ;\n    }\n  //--- Error \?\n    if (! scanningOk) {\n      mTokenCode = -1 ;\n      [self advance] ;\n    }\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//                I S    T E M P L A T E    L E X I Q U E\n//\n//--------------------------------------------------------------------------------------------------\n\n- (BOOL) isTemplateLexique {\n  return YES ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//         L E X I Q U E   I D E N T I F I E R\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) lexiqueIdentifier {\n  return @\"") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n@end\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates swiftCocoaImplementationZone'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_templateLexiqueGenerationTemplates_swiftCocoaImplementationZone (Compiler * /* inCompiler */,
                                                                                                   const GALGAS_string & /* in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME */,
                                                                                                   const GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                                   const GALGAS_string & in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                                   const GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                                   const GALGAS_templateDelimitorList & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                                   const GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//                           Template Replacements\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 8)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("fileprivate let kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 9)).stringValue ()) ;
    result.appendString (" : [String] = [\n") ;
    GALGAS_uint index_516_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      cEnumerator_templateReplacementListAST enumerator_516 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_516.hasCurrentObject ()) {
        result.appendString ("  ") ;
        result.appendString (enumerator_516.current_mMatchString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 12)).stringValue ()) ;
        if (enumerator_516.hasNextObject ()) {
          result.appendString (",\n") ;
        }
        index_516_.increment () ;
        enumerator_516.gotoNextObject () ;
      }
    }
    result.appendString ("\n]\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                           Template Delimiters\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 21)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("fileprivate let kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 22)).stringValue ()) ;
    result.appendString (" : [SWIFT_TemplateDelimiter] = [\n") ;
    GALGAS_uint index_1113_ (0) ;
    if (in_TEMPLATE_5F_DELIMITOR_5F_LIST.isValid ()) {
      cEnumerator_templateDelimitorList enumerator_1113 (in_TEMPLATE_5F_DELIMITOR_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_1113.hasCurrentObject ()) {
        result.appendString ("  SWIFT_TemplateDelimiter (startString: ") ;
        result.appendString (enumerator_1113.current_mStartString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 25)).stringValue ()) ;
        result.appendString (", endString: ") ;
        const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_1113.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 26)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        switch (test_2) {
        case kBoolTrue : {
          result.appendString ("nil") ;
          } break ;
        case kBoolFalse : {
          result.appendString (enumerator_1113.current_mEndString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 29)).stringValue ()) ;
          } break ;
        default :
          break ;
        }
        result.appendString (", discardStartString: ") ;
        result.appendString (enumerator_1113.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 32)).getter_cString (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 32)).stringValue ()) ;
        result.appendString (")") ;
        if (enumerator_1113.hasNextObject ()) {
          result.appendString (",\n") ;
        }
        index_1113_.increment () ;
        enumerator_1113.gotoNextObject () ;
      }
    }
    result.appendString ("\n]\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//            Terminal Symbols as end of script in template mark\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_1938_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_1938 (in_TERMINAL_5F_LIST, EnumerationOrder::up) ;
    const bool nonEmpty_enumerator_1938 = enumerator_1938.hasCurrentObject () ;
    if (nonEmpty_enumerator_1938) {
      result.appendString ("fileprivate let kEndOfScriptInTemplateArray_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 43)).stringValue ()) ;
      result.appendString (" : [Bool] = [\n") ;
    }
    while (enumerator_1938.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1938.current_isEndOfTemplateMark (HERE).getter_cString (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 44)).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1938.current_mTerminalName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" */") ;
      if (enumerator_1938.hasNextObject ()) {
        result.appendString (",\n") ;
      }
      index_1938_.increment () ;
      enumerator_1938.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_1938) {
      result.appendString ("\n]\n") ;
    }
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\nfunc ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexiqueIdentifier () -> String {\n  return \"") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"\n}\n\n//--------------------------------------------------------------------------------------------------\n//                     S C A N N E R    C L A S S\n//--------------------------------------------------------------------------------------------------\n\nclass SWIFT_Lexique_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : SWIFT_Lexique_") ;
  result.appendString (in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" {\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func isTemplateLexique () -> Bool {\n    return true\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Lexical analysis\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func parseLexicalTokenForLexicalColoring () -> SWIFT_Token {\n    let startLocation = self.currentLocation\n    if let idx = self.mEndTemplateDelimiterIndex, self.testForInputString (kTemplateDefinitionArray_galgasTemplateScanner [idx].endString, advance: true) {\n      self.mEndTemplateDelimiterIndex = nil\n    }\n    if self.mEndTemplateDelimiterIndex != nil {\n      return super.parseLexicalTokenForLexicalColoring ()\n    }else{ // In template string, find code start string\n      while self.mEndTemplateDelimiterIndex == nil, self.currentChar != 0 {\n        var idx = 0\n        while self.mEndTemplateDelimiterIndex == nil, idx < kTemplateDefinitionArray_galgasTemplateScanner.count {\n          if self.testForInputString (kTemplateDefinitionArray_galgasTemplateScanner [idx].startString, advance: true) {\n            self.mEndTemplateDelimiterIndex = idx\n          }\n          idx += 1\n        }\n        if self.mEndTemplateDelimiterIndex == nil {\n          self.advance ()\n        }\n      }\n      return SWIFT_Token (\n        range: NSRange (location: startLocation, length: self.currentLocation - startLocation),\n        tokenCode: galgasScanner_2_TEMPLATE,\n        templateDelimiterIndex: self.mEndTemplateDelimiterIndex\n      )\n    }\n  }\n//    var styleIndex : UInt8 = 0\n//    var tokenCode : UInt16 = 0\n//    let startLocation = self.currentLocation\n//    while styleIndex == 0, self.currentChar != 0 {\n//      let tokenStartLocation = self.currentLocation\n//      if let idx = matchedTemplateDelimiterIndex, !kTemplateDefinitionArray_galgasTemplateScanner [idx].startString.isEmpty {\n//        let foundEndDelimitor = self.testForInputString (kTemplateDefinitionArray_galgasTemplateScanner [idx].endString, advance: true)\n//        if foundEndDelimitor {\n//          matchedTemplateDelimiterIndex = nil\n//        }\n//      }\n//      while matchedTemplateDelimiterIndex != nil, self.currentChar != 0 {\n//        self.searchForReplacementPattern (kTemplateReplacementArray_galgasTemplateScanner)\n//        matchedTemplateDelimiterIndex = self.findTemplateDelimiterIndex (kTemplateDefinitionArray_galgasTemplateScanner)\n//        if matchedTemplateDelimiterIndex == nil {\n//          self.advance ()\n//          styleIndex = -2\n//        }\n//      }\n//      if matchedTemplateDelimiterIndex != nil, styleIndex == 0, self.currentChar != 0 {\n//        let s = super.parseLexicalTokenForLexicalColoring ()\n//        styleIndex = s.styleIndex\n//        tokenCode = s.token\n//      }\n//      if styleIndex > 0, kEndOfScriptInTemplateArray_galgasTemplateScanner [Int (styleIndex) - 1] {\n//        matchedTemplateDelimiterIndex = nil\n//      }\n//    //--- Error \?\n////      if !scanningOk {\n////        styleIndex = Int8 (self.styleCount ())\n////        self.advance ()\n////      }\n//    }\n//  }\n  \n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//                           init\n//\n//--------------------------------------------------------------------------------------------------\n\n/* - (instancetype) init {\n  self = [super init] ;\n  if (self) {\n    noteObjectAllocation (self) ;\n  }\n") ;
  const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 149)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_3) {
  case kBoolTrue : {
    result.appendString ("  if (nil == kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 150)).stringValue ()) ;
    result.appendString (") {\n    kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 151)).stringValue ()) ;
    result.appendString (" = [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_6661_ (0) ;
    if (in_TEMPLATE_5F_DELIMITOR_5F_LIST.isValid ()) {
      cEnumerator_templateDelimitorList enumerator_6661 (in_TEMPLATE_5F_DELIMITOR_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_6661.hasCurrentObject ()) {
        result.appendString ("      [[OC_GGS_TemplateDelimiter alloc] initWithStartString:@") ;
        result.appendString (enumerator_6661.current_mStartString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 153)).stringValue ()) ;
        result.appendString (" endString:") ;
        const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::equal, enumerator_6661.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 154)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        switch (test_4) {
        case kBoolTrue : {
          result.appendString ("nil") ;
          } break ;
        case kBoolFalse : {
          result.appendString ("@") ;
          result.appendString (enumerator_6661.current_mEndString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 157)).stringValue ()) ;
          } break ;
        default :
          break ;
        }
        result.appendString (" discardStartString:") ;
        result.appendString (enumerator_6661.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 160)).getter_ocString (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 160)).stringValue ()) ;
        result.appendString ("],\n") ;
        index_6661_.increment () ;
        enumerator_6661.gotoNextObject () ;
      }
    }
    result.appendString ("      nil\n    ] ;\n  }\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 167)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_5) {
  case kBoolTrue : {
    result.appendString ("  if (nil == kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 168)).stringValue ()) ;
    result.appendString (") {\n    kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 169)).stringValue ()) ;
    result.appendString (" = [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_7424_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      cEnumerator_templateReplacementListAST enumerator_7424 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, EnumerationOrder::up) ;
      while (enumerator_7424.hasCurrentObject ()) {
        result.appendString ("      @") ;
        result.appendString (enumerator_7424.current_mMatchString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 171)).stringValue ()) ;
        result.appendString (",\n") ;
        index_7424_.increment () ;
        enumerator_7424.gotoNextObject () ;
      }
    }
    result.appendString ("      nil\n    ] ;\n  }\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("  return self ;\n}\n*/\n\n//--------------------------------------------------------------------------------------------------\n\n/* - (void) dealloc {\n  noteObjectDeallocation (self) ;\n} */\n\n//--------------------------------------------------------------------------------------------------\n//\n//            Terminal Symbols as end of script in template mark\n//\n//--------------------------------------------------------------------------------------------------\n\n/*\n") ;
  GALGAS_uint index_8298_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_8298 (in_TERMINAL_5F_LIST, EnumerationOrder::up) ;
    const bool nonEmpty_enumerator_8298 = enumerator_8298.hasCurrentObject () ;
    if (nonEmpty_enumerator_8298) {
      result.appendString ("static const BOOL kEndOfScriptInTemplateArray_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 195)).stringValue ()) ;
      result.appendString (" [") ;
      result.appendString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 195)).getter_string (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 195)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_8298.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_8298.current_isEndOfTemplateMark (HERE).getter_ocString (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 196)).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_8298.current_mTerminalName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" */") ;
      if (enumerator_8298.hasNextObject ()) {
        result.appendString (",\n") ;
      }
      index_8298_.increment () ;
      enumerator_8298.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_8298) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString (" */\n\n//--------------------------------------------------------------------------------------------------\n//\n//               P A R S E    L E X I C A L    T O K E N\n//\n//--------------------------------------------------------------------------------------------------\n\n/* - (void) parseLexicalTokenForLexicalColoring {\n  BOOL scanningOk = YES ;\n  mTokenCode = 0 ;\n  while ((mTokenCode == 0) && (mCurrentChar != '\\0')) {\n    mTokenStartLocation = mCurrentLocation ;\n    if ((mMatchedTemplateDelimiterIndex >= 0) && ([[kTemplateDefinitionArray_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 213)).stringValue ()) ;
  result.appendString (" objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] startString].length > 0)) {\n      const BOOL foundEndDelimitor = [self testForInputString:[[kTemplateDefinitionArray_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 214)).stringValue ()) ;
  result.appendString (" objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] endString] advance:YES] ;\n      if (foundEndDelimitor) {\n        mMatchedTemplateDelimiterIndex = -1 ;\n      }\n    }\n    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar != '\\0')) {\n      [self searchForReplacementPattern:kTemplateReplacementArray_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 220)).stringValue ()) ;
  result.appendString ("] ;\n      mMatchedTemplateDelimiterIndex = [self findTemplateDelimiterIndex:kTemplateDefinitionArray_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 221)).stringValue ()) ;
  result.appendString ("] ;\n      if (mMatchedTemplateDelimiterIndex < 0) {\n        [self advance] ;\n        mTokenCode = -2 ;\n      }\n    }\n    if ((mMatchedTemplateDelimiterIndex >= 0) && (mTokenCode == 0) && (mCurrentChar != '\\0') && scanningOk) {\n      scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;\n    }\n    if ((mTokenCode > 0) && kEndOfScriptInTemplateArray_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 230)).stringValue ()) ;
  result.appendString (" [mTokenCode - 1]) {\n      mMatchedTemplateDelimiterIndex = -1 ;\n    }\n  //--- Error \?\n    if (! scanningOk) {\n      mTokenCode = -1 ;\n      [self advance] ;\n    }\n  }\n}\n*/ \n//--------------------------------------------------------------------------------------------------\n//\n//                I S    T E M P L A T E    L E X I Q U E\n//\n//--------------------------------------------------------------------------------------------------\n\n/* - (BOOL) isTemplateLexique {\n  return YES ;\n} */\n\n//--------------------------------------------------------------------------------------------------\n//\n//         L E X I Q U E   I D E N T I F I E R\n//\n//--------------------------------------------------------------------------------------------------\n\n/* - (NSString *) lexiqueIdentifier {\n  return @\"") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\" ;\n} */\n\n//--------------------------------------------------------------------------------------------------\n\n// @end\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Once function 'buildLexicalTypeMap'
//
//--------------------------------------------------------------------------------------------------

static GALGAS_lexicalTypeMap onceFunction_buildLexicalTypeMap (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeMap result_result ; // Returned variable
  result_result = GALGAS_lexicalTypeMap::init (inCompiler COMMA_HERE) ;
  {
  result_result.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("string"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 393)), inCompiler COMMA_HERE), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("lexiqueTypesForAST.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 393)) ;
  }
  {
  result_result.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("char"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 394)), inCompiler COMMA_HERE), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueTypesForAST.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 394)) ;
  }
  {
  result_result.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("uint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 395)), inCompiler COMMA_HERE), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 395)) ;
  }
  {
  result_result.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("uint64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 396)), inCompiler COMMA_HERE), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 396)) ;
  }
  {
  result_result.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("sint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 397)), inCompiler COMMA_HERE), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 397)) ;
  }
  {
  result_result.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("sint64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 398)), inCompiler COMMA_HERE), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 398)) ;
  }
  {
  result_result.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("double"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 399)), inCompiler COMMA_HERE), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_double (SOURCE_FILE ("lexiqueTypesForAST.galgas", 399)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 399)) ;
  }
  {
  result_result.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("bigint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 400)), inCompiler COMMA_HERE), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 400)) ;
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_buildLexicalTypeMap = false ;
static GALGAS_lexicalTypeMap gOnceFunctionResult_buildLexicalTypeMap ;

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap function_buildLexicalTypeMap (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_buildLexicalTypeMap) {
    gOnceFunctionResult_buildLexicalTypeMap = onceFunction_buildLexicalTypeMap (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_buildLexicalTypeMap = true ;
  }
  return gOnceFunctionResult_buildLexicalTypeMap ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_buildLexicalTypeMap (void) {
  gOnceFunctionResult_buildLexicalTypeMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_buildLexicalTypeMap (nullptr,
                                                               releaseOnceFunctionResult_buildLexicalTypeMap) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_buildLexicalTypeMap [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_buildLexicalTypeMap (Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_buildLexicalTypeMap (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_buildLexicalTypeMap ("buildLexicalTypeMap",
                                                                     functionWithGenericHeader_buildLexicalTypeMap,
                                                                     & kTypeDescriptor_GALGAS_lexicalTypeMap,
                                                                     0,
                                                                     functionArgs_buildLexicalTypeMap) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalAttributeMap??&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalAttributeMap_3F__3F__26_ (const GALGAS_lexicalTypeMap constinArgument_inLexicalTypeMap,
                                                   const GALGAS_lexicalAttributeListAST constinArgument_inLexicalAttributeList,
                                                   GALGAS_lexicalAttributeMap & ioArgument_ioLexicalAttributeMap,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_lexicalAttributeListAST enumerator_15276 (constinArgument_inLexicalAttributeList, EnumerationOrder::up) ;
  while (enumerator_15276.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = constinArgument_inLexicalTypeMap.getter_hasKey (enumerator_15276.current_mTypeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 420)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_lexicalTypeEnum var_lexicalType_15435 ;
        constinArgument_inLexicalTypeMap.method_searchKey (enumerator_15276.current_mTypeName (HERE), var_lexicalType_15435, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 421)) ;
        {
        ioArgument_ioLexicalAttributeMap.setter_insertKey (enumerator_15276.current_mName (HERE), var_lexicalType_15435, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 422)) ;
        }
      }
    }
    if (kBoolFalse == test_0) {
      GALGAS_string var_m_15537 = GALGAS_string::makeEmptyString () ;
      var_m_15537.plusAssign_operation(GALGAS_string ("the @").add_operation (enumerator_15276.current_mTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 425)).add_operation (GALGAS_string (" type is not a valid lexical attribute type; are allowed:"), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 425)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 425)) ;
      cEnumerator_lexicalTypeMap enumerator_15653 (constinArgument_inLexicalTypeMap, EnumerationOrder::up) ;
      while (enumerator_15653.hasCurrentObject ()) {
        var_m_15537.plusAssign_operation(GALGAS_string (" @").add_operation (enumerator_15653.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 427)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 427)) ;
        if (enumerator_15653.hasNextObject ()) {
          var_m_15537.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 429)) ;
        }
        enumerator_15653.gotoNextObject () ;
      }
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_15276.current_mTypeName (HERE).readProperty_location (), var_m_15537, fixItArray1  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 431)) ;
    }
    enumerator_15276.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'lexicalUnicodeTestFunctionAnalysis!'
//
//--------------------------------------------------------------------------------------------------

void routine_lexicalUnicodeTestFunctionAnalysis_21_ (GALGAS_stringset & outArgument_outUnicodeTestFunctions,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUnicodeTestFunctions.drop () ; // Release 'out' argument
  GALGAS_stringset temp_0 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 38)) ;
  temp_0.enterElement (GALGAS_string ("isUnicodeLetter"), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 30)) ;
  temp_0.enterElement (GALGAS_string ("isUnicodeMark"), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 31)) ;
  temp_0.enterElement (GALGAS_string ("isUnicodeNumber"), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 32)) ;
  temp_0.enterElement (GALGAS_string ("isUnicodeDecimalDigit"), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 33)) ;
  temp_0.enterElement (GALGAS_string ("isUnicodeASCIIHexDigit"), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 34)) ;
  temp_0.enterElement (GALGAS_string ("isUnicodeSeparator"), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 35)) ;
  temp_0.enterElement (GALGAS_string ("isUnicodeCommand"), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 36)) ;
  temp_0.enterElement (GALGAS_string ("isUnicodePunctuation"), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 37)) ;
  temp_0.enterElement (GALGAS_string ("isUnicodeSymbol"), inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 38)) ;
  outArgument_outUnicodeTestFunctions = temp_0 ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalRoutineMap!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalRoutineMap_21_ (GALGAS_lexicalRoutineMap & outArgument_outLexicalRoutineMap,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLexicalRoutineMap.drop () ; // Release 'out' argument
  outArgument_outLexicalRoutineMap = GALGAS_lexicalRoutineMap::init (inCompiler COMMA_HERE) ;
  GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  GALGAS_stringlist var_errorMessageList_2282 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 47)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 47)), GALGAS_string ("ioASCIICharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 47)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 48)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 48)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 48)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inErrorCodeGreaterThan255")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 49)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inErrorNotHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 50)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("enterHexDigitIntoASCIIcharacter"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 52)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 51)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2282 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 60)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 60)), GALGAS_string ("ioASCIICharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 60)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 61)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 61)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 61)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inErrorCodeGreaterThan255")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 62)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inErrorNotDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 63)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("enterDigitIntoASCIIcharacter"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 65)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 64)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 72)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 72)), GALGAS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 72)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 73)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 73)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 73)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("enterCharacterIntoString"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 75)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, GALGAS_stringlist::init (inCompiler COMMA_HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 74)) ;
  }
  {
  GALGAS_lexicalRoutineFormalArgumentList temp_0 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 83)) ;
  temp_0.enterElement (GALGAS_lexicalRoutineFormalArgumentList_2D_element::init_21__21__21_ (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 83)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 83)), GALGAS_string ("ioString"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 83)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("resetString"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 82)), inCompiler COMMA_HERE), temp_0, GALGAS_stringlist::init (inCompiler COMMA_HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 81)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2282 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 90)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 90)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 90)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 91)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_double (SOURCE_FILE ("predefinedLexicalActions.galgas", 91)), GALGAS_string ("ioDouble")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 91)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inConversionError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 92)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("convertStringToDouble"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 94)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 93)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2282 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 102)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 102)), GALGAS_string ("ioCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 102)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 103)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 103)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 103)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("enterCharacterIntoCharacter"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 105)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 104)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2282 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 113)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 113)), GALGAS_string ("ioNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 113)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 114)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("negateSInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 116)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 115)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2282 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 124)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 124)), GALGAS_string ("ioNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 124)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 125)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("negateSInt64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 127)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 126)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2282 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 135)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 135)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 135)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 136)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 136)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 136)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 137)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("convertUIntToSInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 139)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 138)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2282 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 147)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 147)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 147)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 148)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 148)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 148)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 149)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("convertUInt64ToSInt64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 151)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 150)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2282 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 159)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 159)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 159)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 160)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 160)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 160)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 161)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 162)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("enterDigitIntoUInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 164)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 163)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2282 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 172)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 172)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 172)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 173)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 173)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 173)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 174)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 175)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("enterDigitIntoUInt64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 177)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 176)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 184)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 184)), GALGAS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 184)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 185)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 185)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 185)) ;
  {
  GALGAS_stringlist temp_1 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 189)) ;
  temp_1.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("inCharacterIsNotDecimalDigitError"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 189)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("enterDecimalDigitIntoBigInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 187)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, temp_1, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 186)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 194)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 194)), GALGAS_string ("inBinaryDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 194)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 195)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 195)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 195)) ;
  {
  GALGAS_stringlist temp_2 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 199)) ;
  temp_2.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("inCharacterIsNotBinaryDigitError"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 199)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("enterBinaryDigitIntoBigInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 197)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, temp_2, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 196)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 204)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 204)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 204)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 205)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 205)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 205)) ;
  {
  GALGAS_stringlist temp_3 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 209)) ;
  temp_3.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("inCharacterIsNotHexDigitError"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 209)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("enterHexDigitIntoBigInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 207)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, temp_3, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 206)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 214)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 214)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 214)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 215)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 215)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 215)) ;
  {
  GALGAS_stringlist temp_4 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 219)) ;
  temp_4.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("inCharacterIsNotDecimalDigitError"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 219)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("convertDecimalStringIntoBigInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 217)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, temp_4, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 216)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 224)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 224)), GALGAS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 224)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("negateBigInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 226)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, GALGAS_stringlist::init (inCompiler COMMA_HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 225)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 233)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 233)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 233)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 234)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 234)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 234)) ;
  {
  GALGAS_stringlist temp_5 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 238)) ;
  temp_5.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("inCharacterIsNotBinaryDigitError"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 238)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("convertBinaryStringIntoBigInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 236)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, temp_5, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 235)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 243)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 243)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 243)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 244)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 244)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 244)) ;
  {
  GALGAS_stringlist temp_6 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 248)) ;
  temp_6.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("inCharacterIsNotHexDigitError"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 248)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("convertHexStringIntoBigInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 246)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, temp_6, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 245)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2282 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 254)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 254)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 254)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 255)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 255)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 255)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 256)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 257)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("enterHexDigitIntoUInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 259)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 258)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2282 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 267)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 267)), GALGAS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 267)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 268)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 268)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 268)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 269)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 270)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("enterHexDigitIntoUInt64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 272)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 271)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2282 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 280)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 280)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 280)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 281)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 281)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 281)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 282)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 283)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("convertDecimalStringIntoUInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 285)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 284)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2282 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 293)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 293)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 293)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 294)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 294)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 294)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 295)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 296)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("convertDecimalStringIntoSInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 298)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 297)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 305)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 305)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 305)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 306)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 306)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 306)) ;
  {
  GALGAS_stringlist temp_7 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 310)) ;
  temp_7.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("inNumberTooLargeError"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 310)) ;
  temp_7.enterElement (GALGAS_stringlist_2D_element::init_21_ (GALGAS_string ("inCharacterIsNotDecimalDigitError"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 310)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("convertDecimalStringIntoUInt64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 308)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, temp_7, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 307)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2282 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 316)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 316)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 316)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 317)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 317)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 317)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 318)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 319)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("convertDecimalStringIntoSInt64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 321)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 320)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2282 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 329)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 329)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 329)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 330)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 330)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 330)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 331)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotBinDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 332)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("enterBinDigitIntoUInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 334)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 333)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2282 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 342)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 342)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 342)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 343)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 343)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 343)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 344)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotBinDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 345)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("enterBinDigitIntoUInt64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 347)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 346)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2282 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 355)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 355)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 355)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 356)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 356)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 356)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 357)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotOctDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 358)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("enterOctDigitIntoUInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 360)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 359)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2282 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 368)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 368)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 368)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 369)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 369)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 369)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 370)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotOctDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 371)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("enterOctDigitIntoUInt64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 373)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 372)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2282 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 381)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 381)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 381)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 382)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 382)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 382)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inResultTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 383)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("multiplyUInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 385)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 384)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2282 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 393)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 393)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 393)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 394)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 394)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 394)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inResultTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 395)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("multiplyUInt64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 397)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 396)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2282 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 405)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 405)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 405)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 406)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 406)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 406)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 407)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 408)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("convertHexStringIntoUInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 410)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 409)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2282 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 418)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 418)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 418)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 419)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 419)), GALGAS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 419)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 420)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 421)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("convertHexStringIntoUInt64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 423)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 422)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2282 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 431)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 431)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 431)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 432)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 432)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 432)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 433)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 434)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("convertHexStringIntoSInt"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 436)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 435)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2282 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 444)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 444)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 444)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 445)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 445)), GALGAS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 445)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 446)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 447)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("convertHexStringIntoSInt64"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 449)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 448)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2282 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 457)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 457)), GALGAS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 457)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 458)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 458)), GALGAS_string ("ioUnicodeCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 458)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inUnassignedUnicodeValueError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 459)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("convertUnsignedNumberToUnicodeChar"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 461)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 460)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2282 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 469)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 469)), GALGAS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 469)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 470)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 470)), GALGAS_string ("ioUnicodeCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 470)) ;
  var_errorMessageList_2282.addAssign_operation (GALGAS_string ("inUnassignedHTMLSequenceError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 471)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("convertHTMLSequenceToUnicodeCharacter"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 473)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 472)) ;
  }
  var_lexicalRoutineFormalArgumentList_2226 = GALGAS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2282 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 481)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 481)), GALGAS_string ("inCodePointString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 481)) ;
  var_lexicalRoutineFormalArgumentList_2226.addAssign_operation (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 482)), GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 482)), GALGAS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 482)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("codePointToUnicode"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 484)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2226, var_errorMessageList_2282, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 483)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalFunctionMap!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalFunctionMap_21_ (GALGAS_lexicalFunctionMap & outArgument_outLexicalFunctionMap,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLexicalFunctionMap.drop () ; // Release 'out' argument
  outArgument_outLexicalFunctionMap = GALGAS_lexicalFunctionMap::init (inCompiler COMMA_HERE) ;
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalTypeList_22153 = GALGAS_lexicalFunctionFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalTypeList_22153.addAssign_operation (GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 499)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 499)) ;
  {
  outArgument_outLexicalFunctionMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("toLower"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 501)), inCompiler COMMA_HERE), var_lexicalTypeList_22153, GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 503)), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 500)) ;
  }
  var_lexicalTypeList_22153 = GALGAS_lexicalFunctionFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalTypeList_22153.addAssign_operation (GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 509)), GALGAS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 509)) ;
  {
  outArgument_outLexicalFunctionMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("toUpper"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 511)), inCompiler COMMA_HERE), var_lexicalTypeList_22153, GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 513)), GALGAS_string::makeEmptyString (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 510)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'printPredefinedLexicalActions'
//
//--------------------------------------------------------------------------------------------------

void routine_printPredefinedLexicalActions (Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalRoutineMap var_lexicalRoutineMap_23104 ;
  {
  routine_buildLexicalRoutineMap_21_ (var_lexicalRoutineMap_23104, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 525)) ;
  }
  GALGAS_string var_s_23203 = GALGAS_string::makeEmptyString () ;
  var_s_23203.plusAssign_operation(GALGAS_string ("**************** Prefined lexical routines  ****************\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 528)) ;
  cEnumerator_lexicalRoutineMap enumerator_23346 (var_lexicalRoutineMap_23104, EnumerationOrder::up) ;
  while (enumerator_23346.hasCurrentObject ()) {
    var_s_23203.plusAssign_operation(enumerator_23346.current_lkey (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 530)) ;
    cEnumerator_lexicalRoutineFormalArgumentList enumerator_23457 (enumerator_23346.current_mLexicalRoutineFormalArgumentList (HERE), EnumerationOrder::up) ;
    while (enumerator_23457.hasCurrentObject ()) {
      var_s_23203.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_lexicalFormalModeName (enumerator_23457.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 532)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 532)).add_operation (GALGAS_string ("@"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 532)).add_operation (extensionGetter_lexicalTypeBaseName (enumerator_23457.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 532)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 532)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 532)).add_operation (enumerator_23457.current_mArgumentNameForComment (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 532)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 532)) ;
      enumerator_23457.gotoNextObject () ;
    }
    cEnumerator_stringlist enumerator_23696 (enumerator_23346.current_mErrorMessageList (HERE), EnumerationOrder::up) ;
    const bool bool_0 = true ;
    if (enumerator_23696.hasCurrentObject () && bool_0) {
      var_s_23203.plusAssign_operation(GALGAS_string (" error"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 535)) ;
      while (enumerator_23696.hasCurrentObject () && bool_0) {
        var_s_23203.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_23696.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 536)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 536)) ;
        enumerator_23696.gotoNextObject () ;
        if (enumerator_23696.hasCurrentObject () && bool_0) {
          var_s_23203.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 537)) ;
        }
      }
    }
    var_s_23203.plusAssign_operation(GALGAS_string (" ;\n\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 539)) ;
    enumerator_23346.gotoNextObject () ;
  }
  GALGAS_lexicalFunctionMap var_lexicalFunctionMap_23928 ;
  {
  routine_buildLexicalFunctionMap_21_ (var_lexicalFunctionMap_23928, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 542)) ;
  }
  var_s_23203.plusAssign_operation(GALGAS_string ("**************** Prefined lexical functions ****************\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 544)) ;
  cEnumerator_lexicalFunctionMap enumerator_24163 (var_lexicalFunctionMap_23928, EnumerationOrder::up) ;
  while (enumerator_24163.hasCurrentObject ()) {
    var_s_23203.plusAssign_operation(enumerator_24163.current_lkey (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 546)) ;
    cEnumerator_lexicalFunctionFormalArgumentList enumerator_24234 (enumerator_24163.current_mLexicalTypeList (HERE), EnumerationOrder::up) ;
    while (enumerator_24234.hasCurrentObject ()) {
      var_s_23203.plusAssign_operation(GALGAS_string (" \?@").add_operation (extensionGetter_lexicalTypeBaseName (enumerator_24234.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 548)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 548)).add_operation (enumerator_24234.current_mArgumentNameForComment (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 548)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 548)) ;
      enumerator_24234.gotoNextObject () ;
    }
    var_s_23203.plusAssign_operation(GALGAS_string (" -> @").add_operation (extensionGetter_lexicalTypeBaseName (enumerator_24163.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 550)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 550)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 550)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (ComparisonKind::notEqual, enumerator_24163.current_mReplacementFunctionName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_s_23203.plusAssign_operation(GALGAS_string ("Note: the '").add_operation (enumerator_24163.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 552)).add_operation (GALGAS_string ("' function is obsolete: use '"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 552)).add_operation (enumerator_24163.current_mReplacementFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 552)).add_operation (GALGAS_string ("' function.\n"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 552)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 552)) ;
      }
    }
    var_s_23203.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 554)) ;
    enumerator_24163.gotoNextObject () ;
  }
  var_s_23203.plusAssign_operation(GALGAS_string ("************************************************************"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 557)) ;
  {
  routine_println_3F_ (var_s_23203, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 558)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalOrExpressionAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalOrExpressionAST::getter_generateConditionCode (const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalOrExpressionAST temp_0 = this ;
  result_result = callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 36)) ;
  result_result.plusAssign_operation(GALGAS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 37)) ;
  const GALGAS_lexicalOrExpressionAST temp_1 = this ;
  result_result.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 38)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 38)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterIntervalMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterIntervalMatchAST::getter_generateConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  result_result = GALGAS_string ("testForInputUTF32CharRange (") ;
  const GALGAS_lexicalCharacterIntervalMatchAST temp_0 = this ;
  result_result.plusAssign_operation(temp_0.readProperty_mLowerBound ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 48)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 48)) ;
  result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 49)) ;
  const GALGAS_lexicalCharacterIntervalMatchAST temp_1 = this ;
  result_result.plusAssign_operation(temp_1.readProperty_mUpperBound ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 50)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 50)) ;
  result_result.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 51)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalStringMatchAST::getter_generateConditionCode (const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalStringMatchAST temp_0 = this ;
  result_result = GALGAS_string ("testForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inLexiqueAnalysisContext.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 59)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 59)).add_operation (temp_0.readProperty_mString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 59)) ;
  result_result.plusAssign_operation(GALGAS_string (", true)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 60)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringNotMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalStringNotMatchAST::getter_generateConditionCode (const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("notTestForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inLexiqueAnalysisContext.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 68)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 68)) ;
  const GALGAS_lexicalStringNotMatchAST temp_0 = this ;
  result_result.plusAssign_operation(temp_0.readProperty_mString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 69)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 69)) ;
  result_result.plusAssign_operation(GALGAS_string (", gLexicalMessage_"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 70)) ;
  result_result.plusAssign_operation(constinArgument_inLexiqueAnalysisContext.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 71)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 71)) ;
  const GALGAS_lexicalStringNotMatchAST temp_1 = this ;
  result_result.plusAssign_operation(temp_1.readProperty_mErrorMessage ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 72)) ;
  result_result.plusAssign_operation(GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 73)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterMatchAST::getter_generateConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("testForInputUTF32Char (") ;
  const GALGAS_lexicalCharacterMatchAST temp_0 = this ;
  result_result.plusAssign_operation(temp_0.readProperty_mCharacter ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 82)) ;
  result_result.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 83)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterSetMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterSetMatchAST::getter_generateConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("testForCharWithFunction (") ;
  const GALGAS_lexicalCharacterSetMatchAST temp_0 = this ;
  result_result.plusAssign_operation(temp_0.readProperty_mCharacterSetName ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 92)) ;
  result_result.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 93)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalAttributeInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalAttributeInputArgumentAST temp_0 = this ;
  result_result = GALGAS_string ("token.mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 107)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalCharacterInputArgumentAST temp_0 = this ;
  result_result = temp_0.readProperty_mCharacter ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 114)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalUnsignedInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalUnsignedInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalUnsignedInputArgumentAST temp_0 = this ;
  result_result = temp_0.readProperty_mUnsigned ().readProperty_bigint ().getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 120)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCurrentCharacterInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCurrentCharacterInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("previousChar ()") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalFunctionInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalFunctionInputArgumentAST temp_0 = this ;
  result_result = GALGAS_string ("::scanner_function_").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 134)).add_operation (GALGAS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 134)) ;
  const GALGAS_lexicalFunctionInputArgumentAST temp_1 = this ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_6074 (temp_1.readProperty_mFunctionActualArgumentList (), EnumerationOrder::up) ;
  while (enumerator_6074.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_6074.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 136)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 136)) ;
    enumerator_6074.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 138)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSendTerminalByDefaultAST generateDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalSendTerminalByDefaultAST::getter_generateDefaultSendCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  result_result = GALGAS_string ("token.mTokenCode = kToken_").add_operation (temp_0.readProperty_mDefaultSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 155)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 155)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorByDefaultAST generateDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalErrorByDefaultAST::getter_generateDefaultSendCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalErrorByDefaultAST temp_0 = this ;
  result_result = GALGAS_string ("lexicalError (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 163)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 163)).add_operation (temp_0.readProperty_mDefaultErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 163)).add_operation (GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 163)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalImplicitRuleAST generateLexicalRuleCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalImplicitRuleAST::getter_generateLexicalRuleCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                           const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  GALGAS_tokenSortedlist var_tokenSortedList_8940 ;
  const GALGAS_lexicalImplicitRuleAST temp_0 = this ;
  GALGAS_lexicalExplicitTokenListMap joker_8932 ; // Joker input parameter
  GALGAS_bool joker_8956 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_8932, var_tokenSortedList_8940, joker_8956, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 198)) ;
  result_result = GALGAS_string::makeEmptyString () ;
  cEnumerator_tokenSortedlist enumerator_8991 (var_tokenSortedList_8940, EnumerationOrder::down) ;
  while (enumerator_8991.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("if (testForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 201)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 201)) ;
    result_result.plusAssign_operation(enumerator_8991.current_mName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 202)) ;
    result_result.plusAssign_operation(GALGAS_string (", true)) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 203)) ;
    result_result.plusAssign_operation(GALGAS_string ("  token.mTokenCode = kToken_").add_operation (enumerator_8991.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 204)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 204)) ;
    result_result.plusAssign_operation(GALGAS_string ("  enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 205)) ;
    result_result.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 206)) ;
    enumerator_8991.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalImplicitRuleAST lexicalRuleUsesLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalImplicitRuleAST::getter_lexicalRuleUsesLoopLocalVar (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalExplicitRuleAST generateLexicalRuleCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalExplicitRuleAST::getter_generateLexicalRuleCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                           const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("if (") ;
  const GALGAS_lexicalExplicitRuleAST temp_0 = this ;
  result_result.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 223)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 223)) ;
  result_result.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 224)) ;
  {
  result_result.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 225)) ;
  }
  const GALGAS_lexicalExplicitRuleAST temp_1 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_10136 (temp_1.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_10136.hasCurrentObject ()) {
    result_result.plusAssign_operation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_10136.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 227)) ;
    enumerator_10136.gotoNextObject () ;
  }
  {
  result_result.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 229)) ;
  }
  result_result.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 230)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalExplicitRuleAST lexicalRuleUsesLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalExplicitRuleAST::getter_lexicalRuleUsesLoopLocalVar (Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
  const GALGAS_lexicalExplicitRuleAST temp_0 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_10546 (temp_0.readProperty_mInstructionList (), EnumerationOrder::up) ;
  bool bool_1 = result_result.operator_not (SOURCE_FILE ("lexiqueGeneration.galgas", 237)).isValidAndTrue () ;
  if (enumerator_10546.hasCurrentObject () && bool_1) {
    while (enumerator_10546.hasCurrentObject () && bool_1) {
      result_result = callExtensionGetter_lexicalInstructionUsesLoopLocalVariable ((const cPtr_lexicalInstructionAST *) enumerator_10546.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 238)) ;
      enumerator_10546.gotoNextObject () ;
      if (enumerator_10546.hasCurrentObject ()) {
        bool_1 = result_result.operator_not (SOURCE_FILE ("lexiqueGeneration.galgas", 237)).isValidAndTrue () ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalOrExpressionAST generateObjcCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalOrExpressionAST::getter_generateObjcCocoaConditionCode (const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalOrExpressionAST temp_0 = this ;
  result_result = callExtensionGetter_generateObjcCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 36)) ;
  result_result.plusAssign_operation(GALGAS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 37)) ;
  const GALGAS_lexicalOrExpressionAST temp_1 = this ;
  result_result.plusAssign_operation(callExtensionGetter_generateObjcCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 38)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 38)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterIntervalMatchAST generateObjcCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterIntervalMatchAST::getter_generateObjcCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  result_outGeneratedCode = GALGAS_string ("[self testForInputFromChar:") ;
  const GALGAS_lexicalCharacterIntervalMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mLowerBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 48)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 48)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 48)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" toChar:"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 49)) ;
  const GALGAS_lexicalCharacterIntervalMatchAST temp_1 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_1.readProperty_mUpperBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 50)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 50)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 50)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 51)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringMatchAST generateObjcCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalStringMatchAST::getter_generateObjcCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalStringMatchAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("[self testForInputString:@").add_operation (temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 59)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" advance:YES]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 60)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringNotMatchAST generateObjcCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalStringNotMatchAST::getter_generateObjcCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("[self notTestForInputString:@") ;
  const GALGAS_lexicalStringNotMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 69)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 69)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" error:& scanningOk]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 70)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterMatchAST generateObjcCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterMatchAST::getter_generateObjcCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("[self testForInputChar:") ;
  const GALGAS_lexicalCharacterMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mCharacter ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 79)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 79)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 79)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 80)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterSetMatchAST generateObjcCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterSetMatchAST::getter_generateObjcCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("[self testForCharWithFunction: ") ;
  const GALGAS_lexicalCharacterSetMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mCharacterSetName ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 88)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 89)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalOrExpressionAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalOrExpressionAST::getter_generateSwiftCocoaConditionCode (const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalOrExpressionAST temp_0 = this ;
  result_result = callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 105)) ;
  result_result.plusAssign_operation(GALGAS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 106)) ;
  const GALGAS_lexicalOrExpressionAST temp_1 = this ;
  result_result.plusAssign_operation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 107)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterIntervalMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterIntervalMatchAST::getter_generateSwiftCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  result_outGeneratedCode = GALGAS_string ("self.testForInputFromChar (") ;
  const GALGAS_lexicalCharacterIntervalMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mLowerBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 117)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 117)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", toChar:"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 118)) ;
  const GALGAS_lexicalCharacterIntervalMatchAST temp_1 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_1.readProperty_mUpperBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 119)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 119)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 119)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 120)) ;
//---
  return result_outGeneratedCode ;
}


