#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-24.h"

//--------------------------------------------------------------------------------------------------
// @templateInstructionExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionExpressionForGeneration::objectCompare (const GGS_templateInstructionExpressionForGeneration & inOperand) const {
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

GGS_templateInstructionExpressionForGeneration::GGS_templateInstructionExpressionForGeneration (void) :
GGS_templateInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionExpressionForGeneration GGS_templateInstructionExpressionForGeneration::
init_21_ (const GGS_semanticExpressionForGeneration & in_mExpression,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->templateInstructionExpressionForGeneration_init_21_ (in_mExpression, inCompiler) ;
  const GGS_templateInstructionExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionExpressionForGeneration::
templateInstructionExpressionForGeneration_init_21_ (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                     Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionExpressionForGeneration::GGS_templateInstructionExpressionForGeneration (const cPtr_templateInstructionExpressionForGeneration * inSourcePtr) :
GGS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateInstructionExpressionForGeneration GGS_templateInstructionExpressionForGeneration::class_func_new (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) {
  GGS_templateInstructionExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_templateInstructionExpressionForGeneration (in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_templateInstructionExpressionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_templateInstructionExpressionForGeneration * p = (cPtr_templateInstructionExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionExpressionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionExpressionForGeneration::cPtr_templateInstructionExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionExpressionForGeneration::cPtr_templateInstructionExpressionForGeneration (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
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

acPtr_class * cPtr_templateInstructionExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionExpressionForGeneration (mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ("templateInstructionExpressionForGeneration",
                                                                                                  & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionExpressionForGeneration GGS_templateInstructionExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_templateInstructionExpressionForGeneration result ;
  const GGS_templateInstructionExpressionForGeneration * p = (const GGS_templateInstructionExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext::GGS_semanticContext (void) :
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

GGS_semanticContext::GGS_semanticContext (const GGS_semanticContext & inSource) :
mProperty_routineMap (inSource.mProperty_routineMap),
mProperty_mFunctionMap (inSource.mProperty_mFunctionMap),
mProperty_mFilewrapperMap (inSource.mProperty_mFilewrapperMap),
mProperty_grammarMap (inSource.mProperty_grammarMap),
mProperty_mOptionComponentMapForSemanticAnalysis (inSource.mProperty_mOptionComponentMapForSemanticAnalysis),
mProperty_mLexiqueComponentMapForSemanticAnalysis (inSource.mProperty_mLexiqueComponentMapForSemanticAnalysis),
mProperty_mSyntaxComponentMapForSemanticAnalysis (inSource.mProperty_mSyntaxComponentMapForSemanticAnalysis),
mProperty_galgas_34_ (inSource.mProperty_galgas_34_) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext & GGS_semanticContext::operator = (const GGS_semanticContext & inSource) {
  mProperty_routineMap = inSource.mProperty_routineMap ;
  mProperty_mFunctionMap = inSource.mProperty_mFunctionMap ;
  mProperty_mFilewrapperMap = inSource.mProperty_mFilewrapperMap ;
  mProperty_grammarMap = inSource.mProperty_grammarMap ;
  mProperty_mOptionComponentMapForSemanticAnalysis = inSource.mProperty_mOptionComponentMapForSemanticAnalysis ;
  mProperty_mLexiqueComponentMapForSemanticAnalysis = inSource.mProperty_mLexiqueComponentMapForSemanticAnalysis ;
  mProperty_mSyntaxComponentMapForSemanticAnalysis = inSource.mProperty_mSyntaxComponentMapForSemanticAnalysis ;
  mProperty_galgas_34_ = inSource.mProperty_galgas_34_ ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_semanticContext GGS_semanticContext::init_21_galgas_34_ (const GGS_bool & in_galgas_34_,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_galgas_34_ = in_galgas_34_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::setInitializedProperties (Compiler * inCompiler) {
  mProperty_routineMap = GGS_routineMap::init (inCompiler COMMA_HERE) ;
  mProperty_mFunctionMap = GGS_functionMap::init (inCompiler COMMA_HERE) ;
  mProperty_mFilewrapperMap = GGS_filewrapperMap::init (inCompiler COMMA_HERE) ;
  mProperty_grammarMap = GGS_grammarMap::init (inCompiler COMMA_HERE) ;
  mProperty_mOptionComponentMapForSemanticAnalysis = GGS_optionComponentMapForSemanticAnalysis::init (inCompiler COMMA_HERE) ;
  mProperty_mLexiqueComponentMapForSemanticAnalysis = GGS_lexiqueComponentMapForSemanticAnalysis::init (inCompiler COMMA_HERE) ;
  mProperty_mSyntaxComponentMapForSemanticAnalysis = GGS_syntaxComponentMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext::GGS_semanticContext (const GGS_routineMap & inOperand0,
                                          const GGS_functionMap & inOperand1,
                                          const GGS_filewrapperMap & inOperand2,
                                          const GGS_grammarMap & inOperand3,
                                          const GGS_optionComponentMapForSemanticAnalysis & inOperand4,
                                          const GGS_lexiqueComponentMapForSemanticAnalysis & inOperand5,
                                          const GGS_syntaxComponentMap & inOperand6,
                                          const GGS_bool & inOperand7) :
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

GGS_semanticContext GGS_semanticContext::class_func_new (const GGS_bool & in_galgas4,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_galgas_34_ = in_galgas4 ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_semanticContext::isValid (void) const {
  return mProperty_routineMap.isValid () && mProperty_mFunctionMap.isValid () && mProperty_mFilewrapperMap.isValid () && mProperty_grammarMap.isValid () && mProperty_mOptionComponentMapForSemanticAnalysis.isValid () && mProperty_mLexiqueComponentMapForSemanticAnalysis.isValid () && mProperty_mSyntaxComponentMapForSemanticAnalysis.isValid () && mProperty_galgas_34_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::drop (void) {
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

void GGS_semanticContext::description (String & ioString,
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
//     @semanticContext generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext GGS_semanticContext::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_semanticContext result ;
  const GGS_semanticContext * p = (const GGS_semanticContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticContext *> (p)) {
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

ComparisonResult GGS_optionComponentForGeneration::objectCompare (const GGS_optionComponentForGeneration & inOperand) const {
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

GGS_optionComponentForGeneration::GGS_optionComponentForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_optionComponentForGeneration GGS_optionComponentForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                             const GGS_string & in_implementationCppFileName,
                                                                             const GGS_bool & in_mIsPredefined,
                                                                             const GGS_string & in_mOptionComponentName,
                                                                             const GGS_commandLineOptionSortedList & in_mBoolOptionSortedList,
                                                                             const GGS_commandLineOptionSortedList & in_mUIntOptionSortedList,
                                                                             const GGS_commandLineOptionSortedList & in_mStringOptionSortedList,
                                                                             const GGS_commandLineOptionSortedList & in_mStringListSortedList,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cPtr_optionComponentForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_optionComponentForGeneration (inCompiler COMMA_THERE)) ;
  object->optionComponentForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mIsPredefined, in_mOptionComponentName, in_mBoolOptionSortedList, in_mUIntOptionSortedList, in_mStringOptionSortedList, in_mStringListSortedList, inCompiler) ;
  const GGS_optionComponentForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::
optionComponentForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                          const GGS_string & in_implementationCppFileName,
                                                                                                          const GGS_bool & in_mIsPredefined,
                                                                                                          const GGS_string & in_mOptionComponentName,
                                                                                                          const GGS_commandLineOptionSortedList & in_mBoolOptionSortedList,
                                                                                                          const GGS_commandLineOptionSortedList & in_mUIntOptionSortedList,
                                                                                                          const GGS_commandLineOptionSortedList & in_mStringOptionSortedList,
                                                                                                          const GGS_commandLineOptionSortedList & in_mStringListSortedList,
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

GGS_optionComponentForGeneration::GGS_optionComponentForGeneration (const cPtr_optionComponentForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionComponentForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_optionComponentForGeneration GGS_optionComponentForGeneration::class_func_new (const GGS_bool & in_generateHeader,
                                                                                   const GGS_string & in_implementationCppFileName,
                                                                                   const GGS_bool & in_mIsPredefined,
                                                                                   const GGS_string & in_mOptionComponentName,
                                                                                   const GGS_commandLineOptionSortedList & in_mBoolOptionSortedList,
                                                                                   const GGS_commandLineOptionSortedList & in_mUIntOptionSortedList,
                                                                                   const GGS_commandLineOptionSortedList & in_mStringOptionSortedList,
                                                                                   const GGS_commandLineOptionSortedList & in_mStringListSortedList,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_optionComponentForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_optionComponentForGeneration (in_generateHeader, in_implementationCppFileName, in_mIsPredefined, in_mOptionComponentName, in_mBoolOptionSortedList, in_mUIntOptionSortedList, in_mStringOptionSortedList, in_mStringListSortedList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionComponentForGeneration::readProperty_mIsPredefined (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mIsPredefined ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionComponentForGeneration::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList GGS_optionComponentForGeneration::readProperty_mBoolOptionSortedList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_commandLineOptionSortedList () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mBoolOptionSortedList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList GGS_optionComponentForGeneration::readProperty_mUIntOptionSortedList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_commandLineOptionSortedList () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mUIntOptionSortedList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList GGS_optionComponentForGeneration::readProperty_mStringOptionSortedList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_commandLineOptionSortedList () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mStringOptionSortedList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionSortedList GGS_optionComponentForGeneration::readProperty_mStringListSortedList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_commandLineOptionSortedList () ;
  }else{
    cPtr_optionComponentForGeneration * p = (cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    return p->mProperty_mStringListSortedList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionComponentForGeneration class
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

cPtr_optionComponentForGeneration::cPtr_optionComponentForGeneration (const GGS_bool & in_generateHeader,
                                                                      const GGS_string & in_implementationCppFileName,
                                                                      const GGS_bool & in_mIsPredefined,
                                                                      const GGS_string & in_mOptionComponentName,
                                                                      const GGS_commandLineOptionSortedList & in_mBoolOptionSortedList,
                                                                      const GGS_commandLineOptionSortedList & in_mUIntOptionSortedList,
                                                                      const GGS_commandLineOptionSortedList & in_mStringOptionSortedList,
                                                                      const GGS_commandLineOptionSortedList & in_mStringListSortedList,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
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

acPtr_class * cPtr_optionComponentForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionComponentForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mIsPredefined, mProperty_mOptionComponentName, mProperty_mBoolOptionSortedList, mProperty_mUIntOptionSortedList, mProperty_mStringOptionSortedList, mProperty_mStringListSortedList, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @optionComponentForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentForGeneration ("optionComponentForGeneration",
                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_optionComponentForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionComponentForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionComponentForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentForGeneration GGS_optionComponentForGeneration::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_optionComponentForGeneration result ;
  const GGS_optionComponentForGeneration * p = (const GGS_optionComponentForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionComponentForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionComponentForGeneration_2E_weak::objectCompare (const GGS_optionComponentForGeneration_2E_weak & inOperand) const {
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

GGS_optionComponentForGeneration_2E_weak::GGS_optionComponentForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentForGeneration_2E_weak & GGS_optionComponentForGeneration_2E_weak::operator = (const GGS_optionComponentForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentForGeneration_2E_weak::GGS_optionComponentForGeneration_2E_weak (const GGS_optionComponentForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_optionComponentForGeneration_2E_weak GGS_optionComponentForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_optionComponentForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentForGeneration GGS_optionComponentForGeneration_2E_weak::bang_optionComponentForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_optionComponentForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_optionComponentForGeneration) ;
      result = GGS_optionComponentForGeneration ((cPtr_optionComponentForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @optionComponentForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionComponentForGeneration_2E_weak ("optionComponentForGeneration.weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_optionComponentForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionComponentForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionComponentForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentForGeneration_2E_weak GGS_optionComponentForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_optionComponentForGeneration_2E_weak result ;
  const GGS_optionComponentForGeneration_2E_weak * p = (const GGS_optionComponentForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionComponentForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @arrayTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_arrayTypeForGeneration::objectCompare (const GGS_arrayTypeForGeneration & inOperand) const {
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

GGS_arrayTypeForGeneration::GGS_arrayTypeForGeneration (void) :
GGS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_arrayTypeForGeneration GGS_arrayTypeForGeneration::
init_21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
              const GGS_unifiedTypeMapEntry & in_elementType,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_arrayTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_arrayTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->arrayTypeForGeneration_init_21__21_ (in_mSelfTypeEntry, in_elementType, inCompiler) ;
  const GGS_arrayTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeForGeneration::
arrayTypeForGeneration_init_21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                     const GGS_unifiedTypeMapEntry & in_elementType,
                                     Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_elementType = in_elementType ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayTypeForGeneration::GGS_arrayTypeForGeneration (const cPtr_arrayTypeForGeneration * inSourcePtr) :
GGS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_arrayTypeForGeneration GGS_arrayTypeForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                       const GGS_unifiedTypeMapEntry & in_elementType,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GGS_arrayTypeForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_arrayTypeForGeneration (in_mSelfTypeEntry, in_elementType,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_arrayTypeForGeneration::readProperty_elementType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_arrayTypeForGeneration * p = (cPtr_arrayTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeForGeneration) ;
    return p->mProperty_elementType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @arrayTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_arrayTypeForGeneration::cPtr_arrayTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_elementType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_arrayTypeForGeneration::cPtr_arrayTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                          const GGS_unifiedTypeMapEntry & in_elementType,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry, inCompiler COMMA_THERE),
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

acPtr_class * cPtr_arrayTypeForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_arrayTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_elementType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_arrayTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_elementType.printNonNullClassInstanceProperties ("elementType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @arrayTypeForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayTypeForGeneration ("arrayTypeForGeneration",
                                                                              & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_arrayTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arrayTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arrayTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayTypeForGeneration GGS_arrayTypeForGeneration::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_arrayTypeForGeneration result ;
  const GGS_arrayTypeForGeneration * p = (const GGS_arrayTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arrayTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_arrayTypeForGeneration_2E_weak::objectCompare (const GGS_arrayTypeForGeneration_2E_weak & inOperand) const {
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

GGS_arrayTypeForGeneration_2E_weak::GGS_arrayTypeForGeneration_2E_weak (void) :
GGS_semanticTypeForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayTypeForGeneration_2E_weak & GGS_arrayTypeForGeneration_2E_weak::operator = (const GGS_arrayTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayTypeForGeneration_2E_weak::GGS_arrayTypeForGeneration_2E_weak (const GGS_arrayTypeForGeneration & inSource) :
GGS_semanticTypeForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_arrayTypeForGeneration_2E_weak GGS_arrayTypeForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_arrayTypeForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayTypeForGeneration GGS_arrayTypeForGeneration_2E_weak::bang_arrayTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_arrayTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_arrayTypeForGeneration) ;
      result = GGS_arrayTypeForGeneration ((cPtr_arrayTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @arrayTypeForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayTypeForGeneration_2E_weak ("arrayTypeForGeneration.weak",
                                                                                      & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_arrayTypeForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayTypeForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arrayTypeForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arrayTypeForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayTypeForGeneration_2E_weak GGS_arrayTypeForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_arrayTypeForGeneration_2E_weak result ;
  const GGS_arrayTypeForGeneration_2E_weak * p = (const GGS_arrayTypeForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arrayTypeForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayTypeForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarManager insertDeclaredLocalVariable'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertDeclaredLocalVariable (GGS_localVarManager & ioObject,
                                                  const GGS_lstring constinArgument_inVarName,
                                                  const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                  const GGS_string constinArgument_inCppName,
                                                  const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::init (inCompiler COMMA_HERE), GGS_localVarValuation::class_func_declared (GGS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 31)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@routineMap insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (GGS_routineMap & ioObject,
                                const GGS_lstring constinArgument_inRoutineName,
                                const GGS_formalParameterSignature constinArgument_inRoutineSignature,
                                const GGS_bool constinArgument_inIsFilePrivate,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineArgumentMap var_routineArgumentMap_2923 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_routineMap temp_1 = ioObject ;
    test_0 = temp_1.readProperty_mInternalRoutineMap ().getter_hasKey (constinArgument_inRoutineName.readProperty_string () COMMA_SOURCE_FILE ("routineMap.galgas", 72)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_routineMap temp_2 = ioObject ;
      temp_2.readProperty_mInternalRoutineMap ().method_searchKey (constinArgument_inRoutineName, var_routineArgumentMap_2923, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 73)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_routineArgumentMap_2923 = GGS_routineArgumentMap::init (inCompiler COMMA_HERE) ;
  }
  GGS_string var_routineArguments_3137 = function_routineArgumentFromFormalParameters (constinArgument_inRoutineSignature, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 77)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_routineArgumentMap_2923.getter_hasKey (var_routineArguments_3137 COMMA_SOURCE_FILE ("routineMap.galgas", 78)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), GGS_string ("duplicated declaration of the ").add_operation (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 79)).add_operation (var_routineArguments_3137, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 79)).add_operation (GGS_string (" routine"), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 79)), fixItArray4  COMMA_SOURCE_FILE ("routineMap.galgas", 79)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    {
    var_routineArgumentMap_2923.setter_insertKey (GGS_lstring::init_21__21_ (var_routineArguments_3137, constinArgument_inRoutineName.readProperty_location (), inCompiler COMMA_HERE), constinArgument_inRoutineSignature, constinArgument_inIsFilePrivate, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 81)) ;
    }
    {
    ioObject.mProperty_mInternalRoutineMap.setter_insertOrReplace (constinArgument_inRoutineName, var_routineArgumentMap_2923 COMMA_SOURCE_FILE ("routineMap.galgas", 86)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------

GGS_analysisContext::GGS_analysisContext (void) :
mProperty_semanticContext (),
mProperty_predefinedTypes (),
mProperty_selfObjectCppName (),
mProperty_selfAvailability (),
mProperty_selfObjectCppPrefixForAccessingProperty (),
mProperty_requiresSelfForAccessingProperty () {
}

//--------------------------------------------------------------------------------------------------

GGS_analysisContext::GGS_analysisContext (const GGS_analysisContext & inSource) :
mProperty_semanticContext (inSource.mProperty_semanticContext),
mProperty_predefinedTypes (inSource.mProperty_predefinedTypes),
mProperty_selfObjectCppName (inSource.mProperty_selfObjectCppName),
mProperty_selfAvailability (inSource.mProperty_selfAvailability),
mProperty_selfObjectCppPrefixForAccessingProperty (inSource.mProperty_selfObjectCppPrefixForAccessingProperty),
mProperty_requiresSelfForAccessingProperty (inSource.mProperty_requiresSelfForAccessingProperty) {
}

//--------------------------------------------------------------------------------------------------

GGS_analysisContext & GGS_analysisContext::operator = (const GGS_analysisContext & inSource) {
  mProperty_semanticContext = inSource.mProperty_semanticContext ;
  mProperty_predefinedTypes = inSource.mProperty_predefinedTypes ;
  mProperty_selfObjectCppName = inSource.mProperty_selfObjectCppName ;
  mProperty_selfAvailability = inSource.mProperty_selfAvailability ;
  mProperty_selfObjectCppPrefixForAccessingProperty = inSource.mProperty_selfObjectCppPrefixForAccessingProperty ;
  mProperty_requiresSelfForAccessingProperty = inSource.mProperty_requiresSelfForAccessingProperty ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_analysisContext GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty_21_requiresSelfForAccessingProperty (const GGS_semanticContext & in_semanticContext,
                                                                                                                                                                               const GGS_predefinedTypes & in_predefinedTypes,
                                                                                                                                                                               const GGS_string & in_selfObjectCppName,
                                                                                                                                                                               const GGS_selfAvailability & in_selfAvailability,
                                                                                                                                                                               const GGS_string & in_selfObjectCppPrefixForAccessingProperty,
                                                                                                                                                                               const GGS_bool & in_requiresSelfForAccessingProperty,
                                                                                                                                                                               Compiler * inCompiler
                                                                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_analysisContext result ;
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

void GGS_analysisContext::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_analysisContext::GGS_analysisContext (const GGS_semanticContext & inOperand0,
                                          const GGS_predefinedTypes & inOperand1,
                                          const GGS_string & inOperand2,
                                          const GGS_selfAvailability & inOperand3,
                                          const GGS_string & inOperand4,
                                          const GGS_bool & inOperand5) :
mProperty_semanticContext (inOperand0),
mProperty_predefinedTypes (inOperand1),
mProperty_selfObjectCppName (inOperand2),
mProperty_selfAvailability (inOperand3),
mProperty_selfObjectCppPrefixForAccessingProperty (inOperand4),
mProperty_requiresSelfForAccessingProperty (inOperand5) {
}

//--------------------------------------------------------------------------------------------------

GGS_analysisContext GGS_analysisContext::class_func_new (const GGS_semanticContext & in_semanticContext,
                                                         const GGS_predefinedTypes & in_predefinedTypes,
                                                         const GGS_string & in_selfObjectCppName,
                                                         const GGS_selfAvailability & in_selfAvailability,
                                                         const GGS_string & in_selfObjectCppPrefixForAccessingProperty,
                                                         const GGS_bool & in_requiresSelfForAccessingProperty,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_analysisContext result ;
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

bool GGS_analysisContext::isValid (void) const {
  return mProperty_semanticContext.isValid () && mProperty_predefinedTypes.isValid () && mProperty_selfObjectCppName.isValid () && mProperty_selfAvailability.isValid () && mProperty_selfObjectCppPrefixForAccessingProperty.isValid () && mProperty_requiresSelfForAccessingProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_analysisContext::drop (void) {
  mProperty_semanticContext.drop () ;
  mProperty_predefinedTypes.drop () ;
  mProperty_selfObjectCppName.drop () ;
  mProperty_selfAvailability.drop () ;
  mProperty_selfObjectCppPrefixForAccessingProperty.drop () ;
  mProperty_requiresSelfForAccessingProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_analysisContext::description (String & ioString,
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
//     @analysisContext generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_analysisContext ("analysisContext",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_analysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_analysisContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_analysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_analysisContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_analysisContext GGS_analysisContext::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_analysisContext result ;
  const GGS_analysisContext * p = (const GGS_analysisContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_analysisContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("analysisContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@productionRuleListForGrammarAnalysis.element displayRule'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_displayRule (const GGS_productionRuleListForGrammarAnalysis_2E_element inObject,
                                  const GGS_string constinArgument_inSyntaxComponentName,
                                  GGS_string & ioArgument_ioGeneratedCode,
                                  Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_currentNode_5054 = GGS_string ("P0start") ;
  GGS_rowList temp_0 = GGS_rowList::init (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 118)) ;
  GGS__32_stringlist temp_1 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 118)) ;
  temp_1.plusPlusAssignOperation (GGS__32_stringlist_2E_element::init_21__21_ (var_currentNode_5054, GGS_string ("[firstPoint] ()"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 118)) ;
  temp_0.plusPlusAssignOperation (GGS_rowList_2E_element::init_21_ (temp_1, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 118)) ;
  GGS_rowList var_rowArray_5093 = temp_0 ;
  GGS_string var_arrows_5161 = GGS_string::makeEmptyString () ;
  GGS_string var_arrowStyle_5187 = GGS_string ("--") ;
  GGS_uint var_column_5217 = GGS_uint (uint32_t (1U)) ;
  GGS_uint var_unusedMaxUsedRowIndex_5240 = GGS_uint (uint32_t (0U)) ;
  const GGS_productionRuleListForGrammarAnalysis_2E_element temp_2 = inObject ;
  UpEnumerator_syntaxInstructionListForGrammarAnalysis enumerator_5283 (temp_2.readProperty_mInstructionList ()) ;
  while (enumerator_5283.hasCurrentObject ()) {
    callExtensionMethod_tikzNodeForSyntaxInstruction ((cPtr_abstractSyntaxInstructionForGrammarAnalysis *) enumerator_5283.current_mInstruction (HERE).ptr (), var_rowArray_5093, GGS_uint (uint32_t (0U)), var_column_5217, var_currentNode_5054, var_arrowStyle_5187, var_arrows_5161, var_unusedMaxUsedRowIndex_5240, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 124)) ;
    enumerator_5283.gotoNextObject () ;
  }
  GGS_string var_lastNodeName_5681 ;
  {
  extensionSetter_appendRow (var_rowArray_5093, GGS_string ("[lastPoint] ()"), GGS_uint (uint32_t (0U)), var_column_5217, var_lastNodeName_5681, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 136)) ;
  }
  var_arrows_5161.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (var_currentNode_5054, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).add_operation (GGS_string (") -- ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).add_operation (var_lastNodeName_5681, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 137)) ;
  const GGS_productionRuleListForGrammarAnalysis_2E_element temp_3 = inObject ;
  GGS_location var_loc_5801 = temp_3.readProperty_mLeftNonterminalSymbol ().readProperty_location () ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("\\ruleSubsection{").add_operation (function_escapeForTex (constinArgument_inSyntaxComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 140)).add_operation (GGS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 141)).add_operation (function_escapeForTex (var_loc_5801.getter_file (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 143)).getter_lastPathComponent (SOURCE_FILE ("production-rules-in-tex.galgas", 143)).getter_deletingPathExtension (SOURCE_FILE ("production-rules-in-tex.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 142)).add_operation (GGS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 143)).add_operation (function_escapeForTex (var_loc_5801.getter_startLine (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 144)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 144)).add_operation (GGS_string ("}\n\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 144)).add_operation (GGS_string ("\\begin{tikzpicture}\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 145)).add_operation (GGS_string ("  \\matrix[column sep=\\ruleMatrixColumnSeparation, row sep=\\ruleMatrixRowSeparation] {\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 140)) ;
  DownEnumerator_rowList enumerator_6215 (var_rowArray_5093) ;
  while (enumerator_6215.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("    "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 149)) ;
    UpEnumerator__32_stringlist enumerator_6287 (enumerator_6215.current_columns (HERE)) ;
    while (enumerator_6287.hasCurrentObject ()) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, enumerator_6287.current (HERE).readProperty_mValue_30_ ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("& "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 152)) ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("\\node (").add_operation (enumerator_6287.current (HERE).readProperty_mValue_30_ (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)).add_operation (enumerator_6287.current (HERE).readProperty_mValue_31_ (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)).add_operation (GGS_string ("; & "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 154)) ;
      }
      enumerator_6287.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("\\\\\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 157)) ;
    enumerator_6215.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  };\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 159)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_arrows_5161, inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 161)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("\\end{tikzpicture}\n\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 162)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addICNS_file'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addICNS_5F_file (GGS_XcodeProjectDescriptor & ioObject,
                                      const GGS_string constinArgument_inFileName,
                                      GGS_string & outArgument_outFileRef,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 32)) ;
  }
  ioObject.mProperty_mICNS_5F_fileList.addAssignOperation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 33)) ;
}


//--------------------------------------------------------------------------------------------------

GGS_templateAnalysisContext::GGS_templateAnalysisContext (void) :
mProperty_mSemanticContext (),
mProperty_mPredefinedTypes (),
mProperty_mTemplateVariableMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateAnalysisContext::GGS_templateAnalysisContext (const GGS_templateAnalysisContext & inSource) :
mProperty_mSemanticContext (inSource.mProperty_mSemanticContext),
mProperty_mPredefinedTypes (inSource.mProperty_mPredefinedTypes),
mProperty_mTemplateVariableMap (inSource.mProperty_mTemplateVariableMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateAnalysisContext & GGS_templateAnalysisContext::operator = (const GGS_templateAnalysisContext & inSource) {
  mProperty_mSemanticContext = inSource.mProperty_mSemanticContext ;
  mProperty_mPredefinedTypes = inSource.mProperty_mPredefinedTypes ;
  mProperty_mTemplateVariableMap = inSource.mProperty_mTemplateVariableMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_templateAnalysisContext GGS_templateAnalysisContext::init_21__21__21_ (const GGS_semanticContext & in_mSemanticContext,
                                                                           const GGS_predefinedTypes & in_mPredefinedTypes,
                                                                           const GGS_templateVariableMap & in_mTemplateVariableMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateAnalysisContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSemanticContext = in_mSemanticContext ;
  result.mProperty_mPredefinedTypes = in_mPredefinedTypes ;
  result.mProperty_mTemplateVariableMap = in_mTemplateVariableMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateAnalysisContext::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateAnalysisContext::GGS_templateAnalysisContext (const GGS_semanticContext & inOperand0,
                                                          const GGS_predefinedTypes & inOperand1,
                                                          const GGS_templateVariableMap & inOperand2) :
mProperty_mSemanticContext (inOperand0),
mProperty_mPredefinedTypes (inOperand1),
mProperty_mTemplateVariableMap (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateAnalysisContext GGS_templateAnalysisContext::class_func_new (const GGS_semanticContext & in_mSemanticContext,
                                                                         const GGS_predefinedTypes & in_mPredefinedTypes,
                                                                         const GGS_templateVariableMap & in_mTemplateVariableMap,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateAnalysisContext result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSemanticContext = in_mSemanticContext ;
  result.mProperty_mPredefinedTypes = in_mPredefinedTypes ;
  result.mProperty_mTemplateVariableMap = in_mTemplateVariableMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateAnalysisContext::isValid (void) const {
  return mProperty_mSemanticContext.isValid () && mProperty_mPredefinedTypes.isValid () && mProperty_mTemplateVariableMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateAnalysisContext::drop (void) {
  mProperty_mSemanticContext.drop () ;
  mProperty_mPredefinedTypes.drop () ;
  mProperty_mTemplateVariableMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateAnalysisContext::description (String & ioString,
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
//     @templateAnalysisContext generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateAnalysisContext ("templateAnalysisContext",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateAnalysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateAnalysisContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateAnalysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateAnalysisContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateAnalysisContext GGS_templateAnalysisContext::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_templateAnalysisContext result ;
  const GGS_templateAnalysisContext * p = (const GGS_templateAnalysisContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateAnalysisContext *> (p)) {
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

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (Compiler * /* inCompiler */,
                                                                              const GGS_string & in_PROJECT_5F_NAME
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
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_cocoa'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (Compiler * /* inCompiler */,
                                                                            const GGS_string & in_PROJECT_5F_NAME
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("gui cocoa {\n  with option ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_options\n\n  with lexique ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_lexique {\n    fileExtension: \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\"\n    title: \"Source\"\n    blockComment : \"#\"\n  }\n\n}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_grammar'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (Compiler * /* inCompiler */,
                                                                              const GGS_string & in_PROJECT_5F_NAME
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("grammar ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_grammar \"LL1\" {\n  syntax ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_syntax\n  <start_symbol>\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_lexique'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (Compiler * /* inCompiler */,
                                                                              const GGS_string & in_PROJECT_5F_NAME
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("lexique ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_lexique {\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Identifiers and keywords                                                                     \n#-----------------------------------------------------------------------------------------------------------------------\n\n@string tokenString\n\nstyle keywordsStyle -> \"Keywords\"\n\n$identifier$ ! tokenString error message \"an identifier\"\n\n#--- This is the keyword list\nlist keyWordList style keywordsStyle error message \"the '%K' keyword\" {\n  \"begin\",\n  \"end\"\n}\n\nrule 'a'->'z' |  'A'->'Z' {\n  repeat\n    enterCharacterIntoString (!\?tokenString !*)\n  while 'a'->'z' | 'A'->'Z' | '_' | '0'->'9' :\n  end\n  send search tokenString in keyWordList default $identifier$\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Literal decimal integers                                                                     \n#-----------------------------------------------------------------------------------------------------------------------\n\nstyle integerStyle -> \"Integer Constants\"\n@uint uint32value\n$integer$ !uint32value style integerStyle error message \"a 32-bit unsigned decimal number\"\n\nmessage decimalNumberTooLarge : \"decimal number too large\"\nmessage internalError : \"internal error\"\n\nrule '0'->'9' {\n  enterCharacterIntoString (!\?tokenString !*)\n  repeat\n  while '0'->'9' :\n    enterCharacterIntoString (!\?tokenString !*)\n  while '_' :\n  end\n  convertDecimalStringIntoUInt (!tokenString !\?uint32value error decimalNumberTooLarge, internalError)\n  send $integer$\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Literal character strings                                                                    \n#-----------------------------------------------------------------------------------------------------------------------\n\nstyle stringStyle -> \"String Constants\"\n$\"string\"$ ! tokenString style stringStyle %nonAtomicSelection error message \"a character string constant \\\"...\\\"\"\n\n\nmessage incorrectStringEnd : \"string does not end with '\\\"'\"\n\nrule '\"' {\n  repeat\n   while ' ' | '!' | '#'-> '\\uFFFD' :\n    enterCharacterIntoString (!\?tokenString !*)\n  end\n  select\n  case '\"' :\n    send $\"string\"$\n  default\n    error incorrectStringEnd\n  end\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Delimiters                                                                                   \n#-----------------------------------------------------------------------------------------------------------------------\n\nstyle delimitersStyle -> \"Delimiters\"\nlist delimitorsList style delimitersStyle error message \"the '%K' delimitor\" {\n  \":\",    \",\",    \";\",   \"!\",  \"{\",  \"}\", \"->\", \"@\", \"*\", \"-\"\n}\n\nrule list delimitorsList\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Comments                                                                                     \n#-----------------------------------------------------------------------------------------------------------------------\n\nstyle commentStyle -> \"Comments\"\n$comment$ style commentStyle %nonAtomicSelection error message \"a comment\"\nrule '#' {\n  repeat\n  while '\\u0001' -> '\\u0009' | '\\u000B' | '\\u000C' | '\\u000E' -> '\\uFFFD' :\n  end\n  drop $comment$\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Separators                                                                                   \n#-----------------------------------------------------------------------------------------------------------------------\n\nrule '\\u0001' -> ' ' {\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_options'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (Compiler * /* inCompiler */,
                                                                              const GGS_string & in_PROJECT_5F_NAME
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("option ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_options {\n\n# ADD YOUR CODE\n\n}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_program'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (Compiler * /* inCompiler */,
                                                                              const GGS_string & in_PROJECT_5F_NAME
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
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_semantics'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (Compiler * /* inCompiler */,
                                                                                const GGS_string & /* in_PROJECT_5F_NAME */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n# ADD YOUR CODE\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_syntax'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (Compiler * /* inCompiler */,
                                                                             const GGS_string & in_PROJECT_5F_NAME
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("syntax ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_syntax (") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_lexique) {\n\nrule <start_symbol> {\n  # ADD YOUR SYNTAX INSTRUCTIONS\n}\n\n# ADD OTHER RULES\n\n}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'performProjectCreation?'
//
//--------------------------------------------------------------------------------------------------

void routine_performProjectCreation_3F_ (const GGS_string constinArgument_inProjectPath,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_projectName_2515 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas", 47)) ;
  GGS_string var_galgas_5F_sources_5F_DIR_2598 = constinArgument_inProjectPath.add_operation (GGS_string ("/galgas-sources"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 49)) ;
  var_galgas_5F_sources_5F_DIR_2598.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)) ;
  GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (inCompiler, var_projectName_2515 COMMA_SOURCE_FILE ("projectCreation.galgas", 51))).method_writeToFile (constinArgument_inProjectPath.add_operation (GGS_string ("/+"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)).add_operation (var_projectName_2515, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)).add_operation (GGS_string (".galgasProject"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)) ;
  GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (inCompiler, var_projectName_2515 COMMA_SOURCE_FILE ("projectCreation.galgas", 52))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2598.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 52)).add_operation (var_projectName_2515, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 52)).add_operation (GGS_string ("-cocoa.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 52)) ;
  GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (inCompiler, var_projectName_2515 COMMA_SOURCE_FILE ("projectCreation.galgas", 53))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2598.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 53)).add_operation (var_projectName_2515, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 53)).add_operation (GGS_string ("-grammar.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 53)) ;
  GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (inCompiler, var_projectName_2515 COMMA_SOURCE_FILE ("projectCreation.galgas", 54))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2598.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 54)).add_operation (var_projectName_2515, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 54)).add_operation (GGS_string ("-lexique.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 54)) ;
  GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (inCompiler, var_projectName_2515 COMMA_SOURCE_FILE ("projectCreation.galgas", 55))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2598.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 55)).add_operation (var_projectName_2515, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 55)).add_operation (GGS_string ("-options.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 55)) ;
  GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (inCompiler, var_projectName_2515 COMMA_SOURCE_FILE ("projectCreation.galgas", 56))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2598.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 56)).add_operation (var_projectName_2515, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 56)).add_operation (GGS_string ("-program.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 56)) ;
  GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (inCompiler, var_projectName_2515 COMMA_SOURCE_FILE ("projectCreation.galgas", 57))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2598.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 57)).add_operation (var_projectName_2515, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 57)).add_operation (GGS_string ("-semantics.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 57)) ;
  GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (inCompiler, var_projectName_2515 COMMA_SOURCE_FILE ("projectCreation.galgas", 58))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2598.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 58)).add_operation (var_projectName_2515, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 58)).add_operation (GGS_string ("-syntax.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 58)) ;
  {
  routine_println_3F_ (GGS_string ("*** DONE ***"), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 60)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'projectCreation?'
//
//--------------------------------------------------------------------------------------------------

void routine_projectCreation_3F_ (const GGS_string constinArgument_inProjectPath,
                                  Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inProjectPath.getter_count (SOURCE_FILE ("projectCreation.galgas", 66)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_println_3F_ (GGS_string ("*** PERFORM PROJECT CREATION (--create-project=").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 67)).add_operation (GGS_string (" option) ***"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 67)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 67)) ;
      }
      GGS_string var_projectName_4256 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas", 69)) ;
      GGS_bool var_ok_4318 = var_projectName_4256.getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 70)).getter_isalpha (SOURCE_FILE ("projectCreation.galgas", 70)) ;
      GGS_uint var_idx_4381 = GGS_uint (uint32_t (1U)) ;
      if (var_projectName_4256.getter_count (SOURCE_FILE ("projectCreation.galgas", 72)).isValid ()) {
        uint32_t variant_4393 = var_projectName_4256.getter_count (SOURCE_FILE ("projectCreation.galgas", 72)).uintValue () ;
        bool loop_4393 = true ;
        while (loop_4393) {
          loop_4393 = GGS_bool (ComparisonKind::lowerThan, var_idx_4381.objectCompare (var_projectName_4256.getter_count (SOURCE_FILE ("projectCreation.galgas", 73)))).operator_and (var_ok_4318 COMMA_SOURCE_FILE ("projectCreation.galgas", 73)).isValid () ;
          if (loop_4393) {
            loop_4393 = GGS_bool (ComparisonKind::lowerThan, var_idx_4381.objectCompare (var_projectName_4256.getter_count (SOURCE_FILE ("projectCreation.galgas", 73)))).operator_and (var_ok_4318 COMMA_SOURCE_FILE ("projectCreation.galgas", 73)).boolValue () ;
          }
          if (loop_4393 && (0 == variant_4393)) {
            loop_4393 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("projectCreation.galgas", 72)) ;
          }
          if (loop_4393) {
            variant_4393 -- ;
            GGS_char var_c_4482 = var_projectName_4256.getter_characterAtIndex (var_idx_4381, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 74)) ;
            var_ok_4318 = var_c_4482.getter_isalnum (SOURCE_FILE ("projectCreation.galgas", 75)).operator_or (GGS_bool (ComparisonKind::equal, var_c_4482.objectCompare (GGS_char (TO_UNICODE (95)))) COMMA_SOURCE_FILE ("projectCreation.galgas", 75)) ;
            var_idx_4381.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 76)) ;
          }
        }
      }
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_ok_4318.operator_not (SOURCE_FILE ("projectCreation.galgas", 78)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          {
          routine_println_3F_ (GGS_string ("** Cannot create GALGAS project: the project name '").add_operation (var_projectName_4256, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 79)).add_operation (GGS_string ("' should begin by a letter followed by zero, one or more letters, digits and underscore character."), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 80)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 79)) ;
          }
        }
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_ok_4318.boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          var_ok_4318 = constinArgument_inProjectPath.getter_directoryExists (SOURCE_FILE ("projectCreation.galgas", 84)).operator_not (SOURCE_FILE ("projectCreation.galgas", 84)) ;
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = var_ok_4318.operator_not (SOURCE_FILE ("projectCreation.galgas", 85)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              {
              routine_println_3F_ (GGS_string ("*** Cannot create GALGAS project: '").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 86)).add_operation (GGS_string ("' directory already exists.***"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 86)) ;
              }
            }
          }
        }
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = var_ok_4318.boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          {
          routine_performProjectCreation_3F_ (constinArgument_inProjectPath, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 90)) ;
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

void routine_enterTemplateString_26_ (GGS_templateInstructionListAST & ioArgument_outResultingInstructionList,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_21713 = GGS_string::class_func_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas", 605)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, var_s_21713.getter_count (SOURCE_FILE ("templateSyntax.galgas", 606)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_outResultingInstructionList.addAssignOperation (GGS_templateInstructionStringAST::init_21_ (var_s_21713, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas", 607)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateGetterCallInExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateGetterCallInExpressionAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_receiverExpression_3844 ;
  const GGS_templateGetterCallInExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_receiverExpression_3844, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 77)) ;
  GGS_unifiedTypeMapEntry var_receiverType_3894 = var_receiverExpression_3844.readProperty_mResultType () ;
  GGS_string var_receiverTypeName_3946 = extensionGetter_definition (var_receiverType_3894, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 85)).readProperty_typeName ().readProperty_string () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    GGS_bool test_2 = extensionGetter_definition (var_receiverType_3894, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 87)).readProperty_typeKind ().getter_isStructType (SOURCE_FILE ("templateAnalysis.galgas", 87)) ;
    if (GalgasBool::boolTrue != test_2.boolEnum ()) {
      test_2 = extensionGetter_definition (var_receiverType_3894, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 87)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 87)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateGetterCallInExpressionAST temp_3 = this ;
      test_1 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 88)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        const GGS_templateGetterCallInExpressionAST temp_4 = this ;
        const GGS_propertyMap_2E_element var_theGetter_4218 = extensionGetter_definition (var_receiverType_3894, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 89)).readProperty_propertyMap ().readSubscript__3F_ (temp_4.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
        if (!extensionGetter_definition (var_receiverType_3894, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 89)).readProperty_propertyMap ().readSubscript__3F_ (temp_4.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
          test_1 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_1) {
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            test_5 = GGS_bool (gOption_galgas_5F_cli_5F_options_errorPropertyGetterCall.readProperty_value ()).boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              const GGS_templateGetterCallInExpressionAST temp_6 = this ;
              TC_Array <FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (temp_6.readProperty_mExpressionLocation (), GGS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 91)) ;
            }
          }
          const GGS_templateGetterCallInExpressionAST temp_8 = this ;
          extensionMethod_checkSetAccess (var_theGetter_4218.readProperty_mAccessControl (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("templateAnalysis.galgas", 93)), temp_8.readProperty_mGetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 93)) ;
          const GGS_templateGetterCallInExpressionAST temp_9 = this ;
          const GGS_templateGetterCallInExpressionAST temp_10 = this ;
          outArgument_outExpression = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_theGetter_4218.readProperty_mPropertyType (), temp_9.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_3844, temp_10.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_getterMap var_getterMap_4788 = extensionGetter_definition (var_receiverType_3894, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 102)).readProperty_getterMap () ;
    GGS_functionSignature var_getterFormalArgumentTypeList_4889 ;
    GGS_methodKind var_kind_4938 ;
    GGS_bool var_hasCompilerArgument_4957 ;
    GGS_unifiedTypeMapEntry var_returnedType_5006 ;
    GGS_stringlist var_fieldList_5027 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
    const GGS_templateGetterCallInExpressionAST temp_11 = this ;
    GGS_string var_actualGetterName_5062 = temp_11.readProperty_mGetterName ().readProperty_string () ;
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_templateGetterCallInExpressionAST temp_13 = this ;
      test_12 = var_getterMap_4788.getter_hasKey (temp_13.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 110)).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        GGS_string var_actualGetterNameString_5344 ;
        const GGS_templateGetterCallInExpressionAST temp_14 = this ;
        GGS_location joker_5266 ; // Joker input parameter
        GGS_methodQualifier joker_5328 ; // Joker input parameter
        var_getterMap_4788.method_searchKey (temp_14.readProperty_mGetterName (), var_kind_4938, var_getterFormalArgumentTypeList_4889, joker_5266, var_hasCompilerArgument_4957, var_returnedType_5006, joker_5328, var_actualGetterNameString_5344, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 111)) ;
        GalgasBool test_15 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_15) {
          test_15 = GGS_bool (ComparisonKind::notEqual, var_actualGetterNameString_5344.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_15) {
            var_actualGetterName_5062 = var_actualGetterNameString_5344 ;
            GalgasBool test_16 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_16) {
              test_16 = GGS_bool (gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall.readProperty_value ()).boolEnum () ;
              if (GalgasBool::boolTrue == test_16) {
                const GGS_templateGetterCallInExpressionAST temp_17 = this ;
                TC_Array <FixItDescription> fixItArray18 ;
                appendFixItActions (fixItArray18, EnumFixItKind::fixItReplace, var_actualGetterName_5062) ;
                inCompiler->emitSemanticError (temp_17.readProperty_mGetterName ().readProperty_location (), GGS_string ("obsolete getter"), fixItArray18  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 123)) ;
              }
            }
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      GGS_uint var_matchingReaderCount_5677 = GGS_uint (uint32_t (0U)) ;
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_3894, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 128)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("templateAnalysis.galgas", 128)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          var_getterFormalArgumentTypeList_4889 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
          var_hasCompilerArgument_4957 = GGS_bool (true) ;
          var_returnedType_5006 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("templateAnalysis.galgas", 131)) ;
          var_kind_4938 = GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas", 132)) ;
          UpEnumerator_typedPropertyList enumerator_5996 (extensionGetter_definition (var_receiverType_3894, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 133)).readProperty_currentTypedPropertyList ()) ;
          while (enumerator_5996.hasCurrentObject ()) {
            GGS_getterMap var_aMap_6081 = extensionGetter_definition (enumerator_5996.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 134)).readProperty_getterMap () ;
            const GGS_templateGetterCallInExpressionAST temp_20 = this ;
            const cMapElement_getterMap * objectArray_6140 = (const cMapElement_getterMap *) var_aMap_6081.readAccessForWithInstruction (temp_20.readProperty_mGetterName ().readProperty_string ()) ;
            if (nullptr != objectArray_6140) {
                macroValidSharedObject (objectArray_6140, cMapElement_getterMap) ;
              var_matchingReaderCount_5677.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 136)) ;
              var_getterFormalArgumentTypeList_4889 = objectArray_6140->mProperty_mArgumentTypeList ;
              var_hasCompilerArgument_4957 = objectArray_6140->mProperty_mHasCompilerArgument ;
              var_returnedType_5006 = objectArray_6140->mProperty_mReturnedType ;
              var_kind_4938 = objectArray_6140->mProperty_mKind ;
              GalgasBool test_21 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_21) {
                test_21 = GGS_bool (ComparisonKind::notEqual, objectArray_6140->mProperty_mGetterNameThatObsoletesInvokationName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_21) {
                  var_actualGetterName_5062 = objectArray_6140->mProperty_mGetterNameThatObsoletesInvokationName ;
                }
              }
              var_fieldList_5027.addAssignOperation (enumerator_5996.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 144)) ;
            }
            enumerator_5996.gotoNextObject () ;
          }
          GalgasBool test_22 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_22) {
            test_22 = GGS_bool (ComparisonKind::equal, var_matchingReaderCount_5677.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_22) {
              const GGS_templateGetterCallInExpressionAST temp_23 = this ;
              const GGS_templateGetterCallInExpressionAST temp_24 = this ;
              TC_Array <FixItDescription> fixItArray25 ;
              inCompiler->emitSemanticError (temp_23.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3946, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 149)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 149)).add_operation (temp_24.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 149)).add_operation (GGS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 149)), fixItArray25  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 148)) ;
              var_getterFormalArgumentTypeList_4889.drop () ; // Release error dropped variable
              var_hasCompilerArgument_4957.drop () ; // Release error dropped variable
              var_returnedType_5006.drop () ; // Release error dropped variable
              var_kind_4938.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_22) {
            GalgasBool test_26 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_26) {
              test_26 = GGS_bool (ComparisonKind::greaterThan, var_matchingReaderCount_5677.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_26) {
                GGS_string var_s_7011 = GGS_string::makeEmptyString () ;
                UpEnumerator_stringlist enumerator_7033 (var_fieldList_5027) ;
                while (enumerator_7033.hasCurrentObject ()) {
                  var_s_7011.plusAssignOperation(enumerator_7033.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 155)) ;
                  enumerator_7033.gotoNextObject () ;
                  if (enumerator_7033.hasCurrentObject ()) {
                    var_s_7011.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 156)) ;
                  }
                }
                const GGS_templateGetterCallInExpressionAST temp_27 = this ;
                const GGS_templateGetterCallInExpressionAST temp_28 = this ;
                TC_Array <FixItDescription> fixItArray29 ;
                inCompiler->emitSemanticError (temp_27.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3946, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 159)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 159)).add_operation (temp_28.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 159)).add_operation (GGS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 159)).add_operation (var_s_7011, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 160)).add_operation (GGS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 160)), fixItArray29  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 158)) ;
                var_getterFormalArgumentTypeList_4889.drop () ; // Release error dropped variable
                var_hasCompilerArgument_4957.drop () ; // Release error dropped variable
                var_returnedType_5006.drop () ; // Release error dropped variable
                var_kind_4938.drop () ; // Release error dropped variable
              }
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_19) {
        GalgasBool test_30 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_30) {
          test_30 = GGS_bool (ComparisonKind::equal, var_getterMap_4788.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 163)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_30) {
            const GGS_templateGetterCallInExpressionAST temp_31 = this ;
            TC_Array <FixItDescription> fixItArray32 ;
            inCompiler->emitSemanticError (temp_31.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3946, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 165)).add_operation (GGS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 165)), fixItArray32  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 164)) ;
            var_getterFormalArgumentTypeList_4889.drop () ; // Release error dropped variable
            var_hasCompilerArgument_4957.drop () ; // Release error dropped variable
            var_returnedType_5006.drop () ; // Release error dropped variable
            var_kind_4938.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_30) {
          const GGS_templateGetterCallInExpressionAST temp_33 = this ;
          const GGS_templateGetterCallInExpressionAST temp_34 = this ;
          TC_Array <FixItDescription> fixItArray35 ;
          appendFixItActions (fixItArray35, EnumFixItKind::fixItReplace, var_getterMap_4788.getter_keyList (SOURCE_FILE ("templateAnalysis.galgas", 171))) ;
          inCompiler->emitSemanticError (temp_33.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3946, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 169)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 169)).add_operation (temp_34.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 169)).add_operation (GGS_string ("' getter"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 169)), fixItArray35  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 168)) ;
          var_getterFormalArgumentTypeList_4889.drop () ; // Release error dropped variable
          var_hasCompilerArgument_4957.drop () ; // Release error dropped variable
          var_returnedType_5006.drop () ; // Release error dropped variable
          var_kind_4938.drop () ; // Release error dropped variable
        }
      }
    }
    GalgasBool test_36 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_36) {
      const GGS_templateGetterCallInExpressionAST temp_37 = this ;
      test_36 = GGS_bool (ComparisonKind::notEqual, temp_37.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 175)).objectCompare (var_getterFormalArgumentTypeList_4889.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 175)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_36) {
        const GGS_templateGetterCallInExpressionAST temp_38 = this ;
        const GGS_templateGetterCallInExpressionAST temp_39 = this ;
        const GGS_templateGetterCallInExpressionAST temp_40 = this ;
        TC_Array <FixItDescription> fixItArray41 ;
        inCompiler->emitSemanticError (temp_38.readProperty_mGetterName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_39.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 176)).add_operation (GGS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 176)).add_operation (var_receiverTypeName_3946, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 176)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 176)).add_operation (var_getterFormalArgumentTypeList_4889.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 177)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 176)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 177)).add_operation (temp_40.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 178)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 177)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 178)), fixItArray41  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 176)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_36) {
      GGS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_8436 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
      const GGS_templateGetterCallInExpressionAST temp_42 = this ;
      UpEnumerator_templateExpressionListAST enumerator_8515 (temp_42.readProperty_mExpressionList ()) ;
      UpEnumerator_functionSignature enumerator_8614 (var_getterFormalArgumentTypeList_4889) ;
      while (enumerator_8515.hasCurrentObject () && enumerator_8614.hasCurrentObject ()) {
        GalgasBool test_43 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_43) {
          test_43 = GGS_bool (ComparisonKind::notEqual, enumerator_8614.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_8515.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_43) {
            GGS_string temp_44 ;
            const GalgasBool test_45 = GGS_bool (ComparisonKind::notEqual, enumerator_8614.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_45) {
              temp_44 = enumerator_8614.current_mFormalSelector (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 184)) ;
            }else if (GalgasBool::boolFalse == test_45) {
              temp_44 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_s_8739 = GGS_string ("!").add_operation (temp_44, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 184)) ;
            TC_Array <FixItDescription> fixItArray46 ;
            appendFixItActions (fixItArray46, EnumFixItKind::fixItReplace, var_s_8739) ;
            inCompiler->emitSemanticError (enumerator_8515.current_mActualSelector (HERE).readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_8739, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 185)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 185)), fixItArray46  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 185)) ;
          }
        }
        GGS_semanticExpressionForGeneration var_exp_9147 ;
        callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_8515.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_exp_9147, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 187)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_8614.current_mFormalArgumentType (HERE), var_exp_9147.readProperty_mResultType (), enumerator_8515.current_mEndOfExpressionLocation (HERE), var_exp_9147, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 194)) ;
        }
        var_constructorEffectiveParameterList_8436.addAssignOperation (var_exp_9147  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 195)) ;
        enumerator_8515.gotoNextObject () ;
        enumerator_8614.gotoNextObject () ;
      }
      GalgasBool test_47 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_47) {
        const GGS_templateGetterCallInExpressionAST temp_48 = this ;
        GGS_bool test_49 = GGS_bool (ComparisonKind::notEqual, var_actualGetterName_5062.objectCompare (temp_48.readProperty_mGetterName ().readProperty_string ())) ;
        if (GalgasBool::boolTrue == test_49.boolEnum ()) {
          test_49 = GGS_bool (gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall.readProperty_value ()) ;
        }
        test_47 = test_49.boolEnum () ;
        if (GalgasBool::boolTrue == test_47) {
          const GGS_templateGetterCallInExpressionAST temp_50 = this ;
          TC_Array <FixItDescription> fixItArray51 ;
          appendFixItActions (fixItArray51, EnumFixItKind::fixItReplace, var_actualGetterName_5062) ;
          inCompiler->emitSemanticError (temp_50.readProperty_mGetterName ().readProperty_location (), GGS_string ("obsolete getter"), fixItArray51  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 198)) ;
        }
      }
      const GGS_templateGetterCallInExpressionAST temp_52 = this ;
      outArgument_outExpression = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_returnedType_5006, temp_52.readProperty_mGetterName ().readProperty_location (), var_kind_4938, var_receiverExpression_3844, var_fieldList_5027, var_actualGetterName_5062, var_constructorEffectiveParameterList_8436, var_hasCompilerArgument_4957, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateClassFunctionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateClassFunctionAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateClassFunctionAST temp_0 = this ;
  GGS_unifiedTypeMapEntry var_constructorType_10410 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 225)) ;
  GGS_classFunctionMap var_classFunctionMap_10543 = extensionGetter_definition (var_constructorType_10410, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 227)).readProperty_classFunctionMap () ;
  GGS_unifiedTypeMapEntry var_returnedType_10663 ;
  GGS_bool var_hasCompilerArgument_10688 ;
  GGS_functionSignature var_classFuncFormalArgumentTypeList_10733 ;
  const GGS_templateClassFunctionAST temp_1 = this ;
  const cMapElement_classFunctionMap * objectArray_10767 = (const cMapElement_classFunctionMap *) var_classFunctionMap_10543.readAccessForWithInstruction (temp_1.readProperty_mClassFunctionName ().readProperty_string ()) ;
  if (nullptr != objectArray_10767) {
      macroValidSharedObject (objectArray_10767, cMapElement_classFunctionMap) ;
    var_classFuncFormalArgumentTypeList_10733 = objectArray_10767->mProperty_mArgumentTypeList ;
    var_hasCompilerArgument_10688 = objectArray_10767->mProperty_mHasCompilerArgument ;
    var_returnedType_10663 = objectArray_10767->mProperty_mReturnedType ;
  }else{
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::equal, var_classFunctionMap_10543.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 237)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_templateClassFunctionAST temp_3 = this ;
        const GGS_templateClassFunctionAST temp_4 = this ;
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mClassFunctionName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_4.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 239)).add_operation (GGS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 239)), fixItArray5  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 238)) ;
        var_classFuncFormalArgumentTypeList_10733.drop () ; // Release error dropped variable
        var_hasCompilerArgument_10688.drop () ; // Release error dropped variable
        var_returnedType_10663.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      const GGS_templateClassFunctionAST temp_6 = this ;
      const GGS_templateClassFunctionAST temp_7 = this ;
      const GGS_templateClassFunctionAST temp_8 = this ;
      TC_Array <FixItDescription> fixItArray9 ;
      appendFixItActions (fixItArray9, EnumFixItKind::fixItReplace, var_classFunctionMap_10543.getter_keyList (SOURCE_FILE ("templateAnalysis.galgas", 245))) ;
      inCompiler->emitSemanticError (temp_6.readProperty_mClassFunctionName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_7.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 243)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 243)).add_operation (temp_8.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 243)).add_operation (GGS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 243)), fixItArray9  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 242)) ;
      var_classFuncFormalArgumentTypeList_10733.drop () ; // Release error dropped variable
      var_hasCompilerArgument_10688.drop () ; // Release error dropped variable
      var_returnedType_10663.drop () ; // Release error dropped variable
    }
  }
  GGS__5B_unifiedTypeMapEntry_5D_ var_requiredTypes_11548 = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_HERE) ;
  GGS_semanticExpressionListForGeneration var_classFunctionEffectiveParameterList_11611 ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    const GGS_templateClassFunctionAST temp_11 = this ;
    test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 251)).objectCompare (var_classFuncFormalArgumentTypeList_10733.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 251)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_templateClassFunctionAST temp_12 = this ;
      const GGS_templateClassFunctionAST temp_13 = this ;
      const GGS_templateClassFunctionAST temp_14 = this ;
      TC_Array <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mClassFunctionName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_13.readProperty_mClassFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 253)).add_operation (GGS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 253)).add_operation (extensionGetter_definition (var_constructorType_10410, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 253)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 253)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 253)).add_operation (var_classFuncFormalArgumentTypeList_10733.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 254)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 253)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 254)).add_operation (temp_14.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 255)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 254)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 255)), fixItArray15  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 252)) ;
      var_classFunctionEffectiveParameterList_11611.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    var_classFunctionEffectiveParameterList_11611 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    const GGS_templateClassFunctionAST temp_16 = this ;
    UpEnumerator_templateExpressionListAST enumerator_12223 (temp_16.readProperty_mExpressionList ()) ;
    UpEnumerator_functionSignature enumerator_12312 (var_classFuncFormalArgumentTypeList_10733) ;
    while (enumerator_12223.hasCurrentObject () && enumerator_12312.hasCurrentObject ()) {
      {
      var_requiredTypes_11548.setter_append (enumerator_12312.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 260)) ;
      }
      GalgasBool test_17 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_17) {
        test_17 = GGS_bool (ComparisonKind::notEqual, enumerator_12312.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_12223.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_17) {
          GGS_string temp_18 ;
          const GalgasBool test_19 = GGS_bool (ComparisonKind::notEqual, enumerator_12312.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_19) {
            temp_18 = enumerator_12312.current_mFormalSelector (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 262)) ;
          }else if (GalgasBool::boolFalse == test_19) {
            temp_18 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_12488 = GGS_string ("!").add_operation (temp_18, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 262)) ;
          TC_Array <FixItDescription> fixItArray20 ;
          appendFixItActions (fixItArray20, EnumFixItKind::fixItReplace, var_s_12488) ;
          inCompiler->emitSemanticError (enumerator_12223.current_mActualSelector (HERE).readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_12488, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 263)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 263)), fixItArray20  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 263)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_exp_12880 ;
      callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_12223.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_exp_12880, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 265)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_12312.current_mFormalArgumentType (HERE), var_exp_12880.readProperty_mResultType (), enumerator_12223.current_mEndOfExpressionLocation (HERE), var_exp_12880, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 272)) ;
      }
      var_classFunctionEffectiveParameterList_11611.addAssignOperation (var_exp_12880  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 273)) ;
      enumerator_12223.gotoNextObject () ;
      enumerator_12312.gotoNextObject () ;
    }
  }
  const GGS_templateClassFunctionAST temp_21 = this ;
  const GGS_templateClassFunctionAST temp_22 = this ;
  outArgument_outExpression = GGS_classFuncExpressionForGeneration::init_21__21__21__21__21__21__21_ (var_returnedType_10663, temp_21.readProperty_mClassFunctionName ().readProperty_location (), var_constructorType_10410, temp_22.readProperty_mClassFunctionName ().readProperty_string (), var_classFunctionEffectiveParameterList_11611, var_hasCompilerArgument_10688, var_requiredTypes_11548, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateFileWrapperTemplateCallAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateFileWrapperTemplateCallAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GGS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                 GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateFileWrapperTemplateCallAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mFileWrapperName ().readProperty_location (), GGS_string ("unhandled @templateFileWrapperTemplateCallAST templateExpressionAnalysis"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 299)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateAndOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateAndOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_14817 ;
  const GGS_templateAndOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_14817, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 314)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_15059 ;
  const GGS_templateAndOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_15059, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 322)) ;
  {
  const GGS_templateAndOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_14817.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 331)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("templateAnalysis.galgas", 331)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 331)), GGS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_14817, var_rightExpression_15059, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 330)) ;
  }
  const GGS_templateAndOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_14817.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_14817, GGS_binaryOperator::class_func_operator_5F_and (SOURCE_FILE ("templateAnalysis.galgas", 342)), var_rightExpression_15059, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateOrOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateOrOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_16155 ;
  const GGS_templateOrOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_16155, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 357)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_16397 ;
  const GGS_templateOrOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_16397, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 365)) ;
  {
  const GGS_templateOrOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_16155.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 374)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("templateAnalysis.galgas", 374)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 374)), GGS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16155, var_rightExpression_16397, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 373)) ;
  }
  const GGS_templateOrOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_16155.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_16155, GGS_binaryOperator::class_func_operator_5F_or (SOURCE_FILE ("templateAnalysis.galgas", 385)), var_rightExpression_16397, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateXorOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateXorOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_17492 ;
  const GGS_templateXorOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_17492, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 400)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_17734 ;
  const GGS_templateXorOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_17734, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 408)) ;
  {
  const GGS_templateXorOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_17492.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 417)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("templateAnalysis.galgas", 417)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 417)), GGS_string ("^"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_17492, var_rightExpression_17734, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 416)) ;
  }
  const GGS_templateXorOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_17492.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_17492, GGS_binaryOperator::class_func_operator_5F_xor (SOURCE_FILE ("templateAnalysis.galgas", 428)), var_rightExpression_17734, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateTrueBoolAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateTrueBoolAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                  GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                  const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                  GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                  GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateTrueBoolAST temp_0 = this ;
  outArgument_outExpression = GGS_trueExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateFalseBoolAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateFalseBoolAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                   GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                   const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                   GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateFalseBoolAST temp_0 = this ;
  outArgument_outExpression = GGS_falseExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateLiteralStringExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralStringExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_19704 = GGS_string::makeEmptyString () ;
  const GGS_templateLiteralStringExpressionAST temp_0 = this ;
  UpEnumerator_stringlist enumerator_19718 (temp_0.readProperty_mLiteralStringList ()) ;
  while (enumerator_19718.hasCurrentObject ()) {
    var_s_19704.plusAssignOperation(enumerator_19718.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 468)) ;
    enumerator_19718.gotoNextObject () ;
  }
  const GGS_templateLiteralStringExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalStringExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_1.readProperty_mLocation (), var_s_19704, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateLiteralUIntExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralUIntExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                               GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                               const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLiteralUIntExpressionAST temp_0 = this ;
  const GGS_templateLiteralUIntExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBigIntType (), temp_0.readProperty_mLiteralInt ().readProperty_location (), temp_1.readProperty_mLiteralInt ().readProperty_bigint (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateLiteralCharExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralCharExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                               GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                               const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLiteralCharExpressionAST temp_0 = this ;
  const GGS_templateLiteralCharExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalCharExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_0.readProperty_mLiteralChar ().readProperty_location (), temp_1.readProperty_mLiteralChar ().readProperty_char (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateLiteralDoubleExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralDoubleExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLiteralDoubleExpressionAST temp_0 = this ;
  const GGS_templateLiteralDoubleExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalDoubleExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mDoubleType (), temp_0.readProperty_mLiteralDouble ().readProperty_location (), temp_1.readProperty_mLiteralDouble ().readProperty_double (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateNotOperatorAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateNotOperatorAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_22286 ;
  const GGS_templateNotOperatorAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_22286, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 529)) ;
  GGS_unifiedTypeMapEntry var_type_22362 = var_expression_22286.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_22362, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 538)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixNotOperator (SOURCE_FILE ("templateAnalysis.galgas", 538)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 538)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 538)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateNotOperatorAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_22362, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 540)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 540)).add_operation (GGS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 540)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 539)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_templateNotOperatorAST temp_4 = this ;
    outArgument_outExpression = GGS_notExpressionForGeneration::init_21__21__21_ (var_type_22362, temp_4.readProperty_mOperatorLocation (), var_expression_22286, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateLogicalNegateAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLogicalNegateAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_23363 ;
  const GGS_templateLogicalNegateAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_23363, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 562)) ;
  GGS_unifiedTypeMapEntry var_type_23439 = var_expression_23363.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_23439, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 571)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("templateAnalysis.galgas", 571)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 571)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 571)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateLogicalNegateAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_23439, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 573)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 573)).add_operation (GGS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 573)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 572)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_templateLogicalNegateAST temp_4 = this ;
    outArgument_outExpression = GGS_tildeExpressionForGeneration::init_21__21__21_ (var_type_23439, temp_4.readProperty_mOperatorLocation (), var_expression_23363, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateTestDynamicClassAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateTestDynamicClassAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                          GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_24487 ;
  const GGS_templateTestDynamicClassAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_24487, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 594)) ;
  const GGS_templateTestDynamicClassAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_castType_24536 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 602)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_24487.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 604)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 604)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_unifiedTypeMapEntry var_t_24787 = var_castType_24536 ;
      GGS_bool var_found_24814 = GGS_bool (ComparisonKind::equal, var_t_24787.objectCompare (var_expression_24487.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 608)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 608)).isValid ()) {
        uint32_t variant_24854 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 608)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 608)).uintValue () ;
        bool loop_24854 = true ;
        while (loop_24854) {
          loop_24854 = var_found_24814.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 609)).operator_and (extensionGetter_definition (var_t_24787, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 609)).readProperty_superType ().getter_isNull (SOURCE_FILE ("templateAnalysis.galgas", 609)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 609)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 609)).isValid () ;
          if (loop_24854) {
            loop_24854 = var_found_24814.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 609)).operator_and (extensionGetter_definition (var_t_24787, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 609)).readProperty_superType ().getter_isNull (SOURCE_FILE ("templateAnalysis.galgas", 609)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 609)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 609)).boolValue () ;
          }
          if (loop_24854 && (0 == variant_24854)) {
            loop_24854 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("templateAnalysis.galgas", 608)) ;
          }
          if (loop_24854) {
            variant_24854 -- ;
            var_t_24787 = extensionGetter_definition (var_t_24787, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 610)).readProperty_superType () ;
            var_found_24814 = GGS_bool (ComparisonKind::equal, var_t_24787.objectCompare (var_expression_24487.readProperty_mResultType ())) ;
          }
        }
      }
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_found_24814.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 613)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_templateTestDynamicClassAST temp_4 = this ;
          const GGS_templateTestDynamicClassAST temp_5 = this ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 615)).add_operation (GGS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 615)).add_operation (extensionGetter_definition (var_expression_24487.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 615)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 615)).add_operation (GGS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 615)), fixItArray6  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 614)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    TC_Array <FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_24487.readProperty_mLocation (), GGS_string ("expression should be a class instance: it is an @").add_operation (extensionGetter_definition (var_expression_24487.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 619)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 618)).add_operation (GGS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 619)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 618)) ;
  }
  const GGS_templateTestDynamicClassAST temp_8 = this ;
  const GGS_templateTestDynamicClassAST temp_9 = this ;
  outArgument_outExpression = GGS_testDynamicClassInExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_24487, temp_9.readProperty_mTypeComparisonKind (), var_castType_24536, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateOptionAccessAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateOptionAccessAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateOptionAccessAST temp_0 = this ;
  GGS_lstring var_usefulnessName_26057 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 639)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_26057 COMMA_SOURCE_FILE ("templateAnalysis.galgas", 640)) ;
  }
  GGS_bool var_optionComponentIsPredefined_26361 ;
  GGS_commandLineOptionMap var_boolOptionMap_26420 ;
  GGS_commandLineOptionMap var_uintOptionMap_26465 ;
  GGS_commandLineOptionMap var_stringOptionMap_26510 ;
  GGS_commandLineOptionMap var_stringListOptionMap_26557 ;
  const GGS_templateOptionAccessAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionComponentIsPredefined_26361, var_boolOptionMap_26420, var_uintOptionMap_26465, var_stringOptionMap_26510, var_stringListOptionMap_26557, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 641)) ;
  const GGS_templateOptionAccessAST temp_2 = this ;
  GGS_bool var_found_26587 = var_boolOptionMap_26420.getter_hasKey (temp_2.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 649)) ;
  GGS_unifiedTypeMapEntry var_returnedType_26670 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType () ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_found_26587.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 651)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_templateOptionAccessAST temp_4 = this ;
      var_found_26587 = var_uintOptionMap_26465.getter_hasKey (temp_4.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 652)) ;
      var_returnedType_26670 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType () ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = var_found_26587.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 655)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_templateOptionAccessAST temp_6 = this ;
      var_found_26587 = var_stringOptionMap_26510.getter_hasKey (temp_6.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 656)) ;
      var_returnedType_26670 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
    }
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = var_found_26587.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 659)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_templateOptionAccessAST temp_8 = this ;
      var_found_26587 = var_stringListOptionMap_26557.getter_hasKey (temp_8.readProperty_mOptionName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas", 660)) ;
      var_returnedType_26670 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType () ;
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_found_26587.boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        const GGS_templateOptionAccessAST temp_11 = this ;
        test_10 = GGS_bool (ComparisonKind::equal, temp_11.readProperty_mGetterName ().readProperty_string ().objectCompare (GGS_string ("value"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_templateOptionAccessAST temp_12 = this ;
          const GGS_templateOptionAccessAST temp_13 = this ;
          const GGS_templateOptionAccessAST temp_14 = this ;
          outArgument_outExpression = GGS_optionValueExpressionForGeneration::init_21__21__21__21__21_ (var_returnedType_26670, temp_12.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_26361, temp_13.readProperty_mOptionComponentName ().readProperty_string (), temp_14.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_HERE) ;
        }
      }
      if (GalgasBool::boolFalse == test_10) {
        GalgasBool test_15 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_15) {
          const GGS_templateOptionAccessAST temp_16 = this ;
          test_15 = GGS_bool (ComparisonKind::equal, temp_16.readProperty_mGetterName ().readProperty_string ().objectCompare (GGS_string ("char"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_15) {
            const GGS_templateOptionAccessAST temp_17 = this ;
            const GGS_templateOptionAccessAST temp_18 = this ;
            const GGS_templateOptionAccessAST temp_19 = this ;
            outArgument_outExpression = GGS_optionCharExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mCharType (), temp_17.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_26361, temp_18.readProperty_mOptionComponentName ().readProperty_string (), temp_19.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_HERE) ;
          }
        }
        if (GalgasBool::boolFalse == test_15) {
          GalgasBool test_20 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_20) {
            const GGS_templateOptionAccessAST temp_21 = this ;
            test_20 = GGS_bool (ComparisonKind::equal, temp_21.readProperty_mGetterName ().readProperty_string ().objectCompare (GGS_string ("string"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_20) {
              const GGS_templateOptionAccessAST temp_22 = this ;
              const GGS_templateOptionAccessAST temp_23 = this ;
              const GGS_templateOptionAccessAST temp_24 = this ;
              outArgument_outExpression = GGS_optionStringExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_26361, temp_23.readProperty_mOptionComponentName ().readProperty_string (), temp_24.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_HERE) ;
            }
          }
          if (GalgasBool::boolFalse == test_20) {
            GalgasBool test_25 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_25) {
              const GGS_templateOptionAccessAST temp_26 = this ;
              test_25 = GGS_bool (ComparisonKind::equal, temp_26.readProperty_mGetterName ().readProperty_string ().objectCompare (GGS_string ("comment"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_25) {
                const GGS_templateOptionAccessAST temp_27 = this ;
                const GGS_templateOptionAccessAST temp_28 = this ;
                const GGS_templateOptionAccessAST temp_29 = this ;
                outArgument_outExpression = GGS_optionCommentExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType (), temp_27.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_26361, temp_28.readProperty_mOptionComponentName ().readProperty_string (), temp_29.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_HERE) ;
              }
            }
            if (GalgasBool::boolFalse == test_25) {
              const GGS_templateOptionAccessAST temp_30 = this ;
              TC_Array <FixItDescription> fixItArray31 ;
              inCompiler->emitSemanticError (temp_30.readProperty_mGetterName ().readProperty_location (), GGS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option"), fixItArray31  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 697)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    GGS_stringset var_s_28669 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    UpEnumerator_commandLineOptionMap enumerator_28697 (var_boolOptionMap_26420) ;
    while (enumerator_28697.hasCurrentObject ()) {
      var_s_28669.plusPlusAssignOperation (enumerator_28697.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 702)) ;
      enumerator_28697.gotoNextObject () ;
    }
    UpEnumerator_commandLineOptionMap enumerator_28765 (var_uintOptionMap_26465) ;
    while (enumerator_28765.hasCurrentObject ()) {
      var_s_28669.plusPlusAssignOperation (enumerator_28765.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 705)) ;
      enumerator_28765.gotoNextObject () ;
    }
    UpEnumerator_commandLineOptionMap enumerator_28833 (var_stringOptionMap_26510) ;
    while (enumerator_28833.hasCurrentObject ()) {
      var_s_28669.plusPlusAssignOperation (enumerator_28833.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 708)) ;
      enumerator_28833.gotoNextObject () ;
    }
    const GGS_templateOptionAccessAST temp_32 = this ;
    const GGS_templateOptionAccessAST temp_33 = this ;
    const GGS_templateOptionAccessAST temp_34 = this ;
    TC_Array <FixItDescription> fixItArray35 ;
    appendFixItActions (fixItArray35, EnumFixItKind::fixItReplace, var_s_28669) ;
    inCompiler->emitSemanticError (temp_32.readProperty_mOptionName ().readProperty_location (), GGS_string ("the '").add_operation (temp_33.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 711)).add_operation (GGS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 711)).add_operation (temp_34.readProperty_mOptionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 711)).add_operation (GGS_string ("' option"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 711)), fixItArray35  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 710)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateFunctionCallAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateFunctionCallAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateFunctionCallAST temp_0 = this ;
  GGS_lstring var_usefulnessName_29615 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 728)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_29615 COMMA_SOURCE_FILE ("templateAnalysis.galgas", 729)) ;
  }
  GGS_functionSignature var_functionSignature_29927 ;
  GGS_unifiedTypeMapEntry var_resultType_29975 ;
  GGS_bool var_isInternal_30001 ;
  const GGS_templateFunctionCallAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().method_searchKey (temp_1.readProperty_mFunctionName (), var_functionSignature_29927, var_resultType_29975, var_isInternal_30001, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 731)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_isInternal_30001.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_templateFunctionCallAST temp_3 = this ;
      GGS_location var_procDeclarationLocation_30066 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mFunctionMap ().getter_locationForKey (temp_3.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 739)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_templateFunctionCallAST temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::notEqual, temp_5.readProperty_mFunctionName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 740)).objectCompare (var_procDeclarationLocation_30066.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 740)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_templateFunctionCallAST temp_6 = this ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFunctionName ().readProperty_location (), GGS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_30066.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 741)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 741)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 741)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 741)) ;
        }
      }
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    const GGS_templateFunctionCallAST temp_9 = this ;
    test_8 = GGS_bool (ComparisonKind::notEqual, var_functionSignature_29927.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 745)).objectCompare (temp_9.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 745)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_templateFunctionCallAST temp_10 = this ;
      const GGS_templateFunctionCallAST temp_11 = this ;
      const GGS_templateFunctionCallAST temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mFunctionName ().readProperty_location (), GGS_string ("the '").add_operation (temp_11.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 747)).add_operation (GGS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 747)).add_operation (var_functionSignature_29927.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 747)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 747)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 747)).add_operation (GGS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 747)).add_operation (temp_12.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas", 748)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 748)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 748)).add_operation (GGS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 748)), fixItArray13  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 746)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    GGS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_30790 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    const GGS_templateFunctionCallAST temp_14 = this ;
    UpEnumerator_functionSignature enumerator_30914 (var_functionSignature_29927) ;
    UpEnumerator_templateExpressionListAST enumerator_30968 (temp_14.readProperty_mExpressionList ()) ;
    while (enumerator_30914.hasCurrentObject () && enumerator_30968.hasCurrentObject ()) {
      GGS_semanticExpressionForGeneration var_expression_31226 ;
      callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_30968.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_31226, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 754)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_30914.current_mFormalArgumentType (HERE), var_expression_31226.readProperty_mResultType (), enumerator_30968.current_mEndOfExpressionLocation (HERE), var_expression_31226, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 761)) ;
      }
      var_semanticExpressionListForGeneration_30790.addAssignOperation (var_expression_31226  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 762)) ;
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::notEqual, enumerator_30914.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_30968.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          GGS_string temp_16 ;
          const GalgasBool test_17 = GGS_bool (ComparisonKind::notEqual, enumerator_30914.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            temp_16 = enumerator_30914.current_mFormalSelector (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 764)) ;
          }else if (GalgasBool::boolFalse == test_17) {
            temp_16 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_31519 = GGS_string ("!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 764)) ;
          TC_Array <FixItDescription> fixItArray18 ;
          appendFixItActions (fixItArray18, EnumFixItKind::fixItReplace, var_s_31519) ;
          inCompiler->emitSemanticError (enumerator_30968.current_mActualSelector (HERE).readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_31519, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 765)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 765)), fixItArray18  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 765)) ;
        }
      }
      enumerator_30914.gotoNextObject () ;
      enumerator_30968.gotoNextObject () ;
    }
    const GGS_templateFunctionCallAST temp_19 = this ;
    const GGS_templateFunctionCallAST temp_20 = this ;
    outArgument_outExpression = GGS_functionCallExpressionForGeneration::init_21__21__21__21_ (var_resultType_29975, temp_19.readProperty_mFunctionName ().readProperty_location (), temp_20.readProperty_mFunctionName ().readProperty_string (), var_semanticExpressionListForGeneration_30790, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateExtensionTemplateCallAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateExtensionTemplateCallAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                               GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                               const GGS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                               GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateExtensionTemplateCallAST temp_0 = this ;
  TC_Array <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mTemplateName ().readProperty_location (), GGS_string ("INTERNAL ERROR: @templateExtensionTemplateCallAST templateExpressionAnalysis not implemented yet"), fixItArray1  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 787)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateVarInExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateVarInExpressionAST::method_templateExpressionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                         GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                         const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                         GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                         GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_type_33262 ;
  GGS_string var_sourceVariableCppName_33272 ;
  const GGS_templateVarInExpressionAST temp_0 = this ;
  constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap ().method_searchKey (temp_0.readProperty_mVarName (), var_type_33262, var_sourceVariableCppName_33272, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 803)) ;
  const GGS_templateVarInExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_varInExpressionForGeneration::init_21__21__21__21_ (var_type_33262, temp_1.readProperty_mVarName ().readProperty_location (), var_sourceVariableCppName_33272, var_sourceVariableCppName_33272, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateAddOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateAddOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_34203 ;
  const GGS_templateAddOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_34203, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 823)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_34445 ;
  const GGS_templateAddOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_34445, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 831)) ;
  {
  const GGS_templateAddOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_34203.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 840)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("templateAnalysis.galgas", 840)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 840)), GGS_string ("+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_34203, var_rightExpression_34445, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 839)) ;
  }
  const GGS_templateAddOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_34203.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_34203, GGS_binaryOperator::class_func_add (SOURCE_FILE ("templateAnalysis.galgas", 851)), var_rightExpression_34445, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateSubOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateSubOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_35684 ;
  const GGS_templateSubOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_35684, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 868)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_35926 ;
  const GGS_templateSubOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_35926, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 876)) ;
  {
  const GGS_templateSubOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_35684.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 885)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("templateAnalysis.galgas", 885)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 885)), GGS_string ("-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_35684, var_rightExpression_35926, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 884)) ;
  }
  const GGS_templateSubOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_35684.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_35684, GGS_binaryOperator::class_func_sub (SOURCE_FILE ("templateAnalysis.galgas", 896)), var_rightExpression_35926, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateMultiplyOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateMultiplyOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_37174 ;
  const GGS_templateMultiplyOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_37174, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 913)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_37416 ;
  const GGS_templateMultiplyOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_37416, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 921)) ;
  {
  const GGS_templateMultiplyOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_37174.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 930)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("templateAnalysis.galgas", 930)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 930)), GGS_string ("*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_37174, var_rightExpression_37416, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 929)) ;
  }
  const GGS_templateMultiplyOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_37174.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_37174, GGS_binaryOperator::class_func_multiply_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 941)), var_rightExpression_37416, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateDivideOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateDivideOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_38665 ;
  const GGS_templateDivideOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_38665, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 958)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_38907 ;
  const GGS_templateDivideOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_38907, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 966)) ;
  {
  const GGS_templateDivideOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_38665.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 975)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("templateAnalysis.galgas", 975)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 975)), GGS_string ("/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_38665, var_rightExpression_38907, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 974)) ;
  }
  const GGS_templateDivideOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_38665.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_38665, GGS_binaryOperator::class_func_divide_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 986)), var_rightExpression_38907, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateModuloOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateModuloOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                         GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_40150 ;
  const GGS_templateModuloOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_40150, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1003)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_40392 ;
  const GGS_templateModuloOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_40392, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1011)) ;
  {
  const GGS_templateModuloOperationAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_40150.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1020)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("templateAnalysis.galgas", 1020)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1020)), GGS_string ("mod"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_40150, var_rightExpression_40392, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1019)) ;
  }
  const GGS_templateModuloOperationAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_40150.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_40150, GGS_binaryOperator::class_func_modulo_5F_operation (SOURCE_FILE ("templateAnalysis.galgas", 1031)), var_rightExpression_40392, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateUnaryMinusOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateUnaryMinusOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_41601 ;
  const GGS_templateUnaryMinusOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_41601, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1048)) ;
  GGS_unifiedTypeMapEntry var_type_41677 = var_expression_41601.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_41677, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1057)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("templateAnalysis.galgas", 1057)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1057)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1057)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateUnaryMinusOperationAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_41677, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1059)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1059)).add_operation (GGS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1059)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1058)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_templateUnaryMinusOperationAST temp_4 = this ;
    outArgument_outExpression = GGS_unaryMinusExpressionForGeneration::init_21__21__21_ (var_type_41677, temp_4.readProperty_mOperatorLocation (), var_expression_41601, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@structFieldAccessTemplateExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_structFieldAccessTemplateExpressionAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_42903 ;
  const GGS_structFieldAccessTemplateExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_42903, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1082)) ;
  GGS_unifiedTypeMapEntry var_type_42983 = var_expression_42903.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    GGS_bool test_2 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_type_42983, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1091)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("templateAnalysis.galgas", 1091)))) ;
    if (GalgasBool::boolTrue == test_2.boolEnum ()) {
      test_2 = extensionGetter_definition (var_type_42983, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1091)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas", 1091)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1091)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_structFieldAccessTemplateExpressionAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mStructFieldName ().readProperty_location (), GGS_string ("the '.' operator requires the receiver to be a struct ou a class"), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1092)) ;
    }
  }
  GGS_propertyMap var_propertyMap_43226 = extensionGetter_definition (var_type_42983, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1094)).readProperty_propertyMap () ;
  GGS_AccessControl var_accessControl_43323 ;
  const GGS_structFieldAccessTemplateExpressionAST temp_5 = this ;
  GGS_bool joker_43337 ; // Joker input parameter
  var_propertyMap_43226.method_searchKey (temp_5.readProperty_mStructFieldName (), var_accessControl_43323, joker_43337, var_type_42983, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1095)) ;
  const GGS_structFieldAccessTemplateExpressionAST temp_6 = this ;
  extensionMethod_checkSetAccess (var_accessControl_43323, GGS_selfAvailability::class_func_none (SOURCE_FILE ("templateAnalysis.galgas", 1096)), temp_6.readProperty_mStructFieldName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1096)) ;
  const GGS_structFieldAccessTemplateExpressionAST temp_7 = this ;
  const GGS_structFieldAccessTemplateExpressionAST temp_8 = this ;
  outArgument_outExpression = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_type_42983, temp_7.readProperty_mOperatorLocation (), var_expression_42903, temp_8.readProperty_mStructFieldName ().readProperty_string (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateEqualTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateEqualTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_44335 ;
  const GGS_templateEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_44335, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1118)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_44581 ;
  const GGS_templateEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_44581, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1126)) ;
  {
  const GGS_templateEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_44335.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1135)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("templateAnalysis.galgas", 1135)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1135)).operator_or (extensionGetter_definition (var_leftExpression_44335.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1135)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas", 1135)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1135)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1135)), GGS_string ("=="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_44335, var_rightExpression_44581, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1134)) ;
  }
  const GGS_templateEqualTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_44335, GGS_comparison::class_func_equal (SOURCE_FILE ("templateAnalysis.galgas", 1146)), var_rightExpression_44581, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateNonEqualTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateNonEqualTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_45754 ;
  const GGS_templateNonEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_45754, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1161)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_46000 ;
  const GGS_templateNonEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_46000, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1169)) ;
  {
  const GGS_templateNonEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_45754.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1178)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("templateAnalysis.galgas", 1178)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1178)).operator_or (extensionGetter_definition (var_leftExpression_45754.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1178)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas", 1178)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1178)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1178)), GGS_string ("!="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_45754, var_rightExpression_46000, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1177)) ;
  }
  const GGS_templateNonEqualTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_45754, GGS_comparison::class_func_notEqual (SOURCE_FILE ("templateAnalysis.galgas", 1189)), var_rightExpression_46000, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateStrictInfTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateStrictInfTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_47177 ;
  const GGS_templateStrictInfTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_47177, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1204)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_47423 ;
  const GGS_templateStrictInfTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_47423, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1212)) ;
  {
  const GGS_templateStrictInfTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_47177.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1221)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas", 1221)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1221)), GGS_string ("<"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_47177, var_rightExpression_47423, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1220)) ;
  }
  const GGS_templateStrictInfTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_47177, GGS_comparison::class_func_lowerThan (SOURCE_FILE ("templateAnalysis.galgas", 1232)), var_rightExpression_47423, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInfOrEqualTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInfOrEqualTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_48527 ;
  const GGS_templateInfOrEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_48527, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1247)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_48773 ;
  const GGS_templateInfOrEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_48773, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1255)) ;
  {
  const GGS_templateInfOrEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_48527.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1264)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas", 1264)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1264)), GGS_string ("<="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_48527, var_rightExpression_48773, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1263)) ;
  }
  const GGS_templateInfOrEqualTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_48527, GGS_comparison::class_func_lowerOrEqual (SOURCE_FILE ("templateAnalysis.galgas", 1275)), var_rightExpression_48773, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateStrictSupTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateStrictSupTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_49880 ;
  const GGS_templateStrictSupTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_49880, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1290)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_50126 ;
  const GGS_templateStrictSupTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_50126, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1298)) ;
  {
  const GGS_templateStrictSupTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_49880.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1307)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas", 1307)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1307)), GGS_string (">"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_49880, var_rightExpression_50126, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1306)) ;
  }
  const GGS_templateStrictSupTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_49880, GGS_comparison::class_func_greaterThan (SOURCE_FILE ("templateAnalysis.galgas", 1318)), var_rightExpression_50126, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateSupOrEqualTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateSupOrEqualTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_51232 ;
  const GGS_templateSupOrEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_51232, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1333)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_51478 ;
  const GGS_templateSupOrEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_51478, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1341)) ;
  {
  const GGS_templateSupOrEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_51232.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1350)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas", 1350)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1350)), GGS_string (">="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_51232, var_rightExpression_51478, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1349)) ;
  }
  const GGS_templateSupOrEqualTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_51232, GGS_comparison::class_func_greaterOrEqual (SOURCE_FILE ("templateAnalysis.galgas", 1361)), var_rightExpression_51478, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateLeftShiftOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLeftShiftOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_52592 ;
  const GGS_templateLeftShiftOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_52592, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1376)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_52838 ;
  const GGS_templateLeftShiftOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_52838, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1384)) ;
  GGS_unifiedTypeMapEntry var_leftType_52920 = var_leftExpression_52592.readProperty_mResultType () ;
  GGS_unifiedTypeMapEntry var_rightType_52985 = var_rightExpression_52838.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_leftType_52920, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1394)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas", 1394)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1394)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1394)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_templateLeftShiftOperationAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_52920, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1396)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1396)).add_operation (GGS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1396)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1395)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_rightType_52985, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1398)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_templateLeftShiftOperationAST temp_6 = this ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GGS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (extensionGetter_definition (var_rightType_52985, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1400)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1400)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1400)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1399)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_templateLeftShiftOperationAST temp_8 = this ;
      outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_52920, temp_8.readProperty_mOperatorLocation (), var_leftExpression_52592, GGS_binaryOperator::class_func_leftShift (SOURCE_FILE ("templateAnalysis.galgas", 1408)), var_rightExpression_52838, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateRightShiftOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateRightShiftOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_54354 ;
  const GGS_templateRightShiftOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_54354, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1424)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_54600 ;
  const GGS_templateRightShiftOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_54600, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1432)) ;
  GGS_unifiedTypeMapEntry var_leftType_54682 = var_leftExpression_54354.readProperty_mResultType () ;
  GGS_unifiedTypeMapEntry var_rightType_54747 = var_rightExpression_54600.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_leftType_54682, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1442)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas", 1442)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1442)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1442)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_templateRightShiftOperationAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_54682, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1444)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1444)).add_operation (GGS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1444)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1443)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_rightType_54747, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1446)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_templateRightShiftOperationAST temp_6 = this ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GGS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (extensionGetter_definition (var_rightType_54747, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1448)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1448)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1448)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1447)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_templateRightShiftOperationAST temp_8 = this ;
      outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_54682, temp_8.readProperty_mOperatorLocation (), var_leftExpression_54354, GGS_binaryOperator::class_func_rightShift (SOURCE_FILE ("templateAnalysis.galgas", 1456)), var_rightExpression_54600, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'templateInstructionListAnalysis?&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      const GGS_templateInstructionListAST constinArgument_inInstructionList,
                                                                      GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_templateInstructionListAST enumerator_56464 (constinArgument_inInstructionList) ;
  while (enumerator_56464.hasCurrentObject ()) {
    callExtensionMethod_templateInstructionAnalysis ((cPtr_templateInstructionAST *) enumerator_56464.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1486)) ;
    enumerator_56464.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionStringAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionStringAST::method_templateInstructionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                            GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                            const GGS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                            GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                            GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateInstructionStringAST temp_0 = this ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_templateInstructionStringForGeneration::init_21_ (temp_0.readProperty_mTemplateString (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1505)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionExpressionAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionExpressionAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_57798 ;
  const GGS_templateInstructionExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_57798, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1517)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_57798.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1524)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("string"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateInstructionExpressionAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLocation (), GGS_string ("expression type should be '@string' (it is '@").add_operation (extensionGetter_definition (var_expression_57798.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1525)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1525)).add_operation (GGS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1525)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1525)) ;
    }
  }
  ioArgument_ioInstructionList.addAssignOperation (GGS_templateInstructionExpressionForGeneration::init_21_ (var_expression_57798, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1527)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateBlockInstructionAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_58678 ;
  const GGS_templateBlockInstructionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_58678, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1539)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_expression_58678.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1546)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("bigint"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_getterCallExpressionForGeneration var_conversionExpression_58775 = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_expression_58678.readProperty_mResultType (), var_expression_58678.readProperty_mLocation (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas", 1550)), var_expression_58678, GGS_stringlist::init (inCompiler COMMA_HERE), GGS_string ("uint"), GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE) ;
      var_expression_58678 = var_conversionExpression_58775 ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_58678.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1558)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_templateBlockInstructionAST temp_3 = this ;
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mLocation (), GGS_string ("expression type should be '@uint' (it is '@").add_operation (extensionGetter_definition (var_expression_58678.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1559)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1559)).add_operation (GGS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1559)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1559)) ;
      }
    }
  }
  GGS_templateInstructionListForGeneration var_blockInstructionList_59246 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateBlockInstructionAST temp_5 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_5.readProperty_mBlockInstructionList (), var_blockInstructionList_59246, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1562)) ;
  }
  const GGS_templateBlockInstructionAST temp_6 = this ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_templateBlockInstructionForGeneration::init_21__21__21_ (var_expression_58678, temp_6.readProperty_mLocation (), var_blockInstructionList_59246, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1570)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionGetColumnLocationAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGetColumnLocationAST::method_templateInstructionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                       GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                       const GGS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                       GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                       GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.addAssignOperation (GGS_templateInstructionGetColumnLocationForGeneration::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1582)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionGotoColumnLocationAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGotoColumnLocationAST::method_templateInstructionAnalysis (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                        GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                        const GGS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                        GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                        GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.addAssignOperation (GGS_templateInstructionGotoColumnLocationForGeneration::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1594)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionIfAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionIfAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionIfBranchListForGeneration var_templateInstructionIfBranchList_61103 = GGS_templateInstructionIfBranchListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_templateInstructionIfAST temp_0 = this ;
  UpEnumerator_templateInstructionIfBranchListAST enumerator_61205 (temp_0.readProperty_mTemplateInstructionIfBranchList ()) ;
  while (enumerator_61205.hasCurrentObject ()) {
    GGS_semanticExpressionForGeneration var_expression_61431 ;
    callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_61205.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_61431, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1609)) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_61431.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1616)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("bool"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_expression_61431.readProperty_mLocation (), GGS_string ("'if' expression type should be '@bool' (it is '@").add_operation (extensionGetter_definition (var_expression_61431.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1617)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1617)).add_operation (GGS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1617)), fixItArray2  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1617)) ;
      }
    }
    GGS_templateInstructionListForGeneration var_instructionList_61685 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
    {
    routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, enumerator_61205.current_mInstructionList (HERE), var_instructionList_61685, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1620)) ;
    }
    var_templateInstructionIfBranchList_61103.addAssignOperation (var_expression_61431, var_instructionList_61685  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1628)) ;
    enumerator_61205.gotoNextObject () ;
  }
  GGS_templateInstructionListForGeneration var_elseInstructionList_62031 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionIfAST temp_3 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mElseInstructionList (), var_elseInstructionList_62031, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1632)) ;
  }
  ioArgument_ioInstructionList.addAssignOperation (GGS_templateInstructionIfForGeneration::init_21__21_ (var_templateInstructionIfBranchList_61103, var_elseInstructionList_62031, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1641)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'templateCodeGenerationForListInstruction?&&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (const GGS_templateInstructionListForGeneration constinArgument_inInstructionList,
                                                                               GGS_string & ioArgument_ioGeneratedCode,
                                                                               GGS_stringset & ioArgument_ioInclusionSet,
                                                                               GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               GGS_bool & ioArgument_ioUseColumnMarker,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_templateInstructionListForGeneration enumerator_2260 (constinArgument_inInstructionList) ;
  while (enumerator_2260.hasCurrentObject ()) {
    callExtensionMethod_templateCodeGeneration ((cPtr_templateInstructionForGeneration *) enumerator_2260.current_mInstruction (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 42)) ;
    enumerator_2260.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionStringForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionStringForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                 GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                 GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                 GGS_bool & /* ioArgument_ioUseColumnMarker */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateInstructionStringForGeneration temp_0 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("result.appendString (").add_operation (temp_0.readProperty_mTemplateString ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("templateCodeGeneration.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 60)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 60)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 60)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionExpressionForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionExpressionForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     GGS_bool & /* ioArgument_ioUseColumnMarker */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_cppName_3501 ;
  const GGS_templateInstructionExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppName_3501, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 72)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("result.appendString (").add_operation (var_cppName_3501, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 73)).add_operation (GGS_string (".stringValue ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 73)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 73)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateBlockInstructionForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_indendationVarCppName_4090 ;
  const GGS_templateBlockInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_indendationVarCppName_4090, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 85)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_indendationVarCppName_4090, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 86)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 86)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  result.incIndentation (int32_t (").add_operation (var_indendationVarCppName_4090, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 87)).add_operation (GGS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 87)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 88)) ;
  {
  const GGS_templateBlockInstructionForGeneration temp_1 = this ;
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_1.readProperty_mBlockInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 89)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_indendationVarCppName_4090, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 97)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 97)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  result.incIndentation (- int32_t (").add_operation (var_indendationVarCppName_4090, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 98)).add_operation (GGS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 98)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 99)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionGetColumnLocationForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGetColumnLocationForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                            GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                            GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                            GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                            GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GGS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("columnMarker = result.currentColumn () ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 111)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionGotoColumnLocationForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGotoColumnLocationForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                             GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                             GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                             GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                             GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GGS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("result.appendSpacesUntilColumn (columnMarker) ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 123)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionIfForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionIfForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GGS_bool & ioArgument_ioUseColumnMarker,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateInstructionIfForGeneration temp_0 = this ;
  UpEnumerator_templateInstructionIfBranchListForGeneration enumerator_6328 (temp_0.readProperty_mTemplateInstructionIfBranchList ()) ;
  while (enumerator_6328.hasCurrentObject ()) {
    GGS_string var_ifVarCppName_6572 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_6328.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifVarCppName_6572, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 136)) ;
    GGS_string var_testVar_6599 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("templateCodeGeneration.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 143)) ;
    ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 144)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const GalgasBool ").add_operation (var_testVar_6599, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)).add_operation (var_ifVarCppName_6572, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)).add_operation (GGS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 145)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (").add_operation (var_testVar_6599, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 146)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 146)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GalgasBool::boolTrue : {\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 147)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 148)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_6328.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 149)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 157)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 158)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GalgasBool::boolFalse : {\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 159)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 160)) ;
    }
    enumerator_6328.gotoNextObject () ;
  }
  {
  const GGS_templateInstructionIfForGeneration temp_1 = this ;
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_1.readProperty_mElseInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 163)) ;
  }
  const GGS_templateInstructionIfForGeneration temp_2 = this ;
  UpEnumerator_templateInstructionIfBranchListForGeneration enumerator_7583 (temp_2.readProperty_mTemplateInstructionIfBranchList ()) ;
  while (enumerator_7583.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 172)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  } break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 173)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GalgasBool::boolNotValid :\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 174)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 175)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 176)) ;
    enumerator_7583.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionForeachAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_7505 ;
  const GGS_templateInstructionForeachAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_7505, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 216)) ;
  GGS_enumerationDescriptorList var_enumerationDescriptor_7627 = extensionGetter_definition (var_expression_7505.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 224)).readProperty_enumerationDescriptorList () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_enumerationDescriptor_7627.getter_count (SOURCE_FILE ("template-for-instruction.galgas", 225)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_expression_7505.readProperty_mLocation (), GGS_string ("expression of '@").add_operation (extensionGetter_definition (var_expression_7505.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 226)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 226)).add_operation (GGS_string ("' cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 226)), fixItArray2  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 226)) ;
    }
  }
  GGS_templateInstructionListForGeneration var_beforeInstructionList_7929 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_3 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mBeforeInstructionList (), var_beforeInstructionList_7929, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 230)) ;
  }
  const GGS_templateInstructionForeachAST temp_4 = this ;
  GGS_string var_enumeratorCppName_8224 = GGS_string ("enumerator_").add_operation (temp_4.readProperty_mIndexIdentifier ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 239)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 239)) ;
  GGS_templateVariableMap var_doVariableMap_8327 = constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap () ;
  const GGS_templateInstructionForeachAST temp_5 = this ;
  const GGS_templateInstructionForeachAST temp_6 = this ;
  GGS_string var_cppIndexVarName_8388 = GGS_string ("index_").add_operation (temp_5.readProperty_mIndexIdentifier ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 241)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 241)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 241)).add_operation (temp_6.readProperty_mIndexIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 242)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_templateInstructionForeachAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mIndexIdentifier ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      {
      const GGS_templateInstructionForeachAST temp_9 = this ;
      var_doVariableMap_8327.setter_insertKey (temp_9.readProperty_mIndexIdentifier (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), var_cppIndexVarName_8388, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 244)) ;
      }
    }
  }
  const GGS_templateInstructionForeachAST temp_10 = this ;
  switch (temp_10.readProperty_mEnumeratedObjectProperties ().enumValue ()) {
  case GGS_templateInstructionForEnumerationAST::Enumeration::invalid:
    break ;
  case GGS_templateInstructionForEnumerationAST::Enumeration::enum_implicit:
    {
      GGS_string extractedValue_8782_prefix_0 ;
      GGS_location extractedValue_8799_remplacementRange_1 ;
      temp_10.readProperty_mEnumeratedObjectProperties ().getAssociatedValuesFor_implicit (extractedValue_8782_prefix_0, extractedValue_8799_remplacementRange_1) ;
      GGS_string var_suggestion_8828 = GGS_string ("(") ;
      UpEnumerator_enumerationDescriptorList enumerator_8869 (var_enumerationDescriptor_7627) ;
      while (enumerator_8869.hasCurrentObject ()) {
        {
        var_doVariableMap_8327.setter_insertKey (GGS_lstring::init_21__21_ (extractedValue_8782_prefix_0.add_operation (enumerator_8869.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 252)), var_expression_7505.readProperty_mLocation (), inCompiler COMMA_HERE), enumerator_8869.current_mEnumeratedType (HERE), var_enumeratorCppName_8224.add_operation (GGS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 254)).add_operation (enumerator_8869.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 254)).add_operation (GGS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 251)) ;
        }
        var_suggestion_8828.plusAssignOperation(extractedValue_8782_prefix_0.add_operation (enumerator_8869.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 256)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 256)) ;
        enumerator_8869.gotoNextObject () ;
        if (enumerator_8869.hasCurrentObject ()) {
          var_suggestion_8828.plusAssignOperation(GGS_string (" "), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 258)) ;
        }
      }
      var_suggestion_8828.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 260)) ;
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = GGS_bool (gOption_galgas_5F_cli_5F_options_errorAnomynousForInstructionEnumeratedObject.readProperty_value ()).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          TC_Array <FixItDescription> fixItArray12 ;
          appendFixItActions (fixItArray12, EnumFixItKind::fixItReplace, var_suggestion_8828) ;
          inCompiler->emitSemanticError (extractedValue_8799_remplacementRange_1, GGS_string ("anonymous 'for' enumerated object (due to '--error-anonymous-for-instruction' option)"), fixItArray12  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 262)) ;
        }
      }
    }
    break ;
  case GGS_templateInstructionForEnumerationAST::Enumeration::enum_explicit:
    {
      GGS_lstringlist extractedValue_9549_enumeration_0 ;
      GGS_location extractedValue_9571_errorLocation_1 ;
      temp_10.readProperty_mEnumeratedObjectProperties ().getAssociatedValuesFor_explicit (extractedValue_9549_enumeration_0, extractedValue_9571_errorLocation_1) ;
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::notEqual, extractedValue_9549_enumeration_0.getter_count (SOURCE_FILE ("template-for-instruction.galgas", 267)).objectCompare (var_enumerationDescriptor_7627.getter_count (SOURCE_FILE ("template-for-instruction.galgas", 267)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (extractedValue_9571_errorLocation_1, var_enumerationDescriptor_7627.getter_count (SOURCE_FILE ("template-for-instruction.galgas", 269)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 269)).add_operation (GGS_string (" variables are required here ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 269)).add_operation (extractedValue_9549_enumeration_0.getter_count (SOURCE_FILE ("template-for-instruction.galgas", 270)).getter_string (SOURCE_FILE ("template-for-instruction.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 269)).add_operation (GGS_string (" provided)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 270)), fixItArray14  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 268)) ;
        }
      }
      if (GalgasBool::boolFalse == test_13) {
        UpEnumerator_enumerationDescriptorList enumerator_9839 (var_enumerationDescriptor_7627) ;
        UpEnumerator_lstringlist enumerator_9893 (extractedValue_9549_enumeration_0) ;
        while (enumerator_9839.hasCurrentObject () && enumerator_9893.hasCurrentObject ()) {
          GalgasBool test_15 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_15) {
            test_15 = GGS_bool (ComparisonKind::notEqual, enumerator_9893.current_mValue (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_15) {
              {
              var_doVariableMap_8327.setter_insertKey (enumerator_9893.current_mValue (HERE), enumerator_9839.current_mEnumeratedType (HERE), var_enumeratorCppName_8224.add_operation (GGS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 278)).add_operation (enumerator_9839.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 278)).add_operation (GGS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 275)) ;
              }
            }
          }
          enumerator_9839.gotoNextObject () ;
          enumerator_9893.gotoNextObject () ;
        }
      }
    }
    break ;
  }
  GGS_templateAnalysisContext var_doAnalysisContext_10263 = GGS_templateAnalysisContext::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mSemanticContext (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes (), var_doVariableMap_8327, inCompiler COMMA_HERE) ;
  GGS_templateInstructionListForGeneration var_doInstructionList_10416 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_16 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_doAnalysisContext_10263, ioArgument_ioTypeMap, temp_16.readProperty_mDoInstructionList (), var_doInstructionList_10416, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 289)) ;
  }
  GGS_templateInstructionListForGeneration var_betweenInstructionList_10704 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_17 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_17.readProperty_mBetweenInstructionList (), var_betweenInstructionList_10704, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 299)) ;
  }
  GGS_templateInstructionListForGeneration var_afterInstructionList_11005 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_18 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_18.readProperty_mAfterInstructionList (), var_afterInstructionList_11005, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 309)) ;
  }
  const GGS_templateInstructionForeachAST temp_19 = this ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_templateInstructionForeachForGeneration::init_21__21__21__21__21__21__21__21_ (temp_19.readProperty_mIsAscending (), var_expression_7505, var_enumeratorCppName_8224, var_beforeInstructionList_7929, var_doInstructionList_10416, var_cppIndexVarName_8388, var_betweenInstructionList_10704, var_afterInstructionList_11005, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 318)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionForeachForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                  GGS_stringset & ioArgument_ioInclusionSet,
                                                                                  GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_foreachVarCppName_12798 ;
  const GGS_templateInstructionForeachForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_foreachVarCppName_12798, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 354)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_templateInstructionForeachForGeneration temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::greaterThan, temp_2.readProperty_mIndexCppName ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 356)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateInstructionForeachForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_uint ").add_operation (temp_3.readProperty_mIndexCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 357)).add_operation (GGS_string (" (0) ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 357)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_foreachVarCppName_12798, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 360)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 360)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 360)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 361)) ;
  }
  const GGS_templateInstructionForeachForGeneration temp_4 = this ;
  GGS_string temp_5 ;
  const GalgasBool test_6 = temp_4.readProperty_mIsAscending ().boolEnum () ;
  if (GalgasBool::boolTrue == test_6) {
    temp_5 = GGS_string ("Up") ;
  }else if (GalgasBool::boolFalse == test_6) {
    temp_5 = GGS_string ("Down") ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_5, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 362)) ;
  const GGS_templateInstructionForeachForGeneration temp_7 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("Enumerator_").add_operation (extensionGetter_identifierRepresentation (temp_7.readProperty_mExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 363)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 363)) ;
  const GGS_templateInstructionForeachForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (temp_8.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 364)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 364)).add_operation (var_foreachVarCppName_12798, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 364)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 364)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_templateInstructionForeachForGeneration temp_10 = this ;
    const GGS_templateInstructionForeachForGeneration temp_11 = this ;
    test_9 = GGS_bool (ComparisonKind::greaterThan, temp_10.readProperty_mBeforeInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 366)).add_operation (temp_11.readProperty_mAfterInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 366)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 366)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_templateInstructionForeachForGeneration temp_12 = this ;
      const GGS_templateInstructionForeachForGeneration temp_13 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const bool nonEmpty_").add_operation (temp_12.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 367)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 367)).add_operation (temp_13.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 367)).add_operation (GGS_string (".hasCurrentObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 367)) ;
    }
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    const GGS_templateInstructionForeachForGeneration temp_15 = this ;
    test_14 = GGS_bool (ComparisonKind::greaterThan, temp_15.readProperty_mBeforeInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 369)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      const GGS_templateInstructionForeachForGeneration temp_16 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (nonEmpty_").add_operation (temp_16.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 370)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 370)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 370)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 371)) ;
      }
      {
      const GGS_templateInstructionForeachForGeneration temp_17 = this ;
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_17.readProperty_mBeforeInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 372)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 380)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 381)) ;
    }
  }
  const GGS_templateInstructionForeachForGeneration temp_18 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("while (").add_operation (temp_18.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 383)).add_operation (GGS_string (".hasCurrentObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 383)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 383)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 384)) ;
  }
  {
  const GGS_templateInstructionForeachForGeneration temp_19 = this ;
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_19.readProperty_mDoInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 386)) ;
  }
  const GGS_templateInstructionForeachForGeneration temp_20 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_20.readProperty_mEnumeratorCppName ().add_operation (GGS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 395)) ;
  GalgasBool test_21 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_21) {
    const GGS_templateInstructionForeachForGeneration temp_22 = this ;
    test_21 = GGS_bool (ComparisonKind::greaterThan, temp_22.readProperty_mBetweenInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 397)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_21) {
      const GGS_templateInstructionForeachForGeneration temp_23 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (temp_23.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 398)).add_operation (GGS_string (".hasCurrentObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 398)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 398)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 399)) ;
      }
      {
      const GGS_templateInstructionForeachForGeneration temp_24 = this ;
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_24.readProperty_mBetweenInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 400)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 408)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 409)) ;
    }
  }
  GalgasBool test_25 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_25) {
    const GGS_templateInstructionForeachForGeneration temp_26 = this ;
    test_25 = GGS_bool (ComparisonKind::greaterThan, temp_26.readProperty_mIndexCppName ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 412)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_25) {
      const GGS_templateInstructionForeachForGeneration temp_27 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(temp_27.readProperty_mIndexCppName ().add_operation (GGS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 413)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 413)) ;
    }
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 415)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 416)) ;
  GalgasBool test_28 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_28) {
    const GGS_templateInstructionForeachForGeneration temp_29 = this ;
    test_28 = GGS_bool (ComparisonKind::greaterThan, temp_29.readProperty_mAfterInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas", 418)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_28) {
      const GGS_templateInstructionForeachForGeneration temp_30 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (nonEmpty_").add_operation (temp_30.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 419)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 419)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 419)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 420)) ;
      }
      {
      const GGS_templateInstructionForeachForGeneration temp_31 = this ;
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_31.readProperty_mAfterInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 421)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 429)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 430)) ;
    }
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas", 433)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas", 434)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionSwitchAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionSwitchAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_switchExpression_5540 ;
  const GGS_templateInstructionSwitchAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_switchExpression_5540, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 139)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_typeKindEnum_2E_enumType var_enumType_5570 = extensionGetter_definition (var_switchExpression_5540.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 146)).readProperty_typeKind ().getter_getEnumType (SOURCE_FILE ("template-switch-instruction.galgas", 146)).unwrappedValue () ;
    if (!extensionGetter_definition (var_switchExpression_5540.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 146)).readProperty_typeKind ().getter_getEnumType (SOURCE_FILE ("template-switch-instruction.galgas", 146)).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      GGS_stringset var_constantsNamedInSwitchInstruction_5670 = GGS_stringset::init (inCompiler COMMA_HERE) ;
      GGS_templateInstructionSwitchBranchListForGeneration var_templateInstructionSwitchBranchList_5793 = GGS_templateInstructionSwitchBranchListForGeneration::init (inCompiler COMMA_HERE) ;
      const GGS_templateInstructionSwitchAST temp_2 = this ;
      UpEnumerator_templateInstructionSwitchBranchListAST enumerator_5903 (temp_2.readProperty_templateInstructionSwitchBranchList ()) ;
      while (enumerator_5903.hasCurrentObject ()) {
        GGS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration_6014 = GGS_extractedAssociatedValuesForGeneration::init (inCompiler COMMA_HERE) ;
        GGS_templateAnalysisContext var_analysisContext_6069 = constinArgument_inAnalysisContext ;
        UpEnumerator__5B_lstring_5D_ enumerator_6131 (enumerator_5903.current_constantList (HERE)) ;
        while (enumerator_6131.hasCurrentObject ()) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = var_enumType_5570.readProperty_constantMap ().getter_hasKey (enumerator_6131.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 154)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = var_constantsNamedInSwitchInstruction_5670.getter_hasKey (enumerator_6131.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 155)).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  TC_Array <FixItDescription> fixItArray5 ;
                  inCompiler->emitSemanticError (enumerator_6131.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6131.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 157)).add_operation (GGS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 157)), fixItArray5  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 156)) ;
                }
              }
              var_constantsNamedInSwitchInstruction_5670.plusPlusAssignOperation (enumerator_6131.current (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 159)) ;
              GGS_associatedValueDescriptorList var_associatedTypeList_6600 ;
              GGS_uint joker_6561 ; // Joker input parameter
              var_enumType_5570.readProperty_constantMap ().method_searchKey (enumerator_6131.current (HERE), joker_6561, var_associatedTypeList_6600, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 160)) ;
              GalgasBool test_6 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_6) {
                test_6 = GGS_bool (ComparisonKind::greaterThan, var_associatedTypeList_6600.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 161)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, enumerator_5903.current_associatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 161)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 161)).boolEnum () ;
                if (GalgasBool::boolTrue == test_6) {
                  TC_Array <FixItDescription> fixItArray7 ;
                  inCompiler->emitSemanticError (enumerator_6131.current (HERE).readProperty_location (), GGS_string ("the associated values of '").add_operation (enumerator_6131.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 163)).add_operation (GGS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 163)), fixItArray7  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 162)) ;
                }
              }
              if (GalgasBool::boolFalse == test_6) {
                GalgasBool test_8 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_8) {
                  test_8 = GGS_bool (ComparisonKind::equal, var_associatedTypeList_6600.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 164)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_5903.current_associatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 164)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 164)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_8) {
                    TC_Array <FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (enumerator_6131.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6131.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 166)).add_operation (GGS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 166)), fixItArray9  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 165)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_8) {
                  GalgasBool test_10 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_10) {
                    test_10 = GGS_bool (ComparisonKind::notEqual, var_associatedTypeList_6600.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 167)).objectCompare (enumerator_5903.current_associatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 167)))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_10) {
                      GGS_string temp_11 ;
                      const GalgasBool test_12 = GGS_bool (ComparisonKind::greaterThan, var_associatedTypeList_6600.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 170)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
                      if (GalgasBool::boolTrue == test_12) {
                        temp_11 = GGS_string ("s") ;
                      }else if (GalgasBool::boolFalse == test_12) {
                        temp_11 = GGS_string::makeEmptyString () ;
                      }
                      TC_Array <FixItDescription> fixItArray13 ;
                      inCompiler->emitSemanticError (enumerator_6131.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6131.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)).add_operation (GGS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)).add_operation (var_associatedTypeList_6600.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 169)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)).add_operation (GGS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 169)), fixItArray13  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 168)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_10) {
                    UpEnumerator_associatedValueDescriptorList enumerator_7398 (var_associatedTypeList_6600) ;
                    UpEnumerator_switchExtractedValuesListAST enumerator_7463 (enumerator_5903.current_associatedValuesExtraction (HERE)) ;
                    GGS_uint index_7380 (uint32_t (0)) ;
                    while (enumerator_7398.hasCurrentObject () && enumerator_7463.hasCurrentObject ()) {
                      GalgasBool test_14 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_14) {
                        test_14 = GGS_bool (ComparisonKind::notEqual, enumerator_7463.current_mExtractedValueTypeName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_14) {
                          GalgasBool test_15 = GalgasBool::boolTrue ;
                          if (GalgasBool::boolTrue == test_15) {
                            test_15 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_7398.current (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 174)).readProperty_typeName ().readProperty_string ().objectCompare (enumerator_7463.current_mExtractedValueTypeName (HERE).readProperty_string ())).boolEnum () ;
                            if (GalgasBool::boolTrue == test_15) {
                              TC_Array <FixItDescription> fixItArray16 ;
                              inCompiler->emitSemanticError (enumerator_7463.current_mExtractedValueTypeName (HERE).readProperty_location (), GGS_string ("the required type is '@").add_operation (extensionGetter_definition (enumerator_7398.current (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 175)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 175)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 175)), fixItArray16  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 175)) ;
                            }
                          }
                        }
                      }
                      GGS_string var_cppName_7872 = GGS_string ("extractedValue_").add_operation (enumerator_7463.current_mExtractedValueName (HERE).readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 178)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 178)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 178)).add_operation (enumerator_7463.current_mExtractedValueName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 179)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 179)).add_operation (index_7380.getter_string (SOURCE_FILE ("template-switch-instruction.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 179)) ;
                      var_extractedAssociatedValuesForGeneration_6014.addAssignOperation (enumerator_7398.current (HERE).readProperty_type (), var_cppName_7872, enumerator_7398.current (HERE).readProperty_name ()  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 180)) ;
                      GalgasBool test_17 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_17) {
                        test_17 = GGS_bool (ComparisonKind::notEqual, enumerator_7463.current_mExtractedValueName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_17) {
                          {
                          var_analysisContext_6069.mProperty_mTemplateVariableMap.setter_insertKey (enumerator_7463.current_mExtractedValueName (HERE), enumerator_7398.current (HERE).readProperty_type (), var_cppName_7872, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 185)) ;
                          }
                        }
                      }
                      enumerator_7398.gotoNextObject () ;
                      enumerator_7463.gotoNextObject () ;
                      index_7380.increment_operation (inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 172)) ;
                    }
                  }
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            TC_Array <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (enumerator_6131.current (HERE).readProperty_location (), GGS_string ("'").add_operation (enumerator_6131.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 195)).add_operation (GGS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 195)).add_operation (extensionGetter_definition (var_switchExpression_5540.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 196)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 195)).add_operation (GGS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 196)), fixItArray18  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 194)) ;
          }
          enumerator_6131.gotoNextObject () ;
        }
        GGS_templateInstructionListForGeneration var_instructionList_8708 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
        {
        routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_6069, ioArgument_ioTypeMap, enumerator_5903.current_instructionList (HERE), var_instructionList_8708, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 200)) ;
        }
        var_templateInstructionSwitchBranchList_5793.addAssignOperation (enumerator_5903.current_constantList (HERE), var_extractedAssociatedValuesForGeneration_6014, enumerator_5903.current_endOfBranch (HERE).getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 211)), var_instructionList_8708  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 208)) ;
        enumerator_5903.gotoNextObject () ;
      }
      GGS_stringset var_forgottenConstants_9189 = var_enumType_5570.readProperty_constantMap ().getter_keySet (SOURCE_FILE ("template-switch-instruction.galgas", 215)).substract_operation (var_constantsNamedInSwitchInstruction_5670, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 215)) ;
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = GGS_bool (ComparisonKind::greaterThan, var_forgottenConstants_9189.getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 216)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          GGS_string var_s_9337 = GGS_string::makeEmptyString () ;
          UpEnumerator_stringset enumerator_9355 (var_forgottenConstants_9189) ;
          while (enumerator_9355.hasCurrentObject ()) {
            var_s_9337.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_9355.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 219)) ;
            enumerator_9355.gotoNextObject () ;
          }
          const GGS_templateInstructionSwitchAST temp_20 = this ;
          TC_Array <FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (temp_20.readProperty_switchExpressionEndLocation (), GGS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_9337, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 222)), fixItArray21  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 221)) ;
        }
      }
      ioArgument_ioInstructionList.addAssignOperation (GGS_templateInstructionSwitchForGeneration::init_21__21__21_ (var_switchExpression_5540.readProperty_mResultType (), var_switchExpression_5540, var_templateInstructionSwitchBranchList_5793, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 225)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    TC_Array <FixItDescription> fixItArray22 ;
    inCompiler->emitSemanticError (var_switchExpression_5540.readProperty_mLocation (), GGS_string ("'switch' expression type should be an enumeration (it is a ").add_operation (extensionGetter_string (extensionGetter_definition (var_switchExpression_5540.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 232)).readProperty_typeKind (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 231)).add_operation (GGS_string (" type)"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 232)), fixItArray22  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 231)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionSwitchForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionSwitchForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                 GGS_stringset & ioArgument_ioInclusionSet,
                                                                                 GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_switchVarCppName_11391 ;
  const GGS_templateInstructionSwitchForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_switchExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVarCppName_11391, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 265)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (").add_operation (var_switchVarCppName_11391, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 273)).add_operation (GGS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 273)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GGS_"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 274)) ;
  const GGS_templateInstructionSwitchForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_identifierRepresentation (temp_1.readProperty_switchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 275)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 275)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::Enumeration::invalid :\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 276)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 277)) ;
  const GGS_templateInstructionSwitchForGeneration temp_2 = this ;
  UpEnumerator_templateInstructionSwitchBranchListForGeneration enumerator_11719 (temp_2.readProperty_templateInstructionSwitchBranchList ()) ;
  while (enumerator_11719.hasCurrentObject ()) {
    UpEnumerator__5B_lstring_5D_ enumerator_11789 (enumerator_11719.current (HERE).readProperty_mConstantList ()) ;
    while (enumerator_11789.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GGS_"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 281)) ;
      const GGS_templateInstructionSwitchForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_identifierRepresentation (temp_3.readProperty_switchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 282)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::Enumeration::enum_"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 283)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_11789.current (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-switch-instruction.galgas", 284)).add_operation (GGS_string (" :\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 284)) ;
      enumerator_11789.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 286)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 287)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_11719.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ().getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 288)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        UpEnumerator_extractedAssociatedValuesForGeneration enumerator_12244 (enumerator_11719.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ()) ;
        while (enumerator_12244.hasCurrentObject ()) {
          extensionMethod_addHeaderFileName (enumerator_12244.current (HERE).readProperty_mType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 290)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_12244.current (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 291)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (enumerator_12244.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 292)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 292)) ;
          enumerator_12244.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_switchVarCppName_11391, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 294)).add_operation (GGS_string (".getAssociatedValuesFor_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 294)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_11719.current (HERE).readProperty_mConstantList ().readSubscript__3F_ (GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-switch-instruction.galgas", 295)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 295)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 295)) ;
        UpEnumerator_extractedAssociatedValuesForGeneration enumerator_12717 (enumerator_11719.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ()) ;
        while (enumerator_12717.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_12717.current (HERE).readProperty_mCppName (), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 297)) ;
          enumerator_12717.gotoNextObject () ;
          if (enumerator_12717.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 298)) ;
          }
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 300)) ;
      }
    }
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, enumerator_11719.current (HERE).readProperty_mInstructionList ().getter_count (SOURCE_FILE ("template-switch-instruction.galgas", 302)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 303)) ;
        }
        {
        routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_11719.current (HERE).readProperty_mInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 304)) ;
        }
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 312)) ;
        }
      }
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 314)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 315)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 316)) ;
    }
    enumerator_11719.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas", 319)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexiqueComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexiqueComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexiqueComponentAST temp_0 = this ;
  result_result = GGS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 811)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexiqueComponentAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueComponentAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                               GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                               GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                               GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                               GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                               GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                               GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueComponentAST temp_0 = this ;
  const GGS_lexiqueComponentAST temp_1 = this ;
  GGS_lstring var_key_29755 = GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 824)), temp_1.readProperty_mLexiqueComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_lexiqueComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_29755, temp_2, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 825)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexiqueComponentAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueComponentAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                         const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                         const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                         const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                         const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                         GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                         GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeMap var_lexicalTypeMap_30679 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 839)) ;
  GGS_lexicalAttributeMap var_lexicalAttributeMap_30746 = GGS_lexicalAttributeMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_lexiqueComponentAST temp_0 = this ;
  routine_buildLexicalAttributeMap_3F__3F__26_ (var_lexicalTypeMap_30679, temp_0.readProperty_mLexicalAttributeListAST (), var_lexicalAttributeMap_30746, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 841)) ;
  }
  GGS_terminalMap var_terminalMap_30943 = GGS_terminalMap::init (inCompiler COMMA_HERE) ;
  const GGS_lexiqueComponentAST temp_1 = this ;
  UpEnumerator_terminalDeclarationListAST enumerator_30992 (temp_1.readProperty_mTerminalDeclarationListAST ()) ;
  while (enumerator_30992.hasCurrentObject ()) {
    GGS_lexicalSentValueList var_argumentTypeList_31042 = GGS_lexicalSentValueList::init (inCompiler COMMA_HERE) ;
    UpEnumerator_sentLexicalAttributeListAST enumerator_31111 (enumerator_30992.current_mSentAttributeList (HERE)) ;
    while (enumerator_31111.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_31209 ;
      var_lexicalAttributeMap_30746.method_searchKey (enumerator_31111.current_mAttributeName (HERE), var_attributeLexicalType_31209, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 851)) ;
      var_argumentTypeList_31042.addAssignOperation (enumerator_31111.current_mFormalSelector (HERE), enumerator_31111.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_31209  COMMA_SOURCE_FILE ("lexique-component.galgas", 852)) ;
      enumerator_31111.gotoNextObject () ;
    }
    {
    var_terminalMap_30943.setter_insertKey (enumerator_30992.current_mName (HERE), var_argumentTypeList_31042, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 854)) ;
    }
    enumerator_30992.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_2 = this ;
  UpEnumerator_lexicalListDeclarationListAST enumerator_31425 (temp_2.readProperty_mLexicalListDeclarationListAST ()) ;
  while (enumerator_31425.hasCurrentObject ()) {
    GGS_lexicalSentValueList var_argumentTypeList_31487 = GGS_lexicalSentValueList::init (inCompiler COMMA_HERE) ;
    UpEnumerator_sentLexicalAttributeListAST enumerator_31556 (enumerator_31425.current_mSentAttributeList (HERE)) ;
    while (enumerator_31556.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_31655 ;
      var_lexicalAttributeMap_30746.method_searchKey (enumerator_31556.current_mAttributeName (HERE), var_attributeLexicalType_31655, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 860)) ;
      var_argumentTypeList_31487.addAssignOperation (enumerator_31556.current_mFormalSelector (HERE), enumerator_31556.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_31655  COMMA_SOURCE_FILE ("lexique-component.galgas", 861)) ;
      enumerator_31556.gotoNextObject () ;
    }
    UpEnumerator_lexicalListEntryListAST enumerator_31803 (enumerator_31425.current_mEntryList (HERE)) ;
    while (enumerator_31803.hasCurrentObject ()) {
      {
      var_terminalMap_30943.setter_insertKey (enumerator_31803.current_mTerminalSpelling (HERE), var_argumentTypeList_31487, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 864)) ;
      }
      enumerator_31803.gotoNextObject () ;
    }
    enumerator_31425.gotoNextObject () ;
  }
  {
  const GGS_lexiqueComponentAST temp_3 = this ;
  const GGS_lexiqueComponentAST temp_4 = this ;
  const GGS_lexiqueComponentAST temp_5 = this ;
  const GGS_lexiqueComponentAST temp_6 = this ;
  const GGS_lexiqueComponentAST temp_7 = this ;
  const GGS_lexiqueComponentAST temp_8 = this ;
  const GGS_lexiqueComponentAST temp_9 = this ;
  ioArgument_ioSemanticContext.mProperty_mLexiqueComponentMapForSemanticAnalysis.setter_insertKey (temp_3.readProperty_mLexiqueComponentName (), temp_4.readProperty_mIsTemplate (), var_terminalMap_30943, temp_5.readProperty_mIndexingListAST (), temp_6.readProperty_mTerminalDeclarationListAST (), temp_7.readProperty_mLexicalAttributeListAST (), temp_8.readProperty_mLexicalStyleListAST (), temp_9.readProperty_mLexicalListDeclarationListAST (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 868)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexiqueComponentAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueComponentAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                        const GGS_string /* constinArgument_inProductDirectory */,
                                                        const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                        GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                        const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                        GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueComponentAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_33040 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 891)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_33040, var_nameForUsefulness_33040, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 892)) ;
  }
  GGS_lexicalTypeMap var_lexicalTypeMap_33293 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 894)) ;
  GGS_lexicalRoutineMap var_lexicalRoutineMap_33431 ;
  {
  routine_buildLexicalRoutineMap_21_ (var_lexicalRoutineMap_33431, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 896)) ;
  }
  GGS_lexicalFunctionMap var_lexicalFunctionMap_33550 ;
  {
  routine_buildLexicalFunctionMap_21_ (var_lexicalFunctionMap_33550, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 898)) ;
  }
  GGS_stringset var_unicodeTestFunctions_33677 ;
  {
  routine_lexicalUnicodeTestFunctionAnalysis_21_ (var_unicodeTestFunctions_33677, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 900)) ;
  }
  const GGS_lexiqueComponentAST temp_1 = this ;
  GGS_lexiqueAnalysisContext var_lexiqueAnalysisContext_33770 = GGS_lexiqueAnalysisContext::init_21__21__21__21__21__21__21__21__21__21__21__21_ (temp_1.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexicalRoutineMap_33431, var_lexicalFunctionMap_33550, GGS_lexicalMessageMap::init (inCompiler COMMA_HERE), GGS_terminalMap::init (inCompiler COMMA_HERE), GGS_terminalList::init (inCompiler COMMA_HERE), GGS_lexicalAttributeMap::init (inCompiler COMMA_HERE), GGS_lexicalExplicitTokenListMapMap::init (inCompiler COMMA_HERE), GGS_stringset::init (inCompiler COMMA_HERE), GGS_templateDelimitorList::init (inCompiler COMMA_HERE), GGS_styleMap::init (inCompiler COMMA_HERE), var_unicodeTestFunctions_33677, inCompiler COMMA_HERE) ;
  GGS_bigint var_styleIndex_34174 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 917)) ;
  const GGS_lexiqueComponentAST temp_2 = this ;
  UpEnumerator_lexicalStyleListAST enumerator_34202 (temp_2.readProperty_mLexicalStyleListAST ()) ;
  while (enumerator_34202.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_33770.mProperty_mStyleMap.setter_insertKey (enumerator_34202.current_mName (HERE), enumerator_34202.current_mComment (HERE), var_styleIndex_34174.getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 919)), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 919)) ;
    }
    var_styleIndex_34174.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 920)), inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 920)) ;
    enumerator_34202.gotoNextObject () ;
  }
  {
  const GGS_lexiqueComponentAST temp_3 = this ;
  routine_buildLexicalAttributeMap_3F__3F__26_ (var_lexicalTypeMap_33293, temp_3.readProperty_mLexicalAttributeListAST (), var_lexiqueAnalysisContext_33770.mProperty_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("lexique-component.galgas", 923)) ;
  }
  const GGS_lexiqueComponentAST temp_4 = this ;
  UpEnumerator_terminalDeclarationListAST enumerator_34692 (temp_4.readProperty_mTerminalDeclarationListAST ()) ;
  while (enumerator_34692.hasCurrentObject ()) {
    GGS_uint var_terminalStyleIndex_34766 = GGS_uint (uint32_t (0U)) ;
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, enumerator_34692.current_mStyle (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique-component.galgas", 931)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GGS_lstring joker_34885 ; // Joker input parameter
        var_lexiqueAnalysisContext_33770.readProperty_mStyleMap ().method_searchKey (enumerator_34692.current_mStyle (HERE), joker_34885, var_terminalStyleIndex_34766, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 932)) ;
      }
    }
    GGS_lexicalSentValueList var_argumentTypeList_34925 = GGS_lexicalSentValueList::init (inCompiler COMMA_HERE) ;
    UpEnumerator_sentLexicalAttributeListAST enumerator_34994 (enumerator_34692.current_mSentAttributeList (HERE)) ;
    while (enumerator_34994.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_35117 ;
      var_lexiqueAnalysisContext_33770.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_34994.current_mAttributeName (HERE), var_attributeLexicalType_35117, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 936)) ;
      var_argumentTypeList_34925.addAssignOperation (enumerator_34994.current_mFormalSelector (HERE), enumerator_34994.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_35117  COMMA_SOURCE_FILE ("lexique-component.galgas", 937)) ;
      enumerator_34994.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_33770.mProperty_mTerminalMap.setter_insertKey (enumerator_34692.current_mName (HERE), var_argumentTypeList_34925, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 939)) ;
    }
    var_lexiqueAnalysisContext_33770.mProperty_mTerminalList.addAssignOperation (enumerator_34692.current_mName (HERE), var_argumentTypeList_34925, enumerator_34692.current_mSyntaxErrorMessage (HERE).readProperty_string (), enumerator_34692.current_isEndOfTemplateMark (HERE), enumerator_34692.current_nonAtomicSelection (HERE).operator_not (SOURCE_FILE ("lexique-component.galgas", 962)), var_terminalStyleIndex_34766  COMMA_SOURCE_FILE ("lexique-component.galgas", 957)) ;
    enumerator_34692.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_6 = this ;
  UpEnumerator_lexicalListDeclarationListAST enumerator_36296 (temp_6.readProperty_mLexicalListDeclarationListAST ()) ;
  while (enumerator_36296.hasCurrentObject ()) {
    GGS_uint var_terminalStyleIndex_36364 = GGS_uint (uint32_t (0U)) ;
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = GGS_bool (ComparisonKind::greaterThan, enumerator_36296.current_mStyle (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique-component.galgas", 967)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        GGS_lstring joker_36483 ; // Joker input parameter
        var_lexiqueAnalysisContext_33770.readProperty_mStyleMap ().method_searchKey (enumerator_36296.current_mStyle (HERE), joker_36483, var_terminalStyleIndex_36364, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 968)) ;
      }
    }
    GGS_lexicalSentValueList var_argumentTypeList_36523 = GGS_lexicalSentValueList::init (inCompiler COMMA_HERE) ;
    UpEnumerator_sentLexicalAttributeListAST enumerator_36592 (enumerator_36296.current_mSentAttributeList (HERE)) ;
    while (enumerator_36592.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_36715 ;
      var_lexiqueAnalysisContext_33770.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_36592.current_mAttributeName (HERE), var_attributeLexicalType_36715, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 972)) ;
      var_argumentTypeList_36523.addAssignOperation (enumerator_36592.current_mFormalSelector (HERE), enumerator_36592.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_36715  COMMA_SOURCE_FILE ("lexique-component.galgas", 973)) ;
      enumerator_36592.gotoNextObject () ;
    }
    GGS_lexicalExplicitTokenListMap var_lexicalTokenListMap_36870 = GGS_lexicalExplicitTokenListMap::init (inCompiler COMMA_HERE) ;
    GGS_tokenSortedlist var_tokenSortedlist_36904 = GGS_tokenSortedlist::init (inCompiler COMMA_HERE) ;
    UpEnumerator_lexicalListEntryListAST enumerator_37003 (enumerator_36296.current_mEntryList (HERE)) ;
    while (enumerator_37003.hasCurrentObject ()) {
      GGS_string var_syntaxErrorMessage_37049 = enumerator_36296.current_mSyntaxErrorMessage (HERE).readProperty_string ().getter_stringByReplacingStringByString (GGS_string ("%K"), enumerator_37003.current_mTerminalSpelling (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 978)) ;
      var_lexiqueAnalysisContext_33770.mProperty_mTerminalList.addAssignOperation (enumerator_37003.current_mTerminalSpelling (HERE), var_argumentTypeList_36523, var_syntaxErrorMessage_37049, enumerator_37003.current_isEndOfTemplateMark (HERE), enumerator_37003.current_nonAtomicSelection (HERE).operator_not (SOURCE_FILE ("lexique-component.galgas", 984)), var_terminalStyleIndex_36364  COMMA_SOURCE_FILE ("lexique-component.galgas", 979)) ;
      {
      var_lexiqueAnalysisContext_33770.mProperty_mTerminalMap.setter_insertKey (enumerator_37003.current_mTerminalSpelling (HERE), var_argumentTypeList_36523, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 986)) ;
      }
      {
      var_lexicalTokenListMap_36870.setter_insertKey (enumerator_37003.current_mEntrySpelling (HERE), enumerator_37003.current_mTerminalSpelling (HERE), enumerator_37003.current_nonAtomicSelection (HERE), enumerator_37003.current_isEndOfTemplateMark (HERE), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 987)) ;
      }
      var_tokenSortedlist_36904.addAssignOperation (enumerator_37003.current_mEntrySpelling (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique-component.galgas", 993)), enumerator_37003.current_mEntrySpelling (HERE).readProperty_string (), enumerator_37003.current_mTerminalSpelling (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 993)) ;
      var_lexiqueAnalysisContext_33770.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (enumerator_37003.current_mEntrySpelling (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 994)) ;
      enumerator_37003.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_33770.mProperty_mLexicalTokenListMap.setter_insertKey (enumerator_36296.current_mName (HERE), var_lexicalTokenListMap_36870, var_tokenSortedlist_36904, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 996)) ;
    }
    enumerator_36296.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_8 = this ;
  UpEnumerator_lexicalMessageDeclarationListAST enumerator_38091 (temp_8.readProperty_mLexicalMessageDeclarationListAST ()) ;
  while (enumerator_38091.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_33770.mProperty_mLexicalMessageMap.setter_insertKey (enumerator_38091.current_mMessageName (HERE), enumerator_38091.current_mMessageValue (HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1000)) ;
    }
    enumerator_38091.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_9 = this ;
  UpEnumerator_lexicalRuleListAST enumerator_38313 (temp_9.readProperty_mLexicalRuleListAST ()) ;
  while (enumerator_38313.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRule ((cPtr_abstractLexicalRuleAST *) enumerator_38313.current_mLexicalRule (HERE).ptr (), var_lexiqueAnalysisContext_33770, inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1004)) ;
    enumerator_38313.gotoNextObject () ;
  }
  UpEnumerator_lexicalMessageMap enumerator_38505 (var_lexiqueAnalysisContext_33770.readProperty_mLexicalMessageMap ()) ;
  while (enumerator_38505.hasCurrentObject ()) {
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = enumerator_38505.current_mMessageIsUsed (HERE).operator_not (SOURCE_FILE ("lexique-component.galgas", 1008)).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        TC_Array <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticWarning (enumerator_38505.current_lkey (HERE).readProperty_location (), GGS_string ("unused message"), fixItArray11  COMMA_SOURCE_FILE ("lexique-component.galgas", 1009)) ;
      }
    }
    enumerator_38505.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_12 = this ;
  UpEnumerator_templateDelimitorListAST enumerator_38759 (temp_12.readProperty_mTemplateDelimitorListAST ()) ;
  while (enumerator_38759.hasCurrentObject ()) {
    var_lexiqueAnalysisContext_33770.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (enumerator_38759.current_mStartString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 1014)) ;
    var_lexiqueAnalysisContext_33770.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (enumerator_38759.current_mEndString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 1015)) ;
    var_lexiqueAnalysisContext_33770.mProperty_mTemplateDelimitorList.addAssignOperation (enumerator_38759.current_mStartString (HERE), enumerator_38759.current_mEndString (HERE), enumerator_38759.current_mPreserved (HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas", 1016)) ;
    enumerator_38759.gotoNextObject () ;
  }
  GGS_stringset var_indexNameSet_39082 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  const GGS_lexiqueComponentAST temp_13 = this ;
  UpEnumerator_indexingListAST enumerator_39119 (temp_13.readProperty_mIndexingListAST ()) ;
  while (enumerator_39119.hasCurrentObject ()) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = var_indexNameSet_39082.getter_hasKey (enumerator_39119.current_mIndexName (HERE).readProperty_string () COMMA_SOURCE_FILE ("lexique-component.galgas", 1020)).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        TC_Array <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_39119.current_mIndexName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_39119.current_mIndexName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1021)).add_operation (GGS_string ("' index is already declared"), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1021)), fixItArray15  COMMA_SOURCE_FILE ("lexique-component.galgas", 1021)) ;
      }
    }
    var_indexNameSet_39082.plusPlusAssignOperation (enumerator_39119.current_mIndexName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 1023)) ;
    enumerator_39119.gotoNextObject () ;
  }
  const GGS_lexiqueComponentAST temp_16 = this ;
  UpEnumerator_templateReplacementListAST enumerator_39436 (temp_16.readProperty_mTemplateReplacementListAST ()) ;
  while (enumerator_39436.hasCurrentObject ()) {
    var_lexiqueAnalysisContext_33770.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (enumerator_39436.current_mMatchString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 1027)) ;
    var_lexiqueAnalysisContext_33770.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (enumerator_39436.current_mReplacementString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("lexique-component.galgas", 1028)) ;
    enumerator_39436.gotoNextObject () ;
  }
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("lexique-component.galgas", 1032)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      const GGS_lexiqueComponentAST temp_18 = this ;
      const GGS_lexiqueComponentAST temp_19 = this ;
      const GGS_lexiqueComponentAST temp_20 = this ;
      const GGS_lexiqueComponentAST temp_21 = this ;
      GGS_string var_headerContents_39806 = GGS_string (filewrapperTemplate_lexiqueGenerationTemplates_headerZone_32_ (inCompiler, temp_18.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-component.galgas", 1035)), temp_19.readProperty_mLexicalListDeclarationListAST (), var_lexiqueAnalysisContext_33770, temp_20.readProperty_mTemplateDelimitorListAST (), temp_21.readProperty_mIndexingListAST () COMMA_SOURCE_FILE ("lexique-component.galgas", 1034))) ;
      const GGS_lexiqueComponentAST temp_22 = this ;
      const GGS_lexiqueComponentAST temp_23 = this ;
      const GGS_lexiqueComponentAST temp_24 = this ;
      const GGS_lexiqueComponentAST temp_25 = this ;
      const GGS_lexiqueComponentAST temp_26 = this ;
      const GGS_lexiqueComponentAST temp_27 = this ;
      const GGS_lexiqueComponentAST temp_28 = this ;
      GGS_string var_cppContents_40109 = GGS_string (filewrapperTemplate_lexiqueGenerationTemplates_implementationZone_32_Galgas_33_ (inCompiler, temp_22.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-component.galgas", 1043)), extensionGetter_useLoopLocalVar (temp_23.readProperty_mLexicalRuleListAST (), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1044)), var_lexiqueAnalysisContext_33770.readProperty_mLexicalAttributeMap (), var_lexiqueAnalysisContext_33770.readProperty_mLexicalMessageMap (), var_lexiqueAnalysisContext_33770.readProperty_mTerminalList (), var_lexiqueAnalysisContext_33770.readProperty_mLexicalTokenListMap (), var_lexiqueAnalysisContext_33770.readProperty_mUnicodeStringToGenerate (), temp_24.readProperty_mLexicalRuleListAST (), var_lexiqueAnalysisContext_33770, temp_25.readProperty_mTemplateDelimitorListAST (), temp_26.readProperty_mLexiqueComponentName ().readProperty_string (), temp_27.readProperty_mTemplateReplacementListAST (), temp_28.readProperty_mLexicalStyleListAST () COMMA_SOURCE_FILE ("lexique-component.galgas", 1042))) ;
      const GGS_lexiqueComponentAST temp_29 = this ;
      GGS_string var_objCocoaHeader_40808 = GGS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (inCompiler, temp_29.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexiqueAnalysisContext_33770 COMMA_SOURCE_FILE ("lexique-component.galgas", 1058))) ;
      const GGS_lexiqueComponentAST temp_30 = this ;
      const GGS_lexiqueComponentAST temp_31 = this ;
      const GGS_lexiqueComponentAST temp_32 = this ;
      const GGS_lexiqueComponentAST temp_33 = this ;
      const GGS_lexiqueComponentAST temp_34 = this ;
      const GGS_lexiqueComponentAST temp_35 = this ;
      const GGS_lexiqueComponentAST temp_36 = this ;
      GGS_string var_objCocoaImplementation_41001 = GGS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaImplementationZone_32_ (inCompiler, GGS_string ("lexique-").add_operation (temp_30.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("lexique-component.galgas", 1064)), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1064)).add_operation (GGS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1064)), temp_31.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexiqueAnalysisContext_33770.readProperty_mLexicalAttributeMap (), var_lexiqueAnalysisContext_33770.readProperty_mLexicalMessageMap (), var_lexiqueAnalysisContext_33770.readProperty_mTerminalList (), var_lexiqueAnalysisContext_33770.readProperty_mUnicodeStringToGenerate (), temp_32.readProperty_mLexicalRuleListAST (), var_lexiqueAnalysisContext_33770, temp_33.readProperty_mTemplateReplacementListAST (), temp_34.readProperty_mIndexingListAST (), temp_35.readProperty_mLexicalStyleListAST (), temp_36.readProperty_mTemplateDelimitorListAST () COMMA_SOURCE_FILE ("lexique-component.galgas", 1063))) ;
      const GGS_lexiqueComponentAST temp_37 = this ;
      const GGS_lexiqueComponentAST temp_38 = this ;
      const GGS_lexiqueComponentAST temp_39 = this ;
      const GGS_lexiqueComponentAST temp_40 = this ;
      const GGS_lexiqueComponentAST temp_41 = this ;
      const GGS_lexiqueComponentAST temp_42 = this ;
      const GGS_lexiqueComponentAST temp_43 = this ;
      GGS_string var_swiftCocoaImplementation_41672 = GGS_string (filewrapperTemplate_lexiqueGenerationTemplates_swiftCocoaImplementationZone_32_ (inCompiler, GGS_string ("lexique-").add_operation (temp_37.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("lexique-component.galgas", 1079)), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1079)).add_operation (GGS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1079)), temp_38.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexiqueAnalysisContext_33770.readProperty_mLexicalAttributeMap (), var_lexiqueAnalysisContext_33770.readProperty_mLexicalMessageMap (), var_lexiqueAnalysisContext_33770.readProperty_mTerminalList (), var_lexiqueAnalysisContext_33770.readProperty_mUnicodeStringToGenerate (), temp_39.readProperty_mLexicalRuleListAST (), var_lexiqueAnalysisContext_33770, temp_40.readProperty_mTemplateReplacementListAST (), temp_41.readProperty_mIndexingListAST (), temp_42.readProperty_mLexicalStyleListAST (), temp_43.readProperty_mTemplateDelimitorListAST () COMMA_SOURCE_FILE ("lexique-component.galgas", 1078))) ;
      const GGS_lexiqueComponentAST temp_44 = this ;
      const GGS_lexiqueComponentAST temp_45 = this ;
      ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string::makeEmptyString (), GGS_lexiqueDeclarationForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21_ (GGS_bool (true), GGS_string ("lexique-").add_operation (temp_44.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("lexique-component.galgas", 1097)), inCompiler COMMA_SOURCE_FILE ("lexique-component.galgas", 1097)), temp_45.readProperty_mLexiqueComponentName ().readProperty_string (), GGS_string::makeEmptyString (), var_headerContents_39806, var_cppContents_40109, var_objCocoaHeader_40808, var_objCocoaImplementation_41001, var_swiftCocoaImplementation_41672, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("lexique-component.galgas", 1093)) ;
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

GGS_string filewrapperTemplate_lexiqueGenerationTemplates_headerZone_32_ (Compiler * inCompiler,
                                                                          const GGS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                          const GGS_lexicalListDeclarationListAST & in_DELIMITOR_5F_LIST_5F_LIST,
                                                                          const GGS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                          const GGS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                          const GGS_indexingListAST & in_INDEXING_5F_LIST
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("LEXIQUE ").add_operation (in_LEXIQUE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"Lexique.h\"\n\n//--------------------------------------------------------------------------------------------------\n//                    E X T E R N    R O U T I N E S\n//--------------------------------------------------------------------------------------------------\n") ;
  GGS_uint index_654_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap ().isValid ()) {
    UpEnumerator_lexicalRoutineMap enumerator_654 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap ()) ;
    while (enumerator_654.hasCurrentObject ()) {
      const GalgasBool test_0 = enumerator_654.current_mIsExtern (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("\nvoid scanner_routine_") ;
        result.appendString (enumerator_654.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (Lexique & inLexique") ;
        GGS_uint index_873_ (0) ;
        if (enumerator_654.current_mLexicalRoutineFormalArgumentList (HERE).isValid ()) {
          UpEnumerator_lexicalRoutineFormalArgumentList enumerator_873 (enumerator_654.current_mLexicalRoutineFormalArgumentList (HERE)) ;
          while (enumerator_873.hasCurrentObject ()) {
            result.appendString (",\n                ") ;
            result.appendString (extensionGetter_cppConstInFormalArgument (enumerator_873.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 17)).stringValue ()) ;
            result.appendString (extensionGetter_cppTypeName (enumerator_873.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 18)).stringValue ()) ;
            result.appendString (extensionGetter_cppReferenceInFormalArgument (enumerator_873.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 19)).stringValue ()) ;
            result.appendString (" ") ;
            result.appendString (enumerator_873.current_mArgumentNameForComment (HERE).stringValue ()) ;
            enumerator_873.gotoNextObject () ;
            index_873_.increment () ;
          }
        }
        GGS_uint index_1226_ (0) ;
        if (enumerator_654.current_mErrorMessageList (HERE).isValid ()) {
          UpEnumerator_stringlist enumerator_1226 (enumerator_654.current_mErrorMessageList (HERE)) ;
          while (enumerator_1226.hasCurrentObject ()) {
            result.appendString (",\n                const char * ") ;
            result.appendString (enumerator_1226.current_mValue (HERE).stringValue ()) ;
            enumerator_1226.gotoNextObject () ;
            index_1226_.increment () ;
          }
        }
        result.appendString (") ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_654.gotoNextObject () ;
      index_654_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                    E X T E R N    F U N C T I O N S\n//--------------------------------------------------------------------------------------------------\n") ;
  GGS_uint index_1712_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap ().isValid ()) {
    UpEnumerator_lexicalFunctionMap enumerator_1712 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap ()) ;
    while (enumerator_1712.hasCurrentObject ()) {
      const GalgasBool test_1 = enumerator_1712.current_mIsExtern (HERE).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("\n") ;
        result.appendString (extensionGetter_cppTypeName (enumerator_1712.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 35)).stringValue ()) ;
        result.appendString (" scanner_function_") ;
        result.appendString (enumerator_1712.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (Lexique & inLexique") ;
        GGS_uint index_1907_ (0) ;
        if (enumerator_1712.current_mLexicalTypeList (HERE).isValid ()) {
          UpEnumerator_lexicalFunctionFormalArgumentList enumerator_1907 (enumerator_1712.current_mLexicalTypeList (HERE)) ;
          while (enumerator_1907.hasCurrentObject ()) {
            result.appendString (",\n                const ") ;
            result.appendString (extensionGetter_cppTypeName (enumerator_1907.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 37)).stringValue ()) ;
            result.appendString (" ") ;
            result.appendString (enumerator_1907.current_mArgumentNameForComment (HERE).stringValue ()) ;
            enumerator_1907.gotoNextObject () ;
            index_1907_.increment () ;
          }
        }
        result.appendString (") ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1712.gotoNextObject () ;
      index_1712_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                       T O K E N    C L A S S\n//--------------------------------------------------------------------------------------------------\n\nclass cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public cToken {\n") ;
  GGS_uint index_2424_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_2424 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ()) ;
    while (enumerator_2424.hasCurrentObject ()) {
      result.appendString ("  public: ") ;
      result.appendString (extensionGetter_cppTypeName (enumerator_2424.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 50)).stringValue ()) ;
      result.appendString (" mLexicalAttribute_") ;
      result.appendString (enumerator_2424.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 50)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_2424.gotoNextObject () ;
      index_2424_.increment () ;
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
  result.appendString (" (Compiler * inCallerCompiler,\n                       const String & inSourceString,\n                       const String & inStringForError\n                       COMMA_LOCATION_ARGS) ;\n\n//--- Instrospection\n  public: static GGS_stringlist symbols (LOCATION_ARGS) ;\n\n//--- Declaring a protected virtual destructor enables the compiler to raise\n//    an error if a direct delete is performed; only the static method\n//    SharedObject::detachPointer may invoke delete.\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    protected: virtual ~ Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) { }\n  #endif\n") ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 80)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("\n//--- Scanner mode for template scanner\n  private: int32_t mMatchedTemplateDelimiterIndex ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n\n\n//--- Terminal symbols enumeration\n  public: const static int32_t kToken_ = 0 ;\n") ;
  GGS_uint index_4097_idx (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    UpEnumerator_terminalList enumerator_4097 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
    while (enumerator_4097.hasCurrentObject ()) {
      result.appendString ("  public: static const int32_t kToken_") ;
      result.appendString (enumerator_4097.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 89)).stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (index_4097_idx.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 89)).getter_string (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 89)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_4097.gotoNextObject () ;
      index_4097_idx.increment () ;
    }
  }
  GGS_uint index_4323_ (0) ;
  if (in_DELIMITOR_5F_LIST_5F_LIST.isValid ()) {
    UpEnumerator_lexicalListDeclarationListAST enumerator_4323 (in_DELIMITOR_5F_LIST_5F_LIST) ;
    while (enumerator_4323.hasCurrentObject ()) {
      result.appendString ("\n//--- Key words table '") ;
      result.appendString (enumerator_4323.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("'\n  public: static int32_t search_into_") ;
      result.appendString (enumerator_4323.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" (const String & inSearchedString) ;\n") ;
      enumerator_4323.gotoNextObject () ;
      index_4323_.increment () ;
    }
  }
  result.appendString ("  \n\n//--- Assign from attribute\n") ;
  GGS_uint index_4589_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_4589 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ()) ;
    while (enumerator_4589.hasCurrentObject ()) {
      result.appendString ("  public: GGS_l") ;
      result.appendString (extensionGetter_lexicalTypeBaseName (enumerator_4589.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 100)).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 100)).stringValue ()) ;
      result.appendString (" synthetizedAttribute_") ;
      result.appendString (enumerator_4589.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 100)).stringValue ()) ;
      result.appendString (" (void) const ;\n") ;
      enumerator_4589.gotoNextObject () ;
      index_4589_.increment () ;
    }
  }
  result.appendString ("\n\n//--- Attribute access\n") ;
  GGS_uint index_4860_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_4860 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ()) ;
    while (enumerator_4860.hasCurrentObject ()) {
      result.appendString ("  public: ") ;
      result.appendString (extensionGetter_cppTypeName (enumerator_4860.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 107)).stringValue ()) ;
      result.appendString (" attributeValue_") ;
      result.appendString (enumerator_4860.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 107)).stringValue ()) ;
      result.appendString (" (void) const ;\n") ;
      enumerator_4860.gotoNextObject () ;
      index_4860_.increment () ;
    }
  }
  result.appendString ("\n\n//--- indexing keys\n") ;
  GGS_uint index_5061_idx (0) ;
  if (in_INDEXING_5F_LIST.isValid ()) {
    UpEnumerator_indexingListAST enumerator_5061 (in_INDEXING_5F_LIST) ;
    while (enumerator_5061.hasCurrentObject ()) {
      result.appendString ("public: static const uint32_t kIndexing_") ;
      result.appendString (enumerator_5061.current_mIndexName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 114)).stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (index_5061_idx.getter_string (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 114)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_5061.gotoNextObject () ;
      index_5061_idx.increment () ;
    }
  }
  result.appendString ("\n//--- Parse lexical token\n  protected: void internalParseLexicalToken (cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & token) ;\n  protected: virtual bool parseLexicalToken (void) override ;\n\n//--- Get terminal message\n  protected: virtual String getMessageForTerminal (const int32_t inTerminalSymbol) const override ;\n\n//--- Get terminal count\n  public: virtual int32_t terminalVocabularyCount (void) const override { return ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 125)).getter_string (SOURCE_FILE ("lexique_header_template_zone_2.h.galgasTemplate", 125)).stringValue ()) ;
  result.appendString (" ; }\n\n//--- Get Token String\n  public: virtual String getCurrentTokenString (const cToken * inTokenPtr) const override ;\n\n//--- Enter Token\n  protected: void enterToken (cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & ioToken) ;\n\n//--- Style name for Latex\n  protected: virtual String styleNameForIndex (const uint32_t inStyleIndex) const override ;\n  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const override ;\n} ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates implementationZone2Galgas3'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_lexiqueGenerationTemplates_implementationZone_32_Galgas_33_ (Compiler * inCompiler,
                                                                                            const GGS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                            const GGS_bool & in_USE_5F_LOOP_5F_LOCAL_5F_VARIABLE,
                                                                                            const GGS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                            const GGS_lexicalMessageMap & in_LEXICAL_5F_MESSAGE_5F_MAP,
                                                                                            const GGS_terminalList & in_TERMINAL_5F_LIST,
                                                                                            const GGS_lexicalExplicitTokenListMapMap & in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP,
                                                                                            const GGS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                            const GGS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                            const GGS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                            const GGS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                            const GGS_string & in_LEXIQUE_5F_COMPONENT_5F_NAME,
                                                                                            const GGS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                            const GGS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//     L E X I Q U E                                                                             \n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"unicode_character_cpp.h\"\n#include \"scanner_actions.h\"\n#include \"cLexiqueIntrospection.h\"\n\n//--------------------------------------------------------------------------------------------------\n\ncTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void)") ;
  GGS_uint index_651_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_651 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP) ;
    const bool nonEmpty_enumerator_651 = enumerator_651.hasCurrentObject () ;
    if (nonEmpty_enumerator_651) {
      result.appendString (" :\n") ;
    }
    while (enumerator_651.hasCurrentObject ()) {
      result.appendString ("mLexicalAttribute_") ;
      result.appendString (enumerator_651.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 16)).stringValue ()) ;
      result.appendString (" ()") ;
      enumerator_651.gotoNextObject () ;
      if (enumerator_651.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_651_.increment () ;
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
  const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 28)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString (",\nmMatchedTemplateDelimiterIndex (-1)") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
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
  const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 41)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString (",\nmMatchedTemplateDelimiterIndex (-1)") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" {\n}\n\n//--------------------------------------------------------------------------------------------------\n//                        Lexical error message list                                             \n//--------------------------------------------------------------------------------------------------\n") ;
  GGS_uint index_2085_ (0) ;
  if (in_LEXICAL_5F_MESSAGE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalMessageMap enumerator_2085 (in_LEXICAL_5F_MESSAGE_5F_MAP) ;
    while (enumerator_2085.hasCurrentObject ()) {
      result.appendString ("\nstatic const char * gLexicalMessage_") ;
      result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_2085.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (enumerator_2085.current_mLexicalMessage (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 52)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_2085.gotoNextObject () ;
      index_2085_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                getMessageForTerminal                                                          \n//--------------------------------------------------------------------------------------------------\n\nString Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getMessageForTerminal (const int32_t inTerminalIndex) const {\n  String result = \"<unknown>\" ;\n  if ((inTerminalIndex >= 0) && (inTerminalIndex < ") ;
  result.appendString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 61)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 61)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 61)).stringValue ()) ;
  result.appendString (")) {\n    static const char * syntaxErrorMessageArray [") ;
  result.appendString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 62)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 62)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 62)).stringValue ()) ;
  result.appendString ("] = {kEndOfSourceLexicalErrorMessage") ;
  GGS_uint index_2948_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    UpEnumerator_terminalList enumerator_2948 (in_TERMINAL_5F_LIST) ;
    while (enumerator_2948.hasCurrentObject ()) {
      result.appendString (",\n        ") ;
      result.appendString (enumerator_2948.current_mSyntaxErrorMessage (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 64)).stringValue ()) ;
      enumerator_2948.gotoNextObject () ;
      index_2948_.increment () ;
    }
  }
  result.appendString ("\n    } ;\n    result = syntaxErrorMessageArray [inTerminalIndex] ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//                      U N I C O D E    S T R I N G S                                           \n//--------------------------------------------------------------------------------------------------\n") ;
  GGS_uint index_3471_ (0) ;
  if (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES.isValid ()) {
    UpEnumerator_stringset enumerator_3471 (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES) ;
    while (enumerator_3471.hasCurrentObject ()) {
      const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, enumerator_3471.current_key (HERE).getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 77)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_2) {
      case GalgasBool::boolTrue : {
        result.appendString ("\n//--- Unicode string for '$") ;
        result.appendString (enumerator_3471.current_key (HERE).getter_utf_38_RepresentationWithoutDelimiters (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 78)).stringValue ()) ;
        result.appendString ("$'\nstatic const std::initializer_list <utf32> kUnicodeString_") ;
        result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_3471.current_key (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).stringValue ()) ;
        result.appendString (" = ") ;
        result.appendString (enumerator_3471.current_key (HERE).getter_utf_33__32_Representation (GGS_bool (false) COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).stringValue ()) ;
        result.appendString (" ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_3471.gotoNextObject () ;
      index_3471_.increment () ;
    }
  }
  result.appendString ("\n") ;
  GGS_uint index_3920_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    UpEnumerator_lexicalExplicitTokenListMapMap enumerator_3920 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP) ;
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
      GGS_uint index_4611_ (0) ;
      if (enumerator_3920.current_mTokenSortedList (HERE).isValid ()) {
        UpEnumerator_tokenSortedlist enumerator_4611 (enumerator_3920.current_mTokenSortedList (HERE)) ;
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
          enumerator_4611.gotoNextObject () ;
          if (enumerator_4611.hasCurrentObject ()) {
            result.appendString (",\n") ;
          }
          index_4611_.increment () ;
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
      enumerator_3920.gotoNextObject () ;
      index_3920_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                          getCurrentTokenString                                                \n//--------------------------------------------------------------------------------------------------\n\nString Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getCurrentTokenString (const cToken * inTokenPtr) const {\n  const cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" * ptr = (const cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" *) inTokenPtr ;\n  String s ;\n  if (ptr == nullptr) {\n    s.appendCString (\"$$\") ;\n  }else{\n    switch (ptr->mTokenCode) {\n    case kToken_:\n      s.appendCString (\"$$\") ;\n      break ;\n") ;
  GGS_uint index_5958_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    UpEnumerator_terminalList enumerator_5958 (in_TERMINAL_5F_LIST) ;
    while (enumerator_5958.hasCurrentObject ()) {
      result.appendString ("    case kToken_") ;
      result.appendString (enumerator_5958.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 115)).stringValue ()) ;
      result.appendString (":\n      s.appendChar (TO_UNICODE ('$')) ;\n      s.appendCString (") ;
      result.appendString (enumerator_5958.current_mTerminalName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 117)).stringValue ()) ;
      result.appendString (") ;\n      s.appendChar (TO_UNICODE ('$')) ;\n") ;
      GGS_uint index_6317_ (0) ;
      if (enumerator_5958.current_mSentAttributeList (HERE).isValid ()) {
        UpEnumerator_lexicalSentValueList enumerator_6317 (enumerator_5958.current_mSentAttributeList (HERE)) ;
        while (enumerator_6317.hasCurrentObject ()) {
          result.appendString ("      s.appendChar (TO_UNICODE (' ')) ;\n      s.") ;
          result.appendString (extensionGetter_appendMethodName (enumerator_6317.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 121)).stringValue ()) ;
          result.appendString (" (ptr->mLexicalAttribute_") ;
          result.appendString (enumerator_6317.current_mLexicalAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 121)).stringValue ()) ;
          result.appendString (extensionGetter_appendArgumentOfMethod (enumerator_6317.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 121)).stringValue ()) ;
          result.appendString (") ;\n") ;
          enumerator_6317.gotoNextObject () ;
          index_6317_.increment () ;
        }
      }
      result.appendString ("      break ;\n") ;
      enumerator_5958.gotoNextObject () ;
      index_5958_.increment () ;
    }
  }
  result.appendString ("    default:\n      break ;\n    }\n  }\n  return s ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//                           Template Delimiters                                                 \n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_7181_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().isValid ()) {
    UpEnumerator_templateDelimitorList enumerator_7181 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ()) ;
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
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_7181.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 139)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("{}, 0,") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("kUnicodeString_") ;
        result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_7181.current_mEndString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 142)).stringValue ()) ;
        result.appendString (", ") ;
        result.appendString (enumerator_7181.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 142)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 142)).stringValue ()) ;
        result.appendString (",") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (" nullptr, ") ;
      result.appendString (enumerator_7181.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 145)).getter_cString (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 145)).stringValue ()) ;
      result.appendString (")") ;
      enumerator_7181.gotoNextObject () ;
      if (enumerator_7181.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_7181_.increment () ;
    }
    if (nonEmpty_enumerator_7181) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                           Template Replacements                                               \n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_8182_ (0) ;
  if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
    UpEnumerator_templateReplacementListAST enumerator_8182 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST) ;
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
      const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_8182.current_mReplacementFunction (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 160)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("nullptr") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("scanner_routine_") ;
        result.appendString (enumerator_8182.current_mReplacementFunction (HERE).readProperty_string ().stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (", true)") ;
      enumerator_8182.gotoNextObject () ;
      if (enumerator_8182.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_8182_.increment () ;
    }
    if (nonEmpty_enumerator_8182) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//            Terminal Symbols as end of script in template mark                                 \n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_5 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 174)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_5) {
  case GalgasBool::boolTrue : {
    GGS_uint index_9328_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
      UpEnumerator_terminalList enumerator_9328 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
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
        enumerator_9328.gotoNextObject () ;
        if (enumerator_9328.hasCurrentObject ()) {
          result.appendString (",\n") ;
        }
        index_9328_.increment () ;
      }
      if (nonEmpty_enumerator_9328) {
        result.appendString ("\n} ;\n") ;
      }
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//               INTERNAL PARSE LEXICAL TOKEN                                         \n//--------------------------------------------------------------------------------------------------\n\nvoid Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::internalParseLexicalToken (cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & token) {\n") ;
  const GalgasBool test_6 = in_USE_5F_LOOP_5F_LOCAL_5F_VARIABLE.boolEnum () ;
  switch (test_6) {
  case GalgasBool::boolTrue : {
    result.appendString ("  bool loop = true ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  GGS_uint index_9966_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_9966 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP) ;
    while (enumerator_9966.hasCurrentObject ()) {
      result.appendString ("  token.mLexicalAttribute_") ;
      result.appendString (enumerator_9966.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 193)).stringValue ()) ;
      result.appendString (extensionGetter_initialization (enumerator_9966.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 193)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_9966.gotoNextObject () ;
      index_9966_.increment () ;
    }
  }
  result.appendString ("  mTokenStartLocation = mCurrentLocation ;\n  try{\n") ;
  if (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).isValid ()) {
    result.incIndentation (int32_t (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).uintValue ())) ;
  }
  GGS_uint index_10187_ (0) ;
  if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalRuleListAST enumerator_10187 (in_LEXICAL_5F_RULE_5F_LIST) ;
    while (enumerator_10187.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_generateLexicalRuleCode ((const cPtr_abstractLexicalRuleAST *) enumerator_10187.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_IDENTIFIER, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 200)).stringValue ()) ;
      enumerator_10187.gotoNextObject () ;
      index_10187_.increment () ;
    }
  }
  if (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).isValid ()) {
    result.incIndentation (- int32_t (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 198)).uintValue ())) ;
  }
  result.appendString ("if (testForInputUTF32Char (TO_UNICODE ('\\0'))) { // End of source text \? \n      token.mTokenCode = kToken_ ; // Empty string code\n    }else{ // Unknown input character\n      unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;\n      token.mTokenCode = -1 ; // No token\n      advance () ; // ... go throught unknown character\n    }\n  }catch (const C_lexicalErrorException &) {\n    token.mTokenCode = -1 ; // No token\n    advance () ; // ... go throught unknown character\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n//               P A R S E    L E X I C A L    T O K E N                                         \n//--------------------------------------------------------------------------------------------------\n\nbool Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::parseLexicalToken (void) {\n  cTokenFor_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" token ;\n  token.mTokenCode = -1 ;\n  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n") ;
  const GalgasBool test_7 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 225)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_7) {
  case GalgasBool::boolTrue : {
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
  case GalgasBool::boolFalse : {
    result.appendString ("    internalParseLexicalToken (token) ;") ;
    } break ;
  case GalgasBool::boolNotValid :
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
  GGS_uint index_14631_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_14631 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP) ;
    while (enumerator_14631.hasCurrentObject ()) {
      result.appendString ("  ptr->mLexicalAttribute_") ;
      result.appendString (enumerator_14631.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 290)).stringValue ()) ;
      result.appendString (" = ioToken.mLexicalAttribute_") ;
      result.appendString (enumerator_14631.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 290)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_14631.gotoNextObject () ;
      index_14631_.increment () ;
    }
  }
  result.appendString ("  enterTokenFromPointer (ptr) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//               A T T R I B U T E   A C C E S S                                                 \n") ;
  GGS_uint index_15061_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_15061 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP) ;
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
      enumerator_15061.gotoNextObject () ;
      index_15061_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//         A S S I G N    F R O M    A T T R I B U T E                                           \n") ;
  GGS_uint index_15766_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_15766 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP) ;
    while (enumerator_15766.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\nGGS_l") ;
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
      result.appendString (") ;\n  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;\n  GGS_") ;
      result.appendString (extensionGetter_lexicalTypeBaseName (enumerator_15766.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 314)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 314)).stringValue ()) ;
      result.appendString (" value (ptr->mLexicalAttribute_") ;
      result.appendString (enumerator_15766.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 314)).stringValue ()) ;
      result.appendString (") ;\n  GGS_l") ;
      result.appendString (extensionGetter_lexicalTypeBaseName (enumerator_15766.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 315)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 315)).stringValue ()) ;
      result.appendString (" result (value, currentLocation) ;\n  return result ;\n}\n\n") ;
      enumerator_15766.gotoNextObject () ;
      index_15766_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//                         I N T R O S P E C T I O N                                             \n//--------------------------------------------------------------------------------------------------\n\nGGS_stringlist Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::symbols (LOCATION_ARGS) {\n  GGS_stringlist result = GGS_stringlist::class_func_emptyList (THERE) ;\n") ;
  GGS_uint index_17248_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    UpEnumerator_terminalList enumerator_17248 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
    while (enumerator_17248.hasCurrentObject ()) {
      result.appendString ("  result.addAssignOperation (GGS_string (") ;
      result.appendString (enumerator_17248.current_mTerminalName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 326)).stringValue ()) ;
      result.appendString (") COMMA_HERE) ;\n") ;
      enumerator_17248.gotoNextObject () ;
      index_17248_.increment () ;
    }
  }
  result.appendString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void getKeywordLists_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (TC_UniqueArray <String> & ") ;
  const GalgasBool test_8 = GGS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 334)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_8) {
  case GalgasBool::boolTrue : {
    result.appendString ("/* ioList */") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("ioList") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (") {\n") ;
  GGS_uint index_17757_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    UpEnumerator_lexicalExplicitTokenListMapMap enumerator_17757 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP) ;
    while (enumerator_17757.hasCurrentObject ()) {
      result.appendString ("  ioList.appendObject (") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 338)).add_operation (enumerator_17757.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 338)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 338)).stringValue ()) ;
      result.appendString (") ;\n") ;
      enumerator_17757.gotoNextObject () ;
      index_17757_.increment () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void getKeywordsForIdentifier_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const String & ") ;
  const GalgasBool test_9 = GGS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 344)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_9) {
  case GalgasBool::boolTrue : {
    result.appendString ("/* inIdentifier */") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("inIdentifier") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (",\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("bool & ") ;
  const GalgasBool test_10 = GGS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 345)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_10) {
  case GalgasBool::boolTrue : {
    result.appendString ("/* ioFound */") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("ioFound") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (",\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("TC_UniqueArray <String> & ") ;
  const GalgasBool test_11 = GGS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 346)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_11) {
  case GalgasBool::boolTrue : {
    result.appendString ("/* ioList */") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("ioList") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (") {\n") ;
  GGS_uint index_18466_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    UpEnumerator_lexicalExplicitTokenListMapMap enumerator_18466 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP) ;
    while (enumerator_18466.hasCurrentObject ()) {
      result.appendString ("  if (inIdentifier == ") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 350)).add_operation (enumerator_18466.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 350)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 350)).stringValue ()) ;
      result.appendString (") {\n    ioFound = true ;\n") ;
      GGS_uint index_18663_ (0) ;
      if (enumerator_18466.current_mTokenSortedList (HERE).isValid ()) {
        UpEnumerator_tokenSortedlist enumerator_18663 (enumerator_18466.current_mTokenSortedList (HERE)) ;
        while (enumerator_18663.hasCurrentObject ()) {
          result.appendString ("    ioList.appendObject (") ;
          result.appendString (enumerator_18663.current_mName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 353)).stringValue ()) ;
          result.appendString (") ;\n") ;
          enumerator_18663.gotoNextObject () ;
          index_18663_.increment () ;
        }
      }
      result.appendString ("    ioList.sortArrayUsingCompareMethod() ;\n  }\n") ;
      enumerator_18466.gotoNextObject () ;
      index_18466_.increment () ;
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
  result.appendString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 371)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 371)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 371)).stringValue ()) ;
  result.appendString ("] = {0") ;
  GGS_uint index_19759_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    UpEnumerator_terminalList enumerator_19759 (in_TERMINAL_5F_LIST) ;
    while (enumerator_19759.hasCurrentObject ()) {
      result.appendString (",\n    ") ;
      result.appendString (enumerator_19759.current_mStyleIndex (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 373)).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_19759.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 373)).stringValue ()) ;
      result.appendString (" */") ;
      enumerator_19759.gotoNextObject () ;
      index_19759_.increment () ;
    }
  }
  result.appendString ("\n  } ;\n  return (inTerminalIndex >= 0) \? kTerminalSymbolStyles [inTerminalIndex] : 0 ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      \n//--------------------------------------------------------------------------------------------------\n\nString Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::styleNameForIndex (const uint32_t inStyleIndex) const {\n  String result ;\n  if (inStyleIndex < ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 384)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 384)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 384)).stringValue ()) ;
  result.appendString (") {\n    static const char * kStyleArray [") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 385)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 385)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 385)).stringValue ()) ;
  result.appendString ("] = {\n      \"\"") ;
  GGS_uint index_20595_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_20595 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_20595.hasCurrentObject ()) {
      result.appendString (",\n      ") ;
      result.appendString (enumerator_20595.current_mName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 388)).stringValue ()) ;
      enumerator_20595.gotoNextObject () ;
      index_20595_.increment () ;
    }
  }
  result.appendString ("\n    } ;\n    result = kStyleArray [inStyleIndex] ;\n  }\n  return result ;\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates cocoaHeaderZone2'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (Compiler * inCompiler,
                                                                               const GGS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                               const GGS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("\n#import \"OC_Lexique.h\"\n\n//--------------------------------------------------------------------------------------------------\n//\n//                    E X T E R N    R O U T I N E S\n//\n//--------------------------------------------------------------------------------------------------\n") ;
  GGS_uint index_417_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap ().isValid ()) {
    UpEnumerator_lexicalRoutineMap enumerator_417 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap ()) ;
    while (enumerator_417.hasCurrentObject ()) {
      const GalgasBool test_0 = enumerator_417.current_mIsExtern (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("\nvoid scanner_cocoa_routine_") ;
        result.appendString (enumerator_417.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("BOOL * ioScanningOk") ;
        GGS_uint index_646_ (0) ;
        if (enumerator_417.current_mLexicalRoutineFormalArgumentList (HERE).isValid ()) {
          UpEnumerator_lexicalRoutineFormalArgumentList enumerator_646 (enumerator_417.current_mLexicalRoutineFormalArgumentList (HERE)) ;
          while (enumerator_646.hasCurrentObject ()) {
            result.appendString (",\n                ") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString (extensionGetter_cppConstInFormalArgument (enumerator_646.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 14)).stringValue ()) ;
            result.appendString (extensionGetter_cocoaTypeName (enumerator_646.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 15)).stringValue ()) ;
            result.appendString (extensionGetter_cocoaPointerInFormalArgument (enumerator_646.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 16)).stringValue ()) ;
            result.appendString (" ") ;
            result.appendString (enumerator_646.current_mArgumentNameForComment (HERE).stringValue ()) ;
            enumerator_646.gotoNextObject () ;
            index_646_.increment () ;
          }
        }
        result.appendString (") ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_417.gotoNextObject () ;
      index_417_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//\n//                    E X T E R N    F U N C T I O N S\n//\n//--------------------------------------------------------------------------------------------------\n") ;
  GGS_uint index_1392_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap ().isValid ()) {
    UpEnumerator_lexicalFunctionMap enumerator_1392 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap ()) ;
    while (enumerator_1392.hasCurrentObject ()) {
      const GalgasBool test_1 = enumerator_1392.current_mIsExtern (HERE).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("\n") ;
        result.appendString (extensionGetter_cppTypeName (enumerator_1392.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 31)).stringValue ()) ;
        result.appendString (" scanner_cocoa_function_") ;
        result.appendString (enumerator_1392.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (") ;
        columnMarker = result.currentColumn () ;
        result.appendString ("BOOL * ioScanningOk") ;
        GGS_uint index_1597_ (0) ;
        if (enumerator_1392.current_mLexicalTypeList (HERE).isValid ()) {
          UpEnumerator_lexicalFunctionFormalArgumentList enumerator_1597 (enumerator_1392.current_mLexicalTypeList (HERE)) ;
          while (enumerator_1597.hasCurrentObject ()) {
            result.appendString (",\n                ") ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result.appendString ("const ") ;
            result.appendString (extensionGetter_cppTypeName (enumerator_1597.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 33)).stringValue ()) ;
            result.appendString (" ") ;
            result.appendString (enumerator_1597.current_mArgumentNameForComment (HERE).stringValue ()) ;
            enumerator_1597.gotoNextObject () ;
            index_1597_.increment () ;
          }
        }
        result.appendString (") ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1392.gotoNextObject () ;
      index_1392_.increment () ;
    }
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//\n//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N\n//\n//--------------------------------------------------------------------------------------------------\n\nenum {") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_1_") ;
  GGS_uint index_2198_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    UpEnumerator_terminalList enumerator_2198 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
    while (enumerator_2198.hasCurrentObject ()) {
      result.appendString (",\n  ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_2198.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 48)).stringValue ()) ;
      enumerator_2198.gotoNextObject () ;
      index_2198_.increment () ;
    }
  }
  result.appendString ("\n} ;\n\n//--------------------------------------------------------------------------------------------------\n//\n//                     S C A N N E R    C L A S S\n//\n//--------------------------------------------------------------------------------------------------\n\n@interface OC_Lexique_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : OC_Lexique {\n//--- Attributes\n") ;
  GGS_uint index_2719_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_2719 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ()) ;
    while (enumerator_2719.hasCurrentObject ()) {
      result.appendString ("  @protected ") ;
      result.appendString (extensionGetter_cocoaTypeName (enumerator_2719.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 62)).stringValue ()) ;
      result.appendString (" mLexicalAttribute_") ;
      result.appendString (enumerator_2719.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_2719.gotoNextObject () ;
      index_2719_.increment () ;
    }
  }
  result.appendString ("\n}\n\n- (NSUInteger) terminalVocabularyCount ;\n\n- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal ;\n\n- (BOOL) internalParseLexicalTokenForLexicalColoring ;\n\n- (void) parseLexicalTokenForLexicalColoring ;\n\n- (NSUInteger) styleCount ;\n\n- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex ;\n\n- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex ;\n\n- (NSArray *) indexingTitles ; // Array of NSString\n\n- (BOOL) isTemplateLexique ;\n\n- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex ;\n\n@end\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates cocoaImplementationZone2'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaImplementationZone_32_ (Compiler * inCompiler,
                                                                                       const GGS_string & in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME,
                                                                                       const GGS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                       const GGS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                       const GGS_lexicalMessageMap & /* in_LEXICAL_5F_MESSAGE_5F_MAP */,
                                                                                       const GGS_terminalList & /* in_TERMINAL_5F_LIST */,
                                                                                       const GGS_stringset & /* in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES */,
                                                                                       const GGS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                       const GGS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                       const GGS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                       const GGS_indexingListAST & in_INDEXING_5F_LIST,
                                                                                       const GGS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST,
                                                                                       const GGS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n#import \"") ;
  result.appendString (in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME.stringValue ()) ;
  result.appendString (".h\"\n#import \"PMDebug.h\"\n\n//--------------------------------------------------------------------------------------------------\n\n@implementation OC_Lexique_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//\n//                           Template Replacements\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 15)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("static NSArray * kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 16)).stringValue ()) ;
    result.appendString (" ; // Of NSString \n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//\n//                           Template Delimiters\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 25)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("static NSArray * kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 26)).stringValue ()) ;
    result.appendString (" ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n- (instancetype) init {\n  self = [super init] ;\n  if (self) {\n    noteObjectAllocation (self) ;\n") ;
  GGS_uint index_1321_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_1321 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP) ;
    while (enumerator_1321.hasCurrentObject ()) {
      result.appendString ("    mLexicalAttribute_") ;
      result.appendString (enumerator_1321.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (extensionGetter_cocoaInitializationCode (enumerator_1321.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 36)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_1321.gotoNextObject () ;
      index_1321_.increment () ;
    }
  }
  result.appendString ("  }\n") ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 39)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("  if (nil == kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 40)).stringValue ()) ;
    result.appendString (") {\n    kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 41)).stringValue ()) ;
    result.appendString (" = [NSArray arrayWithObjects:\n") ;
    GGS_uint index_1811_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().isValid ()) {
      UpEnumerator_templateDelimitorList enumerator_1811 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ()) ;
      while (enumerator_1811.hasCurrentObject ()) {
        result.appendString ("      [[OC_GGS_TemplateDelimiter alloc] initWithStartString:@") ;
        result.appendString (enumerator_1811.current_mStartString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 43)).stringValue ()) ;
        result.appendString (" endString:") ;
        const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_1811.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 44)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        switch (test_3) {
        case GalgasBool::boolTrue : {
          result.appendString ("nil") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString ("@") ;
          result.appendString (enumerator_1811.current_mEndString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 47)).stringValue ()) ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        result.appendString (" discardStartString:") ;
        result.appendString (enumerator_1811.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 50)).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 50)).stringValue ()) ;
        result.appendString ("],\n") ;
        enumerator_1811.gotoNextObject () ;
        index_1811_.increment () ;
      }
    }
    result.appendString ("      nil\n    ] ;\n  }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_4 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 57)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_4) {
  case GalgasBool::boolTrue : {
    result.appendString ("  if (nil == kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 58)).stringValue ()) ;
    result.appendString (") {\n\n    kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 59)).stringValue ()) ;
    result.appendString (" = [NSArray arrayWithObjects:\n") ;
    GGS_uint index_2576_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      UpEnumerator_templateReplacementListAST enumerator_2576 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST) ;
      while (enumerator_2576.hasCurrentObject ()) {
        result.appendString ("      @") ;
        result.appendString (enumerator_2576.current_mMatchString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 61)).stringValue ()) ;
        result.appendString (", ") ;
        enumerator_2576.gotoNextObject () ;
        index_2576_.increment () ;
      }
    }
    result.appendString ("      nil\n    ] ;\n  }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  return self ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n- (void) dealloc {\n  noteObjectDeallocation (self) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//                 I N D E X I N G    T I T L E S\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSArray *) indexingTitles { // Array of NSString\n") ;
  const GalgasBool test_5 = GGS_bool (ComparisonKind::greaterThan, in_INDEXING_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 84)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_5) {
  case GalgasBool::boolTrue : {
    result.appendString ("  return [NSArray arrayWithObjects:\n") ;
    GGS_uint index_3317_ (0) ;
    if (in_INDEXING_5F_LIST.isValid ()) {
      UpEnumerator_indexingListAST enumerator_3317 (in_INDEXING_5F_LIST) ;
      while (enumerator_3317.hasCurrentObject ()) {
        result.appendString ("    @") ;
        result.appendString (enumerator_3317.current_mIndexComment (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 88)).stringValue ()) ;
        result.appendString (",\n") ;
        enumerator_3317.gotoNextObject () ;
        index_3317_.increment () ;
      }
    }
    result.appendString ("    NULL\n  ] ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("\n  return [NSArray array] ;\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n//\n//            Terminal Symbols as end of script in template mark\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_6 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 105)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_6) {
  case GalgasBool::boolTrue : {
    GGS_uint index_4116_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
      UpEnumerator_terminalList enumerator_4116 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
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
        enumerator_4116.gotoNextObject () ;
        if (enumerator_4116.hasCurrentObject ()) {
          result.appendString (",\n") ;
        }
        index_4116_.increment () ;
      }
      if (nonEmpty_enumerator_4116) {
        result.appendString ("\n} ;\n") ;
      }
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n\n") ;
  GGS_uint index_4409_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalTokenListMap ().isValid ()) {
    UpEnumerator_lexicalExplicitTokenListMapMap enumerator_4409 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalTokenListMap ()) ;
    while (enumerator_4409.hasCurrentObject ()) {
      const GalgasBool test_7 = enumerator_4409.current_mShouldBeGenerated (HERE).boolEnum () ;
      switch (test_7) {
      case GalgasBool::boolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//             Key words table '") ;
        result.appendString (enumerator_4409.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("'      \n//\n//--------------------------------------------------------------------------------------------------\n\nstatic const C_cocoa_lexique_table_entry ktable_for_") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 123)).stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_4409.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" [") ;
        result.appendString (enumerator_4409.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 123)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 123)).stringValue ()) ;
        result.appendString ("] = {\n") ;
        GGS_uint index_5051_ (0) ;
        if (enumerator_4409.current_mTokenSortedList (HERE).isValid ()) {
          UpEnumerator_tokenSortedlist enumerator_5051 (enumerator_4409.current_mTokenSortedList (HERE)) ;
          while (enumerator_5051.hasCurrentObject ()) {
            result.appendString ("  {") ;
            result.appendString (enumerator_5051.current_mName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 125)).stringValue ()) ;
            result.appendString (", ") ;
            result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
            result.appendString ("_1_") ;
            result.appendString (enumerator_5051.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 125)).stringValue ()) ;
            result.appendString ("}") ;
            enumerator_5051.gotoNextObject () ;
            if (enumerator_5051.hasCurrentObject ()) {
              result.appendString (",\n") ;
            }
            index_5051_.increment () ;
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
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_4409.gotoNextObject () ;
      index_4409_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//\n//               I N T E R N A L    P A R S E    L E X I C A L    T O K E N\n//\n//--------------------------------------------------------------------------------------------------\n\n- (BOOL) internalParseLexicalTokenForLexicalColoring {\n  BOOL scanningOk = YES ;\n") ;
  GGS_uint index_6023_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_6023 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP) ;
    while (enumerator_6023.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (extensionGetter_cocoaResetPrefix (enumerator_6023.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 144)).stringValue ()) ;
      result.appendString ("mLexicalAttribute_") ;
      result.appendString (enumerator_6023.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (extensionGetter_cocoaReset (enumerator_6023.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 144)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_6023.gotoNextObject () ;
      index_6023_.increment () ;
    }
  }
  result.appendString ("  mTokenStartLocation = mCurrentLocation ;\n") ;
  if (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).isValid ()) {
    result.incIndentation (int32_t (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).uintValue ())) ;
  }
  GGS_uint index_6241_ (0) ;
  if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalRuleListAST enumerator_6241 (in_LEXICAL_5F_RULE_5F_LIST) ;
    while (enumerator_6241.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_generateObjcCocoaCode ((const cPtr_abstractLexicalRuleAST *) enumerator_6241.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_CLASS_5F_NAME, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 150)).stringValue ()) ;
      enumerator_6241.gotoNextObject () ;
      index_6241_.increment () ;
    }
  }
  if (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).isValid ()) {
    result.incIndentation (- int32_t (GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).uintValue ())) ;
  }
  result.appendString ("  if ([self testForInputChar:'\\0']) { // End of source text \?\n    mTokenCode = ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_1_ ; // Empty string code\n  }else{ // Unknown input character\n    scanningOk = NO ;\n    [self advance] ;\n  }\n  return scanningOk ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//               P A R S E    L E X I C A L    T O K E N\n//\n//--------------------------------------------------------------------------------------------------\n\n- (void) parseLexicalTokenForLexicalColoring {\n  BOOL scanningOk = YES ;\n  mTokenCode = 0 ;\n  while ((mTokenCode == 0) && (mCurrentChar != '\\0')) {\n") ;
  const GalgasBool test_8 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 173)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_8) {
  case GalgasBool::boolTrue : {
    result.appendString ("    if ((mMatchedTemplateDelimiterIndex >= 0) && ([[kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 174)).stringValue ()) ;
    result.appendString (" objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] startString].length > 0)) {\n      const BOOL foundEndDelimitor = [self testForInputString:[[kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 175)).stringValue ()) ;
    result.appendString (" objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] endString] advance:YES] ;\n      if (foundEndDelimitor) {\n        mMatchedTemplateDelimiterIndex = -1 ;\n      }\n    }\n    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar != '\\0')) {\n      ") ;
    const GalgasBool test_9 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 181)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    switch (test_9) {
    case GalgasBool::boolTrue : {
      result.appendString ("\n      [self searchForReplacementPattern:kTemplateReplacementArray_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 182)).stringValue ()) ;
      result.appendString ("] ;\n      ") ;
      } break ;
    case GalgasBool::boolFalse : {
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    result.appendString ("\n      mMatchedTemplateDelimiterIndex = [self findTemplateDelimiterIndex:kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 184)).stringValue ()) ;
    result.appendString ("] ;\n      if (mMatchedTemplateDelimiterIndex < 0) {\n        [self advance] ;\n        mTokenCode = -2 ;\n      }\n    }\n    if ((mMatchedTemplateDelimiterIndex >= 0) && (mTokenCode == 0) && (mCurrentChar != '\\0') && scanningOk) {\n      scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;\n    }\n    if ((mTokenCode > 0) && kEndOfScriptInTemplateArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 193)).stringValue ()) ;
    result.appendString (" [mTokenCode - 1]) {\n      mMatchedTemplateDelimiterIndex = -1 ;\n    }") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("    scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  }\n//--- Error \?\n  if (! scanningOk) {\n    mTokenCode = -1 ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//                   T E R M I N A L    C O U N T\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSUInteger) terminalVocabularyCount {\n  return ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 211)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 211)).stringValue ()) ;
  result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//                     S T Y L E   C O U N T\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSUInteger) styleCount {\n  return ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 221)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 221)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 221)).stringValue ()) ;
  result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//                I S    T E M P L A T E    L E X I Q U E\n//\n//--------------------------------------------------------------------------------------------------\n\n- (BOOL) isTemplateLexique {\n  return ") ;
  result.appendString (GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 231)).objectCompare (GGS_uint (uint32_t (0U)))).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 231)).stringValue ()) ;
  result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//   S T Y L E   I N D E X    F O R    T E R M I N A L\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal {\n  static const NSUInteger kTerminalSymbolStyles [") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 241)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 241)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 241)).stringValue ()) ;
  result.appendString ("] = {0") ;
  GGS_uint index_10280_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    UpEnumerator_terminalList enumerator_10280 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
    while (enumerator_10280.hasCurrentObject ()) {
      result.appendString (",\n    ") ;
      result.appendString (enumerator_10280.current_mStyleIndex (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 243)).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_10280.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 243)).stringValue ()) ;
      result.appendString (" */") ;
      enumerator_10280.gotoNextObject () ;
      index_10280_.increment () ;
    }
  }
  result.appendString ("\n  } ;\n  return kTerminalSymbolStyles [inTerminal] ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//    A T O M I C    S E L E C T I O N   F O R    T E R M I N A L\n//\n//--------------------------------------------------------------------------------------------------\n\n- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex {\n  static const BOOL kTerminalAtomicSelection [") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 255)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 255)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 255)).stringValue ()) ;
  result.appendString ("] = {NO") ;
  GGS_uint index_11065_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    UpEnumerator_terminalList enumerator_11065 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
    while (enumerator_11065.hasCurrentObject ()) {
      result.appendString (",\n    ") ;
      result.appendString (enumerator_11065.current_atomicSelection (HERE).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 257)).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_11065.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 257)).stringValue ()) ;
      result.appendString (" */") ;
      enumerator_11065.gotoNextObject () ;
      index_11065_.increment () ;
    }
  }
  result.appendString ("\n  } ;\n  return kTerminalAtomicSelection [inTokenIndex] ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//             S T Y L E   N A M E    F O R    I N D E X\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex {\n  NSString * result = nil ;\n  if ((inIndex >= 0) && (inIndex < ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 270)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 270)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 270)).stringValue ()) ;
  result.appendString (")) {\n    NSString * kStyleArray [") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 271)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 271)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 271)).stringValue ()) ;
  result.appendString ("] = {\n      @\"Default Style\"") ;
  GGS_uint index_11837_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_11837 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_11837.hasCurrentObject ()) {
      result.appendString (",\n      @") ;
      result.appendString (enumerator_11837.current_mComment (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 274)).stringValue ()) ;
      enumerator_11837.gotoNextObject () ;
      index_11837_.increment () ;
    }
  }
  result.appendString ("\n    } ;\n    result = kStyleArray [inIndex] ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//         S T Y L E   I D E N T I F I E R    F O R    I N D E X\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex {\n  NSString * result = nil ;\n  if ((inIndex >= 0) && (inIndex < ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 289)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 289)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 289)).stringValue ()) ;
  result.appendString (")) {\n    NSString * kStyleArray [") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 290)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 290)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 290)).stringValue ()) ;
  result.appendString ("] = {\n      @\"") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"") ;
  GGS_uint index_12590_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_12590 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_12590.hasCurrentObject ()) {
      result.appendString (",\n      @\"") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_12590.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\"") ;
      enumerator_12590.gotoNextObject () ;
      index_12590_.increment () ;
    }
  }
  result.appendString ("\n    } ;\n    result = kStyleArray [inIndex] ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//         L E X I Q U E   I D E N T I F I E R\n//\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) lexiqueIdentifier {\n  return @\"") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n@end\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates swiftCocoaImplementationZone2'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_lexiqueGenerationTemplates_swiftCocoaImplementationZone_32_ (Compiler * inCompiler,
                                                                                            const GGS_string & /* in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME */,
                                                                                            const GGS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                            const GGS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                            const GGS_lexicalMessageMap & /* in_LEXICAL_5F_MESSAGE_5F_MAP */,
                                                                                            const GGS_terminalList & /* in_TERMINAL_5F_LIST */,
                                                                                            const GGS_stringset & /* in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES */,
                                                                                            const GGS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                            const GGS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                            const GGS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                            const GGS_indexingListAST & in_INDEXING_5F_LIST,
                                                                                            const GGS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST,
                                                                                            const GGS_templateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//   LEXIQUE ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n@MainActor fileprivate let gFont_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" = EBPreferenceProperty <NSFont> (\n  defaultValue: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular),\n  prefKey: \"FontFor_\" + ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexiqueIdentifier ()\n)\n\n//--------------------------------------------------------------------------------------------------\n\n@MainActor fileprivate let gLineHeight_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" = EBPreferenceProperty <Int> (\n  defaultValue: 12,\n  prefKey: \"LineHeightFor_\" + ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexiqueIdentifier ()\n)\n\n//--------------------------------------------------------------------------------------------------\n\n@MainActor fileprivate let gColors_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : [EBPreferenceProperty <NSColor>] = [\n  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: \"ColorFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"),\n") ;
  GGS_uint index_1122_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_1122 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_1122.hasCurrentObject ()) {
      result.appendString ("  EBPreferenceProperty <NSColor> (defaultValue: .black, prefKey: \"ColorFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_1122.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\"),\n") ;
      enumerator_1122.gotoNextObject () ;
      index_1122_.increment () ;
    }
  }
  result.appendString ("  EBPreferenceProperty <NSColor> (defaultValue: .red, prefKey: \"ColorFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexical_error\"),\n  EBPreferenceProperty <NSColor> (defaultValue: .gray, prefKey: \"ColorFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_template\")\n]\n\n//--------------------------------------------------------------------------------------------------\n\n@MainActor fileprivate let gBoldStyle_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : [EBPreferenceProperty <Bool>] = [\n  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: \"BoldFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"),\n") ;
  GGS_uint index_1814_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_1814 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_1814.hasCurrentObject ()) {
      result.appendString ("  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: \"BoldFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_1814.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\"),\n") ;
      enumerator_1814.gotoNextObject () ;
      index_1814_.increment () ;
    }
  }
  result.appendString ("  EBPreferenceProperty <Bool> (defaultValue: true, prefKey: \"BoldFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexical_error\"),\n  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: \"BoldFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_template\")\n]\n\n//--------------------------------------------------------------------------------------------------\n\n@MainActor fileprivate let gItalicStyle_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : [EBPreferenceProperty <Bool>] = [\n  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: \"ItalicFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"),\n") ;
  GGS_uint index_2497_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_2497 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_2497.hasCurrentObject ()) {
      result.appendString ("  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: \"ItalicFor_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("-") ;
      result.appendString (enumerator_2497.current_mName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\"),\n") ;
      enumerator_2497.gotoNextObject () ;
      index_2497_.increment () ;
    }
  }
  result.appendString ("  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: \"ItalicFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexical_error\"),\n  EBPreferenceProperty <Bool> (defaultValue: false, prefKey: \"ItalicFor_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_template\")\n]\n\n//--------------------------------------------------------------------------------------------------\n//                           Template Replacements\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 60)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("fileprivate let kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 61)).stringValue ()) ;
    result.appendString (" : [String] = [\n") ;
    GGS_uint index_3347_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      UpEnumerator_templateReplacementListAST enumerator_3347 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST) ;
      while (enumerator_3347.hasCurrentObject ()) {
        result.appendString ("  ") ;
        result.appendString (enumerator_3347.current_mMatchString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 64)).stringValue ()) ;
        enumerator_3347.gotoNextObject () ;
        if (enumerator_3347.hasCurrentObject ()) {
          result.appendString (",\n") ;
        }
        index_3347_.increment () ;
      }
    }
    result.appendString ("\n]\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//                           Template Delimiters\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 74)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("fileprivate let kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 75)).stringValue ()) ;
    result.appendString (" : [SWIFT_TemplateDelimiter] = [\n") ;
    GGS_uint index_3993_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().isValid ()) {
      UpEnumerator_templateDelimitorList enumerator_3993 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ()) ;
      while (enumerator_3993.hasCurrentObject ()) {
        result.appendString ("  SWIFT_TemplateDelimiter (startString: ") ;
        result.appendString (enumerator_3993.current_mStartString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 78)).stringValue ()) ;
        result.appendString (", endString: ") ;
        result.appendString (enumerator_3993.current_mEndString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 78)).stringValue ()) ;
        result.appendString (", discardStartString: ") ;
        result.appendString (enumerator_3993.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 79)).getter_cString (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 79)).stringValue ()) ;
        result.appendString (")") ;
        enumerator_3993.gotoNextObject () ;
        if (enumerator_3993.hasCurrentObject ()) {
          result.appendString (",\n") ;
        }
        index_3993_.increment () ;
      }
    }
    result.appendString ("\n]\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N\n//--------------------------------------------------------------------------------------------------\n\nlet ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_1_ : UInt16 = 0\n") ;
  GGS_uint index_4655_idx (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    UpEnumerator_terminalList enumerator_4655 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
    while (enumerator_4655.hasCurrentObject ()) {
      result.appendString ("let ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_4655.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 93)).stringValue ()) ;
      result.appendString (" : UInt16 = ") ;
      result.appendString (index_4655_idx.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 93)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 93)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_4655.gotoNextObject () ;
      index_4655_idx.increment () ;
    }
  }
  result.appendString ("let ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_ERROR : UInt16 = ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 95)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 95)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 95)).stringValue ()) ;
  result.appendString ("\nlet ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_TEMPLATE : UInt16 = ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 96)).add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 96)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 96)).stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\nfunc ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexiqueIdentifier () -> String {\n  return \"") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\"\n}\n\n//--------------------------------------------------------------------------------------------------\n\nfunc ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_styleNameFor (styleIndex inIndex : UInt8) -> String {\n  let kStyleArray : [String] = [\n    \"Default Style\", // 0\n") ;
  GGS_uint index_5483_idx (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_5483 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_5483.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_5483.current_mComment (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 111)).stringValue ()) ;
      result.appendString (", // ") ;
      result.appendString (index_5483_idx.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 111)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 111)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_5483.gotoNextObject () ;
      index_5483_idx.increment () ;
    }
  }
  result.appendString ("    \"Lexical error\", // ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 113)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 113)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 113)).stringValue ()) ;
  result.appendString ("\n    \"Template\" // ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 114)).add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 114)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 114)).stringValue ()) ;
  result.appendString ("\n  ]\n  return kStyleArray [Int (inIndex)]\n}\n\n//--------------------------------------------------------------------------------------------------\n\nfunc ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_styleIdentifierFor (styleIndex inIndex : UInt8) -> String {\n  let kStyleArray : [String] = [\n    \"") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\", // 0\n") ;
  GGS_uint index_6050_idx (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalStyleListAST enumerator_6050 (in_LEXICAL_5F_STYLE_5F_LIST) ;
    while (enumerator_6050.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 125)).add_operation (enumerator_6050.current_mName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 125)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 125)).stringValue ()) ;
      result.appendString (", // ") ;
      result.appendString (index_6050_idx.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 125)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 125)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_6050.gotoNextObject () ;
      index_6050_idx.increment () ;
    }
  }
  result.appendString ("    ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.add_operation (GGS_string (".ERROR"), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 127)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 127)).stringValue ()) ;
  result.appendString (", // ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 127)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 127)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 127)).stringValue ()) ;
  result.appendString ("\n    ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.add_operation (GGS_string (".TEMPLATE"), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 128)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 128)).stringValue ()) ;
  result.appendString (" // ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 128)).add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 128)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 128)).stringValue ()) ;
  result.appendString ("\n  ]\n  return kStyleArray [Int (inIndex)]\n}\n\n//--------------------------------------------------------------------------------------------------\n//                     S C A N N E R    C L A S S\n//--------------------------------------------------------------------------------------------------\n\nclass SWIFT_Lexique_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : SWIFT_Lexique {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_6961_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_6961 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ()) ;
    while (enumerator_6961.hasCurrentObject ()) {
      result.appendString ("  private var mLexicalAttribute_") ;
      result.appendString (enumerator_6961.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (extensionGetter_swiftTypeName (enumerator_6961.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 143)).stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (extensionGetter_swiftInitializationCode (enumerator_6961.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 143)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_6961.gotoNextObject () ;
      index_6961_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func lexiqueIdentifier () -> String {\n    return ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_lexiqueIdentifier ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func isTemplateLexique () -> Bool {\n    return ") ;
  result.appendString (GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 155)).objectCompare (GGS_uint (uint32_t (0U)))).getter_cString (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 155)).stringValue ()) ;
  result.appendString ("\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func terminalVocabularyCount () -> Int {\n    return ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 161)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 161)).stringValue ()) ;
  result.appendString ("\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var font : EBPreferenceProperty <NSFont> { return gFont_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var lineHeight : EBPreferenceProperty <Int> { return gLineHeight_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func color (forStyle inStyleIndex : UInt8) -> EBPreferenceProperty <NSColor> {\n    return gColors_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" [Int (inStyleIndex)]\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func bold (forStyle inStyleIndex : UInt8) -> EBPreferenceProperty <Bool> {\n    return gBoldStyle_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" [Int (inStyleIndex)]\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func italic (forStyle inStyleIndex : UInt8) -> EBPreferenceProperty <Bool> {\n    return gItalicStyle_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" [Int (inStyleIndex)]\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func styleIndexFor (token inTokenIndex : UInt16) -> UInt8 {\n    let kTerminalSymbolStyles : [UInt8] = [\n      0, // Default\n") ;
  GGS_uint index_9173_idx (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    UpEnumerator_terminalList enumerator_9173 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
    while (enumerator_9173.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_9173.current_mStyleIndex (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 197)).stringValue ()) ;
      result.appendString (", // ") ;
      result.appendString (index_9173_idx.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 197)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 197)).stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_9173.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 197)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_9173.gotoNextObject () ;
      index_9173_idx.increment () ;
    }
  }
  result.appendString ("      ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 199)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 199)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 199)).stringValue ()) ;
  result.appendString (", // ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 199)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 199)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 199)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_ERROR\n      ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 200)).add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 200)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 200)).stringValue ()) ;
  result.appendString ("  // ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 200)).add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 200)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 200)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_TEMPLATE\n    ]\n    return kTerminalSymbolStyles [Int (inTokenIndex)]\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func atomicSelectionFor (token inTokenIndex : UInt16) -> Bool {\n    let kTerminalAtomicSelection : [Bool] = [\n      false, // Default\n") ;
  GGS_uint index_10002_idx (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    UpEnumerator_terminalList enumerator_10002 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
    while (enumerator_10002.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_10002.current_atomicSelection (HERE).getter_cString (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 212)).stringValue ()) ;
      result.appendString (", // ") ;
      result.appendString (index_10002_idx.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 212)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 212)).stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
      result.appendString ("_1_") ;
      result.appendString (enumerator_10002.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 212)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_10002.gotoNextObject () ;
      index_10002_idx.increment () ;
    }
  }
  result.appendString ("      false, // ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 214)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 214)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 214)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_ERROR\n      false  // ") ;
  result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 215)).add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 215)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 215)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_TEMPLATE\n    ]\n    return kTerminalAtomicSelection [Int (inTokenIndex)]\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func indexingTitles () -> [String] {\n") ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, in_INDEXING_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 224)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("    return [\n") ;
    GGS_uint index_10689_ (0) ;
    if (in_INDEXING_5F_LIST.isValid ()) {
      UpEnumerator_indexingListAST enumerator_10689 (in_INDEXING_5F_LIST) ;
      while (enumerator_10689.hasCurrentObject ()) {
        result.appendString ("      ") ;
        result.appendString (enumerator_10689.current_mIndexComment (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 228)).stringValue ()) ;
        result.appendString (" /* ") ;
        result.appendString (enumerator_10689.current_mIndexName (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" */") ;
        enumerator_10689.gotoNextObject () ;
        if (enumerator_10689.hasCurrentObject ()) {
          result.appendString (",\n") ;
        }
        index_10689_.increment () ;
      }
    }
    result.appendString ("\n    ]\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("\n    return []\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  S T Y L E S\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func styleCount () -> UInt8 {\n    return ") ;
  result.appendString (in_LEXICAL_5F_STYLE_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 245)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 245)).stringValue ()) ;
  result.appendString ("\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func styleNameFor (styleIndex inIndex : UInt8) -> String {\n    return ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_styleNameFor (styleIndex: inIndex)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func styleIdentifierFor (styleIndex inIndex : UInt8) -> String {\n    return ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_styleIdentifierFor (styleIndex: inIndex)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Lexical analysis\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func parseLexicalTokenForLexicalColoring () -> SWIFT_Token {\n    var loop = true\n    var scanningOk = true\n") ;
  GGS_uint index_12031_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_12031 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP) ;
    while (enumerator_12031.hasCurrentObject ()) {
      result.appendString ("    self.mLexicalAttribute_") ;
      result.appendString (enumerator_12031.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (extensionGetter_swiftInitializationCode (enumerator_12031.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 268)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_12031.gotoNextObject () ;
      index_12031_.increment () ;
    }
  }
  result.appendString ("    var tokenCode : UInt16 = 0\n    let startLocation = self.currentLocation\n") ;
  if (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 273)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 273)).isValid ()) {
    result.incIndentation (int32_t (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 273)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 273)).uintValue ())) ;
  }
  GGS_uint index_12268_ (0) ;
  if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
    UpEnumerator_lexicalRuleListAST enumerator_12268 (in_LEXICAL_5F_RULE_5F_LIST) ;
    while (enumerator_12268.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_generateSwiftCocoaCode ((const cPtr_abstractLexicalRuleAST *) enumerator_12268.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_CLASS_5F_NAME, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 275)).stringValue ()) ;
      enumerator_12268.gotoNextObject () ;
      index_12268_.increment () ;
    }
  }
  if (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 273)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 273)).isValid ()) {
    result.incIndentation (- int32_t (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 273)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 273)).uintValue ())) ;
  }
  result.appendString ("if self.testForInputChar (0) { // End of source text \?\n      tokenCode = ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_1_ ; // Empty string code\n    }else{ // Unknown input character\n      tokenCode = ") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_TEMPLATE\n      self.advance ()\n    }\n    return SWIFT_Token (\n      range: NSRange (location: startLocation, length: self.currentLocation - startLocation),\n      tokenCode: tokenCode,\n      templateDelimiterIndex: self.mEndTemplateDelimiterIndex\n    )\n  }\n  \n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n\n//--------------------------------------------------------------------------------------------------\n\n/* - (instancetype) init {\n  self = [super init] ;\n  if (self) {\n    noteObjectAllocation (self) ;\n") ;
  GGS_uint index_13196_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    UpEnumerator_lexicalAttributeMap enumerator_13196 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP) ;
    while (enumerator_13196.hasCurrentObject ()) {
      result.appendString ("    mLexicalAttribute_") ;
      result.appendString (enumerator_13196.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (extensionGetter_cocoaInitializationCode (enumerator_13196.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 304)).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_13196.gotoNextObject () ;
      index_13196_.increment () ;
    }
  }
  result.appendString ("  }\n") ;
  const GalgasBool test_3 = GGS_bool (ComparisonKind::greaterThan, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 307)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_3) {
  case GalgasBool::boolTrue : {
    result.appendString ("  if (nil == kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 308)).stringValue ()) ;
    result.appendString (") {\n    kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 309)).stringValue ()) ;
    result.appendString (" = [NSArray arrayWithObjects:\n") ;
    GGS_uint index_13686_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().isValid ()) {
      UpEnumerator_templateDelimitorList enumerator_13686 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ()) ;
      while (enumerator_13686.hasCurrentObject ()) {
        result.appendString ("      [[OC_GGS_TemplateDelimiter alloc] initWithStartString:@") ;
        result.appendString (enumerator_13686.current_mStartString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 311)).stringValue ()) ;
        result.appendString (" endString:") ;
        const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_13686.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 312)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        switch (test_4) {
        case GalgasBool::boolTrue : {
          result.appendString ("nil") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString ("@") ;
          result.appendString (enumerator_13686.current_mEndString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 315)).stringValue ()) ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        result.appendString (" discardStartString:") ;
        result.appendString (enumerator_13686.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 318)).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 318)).stringValue ()) ;
        result.appendString ("],\n") ;
        enumerator_13686.gotoNextObject () ;
        index_13686_.increment () ;
      }
    }
    result.appendString ("      nil\n    ] ;\n  }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_5 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 325)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_5) {
  case GalgasBool::boolTrue : {
    result.appendString ("  if (nil == kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 326)).stringValue ()) ;
    result.appendString (") {\n\n    kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 327)).stringValue ()) ;
    result.appendString (" = [NSArray arrayWithObjects:\n") ;
    GGS_uint index_14451_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      UpEnumerator_templateReplacementListAST enumerator_14451 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST) ;
      while (enumerator_14451.hasCurrentObject ()) {
        result.appendString ("      @") ;
        result.appendString (enumerator_14451.current_mMatchString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 329)).stringValue ()) ;
        result.appendString (", ") ;
        enumerator_14451.gotoNextObject () ;
        index_14451_.increment () ;
      }
    }
    result.appendString ("      nil\n    ] ;\n  }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  return self ;\n} */\n\n//--------------------------------------------------------------------------------------------------\n//\n//            Terminal Symbols as end of script in template mark\n//\n//--------------------------------------------------------------------------------------------------\n\n/*\n") ;
  const GalgasBool test_6 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 345)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_6) {
  case GalgasBool::boolTrue : {
    GGS_uint index_15261_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
      UpEnumerator_terminalList enumerator_15261 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ()) ;
      const bool nonEmpty_enumerator_15261 = enumerator_15261.hasCurrentObject () ;
      if (nonEmpty_enumerator_15261) {
        result.appendString ("static const BOOL kEndOfScriptInTemplateArray_") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 347)).stringValue ()) ;
        result.appendString (" [") ;
        result.appendString (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 347)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 347)).stringValue ()) ;
        result.appendString ("] = {\n") ;
      }
      while (enumerator_15261.hasCurrentObject ()) {
        result.appendString ("  ") ;
        result.appendString (enumerator_15261.current_isEndOfTemplateMark (HERE).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 348)).stringValue ()) ;
        result.appendString (" /* ") ;
        result.appendString (enumerator_15261.current_mTerminalName (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" */") ;
        enumerator_15261.gotoNextObject () ;
        if (enumerator_15261.hasCurrentObject ()) {
          result.appendString (",\n") ;
        }
        index_15261_.increment () ;
      }
      if (nonEmpty_enumerator_15261) {
        result.appendString ("\n} ;\n") ;
      }
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n*/\n\n\n") ;
  GGS_uint index_15557_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalTokenListMap ().isValid ()) {
    UpEnumerator_lexicalExplicitTokenListMapMap enumerator_15557 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalTokenListMap ()) ;
    while (enumerator_15557.hasCurrentObject ()) {
      const GalgasBool test_7 = enumerator_15557.current_mShouldBeGenerated (HERE).boolEnum () ;
      switch (test_7) {
      case GalgasBool::boolTrue : {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//             Key words table '") ;
        result.appendString (enumerator_15557.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("'      \n//\n//--------------------------------------------------------------------------------------------------\n\nfileprivate func search_into_") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 364)).stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_15557.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (_ inSearchedString : String) -> UInt16 {\n  let dictionary : [String : UInt16] = [\n") ;
        GGS_uint index_16203_ (0) ;
        if (enumerator_15557.current_mTokenSortedList (HERE).isValid ()) {
          UpEnumerator_tokenSortedlist enumerator_16203 (enumerator_15557.current_mTokenSortedList (HERE)) ;
          while (enumerator_16203.hasCurrentObject ()) {
            result.appendString ("    ") ;
            result.appendString (enumerator_16203.current_mName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 367)).stringValue ()) ;
            result.appendString (" : ") ;
            result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
            result.appendString ("_1_") ;
            result.appendString (enumerator_16203.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 367)).stringValue ()) ;
            enumerator_16203.gotoNextObject () ;
            if (enumerator_16203.hasCurrentObject ()) {
              result.appendString (",\n") ;
            }
            index_16203_.increment () ;
          }
        }
        result.appendString ("\n  ]\n  return dictionary [inSearchedString, default: ") ;
        result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
        result.appendString ("_1_]\n}\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_15557.gotoNextObject () ;
      index_15557_.increment () ;
    }
  }
  result.appendString ("\n\n\n\n//--------------------------------------------------------------------------------------------------\n//\n//               P A R S E    L E X I C A L    T O K E N\n//\n//--------------------------------------------------------------------------------------------------\n\n/* - (void) parseLexicalTokenForLexicalColoring {\n  BOOL scanningOk = YES ;\n  mTokenCode = 0 ;\n  while ((mTokenCode == 0) && (mCurrentChar != '\\0')) {\n") ;
  const GalgasBool test_8 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 390)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_8) {
  case GalgasBool::boolTrue : {
    result.appendString ("    if ((mMatchedTemplateDelimiterIndex >= 0) && ([[kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 391)).stringValue ()) ;
    result.appendString (" objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] startString].length > 0)) {\n      const BOOL foundEndDelimitor = [self testForInputString:[[kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 392)).stringValue ()) ;
    result.appendString (" objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] endString] advance:YES] ;\n      if (foundEndDelimitor) {\n        mMatchedTemplateDelimiterIndex = -1 ;\n      }\n    }\n    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar != '\\0')) {\n      ") ;
    const GalgasBool test_9 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 398)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    switch (test_9) {
    case GalgasBool::boolTrue : {
      result.appendString ("\n      [self searchForReplacementPattern:kTemplateReplacementArray_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 399)).stringValue ()) ;
      result.appendString ("] ;\n      ") ;
      } break ;
    case GalgasBool::boolFalse : {
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    result.appendString ("\n      mMatchedTemplateDelimiterIndex = [self findTemplateDelimiterIndex:kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 401)).stringValue ()) ;
    result.appendString ("] ;\n      if (mMatchedTemplateDelimiterIndex < 0) {\n        [self advance] ;\n        mTokenCode = -2 ;\n      }\n    }\n    if ((mMatchedTemplateDelimiterIndex >= 0) && (mTokenCode == 0) && (mCurrentChar != '\\0') && scanningOk) {\n      scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;\n    }\n    if ((mTokenCode > 0) && kEndOfScriptInTemplateArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.swift.galgasTemplate", 410)).stringValue ()) ;
    result.appendString (" [mTokenCode - 1]) {\n      mMatchedTemplateDelimiterIndex = -1 ;\n    }") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("    scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  }\n//--- Error \?\n  if (! scanningOk) {\n    mTokenCode = -1 ;\n  }\n}\n\n*/\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@templateLexiqueComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_templateLexiqueComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_templateLexiqueComponentAST temp_0 = this ;
  result_result = GGS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 224)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateLexiqueComponentAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                       GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                       GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                       GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                       GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                       GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLexiqueComponentAST temp_0 = this ;
  const GGS_templateLexiqueComponentAST temp_1 = this ;
  GGS_lstring var_key_8318 = GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 237)), temp_1.readProperty_mLexiqueComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_templateLexiqueComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_8318, temp_2, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 238)) ;
  }
  const GGS_templateLexiqueComponentAST temp_3 = this ;
  const GGS_templateLexiqueComponentAST temp_4 = this ;
  GGS_lstring var_superKey_8474 = GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (temp_3.readProperty_mLexiqueSuperComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 239)), temp_4.readProperty_mLexiqueComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_8318, var_superKey_8474 COMMA_SOURCE_FILE ("template-lexique-component.galgas", 240)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateLexiqueComponentAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                 const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                 const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                 const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                 const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                 GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_superLexiqueIsTemplate_9526 ;
  GGS_terminalMap var_terminalMap_9559 ;
  GGS_indexingListAST var_indexingListAST_9581 ;
  GGS_terminalDeclarationListAST var_terminalListAST_9607 ;
  GGS_lexicalAttributeListAST var_lexicalAttributeListAST_9633 ;
  GGS_lexicalStyleListAST var_lexicalStyleListAST_9667 ;
  GGS_lexicalListDeclarationListAST var_lexicalListDeclarationListAST_9697 ;
  const GGS_templateLexiqueComponentAST temp_0 = this ;
  ioArgument_ioSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_0.readProperty_mLexiqueSuperComponentName (), var_superLexiqueIsTemplate_9526, var_terminalMap_9559, var_indexingListAST_9581, var_terminalListAST_9607, var_lexicalAttributeListAST_9633, var_lexicalStyleListAST_9667, var_lexicalListDeclarationListAST_9697, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 254)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_superLexiqueIsTemplate_9526.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateLexiqueComponentAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLexiqueSuperComponentName ().readProperty_location (), GGS_string ("cannot inherit from a template lexique"), fixItArray3  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 265)) ;
    }
  }
  {
  const GGS_templateLexiqueComponentAST temp_4 = this ;
  ioArgument_ioSemanticContext.mProperty_mLexiqueComponentMapForSemanticAnalysis.setter_insertKey (temp_4.readProperty_mLexiqueComponentName (), GGS_bool (true), var_terminalMap_9559, var_indexingListAST_9581, var_terminalListAST_9607, var_lexicalAttributeListAST_9633, var_lexicalStyleListAST_9667, var_lexicalListDeclarationListAST_9697, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 268)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateLexiqueComponentAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_string /* constinArgument_inProductDirectory */,
                                                                const GGS_semanticContext constinArgument_inSemanticContext,
                                                                GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLexiqueComponentAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_10944 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 291)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10944, var_nameForUsefulness_10944, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 292)) ;
  }
  GGS_terminalDeclarationListAST var_terminalListAST_11384 ;
  GGS_lexicalAttributeListAST var_lexicalAttributeListAST_11410 ;
  GGS_lexicalStyleListAST var_lexicalStyleListAST_11444 ;
  GGS_lexicalListDeclarationListAST var_lexicalListDeclarationListAST_11474 ;
  const GGS_templateLexiqueComponentAST temp_1 = this ;
  GGS_bool joker_11284 ; // Joker input parameter
  GGS_terminalMap joker_11321 ; // Joker input parameter
  GGS_indexingListAST joker_11347 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueSuperComponentName (), joker_11284, joker_11321, joker_11347, var_terminalListAST_11384, var_lexicalAttributeListAST_11410, var_lexicalStyleListAST_11444, var_lexicalListDeclarationListAST_11474, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 294)) ;
  GGS_lexicalTypeMap var_lexicalTypeMap_11603 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 305)) ;
  GGS_lexicalRoutineMap var_lexicalRoutineMap_11741 ;
  {
  routine_buildLexicalRoutineMap_21_ (var_lexicalRoutineMap_11741, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 307)) ;
  }
  GGS_lexicalFunctionMap var_lexicalFunctionMap_11860 ;
  {
  routine_buildLexicalFunctionMap_21_ (var_lexicalFunctionMap_11860, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 309)) ;
  }
  GGS_stringset var_unicodeTestFunctions_11987 ;
  {
  routine_lexicalUnicodeTestFunctionAnalysis_21_ (var_unicodeTestFunctions_11987, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 311)) ;
  }
  const GGS_templateLexiqueComponentAST temp_2 = this ;
  GGS_lexiqueAnalysisContext var_lexiqueAnalysisContext_12080 = GGS_lexiqueAnalysisContext::init_21__21__21__21__21__21__21__21__21__21__21__21_ (temp_2.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexicalRoutineMap_11741, var_lexicalFunctionMap_11860, GGS_lexicalMessageMap::init (inCompiler COMMA_HERE), GGS_terminalMap::init (inCompiler COMMA_HERE), GGS_terminalList::init (inCompiler COMMA_HERE), GGS_lexicalAttributeMap::init (inCompiler COMMA_HERE), GGS_lexicalExplicitTokenListMapMap::init (inCompiler COMMA_HERE), GGS_stringset::init (inCompiler COMMA_HERE), GGS_templateDelimitorList::init (inCompiler COMMA_HERE), GGS_styleMap::init (inCompiler COMMA_HERE), var_unicodeTestFunctions_11987, inCompiler COMMA_HERE) ;
  GGS_bigint var_styleIndex_12484 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 328)) ;
  UpEnumerator_lexicalStyleListAST enumerator_12512 (var_lexicalStyleListAST_11444) ;
  while (enumerator_12512.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_12080.mProperty_mStyleMap.setter_insertKey (enumerator_12512.current_mName (HERE), enumerator_12512.current_mComment (HERE), var_styleIndex_12484.getter_uint (inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 330)) ;
    }
    var_styleIndex_12484.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 331)), inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 331)) ;
    enumerator_12512.gotoNextObject () ;
  }
  {
  routine_buildLexicalAttributeMap_3F__3F__26_ (var_lexicalTypeMap_11603, var_lexicalAttributeListAST_11410, var_lexiqueAnalysisContext_12080.mProperty_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 334)) ;
  }
  GGS_terminalList var_terminalList_12932 = GGS_terminalList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_terminalDeclarationListAST enumerator_13029 (var_terminalListAST_11384) ;
  while (enumerator_13029.hasCurrentObject ()) {
    GGS_uint var_terminalStyleIndex_13086 = GGS_uint (uint32_t (0U)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::greaterThan, enumerator_13029.current_mStyle (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template-lexique-component.galgas", 343)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_lstring joker_13205 ; // Joker input parameter
        var_lexiqueAnalysisContext_12080.readProperty_mStyleMap ().method_searchKey (enumerator_13029.current_mStyle (HERE), joker_13205, var_terminalStyleIndex_13086, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 344)) ;
      }
    }
    GGS_lexicalSentValueList var_argumentTypeList_13245 = GGS_lexicalSentValueList::init (inCompiler COMMA_HERE) ;
    UpEnumerator_sentLexicalAttributeListAST enumerator_13314 (enumerator_13029.current_mSentAttributeList (HERE)) ;
    while (enumerator_13314.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_13437 ;
      var_lexiqueAnalysisContext_12080.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_13314.current_mAttributeName (HERE), var_attributeLexicalType_13437, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 348)) ;
      var_argumentTypeList_13245.addAssignOperation (enumerator_13314.current_mFormalSelector (HERE), enumerator_13314.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_13437  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 349)) ;
      enumerator_13314.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_12080.mProperty_mTerminalMap.setter_insertKey (enumerator_13029.current_mName (HERE), var_argumentTypeList_13245, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 351)) ;
    }
    var_terminalList_12932.addAssignOperation (enumerator_13029.current_mName (HERE), var_argumentTypeList_13245, enumerator_13029.current_mSyntaxErrorMessage (HERE).readProperty_string (), enumerator_13029.current_isEndOfTemplateMark (HERE), enumerator_13029.current_nonAtomicSelection (HERE).operator_not (SOURCE_FILE ("template-lexique-component.galgas", 357)), var_terminalStyleIndex_13086  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 352)) ;
    enumerator_13029.gotoNextObject () ;
  }
  UpEnumerator_lexicalListDeclarationListAST enumerator_13907 (var_lexicalListDeclarationListAST_11474) ;
  while (enumerator_13907.hasCurrentObject ()) {
    GGS_uint var_terminalStyleIndex_13969 = GGS_uint (uint32_t (0U)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_13907.current_mStyle (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template-lexique-component.galgas", 362)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_lstring joker_14088 ; // Joker input parameter
        var_lexiqueAnalysisContext_12080.readProperty_mStyleMap ().method_searchKey (enumerator_13907.current_mStyle (HERE), joker_14088, var_terminalStyleIndex_13969, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 363)) ;
      }
    }
    GGS_lexicalSentValueList var_argumentTypeList_14128 = GGS_lexicalSentValueList::init (inCompiler COMMA_HERE) ;
    UpEnumerator_sentLexicalAttributeListAST enumerator_14197 (enumerator_13907.current_mSentAttributeList (HERE)) ;
    while (enumerator_14197.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_14320 ;
      var_lexiqueAnalysisContext_12080.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_14197.current_mAttributeName (HERE), var_attributeLexicalType_14320, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 367)) ;
      var_argumentTypeList_14128.addAssignOperation (enumerator_14197.current_mFormalSelector (HERE), enumerator_14197.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_14320  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 368)) ;
      enumerator_14197.gotoNextObject () ;
    }
    UpEnumerator_lexicalListEntryListAST enumerator_14486 (enumerator_13907.current_mEntryList (HERE)) ;
    while (enumerator_14486.hasCurrentObject ()) {
      GGS_string var_syntaxErrorMessage_14532 = enumerator_13907.current_mSyntaxErrorMessage (HERE).readProperty_string ().getter_stringByReplacingStringByString (GGS_string ("%K"), enumerator_14486.current_mTerminalSpelling (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 371)) ;
      var_terminalList_12932.addAssignOperation (enumerator_14486.current_mTerminalSpelling (HERE), var_argumentTypeList_14128, var_syntaxErrorMessage_14532, enumerator_14486.current_isEndOfTemplateMark (HERE), enumerator_14486.current_nonAtomicSelection (HERE).operator_not (SOURCE_FILE ("template-lexique-component.galgas", 377)), var_terminalStyleIndex_13969  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 372)) ;
      enumerator_14486.gotoNextObject () ;
    }
    enumerator_13907.gotoNextObject () ;
  }
  GGS_stringset var_unicodeStringToGenerate_14966 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_templateDelimitorList var_templateDelimitorList_15025 = GGS_templateDelimitorList::init (inCompiler COMMA_HERE) ;
  const GGS_templateLexiqueComponentAST temp_5 = this ;
  UpEnumerator_templateDelimitorListAST enumerator_15101 (temp_5.readProperty_mTemplateDelimitorList ()) ;
  while (enumerator_15101.hasCurrentObject ()) {
    var_unicodeStringToGenerate_14966.plusPlusAssignOperation (enumerator_15101.current_mStartString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 385)) ;
    var_unicodeStringToGenerate_14966.plusPlusAssignOperation (enumerator_15101.current_mEndString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 386)) ;
    var_templateDelimitorList_15025.addAssignOperation (enumerator_15101.current_mStartString (HERE), enumerator_15101.current_mEndString (HERE), enumerator_15101.current_mPreserved (HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 387)) ;
    enumerator_15101.gotoNextObject () ;
  }
  const GGS_templateLexiqueComponentAST temp_6 = this ;
  UpEnumerator_templateReplacementListAST enumerator_15434 (temp_6.readProperty_mTemplateReplacementList ()) ;
  while (enumerator_15434.hasCurrentObject ()) {
    var_unicodeStringToGenerate_14966.plusPlusAssignOperation (enumerator_15434.current_mMatchString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 391)) ;
    var_unicodeStringToGenerate_14966.plusPlusAssignOperation (enumerator_15434.current_mReplacementString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 392)) ;
    enumerator_15434.gotoNextObject () ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("template-lexique-component.galgas", 396)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_templateLexiqueComponentAST temp_8 = this ;
      const GGS_templateLexiqueComponentAST temp_9 = this ;
      GGS_string var_headerContents_15755 = GGS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_cppHeader (inCompiler, temp_8.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 399)), temp_9.readProperty_mLexiqueSuperComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 400)) COMMA_SOURCE_FILE ("template-lexique-component.galgas", 398))) ;
      const GGS_templateLexiqueComponentAST temp_10 = this ;
      const GGS_templateLexiqueComponentAST temp_11 = this ;
      const GGS_templateLexiqueComponentAST temp_12 = this ;
      const GGS_templateLexiqueComponentAST temp_13 = this ;
      GGS_string var_cppContents_15999 = GGS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_cppImplementation (inCompiler, temp_10.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 404)), temp_11.readProperty_mLexiqueSuperComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 405)), var_lexiqueAnalysisContext_12080.readProperty_mLexicalTokenListMap (), var_unicodeStringToGenerate_14966, var_templateDelimitorList_15025, var_terminalList_12932, temp_12.readProperty_mLexiqueComponentName ().readProperty_string (), temp_13.readProperty_mTemplateReplacementList () COMMA_SOURCE_FILE ("template-lexique-component.galgas", 403))) ;
      const GGS_templateLexiqueComponentAST temp_14 = this ;
      const GGS_templateLexiqueComponentAST temp_15 = this ;
      const GGS_templateLexiqueComponentAST temp_16 = this ;
      GGS_string var_objcCocoaHeader_16470 = GGS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_objcCocoaHeaderZone (inCompiler, temp_14.readProperty_mLexiqueComponentName ().readProperty_string (), temp_15.readProperty_mLexiqueSuperComponentName ().readProperty_string (), GGS_string ("lexique-").add_operation (temp_16.readProperty_mLexiqueSuperComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 417)).add_operation (GGS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 417)) COMMA_SOURCE_FILE ("template-lexique-component.galgas", 414))) ;
      const GGS_templateLexiqueComponentAST temp_17 = this ;
      const GGS_templateLexiqueComponentAST temp_18 = this ;
      const GGS_templateLexiqueComponentAST temp_19 = this ;
      GGS_string var_objcCocoaImplementation_16786 = GGS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_objcCocoaImplementationZone (inCompiler, GGS_string ("lexique-").add_operation (temp_17.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 421)).add_operation (GGS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 421)), temp_18.readProperty_mLexiqueComponentName ().readProperty_string (), var_terminalList_12932, var_templateDelimitorList_15025, temp_19.readProperty_mTemplateReplacementList () COMMA_SOURCE_FILE ("template-lexique-component.galgas", 420))) ;
      const GGS_templateLexiqueComponentAST temp_20 = this ;
      const GGS_templateLexiqueComponentAST temp_21 = this ;
      const GGS_templateLexiqueComponentAST temp_22 = this ;
      const GGS_templateLexiqueComponentAST temp_23 = this ;
      GGS_string var_swiftCocoaImplementation_17154 = GGS_string (filewrapperTemplate_templateLexiqueGenerationTemplates_swiftCocoaImplementationZone (inCompiler, GGS_string ("lexique-").add_operation (temp_20.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 429)).add_operation (GGS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 429)), temp_21.readProperty_mLexiqueComponentName ().readProperty_string (), temp_22.readProperty_mLexiqueSuperComponentName ().readProperty_string (), var_terminalList_12932, var_templateDelimitorList_15025, temp_23.readProperty_mTemplateReplacementList () COMMA_SOURCE_FILE ("template-lexique-component.galgas", 428))) ;
      const GGS_templateLexiqueComponentAST temp_24 = this ;
      const GGS_templateLexiqueComponentAST temp_25 = this ;
      const GGS_templateLexiqueComponentAST temp_26 = this ;
      ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string::makeEmptyString (), GGS_lexiqueDeclarationForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21_ (GGS_bool (true), GGS_string ("lexique-").add_operation (temp_24.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("template-lexique-component.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas", 441)), temp_25.readProperty_mLexiqueComponentName ().readProperty_string (), temp_26.readProperty_mLexiqueSuperComponentName ().readProperty_string (), var_headerContents_15755, var_cppContents_15999, var_objcCocoaHeader_16470, var_objcCocoaImplementation_16786, var_swiftCocoaImplementation_17154, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas", 437)) ;
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

GGS_string filewrapperTemplate_templateLexiqueGenerationTemplates_cppHeader (Compiler * inCompiler,
                                                                             const GGS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                             const GGS_string & in_SUPER_5F_LEXIQUE_5F_IDENTIFIER
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GGS_string ("LEXIQUE ").add_operation (in_LEXIQUE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("template_lexique_header_template_zone_2.h.galgasTemplate", 3)).stringValue ()) ;
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
  result.appendString (" (Compiler * inCallerCompiler,\n                       const String & inSourceString,\n                       const String & inStringForError\n                       COMMA_LOCATION_ARGS) ;\n\n//--- Instrospection\n  public: static GGS_stringlist symbols (LOCATION_ARGS) ;\n\n//--- Declaring a protected virtual destructor enables the compiler to raise\n//    an error if a direct delete is performed; only the static method\n//    SharedObject::detachPointer may invoke delete.\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    protected: virtual ~ Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) { }\n  #endif\n//--- Scanner mode for template scanner\n  private: int32_t mMatchedTemplateDelimiterIndex ;\n\n//--- Parse lexical token\n  protected: virtual bool parseLexicalToken (void) override ;\n} ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates cppImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_templateLexiqueGenerationTemplates_cppImplementation (Compiler * inCompiler,
                                                                                     const GGS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                     const GGS_string & in_SUPER_5F_LEXIQUE_5F_IDENTIFIER,
                                                                                     const GGS_lexicalExplicitTokenListMapMap & in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP,
                                                                                     const GGS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                     const GGS_templateDelimitorList & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                     const GGS_terminalList & in_TERMINAL_5F_LIST,
                                                                                     const GGS_string & in_LEXIQUE_5F_COMPONENT_5F_NAME,
                                                                                     const GGS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST
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
  GGS_uint index_1535_ (0) ;
  if (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES.isValid ()) {
    UpEnumerator_stringset enumerator_1535 (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES) ;
    while (enumerator_1535.hasCurrentObject ()) {
      const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_1535.current_key (HERE).getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 35)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("\n//--- Unicode string for '$") ;
        result.appendString (enumerator_1535.current_key (HERE).getter_utf_38_RepresentationWithoutDelimiters (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 36)).stringValue ()) ;
        result.appendString ("$'\nstatic const std::initializer_list <utf32> kUnicodeString_") ;
        result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_1535.current_key (HERE).getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 37)).stringValue ()) ;
        result.appendString (" = ") ;
        result.appendString (enumerator_1535.current_key (HERE).getter_utf_33__32_Representation (GGS_bool (false) COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 37)).stringValue ()) ;
        result.appendString (" ;\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1535.gotoNextObject () ;
      index_1535_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                           Template Delimiters\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_2328_ (0) ;
  if (in_TEMPLATE_5F_DELIMITOR_5F_LIST.isValid ()) {
    UpEnumerator_templateDelimitorList enumerator_2328 (in_TEMPLATE_5F_DELIMITOR_5F_LIST) ;
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
      const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_2328.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 48)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("{}, 0,") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("kUnicodeString_") ;
        result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_2328.current_mEndString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 51)).stringValue ()) ;
        result.appendString (", ") ;
        result.appendString (enumerator_2328.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 51)).getter_string (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 51)).stringValue ()) ;
        result.appendString (",") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (" nullptr, ") ;
      result.appendString (enumerator_2328.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 54)).getter_cString (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 54)).stringValue ()) ;
      result.appendString (")") ;
      enumerator_2328.gotoNextObject () ;
      if (enumerator_2328.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_2328_.increment () ;
    }
    if (nonEmpty_enumerator_2328) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                           Template Replacements\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_3282_ (0) ;
  if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
    UpEnumerator_templateReplacementListAST enumerator_3282 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST) ;
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
      const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_3282.current_mReplacementFunction (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 69)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_2) {
      case GalgasBool::boolTrue : {
        result.appendString ("nullptr") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("scanner_routine_") ;
        result.appendString (enumerator_3282.current_mReplacementFunction (HERE).readProperty_string ().stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (", true)") ;
      enumerator_3282.gotoNextObject () ;
      if (enumerator_3282.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_3282_.increment () ;
    }
    if (nonEmpty_enumerator_3282) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//            Terminal Symbols as end of script in template mark\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_4233_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    UpEnumerator_terminalList enumerator_4233 (in_TERMINAL_5F_LIST) ;
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
      enumerator_4233.gotoNextObject () ;
      if (enumerator_4233.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_4233_.increment () ;
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
  result.appendString ("_kEndOfScriptInTemplateArray [token.mTokenCode - 1]) {\n      mMatchedTemplateDelimiterIndex = -1 ;\n    }\n  }\n  if (UNICODE_VALUE (mCurrentChar) == '\\0') {\n    token.mTokenCode = 0 ;\n    enterToken (token) ;\n  }\n  return token.mTokenCode > 0 ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//                         I N T R O S P E C T I O N\n//--------------------------------------------------------------------------------------------------\n\nGGS_stringlist Lexique_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::symbols (LOCATION_ARGS) {\n  GGS_stringlist result = GGS_stringlist::class_func_emptyList (THERE) ;\n") ;
  GGS_uint index_7711_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    UpEnumerator_terminalList enumerator_7711 (in_TERMINAL_5F_LIST) ;
    while (enumerator_7711.hasCurrentObject ()) {
      result.appendString ("  result.addAssignOperation (GGS_string (") ;
      result.appendString (enumerator_7711.current_mTerminalName (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 152)).stringValue ()) ;
      result.appendString (") COMMA_HERE) ;\n") ;
      enumerator_7711.gotoNextObject () ;
      index_7711_.increment () ;
    }
  }
  result.appendString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void getKeywordLists_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (TC_UniqueArray <String> & ") ;
  const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 160)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_3) {
  case GalgasBool::boolTrue : {
    result.appendString ("/* ioList */") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("ioList") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (") {\n") ;
  GGS_uint index_8220_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    UpEnumerator_lexicalExplicitTokenListMapMap enumerator_8220 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP) ;
    while (enumerator_8220.hasCurrentObject ()) {
      result.appendString ("  ioList.appendObject (") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 164)).add_operation (enumerator_8220.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 164)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 164)).stringValue ()) ;
      result.appendString (") ;\n") ;
      enumerator_8220.gotoNextObject () ;
      index_8220_.increment () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic void getKeywordsForIdentifier_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const String & ") ;
  const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 170)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_4) {
  case GalgasBool::boolTrue : {
    result.appendString ("/* inIdentifier */") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("inIdentifier") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (",\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("bool & ") ;
  const GalgasBool test_5 = GGS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 171)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_5) {
  case GalgasBool::boolTrue : {
    result.appendString ("/* ioFound */") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("ioFound") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (",\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("TC_UniqueArray <String> & ") ;
  const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 172)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_6) {
  case GalgasBool::boolTrue : {
    result.appendString ("/* ioList */") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("ioList") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (") {\n") ;
  GGS_uint index_8929_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    UpEnumerator_lexicalExplicitTokenListMapMap enumerator_8929 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP) ;
    while (enumerator_8929.hasCurrentObject ()) {
      result.appendString ("  if (inIdentifier == ") ;
      result.appendString (in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 176)).add_operation (enumerator_8929.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 176)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 176)).stringValue ()) ;
      result.appendString (") {\n    ioFound = true ;\n") ;
      GGS_uint index_9126_ (0) ;
      if (enumerator_8929.current_mTokenSortedList (HERE).isValid ()) {
        UpEnumerator_tokenSortedlist enumerator_9126 (enumerator_8929.current_mTokenSortedList (HERE)) ;
        while (enumerator_9126.hasCurrentObject ()) {
          result.appendString ("    ioList.appendObject (") ;
          result.appendString (enumerator_9126.current_mName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_implementation-galgas3.cpp.galgasTemplate", 179)).stringValue ()) ;
          result.appendString (") ;\n") ;
          enumerator_9126.gotoNextObject () ;
          index_9126_.increment () ;
        }
      }
      result.appendString ("    ioList.sortArrayUsingCompareMethod() ;\n  }\n") ;
      enumerator_8929.gotoNextObject () ;
      index_8929_.increment () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic cLexiqueIntrospection lexiqueIntrospection_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("\n__attribute__ ((used))\n__attribute__ ((unused)) (getKeywordLists_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (", getKeywordsForIdentifier_") ;
  result.appendString (in_LEXIQUE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (") ;\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates objcCocoaHeaderZone'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_templateLexiqueGenerationTemplates_objcCocoaHeaderZone (Compiler * /* inCompiler */,
                                                                                       const GGS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                       const GGS_string & in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                       const GGS_string & in_SUPER_5F_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n#import \"") ;
  result.appendString (in_SUPER_5F_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME.stringValue ()) ;
  result.appendString (".h\"\n\n//--------------------------------------------------------------------------------------------------\n//\n//                     S C A N N E R    C L A S S\n//\n//--------------------------------------------------------------------------------------------------\n\n@interface OC_Lexique_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : OC_Lexique_") ;
  result.appendString (in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" {\n}\n- (void) parseLexicalTokenForLexicalColoring ;\n\n- (BOOL) isTemplateLexique ;\n\n@end\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates objcCocoaImplementationZone'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_templateLexiqueGenerationTemplates_objcCocoaImplementationZone (Compiler * /* inCompiler */,
                                                                                               const GGS_string & in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME,
                                                                                               const GGS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                               const GGS_terminalList & in_TERMINAL_5F_LIST,
                                                                                               const GGS_templateDelimitorList & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                               const GGS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n#import \"") ;
  result.appendString (in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME.stringValue ()) ;
  result.appendString (".h\"\n#import \"PMDebug.h\"\n\n//--------------------------------------------------------------------------------------------------\n\n@implementation OC_Lexique_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//\n//                           Template Replacements\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 15)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("static NSArray * kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 16)).stringValue ()) ;
    result.appendString (" ; // Of NSString \n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//\n//                           Template Delimiters\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 25)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("static NSArray * kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 26)).stringValue ()) ;
    result.appendString (" ;\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//\n//                           init\n//\n//--------------------------------------------------------------------------------------------------\n\n- (instancetype) init {\n  self = [super init] ;\n  if (self) {\n    noteObjectAllocation (self) ;\n  }\n") ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 39)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("  if (nil == kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 40)).stringValue ()) ;
    result.appendString (") {\n    kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 41)).stringValue ()) ;
    result.appendString (" = [NSArray arrayWithObjects:\n") ;
    GGS_uint index_1724_ (0) ;
    if (in_TEMPLATE_5F_DELIMITOR_5F_LIST.isValid ()) {
      UpEnumerator_templateDelimitorList enumerator_1724 (in_TEMPLATE_5F_DELIMITOR_5F_LIST) ;
      while (enumerator_1724.hasCurrentObject ()) {
        result.appendString ("      [[OC_GGS_TemplateDelimiter alloc] initWithStartString:@") ;
        result.appendString (enumerator_1724.current_mStartString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 43)).stringValue ()) ;
        result.appendString (" endString:") ;
        const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_1724.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 44)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        switch (test_3) {
        case GalgasBool::boolTrue : {
          result.appendString ("nil") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString ("@") ;
          result.appendString (enumerator_1724.current_mEndString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 47)).stringValue ()) ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        result.appendString (" discardStartString:") ;
        result.appendString (enumerator_1724.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 50)).getter_ocString (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 50)).stringValue ()) ;
        result.appendString ("],\n") ;
        enumerator_1724.gotoNextObject () ;
        index_1724_.increment () ;
      }
    }
    result.appendString ("      nil\n    ] ;\n  }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_4 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 57)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_4) {
  case GalgasBool::boolTrue : {
    result.appendString ("  if (nil == kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 58)).stringValue ()) ;
    result.appendString (") {\n    kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 59)).stringValue ()) ;
    result.appendString (" = [NSArray arrayWithObjects:\n") ;
    GGS_uint index_2487_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      UpEnumerator_templateReplacementListAST enumerator_2487 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST) ;
      while (enumerator_2487.hasCurrentObject ()) {
        result.appendString ("      @") ;
        result.appendString (enumerator_2487.current_mMatchString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.m.galgasTemplate", 61)).stringValue ()) ;
        result.appendString (",\n") ;
        enumerator_2487.gotoNextObject () ;
        index_2487_.increment () ;
      }
    }
    result.appendString ("      nil\n    ] ;\n  }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  return self ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n- (void) dealloc {\n  noteObjectDeallocation (self) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n//\n//            Terminal Symbols as end of script in template mark\n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_3349_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    UpEnumerator_terminalList enumerator_3349 (in_TERMINAL_5F_LIST) ;
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
      enumerator_3349.gotoNextObject () ;
      if (enumerator_3349.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_3349_.increment () ;
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
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'templateLexiqueGenerationTemplates swiftCocoaImplementationZone'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_templateLexiqueGenerationTemplates_swiftCocoaImplementationZone (Compiler * /* inCompiler */,
                                                                                                const GGS_string & /* in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME */,
                                                                                                const GGS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                                const GGS_string & in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                                const GGS_terminalList & in_TERMINAL_5F_LIST,
                                                                                                const GGS_templateDelimitorList & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                                const GGS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//                           Template Replacements\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 8)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("fileprivate let kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 9)).stringValue ()) ;
    result.appendString (" : [String] = [\n") ;
    GGS_uint index_516_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      UpEnumerator_templateReplacementListAST enumerator_516 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST) ;
      while (enumerator_516.hasCurrentObject ()) {
        result.appendString ("  ") ;
        result.appendString (enumerator_516.current_mMatchString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 12)).stringValue ()) ;
        enumerator_516.gotoNextObject () ;
        if (enumerator_516.hasCurrentObject ()) {
          result.appendString (",\n") ;
        }
        index_516_.increment () ;
      }
    }
    result.appendString ("\n]\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                           Template Delimiters\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 21)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("fileprivate let kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 22)).stringValue ()) ;
    result.appendString (" : [SWIFT_TemplateDelimiter] = [\n") ;
    GGS_uint index_1113_ (0) ;
    if (in_TEMPLATE_5F_DELIMITOR_5F_LIST.isValid ()) {
      UpEnumerator_templateDelimitorList enumerator_1113 (in_TEMPLATE_5F_DELIMITOR_5F_LIST) ;
      while (enumerator_1113.hasCurrentObject ()) {
        result.appendString ("  SWIFT_TemplateDelimiter (startString: ") ;
        result.appendString (enumerator_1113.current_mStartString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 25)).stringValue ()) ;
        result.appendString (", endString: ") ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, enumerator_1113.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 26)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        switch (test_2) {
        case GalgasBool::boolTrue : {
          result.appendString ("nil") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString (enumerator_1113.current_mEndString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 29)).stringValue ()) ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        result.appendString (", discardStartString: ") ;
        result.appendString (enumerator_1113.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 32)).getter_cString (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 32)).stringValue ()) ;
        result.appendString (")") ;
        enumerator_1113.gotoNextObject () ;
        if (enumerator_1113.hasCurrentObject ()) {
          result.appendString (",\n") ;
        }
        index_1113_.increment () ;
      }
    }
    result.appendString ("\n]\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//            Terminal Symbols as end of script in template mark\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_1938_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    UpEnumerator_terminalList enumerator_1938 (in_TERMINAL_5F_LIST) ;
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
      enumerator_1938.gotoNextObject () ;
      if (enumerator_1938.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_1938_.increment () ;
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
  result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func isTemplateLexique () -> Bool {\n    return true\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Lexical analysis\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func parseLexicalTokenForLexicalColoring () -> SWIFT_Token {\n    let startLocation = self.currentLocation\n    if let idx = self.mEndTemplateDelimiterIndex, self.testForInputString (kTemplateDefinitionArray_galgasTemplateScanner [idx].endString, advance: true) {\n      self.mEndTemplateDelimiterIndex = nil\n    }\n    if self.mEndTemplateDelimiterIndex != nil {\n      return super.parseLexicalTokenForLexicalColoring ()\n    }else{ // In template string, find code start string\n      while self.mEndTemplateDelimiterIndex == nil, self.currentChar != 0 {\n        var idx = 0\n        while self.mEndTemplateDelimiterIndex == nil, idx < kTemplateDefinitionArray_galgasTemplateScanner.count {\n          if self.testForInputString (kTemplateDefinitionArray_galgasTemplateScanner [idx].startString, advance: true) {\n            self.mEndTemplateDelimiterIndex = idx\n          }\n          idx += 1\n        }\n        if self.mEndTemplateDelimiterIndex == nil {\n          self.advance ()\n        }\n      }\n      return SWIFT_Token (\n        range: NSRange (location: startLocation, length: self.currentLocation - startLocation),\n        tokenCode: ") ;
  result.appendString (in_SUPER_5F_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("_2_TEMPLATE,\n        templateDelimiterIndex: self.mEndTemplateDelimiterIndex\n      )\n    }\n  }\n//    var styleIndex : UInt8 = 0\n//    var tokenCode : UInt16 = 0\n//    let startLocation = self.currentLocation\n//    while styleIndex == 0, self.currentChar != 0 {\n//      let tokenStartLocation = self.currentLocation\n//      if let idx = matchedTemplateDelimiterIndex, !kTemplateDefinitionArray_galgasTemplateScanner [idx].startString.isEmpty {\n//        let foundEndDelimitor = self.testForInputString (kTemplateDefinitionArray_galgasTemplateScanner [idx].endString, advance: true)\n//        if foundEndDelimitor {\n//          matchedTemplateDelimiterIndex = nil\n//        }\n//      }\n//      while matchedTemplateDelimiterIndex != nil, self.currentChar != 0 {\n//        self.searchForReplacementPattern (kTemplateReplacementArray_galgasTemplateScanner)\n//        matchedTemplateDelimiterIndex = self.findTemplateDelimiterIndex (kTemplateDefinitionArray_galgasTemplateScanner)\n//        if matchedTemplateDelimiterIndex == nil {\n//          self.advance ()\n//          styleIndex = -2\n//        }\n//      }\n//      if matchedTemplateDelimiterIndex != nil, styleIndex == 0, self.currentChar != 0 {\n//        let s = super.parseLexicalTokenForLexicalColoring ()\n//        styleIndex = s.styleIndex\n//        tokenCode = s.token\n//      }\n//      if styleIndex > 0, kEndOfScriptInTemplateArray_galgasTemplateScanner [Int (styleIndex) - 1] {\n//        matchedTemplateDelimiterIndex = nil\n//      }\n//    //--- Error \?\n////      if !scanningOk {\n////        styleIndex = Int8 (self.styleCount ())\n////        self.advance ()\n////      }\n//    }\n//  }\n  \n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n//                           init\n//--------------------------------------------------------------------------------------------------\n\n/* - (instancetype) init {\n  self = [super init] ;\n  if (self) {\n    noteObjectAllocation (self) ;\n  }\n") ;
  const GalgasBool test_3 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 147)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_3) {
  case GalgasBool::boolTrue : {
    result.appendString ("  if (nil == kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 148)).stringValue ()) ;
    result.appendString (") {\n    kTemplateDefinitionArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 149)).stringValue ()) ;
    result.appendString (" = [NSArray arrayWithObjects:\n") ;
    GGS_uint index_6593_ (0) ;
    if (in_TEMPLATE_5F_DELIMITOR_5F_LIST.isValid ()) {
      UpEnumerator_templateDelimitorList enumerator_6593 (in_TEMPLATE_5F_DELIMITOR_5F_LIST) ;
      while (enumerator_6593.hasCurrentObject ()) {
        result.appendString ("      [[OC_GGS_TemplateDelimiter alloc] initWithStartString:@") ;
        result.appendString (enumerator_6593.current_mStartString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 151)).stringValue ()) ;
        result.appendString (" endString:") ;
        const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, enumerator_6593.current_mEndString (HERE).readProperty_string ().getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 152)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        switch (test_4) {
        case GalgasBool::boolTrue : {
          result.appendString ("nil") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString ("@") ;
          result.appendString (enumerator_6593.current_mEndString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 155)).stringValue ()) ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        result.appendString (" discardStartString:") ;
        result.appendString (enumerator_6593.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 158)).getter_ocString (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 158)).stringValue ()) ;
        result.appendString ("],\n") ;
        enumerator_6593.gotoNextObject () ;
        index_6593_.increment () ;
      }
    }
    result.appendString ("      nil\n    ] ;\n  }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_5 = GGS_bool (ComparisonKind::greaterThan, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 165)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_5) {
  case GalgasBool::boolTrue : {
    result.appendString ("  if (nil == kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 166)).stringValue ()) ;
    result.appendString (") {\n    kTemplateReplacementArray_") ;
    result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 167)).stringValue ()) ;
    result.appendString (" = [NSArray arrayWithObjects:\n") ;
    GGS_uint index_7356_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      UpEnumerator_templateReplacementListAST enumerator_7356 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST) ;
      while (enumerator_7356.hasCurrentObject ()) {
        result.appendString ("      @") ;
        result.appendString (enumerator_7356.current_mMatchString (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 169)).stringValue ()) ;
        result.appendString (",\n") ;
        enumerator_7356.gotoNextObject () ;
        index_7356_.increment () ;
      }
    }
    result.appendString ("      nil\n    ] ;\n  }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  return self ;\n}\n*/\n\n//--------------------------------------------------------------------------------------------------\n\n/* - (void) dealloc {\n  noteObjectDeallocation (self) ;\n} */\n\n//--------------------------------------------------------------------------------------------------\n//            Terminal Symbols as end of script in template mark\n//--------------------------------------------------------------------------------------------------\n\n/*\n") ;
  GGS_uint index_8224_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    UpEnumerator_terminalList enumerator_8224 (in_TERMINAL_5F_LIST) ;
    const bool nonEmpty_enumerator_8224 = enumerator_8224.hasCurrentObject () ;
    if (nonEmpty_enumerator_8224) {
      result.appendString ("static const BOOL kEndOfScriptInTemplateArray_") ;
      result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 191)).stringValue ()) ;
      result.appendString (" [") ;
      result.appendString (in_TERMINAL_5F_LIST.getter_count (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 191)).getter_string (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 191)).stringValue ()) ;
      result.appendString ("] = {\n") ;
    }
    while (enumerator_8224.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_8224.current_isEndOfTemplateMark (HERE).getter_ocString (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 192)).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_8224.current_mTerminalName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" */") ;
      enumerator_8224.gotoNextObject () ;
      if (enumerator_8224.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_8224_.increment () ;
    }
    if (nonEmpty_enumerator_8224) {
      result.appendString ("\n} ;\n") ;
    }
  }
  result.appendString (" */\n\n//--------------------------------------------------------------------------------------------------\n//               P A R S E    L E X I C A L    T O K E N\n//--------------------------------------------------------------------------------------------------\n\n/* - (void) parseLexicalTokenForLexicalColoring {\n  BOOL scanningOk = YES ;\n  mTokenCode = 0 ;\n  while ((mTokenCode == 0) && (mCurrentChar != '\\0')) {\n    mTokenStartLocation = mCurrentLocation ;\n    if ((mMatchedTemplateDelimiterIndex >= 0) && ([[kTemplateDefinitionArray_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 207)).stringValue ()) ;
  result.appendString (" objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] startString].length > 0)) {\n      const BOOL foundEndDelimitor = [self testForInputString:[[kTemplateDefinitionArray_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 208)).stringValue ()) ;
  result.appendString (" objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] endString] advance:YES] ;\n      if (foundEndDelimitor) {\n        mMatchedTemplateDelimiterIndex = -1 ;\n      }\n    }\n    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar != '\\0')) {\n      [self searchForReplacementPattern:kTemplateReplacementArray_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 214)).stringValue ()) ;
  result.appendString ("] ;\n      mMatchedTemplateDelimiterIndex = [self findTemplateDelimiterIndex:kTemplateDefinitionArray_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 215)).stringValue ()) ;
  result.appendString ("] ;\n      if (mMatchedTemplateDelimiterIndex < 0) {\n        [self advance] ;\n        mTokenCode = -2 ;\n      }\n    }\n    if ((mMatchedTemplateDelimiterIndex >= 0) && (mTokenCode == 0) && (mCurrentChar != '\\0') && scanningOk) {\n      scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;\n    }\n    if ((mTokenCode > 0) && kEndOfScriptInTemplateArray_") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("template_lexique_cocoa_implementation.swift.galgasTemplate", 224)).stringValue ()) ;
  result.appendString (" [mTokenCode - 1]) {\n      mMatchedTemplateDelimiterIndex = -1 ;\n    }\n  //--- Error \?\n    if (! scanningOk) {\n      mTokenCode = -1 ;\n      [self advance] ;\n    }\n  }\n}\n*/ \n//--------------------------------------------------------------------------------------------------\n//                I S    T E M P L A T E    L E X I Q U E\n//--------------------------------------------------------------------------------------------------\n\n/* - (BOOL) isTemplateLexique {\n  return YES ;\n} */\n\n//--------------------------------------------------------------------------------------------------\n//         L E X I Q U E   I D E N T I F I E R\n//--------------------------------------------------------------------------------------------------\n\n/* - (NSString *) lexiqueIdentifier {\n  return @\"") ;
  result.appendString (in_LEXIQUE_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString ("\" ;\n} */\n\n//--------------------------------------------------------------------------------------------------\n\n// @end\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Once function 'buildLexicalTypeMap'
//
//--------------------------------------------------------------------------------------------------

static GGS_lexicalTypeMap onceFunction_buildLexicalTypeMap (Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeMap result_result ; // Returned variable
  result_result = GGS_lexicalTypeMap::init (inCompiler COMMA_HERE) ;
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("string"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 388)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("lexiqueTypesForAST.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 388)) ;
  }
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("char"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 389)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueTypesForAST.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 389)) ;
  }
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("uint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 390)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 390)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 390)) ;
  }
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("uint64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 391)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 391)) ;
  }
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("sint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 392)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 392)) ;
  }
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("sint64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 393)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 393)) ;
  }
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("double"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 394)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_double (SOURCE_FILE ("lexiqueTypesForAST.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 394)) ;
  }
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("bigint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 395)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("lexiqueTypesForAST.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 395)) ;
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_buildLexicalTypeMap = false ;
static GGS_lexicalTypeMap gOnceFunctionResult_buildLexicalTypeMap ;

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeMap function_buildLexicalTypeMap (class Compiler * inCompiler
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

static GGS_object functionWithGenericHeader_buildLexicalTypeMap (Compiler * inCompiler,
                                                                 const cObjectArray & /* inEffectiveParameterArray */,
                                                                 const GGS_location & /* inErrorLocation */
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

void routine_buildLexicalAttributeMap_3F__3F__26_ (const GGS_lexicalTypeMap constinArgument_inLexicalTypeMap,
                                                   const GGS_lexicalAttributeListAST constinArgument_inLexicalAttributeList,
                                                   GGS_lexicalAttributeMap & ioArgument_ioLexicalAttributeMap,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_lexicalAttributeListAST enumerator_15177 (constinArgument_inLexicalAttributeList) ;
  while (enumerator_15177.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = constinArgument_inLexicalTypeMap.getter_hasKey (enumerator_15177.current_mTypeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 415)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_lexicalTypeEnum var_lexicalType_15336 ;
        constinArgument_inLexicalTypeMap.method_searchKey (enumerator_15177.current_mTypeName (HERE), var_lexicalType_15336, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 416)) ;
        {
        ioArgument_ioLexicalAttributeMap.setter_insertKey (enumerator_15177.current_mName (HERE), var_lexicalType_15336, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 417)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_string var_m_15438 = GGS_string::makeEmptyString () ;
      var_m_15438.plusAssignOperation(GGS_string ("the @").add_operation (enumerator_15177.current_mTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 420)).add_operation (GGS_string (" type is not a valid lexical attribute type; are allowed:"), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 420)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 420)) ;
      UpEnumerator_lexicalTypeMap enumerator_15554 (constinArgument_inLexicalTypeMap) ;
      while (enumerator_15554.hasCurrentObject ()) {
        var_m_15438.plusAssignOperation(GGS_string (" @").add_operation (enumerator_15554.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 422)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 422)) ;
        enumerator_15554.gotoNextObject () ;
        if (enumerator_15554.hasCurrentObject ()) {
          var_m_15438.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 424)) ;
        }
      }
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_15177.current_mTypeName (HERE).readProperty_location (), var_m_15438, fixItArray1  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 426)) ;
    }
    enumerator_15177.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'lexicalUnicodeTestFunctionAnalysis!'
//
//--------------------------------------------------------------------------------------------------

void routine_lexicalUnicodeTestFunctionAnalysis_21_ (GGS_stringset & outArgument_outUnicodeTestFunctions,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUnicodeTestFunctions.drop () ; // Release 'out' argument
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 39)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("isUnicodeLetter")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 31)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("isUnicodeMark")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 32)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("isUnicodeNumber")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 33)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("isUnicodeDecimalDigit")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 34)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("isUnicodeASCIIHexDigit")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 35)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("isUnicodeSeparator")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 36)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("isUnicodeCommand")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 37)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("isUnicodePunctuation")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 38)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("isUnicodeSymbol")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas", 39)) ;
  outArgument_outUnicodeTestFunctions = temp_0 ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalRoutineMap!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalRoutineMap_21_ (GGS_lexicalRoutineMap & outArgument_outLexicalRoutineMap,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLexicalRoutineMap.drop () ; // Release 'out' argument
  outArgument_outLexicalRoutineMap = GGS_lexicalRoutineMap::init (inCompiler COMMA_HERE) ;
  GGS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_errorMessageList_2318 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 48)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 48)), GGS_string ("ioASCIICharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 48)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 49)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 49)), GGS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 49)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inErrorCodeGreaterThan255")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 50)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inErrorNotHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 51)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterHexDigitIntoASCIIcharacter"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 53)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, var_errorMessageList_2318, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 52)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2318 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 61)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 61)), GGS_string ("ioASCIICharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 61)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 62)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 62)), GGS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 62)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inErrorCodeGreaterThan255")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 63)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inErrorNotDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 64)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterDigitIntoASCIIcharacter"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 66)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, var_errorMessageList_2318, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 65)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 73)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 73)), GGS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 73)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 74)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 74)), GGS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 74)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterCharacterIntoString"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 76)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, GGS_stringlist::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 75)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 83)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 83)), GGS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 83)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 84)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 84)), GGS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 84)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("prependCharacter"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 86)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, GGS_stringlist::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 85)) ;
  }
  {
  GGS_lexicalRoutineFormalArgumentList temp_0 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 94)) ;
  temp_0.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentList_2E_element::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 94)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 94)), GGS_string ("ioString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 94)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("resetString"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 93)), inCompiler COMMA_HERE), temp_0, GGS_stringlist::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 92)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2318 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 101)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 101)), GGS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 101)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 102)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_double (SOURCE_FILE ("predefinedLexicalActions.galgas", 102)), GGS_string ("ioDouble")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 102)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inConversionError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 103)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertStringToDouble"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 105)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, var_errorMessageList_2318, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 104)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2318 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 113)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 113)), GGS_string ("ioCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 113)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 114)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 114)), GGS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 114)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterCharacterIntoCharacter"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 116)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, var_errorMessageList_2318, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 115)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2318 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 124)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 124)), GGS_string ("ioNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 124)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 125)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("negateSInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 127)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, var_errorMessageList_2318, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 126)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2318 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 135)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 135)), GGS_string ("ioNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 135)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 136)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("negateSInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 138)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, var_errorMessageList_2318, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 137)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2318 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 146)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 146)), GGS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 146)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 147)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 147)), GGS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 147)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 148)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertUIntToSInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 150)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, var_errorMessageList_2318, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 149)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2318 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 158)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 158)), GGS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 158)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 159)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 159)), GGS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 159)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 160)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertUInt64ToSInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 162)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, var_errorMessageList_2318, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 161)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2318 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 170)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 170)), GGS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 170)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 171)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 171)), GGS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 171)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 172)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 173)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterDigitIntoUInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 175)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, var_errorMessageList_2318, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 174)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2318 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 183)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 183)), GGS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 183)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 184)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 184)), GGS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 184)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 185)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 186)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterDigitIntoUInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 188)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, var_errorMessageList_2318, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 187)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 195)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 195)), GGS_string ("inDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 195)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 196)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 196)), GGS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 196)) ;
  {
  GGS_stringlist temp_1 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 200)) ;
  temp_1.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotDecimalDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 200)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterDecimalDigitIntoBigInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 198)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, temp_1, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 197)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 205)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 205)), GGS_string ("inBinaryDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 205)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 206)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 206)), GGS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 206)) ;
  {
  GGS_stringlist temp_2 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 210)) ;
  temp_2.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotBinaryDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 210)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterBinaryDigitIntoBigInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 208)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, temp_2, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 207)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 215)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 215)), GGS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 215)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 216)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 216)), GGS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 216)) ;
  {
  GGS_stringlist temp_3 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 220)) ;
  temp_3.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotHexDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 220)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterHexDigitIntoBigInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 218)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, temp_3, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 217)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 225)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 225)), GGS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 225)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 226)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 226)), GGS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 226)) ;
  {
  GGS_stringlist temp_4 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 230)) ;
  temp_4.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotDecimalDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 230)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertDecimalStringIntoBigInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 228)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, temp_4, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 227)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 235)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 235)), GGS_string ("ioBigInt")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 235)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("negateBigInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 237)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, GGS_stringlist::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 236)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 244)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 244)), GGS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 244)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 245)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 245)), GGS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 245)) ;
  {
  GGS_stringlist temp_5 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 249)) ;
  temp_5.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotBinaryDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 249)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertBinaryStringIntoBigInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 247)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, temp_5, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 246)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 254)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 254)), GGS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 254)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 255)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas", 255)), GGS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 255)) ;
  {
  GGS_stringlist temp_6 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 259)) ;
  temp_6.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotHexDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 259)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertHexStringIntoBigInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 257)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, temp_6, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 256)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2318 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 265)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 265)), GGS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 265)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 266)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 266)), GGS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 266)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 267)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 268)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterHexDigitIntoUInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 270)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, var_errorMessageList_2318, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 269)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2318 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 278)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 278)), GGS_string ("inHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 278)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 279)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 279)), GGS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 279)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 280)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 281)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterHexDigitIntoUInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 283)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, var_errorMessageList_2318, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 282)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2318 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 291)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 291)), GGS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 291)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 292)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 292)), GGS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 292)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 293)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 294)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertDecimalStringIntoUInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 296)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, var_errorMessageList_2318, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 295)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2318 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 304)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 304)), GGS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 304)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 305)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 305)), GGS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 305)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 306)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 307)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertDecimalStringIntoSInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 309)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, var_errorMessageList_2318, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 308)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 316)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 316)), GGS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 316)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 317)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 317)), GGS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 317)) ;
  {
  GGS_stringlist temp_7 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 321)) ;
  temp_7.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inNumberTooLargeError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 321)) ;
  temp_7.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("inCharacterIsNotDecimalDigitError"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 321)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertDecimalStringIntoUInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 319)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, temp_7, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 318)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2318 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 327)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 327)), GGS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 327)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 328)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 328)), GGS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 328)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 329)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 330)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertDecimalStringIntoSInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 332)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, var_errorMessageList_2318, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 331)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2318 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 340)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 340)), GGS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 340)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 341)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 341)), GGS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 341)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 342)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inCharacterIsNotBinDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 343)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterBinDigitIntoUInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 345)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, var_errorMessageList_2318, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 344)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2318 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 353)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 353)), GGS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 353)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 354)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 354)), GGS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 354)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 355)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inCharacterIsNotBinDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 356)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterBinDigitIntoUInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 358)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, var_errorMessageList_2318, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 357)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2318 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 366)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 366)), GGS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 366)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 367)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 367)), GGS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 367)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 368)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inCharacterIsNotOctDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 369)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterOctDigitIntoUInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 371)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, var_errorMessageList_2318, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 370)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2318 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 379)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 379)), GGS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 379)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 380)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 380)), GGS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 380)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 381)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inCharacterIsNotOctDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 382)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterOctDigitIntoUInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 384)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, var_errorMessageList_2318, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 383)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2318 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 392)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 392)), GGS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 392)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 393)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 393)), GGS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 393)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inResultTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 394)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("multiplyUInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 396)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, var_errorMessageList_2318, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 395)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2318 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 404)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 404)), GGS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 404)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 405)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 405)), GGS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 405)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inResultTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 406)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("multiplyUInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 408)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, var_errorMessageList_2318, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 407)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2318 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 416)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 416)), GGS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 416)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 417)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 417)), GGS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 417)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 418)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 419)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertHexStringIntoUInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 421)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, var_errorMessageList_2318, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 420)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2318 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 429)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 429)), GGS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 429)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 430)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 430)), GGS_string ("ioUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 430)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 431)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 432)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertHexStringIntoUInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 434)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, var_errorMessageList_2318, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 433)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2318 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 442)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 442)), GGS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 442)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 443)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas", 443)), GGS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 443)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 444)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 445)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertHexStringIntoSInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 447)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, var_errorMessageList_2318, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 446)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2318 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 455)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 455)), GGS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 455)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 456)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas", 456)), GGS_string ("ioSignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 456)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 457)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 458)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertHexStringIntoSInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 460)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, var_errorMessageList_2318, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 459)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2318 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 468)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas", 468)), GGS_string ("inUnsignedNumber")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 468)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 469)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 469)), GGS_string ("ioUnicodeCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 469)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inUnassignedUnicodeValueError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 470)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertUnsignedNumberToUnicodeChar"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 472)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, var_errorMessageList_2318, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 471)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2318 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 480)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 480)), GGS_string ("inString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 480)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 481)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 481)), GGS_string ("ioUnicodeCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 481)) ;
  var_errorMessageList_2318.addAssignOperation (GGS_string ("inUnassignedHTMLSequenceError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 482)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertHTMLSequenceToUnicodeCharacter"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 484)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, var_errorMessageList_2318, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 483)) ;
  }
  var_lexicalRoutineFormalArgumentList_2261 = GGS_lexicalRoutineFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2318 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 492)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 492)), GGS_string ("inCodePointString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 492)) ;
  var_lexicalRoutineFormalArgumentList_2261.addAssignOperation (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas", 493)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas", 493)), GGS_string ("ioString")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 493)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("codePointToUnicode"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 495)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2261, var_errorMessageList_2318, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 494)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalFunctionMap!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalFunctionMap_21_ (GGS_lexicalFunctionMap & outArgument_outLexicalFunctionMap,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLexicalFunctionMap.drop () ; // Release 'out' argument
  outArgument_outLexicalFunctionMap = GGS_lexicalFunctionMap::init (inCompiler COMMA_HERE) ;
  GGS_lexicalFunctionFormalArgumentList var_lexicalTypeList_22649 = GGS_lexicalFunctionFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalTypeList_22649.addAssignOperation (GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 510)), GGS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 510)) ;
  {
  outArgument_outLexicalFunctionMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("toLower"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 512)), inCompiler COMMA_HERE), var_lexicalTypeList_22649, GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 514)), GGS_string::makeEmptyString (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 511)) ;
  }
  var_lexicalTypeList_22649 = GGS_lexicalFunctionFormalArgumentList::init (inCompiler COMMA_HERE) ;
  var_lexicalTypeList_22649.addAssignOperation (GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 520)), GGS_string ("inCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 520)) ;
  {
  outArgument_outLexicalFunctionMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("toUpper"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 522)), inCompiler COMMA_HERE), var_lexicalTypeList_22649, GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas", 524)), GGS_string::makeEmptyString (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 521)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'printPredefinedLexicalActions'
//
//--------------------------------------------------------------------------------------------------

void routine_printPredefinedLexicalActions (Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalRoutineMap var_lexicalRoutineMap_23608 ;
  {
  routine_buildLexicalRoutineMap_21_ (var_lexicalRoutineMap_23608, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 536)) ;
  }
  GGS_string var_s_23707 = GGS_string::makeEmptyString () ;
  var_s_23707.plusAssignOperation(GGS_string ("**************** Prefined lexical routines  ****************\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 539)) ;
  UpEnumerator_lexicalRoutineMap enumerator_23850 (var_lexicalRoutineMap_23608) ;
  while (enumerator_23850.hasCurrentObject ()) {
    var_s_23707.plusAssignOperation(enumerator_23850.current_lkey (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 541)) ;
    UpEnumerator_lexicalRoutineFormalArgumentList enumerator_23961 (enumerator_23850.current_mLexicalRoutineFormalArgumentList (HERE)) ;
    while (enumerator_23961.hasCurrentObject ()) {
      var_s_23707.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_lexicalFormalModeName (enumerator_23961.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)).add_operation (GGS_string ("@"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)).add_operation (extensionGetter_lexicalTypeBaseName (enumerator_23961.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)).add_operation (enumerator_23961.current_mArgumentNameForComment (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 543)) ;
      enumerator_23961.gotoNextObject () ;
    }
    UpEnumerator_stringlist enumerator_24200 (enumerator_23850.current_mErrorMessageList (HERE)) ;
    const bool bool_0 = true ;
    if (enumerator_24200.hasCurrentObject () && bool_0) {
      var_s_23707.plusAssignOperation(GGS_string (" error"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 546)) ;
      while (enumerator_24200.hasCurrentObject () && bool_0) {
        var_s_23707.plusAssignOperation(GGS_string (" ").add_operation (enumerator_24200.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 547)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 547)) ;
        enumerator_24200.gotoNextObject () ;
        if (enumerator_24200.hasCurrentObject () && bool_0) {
          var_s_23707.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 548)) ;
        }
      }
    }
    var_s_23707.plusAssignOperation(GGS_string (" ;\n\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 550)) ;
    enumerator_23850.gotoNextObject () ;
  }
  GGS_lexicalFunctionMap var_lexicalFunctionMap_24432 ;
  {
  routine_buildLexicalFunctionMap_21_ (var_lexicalFunctionMap_24432, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 553)) ;
  }
  var_s_23707.plusAssignOperation(GGS_string ("**************** Prefined lexical functions ****************\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 555)) ;
  UpEnumerator_lexicalFunctionMap enumerator_24667 (var_lexicalFunctionMap_24432) ;
  while (enumerator_24667.hasCurrentObject ()) {
    var_s_23707.plusAssignOperation(enumerator_24667.current_lkey (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 557)) ;
    UpEnumerator_lexicalFunctionFormalArgumentList enumerator_24738 (enumerator_24667.current_mLexicalTypeList (HERE)) ;
    while (enumerator_24738.hasCurrentObject ()) {
      var_s_23707.plusAssignOperation(GGS_string (" \?@").add_operation (extensionGetter_lexicalTypeBaseName (enumerator_24738.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 559)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 559)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 559)).add_operation (enumerator_24738.current_mArgumentNameForComment (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 559)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 559)) ;
      enumerator_24738.gotoNextObject () ;
    }
    var_s_23707.plusAssignOperation(GGS_string (" -> @").add_operation (extensionGetter_lexicalTypeBaseName (enumerator_24667.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 561)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 561)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 561)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 561)) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, enumerator_24667.current_mReplacementFunctionName (HERE).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_s_23707.plusAssignOperation(GGS_string ("Note: the '").add_operation (enumerator_24667.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 563)).add_operation (GGS_string ("' function is obsolete: use '"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 563)).add_operation (enumerator_24667.current_mReplacementFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 563)).add_operation (GGS_string ("' function.\n"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 563)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 563)) ;
      }
    }
    var_s_23707.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 565)) ;
    enumerator_24667.gotoNextObject () ;
  }
  var_s_23707.plusAssignOperation(GGS_string ("************************************************************"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 568)) ;
  {
  routine_println_3F_ (var_s_23707, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas", 569)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalOrExpressionAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalOrExpressionAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalOrExpressionAST temp_0 = this ;
  result_result = callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 37)) ;
  result_result.plusAssignOperation(GGS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 38)) ;
  const GGS_lexicalOrExpressionAST temp_1 = this ;
  result_result.plusAssignOperation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 39)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterIntervalMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterIntervalMatchAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
  result_result = GGS_string ("testForInputUTF32CharRange (") ;
  const GGS_lexicalCharacterIntervalMatchAST temp_0 = this ;
  result_result.plusAssignOperation(temp_0.readProperty_mLowerBound ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 49)) ;
  result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 50)) ;
  const GGS_lexicalCharacterIntervalMatchAST temp_1 = this ;
  result_result.plusAssignOperation(temp_1.readProperty_mUpperBound ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 51)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 51)) ;
  result_result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 52)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStringMatchAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalStringMatchAST temp_0 = this ;
  result_result = GGS_string ("testForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inLexiqueAnalysisContext.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 60)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 60)).add_operation (temp_0.readProperty_mString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 60)) ;
  result_result.plusAssignOperation(GGS_string (", true)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 61)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringNotMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStringNotMatchAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("notTestForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inLexiqueAnalysisContext.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 69)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 69)) ;
  const GGS_lexicalStringNotMatchAST temp_0 = this ;
  result_result.plusAssignOperation(temp_0.readProperty_mString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 70)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 70)) ;
  result_result.plusAssignOperation(GGS_string (", gLexicalMessage_"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 71)) ;
  result_result.plusAssignOperation(constinArgument_inLexiqueAnalysisContext.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 72)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 72)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 72)) ;
  const GGS_lexicalStringNotMatchAST temp_1 = this ;
  result_result.plusAssignOperation(temp_1.readProperty_mErrorMessage ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 73)) ;
  result_result.plusAssignOperation(GGS_string (" COMMA_LINE_AND_SOURCE_FILE)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 74)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterMatchAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("testForInputUTF32Char (") ;
  const GGS_lexicalCharacterMatchAST temp_0 = this ;
  result_result.plusAssignOperation(temp_0.readProperty_mCharacter ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 83)) ;
  result_result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 84)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterSetMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterSetMatchAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("testForCharWithFunction (") ;
  const GGS_lexicalCharacterSetMatchAST temp_0 = this ;
  result_result.plusAssignOperation(temp_0.readProperty_mCharacterSetName ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 93)) ;
  result_result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 94)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalAttributeInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalAttributeInputArgumentAST temp_0 = this ;
  result_result = GGS_string ("token.mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 108)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalCharacterInputArgumentAST temp_0 = this ;
  result_result = temp_0.readProperty_mCharacter ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 115)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalUnsignedInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalUnsignedInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalUnsignedInputArgumentAST temp_0 = this ;
  result_result = temp_0.readProperty_mUnsigned ().readProperty_bigint ().getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 121)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCurrentCharacterInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCurrentCharacterInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("previousChar ()") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalFunctionInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalFunctionInputArgumentAST temp_0 = this ;
  result_result = GGS_string ("::scanner_function_").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 135)).add_operation (GGS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 135)) ;
  const GGS_lexicalFunctionInputArgumentAST temp_1 = this ;
  UpEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_6132 (temp_1.readProperty_mFunctionActualArgumentList ()) ;
  while (enumerator_6132.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string (", ").add_operation (callExtensionGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_6132.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 137)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 137)) ;
    enumerator_6132.gotoNextObject () ;
  }
  result_result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 139)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSendTerminalByDefaultAST generateDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalSendTerminalByDefaultAST::getter_generateDefaultSendCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  result_result = GGS_string ("token.mTokenCode = kToken_").add_operation (temp_0.readProperty_mDefaultSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 156)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 156)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorByDefaultAST generateDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalErrorByDefaultAST::getter_generateDefaultSendCode (const GGS_string constinArgument_inScannerClassName,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalErrorByDefaultAST temp_0 = this ;
  result_result = GGS_string ("lexicalError (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 164)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 164)).add_operation (temp_0.readProperty_mDefaultErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 164)).add_operation (GGS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 164)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalImplicitRuleAST generateLexicalRuleCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalImplicitRuleAST::getter_generateLexicalRuleCode (const GGS_string constinArgument_inScannerClassName,
                                                                        const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GGS_tokenSortedlist var_tokenSortedList_9023 ;
  const GGS_lexicalImplicitRuleAST temp_0 = this ;
  GGS_lexicalExplicitTokenListMap joker_9015 ; // Joker input parameter
  GGS_bool joker_9039 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_9015, var_tokenSortedList_9023, joker_9039, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 199)) ;
  result_result = GGS_string::makeEmptyString () ;
  DownEnumerator_tokenSortedlist enumerator_9074 (var_tokenSortedList_9023) ;
  while (enumerator_9074.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("if (testForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 202)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 202)) ;
    result_result.plusAssignOperation(enumerator_9074.current_mName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 203)) ;
    result_result.plusAssignOperation(GGS_string (", true)) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 204)) ;
    result_result.plusAssignOperation(GGS_string ("  token.mTokenCode = kToken_").add_operation (enumerator_9074.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 205)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 205)) ;
    result_result.plusAssignOperation(GGS_string ("  enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 206)) ;
    result_result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 207)) ;
    enumerator_9074.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalImplicitRuleAST lexicalRuleUsesLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalImplicitRuleAST::getter_lexicalRuleUsesLoopLocalVar (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalExplicitRuleAST generateLexicalRuleCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalExplicitRuleAST::getter_generateLexicalRuleCode (const GGS_string constinArgument_inScannerClassName,
                                                                        const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("if (") ;
  const GGS_lexicalExplicitRuleAST temp_0 = this ;
  result_result.plusAssignOperation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 224)) ;
  result_result.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 225)) ;
  {
  result_result.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 226)) ;
  }
  const GGS_lexicalExplicitRuleAST temp_1 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_10223 (temp_1.readProperty_mInstructionList ()) ;
  while (enumerator_10223.hasCurrentObject ()) {
    result_result.plusAssignOperation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_10223.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 228)) ;
    enumerator_10223.gotoNextObject () ;
  }
  {
  result_result.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 230)) ;
  }
  result_result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 231)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalExplicitRuleAST lexicalRuleUsesLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalExplicitRuleAST::getter_lexicalRuleUsesLoopLocalVar (Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
  const GGS_lexicalExplicitRuleAST temp_0 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_10635 (temp_0.readProperty_mInstructionList ()) ;
  bool bool_1 = result_result.operator_not (SOURCE_FILE ("lexiqueGeneration.galgas", 238)).isValidAndTrue () ;
  if (enumerator_10635.hasCurrentObject () && bool_1) {
    while (enumerator_10635.hasCurrentObject () && bool_1) {
      result_result = callExtensionGetter_lexicalInstructionUsesLoopLocalVariable ((const cPtr_lexicalInstructionAST *) enumerator_10635.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 239)) ;
      enumerator_10635.gotoNextObject () ;
      if (enumerator_10635.hasCurrentObject ()) {
        bool_1 = result_result.operator_not (SOURCE_FILE ("lexiqueGeneration.galgas", 238)).isValidAndTrue () ;
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

GGS_string cPtr_lexicalOrExpressionAST::getter_generateObjcCocoaConditionCode (const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalOrExpressionAST temp_0 = this ;
  result_result = callExtensionGetter_generateObjcCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 37)) ;
  result_result.plusAssignOperation(GGS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 38)) ;
  const GGS_lexicalOrExpressionAST temp_1 = this ;
  result_result.plusAssignOperation(callExtensionGetter_generateObjcCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 39)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterIntervalMatchAST generateObjcCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterIntervalMatchAST::getter_generateObjcCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string::makeEmptyString () ;
  result_outGeneratedCode = GGS_string ("[self testForInputFromChar:") ;
  const GGS_lexicalCharacterIntervalMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssignOperation(temp_0.readProperty_mLowerBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 49)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 49)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (" toChar:"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 50)) ;
  const GGS_lexicalCharacterIntervalMatchAST temp_1 = this ;
  result_outGeneratedCode.plusAssignOperation(temp_1.readProperty_mUpperBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 51)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 51)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 51)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 52)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringMatchAST generateObjcCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStringMatchAST::getter_generateObjcCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalStringMatchAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("[self testForInputString:@").add_operation (temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 60)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (" advance:YES]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 61)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringNotMatchAST generateObjcCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStringNotMatchAST::getter_generateObjcCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("[self notTestForInputString:@") ;
  const GGS_lexicalStringNotMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssignOperation(temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 70)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 70)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (" error:& scanningOk]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 71)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterMatchAST generateObjcCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterMatchAST::getter_generateObjcCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("[self testForInputChar:") ;
  const GGS_lexicalCharacterMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssignOperation(temp_0.readProperty_mCharacter ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 80)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 80)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 80)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 81)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterSetMatchAST generateObjcCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterSetMatchAST::getter_generateObjcCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("[self testForCharWithFunction: ") ;
  const GGS_lexicalCharacterSetMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssignOperation(temp_0.readProperty_mCharacterSetName ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 89)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 90)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalOrExpressionAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalOrExpressionAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalOrExpressionAST temp_0 = this ;
  result_result = callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 106)) ;
  result_result.plusAssignOperation(GGS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 107)) ;
  const GGS_lexicalOrExpressionAST temp_1 = this ;
  result_result.plusAssignOperation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 108)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterIntervalMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterIntervalMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string::makeEmptyString () ;
  result_outGeneratedCode = GGS_string ("self.testForInputFromChar (") ;
  const GGS_lexicalCharacterIntervalMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssignOperation(temp_0.readProperty_mLowerBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 118)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 118)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (", toChar:"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 119)) ;
  const GGS_lexicalCharacterIntervalMatchAST temp_1 = this ;
  result_outGeneratedCode.plusAssignOperation(temp_1.readProperty_mUpperBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 120)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 120)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 121)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStringMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalStringMatchAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("self.testForInputString (").add_operation (temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 129)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (", advance: true)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 130)) ;
//---
  return result_outGeneratedCode ;
}


