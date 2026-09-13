#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-19.h"

//--------------------------------------------------------------------------------------------------
// @filewrapperTemplateInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperTemplateInExpressionForGeneration::objectCompare (const GGS_filewrapperTemplateInExpressionForGeneration & inOperand) const {
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

GGS_filewrapperTemplateInExpressionForGeneration::GGS_filewrapperTemplateInExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_filewrapperTemplateInExpressionForGeneration GGS_filewrapperTemplateInExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_string & in_mFilewrapperName,
                          const GGS_string & in_mFilewrapperTemplateName,
                          const GGS_semanticExpressionListForGeneration & in_mActualOutputParameterList,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_filewrapperTemplateInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_filewrapperTemplateInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->filewrapperTemplateInExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mFilewrapperName, in_mFilewrapperTemplateName, in_mActualOutputParameterList, inCompiler) ;
  const GGS_filewrapperTemplateInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionForGeneration::
filewrapperTemplateInExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                       const GGS_location & in_mLocation,
                                                                       const GGS_string & in_mFilewrapperName,
                                                                       const GGS_string & in_mFilewrapperTemplateName,
                                                                       const GGS_semanticExpressionListForGeneration & in_mActualOutputParameterList,
                                                                       Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperTemplateName = in_mFilewrapperTemplateName ;
  mProperty_mActualOutputParameterList = in_mActualOutputParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateInExpressionForGeneration::GGS_filewrapperTemplateInExpressionForGeneration (const cPtr_filewrapperTemplateInExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperTemplateInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_filewrapperTemplateInExpressionForGeneration::readProperty_mFilewrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_filewrapperTemplateInExpressionForGeneration * p = (cPtr_filewrapperTemplateInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionForGeneration) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_filewrapperTemplateInExpressionForGeneration::readProperty_mFilewrapperTemplateName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_filewrapperTemplateInExpressionForGeneration * p = (cPtr_filewrapperTemplateInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionForGeneration) ;
    return p->mProperty_mFilewrapperTemplateName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_filewrapperTemplateInExpressionForGeneration::readProperty_mActualOutputParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionListForGeneration () ;
  }else{
    cPtr_filewrapperTemplateInExpressionForGeneration * p = (cPtr_filewrapperTemplateInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionForGeneration) ;
    return p->mProperty_mActualOutputParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperTemplateInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperTemplateInExpressionForGeneration::cPtr_filewrapperTemplateInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperTemplateName (),
mProperty_mActualOutputParameterList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_filewrapperTemplateInExpressionForGeneration::cPtr_filewrapperTemplateInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                      const GGS_location & in_mLocation,
                                                                                                      const GGS_string & in_mFilewrapperName,
                                                                                                      const GGS_string & in_mFilewrapperTemplateName,
                                                                                                      const GGS_semanticExpressionListForGeneration & in_mActualOutputParameterList,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperTemplateName (),
mProperty_mActualOutputParameterList () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperTemplateName = in_mFilewrapperTemplateName ;
  mProperty_mActualOutputParameterList = in_mActualOutputParameterList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_filewrapperTemplateInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionForGeneration ;
}

void cPtr_filewrapperTemplateInExpressionForGeneration::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@filewrapperTemplateInExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperTemplateName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualOutputParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_filewrapperTemplateInExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_filewrapperTemplateInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mFilewrapperName, mProperty_mFilewrapperTemplateName, mProperty_mActualOutputParameterList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_filewrapperTemplateInExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFilewrapperName.printNonNullClassInstanceProperties ("mFilewrapperName") ;
    mProperty_mFilewrapperTemplateName.printNonNullClassInstanceProperties ("mFilewrapperTemplateName") ;
    mProperty_mActualOutputParameterList.printNonNullClassInstanceProperties ("mActualOutputParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @filewrapperTemplateInExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionForGeneration ("filewrapperTemplateInExpressionForGeneration",
                                                                                                 & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperTemplateInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperTemplateInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperTemplateInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateInExpressionForGeneration GGS_filewrapperTemplateInExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_filewrapperTemplateInExpressionForGeneration result ;
  const GGS_filewrapperTemplateInExpressionForGeneration * p = (const GGS_filewrapperTemplateInExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperTemplateInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @filewrapperStaticPathInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperStaticPathInExpressionForGeneration::objectCompare (const GGS_filewrapperStaticPathInExpressionForGeneration & inOperand) const {
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

GGS_filewrapperStaticPathInExpressionForGeneration::GGS_filewrapperStaticPathInExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_filewrapperStaticPathInExpressionForGeneration GGS_filewrapperStaticPathInExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_string & in_mFilewrapperName,
                          const GGS_uint & in_mFilewrapperFileIndex,
                          const GGS_bool & in_mIsTextFile,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_filewrapperStaticPathInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_filewrapperStaticPathInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->filewrapperStaticPathInExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mFilewrapperName, in_mFilewrapperFileIndex, in_mIsTextFile, inCompiler) ;
  const GGS_filewrapperStaticPathInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperStaticPathInExpressionForGeneration::
filewrapperStaticPathInExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                         const GGS_location & in_mLocation,
                                                                         const GGS_string & in_mFilewrapperName,
                                                                         const GGS_uint & in_mFilewrapperFileIndex,
                                                                         const GGS_bool & in_mIsTextFile,
                                                                         Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperFileIndex = in_mFilewrapperFileIndex ;
  mProperty_mIsTextFile = in_mIsTextFile ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperStaticPathInExpressionForGeneration::GGS_filewrapperStaticPathInExpressionForGeneration (const cPtr_filewrapperStaticPathInExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_filewrapperStaticPathInExpressionForGeneration::readProperty_mFilewrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_filewrapperStaticPathInExpressionForGeneration * p = (cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_filewrapperStaticPathInExpressionForGeneration::readProperty_mFilewrapperFileIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_filewrapperStaticPathInExpressionForGeneration * p = (cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
    return p->mProperty_mFilewrapperFileIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_filewrapperStaticPathInExpressionForGeneration::readProperty_mIsTextFile (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_filewrapperStaticPathInExpressionForGeneration * p = (cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
    return p->mProperty_mIsTextFile ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperStaticPathInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperStaticPathInExpressionForGeneration::cPtr_filewrapperStaticPathInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperFileIndex (),
mProperty_mIsTextFile () {
}

//--------------------------------------------------------------------------------------------------

cPtr_filewrapperStaticPathInExpressionForGeneration::cPtr_filewrapperStaticPathInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                          const GGS_location & in_mLocation,
                                                                                                          const GGS_string & in_mFilewrapperName,
                                                                                                          const GGS_uint & in_mFilewrapperFileIndex,
                                                                                                          const GGS_bool & in_mIsTextFile,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperFileIndex (),
mProperty_mIsTextFile () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperFileIndex = in_mFilewrapperFileIndex ;
  mProperty_mIsTextFile = in_mIsTextFile ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_filewrapperStaticPathInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration ;
}

void cPtr_filewrapperStaticPathInExpressionForGeneration::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@filewrapperStaticPathInExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperFileIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsTextFile.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_filewrapperStaticPathInExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_filewrapperStaticPathInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mFilewrapperName, mProperty_mFilewrapperFileIndex, mProperty_mIsTextFile, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_filewrapperStaticPathInExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFilewrapperName.printNonNullClassInstanceProperties ("mFilewrapperName") ;
    mProperty_mFilewrapperFileIndex.printNonNullClassInstanceProperties ("mFilewrapperFileIndex") ;
    mProperty_mIsTextFile.printNonNullClassInstanceProperties ("mIsTextFile") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @filewrapperStaticPathInExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration ("filewrapperStaticPathInExpressionForGeneration",
                                                                                                   & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperStaticPathInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperStaticPathInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperStaticPathInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperStaticPathInExpressionForGeneration GGS_filewrapperStaticPathInExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_filewrapperStaticPathInExpressionForGeneration result ;
  const GGS_filewrapperStaticPathInExpressionForGeneration * p = (const GGS_filewrapperStaticPathInExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperStaticPathInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperStaticPathInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @initializerCallAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_initializerCallAST::objectCompare (const GGS_initializerCallAST & inOperand) const {
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

GGS_initializerCallAST::GGS_initializerCallAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_initializerCallAST GGS_initializerCallAST::
init_21__21__21_ (const GGS_lstring & in_mTypeName,
                  const GGS_actualOutputArgumentList & in_mExpressions,
                  const GGS_location & in_mEndOfExpressions,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_initializerCallAST * object = nullptr ;
  macroMyNew (object, cPtr_initializerCallAST (inCompiler COMMA_THERE)) ;
  object->initializerCallAST_init_21__21__21_ (in_mTypeName, in_mExpressions, in_mEndOfExpressions, inCompiler) ;
  const GGS_initializerCallAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_initializerCallAST::
initializerCallAST_init_21__21__21_ (const GGS_lstring & in_mTypeName,
                                     const GGS_actualOutputArgumentList & in_mExpressions,
                                     const GGS_location & in_mEndOfExpressions,
                                     Compiler * /* inCompiler */) {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mExpressions = in_mExpressions ;
  mProperty_mEndOfExpressions = in_mEndOfExpressions ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallAST::GGS_initializerCallAST (const cPtr_initializerCallAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_initializerCallAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_initializerCallAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_initializerCallAST * p = (cPtr_initializerCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_initializerCallAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList GGS_initializerCallAST::readProperty_mExpressions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualOutputArgumentList () ;
  }else{
    cPtr_initializerCallAST * p = (cPtr_initializerCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_initializerCallAST) ;
    return p->mProperty_mExpressions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_initializerCallAST::readProperty_mEndOfExpressions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_initializerCallAST * p = (cPtr_initializerCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_initializerCallAST) ;
    return p->mProperty_mEndOfExpressions ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @initializerCallAST class
//--------------------------------------------------------------------------------------------------

cPtr_initializerCallAST::cPtr_initializerCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mExpressions (),
mProperty_mEndOfExpressions () {
}

//--------------------------------------------------------------------------------------------------

cPtr_initializerCallAST::cPtr_initializerCallAST (const GGS_lstring & in_mTypeName,
                                                  const GGS_actualOutputArgumentList & in_mExpressions,
                                                  const GGS_location & in_mEndOfExpressions,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mExpressions (),
mProperty_mEndOfExpressions () {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mExpressions = in_mExpressions ;
  mProperty_mEndOfExpressions = in_mEndOfExpressions ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_initializerCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initializerCallAST ;
}

void cPtr_initializerCallAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@initializerCallAST:") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfExpressions.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_initializerCallAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_initializerCallAST (mProperty_mTypeName, mProperty_mExpressions, mProperty_mEndOfExpressions, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_initializerCallAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mExpressions.printNonNullClassInstanceProperties ("mExpressions") ;
    mProperty_mEndOfExpressions.printNonNullClassInstanceProperties ("mEndOfExpressions") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @initializerCallAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_initializerCallAST ("initializerCallAST",
                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_initializerCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initializerCallAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_initializerCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_initializerCallAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallAST GGS_initializerCallAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_initializerCallAST result ;
  const GGS_initializerCallAST * p = (const GGS_initializerCallAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_initializerCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initializerCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @initializerCallForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_initializerCallForGeneration::objectCompare (const GGS_initializerCallForGeneration & inOperand) const {
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

GGS_initializerCallForGeneration::GGS_initializerCallForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_initializerCallForGeneration GGS_initializerCallForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                      const GGS_location & in_mLocation,
                      const GGS_string & in_initializerName,
                      const GGS_semanticExpressionListForGeneration & in_mEffectiveParameterList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_initializerCallForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_initializerCallForGeneration (inCompiler COMMA_THERE)) ;
  object->initializerCallForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_initializerName, in_mEffectiveParameterList, inCompiler) ;
  const GGS_initializerCallForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_initializerCallForGeneration::
initializerCallForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                   const GGS_location & in_mLocation,
                                                   const GGS_string & in_initializerName,
                                                   const GGS_semanticExpressionListForGeneration & in_mEffectiveParameterList,
                                                   Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_initializerName = in_initializerName ;
  mProperty_mEffectiveParameterList = in_mEffectiveParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallForGeneration::GGS_initializerCallForGeneration (const cPtr_initializerCallForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_initializerCallForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_initializerCallForGeneration::readProperty_initializerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_initializerCallForGeneration * p = (cPtr_initializerCallForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_initializerCallForGeneration) ;
    return p->mProperty_initializerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_initializerCallForGeneration::readProperty_mEffectiveParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionListForGeneration () ;
  }else{
    cPtr_initializerCallForGeneration * p = (cPtr_initializerCallForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_initializerCallForGeneration) ;
    return p->mProperty_mEffectiveParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @initializerCallForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_initializerCallForGeneration::cPtr_initializerCallForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_initializerName (),
mProperty_mEffectiveParameterList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_initializerCallForGeneration::cPtr_initializerCallForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                      const GGS_location & in_mLocation,
                                                                      const GGS_string & in_initializerName,
                                                                      const GGS_semanticExpressionListForGeneration & in_mEffectiveParameterList,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_initializerName (),
mProperty_mEffectiveParameterList () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_initializerName = in_initializerName ;
  mProperty_mEffectiveParameterList = in_mEffectiveParameterList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_initializerCallForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initializerCallForGeneration ;
}

void cPtr_initializerCallForGeneration::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@initializerCallForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_initializerName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEffectiveParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_initializerCallForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_initializerCallForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_initializerName, mProperty_mEffectiveParameterList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_initializerCallForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_initializerName.printNonNullClassInstanceProperties ("initializerName") ;
    mProperty_mEffectiveParameterList.printNonNullClassInstanceProperties ("mEffectiveParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @initializerCallForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_initializerCallForGeneration ("initializerCallForGeneration",
                                                                                 & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_initializerCallForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initializerCallForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_initializerCallForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_initializerCallForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerCallForGeneration GGS_initializerCallForGeneration::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_initializerCallForGeneration result ;
  const GGS_initializerCallForGeneration * p = (const GGS_initializerCallForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_initializerCallForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initializerCallForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfInExpressionForGeneration::objectCompare (const GGS_selfInExpressionForGeneration & inOperand) const {
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

GGS_selfInExpressionForGeneration::GGS_selfInExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfInExpressionForGeneration GGS_selfInExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_string & in_mSelfCppName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_selfInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_selfInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->selfInExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mSelfCppName, inCompiler) ;
  const GGS_selfInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionForGeneration::
selfInExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                const GGS_location & in_mLocation,
                                                const GGS_string & in_mSelfCppName,
                                                Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mSelfCppName = in_mSelfCppName ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfInExpressionForGeneration::GGS_selfInExpressionForGeneration (const cPtr_selfInExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_selfInExpressionForGeneration::readProperty_mSelfCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_selfInExpressionForGeneration * p = (cPtr_selfInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfInExpressionForGeneration) ;
    return p->mProperty_mSelfCppName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_selfInExpressionForGeneration::cPtr_selfInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mSelfCppName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selfInExpressionForGeneration::cPtr_selfInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                        const GGS_location & in_mLocation,
                                                                        const GGS_string & in_mSelfCppName,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mSelfCppName () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mSelfCppName = in_mSelfCppName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_selfInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfInExpressionForGeneration ;
}

void cPtr_selfInExpressionForGeneration::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@selfInExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelfCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_selfInExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mSelfCppName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfInExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mSelfCppName.printNonNullClassInstanceProperties ("mSelfCppName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selfInExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfInExpressionForGeneration ("selfInExpressionForGeneration",
                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfInExpressionForGeneration GGS_selfInExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_selfInExpressionForGeneration result ;
  const GGS_selfInExpressionForGeneration * p = (const GGS_selfInExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @trueExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_trueExpressionForGeneration::objectCompare (const GGS_trueExpressionForGeneration & inOperand) const {
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

GGS_trueExpressionForGeneration::GGS_trueExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_trueExpressionForGeneration GGS_trueExpressionForGeneration::
init_21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
              const GGS_location & in_mLocation,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_trueExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_trueExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->trueExpressionForGeneration_init_21__21_ (in_mResultType, in_mLocation, inCompiler) ;
  const GGS_trueExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionForGeneration::
trueExpressionForGeneration_init_21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                          const GGS_location & in_mLocation,
                                          Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpressionForGeneration::GGS_trueExpressionForGeneration (const cPtr_trueExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_trueExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @trueExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_trueExpressionForGeneration::cPtr_trueExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_trueExpressionForGeneration::cPtr_trueExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                    const GGS_location & in_mLocation,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_trueExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpressionForGeneration ;
}

void cPtr_trueExpressionForGeneration::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@trueExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_trueExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_trueExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_trueExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @trueExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_trueExpressionForGeneration ("trueExpressionForGeneration",
                                                                                & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_trueExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_trueExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_trueExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpressionForGeneration GGS_trueExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_trueExpressionForGeneration result ;
  const GGS_trueExpressionForGeneration * p = (const GGS_trueExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_trueExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("trueExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @falseExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_falseExpressionForGeneration::objectCompare (const GGS_falseExpressionForGeneration & inOperand) const {
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

GGS_falseExpressionForGeneration::GGS_falseExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_falseExpressionForGeneration GGS_falseExpressionForGeneration::
init_21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
              const GGS_location & in_mLocation,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_falseExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_falseExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->falseExpressionForGeneration_init_21__21_ (in_mResultType, in_mLocation, inCompiler) ;
  const GGS_falseExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionForGeneration::
falseExpressionForGeneration_init_21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                           const GGS_location & in_mLocation,
                                           Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpressionForGeneration::GGS_falseExpressionForGeneration (const cPtr_falseExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_falseExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @falseExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_falseExpressionForGeneration::cPtr_falseExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_falseExpressionForGeneration::cPtr_falseExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                      const GGS_location & in_mLocation,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_falseExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpressionForGeneration ;
}

void cPtr_falseExpressionForGeneration::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@falseExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_falseExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_falseExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_falseExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @falseExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_falseExpressionForGeneration ("falseExpressionForGeneration",
                                                                                 & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_falseExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_falseExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_falseExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpressionForGeneration GGS_falseExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_falseExpressionForGeneration result ;
  const GGS_falseExpressionForGeneration * p = (const GGS_falseExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_falseExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("falseExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticExpressionForGeneration isTrueExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_semanticExpressionForGeneration::getter_isTrueExpression (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_isTrueExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isTrueExpression (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @testDynamicClassInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_testDynamicClassInExpressionAST::objectCompare (const GGS_testDynamicClassInExpressionAST & inOperand) const {
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

GGS_testDynamicClassInExpressionAST::GGS_testDynamicClassInExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_testDynamicClassInExpressionAST GGS_testDynamicClassInExpressionAST::
init_21__21__21__21_ (const GGS_semanticExpressionAST & in_mReceiverExpression,
                      const GGS_location & in_mEndOfReceiverExpression,
                      const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                      const GGS_lstring & in_mTypeName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_testDynamicClassInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_testDynamicClassInExpressionAST (inCompiler COMMA_THERE)) ;
  object->testDynamicClassInExpressionAST_init_21__21__21__21_ (in_mReceiverExpression, in_mEndOfReceiverExpression, in_mTypeComparisonKind, in_mTypeName, inCompiler) ;
  const GGS_testDynamicClassInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionAST::
testDynamicClassInExpressionAST_init_21__21__21__21_ (const GGS_semanticExpressionAST & in_mReceiverExpression,
                                                      const GGS_location & in_mEndOfReceiverExpression,
                                                      const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                      const GGS_lstring & in_mTypeName,
                                                      Compiler * /* inCompiler */) {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mEndOfReceiverExpression = in_mEndOfReceiverExpression ;
  mProperty_mTypeComparisonKind = in_mTypeComparisonKind ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionAST::GGS_testDynamicClassInExpressionAST (const cPtr_testDynamicClassInExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_testDynamicClassInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_testDynamicClassInExpressionAST::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_testDynamicClassInExpressionAST * p = (cPtr_testDynamicClassInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_testDynamicClassInExpressionAST::readProperty_mEndOfReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_testDynamicClassInExpressionAST * p = (cPtr_testDynamicClassInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
    return p->mProperty_mEndOfReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicTypeComparisonKind GGS_testDynamicClassInExpressionAST::readProperty_mTypeComparisonKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_dynamicTypeComparisonKind () ;
  }else{
    cPtr_testDynamicClassInExpressionAST * p = (cPtr_testDynamicClassInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
    return p->mProperty_mTypeComparisonKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_testDynamicClassInExpressionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_testDynamicClassInExpressionAST * p = (cPtr_testDynamicClassInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @testDynamicClassInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_testDynamicClassInExpressionAST::cPtr_testDynamicClassInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mEndOfReceiverExpression (),
mProperty_mTypeComparisonKind (),
mProperty_mTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_testDynamicClassInExpressionAST::cPtr_testDynamicClassInExpressionAST (const GGS_semanticExpressionAST & in_mReceiverExpression,
                                                                            const GGS_location & in_mEndOfReceiverExpression,
                                                                            const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                            const GGS_lstring & in_mTypeName,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mEndOfReceiverExpression (),
mProperty_mTypeComparisonKind (),
mProperty_mTypeName () {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mEndOfReceiverExpression = in_mEndOfReceiverExpression ;
  mProperty_mTypeComparisonKind = in_mTypeComparisonKind ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_testDynamicClassInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST ;
}

void cPtr_testDynamicClassInExpressionAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@testDynamicClassInExpressionAST:") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeComparisonKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_testDynamicClassInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_testDynamicClassInExpressionAST (mProperty_mReceiverExpression, mProperty_mEndOfReceiverExpression, mProperty_mTypeComparisonKind, mProperty_mTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_testDynamicClassInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mEndOfReceiverExpression.printNonNullClassInstanceProperties ("mEndOfReceiverExpression") ;
    mProperty_mTypeComparisonKind.printNonNullClassInstanceProperties ("mTypeComparisonKind") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @testDynamicClassInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST ("testDynamicClassInExpressionAST",
                                                                                    & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_testDynamicClassInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_testDynamicClassInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_testDynamicClassInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionAST GGS_testDynamicClassInExpressionAST::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_testDynamicClassInExpressionAST result ;
  const GGS_testDynamicClassInExpressionAST * p = (const GGS_testDynamicClassInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_testDynamicClassInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testDynamicClassInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @castInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_castInExpressionAST::objectCompare (const GGS_castInExpressionAST & inOperand) const {
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

GGS_castInExpressionAST::GGS_castInExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_castInExpressionAST GGS_castInExpressionAST::
init_21__21__21_ (const GGS_semanticExpressionAST & in_mReceiverExpression,
                  const GGS_location & in_mEndOfReceiverExpression,
                  const GGS_lstring & in_mTypeName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_castInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_castInExpressionAST (inCompiler COMMA_THERE)) ;
  object->castInExpressionAST_init_21__21__21_ (in_mReceiverExpression, in_mEndOfReceiverExpression, in_mTypeName, inCompiler) ;
  const GGS_castInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionAST::
castInExpressionAST_init_21__21__21_ (const GGS_semanticExpressionAST & in_mReceiverExpression,
                                      const GGS_location & in_mEndOfReceiverExpression,
                                      const GGS_lstring & in_mTypeName,
                                      Compiler * /* inCompiler */) {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mEndOfReceiverExpression = in_mEndOfReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionAST::GGS_castInExpressionAST (const cPtr_castInExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_castInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_castInExpressionAST::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_castInExpressionAST * p = (cPtr_castInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_castInExpressionAST::readProperty_mEndOfReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_castInExpressionAST * p = (cPtr_castInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionAST) ;
    return p->mProperty_mEndOfReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_castInExpressionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_castInExpressionAST * p = (cPtr_castInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @castInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_castInExpressionAST::cPtr_castInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mEndOfReceiverExpression (),
mProperty_mTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_castInExpressionAST::cPtr_castInExpressionAST (const GGS_semanticExpressionAST & in_mReceiverExpression,
                                                    const GGS_location & in_mEndOfReceiverExpression,
                                                    const GGS_lstring & in_mTypeName,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mEndOfReceiverExpression (),
mProperty_mTypeName () {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mEndOfReceiverExpression = in_mEndOfReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_castInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionAST ;
}

void cPtr_castInExpressionAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@castInExpressionAST:") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_castInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_castInExpressionAST (mProperty_mReceiverExpression, mProperty_mEndOfReceiverExpression, mProperty_mTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_castInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mEndOfReceiverExpression.printNonNullClassInstanceProperties ("mEndOfReceiverExpression") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @castInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_castInExpressionAST ("castInExpressionAST",
                                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_castInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_castInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_castInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionAST GGS_castInExpressionAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_castInExpressionAST result ;
  const GGS_castInExpressionAST * p = (const GGS_castInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_castInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @testDynamicClassInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_testDynamicClassInExpressionForGeneration::objectCompare (const GGS_testDynamicClassInExpressionForGeneration & inOperand) const {
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

GGS_testDynamicClassInExpressionForGeneration::GGS_testDynamicClassInExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_testDynamicClassInExpressionForGeneration GGS_testDynamicClassInExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                          const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                          const GGS_unifiedTypeMapEntry & in_mCastType,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_testDynamicClassInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_testDynamicClassInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->testDynamicClassInExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mReceiverExpression, in_mTypeComparisonKind, in_mCastType, inCompiler) ;
  const GGS_testDynamicClassInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionForGeneration::
testDynamicClassInExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                    const GGS_location & in_mLocation,
                                                                    const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                    const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                    const GGS_unifiedTypeMapEntry & in_mCastType,
                                                                    Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mTypeComparisonKind = in_mTypeComparisonKind ;
  mProperty_mCastType = in_mCastType ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionForGeneration::GGS_testDynamicClassInExpressionForGeneration (const cPtr_testDynamicClassInExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_testDynamicClassInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_testDynamicClassInExpressionForGeneration::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_testDynamicClassInExpressionForGeneration * p = (cPtr_testDynamicClassInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicTypeComparisonKind GGS_testDynamicClassInExpressionForGeneration::readProperty_mTypeComparisonKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_dynamicTypeComparisonKind () ;
  }else{
    cPtr_testDynamicClassInExpressionForGeneration * p = (cPtr_testDynamicClassInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionForGeneration) ;
    return p->mProperty_mTypeComparisonKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_testDynamicClassInExpressionForGeneration::readProperty_mCastType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_testDynamicClassInExpressionForGeneration * p = (cPtr_testDynamicClassInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionForGeneration) ;
    return p->mProperty_mCastType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @testDynamicClassInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_testDynamicClassInExpressionForGeneration::cPtr_testDynamicClassInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mTypeComparisonKind (),
mProperty_mCastType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_testDynamicClassInExpressionForGeneration::cPtr_testDynamicClassInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                const GGS_location & in_mLocation,
                                                                                                const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                                const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                const GGS_unifiedTypeMapEntry & in_mCastType,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mTypeComparisonKind (),
mProperty_mCastType () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mTypeComparisonKind = in_mTypeComparisonKind ;
  mProperty_mCastType = in_mCastType ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_testDynamicClassInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration ;
}

void cPtr_testDynamicClassInExpressionForGeneration::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@testDynamicClassInExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeComparisonKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCastType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_testDynamicClassInExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_testDynamicClassInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mReceiverExpression, mProperty_mTypeComparisonKind, mProperty_mCastType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_testDynamicClassInExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mTypeComparisonKind.printNonNullClassInstanceProperties ("mTypeComparisonKind") ;
    mProperty_mCastType.printNonNullClassInstanceProperties ("mCastType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @testDynamicClassInExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration ("testDynamicClassInExpressionForGeneration",
                                                                                              & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_testDynamicClassInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_testDynamicClassInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_testDynamicClassInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionForGeneration GGS_testDynamicClassInExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_testDynamicClassInExpressionForGeneration result ;
  const GGS_testDynamicClassInExpressionForGeneration * p = (const GGS_testDynamicClassInExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_testDynamicClassInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testDynamicClassInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @extractObjectInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extractObjectInExpressionForGeneration::objectCompare (const GGS_extractObjectInExpressionForGeneration & inOperand) const {
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

GGS_extractObjectInExpressionForGeneration::GGS_extractObjectInExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_extractObjectInExpressionForGeneration GGS_extractObjectInExpressionForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                      const GGS_location & in_mLocation,
                      const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                      const GGS_string & in_mTypeName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_extractObjectInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_extractObjectInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->extractObjectInExpressionForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_mReceiverExpression, in_mTypeName, inCompiler) ;
  const GGS_extractObjectInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_extractObjectInExpressionForGeneration::
extractObjectInExpressionForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                             const GGS_location & in_mLocation,
                                                             const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                             const GGS_string & in_mTypeName,
                                                             Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractObjectInExpressionForGeneration::GGS_extractObjectInExpressionForGeneration (const cPtr_extractObjectInExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extractObjectInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_extractObjectInExpressionForGeneration::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_extractObjectInExpressionForGeneration * p = (cPtr_extractObjectInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extractObjectInExpressionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_extractObjectInExpressionForGeneration::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_extractObjectInExpressionForGeneration * p = (cPtr_extractObjectInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extractObjectInExpressionForGeneration) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @extractObjectInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_extractObjectInExpressionForGeneration::cPtr_extractObjectInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_extractObjectInExpressionForGeneration::cPtr_extractObjectInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                          const GGS_location & in_mLocation,
                                                                                          const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                          const GGS_string & in_mTypeName,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mTypeName () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_extractObjectInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration ;
}

void cPtr_extractObjectInExpressionForGeneration::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@extractObjectInExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_extractObjectInExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_extractObjectInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mReceiverExpression, mProperty_mTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_extractObjectInExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @extractObjectInExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration ("extractObjectInExpressionForGeneration",
                                                                                           & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extractObjectInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extractObjectInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extractObjectInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractObjectInExpressionForGeneration GGS_extractObjectInExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_extractObjectInExpressionForGeneration result ;
  const GGS_extractObjectInExpressionForGeneration * p = (const GGS_extractObjectInExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extractObjectInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extractObjectInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @bangExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bangExpressionForGeneration::objectCompare (const GGS_bangExpressionForGeneration & inOperand) const {
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

GGS_bangExpressionForGeneration::GGS_bangExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_bangExpressionForGeneration GGS_bangExpressionForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                      const GGS_location & in_mLocation,
                      const GGS_semanticExpressionForGeneration & in_mExpression,
                      const GGS_string & in_mReceiverTypeName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_bangExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_bangExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->bangExpressionForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_mExpression, in_mReceiverTypeName, inCompiler) ;
  const GGS_bangExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_bangExpressionForGeneration::
bangExpressionForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                  const GGS_location & in_mLocation,
                                                  const GGS_semanticExpressionForGeneration & in_mExpression,
                                                  const GGS_string & in_mReceiverTypeName,
                                                  Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bangExpressionForGeneration::GGS_bangExpressionForGeneration (const cPtr_bangExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bangExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_bangExpressionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_bangExpressionForGeneration * p = (cPtr_bangExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bangExpressionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_bangExpressionForGeneration::readProperty_mReceiverTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_bangExpressionForGeneration * p = (cPtr_bangExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bangExpressionForGeneration) ;
    return p->mProperty_mReceiverTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @bangExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_bangExpressionForGeneration::cPtr_bangExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mReceiverTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_bangExpressionForGeneration::cPtr_bangExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                    const GGS_location & in_mLocation,
                                                                    const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                    const GGS_string & in_mReceiverTypeName,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mReceiverTypeName () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mReceiverTypeName = in_mReceiverTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_bangExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bangExpressionForGeneration ;
}

void cPtr_bangExpressionForGeneration::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@bangExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_bangExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_bangExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mExpression, mProperty_mReceiverTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_bangExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mReceiverTypeName.printNonNullClassInstanceProperties ("mReceiverTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @bangExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bangExpressionForGeneration ("bangExpressionForGeneration",
                                                                                & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bangExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bangExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bangExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bangExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bangExpressionForGeneration GGS_bangExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_bangExpressionForGeneration result ;
  const GGS_bangExpressionForGeneration * p = (const GGS_bangExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bangExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bangExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @binaryOperatorExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_binaryOperatorExpressionForGeneration::objectCompare (const GGS_binaryOperatorExpressionForGeneration & inOperand) const {
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

GGS_binaryOperatorExpressionForGeneration::GGS_binaryOperatorExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_binaryOperatorExpressionForGeneration GGS_binaryOperatorExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                          const GGS_binaryOperator & in_mOperator,
                          const GGS_semanticExpressionForGeneration & in_mRightExpression,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_binaryOperatorExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_binaryOperatorExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->binaryOperatorExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mLeftExpression, in_mOperator, in_mRightExpression, inCompiler) ;
  const GGS_binaryOperatorExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_binaryOperatorExpressionForGeneration::
binaryOperatorExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                const GGS_location & in_mLocation,
                                                                const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                const GGS_binaryOperator & in_mOperator,
                                                                const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                                Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mOperator = in_mOperator ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperatorExpressionForGeneration::GGS_binaryOperatorExpressionForGeneration (const cPtr_binaryOperatorExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_binaryOperatorExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_binaryOperatorExpressionForGeneration::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_binaryOperatorExpressionForGeneration * p = (cPtr_binaryOperatorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperatorExpressionForGeneration) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperatorExpressionForGeneration::readProperty_mOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_binaryOperator () ;
  }else{
    cPtr_binaryOperatorExpressionForGeneration * p = (cPtr_binaryOperatorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperatorExpressionForGeneration) ;
    return p->mProperty_mOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_binaryOperatorExpressionForGeneration::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_binaryOperatorExpressionForGeneration * p = (cPtr_binaryOperatorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperatorExpressionForGeneration) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @binaryOperatorExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_binaryOperatorExpressionForGeneration::cPtr_binaryOperatorExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mOperator (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_binaryOperatorExpressionForGeneration::cPtr_binaryOperatorExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                        const GGS_location & in_mLocation,
                                                                                        const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                        const GGS_binaryOperator & in_mOperator,
                                                                                        const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mOperator (),
mProperty_mRightExpression () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mOperator = in_mOperator ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_binaryOperatorExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperatorExpressionForGeneration ;
}

void cPtr_binaryOperatorExpressionForGeneration::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@binaryOperatorExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOperator.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_binaryOperatorExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_binaryOperatorExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mOperator, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_binaryOperatorExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mOperator.printNonNullClassInstanceProperties ("mOperator") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @binaryOperatorExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_binaryOperatorExpressionForGeneration ("binaryOperatorExpressionForGeneration",
                                                                                          & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_binaryOperatorExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperatorExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_binaryOperatorExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_binaryOperatorExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperatorExpressionForGeneration GGS_binaryOperatorExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_binaryOperatorExpressionForGeneration result ;
  const GGS_binaryOperatorExpressionForGeneration * p = (const GGS_binaryOperatorExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_binaryOperatorExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binaryOperatorExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @orShortExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_orShortExpressionForGeneration::objectCompare (const GGS_orShortExpressionForGeneration & inOperand) const {
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

GGS_orShortExpressionForGeneration::GGS_orShortExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_orShortExpressionForGeneration GGS_orShortExpressionForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                      const GGS_location & in_mLocation,
                      const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                      const GGS_semanticExpressionForGeneration & in_mRightExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_orShortExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_orShortExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->orShortExpressionForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_orShortExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionForGeneration::
orShortExpressionForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                     const GGS_location & in_mLocation,
                                                     const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                     const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                     Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_orShortExpressionForGeneration::GGS_orShortExpressionForGeneration (const cPtr_orShortExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orShortExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_orShortExpressionForGeneration::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_orShortExpressionForGeneration * p = (cPtr_orShortExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orShortExpressionForGeneration) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_orShortExpressionForGeneration::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_orShortExpressionForGeneration * p = (cPtr_orShortExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orShortExpressionForGeneration) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @orShortExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_orShortExpressionForGeneration::cPtr_orShortExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_orShortExpressionForGeneration::cPtr_orShortExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                          const GGS_location & in_mLocation,
                                                                          const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                          const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_orShortExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orShortExpressionForGeneration ;
}

void cPtr_orShortExpressionForGeneration::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@orShortExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_orShortExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_orShortExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_orShortExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @orShortExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_orShortExpressionForGeneration ("orShortExpressionForGeneration",
                                                                                   & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_orShortExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orShortExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_orShortExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_orShortExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orShortExpressionForGeneration GGS_orShortExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_orShortExpressionForGeneration result ;
  const GGS_orShortExpressionForGeneration * p = (const GGS_orShortExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_orShortExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orShortExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @openedSliceExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_openedSliceExpressionForGeneration::objectCompare (const GGS_openedSliceExpressionForGeneration & inOperand) const {
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

GGS_openedSliceExpressionForGeneration::GGS_openedSliceExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_openedSliceExpressionForGeneration GGS_openedSliceExpressionForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                      const GGS_location & in_mLocation,
                      const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                      const GGS_semanticExpressionForGeneration & in_mRightExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_openedSliceExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_openedSliceExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->openedSliceExpressionForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_openedSliceExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionForGeneration::
openedSliceExpressionForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                         const GGS_location & in_mLocation,
                                                         const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                         const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                         Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedSliceExpressionForGeneration::GGS_openedSliceExpressionForGeneration (const cPtr_openedSliceExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_openedSliceExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_openedSliceExpressionForGeneration::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_openedSliceExpressionForGeneration * p = (cPtr_openedSliceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionForGeneration) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_openedSliceExpressionForGeneration::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_openedSliceExpressionForGeneration * p = (cPtr_openedSliceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionForGeneration) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @openedSliceExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_openedSliceExpressionForGeneration::cPtr_openedSliceExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_openedSliceExpressionForGeneration::cPtr_openedSliceExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                  const GGS_location & in_mLocation,
                                                                                  const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                  const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_openedSliceExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration ;
}

void cPtr_openedSliceExpressionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@openedSliceExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_openedSliceExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_openedSliceExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_openedSliceExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @openedSliceExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration ("openedSliceExpressionForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_openedSliceExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_openedSliceExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_openedSliceExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedSliceExpressionForGeneration GGS_openedSliceExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_openedSliceExpressionForGeneration result ;
  const GGS_openedSliceExpressionForGeneration * p = (const GGS_openedSliceExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_openedSliceExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("openedSliceExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @closedSliceExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_closedSliceExpressionForGeneration::objectCompare (const GGS_closedSliceExpressionForGeneration & inOperand) const {
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

GGS_closedSliceExpressionForGeneration::GGS_closedSliceExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_closedSliceExpressionForGeneration GGS_closedSliceExpressionForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                      const GGS_location & in_mLocation,
                      const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                      const GGS_semanticExpressionForGeneration & in_mRightExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_closedSliceExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_closedSliceExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->closedSliceExpressionForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_closedSliceExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionForGeneration::
closedSliceExpressionForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                         const GGS_location & in_mLocation,
                                                         const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                         const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                         Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_closedSliceExpressionForGeneration::GGS_closedSliceExpressionForGeneration (const cPtr_closedSliceExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_closedSliceExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_closedSliceExpressionForGeneration::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_closedSliceExpressionForGeneration * p = (cPtr_closedSliceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionForGeneration) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_closedSliceExpressionForGeneration::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_closedSliceExpressionForGeneration * p = (cPtr_closedSliceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionForGeneration) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @closedSliceExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_closedSliceExpressionForGeneration::cPtr_closedSliceExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_closedSliceExpressionForGeneration::cPtr_closedSliceExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                  const GGS_location & in_mLocation,
                                                                                  const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                  const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_closedSliceExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration ;
}

void cPtr_closedSliceExpressionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@closedSliceExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_closedSliceExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_closedSliceExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_closedSliceExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @closedSliceExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration ("closedSliceExpressionForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_closedSliceExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_closedSliceExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_closedSliceExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_closedSliceExpressionForGeneration GGS_closedSliceExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_closedSliceExpressionForGeneration result ;
  const GGS_closedSliceExpressionForGeneration * p = (const GGS_closedSliceExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_closedSliceExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("closedSliceExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @structPropertyAccessExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structPropertyAccessExpressionAST::objectCompare (const GGS_structPropertyAccessExpressionAST & inOperand) const {
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

GGS_structPropertyAccessExpressionAST::GGS_structPropertyAccessExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_structPropertyAccessExpressionAST GGS_structPropertyAccessExpressionAST::
init_21__21__21_ (const GGS_location & in_operatorLocation,
                  const GGS_semanticExpressionAST & in_mExpression,
                  const GGS_lstring & in_propertyName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_structPropertyAccessExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_structPropertyAccessExpressionAST (inCompiler COMMA_THERE)) ;
  object->structPropertyAccessExpressionAST_init_21__21__21_ (in_operatorLocation, in_mExpression, in_propertyName, inCompiler) ;
  const GGS_structPropertyAccessExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionAST::
structPropertyAccessExpressionAST_init_21__21__21_ (const GGS_location & in_operatorLocation,
                                                    const GGS_semanticExpressionAST & in_mExpression,
                                                    const GGS_lstring & in_propertyName,
                                                    Compiler * /* inCompiler */) {
  mProperty_operatorLocation = in_operatorLocation ;
  mProperty_mExpression = in_mExpression ;
  mProperty_propertyName = in_propertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_structPropertyAccessExpressionAST::GGS_structPropertyAccessExpressionAST (const cPtr_structPropertyAccessExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structPropertyAccessExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_structPropertyAccessExpressionAST::readProperty_operatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_structPropertyAccessExpressionAST * p = (cPtr_structPropertyAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionAST) ;
    return p->mProperty_operatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_structPropertyAccessExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_structPropertyAccessExpressionAST * p = (cPtr_structPropertyAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_structPropertyAccessExpressionAST::readProperty_propertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_structPropertyAccessExpressionAST * p = (cPtr_structPropertyAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionAST) ;
    return p->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @structPropertyAccessExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_structPropertyAccessExpressionAST::cPtr_structPropertyAccessExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_operatorLocation (),
mProperty_mExpression (),
mProperty_propertyName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_structPropertyAccessExpressionAST::cPtr_structPropertyAccessExpressionAST (const GGS_location & in_operatorLocation,
                                                                                const GGS_semanticExpressionAST & in_mExpression,
                                                                                const GGS_lstring & in_propertyName,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_operatorLocation (),
mProperty_mExpression (),
mProperty_propertyName () {
  mProperty_operatorLocation = in_operatorLocation ;
  mProperty_mExpression = in_mExpression ;
  mProperty_propertyName = in_propertyName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_structPropertyAccessExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST ;
}

void cPtr_structPropertyAccessExpressionAST::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@structPropertyAccessExpressionAST:") ;
  mProperty_operatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_propertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_structPropertyAccessExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_structPropertyAccessExpressionAST (mProperty_operatorLocation, mProperty_mExpression, mProperty_propertyName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_structPropertyAccessExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_operatorLocation.printNonNullClassInstanceProperties ("operatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_propertyName.printNonNullClassInstanceProperties ("propertyName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @structPropertyAccessExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST ("structPropertyAccessExpressionAST",
                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_structPropertyAccessExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_structPropertyAccessExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_structPropertyAccessExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structPropertyAccessExpressionAST GGS_structPropertyAccessExpressionAST::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_structPropertyAccessExpressionAST result ;
  const GGS_structPropertyAccessExpressionAST * p = (const GGS_structPropertyAccessExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_structPropertyAccessExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structPropertyAccessExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @propertyAccessExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_propertyAccessExpressionForGeneration::objectCompare (const GGS_propertyAccessExpressionForGeneration & inOperand) const {
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

GGS_propertyAccessExpressionForGeneration::GGS_propertyAccessExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_propertyAccessExpressionForGeneration GGS_propertyAccessExpressionForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                      const GGS_location & in_mLocation,
                      const GGS_semanticExpressionForGeneration & in_expression,
                      const GGS_string & in_structFieldName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_propertyAccessExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_propertyAccessExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->propertyAccessExpressionForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_expression, in_structFieldName, inCompiler) ;
  const GGS_propertyAccessExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_propertyAccessExpressionForGeneration::
propertyAccessExpressionForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                            const GGS_location & in_mLocation,
                                                            const GGS_semanticExpressionForGeneration & in_expression,
                                                            const GGS_string & in_structFieldName,
                                                            Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_expression = in_expression ;
  mProperty_structFieldName = in_structFieldName ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessExpressionForGeneration::GGS_propertyAccessExpressionForGeneration (const cPtr_propertyAccessExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_propertyAccessExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_propertyAccessExpressionForGeneration::readProperty_expression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_propertyAccessExpressionForGeneration * p = (cPtr_propertyAccessExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_propertyAccessExpressionForGeneration) ;
    return p->mProperty_expression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_propertyAccessExpressionForGeneration::readProperty_structFieldName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_propertyAccessExpressionForGeneration * p = (cPtr_propertyAccessExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_propertyAccessExpressionForGeneration) ;
    return p->mProperty_structFieldName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @propertyAccessExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_propertyAccessExpressionForGeneration::cPtr_propertyAccessExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_expression (),
mProperty_structFieldName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_propertyAccessExpressionForGeneration::cPtr_propertyAccessExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                        const GGS_location & in_mLocation,
                                                                                        const GGS_semanticExpressionForGeneration & in_expression,
                                                                                        const GGS_string & in_structFieldName,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_expression (),
mProperty_structFieldName () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_expression = in_expression ;
  mProperty_structFieldName = in_structFieldName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_propertyAccessExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyAccessExpressionForGeneration ;
}

void cPtr_propertyAccessExpressionForGeneration::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@propertyAccessExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_expression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_structFieldName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_propertyAccessExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_propertyAccessExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_expression, mProperty_structFieldName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_propertyAccessExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_expression.printNonNullClassInstanceProperties ("expression") ;
    mProperty_structFieldName.printNonNullClassInstanceProperties ("structFieldName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @propertyAccessExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyAccessExpressionForGeneration ("propertyAccessExpressionForGeneration",
                                                                                          & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyAccessExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyAccessExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyAccessExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyAccessExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessExpressionForGeneration GGS_propertyAccessExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_propertyAccessExpressionForGeneration result ;
  const GGS_propertyAccessExpressionForGeneration * p = (const GGS_propertyAccessExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyAccessExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyAccessExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @subscriptReadAccessExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_subscriptReadAccessExpressionForGeneration::objectCompare (const GGS_subscriptReadAccessExpressionForGeneration & inOperand) const {
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

GGS_subscriptReadAccessExpressionForGeneration::GGS_subscriptReadAccessExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_subscriptReadAccessExpressionForGeneration GGS_subscriptReadAccessExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_semanticExpressionForGeneration & in_expression,
                          const GGS_string & in_subscriptInvocationName,
                          const GGS_semanticExpressionListForGeneration & in_actualExpressionList,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_subscriptReadAccessExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_subscriptReadAccessExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->subscriptReadAccessExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_expression, in_subscriptInvocationName, in_actualExpressionList, inCompiler) ;
  const GGS_subscriptReadAccessExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_subscriptReadAccessExpressionForGeneration::
subscriptReadAccessExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                     const GGS_location & in_mLocation,
                                                                     const GGS_semanticExpressionForGeneration & in_expression,
                                                                     const GGS_string & in_subscriptInvocationName,
                                                                     const GGS_semanticExpressionListForGeneration & in_actualExpressionList,
                                                                     Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_expression = in_expression ;
  mProperty_subscriptInvocationName = in_subscriptInvocationName ;
  mProperty_actualExpressionList = in_actualExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionForGeneration::GGS_subscriptReadAccessExpressionForGeneration (const cPtr_subscriptReadAccessExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_subscriptReadAccessExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_subscriptReadAccessExpressionForGeneration::readProperty_expression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_subscriptReadAccessExpressionForGeneration * p = (cPtr_subscriptReadAccessExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subscriptReadAccessExpressionForGeneration) ;
    return p->mProperty_expression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_subscriptReadAccessExpressionForGeneration::readProperty_subscriptInvocationName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_subscriptReadAccessExpressionForGeneration * p = (cPtr_subscriptReadAccessExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subscriptReadAccessExpressionForGeneration) ;
    return p->mProperty_subscriptInvocationName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_subscriptReadAccessExpressionForGeneration::readProperty_actualExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionListForGeneration () ;
  }else{
    cPtr_subscriptReadAccessExpressionForGeneration * p = (cPtr_subscriptReadAccessExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subscriptReadAccessExpressionForGeneration) ;
    return p->mProperty_actualExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @subscriptReadAccessExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_subscriptReadAccessExpressionForGeneration::cPtr_subscriptReadAccessExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_expression (),
mProperty_subscriptInvocationName (),
mProperty_actualExpressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_subscriptReadAccessExpressionForGeneration::cPtr_subscriptReadAccessExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                  const GGS_location & in_mLocation,
                                                                                                  const GGS_semanticExpressionForGeneration & in_expression,
                                                                                                  const GGS_string & in_subscriptInvocationName,
                                                                                                  const GGS_semanticExpressionListForGeneration & in_actualExpressionList,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_expression (),
mProperty_subscriptInvocationName (),
mProperty_actualExpressionList () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_expression = in_expression ;
  mProperty_subscriptInvocationName = in_subscriptInvocationName ;
  mProperty_actualExpressionList = in_actualExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_subscriptReadAccessExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subscriptReadAccessExpressionForGeneration ;
}

void cPtr_subscriptReadAccessExpressionForGeneration::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@subscriptReadAccessExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_expression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_subscriptInvocationName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_actualExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_subscriptReadAccessExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_subscriptReadAccessExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_expression, mProperty_subscriptInvocationName, mProperty_actualExpressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_subscriptReadAccessExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_expression.printNonNullClassInstanceProperties ("expression") ;
    mProperty_subscriptInvocationName.printNonNullClassInstanceProperties ("subscriptInvocationName") ;
    mProperty_actualExpressionList.printNonNullClassInstanceProperties ("actualExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @subscriptReadAccessExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subscriptReadAccessExpressionForGeneration ("subscriptReadAccessExpressionForGeneration",
                                                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_subscriptReadAccessExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subscriptReadAccessExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_subscriptReadAccessExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_subscriptReadAccessExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionForGeneration GGS_subscriptReadAccessExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_subscriptReadAccessExpressionForGeneration result ;
  const GGS_subscriptReadAccessExpressionForGeneration * p = (const GGS_subscriptReadAccessExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_subscriptReadAccessExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subscriptReadAccessExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalTypeInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalTypeInExpressionAST::objectCompare (const GGS_literalTypeInExpressionAST & inOperand) const {
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

GGS_literalTypeInExpressionAST::GGS_literalTypeInExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalTypeInExpressionAST GGS_literalTypeInExpressionAST::
init_21_ (const GGS_lstring & in_mLiteralTypeName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_literalTypeInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_literalTypeInExpressionAST (inCompiler COMMA_THERE)) ;
  object->literalTypeInExpressionAST_init_21_ (in_mLiteralTypeName, inCompiler) ;
  const GGS_literalTypeInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionAST::
literalTypeInExpressionAST_init_21_ (const GGS_lstring & in_mLiteralTypeName,
                                     Compiler * /* inCompiler */) {
  mProperty_mLiteralTypeName = in_mLiteralTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalTypeInExpressionAST::GGS_literalTypeInExpressionAST (const cPtr_literalTypeInExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalTypeInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_literalTypeInExpressionAST::readProperty_mLiteralTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_literalTypeInExpressionAST * p = (cPtr_literalTypeInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalTypeInExpressionAST) ;
    return p->mProperty_mLiteralTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalTypeInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalTypeInExpressionAST::cPtr_literalTypeInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalTypeInExpressionAST::cPtr_literalTypeInExpressionAST (const GGS_lstring & in_mLiteralTypeName,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralTypeName () {
  mProperty_mLiteralTypeName = in_mLiteralTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalTypeInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalTypeInExpressionAST ;
}

void cPtr_literalTypeInExpressionAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@literalTypeInExpressionAST:") ;
  mProperty_mLiteralTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalTypeInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalTypeInExpressionAST (mProperty_mLiteralTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalTypeInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralTypeName.printNonNullClassInstanceProperties ("mLiteralTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalTypeInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalTypeInExpressionAST ("literalTypeInExpressionAST",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalTypeInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalTypeInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalTypeInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalTypeInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalTypeInExpressionAST GGS_literalTypeInExpressionAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_literalTypeInExpressionAST result ;
  const GGS_literalTypeInExpressionAST * p = (const GGS_literalTypeInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalTypeInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalTypeInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalTypeInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalTypeInExpressionForGeneration::objectCompare (const GGS_literalTypeInExpressionForGeneration & inOperand) const {
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

GGS_literalTypeInExpressionForGeneration::GGS_literalTypeInExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalTypeInExpressionForGeneration GGS_literalTypeInExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_unifiedTypeMapEntry & in_mLiteralType,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalTypeInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalTypeInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalTypeInExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mLiteralType, inCompiler) ;
  const GGS_literalTypeInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionForGeneration::
literalTypeInExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                       const GGS_location & in_mLocation,
                                                       const GGS_unifiedTypeMapEntry & in_mLiteralType,
                                                       Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLiteralType = in_mLiteralType ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalTypeInExpressionForGeneration::GGS_literalTypeInExpressionForGeneration (const cPtr_literalTypeInExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalTypeInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_literalTypeInExpressionForGeneration::readProperty_mLiteralType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_literalTypeInExpressionForGeneration * p = (cPtr_literalTypeInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalTypeInExpressionForGeneration) ;
    return p->mProperty_mLiteralType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalTypeInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalTypeInExpressionForGeneration::cPtr_literalTypeInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLiteralType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalTypeInExpressionForGeneration::cPtr_literalTypeInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GGS_location & in_mLocation,
                                                                                      const GGS_unifiedTypeMapEntry & in_mLiteralType,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mLiteralType () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLiteralType = in_mLiteralType ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalTypeInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalTypeInExpressionForGeneration ;
}

void cPtr_literalTypeInExpressionForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@literalTypeInExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLiteralType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalTypeInExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalTypeInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLiteralType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalTypeInExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralType.printNonNullClassInstanceProperties ("mLiteralType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalTypeInExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalTypeInExpressionForGeneration ("literalTypeInExpressionForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalTypeInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalTypeInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalTypeInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalTypeInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalTypeInExpressionForGeneration GGS_literalTypeInExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_literalTypeInExpressionForGeneration result ;
  const GGS_literalTypeInExpressionForGeneration * p = (const GGS_literalTypeInExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalTypeInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalTypeInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @tildeExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_tildeExpressionForGeneration::objectCompare (const GGS_tildeExpressionForGeneration & inOperand) const {
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

GGS_tildeExpressionForGeneration::GGS_tildeExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_tildeExpressionForGeneration GGS_tildeExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_semanticExpressionForGeneration & in_mExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_tildeExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_tildeExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->tildeExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mExpression, inCompiler) ;
  const GGS_tildeExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionForGeneration::
tildeExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                               const GGS_location & in_mLocation,
                                               const GGS_semanticExpressionForGeneration & in_mExpression,
                                               Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionForGeneration::GGS_tildeExpressionForGeneration (const cPtr_tildeExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_tildeExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_tildeExpressionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_tildeExpressionForGeneration * p = (cPtr_tildeExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tildeExpressionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @tildeExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_tildeExpressionForGeneration::cPtr_tildeExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_tildeExpressionForGeneration::cPtr_tildeExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                      const GGS_location & in_mLocation,
                                                                      const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mExpression () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_tildeExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tildeExpressionForGeneration ;
}

void cPtr_tildeExpressionForGeneration::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@tildeExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_tildeExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_tildeExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_tildeExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @tildeExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tildeExpressionForGeneration ("tildeExpressionForGeneration",
                                                                                 & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_tildeExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tildeExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_tildeExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_tildeExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionForGeneration GGS_tildeExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_tildeExpressionForGeneration result ;
  const GGS_tildeExpressionForGeneration * p = (const GGS_tildeExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_tildeExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tildeExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalDoubleExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalDoubleExpressionAST::objectCompare (const GGS_literalDoubleExpressionAST & inOperand) const {
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

GGS_literalDoubleExpressionAST::GGS_literalDoubleExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalDoubleExpressionAST GGS_literalDoubleExpressionAST::
init_21_ (const GGS_ldouble & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_literalDoubleExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_literalDoubleExpressionAST (inCompiler COMMA_THERE)) ;
  object->literalDoubleExpressionAST_init_21_ (in_mValue, inCompiler) ;
  const GGS_literalDoubleExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionAST::
literalDoubleExpressionAST_init_21_ (const GGS_ldouble & in_mValue,
                                     Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalDoubleExpressionAST::GGS_literalDoubleExpressionAST (const cPtr_literalDoubleExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalDoubleExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ldouble GGS_literalDoubleExpressionAST::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ldouble () ;
  }else{
    cPtr_literalDoubleExpressionAST * p = (cPtr_literalDoubleExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalDoubleExpressionAST) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalDoubleExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalDoubleExpressionAST::cPtr_literalDoubleExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalDoubleExpressionAST::cPtr_literalDoubleExpressionAST (const GGS_ldouble & in_mValue,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalDoubleExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalDoubleExpressionAST ;
}

void cPtr_literalDoubleExpressionAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@literalDoubleExpressionAST:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalDoubleExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalDoubleExpressionAST (mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalDoubleExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalDoubleExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalDoubleExpressionAST ("literalDoubleExpressionAST",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalDoubleExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalDoubleExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalDoubleExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalDoubleExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalDoubleExpressionAST GGS_literalDoubleExpressionAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_literalDoubleExpressionAST result ;
  const GGS_literalDoubleExpressionAST * p = (const GGS_literalDoubleExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalDoubleExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalDoubleExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalDoubleExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalDoubleExpressionForGeneration::objectCompare (const GGS_literalDoubleExpressionForGeneration & inOperand) const {
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

GGS_literalDoubleExpressionForGeneration::GGS_literalDoubleExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalDoubleExpressionForGeneration GGS_literalDoubleExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_double & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalDoubleExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalDoubleExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalDoubleExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GGS_literalDoubleExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionForGeneration::
literalDoubleExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                       const GGS_location & in_mLocation,
                                                       const GGS_double & in_mValue,
                                                       Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalDoubleExpressionForGeneration::GGS_literalDoubleExpressionForGeneration (const cPtr_literalDoubleExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalDoubleExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_double GGS_literalDoubleExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_double () ;
  }else{
    cPtr_literalDoubleExpressionForGeneration * p = (cPtr_literalDoubleExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalDoubleExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalDoubleExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalDoubleExpressionForGeneration::cPtr_literalDoubleExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalDoubleExpressionForGeneration::cPtr_literalDoubleExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GGS_location & in_mLocation,
                                                                                      const GGS_double & in_mValue,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalDoubleExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration ;
}

void cPtr_literalDoubleExpressionForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@literalDoubleExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalDoubleExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalDoubleExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalDoubleExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalDoubleExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration ("literalDoubleExpressionForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalDoubleExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalDoubleExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalDoubleExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalDoubleExpressionForGeneration GGS_literalDoubleExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_literalDoubleExpressionForGeneration result ;
  const GGS_literalDoubleExpressionForGeneration * p = (const GGS_literalDoubleExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalDoubleExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalDoubleExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @comparisonExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_comparisonExpressionForGeneration::objectCompare (const GGS_comparisonExpressionForGeneration & inOperand) const {
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

GGS_comparisonExpressionForGeneration::GGS_comparisonExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_comparisonExpressionForGeneration GGS_comparisonExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                          const GGS_comparison & in_mComparison,
                          const GGS_semanticExpressionForGeneration & in_mRightExpression,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_comparisonExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_comparisonExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->comparisonExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mLeftExpression, in_mComparison, in_mRightExpression, inCompiler) ;
  const GGS_comparisonExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionForGeneration::
comparisonExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                            const GGS_location & in_mLocation,
                                                            const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                            const GGS_comparison & in_mComparison,
                                                            const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                            Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mComparison = in_mComparison ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionForGeneration::GGS_comparisonExpressionForGeneration (const cPtr_comparisonExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_comparisonExpressionForGeneration::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_comparisonExpressionForGeneration * p = (cPtr_comparisonExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionForGeneration) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparisonExpressionForGeneration::readProperty_mComparison (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_comparison () ;
  }else{
    cPtr_comparisonExpressionForGeneration * p = (cPtr_comparisonExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionForGeneration) ;
    return p->mProperty_mComparison ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_comparisonExpressionForGeneration::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_comparisonExpressionForGeneration * p = (cPtr_comparisonExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionForGeneration) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @comparisonExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_comparisonExpressionForGeneration::cPtr_comparisonExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mComparison (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_comparisonExpressionForGeneration::cPtr_comparisonExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                const GGS_location & in_mLocation,
                                                                                const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                const GGS_comparison & in_mComparison,
                                                                                const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mComparison (),
mProperty_mRightExpression () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mComparison = in_mComparison ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_comparisonExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonExpressionForGeneration ;
}

void cPtr_comparisonExpressionForGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@comparisonExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mComparison.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_comparisonExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_comparisonExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mComparison, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_comparisonExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mComparison.printNonNullClassInstanceProperties ("mComparison") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @comparisonExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_comparisonExpressionForGeneration ("comparisonExpressionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_comparisonExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_comparisonExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_comparisonExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionForGeneration GGS_comparisonExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_comparisonExpressionForGeneration result ;
  const GGS_comparisonExpressionForGeneration * p = (const GGS_comparisonExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_comparisonExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @functionCallExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionCallExpressionAST::objectCompare (const GGS_functionCallExpressionAST & inOperand) const {
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

GGS_functionCallExpressionAST::GGS_functionCallExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_functionCallExpressionAST GGS_functionCallExpressionAST::
init_21__21_ (const GGS_lstring & in_mFunctionName,
              const GGS_actualOutputArgumentList & in_mExpressionList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_functionCallExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_functionCallExpressionAST (inCompiler COMMA_THERE)) ;
  object->functionCallExpressionAST_init_21__21_ (in_mFunctionName, in_mExpressionList, inCompiler) ;
  const GGS_functionCallExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::
functionCallExpressionAST_init_21__21_ (const GGS_lstring & in_mFunctionName,
                                        const GGS_actualOutputArgumentList & in_mExpressionList,
                                        Compiler * /* inCompiler */) {
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionAST::GGS_functionCallExpressionAST (const cPtr_functionCallExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionCallExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_functionCallExpressionAST::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_functionCallExpressionAST * p = (cPtr_functionCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList GGS_functionCallExpressionAST::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualOutputArgumentList () ;
  }else{
    cPtr_functionCallExpressionAST * p = (cPtr_functionCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionAST) ;
    return p->mProperty_mExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @functionCallExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_functionCallExpressionAST::cPtr_functionCallExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mExpressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_functionCallExpressionAST::cPtr_functionCallExpressionAST (const GGS_lstring & in_mFunctionName,
                                                                const GGS_actualOutputArgumentList & in_mExpressionList,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mExpressionList () {
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_functionCallExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallExpressionAST ;
}

void cPtr_functionCallExpressionAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@functionCallExpressionAST:") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_functionCallExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_functionCallExpressionAST (mProperty_mFunctionName, mProperty_mExpressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_functionCallExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mExpressionList.printNonNullClassInstanceProperties ("mExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @functionCallExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionCallExpressionAST ("functionCallExpressionAST",
                                                                              & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionCallExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionCallExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionCallExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionAST GGS_functionCallExpressionAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_functionCallExpressionAST result ;
  const GGS_functionCallExpressionAST * p = (const GGS_functionCallExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionCallExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionCallExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @functionCallExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionCallExpressionForGeneration::objectCompare (const GGS_functionCallExpressionForGeneration & inOperand) const {
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

GGS_functionCallExpressionForGeneration::GGS_functionCallExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_functionCallExpressionForGeneration GGS_functionCallExpressionForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                      const GGS_location & in_mLocation,
                      const GGS_string & in_mFunctionName,
                      const GGS_semanticExpressionListForGeneration & in_mExpressions,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_functionCallExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_functionCallExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->functionCallExpressionForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_mFunctionName, in_mExpressions, inCompiler) ;
  const GGS_functionCallExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionForGeneration::
functionCallExpressionForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                          const GGS_location & in_mLocation,
                                                          const GGS_string & in_mFunctionName,
                                                          const GGS_semanticExpressionListForGeneration & in_mExpressions,
                                                          Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mExpressions = in_mExpressions ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionForGeneration::GGS_functionCallExpressionForGeneration (const cPtr_functionCallExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionCallExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_functionCallExpressionForGeneration::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_functionCallExpressionForGeneration * p = (cPtr_functionCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionForGeneration) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_functionCallExpressionForGeneration::readProperty_mExpressions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionListForGeneration () ;
  }else{
    cPtr_functionCallExpressionForGeneration * p = (cPtr_functionCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionForGeneration) ;
    return p->mProperty_mExpressions ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @functionCallExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_functionCallExpressionForGeneration::cPtr_functionCallExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mExpressions () {
}

//--------------------------------------------------------------------------------------------------

cPtr_functionCallExpressionForGeneration::cPtr_functionCallExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                    const GGS_location & in_mLocation,
                                                                                    const GGS_string & in_mFunctionName,
                                                                                    const GGS_semanticExpressionListForGeneration & in_mExpressions,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mExpressions () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mExpressions = in_mExpressions ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_functionCallExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallExpressionForGeneration ;
}

void cPtr_functionCallExpressionForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@functionCallExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_functionCallExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_functionCallExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mFunctionName, mProperty_mExpressions, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_functionCallExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mExpressions.printNonNullClassInstanceProperties ("mExpressions") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @functionCallExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionCallExpressionForGeneration ("functionCallExpressionForGeneration",
                                                                                        & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionCallExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionCallExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionCallExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionForGeneration GGS_functionCallExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_functionCallExpressionForGeneration result ;
  const GGS_functionCallExpressionForGeneration * p = (const GGS_functionCallExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionCallExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionCallExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ifExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ifExpressionForGeneration::objectCompare (const GGS_ifExpressionForGeneration & inOperand) const {
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

GGS_ifExpressionForGeneration::GGS_ifExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ifExpressionForGeneration GGS_ifExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_semanticExpressionForGeneration & in_mIfExpression,
                          const GGS_semanticExpressionForGeneration & in_mThenExpression,
                          const GGS_semanticExpressionForGeneration & in_mElseExpression,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_ifExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_ifExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->ifExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mIfExpression, in_mThenExpression, in_mElseExpression, inCompiler) ;
  const GGS_ifExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionForGeneration::
ifExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                    const GGS_location & in_mLocation,
                                                    const GGS_semanticExpressionForGeneration & in_mIfExpression,
                                                    const GGS_semanticExpressionForGeneration & in_mThenExpression,
                                                    const GGS_semanticExpressionForGeneration & in_mElseExpression,
                                                    Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mIfExpression = in_mIfExpression ;
  mProperty_mThenExpression = in_mThenExpression ;
  mProperty_mElseExpression = in_mElseExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionForGeneration::GGS_ifExpressionForGeneration (const cPtr_ifExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_ifExpressionForGeneration::readProperty_mIfExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_ifExpressionForGeneration * p = (cPtr_ifExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionForGeneration) ;
    return p->mProperty_mIfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_ifExpressionForGeneration::readProperty_mThenExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_ifExpressionForGeneration * p = (cPtr_ifExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionForGeneration) ;
    return p->mProperty_mThenExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_ifExpressionForGeneration::readProperty_mElseExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_ifExpressionForGeneration * p = (cPtr_ifExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionForGeneration) ;
    return p->mProperty_mElseExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ifExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_ifExpressionForGeneration::cPtr_ifExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mIfExpression (),
mProperty_mThenExpression (),
mProperty_mElseExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ifExpressionForGeneration::cPtr_ifExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                const GGS_location & in_mLocation,
                                                                const GGS_semanticExpressionForGeneration & in_mIfExpression,
                                                                const GGS_semanticExpressionForGeneration & in_mThenExpression,
                                                                const GGS_semanticExpressionForGeneration & in_mElseExpression,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mIfExpression (),
mProperty_mThenExpression (),
mProperty_mElseExpression () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mIfExpression = in_mIfExpression ;
  mProperty_mThenExpression = in_mThenExpression ;
  mProperty_mElseExpression = in_mElseExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ifExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionForGeneration ;
}

void cPtr_ifExpressionForGeneration::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@ifExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIfExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mThenExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElseExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_ifExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ifExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mIfExpression, mProperty_mThenExpression, mProperty_mElseExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ifExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mIfExpression.printNonNullClassInstanceProperties ("mIfExpression") ;
    mProperty_mThenExpression.printNonNullClassInstanceProperties ("mThenExpression") ;
    mProperty_mElseExpression.printNonNullClassInstanceProperties ("mElseExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ifExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionForGeneration ("ifExpressionForGeneration",
                                                                              & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionForGeneration GGS_ifExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_ifExpressionForGeneration result ;
  const GGS_ifExpressionForGeneration * p = (const GGS_ifExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @andShortExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_andShortExpressionForGeneration::objectCompare (const GGS_andShortExpressionForGeneration & inOperand) const {
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

GGS_andShortExpressionForGeneration::GGS_andShortExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_andShortExpressionForGeneration GGS_andShortExpressionForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                      const GGS_location & in_mLocation,
                      const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                      const GGS_semanticExpressionForGeneration & in_mRightExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_andShortExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_andShortExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->andShortExpressionForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_andShortExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionForGeneration::
andShortExpressionForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                      const GGS_location & in_mLocation,
                                                      const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                      const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                      Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionForGeneration::GGS_andShortExpressionForGeneration (const cPtr_andShortExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andShortExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_andShortExpressionForGeneration::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_andShortExpressionForGeneration * p = (cPtr_andShortExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionForGeneration) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_andShortExpressionForGeneration::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_andShortExpressionForGeneration * p = (cPtr_andShortExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionForGeneration) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @andShortExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_andShortExpressionForGeneration::cPtr_andShortExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_andShortExpressionForGeneration::cPtr_andShortExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                            const GGS_location & in_mLocation,
                                                                            const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                            const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_andShortExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionForGeneration ;
}

void cPtr_andShortExpressionForGeneration::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@andShortExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_andShortExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_andShortExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_andShortExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @andShortExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andShortExpressionForGeneration ("andShortExpressionForGeneration",
                                                                                    & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_andShortExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_andShortExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_andShortExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionForGeneration GGS_andShortExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_andShortExpressionForGeneration result ;
  const GGS_andShortExpressionForGeneration * p = (const GGS_andShortExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_andShortExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andShortExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @getterCallExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_getterCallExpressionAST::objectCompare (const GGS_getterCallExpressionAST & inOperand) const {
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

GGS_getterCallExpressionAST::GGS_getterCallExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_getterCallExpressionAST GGS_getterCallExpressionAST::
init_21__21__21__21_ (const GGS_semanticExpressionAST & in_mReceiver,
                      const GGS_lstring & in_mGetterName,
                      const GGS_actualOutputArgumentList & in_mActualArgumentList,
                      const GGS_location & in_mExpressionLocation,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_getterCallExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_getterCallExpressionAST (inCompiler COMMA_THERE)) ;
  object->getterCallExpressionAST_init_21__21__21__21_ (in_mReceiver, in_mGetterName, in_mActualArgumentList, in_mExpressionLocation, inCompiler) ;
  const GGS_getterCallExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionAST::
getterCallExpressionAST_init_21__21__21__21_ (const GGS_semanticExpressionAST & in_mReceiver,
                                              const GGS_lstring & in_mGetterName,
                                              const GGS_actualOutputArgumentList & in_mActualArgumentList,
                                              const GGS_location & in_mExpressionLocation,
                                              Compiler * /* inCompiler */) {
  mProperty_mReceiver = in_mReceiver ;
  mProperty_mGetterName = in_mGetterName ;
  mProperty_mActualArgumentList = in_mActualArgumentList ;
  mProperty_mExpressionLocation = in_mExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionAST::GGS_getterCallExpressionAST (const cPtr_getterCallExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getterCallExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_getterCallExpressionAST::readProperty_mReceiver (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    return p->mProperty_mReceiver ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_getterCallExpressionAST::readProperty_mGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    return p->mProperty_mGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList GGS_getterCallExpressionAST::readProperty_mActualArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualOutputArgumentList () ;
  }else{
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    return p->mProperty_mActualArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_getterCallExpressionAST::readProperty_mExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    return p->mProperty_mExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @getterCallExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_getterCallExpressionAST::cPtr_getterCallExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiver (),
mProperty_mGetterName (),
mProperty_mActualArgumentList (),
mProperty_mExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_getterCallExpressionAST::cPtr_getterCallExpressionAST (const GGS_semanticExpressionAST & in_mReceiver,
                                                            const GGS_lstring & in_mGetterName,
                                                            const GGS_actualOutputArgumentList & in_mActualArgumentList,
                                                            const GGS_location & in_mExpressionLocation,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiver (),
mProperty_mGetterName (),
mProperty_mActualArgumentList (),
mProperty_mExpressionLocation () {
  mProperty_mReceiver = in_mReceiver ;
  mProperty_mGetterName = in_mGetterName ;
  mProperty_mActualArgumentList = in_mActualArgumentList ;
  mProperty_mExpressionLocation = in_mExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_getterCallExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionAST ;
}

void cPtr_getterCallExpressionAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@getterCallExpressionAST:") ;
  mProperty_mReceiver.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_getterCallExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_getterCallExpressionAST (mProperty_mReceiver, mProperty_mGetterName, mProperty_mActualArgumentList, mProperty_mExpressionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_getterCallExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiver.printNonNullClassInstanceProperties ("mReceiver") ;
    mProperty_mGetterName.printNonNullClassInstanceProperties ("mGetterName") ;
    mProperty_mActualArgumentList.printNonNullClassInstanceProperties ("mActualArgumentList") ;
    mProperty_mExpressionLocation.printNonNullClassInstanceProperties ("mExpressionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @getterCallExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getterCallExpressionAST ("getterCallExpressionAST",
                                                                            & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_getterCallExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_getterCallExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getterCallExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionAST GGS_getterCallExpressionAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_getterCallExpressionAST result ;
  const GGS_getterCallExpressionAST * p = (const GGS_getterCallExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getterCallExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getterCallExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @getterCallExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_getterCallExpressionForGeneration::objectCompare (const GGS_getterCallExpressionForGeneration & inOperand) const {
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

GGS_getterCallExpressionForGeneration::GGS_getterCallExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_getterCallExpressionForGeneration GGS_getterCallExpressionForGeneration::
init_21__21__21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                      const GGS_location & in_mLocation,
                                      const GGS_methodKind & in_mKind,
                                      const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                      const GGS_stringlist & in_mFieldList,
                                      const GGS_string & in_mGetterName,
                                      const GGS_semanticExpressionListForGeneration & in_mActualArgumentList,
                                      const GGS_bool & in_mHasCompilerArgument,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_getterCallExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_getterCallExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->getterCallExpressionForGeneration_init_21__21__21__21__21__21__21__21_ (in_mResultType, in_mLocation, in_mKind, in_mReceiverExpression, in_mFieldList, in_mGetterName, in_mActualArgumentList, in_mHasCompilerArgument, inCompiler) ;
  const GGS_getterCallExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionForGeneration::
getterCallExpressionForGeneration_init_21__21__21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                        const GGS_location & in_mLocation,
                                                                        const GGS_methodKind & in_mKind,
                                                                        const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                        const GGS_stringlist & in_mFieldList,
                                                                        const GGS_string & in_mGetterName,
                                                                        const GGS_semanticExpressionListForGeneration & in_mActualArgumentList,
                                                                        const GGS_bool & in_mHasCompilerArgument,
                                                                        Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mKind = in_mKind ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mFieldList = in_mFieldList ;
  mProperty_mGetterName = in_mGetterName ;
  mProperty_mActualArgumentList = in_mActualArgumentList ;
  mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionForGeneration::GGS_getterCallExpressionForGeneration (const cPtr_getterCallExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getterCallExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_methodKind GGS_getterCallExpressionForGeneration::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_methodKind () ;
  }else{
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_getterCallExpressionForGeneration::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_getterCallExpressionForGeneration::readProperty_mFieldList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringlist () ;
  }else{
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    return p->mProperty_mFieldList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_getterCallExpressionForGeneration::readProperty_mGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    return p->mProperty_mGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_getterCallExpressionForGeneration::readProperty_mActualArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionListForGeneration () ;
  }else{
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    return p->mProperty_mActualArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_getterCallExpressionForGeneration::readProperty_mHasCompilerArgument (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    return p->mProperty_mHasCompilerArgument ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @getterCallExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_getterCallExpressionForGeneration::cPtr_getterCallExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mKind (),
mProperty_mReceiverExpression (),
mProperty_mFieldList (),
mProperty_mGetterName (),
mProperty_mActualArgumentList (),
mProperty_mHasCompilerArgument () {
}

//--------------------------------------------------------------------------------------------------

cPtr_getterCallExpressionForGeneration::cPtr_getterCallExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                const GGS_location & in_mLocation,
                                                                                const GGS_methodKind & in_mKind,
                                                                                const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                const GGS_stringlist & in_mFieldList,
                                                                                const GGS_string & in_mGetterName,
                                                                                const GGS_semanticExpressionListForGeneration & in_mActualArgumentList,
                                                                                const GGS_bool & in_mHasCompilerArgument,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mKind (),
mProperty_mReceiverExpression (),
mProperty_mFieldList (),
mProperty_mGetterName (),
mProperty_mActualArgumentList (),
mProperty_mHasCompilerArgument () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mKind = in_mKind ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mFieldList = in_mFieldList ;
  mProperty_mGetterName = in_mGetterName ;
  mProperty_mActualArgumentList = in_mActualArgumentList ;
  mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_getterCallExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionForGeneration ;
}

void cPtr_getterCallExpressionForGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@getterCallExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFieldList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_getterCallExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_getterCallExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mKind, mProperty_mReceiverExpression, mProperty_mFieldList, mProperty_mGetterName, mProperty_mActualArgumentList, mProperty_mHasCompilerArgument, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_getterCallExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mFieldList.printNonNullClassInstanceProperties ("mFieldList") ;
    mProperty_mGetterName.printNonNullClassInstanceProperties ("mGetterName") ;
    mProperty_mActualArgumentList.printNonNullClassInstanceProperties ("mActualArgumentList") ;
    mProperty_mHasCompilerArgument.printNonNullClassInstanceProperties ("mHasCompilerArgument") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @getterCallExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getterCallExpressionForGeneration ("getterCallExpressionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_getterCallExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_getterCallExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getterCallExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionForGeneration GGS_getterCallExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_getterCallExpressionForGeneration result ;
  const GGS_getterCallExpressionForGeneration * p = (const GGS_getterCallExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getterCallExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getterCallExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @nilExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_nilExpressionForGeneration::objectCompare (const GGS_nilExpressionForGeneration & inOperand) const {
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

GGS_nilExpressionForGeneration::GGS_nilExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_nilExpressionForGeneration GGS_nilExpressionForGeneration::
init_21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
              const GGS_location & in_mLocation,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_nilExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_nilExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->nilExpressionForGeneration_init_21__21_ (in_mResultType, in_mLocation, inCompiler) ;
  const GGS_nilExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_nilExpressionForGeneration::
nilExpressionForGeneration_init_21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                         const GGS_location & in_mLocation,
                                         Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_nilExpressionForGeneration::GGS_nilExpressionForGeneration (const cPtr_nilExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_nilExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @nilExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_nilExpressionForGeneration::cPtr_nilExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_nilExpressionForGeneration::cPtr_nilExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                  const GGS_location & in_mLocation,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_nilExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nilExpressionForGeneration ;
}

void cPtr_nilExpressionForGeneration::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@nilExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_nilExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_nilExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_nilExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @nilExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nilExpressionForGeneration ("nilExpressionForGeneration",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nilExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nilExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nilExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nilExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nilExpressionForGeneration GGS_nilExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_nilExpressionForGeneration result ;
  const GGS_nilExpressionForGeneration * p = (const GGS_nilExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nilExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nilExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasQualifiedFeature::GGS_galgasQualifiedFeature (void) :
mProperty_featureName (),
mProperty_featureValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasQualifiedFeature::GGS_galgasQualifiedFeature (const GGS_galgasQualifiedFeature & inSource) :
mProperty_featureName (inSource.mProperty_featureName),
mProperty_featureValue (inSource.mProperty_featureValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasQualifiedFeature & GGS_galgasQualifiedFeature::operator = (const GGS_galgasQualifiedFeature & inSource) {
  mProperty_featureName = inSource.mProperty_featureName ;
  mProperty_featureValue = inSource.mProperty_featureValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_galgasQualifiedFeature GGS_galgasQualifiedFeature::init_21__21_ (const GGS_lstring & in_featureName,
                                                                     const GGS_lstring & in_featureValue,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgasQualifiedFeature result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_featureName = in_featureName ;
  result.mProperty_featureValue = in_featureValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasQualifiedFeature::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasQualifiedFeature::GGS_galgasQualifiedFeature (const GGS_lstring & inOperand0,
                                                        const GGS_lstring & inOperand1) :
mProperty_featureName (inOperand0),
mProperty_featureValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_galgasQualifiedFeature::isValid (void) const {
  return mProperty_featureName.isValid () && mProperty_featureValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasQualifiedFeature::drop (void) {
  mProperty_featureName.drop () ;
  mProperty_featureValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasQualifiedFeature::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @galgasQualifiedFeature:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_featureName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_featureValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @galgasQualifiedFeature generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgasQualifiedFeature ("galgasQualifiedFeature",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgasQualifiedFeature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgasQualifiedFeature ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgasQualifiedFeature::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgasQualifiedFeature (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasQualifiedFeature GGS_galgasQualifiedFeature::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_galgasQualifiedFeature result ;
  const GGS_galgasQualifiedFeature * p = (const GGS_galgasQualifiedFeature *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgasQualifiedFeature *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgasQualifiedFeature", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_ProjectComponentAST::GGS_galgas_33_ProjectComponentAST (void) :
mProperty_mProjectSourceList (),
mProperty_mToolCppSourceList (),
mProperty_mMajorVersion (),
mProperty_mMinorVersion (),
mProperty_mRevisionVersion (),
mProperty_mGenerationFeatureList (),
mProperty_mQualifiedFeatureList (),
mProperty_mTargetName (),
mProperty_mEndOfSourceFile () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_ProjectComponentAST::GGS_galgas_33_ProjectComponentAST (const GGS_galgas_33_ProjectComponentAST & inSource) :
mProperty_mProjectSourceList (inSource.mProperty_mProjectSourceList),
mProperty_mToolCppSourceList (inSource.mProperty_mToolCppSourceList),
mProperty_mMajorVersion (inSource.mProperty_mMajorVersion),
mProperty_mMinorVersion (inSource.mProperty_mMinorVersion),
mProperty_mRevisionVersion (inSource.mProperty_mRevisionVersion),
mProperty_mGenerationFeatureList (inSource.mProperty_mGenerationFeatureList),
mProperty_mQualifiedFeatureList (inSource.mProperty_mQualifiedFeatureList),
mProperty_mTargetName (inSource.mProperty_mTargetName),
mProperty_mEndOfSourceFile (inSource.mProperty_mEndOfSourceFile) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_ProjectComponentAST & GGS_galgas_33_ProjectComponentAST::operator = (const GGS_galgas_33_ProjectComponentAST & inSource) {
  mProperty_mProjectSourceList = inSource.mProperty_mProjectSourceList ;
  mProperty_mToolCppSourceList = inSource.mProperty_mToolCppSourceList ;
  mProperty_mMajorVersion = inSource.mProperty_mMajorVersion ;
  mProperty_mMinorVersion = inSource.mProperty_mMinorVersion ;
  mProperty_mRevisionVersion = inSource.mProperty_mRevisionVersion ;
  mProperty_mGenerationFeatureList = inSource.mProperty_mGenerationFeatureList ;
  mProperty_mQualifiedFeatureList = inSource.mProperty_mQualifiedFeatureList ;
  mProperty_mTargetName = inSource.mProperty_mTargetName ;
  mProperty_mEndOfSourceFile = inSource.mProperty_mEndOfSourceFile ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_galgas_33_ProjectComponentAST GGS_galgas_33_ProjectComponentAST::init_21__21__21__21__21__21__21__21__21_ (const GGS_stringlist & in_mProjectSourceList,
                                                                                                               const GGS_stringlist & in_mToolCppSourceList,
                                                                                                               const GGS_lbigint & in_mMajorVersion,
                                                                                                               const GGS_lbigint & in_mMinorVersion,
                                                                                                               const GGS_lbigint & in_mRevisionVersion,
                                                                                                               const GGS_lstringlist & in_mGenerationFeatureList,
                                                                                                               const GGS__5B_galgasQualifiedFeature_5D_ & in_mQualifiedFeatureList,
                                                                                                               const GGS_lstring & in_mTargetName,
                                                                                                               const GGS_location & in_mEndOfSourceFile,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgas_33_ProjectComponentAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProjectSourceList = in_mProjectSourceList ;
  result.mProperty_mToolCppSourceList = in_mToolCppSourceList ;
  result.mProperty_mMajorVersion = in_mMajorVersion ;
  result.mProperty_mMinorVersion = in_mMinorVersion ;
  result.mProperty_mRevisionVersion = in_mRevisionVersion ;
  result.mProperty_mGenerationFeatureList = in_mGenerationFeatureList ;
  result.mProperty_mQualifiedFeatureList = in_mQualifiedFeatureList ;
  result.mProperty_mTargetName = in_mTargetName ;
  result.mProperty_mEndOfSourceFile = in_mEndOfSourceFile ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_ProjectComponentAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_ProjectComponentAST::GGS_galgas_33_ProjectComponentAST (const GGS_stringlist & inOperand0,
                                                                      const GGS_stringlist & inOperand1,
                                                                      const GGS_lbigint & inOperand2,
                                                                      const GGS_lbigint & inOperand3,
                                                                      const GGS_lbigint & inOperand4,
                                                                      const GGS_lstringlist & inOperand5,
                                                                      const GGS__5B_galgasQualifiedFeature_5D_ & inOperand6,
                                                                      const GGS_lstring & inOperand7,
                                                                      const GGS_location & inOperand8) :
mProperty_mProjectSourceList (inOperand0),
mProperty_mToolCppSourceList (inOperand1),
mProperty_mMajorVersion (inOperand2),
mProperty_mMinorVersion (inOperand3),
mProperty_mRevisionVersion (inOperand4),
mProperty_mGenerationFeatureList (inOperand5),
mProperty_mQualifiedFeatureList (inOperand6),
mProperty_mTargetName (inOperand7),
mProperty_mEndOfSourceFile (inOperand8) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_galgas_33_ProjectComponentAST::isValid (void) const {
  return mProperty_mProjectSourceList.isValid () && mProperty_mToolCppSourceList.isValid () && mProperty_mMajorVersion.isValid () && mProperty_mMinorVersion.isValid () && mProperty_mRevisionVersion.isValid () && mProperty_mGenerationFeatureList.isValid () && mProperty_mQualifiedFeatureList.isValid () && mProperty_mTargetName.isValid () && mProperty_mEndOfSourceFile.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_ProjectComponentAST::drop (void) {
  mProperty_mProjectSourceList.drop () ;
  mProperty_mToolCppSourceList.drop () ;
  mProperty_mMajorVersion.drop () ;
  mProperty_mMinorVersion.drop () ;
  mProperty_mRevisionVersion.drop () ;
  mProperty_mGenerationFeatureList.drop () ;
  mProperty_mQualifiedFeatureList.drop () ;
  mProperty_mTargetName.drop () ;
  mProperty_mEndOfSourceFile.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_ProjectComponentAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @galgas3ProjectComponentAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mProjectSourceList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mToolCppSourceList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMajorVersion.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMinorVersion.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRevisionVersion.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGenerationFeatureList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mQualifiedFeatureList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTargetName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfSourceFile.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @galgas3ProjectComponentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_ProjectComponentAST ("galgas3ProjectComponentAST",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgas_33_ProjectComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_ProjectComponentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgas_33_ProjectComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgas_33_ProjectComponentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_ProjectComponentAST GGS_galgas_33_ProjectComponentAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_galgas_33_ProjectComponentAST result ;
  const GGS_galgas_33_ProjectComponentAST * p = (const GGS_galgas_33_ProjectComponentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgas_33_ProjectComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3ProjectComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#include "MF_MemoryControl.h"
#include "C_galgas_CLI_Options.h"

#include "FileManager.h"

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//                                     LL(1) PRODUCTION RULES                                       
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductions_galgas3ProjectGrammar [] = {
// At index 0 : <project_header>, in file 'galgas3ProjectSyntax.ggs', line 60
  TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken_project) // $project$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__28_) // $($
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken_literalInt) // $literalInt$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken_literalInt) // $literalInt$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken_literalInt) // $literalInt$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__2D__3E_) // $->$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__22_string_22_) // $"string"$
, TOP_DOWN_END_PRODUCTION ()
// At index 11 : <project_component_start_symbol>, in file 'galgas3ProjectSyntax.ggs', line 78
, TOP_DOWN_NONTERMINAL (0) // <project_header>
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__7B_) // ${$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__7D_) // $}$
, TOP_DOWN_END_PRODUCTION ()
//---- Added productions from 'select' and 'repeat' instructions
// At index 16 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_END_PRODUCTION ()
// At index 17 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_quietOutputByDefault) // $%quietOutputByDefault$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 20 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_MacSwiftApp) // $%MacSwiftApp$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 23 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_makefile_2D_macosx) // $%makefile-macosx$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 26 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_makefile_2D_unix) // $%makefile-unix$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 29 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx) // $%makefile-x86linux32-on-macosx$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 32 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx) // $%makefile-x86linux64-on-macosx$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 35 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx) // $%makefile-arm64-linux-on-macosx$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 38 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx) // $%makefile-win32-on-macosx$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 41 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_windows) // $%codeblocks-windows$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 44 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_33__32_) // $%codeblocks-linux32$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 47 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_36__34_) // $%codeblocks-linux64$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 50 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_applicationBundleBase) // $%applicationBundleBase$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__22_string_22_) // $"string"$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 55 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_libpmAtPath) // $%libpmAtPath$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__22_string_22_) // $"string"$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 60 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_macCodeSign) // $%macCodeSign$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__22_string_22_) // $"string"$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_33_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 65 : <>, in file '.ggs', line 0
, TOP_DOWN_NONTERMINAL (1) // <project_component_start_symbol>
, TOP_DOWN_END_PRODUCTION ()
} ;

//--------------------------------------------------------------------------------------------------
//
//                                P R O D U C T I O N    N A M E S                                  
//
//--------------------------------------------------------------------------------------------------

static const ProductionNameDescriptor gProductionNames_galgas3ProjectGrammar [18] = {
 {"<project_header>", "galgas3ProjectSyntax", 0}, // at index 0
 {"<project_component_start_symbol>", "galgas3ProjectSyntax", 11}, // at index 1
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 16}, // at index 2
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 17}, // at index 3
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 20}, // at index 4
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 23}, // at index 5
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 26}, // at index 6
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 29}, // at index 7
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 32}, // at index 8
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 35}, // at index 9
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 38}, // at index 10
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 41}, // at index 11
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 44}, // at index 12
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 47}, // at index 13
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 50}, // at index 14
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 55}, // at index 15
 {"<select_galgas_33_ProjectSyntax_0>", "galgas3ProjectSyntax", 60}, // at index 16
 {"<>", "", 65} // at index 17
} ;

//--------------------------------------------------------------------------------------------------
//
//                       L L ( 1 )    P R O D U C T I O N    I N D E X E S                          
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductionIndexes_galgas3ProjectGrammar [18] = {
0, // index 0 : <project_header>, in file 'galgas3ProjectSyntax.ggs', line 60
11, // index 1 : <project_component_start_symbol>, in file 'galgas3ProjectSyntax.ggs', line 78
16, // index 2 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
17, // index 3 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
20, // index 4 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
23, // index 5 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
26, // index 6 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
29, // index 7 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
32, // index 8 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
35, // index 9 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
38, // index 10 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
41, // index 11 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
44, // index 12 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
47, // index 13 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
50, // index 14 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
55, // index 15 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
60, // index 16 : <select_galgas_33_ProjectSyntax_0>, in file 'galgas3ProjectSyntax.ggs', line 88
65 // index 17 : <>, in file '.ggs', line 0
} ;

//--------------------------------------------------------------------------------------------------
//
//                 L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                   
//
//--------------------------------------------------------------------------------------------------

static const int32_t gFirstProductionIndexes_galgas3ProjectGrammar [5] = {
0, // at 0 : <project_header>
1, // at 1 : <project_component_start_symbol>
2, // at 2 : <select_galgas_33_ProjectSyntax_0>
17, // at 3 : <>
0} ;

//--------------------------------------------------------------------------------------------------
//
//                          L L ( 1 )    D E C I S I O N    T A B L E S                             
//
//--------------------------------------------------------------------------------------------------

static const int32_t gDecision_galgas3ProjectGrammar [] = {
// At index 0 : <project_header> only one production, no choice
  -1,
// At index 1 : <project_component_start_symbol> only one production, no choice
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 2 : <select_galgas_33_ProjectSyntax_0>
Lexique_galgasScanner_33_::kToken__7D_, -1, // Choice 1
Lexique_galgasScanner_33_::kToken__25_quietOutputByDefault, -1, // Choice 2
Lexique_galgasScanner_33_::kToken__25_MacSwiftApp, -1, // Choice 3
Lexique_galgasScanner_33_::kToken__25_makefile_2D_macosx, -1, // Choice 4
Lexique_galgasScanner_33_::kToken__25_makefile_2D_unix, -1, // Choice 5
Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx, -1, // Choice 6
Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx, -1, // Choice 7
Lexique_galgasScanner_33_::kToken__25_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx, -1, // Choice 8
Lexique_galgasScanner_33_::kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx, -1, // Choice 9
Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_windows, -1, // Choice 10
Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_33__32_, -1, // Choice 11
Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_36__34_, -1, // Choice 12
Lexique_galgasScanner_33_::kToken__25_applicationBundleBase, -1, // Choice 13
Lexique_galgasScanner_33_::kToken__25_libpmAtPath, -1, // Choice 14
Lexique_galgasScanner_33_::kToken__25_macCodeSign, -1, // Choice 15
  -1,
// At index 33 : <> only one production, no choice
  -1,
0} ;

//--------------------------------------------------------------------------------------------------
//
//                  L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S                    
//
//--------------------------------------------------------------------------------------------------

static const int32_t gDecisionIndexes_galgas3ProjectGrammar [5] = {
0, // at 0 : <project_header>
1, // at 1 : <project_component_start_symbol>
2, // at 2 : <select_galgas_33_ProjectSyntax_0>
33, // at 3 : <>
0} ;

//--------------------------------------------------------------------------------------------------
//
//                          'project_header' non terminal implementation                            
//
//--------------------------------------------------------------------------------------------------

void cGrammar_galgas_33_ProjectGrammar::nt_project_5F_header_indexing (Lexique_galgasScanner_33_ * inLexique) {
  rule_galgas_33_ProjectSyntax_project_5F_header_i0_indexing(inLexique) ;
}

void cGrammar_galgas_33_ProjectGrammar::nt_project_5F_header_ (GGS_lbigint & parameter_1,
                                GGS_lbigint & parameter_2,
                                GGS_lbigint & parameter_3,
                                GGS_lstring & parameter_4,
                                Lexique_galgasScanner_33_ * inLexique) {
  rule_galgas_33_ProjectSyntax_project_5F_header_i0_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'project_component_start_symbol' non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

void cGrammar_galgas_33_ProjectGrammar::nt_project_5F_component_5F_start_5F_symbol_indexing (Lexique_galgasScanner_33_ * inLexique) {
  rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_indexing(inLexique) ;
}

void cGrammar_galgas_33_ProjectGrammar::nt_project_5F_component_5F_start_5F_symbol_ (const GGS_lstring parameter_1,
                                GGS_galgas_33_ProjectComponentAST & parameter_2,
                                Lexique_galgasScanner_33_ * inLexique) {
  rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_(parameter_1, parameter_2, inLexique) ;
}

void cGrammar_galgas_33_ProjectGrammar::performIndexing (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_galgasScanner_33_ * scanner = nullptr ;
  macroMyNew (scanner, Lexique_galgasScanner_33_ (inCompiler, inSourceFilePath COMMA_HERE)) ;
  scanner->enableIndexing () ;
  if (scanner->sourceText ().isValid ()) {
    const bool ok = scanner->performTopDownParsing (gProductions_galgas3ProjectGrammar, gProductionNames_galgas3ProjectGrammar, gProductionIndexes_galgas3ProjectGrammar,
                                                    gFirstProductionIndexes_galgas3ProjectGrammar, gDecision_galgas3ProjectGrammar, gDecisionIndexes_galgas3ProjectGrammar, 65) ;
    if (ok) {
      cGrammar_galgas_33_ProjectGrammar grammar ;
      grammar.nt_project_5F_component_5F_start_5F_symbol_indexing (scanner) ;
    }
    scanner->generateIndexFile () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_galgas_33_ProjectGrammar::performOnlyLexicalAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_galgasScanner_33_ * scanner = nullptr ;
  macroMyNew (scanner, Lexique_galgasScanner_33_ (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_galgas_33_ProjectGrammar::performOnlySyntaxAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_galgasScanner_33_ * scanner = nullptr ;
  macroMyNew (scanner, Lexique_galgasScanner_33_ (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performTopDownParsing (gProductions_galgas3ProjectGrammar, gProductionNames_galgas3ProjectGrammar, gProductionIndexes_galgas3ProjectGrammar,
                                    gFirstProductionIndexes_galgas3ProjectGrammar, gDecision_galgas3ProjectGrammar, gDecisionIndexes_galgas3ProjectGrammar, 65) ;
  }
  macroDetachSharedObject (scanner) ;
}

//--------------------------------------------------------------------------------------------------
//
//                              Grammar start symbol implementation                                 
//
//--------------------------------------------------------------------------------------------------

void cGrammar_galgas_33_ProjectGrammar::_performSourceFileParsing_ (Compiler * inCompiler,
                                GGS_lstring inFilePath,
                                const GGS_lstring  parameter_1,
                                GGS_galgas_33_ProjectComponentAST &  parameter_2
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GGS_string filePathAsString = inFilePath.readProperty_string () ;
    String filePath = filePathAsString.stringValue () ;
    if (! FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().deletingLastPathComponent ().appendingPathComponent (filePath) ;
    }
    if (FileManager::fileExistsAtPath (filePath)) {
    Lexique_galgasScanner_33_ * scanner = nullptr ;
    macroMyNew (scanner, Lexique_galgasScanner_33_ (inCompiler, filePath COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performTopDownParsing (gProductions_galgas3ProjectGrammar, gProductionNames_galgas3ProjectGrammar, gProductionIndexes_galgas3ProjectGrammar,
                                                      gFirstProductionIndexes_galgas3ProjectGrammar, gDecision_galgas3ProjectGrammar, gDecisionIndexes_galgas3ProjectGrammar, 65) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_galgas_33_ProjectGrammar grammar ;
        grammar.nt_project_5F_component_5F_start_5F_symbol_ (parameter_1, parameter_2, scanner) ;
        }
      }else{
        String message ;
        message.appendString ("the '") ;
        message.appendString (filePath) ;
        message.appendString ("' file exists, but cannot be read") ;
        const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, GenericArray <FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      String message ;
      message.appendString ("the '") ;
      message.appendString (filePath) ;
      message.appendString ("' file does not exist") ;
      const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, GenericArray <FixItDescription> () COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void cGrammar_galgas_33_ProjectGrammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                GGS_string inSourceString,
                                GGS_string inNameString,
                                const GGS_lstring  parameter_1,
                                GGS_galgas_33_ProjectComponentAST &  parameter_2
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const String sourceString = inSourceString.stringValue () ;
    const String nameString = inNameString.stringValue () ;
    Lexique_galgasScanner_33_ * scanner = nullptr ;
    macroMyNew (scanner, Lexique_galgasScanner_33_ (inCompiler, sourceString, nameString COMMA_HERE)) ;
    const bool ok = scanner->performTopDownParsing (gProductions_galgas3ProjectGrammar, gProductionNames_galgas3ProjectGrammar, gProductionIndexes_galgas3ProjectGrammar,
                                                    gFirstProductionIndexes_galgas3ProjectGrammar, gDecision_galgas3ProjectGrammar, gDecisionIndexes_galgas3ProjectGrammar, 65) ;
    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
      cGrammar_galgas_33_ProjectGrammar grammar ;
      grammar.nt_project_5F_component_5F_start_5F_symbol_ (parameter_1, parameter_2, scanner) ;
    }
    macroDetachSharedObject (scanner) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//              'select_galgas_33_ProjectSyntax_0' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_galgas_33_ProjectGrammar::select_galgas_33_ProjectSyntax_0 (Lexique_galgasScanner_33_ * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// @templateLexiqueComponentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateLexiqueComponentAST::objectCompare (const GGS_templateLexiqueComponentAST & inOperand) const {
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

GGS_templateLexiqueComponentAST::GGS_templateLexiqueComponentAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateLexiqueComponentAST GGS_templateLexiqueComponentAST::
init_21_isPredefined_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                      const GGS_lstring & in_mLexiqueComponentName,
                                      const GGS_lstring & in_mLexiqueSuperComponentName,
                                      const GGS_templateDelimitorListAST & in_mTemplateDelimitorList,
                                      const GGS_templateReplacementListAST & in_mTemplateReplacementList,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_templateLexiqueComponentAST * object = nullptr ;
  macroMyNew (object, cPtr_templateLexiqueComponentAST (inCompiler COMMA_THERE)) ;
  object->templateLexiqueComponentAST_init_21_isPredefined_21__21__21__21_ (in_isPredefined, in_mLexiqueComponentName, in_mLexiqueSuperComponentName, in_mTemplateDelimitorList, in_mTemplateReplacementList, inCompiler) ;
  const GGS_templateLexiqueComponentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::
templateLexiqueComponentAST_init_21_isPredefined_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                  const GGS_lstring & in_mLexiqueComponentName,
                                                                  const GGS_lstring & in_mLexiqueSuperComponentName,
                                                                  const GGS_templateDelimitorListAST & in_mTemplateDelimitorList,
                                                                  const GGS_templateReplacementListAST & in_mTemplateReplacementList,
                                                                  Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mLexiqueSuperComponentName = in_mLexiqueSuperComponentName ;
  mProperty_mTemplateDelimitorList = in_mTemplateDelimitorList ;
  mProperty_mTemplateReplacementList = in_mTemplateReplacementList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLexiqueComponentAST::GGS_templateLexiqueComponentAST (const cPtr_templateLexiqueComponentAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLexiqueComponentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateLexiqueComponentAST::readProperty_mLexiqueComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateLexiqueComponentAST * p = (cPtr_templateLexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLexiqueComponentAST) ;
    return p->mProperty_mLexiqueComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateLexiqueComponentAST::readProperty_mLexiqueSuperComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateLexiqueComponentAST * p = (cPtr_templateLexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLexiqueComponentAST) ;
    return p->mProperty_mLexiqueSuperComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST GGS_templateLexiqueComponentAST::readProperty_mTemplateDelimitorList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateDelimitorListAST () ;
  }else{
    cPtr_templateLexiqueComponentAST * p = (cPtr_templateLexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLexiqueComponentAST) ;
    return p->mProperty_mTemplateDelimitorList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST GGS_templateLexiqueComponentAST::readProperty_mTemplateReplacementList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateReplacementListAST () ;
  }else{
    cPtr_templateLexiqueComponentAST * p = (cPtr_templateLexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLexiqueComponentAST) ;
    return p->mProperty_mTemplateReplacementList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateLexiqueComponentAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateLexiqueComponentAST::cPtr_templateLexiqueComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mLexiqueComponentName (),
mProperty_mLexiqueSuperComponentName (),
mProperty_mTemplateDelimitorList (),
mProperty_mTemplateReplacementList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateLexiqueComponentAST::cPtr_templateLexiqueComponentAST (const GGS_bool & in_isPredefined,
                                                                    const GGS_lstring & in_mLexiqueComponentName,
                                                                    const GGS_lstring & in_mLexiqueSuperComponentName,
                                                                    const GGS_templateDelimitorListAST & in_mTemplateDelimitorList,
                                                                    const GGS_templateReplacementListAST & in_mTemplateReplacementList,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_templateLexiqueComponentAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_templateLexiqueComponentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateLexiqueComponentAST (mProperty_isPredefined, mProperty_mLexiqueComponentName, mProperty_mLexiqueSuperComponentName, mProperty_mTemplateDelimitorList, mProperty_mTemplateReplacementList, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @templateLexiqueComponentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLexiqueComponentAST ("templateLexiqueComponentAST",
                                                                                & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateLexiqueComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLexiqueComponentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateLexiqueComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateLexiqueComponentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLexiqueComponentAST GGS_templateLexiqueComponentAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_templateLexiqueComponentAST result ;
  const GGS_templateLexiqueComponentAST * p = (const GGS_templateLexiqueComponentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateLexiqueComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLexiqueComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateExpression (cPtr_semanticExpressionForGeneration * inObject,
                                             GGS_string & io_ioGeneratedCode,
                                             GGS_stringset & io_ioInclusionSet,
                                             GGS_uint & io_ioTemporaryVariableIndex,
                                             GGS_stringset & io_ioUnusedVariableCppNameSet,
                                             GGS_string & out_outCppExpression,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outCppExpression.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticExpressionForGeneration) ;
    inObject->method_generateExpression (io_ioGeneratedCode, io_ioInclusionSet, io_ioTemporaryVariableIndex, io_ioUnusedVariableCppNameSet, out_outCppExpression, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @castInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_castInExpressionForGeneration::objectCompare (const GGS_castInExpressionForGeneration & inOperand) const {
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

GGS_castInExpressionForGeneration::GGS_castInExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_castInExpressionForGeneration GGS_castInExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                          const GGS_string & in_mTypeName,
                          const GGS_unifiedTypeMapEntry & in_mCastType,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_castInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_castInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->castInExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mReceiverExpression, in_mTypeName, in_mCastType, inCompiler) ;
  const GGS_castInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionForGeneration::
castInExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                        const GGS_location & in_mLocation,
                                                        const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                        const GGS_string & in_mTypeName,
                                                        const GGS_unifiedTypeMapEntry & in_mCastType,
                                                        Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mCastType = in_mCastType ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionForGeneration::GGS_castInExpressionForGeneration (const cPtr_castInExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_castInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_castInExpressionForGeneration::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_castInExpressionForGeneration::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_castInExpressionForGeneration::readProperty_mCastType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    return p->mProperty_mCastType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @castInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_castInExpressionForGeneration::cPtr_castInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mTypeName (),
mProperty_mCastType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_castInExpressionForGeneration::cPtr_castInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                        const GGS_location & in_mLocation,
                                                                        const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                        const GGS_string & in_mTypeName,
                                                                        const GGS_unifiedTypeMapEntry & in_mCastType,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mTypeName (),
mProperty_mCastType () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mCastType = in_mCastType ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_castInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionForGeneration ;
}

void cPtr_castInExpressionForGeneration::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@castInExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCastType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_castInExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_castInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mReceiverExpression, mProperty_mTypeName, mProperty_mCastType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_castInExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mCastType.printNonNullClassInstanceProperties ("mCastType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @castInExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_castInExpressionForGeneration ("castInExpressionForGeneration",
                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_castInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_castInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_castInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionForGeneration GGS_castInExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_castInExpressionForGeneration result ;
  const GGS_castInExpressionForGeneration * p = (const GGS_castInExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_castInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @outputActualParameterForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outputActualParameterForGeneration::objectCompare (const GGS_outputActualParameterForGeneration & inOperand) const {
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

GGS_outputActualParameterForGeneration::GGS_outputActualParameterForGeneration (void) :
GGS_actualParameterForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_outputActualParameterForGeneration GGS_outputActualParameterForGeneration::
init_21__21_ (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
              const GGS_semanticExpressionForGeneration & in_mOutputActualParameterExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_outputActualParameterForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_outputActualParameterForGeneration (inCompiler COMMA_THERE)) ;
  object->outputActualParameterForGeneration_init_21__21_ (in_mFormalArgumentType, in_mOutputActualParameterExpression, inCompiler) ;
  const GGS_outputActualParameterForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterForGeneration::
outputActualParameterForGeneration_init_21__21_ (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                 const GGS_semanticExpressionForGeneration & in_mOutputActualParameterExpression,
                                                 Compiler * /* inCompiler */) {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  mProperty_mOutputActualParameterExpression = in_mOutputActualParameterExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterForGeneration::GGS_outputActualParameterForGeneration (const cPtr_outputActualParameterForGeneration * inSourcePtr) :
GGS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputActualParameterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_outputActualParameterForGeneration::readProperty_mOutputActualParameterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_outputActualParameterForGeneration * p = (cPtr_outputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterForGeneration) ;
    return p->mProperty_mOutputActualParameterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @outputActualParameterForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_outputActualParameterForGeneration::cPtr_outputActualParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (inCompiler COMMA_THERE),
mProperty_mOutputActualParameterExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_outputActualParameterForGeneration::cPtr_outputActualParameterForGeneration (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                  const GGS_semanticExpressionForGeneration & in_mOutputActualParameterExpression,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (in_mFormalArgumentType, inCompiler COMMA_THERE),
mProperty_mOutputActualParameterExpression () {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  mProperty_mOutputActualParameterExpression = in_mOutputActualParameterExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_outputActualParameterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterForGeneration ;
}

void cPtr_outputActualParameterForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@outputActualParameterForGeneration:") ;
  mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutputActualParameterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_outputActualParameterForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_outputActualParameterForGeneration (mProperty_mFormalArgumentType, mProperty_mOutputActualParameterExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_outputActualParameterForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOutputActualParameterExpression.printNonNullClassInstanceProperties ("mOutputActualParameterExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @outputActualParameterForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outputActualParameterForGeneration ("outputActualParameterForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_actualParameterForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outputActualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outputActualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outputActualParameterForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterForGeneration GGS_outputActualParameterForGeneration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_outputActualParameterForGeneration result ;
  const GGS_outputActualParameterForGeneration * p = (const GGS_outputActualParameterForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outputActualParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputActualParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @outputInputActualParameterForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outputInputActualParameterForGeneration::objectCompare (const GGS_outputInputActualParameterForGeneration & inOperand) const {
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

GGS_outputInputActualParameterForGeneration::GGS_outputInputActualParameterForGeneration (void) :
GGS_actualParameterForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_outputInputActualParameterForGeneration GGS_outputInputActualParameterForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                      const GGS_string & in_mOutputInputVariableCppName,
                      const GGS_lstringlist & in_mStructAttributeList,
                      const GGS_unifiedTypeMapEntryList & in_mTypeList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_outputInputActualParameterForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_outputInputActualParameterForGeneration (inCompiler COMMA_THERE)) ;
  object->outputInputActualParameterForGeneration_init_21__21__21__21_ (in_mFormalArgumentType, in_mOutputInputVariableCppName, in_mStructAttributeList, in_mTypeList, inCompiler) ;
  const GGS_outputInputActualParameterForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterForGeneration::
outputInputActualParameterForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                              const GGS_string & in_mOutputInputVariableCppName,
                                                              const GGS_lstringlist & in_mStructAttributeList,
                                                              const GGS_unifiedTypeMapEntryList & in_mTypeList,
                                                              Compiler * /* inCompiler */) {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  mProperty_mOutputInputVariableCppName = in_mOutputInputVariableCppName ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mTypeList = in_mTypeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterForGeneration::GGS_outputInputActualParameterForGeneration (const cPtr_outputInputActualParameterForGeneration * inSourcePtr) :
GGS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputInputActualParameterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_outputInputActualParameterForGeneration::readProperty_mOutputInputVariableCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_outputInputActualParameterForGeneration * p = (cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    return p->mProperty_mOutputInputVariableCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_outputInputActualParameterForGeneration::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_outputInputActualParameterForGeneration * p = (cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList GGS_outputInputActualParameterForGeneration::readProperty_mTypeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntryList () ;
  }else{
    cPtr_outputInputActualParameterForGeneration * p = (cPtr_outputInputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputActualParameterForGeneration) ;
    return p->mProperty_mTypeList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @outputInputActualParameterForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_outputInputActualParameterForGeneration::cPtr_outputInputActualParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (inCompiler COMMA_THERE),
mProperty_mOutputInputVariableCppName (),
mProperty_mStructAttributeList (),
mProperty_mTypeList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_outputInputActualParameterForGeneration::cPtr_outputInputActualParameterForGeneration (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                            const GGS_string & in_mOutputInputVariableCppName,
                                                                                            const GGS_lstringlist & in_mStructAttributeList,
                                                                                            const GGS_unifiedTypeMapEntryList & in_mTypeList,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (in_mFormalArgumentType, inCompiler COMMA_THERE),
mProperty_mOutputInputVariableCppName (),
mProperty_mStructAttributeList (),
mProperty_mTypeList () {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  mProperty_mOutputInputVariableCppName = in_mOutputInputVariableCppName ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mTypeList = in_mTypeList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_outputInputActualParameterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration ;
}

void cPtr_outputInputActualParameterForGeneration::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@outputInputActualParameterForGeneration:") ;
  mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutputInputVariableCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_outputInputActualParameterForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_outputInputActualParameterForGeneration (mProperty_mFormalArgumentType, mProperty_mOutputInputVariableCppName, mProperty_mStructAttributeList, mProperty_mTypeList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_outputInputActualParameterForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOutputInputVariableCppName.printNonNullClassInstanceProperties ("mOutputInputVariableCppName") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
    mProperty_mTypeList.printNonNullClassInstanceProperties ("mTypeList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @outputInputActualParameterForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration ("outputInputActualParameterForGeneration",
                                                                                            & kTypeDescriptor_GALGAS_actualParameterForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outputInputActualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outputInputActualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outputInputActualParameterForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputInputActualParameterForGeneration GGS_outputInputActualParameterForGeneration::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_outputInputActualParameterForGeneration result ;
  const GGS_outputInputActualParameterForGeneration * p = (const GGS_outputInputActualParameterForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outputInputActualParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputActualParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @functionPrototypeDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionPrototypeDeclarationForGeneration::objectCompare (const GGS_functionPrototypeDeclarationForGeneration & inOperand) const {
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

GGS_functionPrototypeDeclarationForGeneration::GGS_functionPrototypeDeclarationForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration GGS_functionPrototypeDeclarationForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21_ (const GGS_bool & in_generateHeader,
                                                                 const GGS_string & in_implementationCppFileName,
                                                                 const GGS_string & in_mFunctionName,
                                                                 const GGS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                 const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cPtr_functionPrototypeDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_functionPrototypeDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->functionPrototypeDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mFunctionName, in_mFormalArgumentList, in_mReturnType, inCompiler) ;
  const GGS_functionPrototypeDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_functionPrototypeDeclarationForGeneration::
functionPrototypeDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                           const GGS_string & in_implementationCppFileName,
                                                                                                           const GGS_string & in_mFunctionName,
                                                                                                           const GGS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                                           const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                                                           Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mReturnType = in_mReturnType ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration::GGS_functionPrototypeDeclarationForGeneration (const cPtr_functionPrototypeDeclarationForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionPrototypeDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_functionPrototypeDeclarationForGeneration::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_functionPrototypeDeclarationForGeneration * p = (cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration GGS_functionPrototypeDeclarationForGeneration::readProperty_mFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalInputParameterListForGeneration () ;
  }else{
    cPtr_functionPrototypeDeclarationForGeneration * p = (cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    return p->mProperty_mFormalArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_functionPrototypeDeclarationForGeneration::readProperty_mReturnType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_functionPrototypeDeclarationForGeneration * p = (cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    return p->mProperty_mReturnType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @functionPrototypeDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_functionPrototypeDeclarationForGeneration::cPtr_functionPrototypeDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mFormalArgumentList (),
mProperty_mReturnType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_functionPrototypeDeclarationForGeneration::cPtr_functionPrototypeDeclarationForGeneration (const GGS_bool & in_generateHeader,
                                                                                                const GGS_string & in_implementationCppFileName,
                                                                                                const GGS_string & in_mFunctionName,
                                                                                                const GGS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                                const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mFormalArgumentList (),
mProperty_mReturnType () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mReturnType = in_mReturnType ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_functionPrototypeDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration ;
}

void cPtr_functionPrototypeDeclarationForGeneration::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@functionPrototypeDeclarationForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReturnType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_functionPrototypeDeclarationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_functionPrototypeDeclarationForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mFunctionName, mProperty_mFormalArgumentList, mProperty_mReturnType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_functionPrototypeDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mFormalArgumentList.printNonNullClassInstanceProperties ("mFormalArgumentList") ;
    mProperty_mReturnType.printNonNullClassInstanceProperties ("mReturnType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @functionPrototypeDeclarationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration ("functionPrototypeDeclarationForGeneration",
                                                                                              & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionPrototypeDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionPrototypeDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionPrototypeDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration GGS_functionPrototypeDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_functionPrototypeDeclarationForGeneration result ;
  const GGS_functionPrototypeDeclarationForGeneration * p = (const GGS_functionPrototypeDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionPrototypeDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionPrototypeDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionPrototypeDeclarationForGeneration_2E_weak::objectCompare (const GGS_functionPrototypeDeclarationForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_functionPrototypeDeclarationForGeneration_2E_weak::GGS_functionPrototypeDeclarationForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration_2E_weak & GGS_functionPrototypeDeclarationForGeneration_2E_weak::operator = (const GGS_functionPrototypeDeclarationForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration_2E_weak::GGS_functionPrototypeDeclarationForGeneration_2E_weak (const GGS_functionPrototypeDeclarationForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration_2E_weak GGS_functionPrototypeDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_functionPrototypeDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration GGS_functionPrototypeDeclarationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_functionPrototypeDeclarationForGeneration result ;
  if (isValid ()) {
    const cPtr_functionPrototypeDeclarationForGeneration * p = (cPtr_functionPrototypeDeclarationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_functionPrototypeDeclarationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration GGS_functionPrototypeDeclarationForGeneration_2E_weak::bang_functionPrototypeDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_functionPrototypeDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionPrototypeDeclarationForGeneration) ;
      result = GGS_functionPrototypeDeclarationForGeneration ((cPtr_functionPrototypeDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @functionPrototypeDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration_2E_weak ("functionPrototypeDeclarationForGeneration.weak",
                                                                                                      & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionPrototypeDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionPrototypeDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionPrototypeDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration_2E_weak GGS_functionPrototypeDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_functionPrototypeDeclarationForGeneration_2E_weak result ;
  const GGS_functionPrototypeDeclarationForGeneration_2E_weak * p = (const GGS_functionPrototypeDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionPrototypeDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionPrototypeDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @functionImplementationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionImplementationForGeneration::objectCompare (const GGS_functionImplementationForGeneration & inOperand) const {
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

GGS_functionImplementationForGeneration::GGS_functionImplementationForGeneration (void) :
GGS_functionPrototypeDeclarationForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_functionImplementationForGeneration GGS_functionImplementationForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                         const GGS_string & in_implementationCppFileName,
                                                                         const GGS_string & in_mFunctionName,
                                                                         const GGS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                         const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                         const GGS_string & in_mResultVariableCppName,
                                                                         const GGS_semanticInstructionListForGeneration & in_mFunctionInstructionList,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cPtr_functionImplementationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_functionImplementationForGeneration (inCompiler COMMA_THERE)) ;
  object->functionImplementationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mFunctionName, in_mFormalArgumentList, in_mReturnType, in_mResultVariableCppName, in_mFunctionInstructionList, inCompiler) ;
  const GGS_functionImplementationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_functionImplementationForGeneration::
functionImplementationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                             const GGS_string & in_implementationCppFileName,
                                                                                                             const GGS_string & in_mFunctionName,
                                                                                                             const GGS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                                             const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                                                             const GGS_string & in_mResultVariableCppName,
                                                                                                             const GGS_semanticInstructionListForGeneration & in_mFunctionInstructionList,
                                                                                                             Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mReturnType = in_mReturnType ;
  mProperty_mResultVariableCppName = in_mResultVariableCppName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration::GGS_functionImplementationForGeneration (const cPtr_functionImplementationForGeneration * inSourcePtr) :
GGS_functionPrototypeDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionImplementationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_functionImplementationForGeneration::readProperty_mResultVariableCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_functionImplementationForGeneration * p = (cPtr_functionImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionImplementationForGeneration) ;
    return p->mProperty_mResultVariableCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_functionImplementationForGeneration::readProperty_mFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_functionImplementationForGeneration * p = (cPtr_functionImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionImplementationForGeneration) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @functionImplementationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_functionImplementationForGeneration::cPtr_functionImplementationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_functionPrototypeDeclarationForGeneration (inCompiler COMMA_THERE),
mProperty_mResultVariableCppName (),
mProperty_mFunctionInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_functionImplementationForGeneration::cPtr_functionImplementationForGeneration (const GGS_bool & in_generateHeader,
                                                                                    const GGS_string & in_implementationCppFileName,
                                                                                    const GGS_string & in_mFunctionName,
                                                                                    const GGS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                    const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                                    const GGS_string & in_mResultVariableCppName,
                                                                                    const GGS_semanticInstructionListForGeneration & in_mFunctionInstructionList,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_functionPrototypeDeclarationForGeneration (in_generateHeader, in_implementationCppFileName, in_mFunctionName, in_mFormalArgumentList, in_mReturnType, inCompiler COMMA_THERE),
mProperty_mResultVariableCppName (),
mProperty_mFunctionInstructionList () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mReturnType = in_mReturnType ;
  mProperty_mResultVariableCppName = in_mResultVariableCppName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_functionImplementationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionImplementationForGeneration ;
}

void cPtr_functionImplementationForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@functionImplementationForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReturnType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultVariableCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_functionImplementationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_functionImplementationForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mFunctionName, mProperty_mFormalArgumentList, mProperty_mReturnType, mProperty_mResultVariableCppName, mProperty_mFunctionInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_functionImplementationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_functionPrototypeDeclarationForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mResultVariableCppName.printNonNullClassInstanceProperties ("mResultVariableCppName") ;
    mProperty_mFunctionInstructionList.printNonNullClassInstanceProperties ("mFunctionInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @functionImplementationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionImplementationForGeneration ("functionImplementationForGeneration",
                                                                                        & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionImplementationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionImplementationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionImplementationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionImplementationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration GGS_functionImplementationForGeneration::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_functionImplementationForGeneration result ;
  const GGS_functionImplementationForGeneration * p = (const GGS_functionImplementationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionImplementationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionImplementationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionImplementationForGeneration_2E_weak::objectCompare (const GGS_functionImplementationForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_functionImplementationForGeneration_2E_weak::GGS_functionImplementationForGeneration_2E_weak (void) :
GGS_functionPrototypeDeclarationForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration_2E_weak & GGS_functionImplementationForGeneration_2E_weak::operator = (const GGS_functionImplementationForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration_2E_weak::GGS_functionImplementationForGeneration_2E_weak (const GGS_functionImplementationForGeneration & inSource) :
GGS_functionPrototypeDeclarationForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration_2E_weak GGS_functionImplementationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_functionImplementationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration GGS_functionImplementationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_functionImplementationForGeneration result ;
  if (isValid ()) {
    const cPtr_functionImplementationForGeneration * p = (cPtr_functionImplementationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_functionImplementationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration GGS_functionImplementationForGeneration_2E_weak::bang_functionImplementationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_functionImplementationForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionImplementationForGeneration) ;
      result = GGS_functionImplementationForGeneration ((cPtr_functionImplementationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @functionImplementationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionImplementationForGeneration_2E_weak ("functionImplementationForGeneration.weak",
                                                                                                & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionImplementationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionImplementationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionImplementationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionImplementationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration_2E_weak GGS_functionImplementationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_functionImplementationForGeneration_2E_weak result ;
  const GGS_functionImplementationForGeneration_2E_weak * p = (const GGS_functionImplementationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionImplementationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionImplementationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @onceFunctionDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_onceFunctionDeclarationForGeneration::objectCompare (const GGS_onceFunctionDeclarationForGeneration & inOperand) const {
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

GGS_onceFunctionDeclarationForGeneration::GGS_onceFunctionDeclarationForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration GGS_onceFunctionDeclarationForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                     const GGS_string & in_implementationCppFileName,
                                                                     const GGS_string & in_mFunctionName,
                                                                     const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                     const GGS_string & in_mResultVariableCppName,
                                                                     const GGS_semanticInstructionListForGeneration & in_mFunctionInstructionList,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cPtr_onceFunctionDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_onceFunctionDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->onceFunctionDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mFunctionName, in_mReturnType, in_mResultVariableCppName, in_mFunctionInstructionList, inCompiler) ;
  const GGS_onceFunctionDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationForGeneration::
onceFunctionDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                          const GGS_string & in_implementationCppFileName,
                                                                                                          const GGS_string & in_mFunctionName,
                                                                                                          const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                                                          const GGS_string & in_mResultVariableCppName,
                                                                                                          const GGS_semanticInstructionListForGeneration & in_mFunctionInstructionList,
                                                                                                          Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mReturnType = in_mReturnType ;
  mProperty_mResultVariableCppName = in_mResultVariableCppName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration::GGS_onceFunctionDeclarationForGeneration (const cPtr_onceFunctionDeclarationForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_onceFunctionDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_onceFunctionDeclarationForGeneration::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_onceFunctionDeclarationForGeneration::readProperty_mReturnType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    return p->mProperty_mReturnType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_onceFunctionDeclarationForGeneration::readProperty_mResultVariableCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    return p->mProperty_mResultVariableCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_onceFunctionDeclarationForGeneration::readProperty_mFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @onceFunctionDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_onceFunctionDeclarationForGeneration::cPtr_onceFunctionDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mReturnType (),
mProperty_mResultVariableCppName (),
mProperty_mFunctionInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_onceFunctionDeclarationForGeneration::cPtr_onceFunctionDeclarationForGeneration (const GGS_bool & in_generateHeader,
                                                                                      const GGS_string & in_implementationCppFileName,
                                                                                      const GGS_string & in_mFunctionName,
                                                                                      const GGS_unifiedTypeMapEntry & in_mReturnType,
                                                                                      const GGS_string & in_mResultVariableCppName,
                                                                                      const GGS_semanticInstructionListForGeneration & in_mFunctionInstructionList,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mReturnType (),
mProperty_mResultVariableCppName (),
mProperty_mFunctionInstructionList () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mReturnType = in_mReturnType ;
  mProperty_mResultVariableCppName = in_mResultVariableCppName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_onceFunctionDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration ;
}

void cPtr_onceFunctionDeclarationForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@onceFunctionDeclarationForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReturnType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultVariableCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_onceFunctionDeclarationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_onceFunctionDeclarationForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mFunctionName, mProperty_mReturnType, mProperty_mResultVariableCppName, mProperty_mFunctionInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_onceFunctionDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mReturnType.printNonNullClassInstanceProperties ("mReturnType") ;
    mProperty_mResultVariableCppName.printNonNullClassInstanceProperties ("mResultVariableCppName") ;
    mProperty_mFunctionInstructionList.printNonNullClassInstanceProperties ("mFunctionInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @onceFunctionDeclarationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration ("onceFunctionDeclarationForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_onceFunctionDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_onceFunctionDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_onceFunctionDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration GGS_onceFunctionDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_onceFunctionDeclarationForGeneration result ;
  const GGS_onceFunctionDeclarationForGeneration * p = (const GGS_onceFunctionDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_onceFunctionDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("onceFunctionDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_onceFunctionDeclarationForGeneration_2E_weak::objectCompare (const GGS_onceFunctionDeclarationForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_onceFunctionDeclarationForGeneration_2E_weak::GGS_onceFunctionDeclarationForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration_2E_weak & GGS_onceFunctionDeclarationForGeneration_2E_weak::operator = (const GGS_onceFunctionDeclarationForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration_2E_weak::GGS_onceFunctionDeclarationForGeneration_2E_weak (const GGS_onceFunctionDeclarationForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration_2E_weak GGS_onceFunctionDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_onceFunctionDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration GGS_onceFunctionDeclarationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_onceFunctionDeclarationForGeneration result ;
  if (isValid ()) {
    const cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_onceFunctionDeclarationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration GGS_onceFunctionDeclarationForGeneration_2E_weak::bang_onceFunctionDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_onceFunctionDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_onceFunctionDeclarationForGeneration) ;
      result = GGS_onceFunctionDeclarationForGeneration ((cPtr_onceFunctionDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @onceFunctionDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration_2E_weak ("onceFunctionDeclarationForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_onceFunctionDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_onceFunctionDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_onceFunctionDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration_2E_weak GGS_onceFunctionDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_onceFunctionDeclarationForGeneration_2E_weak result ;
  const GGS_onceFunctionDeclarationForGeneration_2E_weak * p = (const GGS_onceFunctionDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_onceFunctionDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("onceFunctionDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @filewrapperDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperDeclarationForGeneration::objectCompare (const GGS_filewrapperDeclarationForGeneration & inOperand) const {
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

GGS_filewrapperDeclarationForGeneration::GGS_filewrapperDeclarationForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration GGS_filewrapperDeclarationForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                         const GGS_string & in_implementationCppFileName,
                                                                         const GGS_string & in_mFilewrapperName,
                                                                         const GGS_string & in_mFilewrapperAbsolutePath,
                                                                         const GGS_wrapperFileMap & in_mFilewrapperFileMap,
                                                                         const GGS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                                         const GGS_filewrapperTemplateListForGeneration & in_mFilewrapperTemplateListForGeneration,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cPtr_filewrapperDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_filewrapperDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->filewrapperDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mFilewrapperName, in_mFilewrapperAbsolutePath, in_mFilewrapperFileMap, in_mFilewrapperDirectoryMap, in_mFilewrapperTemplateListForGeneration, inCompiler) ;
  const GGS_filewrapperDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationForGeneration::
filewrapperDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                             const GGS_string & in_implementationCppFileName,
                                                                                                             const GGS_string & in_mFilewrapperName,
                                                                                                             const GGS_string & in_mFilewrapperAbsolutePath,
                                                                                                             const GGS_wrapperFileMap & in_mFilewrapperFileMap,
                                                                                                             const GGS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                                                                             const GGS_filewrapperTemplateListForGeneration & in_mFilewrapperTemplateListForGeneration,
                                                                                                             Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperAbsolutePath = in_mFilewrapperAbsolutePath ;
  mProperty_mFilewrapperFileMap = in_mFilewrapperFileMap ;
  mProperty_mFilewrapperDirectoryMap = in_mFilewrapperDirectoryMap ;
  mProperty_mFilewrapperTemplateListForGeneration = in_mFilewrapperTemplateListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration::GGS_filewrapperDeclarationForGeneration (const cPtr_filewrapperDeclarationForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperAbsolutePath (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperAbsolutePath ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperFileMap GGS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperFileMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_wrapperFileMap () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperFileMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_wrapperDirectoryMap GGS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperDirectoryMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_wrapperDirectoryMap () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperDirectoryMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration GGS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperTemplateListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_filewrapperTemplateListForGeneration () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperTemplateListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperDeclarationForGeneration::cPtr_filewrapperDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperAbsolutePath (),
mProperty_mFilewrapperFileMap (),
mProperty_mFilewrapperDirectoryMap (),
mProperty_mFilewrapperTemplateListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

cPtr_filewrapperDeclarationForGeneration::cPtr_filewrapperDeclarationForGeneration (const GGS_bool & in_generateHeader,
                                                                                    const GGS_string & in_implementationCppFileName,
                                                                                    const GGS_string & in_mFilewrapperName,
                                                                                    const GGS_string & in_mFilewrapperAbsolutePath,
                                                                                    const GGS_wrapperFileMap & in_mFilewrapperFileMap,
                                                                                    const GGS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                                                    const GGS_filewrapperTemplateListForGeneration & in_mFilewrapperTemplateListForGeneration,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperAbsolutePath (),
mProperty_mFilewrapperFileMap (),
mProperty_mFilewrapperDirectoryMap (),
mProperty_mFilewrapperTemplateListForGeneration () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperAbsolutePath = in_mFilewrapperAbsolutePath ;
  mProperty_mFilewrapperFileMap = in_mFilewrapperFileMap ;
  mProperty_mFilewrapperDirectoryMap = in_mFilewrapperDirectoryMap ;
  mProperty_mFilewrapperTemplateListForGeneration = in_mFilewrapperTemplateListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_filewrapperDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ;
}

void cPtr_filewrapperDeclarationForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@filewrapperDeclarationForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperAbsolutePath.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperFileMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperDirectoryMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperTemplateListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_filewrapperDeclarationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_filewrapperDeclarationForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mFilewrapperName, mProperty_mFilewrapperAbsolutePath, mProperty_mFilewrapperFileMap, mProperty_mFilewrapperDirectoryMap, mProperty_mFilewrapperTemplateListForGeneration, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_filewrapperDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFilewrapperName.printNonNullClassInstanceProperties ("mFilewrapperName") ;
    mProperty_mFilewrapperAbsolutePath.printNonNullClassInstanceProperties ("mFilewrapperAbsolutePath") ;
    mProperty_mFilewrapperFileMap.printNonNullClassInstanceProperties ("mFilewrapperFileMap") ;
    mProperty_mFilewrapperDirectoryMap.printNonNullClassInstanceProperties ("mFilewrapperDirectoryMap") ;
    mProperty_mFilewrapperTemplateListForGeneration.printNonNullClassInstanceProperties ("mFilewrapperTemplateListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @filewrapperDeclarationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ("filewrapperDeclarationForGeneration",
                                                                                        & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration GGS_filewrapperDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_filewrapperDeclarationForGeneration result ;
  const GGS_filewrapperDeclarationForGeneration * p = (const GGS_filewrapperDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperDeclarationForGeneration_2E_weak::objectCompare (const GGS_filewrapperDeclarationForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_filewrapperDeclarationForGeneration_2E_weak::GGS_filewrapperDeclarationForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration_2E_weak & GGS_filewrapperDeclarationForGeneration_2E_weak::operator = (const GGS_filewrapperDeclarationForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration_2E_weak::GGS_filewrapperDeclarationForGeneration_2E_weak (const GGS_filewrapperDeclarationForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration_2E_weak GGS_filewrapperDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_filewrapperDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration GGS_filewrapperDeclarationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_filewrapperDeclarationForGeneration result ;
  if (isValid ()) {
    const cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_filewrapperDeclarationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration GGS_filewrapperDeclarationForGeneration_2E_weak::bang_filewrapperDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_filewrapperDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_filewrapperDeclarationForGeneration) ;
      result = GGS_filewrapperDeclarationForGeneration ((cPtr_filewrapperDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @filewrapperDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration_2E_weak ("filewrapperDeclarationForGeneration.weak",
                                                                                                & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration_2E_weak GGS_filewrapperDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_filewrapperDeclarationForGeneration_2E_weak result ;
  const GGS_filewrapperDeclarationForGeneration_2E_weak * p = (const GGS_filewrapperDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @programComponentForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_programComponentForGeneration::objectCompare (const GGS_programComponentForGeneration & inOperand) const {
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

GGS_programComponentForGeneration::GGS_programComponentForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_programComponentForGeneration GGS_programComponentForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21_ (const GGS_bool & in_generateHeader,
                                                             const GGS_string & in_implementationCppFileName,
                                                             const GGS_stringset & in_mInclusionSet,
                                                             const GGS_string & in_mImplementationString,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cPtr_programComponentForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_programComponentForGeneration (inCompiler COMMA_THERE)) ;
  object->programComponentForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21_ (in_generateHeader, in_implementationCppFileName, in_mInclusionSet, in_mImplementationString, inCompiler) ;
  const GGS_programComponentForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_programComponentForGeneration::
programComponentForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21_ (const GGS_bool & in_generateHeader,
                                                                                           const GGS_string & in_implementationCppFileName,
                                                                                           const GGS_stringset & in_mInclusionSet,
                                                                                           const GGS_string & in_mImplementationString,
                                                                                           Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mInclusionSet = in_mInclusionSet ;
  mProperty_mImplementationString = in_mImplementationString ;
}

//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration::GGS_programComponentForGeneration (const cPtr_programComponentForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_programComponentForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_programComponentForGeneration::readProperty_mInclusionSet (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringset () ;
  }else{
    cPtr_programComponentForGeneration * p = (cPtr_programComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_programComponentForGeneration) ;
    return p->mProperty_mInclusionSet ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_programComponentForGeneration::readProperty_mImplementationString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_programComponentForGeneration * p = (cPtr_programComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_programComponentForGeneration) ;
    return p->mProperty_mImplementationString ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @programComponentForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_programComponentForGeneration::cPtr_programComponentForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mInclusionSet (),
mProperty_mImplementationString () {
}

//--------------------------------------------------------------------------------------------------

cPtr_programComponentForGeneration::cPtr_programComponentForGeneration (const GGS_bool & in_generateHeader,
                                                                        const GGS_string & in_implementationCppFileName,
                                                                        const GGS_stringset & in_mInclusionSet,
                                                                        const GGS_string & in_mImplementationString,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mInclusionSet (),
mProperty_mImplementationString () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mInclusionSet = in_mInclusionSet ;
  mProperty_mImplementationString = in_mImplementationString ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_programComponentForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programComponentForGeneration ;
}

void cPtr_programComponentForGeneration::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@programComponentForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInclusionSet.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImplementationString.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_programComponentForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_programComponentForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mInclusionSet, mProperty_mImplementationString, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_programComponentForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInclusionSet.printNonNullClassInstanceProperties ("mInclusionSet") ;
    mProperty_mImplementationString.printNonNullClassInstanceProperties ("mImplementationString") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @programComponentForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_programComponentForGeneration ("programComponentForGeneration",
                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_programComponentForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programComponentForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_programComponentForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_programComponentForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration GGS_programComponentForGeneration::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_programComponentForGeneration result ;
  const GGS_programComponentForGeneration * p = (const GGS_programComponentForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_programComponentForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programComponentForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_programComponentForGeneration_2E_weak::objectCompare (const GGS_programComponentForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_programComponentForGeneration_2E_weak::GGS_programComponentForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration_2E_weak & GGS_programComponentForGeneration_2E_weak::operator = (const GGS_programComponentForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration_2E_weak::GGS_programComponentForGeneration_2E_weak (const GGS_programComponentForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration_2E_weak GGS_programComponentForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_programComponentForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration GGS_programComponentForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_programComponentForGeneration result ;
  if (isValid ()) {
    const cPtr_programComponentForGeneration * p = (cPtr_programComponentForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_programComponentForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration GGS_programComponentForGeneration_2E_weak::bang_programComponentForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_programComponentForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_programComponentForGeneration) ;
      result = GGS_programComponentForGeneration ((cPtr_programComponentForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @programComponentForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_programComponentForGeneration_2E_weak ("programComponentForGeneration.weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_programComponentForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programComponentForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_programComponentForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_programComponentForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration_2E_weak GGS_programComponentForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_programComponentForGeneration_2E_weak result ;
  const GGS_programComponentForGeneration_2E_weak * p = (const GGS_programComponentForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_programComponentForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programComponentForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@genericExtensionMethodListMap insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (GGS_genericExtensionMethodListMap & ioObject,
                                const GGS_string constinArgument_inKey,
                                const GGS_lstring constinArgument_inValue,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_genericExtensionMethodListMap temp_1 = ioObject ;
    test_0 = temp_1.readProperty_dictionary ().getter_hasKey (constinArgument_inKey COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 46)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_lstringlist var_aList_2252 ;
      const GGS_genericExtensionMethodListMap temp_2 = ioObject ;
      temp_2.readProperty_dictionary ().method_searchKey (constinArgument_inKey, var_aList_2252, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 47)) ;
      {
      var_aList_2252.setter_append (constinArgument_inValue, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 48)) ;
      }
      ioObject.mProperty_dictionary.addAssignOperation (constinArgument_inKey, var_aList_2252, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 49)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_lstringlist temp_3 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 51)) ;
    temp_3.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (constinArgument_inValue, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 51)) ;
    ioObject.mProperty_dictionary.addAssignOperation (constinArgument_inKey, temp_3, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 51)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@descendantClassListMap insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (GGS_descendantClassListMap & ioObject,
                                const GGS_string constinArgument_inKey,
                                const GGS_unifiedTypeMapEntry constinArgument_inType,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_descendantClassListMap temp_1 = ioObject ;
    test_0 = temp_1.readProperty_dictionary ().getter_hasKey (constinArgument_inKey COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 115)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_unifiedTypeMapEntryList var_aList_5068 ;
      const GGS_descendantClassListMap temp_2 = ioObject ;
      temp_2.readProperty_dictionary ().method_searchKey (constinArgument_inKey, var_aList_5068, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 116)) ;
      {
      var_aList_5068.setter_append (constinArgument_inType, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 117)) ;
      }
      ioObject.mProperty_dictionary.addAssignOperation (constinArgument_inKey, var_aList_5068, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 118)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_unifiedTypeMapEntryList temp_3 = GGS_unifiedTypeMapEntryList::init (inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 120)) ;
    temp_3.plusPlusAssignOperation (GGS_unifiedTypeMapEntryList_2E_element::init_21_ (constinArgument_inType, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 120)) ;
    ioObject.mProperty_dictionary.addAssignOperation (constinArgument_inKey, temp_3, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas3", 120)) ;
  }
}


//--------------------------------------------------------------------------------------------------
// @arrayTypeDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_arrayTypeDeclarationAST::objectCompare (const GGS_arrayTypeDeclarationAST & inOperand) const {
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

GGS_arrayTypeDeclarationAST::GGS_arrayTypeDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_arrayTypeDeclarationAST GGS_arrayTypeDeclarationAST::
init_21_isPredefined_21__21__21_isUsefull_21_equatable (const GGS_bool & in_isPredefined,
                                                        const GGS_lstring & in_arrayTypeName,
                                                        const GGS_lstring & in_elementTypeName,
                                                        const GGS_bool & in_isUsefull,
                                                        const GGS_bool & in_equatable,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cPtr_arrayTypeDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_arrayTypeDeclarationAST (inCompiler COMMA_THERE)) ;
  object->arrayTypeDeclarationAST_init_21_isPredefined_21__21__21_isUsefull_21_equatable (in_isPredefined, in_arrayTypeName, in_elementTypeName, in_isUsefull, in_equatable, inCompiler) ;
  const GGS_arrayTypeDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeDeclarationAST::
arrayTypeDeclarationAST_init_21_isPredefined_21__21__21_isUsefull_21_equatable (const GGS_bool & in_isPredefined,
                                                                                const GGS_lstring & in_arrayTypeName,
                                                                                const GGS_lstring & in_elementTypeName,
                                                                                const GGS_bool & in_isUsefull,
                                                                                const GGS_bool & in_equatable,
                                                                                Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_arrayTypeName = in_arrayTypeName ;
  mProperty_elementTypeName = in_elementTypeName ;
  mProperty_isUsefull = in_isUsefull ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayTypeDeclarationAST::GGS_arrayTypeDeclarationAST (const cPtr_arrayTypeDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayTypeDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_arrayTypeDeclarationAST::readProperty_arrayTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_arrayTypeDeclarationAST * p = (cPtr_arrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeDeclarationAST) ;
    return p->mProperty_arrayTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_arrayTypeDeclarationAST::readProperty_elementTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_arrayTypeDeclarationAST * p = (cPtr_arrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeDeclarationAST) ;
    return p->mProperty_elementTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_arrayTypeDeclarationAST::readProperty_isUsefull (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_arrayTypeDeclarationAST * p = (cPtr_arrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeDeclarationAST) ;
    return p->mProperty_isUsefull ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_arrayTypeDeclarationAST::readProperty_equatable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_arrayTypeDeclarationAST * p = (cPtr_arrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeDeclarationAST) ;
    return p->mProperty_equatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @arrayTypeDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_arrayTypeDeclarationAST::cPtr_arrayTypeDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_arrayTypeName (),
mProperty_elementTypeName (),
mProperty_isUsefull (),
mProperty_equatable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_arrayTypeDeclarationAST::cPtr_arrayTypeDeclarationAST (const GGS_bool & in_isPredefined,
                                                            const GGS_lstring & in_arrayTypeName,
                                                            const GGS_lstring & in_elementTypeName,
                                                            const GGS_bool & in_isUsefull,
                                                            const GGS_bool & in_equatable,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_arrayTypeDeclarationAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_arrayTypeDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_arrayTypeDeclarationAST (mProperty_isPredefined, mProperty_arrayTypeName, mProperty_elementTypeName, mProperty_isUsefull, mProperty_equatable, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @arrayTypeDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayTypeDeclarationAST ("arrayTypeDeclarationAST",
                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayTypeDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayTypeDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arrayTypeDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arrayTypeDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayTypeDeclarationAST GGS_arrayTypeDeclarationAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_arrayTypeDeclarationAST result ;
  const GGS_arrayTypeDeclarationAST * p = (const GGS_arrayTypeDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arrayTypeDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayTypeDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @binarysetPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_binarysetPredefinedTypeAST::objectCompare (const GGS_binarysetPredefinedTypeAST & inOperand) const {
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

GGS_binarysetPredefinedTypeAST::GGS_binarysetPredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST GGS_binarysetPredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_binarysetPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_binarysetPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->binarysetPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_binarysetPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_binarysetPredefinedTypeAST::
binarysetPredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                     const GGS_string & in_mPredefinedTypeName,
                                                     Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST::GGS_binarysetPredefinedTypeAST (const cPtr_binarysetPredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_binarysetPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @binarysetPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_binarysetPredefinedTypeAST::cPtr_binarysetPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_binarysetPredefinedTypeAST::cPtr_binarysetPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                                  const GGS_string & in_mPredefinedTypeName,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_binarysetPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ;
}

void cPtr_binarysetPredefinedTypeAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@binarysetPredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_binarysetPredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_binarysetPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_binarysetPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @binarysetPredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ("binarysetPredefinedTypeAST",
                                                                               & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_binarysetPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_binarysetPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_binarysetPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST GGS_binarysetPredefinedTypeAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_binarysetPredefinedTypeAST result ;
  const GGS_binarysetPredefinedTypeAST * p = (const GGS_binarysetPredefinedTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_binarysetPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binarysetPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_binarysetPredefinedTypeAST_2E_weak::objectCompare (const GGS_binarysetPredefinedTypeAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_binarysetPredefinedTypeAST_2E_weak::GGS_binarysetPredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST_2E_weak & GGS_binarysetPredefinedTypeAST_2E_weak::operator = (const GGS_binarysetPredefinedTypeAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST_2E_weak::GGS_binarysetPredefinedTypeAST_2E_weak (const GGS_binarysetPredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST_2E_weak GGS_binarysetPredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_binarysetPredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST GGS_binarysetPredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_binarysetPredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_binarysetPredefinedTypeAST * p = (cPtr_binarysetPredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_binarysetPredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST GGS_binarysetPredefinedTypeAST_2E_weak::bang_binarysetPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_binarysetPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_binarysetPredefinedTypeAST) ;
      result = GGS_binarysetPredefinedTypeAST ((cPtr_binarysetPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @binarysetPredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST_2E_weak ("binarysetPredefinedTypeAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_binarysetPredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_binarysetPredefinedTypeAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_binarysetPredefinedTypeAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST_2E_weak GGS_binarysetPredefinedTypeAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_binarysetPredefinedTypeAST_2E_weak result ;
  const GGS_binarysetPredefinedTypeAST_2E_weak * p = (const GGS_binarysetPredefinedTypeAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_binarysetPredefinedTypeAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binarysetPredefinedTypeAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @structDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structDeclarationAST::objectCompare (const GGS_structDeclarationAST & inOperand) const {
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

GGS_structDeclarationAST::GGS_structDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_structDeclarationAST GGS_structDeclarationAST::
init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (const GGS_bool & in_isPredefined,
                                                                                            const GGS_lstring & in_structTypeName,
                                                                                            const GGS_propertyInCollectionListAST & in_mStructurePropertyListAST,
                                                                                            const GGS_string & in_enumeratedElementTypeName,
                                                                                            const GGS_structComparison & in_comparison,
                                                                                            const GGS_bool & in_isUsefullStruct,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  cPtr_structDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_structDeclarationAST (inCompiler COMMA_THERE)) ;
  object->structDeclarationAST_init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (in_isPredefined, in_structTypeName, in_mStructurePropertyListAST, in_enumeratedElementTypeName, in_comparison, in_isUsefullStruct, inCompiler) ;
  const GGS_structDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_structDeclarationAST::
structDeclarationAST_init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (const GGS_bool & in_isPredefined,
                                                                                                                 const GGS_lstring & in_structTypeName,
                                                                                                                 const GGS_propertyInCollectionListAST & in_mStructurePropertyListAST,
                                                                                                                 const GGS_string & in_enumeratedElementTypeName,
                                                                                                                 const GGS_structComparison & in_comparison,
                                                                                                                 const GGS_bool & in_isUsefullStruct,
                                                                                                                 Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_structTypeName = in_structTypeName ;
  mProperty_mStructurePropertyListAST = in_mStructurePropertyListAST ;
  mProperty_enumeratedElementTypeName = in_enumeratedElementTypeName ;
  mProperty_comparison = in_comparison ;
  mProperty_isUsefullStruct = in_isUsefullStruct ;
}

//--------------------------------------------------------------------------------------------------

GGS_structDeclarationAST::GGS_structDeclarationAST (const cPtr_structDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_structDeclarationAST::readProperty_structTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_structTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST GGS_structDeclarationAST::readProperty_mStructurePropertyListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyInCollectionListAST () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_mStructurePropertyListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_structDeclarationAST::readProperty_enumeratedElementTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_enumeratedElementTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_structComparison GGS_structDeclarationAST::readProperty_comparison (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_structComparison () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_comparison ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_structDeclarationAST::readProperty_isUsefullStruct (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_isUsefullStruct ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @structDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_structDeclarationAST::cPtr_structDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_structTypeName (),
mProperty_mStructurePropertyListAST (),
mProperty_enumeratedElementTypeName (),
mProperty_comparison (),
mProperty_isUsefullStruct () {
}

//--------------------------------------------------------------------------------------------------

cPtr_structDeclarationAST::cPtr_structDeclarationAST (const GGS_bool & in_isPredefined,
                                                      const GGS_lstring & in_structTypeName,
                                                      const GGS_propertyInCollectionListAST & in_mStructurePropertyListAST,
                                                      const GGS_string & in_enumeratedElementTypeName,
                                                      const GGS_structComparison & in_comparison,
                                                      const GGS_bool & in_isUsefullStruct,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_structTypeName (),
mProperty_mStructurePropertyListAST (),
mProperty_enumeratedElementTypeName (),
mProperty_comparison (),
mProperty_isUsefullStruct () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_structTypeName = in_structTypeName ;
  mProperty_mStructurePropertyListAST = in_mStructurePropertyListAST ;
  mProperty_enumeratedElementTypeName = in_enumeratedElementTypeName ;
  mProperty_comparison = in_comparison ;
  mProperty_isUsefullStruct = in_isUsefullStruct ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_structDeclarationAST::classDescriptor (void) const {
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
  mProperty_isUsefullStruct.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_structDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_structDeclarationAST (mProperty_isPredefined, mProperty_structTypeName, mProperty_mStructurePropertyListAST, mProperty_enumeratedElementTypeName, mProperty_comparison, mProperty_isUsefullStruct, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_structDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_structTypeName.printNonNullClassInstanceProperties ("structTypeName") ;
    mProperty_mStructurePropertyListAST.printNonNullClassInstanceProperties ("mStructurePropertyListAST") ;
    mProperty_enumeratedElementTypeName.printNonNullClassInstanceProperties ("enumeratedElementTypeName") ;
    mProperty_comparison.printNonNullClassInstanceProperties ("comparison") ;
    mProperty_isUsefullStruct.printNonNullClassInstanceProperties ("isUsefullStruct") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @structDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structDeclarationAST ("structDeclarationAST",
                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_structDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_structDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_structDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structDeclarationAST GGS_structDeclarationAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_structDeclarationAST result ;
  const GGS_structDeclarationAST * p = (const GGS_structDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_structDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @listDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_listDeclarationAST::objectCompare (const GGS_listDeclarationAST & inOperand) const {
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

GGS_listDeclarationAST::GGS_listDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_listDeclarationAST GGS_listDeclarationAST::
init_21_isPredefined_21__21__21_usefullList_21_equatable (const GGS_bool & in_isPredefined,
                                                          const GGS_lstring & in_mListTypeName,
                                                          const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                          const GGS_bool & in_usefullList,
                                                          const GGS_bool & in_equatable,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cPtr_listDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_listDeclarationAST (inCompiler COMMA_THERE)) ;
  object->listDeclarationAST_init_21_isPredefined_21__21__21_usefullList_21_equatable (in_isPredefined, in_mListTypeName, in_mPropertyList, in_usefullList, in_equatable, inCompiler) ;
  const GGS_listDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::
listDeclarationAST_init_21_isPredefined_21__21__21_usefullList_21_equatable (const GGS_bool & in_isPredefined,
                                                                             const GGS_lstring & in_mListTypeName,
                                                                             const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                                             const GGS_bool & in_usefullList,
                                                                             const GGS_bool & in_equatable,
                                                                             Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mListTypeName = in_mListTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_usefullList = in_usefullList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

GGS_listDeclarationAST::GGS_listDeclarationAST (const cPtr_listDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_listDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_listDeclarationAST::readProperty_mListTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listDeclarationAST) ;
    return p->mProperty_mListTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST GGS_listDeclarationAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyInCollectionListAST () ;
  }else{
    cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_listDeclarationAST::readProperty_usefullList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listDeclarationAST) ;
    return p->mProperty_usefullList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_listDeclarationAST::readProperty_equatable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listDeclarationAST) ;
    return p->mProperty_equatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @listDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_listDeclarationAST::cPtr_listDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mListTypeName (),
mProperty_mPropertyList (),
mProperty_usefullList (),
mProperty_equatable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_listDeclarationAST::cPtr_listDeclarationAST (const GGS_bool & in_isPredefined,
                                                  const GGS_lstring & in_mListTypeName,
                                                  const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                  const GGS_bool & in_usefullList,
                                                  const GGS_bool & in_equatable,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_listDeclarationAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_listDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_listDeclarationAST (mProperty_isPredefined, mProperty_mListTypeName, mProperty_mPropertyList, mProperty_usefullList, mProperty_equatable, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @listDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_listDeclarationAST ("listDeclarationAST",
                                                                       & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_listDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_listDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_listDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listDeclarationAST GGS_listDeclarationAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_listDeclarationAST result ;
  const GGS_listDeclarationAST * p = (const GGS_listDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_listDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @weakReferenceDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_weakReferenceDeclarationAST::objectCompare (const GGS_weakReferenceDeclarationAST & inOperand) const {
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

GGS_weakReferenceDeclarationAST::GGS_weakReferenceDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_weakReferenceDeclarationAST GGS_weakReferenceDeclarationAST::
init_21_isPredefined_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                      const GGS_lstring & in_mClassTypeName,
                                      const GGS_lstring & in_mWeakReferenceTypeName,
                                      const GGS_lstring & in_mSuperWeakReferenceTypeName,
                                      const GGS_bool & in_mGenerateInSeparateFile,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_weakReferenceDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_weakReferenceDeclarationAST (inCompiler COMMA_THERE)) ;
  object->weakReferenceDeclarationAST_init_21_isPredefined_21__21__21__21_ (in_isPredefined, in_mClassTypeName, in_mWeakReferenceTypeName, in_mSuperWeakReferenceTypeName, in_mGenerateInSeparateFile, inCompiler) ;
  const GGS_weakReferenceDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::
weakReferenceDeclarationAST_init_21_isPredefined_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                  const GGS_lstring & in_mClassTypeName,
                                                                  const GGS_lstring & in_mWeakReferenceTypeName,
                                                                  const GGS_lstring & in_mSuperWeakReferenceTypeName,
                                                                  const GGS_bool & in_mGenerateInSeparateFile,
                                                                  Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mClassTypeName = in_mClassTypeName ;
  mProperty_mWeakReferenceTypeName = in_mWeakReferenceTypeName ;
  mProperty_mSuperWeakReferenceTypeName = in_mSuperWeakReferenceTypeName ;
  mProperty_mGenerateInSeparateFile = in_mGenerateInSeparateFile ;
}

//--------------------------------------------------------------------------------------------------

GGS_weakReferenceDeclarationAST::GGS_weakReferenceDeclarationAST (const cPtr_weakReferenceDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_weakReferenceDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_weakReferenceDeclarationAST::readProperty_mClassTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    return p->mProperty_mClassTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_weakReferenceDeclarationAST::readProperty_mWeakReferenceTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    return p->mProperty_mWeakReferenceTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_weakReferenceDeclarationAST::readProperty_mSuperWeakReferenceTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    return p->mProperty_mSuperWeakReferenceTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_weakReferenceDeclarationAST::readProperty_mGenerateInSeparateFile (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    return p->mProperty_mGenerateInSeparateFile ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @weakReferenceDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_weakReferenceDeclarationAST::cPtr_weakReferenceDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mClassTypeName (),
mProperty_mWeakReferenceTypeName (),
mProperty_mSuperWeakReferenceTypeName (),
mProperty_mGenerateInSeparateFile () {
}

//--------------------------------------------------------------------------------------------------

cPtr_weakReferenceDeclarationAST::cPtr_weakReferenceDeclarationAST (const GGS_bool & in_isPredefined,
                                                                    const GGS_lstring & in_mClassTypeName,
                                                                    const GGS_lstring & in_mWeakReferenceTypeName,
                                                                    const GGS_lstring & in_mSuperWeakReferenceTypeName,
                                                                    const GGS_bool & in_mGenerateInSeparateFile,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mClassTypeName (),
mProperty_mWeakReferenceTypeName (),
mProperty_mSuperWeakReferenceTypeName (),
mProperty_mGenerateInSeparateFile () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mClassTypeName = in_mClassTypeName ;
  mProperty_mWeakReferenceTypeName = in_mWeakReferenceTypeName ;
  mProperty_mSuperWeakReferenceTypeName = in_mSuperWeakReferenceTypeName ;
  mProperty_mGenerateInSeparateFile = in_mGenerateInSeparateFile ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_weakReferenceDeclarationAST::classDescriptor (void) const {
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
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_weakReferenceDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_weakReferenceDeclarationAST (mProperty_isPredefined, mProperty_mClassTypeName, mProperty_mWeakReferenceTypeName, mProperty_mSuperWeakReferenceTypeName, mProperty_mGenerateInSeparateFile, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_weakReferenceDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mClassTypeName.printNonNullClassInstanceProperties ("mClassTypeName") ;
    mProperty_mWeakReferenceTypeName.printNonNullClassInstanceProperties ("mWeakReferenceTypeName") ;
    mProperty_mSuperWeakReferenceTypeName.printNonNullClassInstanceProperties ("mSuperWeakReferenceTypeName") ;
    mProperty_mGenerateInSeparateFile.printNonNullClassInstanceProperties ("mGenerateInSeparateFile") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @weakReferenceDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_weakReferenceDeclarationAST ("weakReferenceDeclarationAST",
                                                                                & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_weakReferenceDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_weakReferenceDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_weakReferenceDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_weakReferenceDeclarationAST GGS_weakReferenceDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_weakReferenceDeclarationAST result ;
  const GGS_weakReferenceDeclarationAST * p = (const GGS_weakReferenceDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_weakReferenceDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("weakReferenceDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue::GGS_associatedValue (void) :
mProperty_weakQualifier (),
mProperty_typeName (),
mProperty_valueName () {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue::GGS_associatedValue (const GGS_associatedValue & inSource) :
mProperty_weakQualifier (inSource.mProperty_weakQualifier),
mProperty_typeName (inSource.mProperty_typeName),
mProperty_valueName (inSource.mProperty_valueName) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue & GGS_associatedValue::operator = (const GGS_associatedValue & inSource) {
  mProperty_weakQualifier = inSource.mProperty_weakQualifier ;
  mProperty_typeName = inSource.mProperty_typeName ;
  mProperty_valueName = inSource.mProperty_valueName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_associatedValue GGS_associatedValue::init_21__21__21_ (const GGS_bool & in_weakQualifier,
                                                           const GGS_lstring & in_typeName,
                                                           const GGS_lstring & in_valueName,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_associatedValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_weakQualifier = in_weakQualifier ;
  result.mProperty_typeName = in_typeName ;
  result.mProperty_valueName = in_valueName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValue::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue::GGS_associatedValue (const GGS_bool & inOperand0,
                                          const GGS_lstring & inOperand1,
                                          const GGS_lstring & inOperand2) :
mProperty_weakQualifier (inOperand0),
mProperty_typeName (inOperand1),
mProperty_valueName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_associatedValue::isValid (void) const {
  return mProperty_weakQualifier.isValid () && mProperty_typeName.isValid () && mProperty_valueName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValue::drop (void) {
  mProperty_weakQualifier.drop () ;
  mProperty_typeName.drop () ;
  mProperty_valueName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValue::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @associatedValue:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_weakQualifier.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_typeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_valueName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @associatedValue generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_associatedValue ("associatedValue",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_associatedValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_associatedValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_associatedValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_associatedValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue GGS_associatedValue::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_associatedValue result ;
  const GGS_associatedValue * p = (const GGS_associatedValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_associatedValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("associatedValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @enumDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumDeclarationAST::objectCompare (const GGS_enumDeclarationAST & inOperand) const {
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

GGS_enumDeclarationAST::GGS_enumDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_enumDeclarationAST GGS_enumDeclarationAST::
init_21_isPredefined_21__21__21_comparison (const GGS_bool & in_isPredefined,
                                            const GGS_lstring & in_enumTypeName,
                                            const GGS_enumConstantList & in_mConstantList,
                                            const GGS_structComparison & in_comparison,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cPtr_enumDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_enumDeclarationAST (inCompiler COMMA_THERE)) ;
  object->enumDeclarationAST_init_21_isPredefined_21__21__21_comparison (in_isPredefined, in_enumTypeName, in_mConstantList, in_comparison, inCompiler) ;
  const GGS_enumDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::
enumDeclarationAST_init_21_isPredefined_21__21__21_comparison (const GGS_bool & in_isPredefined,
                                                               const GGS_lstring & in_enumTypeName,
                                                               const GGS_enumConstantList & in_mConstantList,
                                                               const GGS_structComparison & in_comparison,
                                                               Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_enumTypeName = in_enumTypeName ;
  mProperty_mConstantList = in_mConstantList ;
  mProperty_comparison = in_comparison ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumDeclarationAST::GGS_enumDeclarationAST (const cPtr_enumDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_enumDeclarationAST::readProperty_enumTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    return p->mProperty_enumTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantList GGS_enumDeclarationAST::readProperty_mConstantList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_enumConstantList () ;
  }else{
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    return p->mProperty_mConstantList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_structComparison GGS_enumDeclarationAST::readProperty_comparison (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_structComparison () ;
  }else{
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    return p->mProperty_comparison ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enumDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_enumDeclarationAST::cPtr_enumDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_enumTypeName (),
mProperty_mConstantList (),
mProperty_comparison () {
}

//--------------------------------------------------------------------------------------------------

cPtr_enumDeclarationAST::cPtr_enumDeclarationAST (const GGS_bool & in_isPredefined,
                                                  const GGS_lstring & in_enumTypeName,
                                                  const GGS_enumConstantList & in_mConstantList,
                                                  const GGS_structComparison & in_comparison,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_enumTypeName (),
mProperty_mConstantList (),
mProperty_comparison () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_enumTypeName = in_enumTypeName ;
  mProperty_mConstantList = in_mConstantList ;
  mProperty_comparison = in_comparison ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_enumDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclarationAST ;
}

void cPtr_enumDeclarationAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@enumDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_enumTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConstantList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_comparison.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_enumDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumDeclarationAST (mProperty_isPredefined, mProperty_enumTypeName, mProperty_mConstantList, mProperty_comparison, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enumDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_enumTypeName.printNonNullClassInstanceProperties ("enumTypeName") ;
    mProperty_mConstantList.printNonNullClassInstanceProperties ("mConstantList") ;
    mProperty_comparison.printNonNullClassInstanceProperties ("comparison") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @enumDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumDeclarationAST ("enumDeclarationAST",
                                                                       & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumDeclarationAST GGS_enumDeclarationAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_enumDeclarationAST result ;
  const GGS_enumDeclarationAST * p = (const GGS_enumDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @graphDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_graphDeclarationAST::objectCompare (const GGS_graphDeclarationAST & inOperand) const {
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

GGS_graphDeclarationAST::GGS_graphDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_graphDeclarationAST GGS_graphDeclarationAST::
init_21_isPredefined_21__21__21_ (const GGS_bool & in_isPredefined,
                                  const GGS_lstring & in_mGraphTypeName,
                                  const GGS_lstring & in_mAssociatedListTypeName,
                                  const GGS_graphInsertModifierList & in_mInsertModifierList,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_graphDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_graphDeclarationAST (inCompiler COMMA_THERE)) ;
  object->graphDeclarationAST_init_21_isPredefined_21__21__21_ (in_isPredefined, in_mGraphTypeName, in_mAssociatedListTypeName, in_mInsertModifierList, inCompiler) ;
  const GGS_graphDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::
graphDeclarationAST_init_21_isPredefined_21__21__21_ (const GGS_bool & in_isPredefined,
                                                      const GGS_lstring & in_mGraphTypeName,
                                                      const GGS_lstring & in_mAssociatedListTypeName,
                                                      const GGS_graphInsertModifierList & in_mInsertModifierList,
                                                      Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mGraphTypeName = in_mGraphTypeName ;
  mProperty_mAssociatedListTypeName = in_mAssociatedListTypeName ;
  mProperty_mInsertModifierList = in_mInsertModifierList ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphDeclarationAST::GGS_graphDeclarationAST (const cPtr_graphDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_graphDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_graphDeclarationAST::readProperty_mGraphTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    return p->mProperty_mGraphTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_graphDeclarationAST::readProperty_mAssociatedListTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    return p->mProperty_mAssociatedListTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_graphInsertModifierList GGS_graphDeclarationAST::readProperty_mInsertModifierList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_graphInsertModifierList () ;
  }else{
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    return p->mProperty_mInsertModifierList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @graphDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_graphDeclarationAST::cPtr_graphDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mGraphTypeName (),
mProperty_mAssociatedListTypeName (),
mProperty_mInsertModifierList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_graphDeclarationAST::cPtr_graphDeclarationAST (const GGS_bool & in_isPredefined,
                                                    const GGS_lstring & in_mGraphTypeName,
                                                    const GGS_lstring & in_mAssociatedListTypeName,
                                                    const GGS_graphInsertModifierList & in_mInsertModifierList,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mGraphTypeName (),
mProperty_mAssociatedListTypeName (),
mProperty_mInsertModifierList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mGraphTypeName = in_mGraphTypeName ;
  mProperty_mAssociatedListTypeName = in_mAssociatedListTypeName ;
  mProperty_mInsertModifierList = in_mInsertModifierList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_graphDeclarationAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_graphDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_graphDeclarationAST (mProperty_isPredefined, mProperty_mGraphTypeName, mProperty_mAssociatedListTypeName, mProperty_mInsertModifierList, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @graphDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_graphDeclarationAST ("graphDeclarationAST",
                                                                        & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_graphDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_graphDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_graphDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphDeclarationAST GGS_graphDeclarationAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_graphDeclarationAST result ;
  const GGS_graphDeclarationAST * p = (const GGS_graphDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_graphDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @optionalTypeDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionalTypeDeclarationAST::objectCompare (const GGS_optionalTypeDeclarationAST & inOperand) const {
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

GGS_optionalTypeDeclarationAST::GGS_optionalTypeDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_optionalTypeDeclarationAST GGS_optionalTypeDeclarationAST::
init_21_isPredefined_21_optionalTypeName_21_unwrappedTypeName_21_isUsefull (const GGS_bool & in_isPredefined,
                                                                            const GGS_lstring & in_optionalTypeName,
                                                                            const GGS_lstring & in_unwrappedTypeName,
                                                                            const GGS_bool & in_isUsefull,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cPtr_optionalTypeDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_optionalTypeDeclarationAST (inCompiler COMMA_THERE)) ;
  object->optionalTypeDeclarationAST_init_21_isPredefined_21_optionalTypeName_21_unwrappedTypeName_21_isUsefull (in_isPredefined, in_optionalTypeName, in_unwrappedTypeName, in_isUsefull, inCompiler) ;
  const GGS_optionalTypeDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeDeclarationAST::
optionalTypeDeclarationAST_init_21_isPredefined_21_optionalTypeName_21_unwrappedTypeName_21_isUsefull (const GGS_bool & in_isPredefined,
                                                                                                       const GGS_lstring & in_optionalTypeName,
                                                                                                       const GGS_lstring & in_unwrappedTypeName,
                                                                                                       const GGS_bool & in_isUsefull,
                                                                                                       Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_optionalTypeName = in_optionalTypeName ;
  mProperty_unwrappedTypeName = in_unwrappedTypeName ;
  mProperty_isUsefull = in_isUsefull ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalTypeDeclarationAST::GGS_optionalTypeDeclarationAST (const cPtr_optionalTypeDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionalTypeDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_optionalTypeDeclarationAST::readProperty_optionalTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_optionalTypeDeclarationAST * p = (cPtr_optionalTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionalTypeDeclarationAST) ;
    return p->mProperty_optionalTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_optionalTypeDeclarationAST::readProperty_unwrappedTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_optionalTypeDeclarationAST * p = (cPtr_optionalTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionalTypeDeclarationAST) ;
    return p->mProperty_unwrappedTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionalTypeDeclarationAST::readProperty_isUsefull (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_optionalTypeDeclarationAST * p = (cPtr_optionalTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionalTypeDeclarationAST) ;
    return p->mProperty_isUsefull ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionalTypeDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_optionalTypeDeclarationAST::cPtr_optionalTypeDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_optionalTypeName (),
mProperty_unwrappedTypeName (),
mProperty_isUsefull () {
}

//--------------------------------------------------------------------------------------------------

cPtr_optionalTypeDeclarationAST::cPtr_optionalTypeDeclarationAST (const GGS_bool & in_isPredefined,
                                                                  const GGS_lstring & in_optionalTypeName,
                                                                  const GGS_lstring & in_unwrappedTypeName,
                                                                  const GGS_bool & in_isUsefull,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_optionalTypeName (),
mProperty_unwrappedTypeName (),
mProperty_isUsefull () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_optionalTypeName = in_optionalTypeName ;
  mProperty_unwrappedTypeName = in_unwrappedTypeName ;
  mProperty_isUsefull = in_isUsefull ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_optionalTypeDeclarationAST::classDescriptor (void) const {
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
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_optionalTypeDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionalTypeDeclarationAST (mProperty_isPredefined, mProperty_optionalTypeName, mProperty_unwrappedTypeName, mProperty_isUsefull, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionalTypeDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_optionalTypeName.printNonNullClassInstanceProperties ("optionalTypeName") ;
    mProperty_unwrappedTypeName.printNonNullClassInstanceProperties ("unwrappedTypeName") ;
    mProperty_isUsefull.printNonNullClassInstanceProperties ("isUsefull") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @optionalTypeDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalTypeDeclarationAST ("optionalTypeDeclarationAST",
                                                                               & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionalTypeDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalTypeDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionalTypeDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionalTypeDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalTypeDeclarationAST GGS_optionalTypeDeclarationAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_optionalTypeDeclarationAST result ;
  const GGS_optionalTypeDeclarationAST * p = (const GGS_optionalTypeDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionalTypeDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionalTypeDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @mapDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_mapDeclarationAST::objectCompare (const GGS_mapDeclarationAST & inOperand) const {
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

GGS_mapDeclarationAST::GGS_mapDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_mapDeclarationAST GGS_mapDeclarationAST::
init_21_isPredefined_21__21__21__21__21__21__21__21__21_equatable (const GGS_bool & in_isPredefined,
                                                                   const GGS_lstring & in_mMapTypeName,
                                                                   const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                                   const GGS_insertSetterListAST & in_mInsertSetterList,
                                                                   const GGS_mapAccessorListAST & in_mSearchMethodList,
                                                                   const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                                                   const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                                                   const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                                                   const GGS_insertOrReplaceDeclarationListAST & in_mInsertOrReplaceDeclarationListAST,
                                                                   const GGS_bool & in_equatable,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cPtr_mapDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_mapDeclarationAST (inCompiler COMMA_THERE)) ;
  object->mapDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21__21__21_equatable (in_isPredefined, in_mMapTypeName, in_mPropertyList, in_mInsertSetterList, in_mSearchMethodList, in_mSearchSubscriptList, in_mRemoveSetterList, in_mReplaceSetterList, in_mInsertOrReplaceDeclarationListAST, in_equatable, inCompiler) ;
  const GGS_mapDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::
mapDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21__21__21_equatable (const GGS_bool & in_isPredefined,
                                                                                     const GGS_lstring & in_mMapTypeName,
                                                                                     const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                                                     const GGS_insertSetterListAST & in_mInsertSetterList,
                                                                                     const GGS_mapAccessorListAST & in_mSearchMethodList,
                                                                                     const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                                                                     const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                                                                     const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                                                                     const GGS_insertOrReplaceDeclarationListAST & in_mInsertOrReplaceDeclarationListAST,
                                                                                     const GGS_bool & in_equatable,
                                                                                     Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mMapTypeName = in_mMapTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_mInsertSetterList = in_mInsertSetterList ;
  mProperty_mSearchMethodList = in_mSearchMethodList ;
  mProperty_mSearchSubscriptList = in_mSearchSubscriptList ;
  mProperty_mRemoveSetterList = in_mRemoveSetterList ;
  mProperty_mReplaceSetterList = in_mReplaceSetterList ;
  mProperty_mInsertOrReplaceDeclarationListAST = in_mInsertOrReplaceDeclarationListAST ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapDeclarationAST::GGS_mapDeclarationAST (const cPtr_mapDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mapDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_mapDeclarationAST::readProperty_mMapTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mMapTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST GGS_mapDeclarationAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyInCollectionListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST GGS_mapDeclarationAST::readProperty_mInsertSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_insertSetterListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mInsertSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapDeclarationAST::readProperty_mSearchMethodList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mSearchMethodList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapDeclarationAST::readProperty_mSearchSubscriptList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mSearchSubscriptList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapDeclarationAST::readProperty_mRemoveSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mRemoveSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapDeclarationAST::readProperty_mReplaceSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mReplaceSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST GGS_mapDeclarationAST::readProperty_mInsertOrReplaceDeclarationListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_insertOrReplaceDeclarationListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mInsertOrReplaceDeclarationListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mapDeclarationAST::readProperty_equatable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_equatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @mapDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_mapDeclarationAST::cPtr_mapDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mMapTypeName (),
mProperty_mPropertyList (),
mProperty_mInsertSetterList (),
mProperty_mSearchMethodList (),
mProperty_mSearchSubscriptList (),
mProperty_mRemoveSetterList (),
mProperty_mReplaceSetterList (),
mProperty_mInsertOrReplaceDeclarationListAST (),
mProperty_equatable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_mapDeclarationAST::cPtr_mapDeclarationAST (const GGS_bool & in_isPredefined,
                                                const GGS_lstring & in_mMapTypeName,
                                                const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                const GGS_insertSetterListAST & in_mInsertSetterList,
                                                const GGS_mapAccessorListAST & in_mSearchMethodList,
                                                const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                                const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                                const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                                const GGS_insertOrReplaceDeclarationListAST & in_mInsertOrReplaceDeclarationListAST,
                                                const GGS_bool & in_equatable,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mMapTypeName (),
mProperty_mPropertyList (),
mProperty_mInsertSetterList (),
mProperty_mSearchMethodList (),
mProperty_mSearchSubscriptList (),
mProperty_mRemoveSetterList (),
mProperty_mReplaceSetterList (),
mProperty_mInsertOrReplaceDeclarationListAST (),
mProperty_equatable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mMapTypeName = in_mMapTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_mInsertSetterList = in_mInsertSetterList ;
  mProperty_mSearchMethodList = in_mSearchMethodList ;
  mProperty_mSearchSubscriptList = in_mSearchSubscriptList ;
  mProperty_mRemoveSetterList = in_mRemoveSetterList ;
  mProperty_mReplaceSetterList = in_mReplaceSetterList ;
  mProperty_mInsertOrReplaceDeclarationListAST = in_mInsertOrReplaceDeclarationListAST ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_mapDeclarationAST::classDescriptor (void) const {
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
  mProperty_mInsertSetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSearchMethodList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSearchSubscriptList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRemoveSetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReplaceSetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInsertOrReplaceDeclarationListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_equatable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_mapDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_mapDeclarationAST (mProperty_isPredefined, mProperty_mMapTypeName, mProperty_mPropertyList, mProperty_mInsertSetterList, mProperty_mSearchMethodList, mProperty_mSearchSubscriptList, mProperty_mRemoveSetterList, mProperty_mReplaceSetterList, mProperty_mInsertOrReplaceDeclarationListAST, mProperty_equatable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_mapDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mMapTypeName.printNonNullClassInstanceProperties ("mMapTypeName") ;
    mProperty_mPropertyList.printNonNullClassInstanceProperties ("mPropertyList") ;
    mProperty_mInsertSetterList.printNonNullClassInstanceProperties ("mInsertSetterList") ;
    mProperty_mSearchMethodList.printNonNullClassInstanceProperties ("mSearchMethodList") ;
    mProperty_mSearchSubscriptList.printNonNullClassInstanceProperties ("mSearchSubscriptList") ;
    mProperty_mRemoveSetterList.printNonNullClassInstanceProperties ("mRemoveSetterList") ;
    mProperty_mReplaceSetterList.printNonNullClassInstanceProperties ("mReplaceSetterList") ;
    mProperty_mInsertOrReplaceDeclarationListAST.printNonNullClassInstanceProperties ("mInsertOrReplaceDeclarationListAST") ;
    mProperty_equatable.printNonNullClassInstanceProperties ("equatable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @mapDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mapDeclarationAST ("mapDeclarationAST",
                                                                      & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_mapDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_mapDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mapDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapDeclarationAST GGS_mapDeclarationAST::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_mapDeclarationAST result ;
  const GGS_mapDeclarationAST * p = (const GGS_mapDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mapDeclarationAST *> (p)) {
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

ComparisonResult GGS_mapTypeForGeneration::objectCompare (const GGS_mapTypeForGeneration & inOperand) const {
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

GGS_mapTypeForGeneration::GGS_mapTypeForGeneration (void) :
GGS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_mapTypeForGeneration GGS_mapTypeForGeneration::
init_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                  const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                  const GGS_lstring & in_mMapTypeName,
                                                  const GGS_typedPropertyList & in_mTypedAttributeList,
                                                  const GGS_insertSetterListAST & in_mInsertSetterList,
                                                  const GGS_mapAccessorListAST & in_mSearchMethodList,
                                                  const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                                  const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                                  const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                                  const GGS_bool & in_mHasInsertOrReplaceModifier,
                                                  const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_mapTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_mapTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->mapTypeForGeneration_init_21__21__21__21__21__21__21__21__21__21__21_ (in_mSelfTypeEntry, in_mElementTypeEntry, in_mMapTypeName, in_mTypedAttributeList, in_mInsertSetterList, in_mSearchMethodList, in_mSearchSubscriptList, in_mRemoveSetterList, in_mReplaceSetterList, in_mHasInsertOrReplaceModifier, in_mOptionalElementTypeEntry, inCompiler) ;
  const GGS_mapTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_mapTypeForGeneration::
mapTypeForGeneration_init_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                       const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                                       const GGS_lstring & in_mMapTypeName,
                                                                       const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                       const GGS_insertSetterListAST & in_mInsertSetterList,
                                                                       const GGS_mapAccessorListAST & in_mSearchMethodList,
                                                                       const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                                                       const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                                                       const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                                                       const GGS_bool & in_mHasInsertOrReplaceModifier,
                                                                       const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                                                       Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mElementTypeEntry = in_mElementTypeEntry ;
  mProperty_mMapTypeName = in_mMapTypeName ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mInsertSetterList = in_mInsertSetterList ;
  mProperty_mSearchMethodList = in_mSearchMethodList ;
  mProperty_mSearchSubscriptList = in_mSearchSubscriptList ;
  mProperty_mRemoveSetterList = in_mRemoveSetterList ;
  mProperty_mReplaceSetterList = in_mReplaceSetterList ;
  mProperty_mHasInsertOrReplaceModifier = in_mHasInsertOrReplaceModifier ;
  mProperty_mOptionalElementTypeEntry = in_mOptionalElementTypeEntry ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapTypeForGeneration::GGS_mapTypeForGeneration (const cPtr_mapTypeForGeneration * inSourcePtr) :
GGS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mapTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_mapTypeForGeneration::readProperty_mElementTypeEntry (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mElementTypeEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_mapTypeForGeneration::readProperty_mMapTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mMapTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList GGS_mapTypeForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typedPropertyList () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST GGS_mapTypeForGeneration::readProperty_mInsertSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_insertSetterListAST () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mInsertSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapTypeForGeneration::readProperty_mSearchMethodList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mSearchMethodList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapTypeForGeneration::readProperty_mSearchSubscriptList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mSearchSubscriptList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapTypeForGeneration::readProperty_mRemoveSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mRemoveSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapTypeForGeneration::readProperty_mReplaceSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mReplaceSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mapTypeForGeneration::readProperty_mHasInsertOrReplaceModifier (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mHasInsertOrReplaceModifier ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_mapTypeForGeneration::readProperty_mOptionalElementTypeEntry (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mOptionalElementTypeEntry ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @mapTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_mapTypeForGeneration::cPtr_mapTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mElementTypeEntry (),
mProperty_mMapTypeName (),
mProperty_mTypedAttributeList (),
mProperty_mInsertSetterList (),
mProperty_mSearchMethodList (),
mProperty_mSearchSubscriptList (),
mProperty_mRemoveSetterList (),
mProperty_mReplaceSetterList (),
mProperty_mHasInsertOrReplaceModifier (),
mProperty_mOptionalElementTypeEntry () {
}

//--------------------------------------------------------------------------------------------------

cPtr_mapTypeForGeneration::cPtr_mapTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                      const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                      const GGS_lstring & in_mMapTypeName,
                                                      const GGS_typedPropertyList & in_mTypedAttributeList,
                                                      const GGS_insertSetterListAST & in_mInsertSetterList,
                                                      const GGS_mapAccessorListAST & in_mSearchMethodList,
                                                      const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                                      const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                                      const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                                      const GGS_bool & in_mHasInsertOrReplaceModifier,
                                                      const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry, inCompiler COMMA_THERE),
mProperty_mElementTypeEntry (),
mProperty_mMapTypeName (),
mProperty_mTypedAttributeList (),
mProperty_mInsertSetterList (),
mProperty_mSearchMethodList (),
mProperty_mSearchSubscriptList (),
mProperty_mRemoveSetterList (),
mProperty_mReplaceSetterList (),
mProperty_mHasInsertOrReplaceModifier (),
mProperty_mOptionalElementTypeEntry () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mElementTypeEntry = in_mElementTypeEntry ;
  mProperty_mMapTypeName = in_mMapTypeName ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mInsertSetterList = in_mInsertSetterList ;
  mProperty_mSearchMethodList = in_mSearchMethodList ;
  mProperty_mSearchSubscriptList = in_mSearchSubscriptList ;
  mProperty_mRemoveSetterList = in_mRemoveSetterList ;
  mProperty_mReplaceSetterList = in_mReplaceSetterList ;
  mProperty_mHasInsertOrReplaceModifier = in_mHasInsertOrReplaceModifier ;
  mProperty_mOptionalElementTypeEntry = in_mOptionalElementTypeEntry ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_mapTypeForGeneration::classDescriptor (void) const {
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
  mProperty_mInsertSetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSearchMethodList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSearchSubscriptList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRemoveSetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReplaceSetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasInsertOrReplaceModifier.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionalElementTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_mapTypeForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_mapTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mElementTypeEntry, mProperty_mMapTypeName, mProperty_mTypedAttributeList, mProperty_mInsertSetterList, mProperty_mSearchMethodList, mProperty_mSearchSubscriptList, mProperty_mRemoveSetterList, mProperty_mReplaceSetterList, mProperty_mHasInsertOrReplaceModifier, mProperty_mOptionalElementTypeEntry, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_mapTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mElementTypeEntry.printNonNullClassInstanceProperties ("mElementTypeEntry") ;
    mProperty_mMapTypeName.printNonNullClassInstanceProperties ("mMapTypeName") ;
    mProperty_mTypedAttributeList.printNonNullClassInstanceProperties ("mTypedAttributeList") ;
    mProperty_mInsertSetterList.printNonNullClassInstanceProperties ("mInsertSetterList") ;
    mProperty_mSearchMethodList.printNonNullClassInstanceProperties ("mSearchMethodList") ;
    mProperty_mSearchSubscriptList.printNonNullClassInstanceProperties ("mSearchSubscriptList") ;
    mProperty_mRemoveSetterList.printNonNullClassInstanceProperties ("mRemoveSetterList") ;
    mProperty_mReplaceSetterList.printNonNullClassInstanceProperties ("mReplaceSetterList") ;
    mProperty_mHasInsertOrReplaceModifier.printNonNullClassInstanceProperties ("mHasInsertOrReplaceModifier") ;
    mProperty_mOptionalElementTypeEntry.printNonNullClassInstanceProperties ("mOptionalElementTypeEntry") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @mapTypeForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mapTypeForGeneration ("mapTypeForGeneration",
                                                                         & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_mapTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_mapTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mapTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapTypeForGeneration GGS_mapTypeForGeneration::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_mapTypeForGeneration result ;
  const GGS_mapTypeForGeneration * p = (const GGS_mapTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mapTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @boolsetDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_boolsetDeclarationAST::objectCompare (const GGS_boolsetDeclarationAST & inOperand) const {
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

GGS_boolsetDeclarationAST::GGS_boolsetDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_boolsetDeclarationAST GGS_boolsetDeclarationAST::
init_21_isPredefined_21__21__21_isEquatable (const GGS_bool & in_isPredefined,
                                             const GGS_lstring & in_mBoolsetTypeName,
                                             const GGS_lstringlist & in_mFlagList,
                                             const GGS_bool & in_isEquatable,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cPtr_boolsetDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_boolsetDeclarationAST (inCompiler COMMA_THERE)) ;
  object->boolsetDeclarationAST_init_21_isPredefined_21__21__21_isEquatable (in_isPredefined, in_mBoolsetTypeName, in_mFlagList, in_isEquatable, inCompiler) ;
  const GGS_boolsetDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::
boolsetDeclarationAST_init_21_isPredefined_21__21__21_isEquatable (const GGS_bool & in_isPredefined,
                                                                   const GGS_lstring & in_mBoolsetTypeName,
                                                                   const GGS_lstringlist & in_mFlagList,
                                                                   const GGS_bool & in_isEquatable,
                                                                   Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mBoolsetTypeName = in_mBoolsetTypeName ;
  mProperty_mFlagList = in_mFlagList ;
  mProperty_isEquatable = in_isEquatable ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolsetDeclarationAST::GGS_boolsetDeclarationAST (const cPtr_boolsetDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolsetDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_boolsetDeclarationAST::readProperty_mBoolsetTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_boolsetDeclarationAST * p = (cPtr_boolsetDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetDeclarationAST) ;
    return p->mProperty_mBoolsetTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_boolsetDeclarationAST::readProperty_mFlagList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_boolsetDeclarationAST * p = (cPtr_boolsetDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetDeclarationAST) ;
    return p->mProperty_mFlagList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_boolsetDeclarationAST::readProperty_isEquatable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_boolsetDeclarationAST * p = (cPtr_boolsetDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetDeclarationAST) ;
    return p->mProperty_isEquatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @boolsetDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_boolsetDeclarationAST::cPtr_boolsetDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mBoolsetTypeName (),
mProperty_mFlagList (),
mProperty_isEquatable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_boolsetDeclarationAST::cPtr_boolsetDeclarationAST (const GGS_bool & in_isPredefined,
                                                        const GGS_lstring & in_mBoolsetTypeName,
                                                        const GGS_lstringlist & in_mFlagList,
                                                        const GGS_bool & in_isEquatable,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mBoolsetTypeName (),
mProperty_mFlagList (),
mProperty_isEquatable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mBoolsetTypeName = in_mBoolsetTypeName ;
  mProperty_mFlagList = in_mFlagList ;
  mProperty_isEquatable = in_isEquatable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_boolsetDeclarationAST::classDescriptor (void) const {
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
  ioString.appendCString (", ") ;
  mProperty_isEquatable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_boolsetDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_boolsetDeclarationAST (mProperty_isPredefined, mProperty_mBoolsetTypeName, mProperty_mFlagList, mProperty_isEquatable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolsetDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mBoolsetTypeName.printNonNullClassInstanceProperties ("mBoolsetTypeName") ;
    mProperty_mFlagList.printNonNullClassInstanceProperties ("mFlagList") ;
    mProperty_isEquatable.printNonNullClassInstanceProperties ("isEquatable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @boolsetDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolsetDeclarationAST ("boolsetDeclarationAST",
                                                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_boolsetDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_boolsetDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_boolsetDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolsetDeclarationAST GGS_boolsetDeclarationAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_boolsetDeclarationAST result ;
  const GGS_boolsetDeclarationAST * p = (const GGS_boolsetDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_boolsetDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolsetDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @classDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classDeclarationAST::objectCompare (const GGS_classDeclarationAST & inOperand) const {
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

GGS_classDeclarationAST::GGS_classDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_classDeclarationAST GGS_classDeclarationAST::
init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                  const GGS_bool & in_mIsAbstract,
                                                  const GGS_bool & in_mIsFinal,
                                                  const GGS_lstring & in_mClassTypeName,
                                                  const GGS_lstring & in_mSuperClassName,
                                                  const GGS_bool & in_mGenerateInSeparateFile,
                                                  const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                  const GGS_bool & in_clonable,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_classDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_classDeclarationAST (inCompiler COMMA_THERE)) ;
  object->classDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (in_isPredefined, in_mIsAbstract, in_mIsFinal, in_mClassTypeName, in_mSuperClassName, in_mGenerateInSeparateFile, in_mPropertyList, in_clonable, inCompiler) ;
  const GGS_classDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::
classDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                      const GGS_bool & in_mIsAbstract,
                                                                      const GGS_bool & in_mIsFinal,
                                                                      const GGS_lstring & in_mClassTypeName,
                                                                      const GGS_lstring & in_mSuperClassName,
                                                                      const GGS_bool & in_mGenerateInSeparateFile,
                                                                      const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                                      const GGS_bool & in_clonable,
                                                                      Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mIsAbstract = in_mIsAbstract ;
  mProperty_mIsFinal = in_mIsFinal ;
  mProperty_mClassTypeName = in_mClassTypeName ;
  mProperty_mSuperClassName = in_mSuperClassName ;
  mProperty_mGenerateInSeparateFile = in_mGenerateInSeparateFile ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_clonable = in_clonable ;
}

//--------------------------------------------------------------------------------------------------

GGS_classDeclarationAST::GGS_classDeclarationAST (const cPtr_classDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classDeclarationAST::readProperty_mIsAbstract (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mIsAbstract ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classDeclarationAST::readProperty_mIsFinal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mIsFinal ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_classDeclarationAST::readProperty_mClassTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mClassTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_classDeclarationAST::readProperty_mSuperClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mSuperClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classDeclarationAST::readProperty_mGenerateInSeparateFile (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mGenerateInSeparateFile ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST GGS_classDeclarationAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyInCollectionListAST () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classDeclarationAST::readProperty_clonable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_clonable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @classDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_classDeclarationAST::cPtr_classDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mIsAbstract (),
mProperty_mIsFinal (),
mProperty_mClassTypeName (),
mProperty_mSuperClassName (),
mProperty_mGenerateInSeparateFile (),
mProperty_mPropertyList (),
mProperty_clonable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_classDeclarationAST::cPtr_classDeclarationAST (const GGS_bool & in_isPredefined,
                                                    const GGS_bool & in_mIsAbstract,
                                                    const GGS_bool & in_mIsFinal,
                                                    const GGS_lstring & in_mClassTypeName,
                                                    const GGS_lstring & in_mSuperClassName,
                                                    const GGS_bool & in_mGenerateInSeparateFile,
                                                    const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                    const GGS_bool & in_clonable,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mIsAbstract (),
mProperty_mIsFinal (),
mProperty_mClassTypeName (),
mProperty_mSuperClassName (),
mProperty_mGenerateInSeparateFile (),
mProperty_mPropertyList (),
mProperty_clonable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mIsAbstract = in_mIsAbstract ;
  mProperty_mIsFinal = in_mIsFinal ;
  mProperty_mClassTypeName = in_mClassTypeName ;
  mProperty_mSuperClassName = in_mSuperClassName ;
  mProperty_mGenerateInSeparateFile = in_mGenerateInSeparateFile ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_clonable = in_clonable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_classDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classDeclarationAST ;
}

void cPtr_classDeclarationAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@classDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsAbstract.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsFinal.description (ioString, inIndentation+1) ;
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

AbstractPtrClass * cPtr_classDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_classDeclarationAST (mProperty_isPredefined, mProperty_mIsAbstract, mProperty_mIsFinal, mProperty_mClassTypeName, mProperty_mSuperClassName, mProperty_mGenerateInSeparateFile, mProperty_mPropertyList, mProperty_clonable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_classDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mIsAbstract.printNonNullClassInstanceProperties ("mIsAbstract") ;
    mProperty_mIsFinal.printNonNullClassInstanceProperties ("mIsFinal") ;
    mProperty_mClassTypeName.printNonNullClassInstanceProperties ("mClassTypeName") ;
    mProperty_mSuperClassName.printNonNullClassInstanceProperties ("mSuperClassName") ;
    mProperty_mGenerateInSeparateFile.printNonNullClassInstanceProperties ("mGenerateInSeparateFile") ;
    mProperty_mPropertyList.printNonNullClassInstanceProperties ("mPropertyList") ;
    mProperty_clonable.printNonNullClassInstanceProperties ("clonable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @classDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classDeclarationAST ("classDeclarationAST",
                                                                        & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classDeclarationAST GGS_classDeclarationAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_classDeclarationAST result ;
  const GGS_classDeclarationAST * p = (const GGS_classDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dictDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dictDeclarationAST::objectCompare (const GGS_dictDeclarationAST & inOperand) const {
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

GGS_dictDeclarationAST::GGS_dictDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dictDeclarationAST GGS_dictDeclarationAST::
init_21_isPredefined_21__21__21__21_equatable (const GGS_bool & in_isPredefined,
                                               const GGS_lstring & in_mDictTypeName,
                                               const GGS_lstring & in_mKeyTypeName,
                                               const GGS_propertyInCollectionListAST & in_mPropertyList,
                                               const GGS_bool & in_equatable,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cPtr_dictDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_dictDeclarationAST (inCompiler COMMA_THERE)) ;
  object->dictDeclarationAST_init_21_isPredefined_21__21__21__21_equatable (in_isPredefined, in_mDictTypeName, in_mKeyTypeName, in_mPropertyList, in_equatable, inCompiler) ;
  const GGS_dictDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::
dictDeclarationAST_init_21_isPredefined_21__21__21__21_equatable (const GGS_bool & in_isPredefined,
                                                                  const GGS_lstring & in_mDictTypeName,
                                                                  const GGS_lstring & in_mKeyTypeName,
                                                                  const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                                  const GGS_bool & in_equatable,
                                                                  Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mDictTypeName = in_mDictTypeName ;
  mProperty_mKeyTypeName = in_mKeyTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictDeclarationAST::GGS_dictDeclarationAST (const cPtr_dictDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dictDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_dictDeclarationAST::readProperty_mDictTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    return p->mProperty_mDictTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_dictDeclarationAST::readProperty_mKeyTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    return p->mProperty_mKeyTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST GGS_dictDeclarationAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyInCollectionListAST () ;
  }else{
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_dictDeclarationAST::readProperty_equatable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    return p->mProperty_equatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dictDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_dictDeclarationAST::cPtr_dictDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mDictTypeName (),
mProperty_mKeyTypeName (),
mProperty_mPropertyList (),
mProperty_equatable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_dictDeclarationAST::cPtr_dictDeclarationAST (const GGS_bool & in_isPredefined,
                                                  const GGS_lstring & in_mDictTypeName,
                                                  const GGS_lstring & in_mKeyTypeName,
                                                  const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                  const GGS_bool & in_equatable,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_dictDeclarationAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_dictDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dictDeclarationAST (mProperty_isPredefined, mProperty_mDictTypeName, mProperty_mKeyTypeName, mProperty_mPropertyList, mProperty_equatable, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @dictDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dictDeclarationAST ("dictDeclarationAST",
                                                                       & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dictDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dictDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dictDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictDeclarationAST GGS_dictDeclarationAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_dictDeclarationAST result ;
  const GGS_dictDeclarationAST * p = (const GGS_dictDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dictDeclarationAST *> (p)) {
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

ComparisonResult GGS_dictTypeForGeneration::objectCompare (const GGS_dictTypeForGeneration & inOperand) const {
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

GGS_dictTypeForGeneration::GGS_dictTypeForGeneration (void) :
GGS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dictTypeForGeneration GGS_dictTypeForGeneration::
init_21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                              const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                              const GGS_lstring & in_mDictTypeName,
                              const GGS_typedPropertyList & in_mTypedAttributeList,
                              const GGS_lstring & in_mKeyTypeName,
                              const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_dictTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_dictTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->dictTypeForGeneration_init_21__21__21__21__21__21_ (in_mSelfTypeEntry, in_mElementTypeEntry, in_mDictTypeName, in_mTypedAttributeList, in_mKeyTypeName, in_mOptionalElementTypeEntry, inCompiler) ;
  const GGS_dictTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dictTypeForGeneration::
dictTypeForGeneration_init_21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                    const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                    const GGS_lstring & in_mDictTypeName,
                                                    const GGS_typedPropertyList & in_mTypedAttributeList,
                                                    const GGS_lstring & in_mKeyTypeName,
                                                    const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                                    Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mElementTypeEntry = in_mElementTypeEntry ;
  mProperty_mDictTypeName = in_mDictTypeName ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mKeyTypeName = in_mKeyTypeName ;
  mProperty_mOptionalElementTypeEntry = in_mOptionalElementTypeEntry ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictTypeForGeneration::GGS_dictTypeForGeneration (const cPtr_dictTypeForGeneration * inSourcePtr) :
GGS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dictTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_dictTypeForGeneration::readProperty_mElementTypeEntry (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mElementTypeEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_dictTypeForGeneration::readProperty_mDictTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mDictTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList GGS_dictTypeForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typedPropertyList () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_dictTypeForGeneration::readProperty_mKeyTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mKeyTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_dictTypeForGeneration::readProperty_mOptionalElementTypeEntry (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mOptionalElementTypeEntry ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dictTypeForGeneration class
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

cPtr_dictTypeForGeneration::cPtr_dictTypeForGeneration (const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                        const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                        const GGS_lstring & in_mDictTypeName,
                                                        const GGS_typedPropertyList & in_mTypedAttributeList,
                                                        const GGS_lstring & in_mKeyTypeName,
                                                        const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_dictTypeForGeneration::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_dictTypeForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dictTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mElementTypeEntry, mProperty_mDictTypeName, mProperty_mTypedAttributeList, mProperty_mKeyTypeName, mProperty_mOptionalElementTypeEntry, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @dictTypeForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dictTypeForGeneration ("dictTypeForGeneration",
                                                                          & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dictTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dictTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dictTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictTypeForGeneration GGS_dictTypeForGeneration::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_dictTypeForGeneration result ;
  const GGS_dictTypeForGeneration * p = (const GGS_dictTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dictTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dictTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @sortedListDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sortedListDeclarationAST::objectCompare (const GGS_sortedListDeclarationAST & inOperand) const {
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

GGS_sortedListDeclarationAST::GGS_sortedListDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_sortedListDeclarationAST GGS_sortedListDeclarationAST::
init_21_isPredefined_21__21__21__21_equatable (const GGS_bool & in_isPredefined,
                                               const GGS_lstring & in_mSortedListTypeName,
                                               const GGS_propertyInCollectionListAST & in_mPropertyList,
                                               const GGS_sortedListSortDescriptorListAST & in_mSortDescriptorList,
                                               const GGS_bool & in_equatable,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cPtr_sortedListDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_sortedListDeclarationAST (inCompiler COMMA_THERE)) ;
  object->sortedListDeclarationAST_init_21_isPredefined_21__21__21__21_equatable (in_isPredefined, in_mSortedListTypeName, in_mPropertyList, in_mSortDescriptorList, in_equatable, inCompiler) ;
  const GGS_sortedListDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::
sortedListDeclarationAST_init_21_isPredefined_21__21__21__21_equatable (const GGS_bool & in_isPredefined,
                                                                        const GGS_lstring & in_mSortedListTypeName,
                                                                        const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                                        const GGS_sortedListSortDescriptorListAST & in_mSortDescriptorList,
                                                                        const GGS_bool & in_equatable,
                                                                        Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mSortedListTypeName = in_mSortedListTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_mSortDescriptorList = in_mSortDescriptorList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListDeclarationAST::GGS_sortedListDeclarationAST (const cPtr_sortedListDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sortedListDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_sortedListDeclarationAST::readProperty_mSortedListTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    return p->mProperty_mSortedListTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST GGS_sortedListDeclarationAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyInCollectionListAST () ;
  }else{
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListSortDescriptorListAST GGS_sortedListDeclarationAST::readProperty_mSortDescriptorList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_sortedListSortDescriptorListAST () ;
  }else{
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    return p->mProperty_mSortDescriptorList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_sortedListDeclarationAST::readProperty_equatable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    return p->mProperty_equatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @sortedListDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_sortedListDeclarationAST::cPtr_sortedListDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mSortedListTypeName (),
mProperty_mPropertyList (),
mProperty_mSortDescriptorList (),
mProperty_equatable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_sortedListDeclarationAST::cPtr_sortedListDeclarationAST (const GGS_bool & in_isPredefined,
                                                              const GGS_lstring & in_mSortedListTypeName,
                                                              const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                              const GGS_sortedListSortDescriptorListAST & in_mSortDescriptorList,
                                                              const GGS_bool & in_equatable,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_sortedListDeclarationAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_sortedListDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sortedListDeclarationAST (mProperty_isPredefined, mProperty_mSortedListTypeName, mProperty_mPropertyList, mProperty_mSortDescriptorList, mProperty_equatable, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @sortedListDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedListDeclarationAST ("sortedListDeclarationAST",
                                                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sortedListDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sortedListDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sortedListDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListDeclarationAST GGS_sortedListDeclarationAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_sortedListDeclarationAST result ;
  const GGS_sortedListDeclarationAST * p = (const GGS_sortedListDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sortedListDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedListDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@typeNameFormalParameterNameList initializerSignature'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_initializerSignature (const GGS_typeNameFormalParameterNameList & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("init") ;
  const GGS_typeNameFormalParameterNameList temp_0 = inObject ;
  UpEnumerator_typeNameFormalParameterNameList enumerator_11851 (temp_0) ;
  while (enumerator_11851.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("!").add_operation (enumerator_11851.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 313)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas3", 313)) ;
    enumerator_11851.gotoNextObject () ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @externTypeDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_externTypeDeclarationAST::objectCompare (const GGS_externTypeDeclarationAST & inOperand) const {
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

GGS_externTypeDeclarationAST::GGS_externTypeDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_externTypeDeclarationAST GGS_externTypeDeclarationAST::
init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                  const GGS_lstring & in_mExternTypeName,
                                                  const GGS_string & in_mCppPreDeclarationCode,
                                                  const GGS_string & in_mCppClassCode,
                                                  const GGS_externTypeConstructorList & in_externTypeInitializerList,
                                                  const GGS_externTypeGetterList & in_mExternTypeGetterList,
                                                  const GGS_externTypeSetterList & in_mExternTypeSetterList,
                                                  const GGS_externTypeMethodList & in_mExternTypeMethodList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_externTypeDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_externTypeDeclarationAST (inCompiler COMMA_THERE)) ;
  object->externTypeDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (in_isPredefined, in_mExternTypeName, in_mCppPreDeclarationCode, in_mCppClassCode, in_externTypeInitializerList, in_mExternTypeGetterList, in_mExternTypeSetterList, in_mExternTypeMethodList, inCompiler) ;
  const GGS_externTypeDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::
externTypeDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                           const GGS_lstring & in_mExternTypeName,
                                                                           const GGS_string & in_mCppPreDeclarationCode,
                                                                           const GGS_string & in_mCppClassCode,
                                                                           const GGS_externTypeConstructorList & in_externTypeInitializerList,
                                                                           const GGS_externTypeGetterList & in_mExternTypeGetterList,
                                                                           const GGS_externTypeSetterList & in_mExternTypeSetterList,
                                                                           const GGS_externTypeMethodList & in_mExternTypeMethodList,
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

GGS_externTypeDeclarationAST::GGS_externTypeDeclarationAST (const cPtr_externTypeDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externTypeDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_externTypeDeclarationAST::readProperty_mExternTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_externTypeDeclarationAST::readProperty_mCppPreDeclarationCode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mCppPreDeclarationCode ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_externTypeDeclarationAST::readProperty_mCppClassCode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mCppClassCode ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeConstructorList GGS_externTypeDeclarationAST::readProperty_externTypeInitializerList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_externTypeConstructorList () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_externTypeInitializerList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeGetterList GGS_externTypeDeclarationAST::readProperty_mExternTypeGetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_externTypeGetterList () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeGetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeSetterList GGS_externTypeDeclarationAST::readProperty_mExternTypeSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_externTypeSetterList () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeMethodList GGS_externTypeDeclarationAST::readProperty_mExternTypeMethodList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_externTypeMethodList () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeMethodList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @externTypeDeclarationAST class
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

cPtr_externTypeDeclarationAST::cPtr_externTypeDeclarationAST (const GGS_bool & in_isPredefined,
                                                              const GGS_lstring & in_mExternTypeName,
                                                              const GGS_string & in_mCppPreDeclarationCode,
                                                              const GGS_string & in_mCppClassCode,
                                                              const GGS_externTypeConstructorList & in_externTypeInitializerList,
                                                              const GGS_externTypeGetterList & in_mExternTypeGetterList,
                                                              const GGS_externTypeSetterList & in_mExternTypeSetterList,
                                                              const GGS_externTypeMethodList & in_mExternTypeMethodList,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_externTypeDeclarationAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_externTypeDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_externTypeDeclarationAST (mProperty_isPredefined, mProperty_mExternTypeName, mProperty_mCppPreDeclarationCode, mProperty_mCppClassCode, mProperty_externTypeInitializerList, mProperty_mExternTypeGetterList, mProperty_mExternTypeSetterList, mProperty_mExternTypeMethodList, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @externTypeDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeDeclarationAST ("externTypeDeclarationAST",
                                                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externTypeDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externTypeDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externTypeDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationAST GGS_externTypeDeclarationAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_externTypeDeclarationAST result ;
  const GGS_externTypeDeclarationAST * p = (const GGS_externTypeDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externTypeDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (void) :
mProperty_mValue_30_ (),
mProperty_mValue_31_ () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (const GGS__32_lstringlist_2E_element & inSource) :
mProperty_mValue_30_ (inSource.mProperty_mValue_30_),
mProperty_mValue_31_ (inSource.mProperty_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element & GGS__32_lstringlist_2E_element::operator = (const GGS__32_lstringlist_2E_element & inSource) {
  mProperty_mValue_30_ = inSource.mProperty_mValue_30_ ;
  mProperty_mValue_31_ = inSource.mProperty_mValue_31_ ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS__32_lstringlist_2E_element GGS__32_lstringlist_2E_element::init_21__21_ (const GGS_lstring & in_mValue_30_,
                                                                             const GGS_lstring & in_mValue_31_,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS__32_lstringlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue_30_ = in_mValue_30_ ;
  result.mProperty_mValue_31_ = in_mValue_31_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (const GGS_lstring & inOperand0,
                                                                const GGS_lstring & inOperand1) :
mProperty_mValue_30_ (inOperand0),
mProperty_mValue_31_ (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS__32_lstringlist_2E_element::isValid (void) const {
  return mProperty_mValue_30_.isValid () && mProperty_mValue_31_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::drop (void) {
  mProperty_mValue_30_.drop () ;
  mProperty_mValue_31_.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @2lstringlist.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mValue_30_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValue_31_.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @2lstringlist.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__32_lstringlist_2E_element ("2lstringlist.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__32_lstringlist_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__32_lstringlist_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__32_lstringlist_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element GGS__32_lstringlist_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS__32_lstringlist_2E_element result ;
  const GGS__32_lstringlist_2E_element * p = (const GGS__32_lstringlist_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__32_lstringlist_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST_2E_element::GGS_logListAST_2E_element (void) :
mProperty_mLogMessage (),
mProperty_mLogExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST_2E_element::GGS_logListAST_2E_element (const GGS_logListAST_2E_element & inSource) :
mProperty_mLogMessage (inSource.mProperty_mLogMessage),
mProperty_mLogExpression (inSource.mProperty_mLogExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST_2E_element & GGS_logListAST_2E_element::operator = (const GGS_logListAST_2E_element & inSource) {
  mProperty_mLogMessage = inSource.mProperty_mLogMessage ;
  mProperty_mLogExpression = inSource.mProperty_mLogExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_logListAST_2E_element GGS_logListAST_2E_element::init_21__21_ (const GGS_lstring & in_mLogMessage,
                                                                   const GGS_semanticExpressionAST & in_mLogExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_logListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLogMessage = in_mLogMessage ;
  result.mProperty_mLogExpression = in_mLogExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST_2E_element::GGS_logListAST_2E_element (const GGS_lstring & inOperand0,
                                                      const GGS_semanticExpressionAST & inOperand1) :
mProperty_mLogMessage (inOperand0),
mProperty_mLogExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_logListAST_2E_element::isValid (void) const {
  return mProperty_mLogMessage.isValid () && mProperty_mLogExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST_2E_element::drop (void) {
  mProperty_mLogMessage.drop () ;
  mProperty_mLogExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST_2E_element::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @logListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLogMessage.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLogExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @logListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_logListAST_2E_element ("logListAST.element",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_logListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_logListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_logListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST_2E_element GGS_logListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_logListAST_2E_element result ;
  const GGS_logListAST_2E_element * p = (const GGS_logListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_logListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace::GGS_fixitElementForGeneration_2E_fixItReplace (void) :
mProperty_exp () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace::GGS_fixitElementForGeneration_2E_fixItReplace (const GGS_fixitElementForGeneration_2E_fixItReplace & inSource) :
mProperty_exp (inSource.mProperty_exp) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace & GGS_fixitElementForGeneration_2E_fixItReplace::operator = (const GGS_fixitElementForGeneration_2E_fixItReplace & inSource) {
  mProperty_exp = inSource.mProperty_exp ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace GGS_fixitElementForGeneration_2E_fixItReplace::init_21_ (const GGS_semanticExpressionForGeneration & in_exp,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItReplace result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItReplace::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace::GGS_fixitElementForGeneration_2E_fixItReplace (const GGS_semanticExpressionForGeneration & inOperand0) :
mProperty_exp (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItReplace::isValid (void) const {
  return mProperty_exp.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItReplace::drop (void) {
  mProperty_exp.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItReplace::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitElementForGeneration.fixItReplace:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitElementForGeneration.fixItReplace generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItReplace ("fixitElementForGeneration.fixItReplace",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementForGeneration_2E_fixItReplace::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItReplace ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementForGeneration_2E_fixItReplace::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementForGeneration_2E_fixItReplace (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace GGS_fixitElementForGeneration_2E_fixItReplace::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItReplace result ;
  const GGS_fixitElementForGeneration_2E_fixItReplace * p = (const GGS_fixitElementForGeneration_2E_fixItReplace *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementForGeneration_2E_fixItReplace *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration.fixItReplace", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @fixitElementForGeneration_2E_fixItReplace_3F_
//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace_3F_::GGS_fixitElementForGeneration_2E_fixItReplace_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace_3F_::GGS_fixitElementForGeneration_2E_fixItReplace_3F_ (const GGS_fixitElementForGeneration_2E_fixItReplace & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace_3F_ GGS_fixitElementForGeneration_2E_fixItReplace_3F_::init_nil (void) {
  GGS_fixitElementForGeneration_2E_fixItReplace_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItReplace_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItReplace_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItReplace_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_fixitElementForGeneration_2E_fixItReplace () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItReplace_3F_::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitElementForGeneration.fixItReplace? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItReplace_3F_ ("fixitElementForGeneration.fixItReplace?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementForGeneration_2E_fixItReplace_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItReplace_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementForGeneration_2E_fixItReplace_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementForGeneration_2E_fixItReplace_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace_3F_ GGS_fixitElementForGeneration_2E_fixItReplace_3F_::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItReplace_3F_ result ;
  const GGS_fixitElementForGeneration_2E_fixItReplace_3F_ * p = (const GGS_fixitElementForGeneration_2E_fixItReplace_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementForGeneration_2E_fixItReplace_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration.fixItReplace?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore::GGS_fixitElementForGeneration_2E_fixItInsertBefore (void) :
mProperty_exp () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore::GGS_fixitElementForGeneration_2E_fixItInsertBefore (const GGS_fixitElementForGeneration_2E_fixItInsertBefore & inSource) :
mProperty_exp (inSource.mProperty_exp) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore & GGS_fixitElementForGeneration_2E_fixItInsertBefore::operator = (const GGS_fixitElementForGeneration_2E_fixItInsertBefore & inSource) {
  mProperty_exp = inSource.mProperty_exp ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore GGS_fixitElementForGeneration_2E_fixItInsertBefore::init_21_ (const GGS_semanticExpressionForGeneration & in_exp,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItInsertBefore result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertBefore::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore::GGS_fixitElementForGeneration_2E_fixItInsertBefore (const GGS_semanticExpressionForGeneration & inOperand0) :
mProperty_exp (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItInsertBefore::isValid (void) const {
  return mProperty_exp.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertBefore::drop (void) {
  mProperty_exp.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertBefore::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitElementForGeneration.fixItInsertBefore:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitElementForGeneration.fixItInsertBefore generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertBefore ("fixitElementForGeneration.fixItInsertBefore",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementForGeneration_2E_fixItInsertBefore::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertBefore ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementForGeneration_2E_fixItInsertBefore::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementForGeneration_2E_fixItInsertBefore (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore GGS_fixitElementForGeneration_2E_fixItInsertBefore::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItInsertBefore result ;
  const GGS_fixitElementForGeneration_2E_fixItInsertBefore * p = (const GGS_fixitElementForGeneration_2E_fixItInsertBefore *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementForGeneration_2E_fixItInsertBefore *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration.fixItInsertBefore", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @fixitElementForGeneration_2E_fixItInsertBefore_3F_
//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ (const GGS_fixitElementForGeneration_2E_fixItInsertBefore & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::init_nil (void) {
  GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_fixitElementForGeneration_2E_fixItInsertBefore () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitElementForGeneration.fixItInsertBefore? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ ("fixitElementForGeneration.fixItInsertBefore?",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ result ;
  const GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ * p = (const GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration.fixItInsertBefore?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter::GGS_fixitElementForGeneration_2E_fixItInsertAfter (void) :
mProperty_exp () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter::GGS_fixitElementForGeneration_2E_fixItInsertAfter (const GGS_fixitElementForGeneration_2E_fixItInsertAfter & inSource) :
mProperty_exp (inSource.mProperty_exp) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter & GGS_fixitElementForGeneration_2E_fixItInsertAfter::operator = (const GGS_fixitElementForGeneration_2E_fixItInsertAfter & inSource) {
  mProperty_exp = inSource.mProperty_exp ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter GGS_fixitElementForGeneration_2E_fixItInsertAfter::init_21_ (const GGS_semanticExpressionForGeneration & in_exp,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItInsertAfter result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertAfter::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter::GGS_fixitElementForGeneration_2E_fixItInsertAfter (const GGS_semanticExpressionForGeneration & inOperand0) :
mProperty_exp (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItInsertAfter::isValid (void) const {
  return mProperty_exp.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertAfter::drop (void) {
  mProperty_exp.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertAfter::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitElementForGeneration.fixItInsertAfter:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitElementForGeneration.fixItInsertAfter generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertAfter ("fixitElementForGeneration.fixItInsertAfter",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementForGeneration_2E_fixItInsertAfter::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertAfter ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementForGeneration_2E_fixItInsertAfter::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementForGeneration_2E_fixItInsertAfter (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter GGS_fixitElementForGeneration_2E_fixItInsertAfter::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItInsertAfter result ;
  const GGS_fixitElementForGeneration_2E_fixItInsertAfter * p = (const GGS_fixitElementForGeneration_2E_fixItInsertAfter *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementForGeneration_2E_fixItInsertAfter *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration.fixItInsertAfter", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @fixitElementForGeneration_2E_fixItInsertAfter_3F_
//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ (const GGS_fixitElementForGeneration_2E_fixItInsertAfter & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::init_nil (void) {
  GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_fixitElementForGeneration_2E_fixItInsertAfter () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitElementForGeneration.fixItInsertAfter? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ ("fixitElementForGeneration.fixItInsertAfter?",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ result ;
  const GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ * p = (const GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration.fixItInsertAfter?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp::GGS_ifExpressionKind_2E_letVarExp (void) :
mProperty_varName (),
mProperty_isConstant (),
mProperty_exp (),
mProperty_endOfExp (),
mProperty_typeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp::GGS_ifExpressionKind_2E_letVarExp (const GGS_ifExpressionKind_2E_letVarExp & inSource) :
mProperty_varName (inSource.mProperty_varName),
mProperty_isConstant (inSource.mProperty_isConstant),
mProperty_exp (inSource.mProperty_exp),
mProperty_endOfExp (inSource.mProperty_endOfExp),
mProperty_typeName (inSource.mProperty_typeName) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp & GGS_ifExpressionKind_2E_letVarExp::operator = (const GGS_ifExpressionKind_2E_letVarExp & inSource) {
  mProperty_varName = inSource.mProperty_varName ;
  mProperty_isConstant = inSource.mProperty_isConstant ;
  mProperty_exp = inSource.mProperty_exp ;
  mProperty_endOfExp = inSource.mProperty_endOfExp ;
  mProperty_typeName = inSource.mProperty_typeName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp GGS_ifExpressionKind_2E_letVarExp::init_21__21__21__21__21_ (const GGS_lstring & in_varName,
                                                                                               const GGS_bool & in_isConstant,
                                                                                               const GGS_semanticExpressionAST & in_exp,
                                                                                               const GGS_location & in_endOfExp,
                                                                                               const GGS_lstring & in_typeName,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifExpressionKind_2E_letVarExp result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_varName = in_varName ;
  result.mProperty_isConstant = in_isConstant ;
  result.mProperty_exp = in_exp ;
  result.mProperty_endOfExp = in_endOfExp ;
  result.mProperty_typeName = in_typeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_letVarExp::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp::GGS_ifExpressionKind_2E_letVarExp (const GGS_lstring & inOperand0,
                                                                      const GGS_bool & inOperand1,
                                                                      const GGS_semanticExpressionAST & inOperand2,
                                                                      const GGS_location & inOperand3,
                                                                      const GGS_lstring & inOperand4) :
mProperty_varName (inOperand0),
mProperty_isConstant (inOperand1),
mProperty_exp (inOperand2),
mProperty_endOfExp (inOperand3),
mProperty_typeName (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifExpressionKind_2E_letVarExp::isValid (void) const {
  return mProperty_varName.isValid () && mProperty_isConstant.isValid () && mProperty_exp.isValid () && mProperty_endOfExp.isValid () && mProperty_typeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_letVarExp::drop (void) {
  mProperty_varName.drop () ;
  mProperty_isConstant.drop () ;
  mProperty_exp.drop () ;
  mProperty_endOfExp.drop () ;
  mProperty_typeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_letVarExp::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ifExpressionKind.letVarExp:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_varName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isConstant.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_endOfExp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_typeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifExpressionKind.letVarExp generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_letVarExp ("ifExpressionKind.letVarExp",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifExpressionKind_2E_letVarExp::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionKind_2E_letVarExp ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifExpressionKind_2E_letVarExp::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifExpressionKind_2E_letVarExp (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp GGS_ifExpressionKind_2E_letVarExp::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_ifExpressionKind_2E_letVarExp result ;
  const GGS_ifExpressionKind_2E_letVarExp * p = (const GGS_ifExpressionKind_2E_letVarExp *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifExpressionKind_2E_letVarExp *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionKind.letVarExp", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @ifExpressionKind_2E_letVarExp_3F_
//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp_3F_::GGS_ifExpressionKind_2E_letVarExp_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp_3F_::GGS_ifExpressionKind_2E_letVarExp_3F_ (const GGS_ifExpressionKind_2E_letVarExp & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp_3F_ GGS_ifExpressionKind_2E_letVarExp_3F_::init_nil (void) {
  GGS_ifExpressionKind_2E_letVarExp_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifExpressionKind_2E_letVarExp_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifExpressionKind_2E_letVarExp_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_letVarExp_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_ifExpressionKind_2E_letVarExp () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_letVarExp_3F_::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifExpressionKind.letVarExp? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_letVarExp_3F_ ("ifExpressionKind.letVarExp?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifExpressionKind_2E_letVarExp_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionKind_2E_letVarExp_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifExpressionKind_2E_letVarExp_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifExpressionKind_2E_letVarExp_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp_3F_ GGS_ifExpressionKind_2E_letVarExp_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_ifExpressionKind_2E_letVarExp_3F_ result ;
  const GGS_ifExpressionKind_2E_letVarExp_3F_ * p = (const GGS_ifExpressionKind_2E_letVarExp_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifExpressionKind_2E_letVarExp_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionKind.letVarExp?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular::GGS_ifTestForGeneration_2E_regular (void) :
mProperty_exp () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular::GGS_ifTestForGeneration_2E_regular (const GGS_ifTestForGeneration_2E_regular & inSource) :
mProperty_exp (inSource.mProperty_exp) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular & GGS_ifTestForGeneration_2E_regular::operator = (const GGS_ifTestForGeneration_2E_regular & inSource) {
  mProperty_exp = inSource.mProperty_exp ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular GGS_ifTestForGeneration_2E_regular::init_21_ (const GGS_semanticExpressionForGeneration & in_exp,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_regular result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_regular::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular::GGS_ifTestForGeneration_2E_regular (const GGS_semanticExpressionForGeneration & inOperand0) :
mProperty_exp (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_regular::isValid (void) const {
  return mProperty_exp.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_regular::drop (void) {
  mProperty_exp.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_regular::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ifTestForGeneration.regular:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifTestForGeneration.regular generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_regular ("ifTestForGeneration.regular",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifTestForGeneration_2E_regular::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration_2E_regular ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestForGeneration_2E_regular::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestForGeneration_2E_regular (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular GGS_ifTestForGeneration_2E_regular::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_regular result ;
  const GGS_ifTestForGeneration_2E_regular * p = (const GGS_ifTestForGeneration_2E_regular *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestForGeneration_2E_regular *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration.regular", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @ifTestForGeneration_2E_regular_3F_
//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular_3F_::GGS_ifTestForGeneration_2E_regular_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular_3F_::GGS_ifTestForGeneration_2E_regular_3F_ (const GGS_ifTestForGeneration_2E_regular & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular_3F_ GGS_ifTestForGeneration_2E_regular_3F_::init_nil (void) {
  GGS_ifTestForGeneration_2E_regular_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_regular_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_regular_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_regular_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_ifTestForGeneration_2E_regular () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_regular_3F_::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifTestForGeneration.regular? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_regular_3F_ ("ifTestForGeneration.regular?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifTestForGeneration_2E_regular_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration_2E_regular_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestForGeneration_2E_regular_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestForGeneration_2E_regular_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular_3F_ GGS_ifTestForGeneration_2E_regular_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_regular_3F_ result ;
  const GGS_ifTestForGeneration_2E_regular_3F_ * p = (const GGS_ifTestForGeneration_2E_regular_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestForGeneration_2E_regular_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration.regular?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp::GGS_ifTestForGeneration_2E_letVarExp (void) :
mProperty_targetVarCppName (),
mProperty_exp (),
mProperty_targetType (),
mProperty_testType () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp::GGS_ifTestForGeneration_2E_letVarExp (const GGS_ifTestForGeneration_2E_letVarExp & inSource) :
mProperty_targetVarCppName (inSource.mProperty_targetVarCppName),
mProperty_exp (inSource.mProperty_exp),
mProperty_targetType (inSource.mProperty_targetType),
mProperty_testType (inSource.mProperty_testType) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp & GGS_ifTestForGeneration_2E_letVarExp::operator = (const GGS_ifTestForGeneration_2E_letVarExp & inSource) {
  mProperty_targetVarCppName = inSource.mProperty_targetVarCppName ;
  mProperty_exp = inSource.mProperty_exp ;
  mProperty_targetType = inSource.mProperty_targetType ;
  mProperty_testType = inSource.mProperty_testType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp GGS_ifTestForGeneration_2E_letVarExp::init_21__21__21__21_ (const GGS_string & in_targetVarCppName,
                                                                                                 const GGS_semanticExpressionForGeneration & in_exp,
                                                                                                 const GGS_unifiedTypeMapEntry & in_targetType,
                                                                                                 const GGS_unifiedTypeMapEntry & in_testType,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_letVarExp result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_targetVarCppName = in_targetVarCppName ;
  result.mProperty_exp = in_exp ;
  result.mProperty_targetType = in_targetType ;
  result.mProperty_testType = in_testType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_letVarExp::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp::GGS_ifTestForGeneration_2E_letVarExp (const GGS_string & inOperand0,
                                                                            const GGS_semanticExpressionForGeneration & inOperand1,
                                                                            const GGS_unifiedTypeMapEntry & inOperand2,
                                                                            const GGS_unifiedTypeMapEntry & inOperand3) :
mProperty_targetVarCppName (inOperand0),
mProperty_exp (inOperand1),
mProperty_targetType (inOperand2),
mProperty_testType (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_letVarExp::isValid (void) const {
  return mProperty_targetVarCppName.isValid () && mProperty_exp.isValid () && mProperty_targetType.isValid () && mProperty_testType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_letVarExp::drop (void) {
  mProperty_targetVarCppName.drop () ;
  mProperty_exp.drop () ;
  mProperty_targetType.drop () ;
  mProperty_testType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_letVarExp::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ifTestForGeneration.letVarExp:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_targetVarCppName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_targetType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_testType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifTestForGeneration.letVarExp generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_letVarExp ("ifTestForGeneration.letVarExp",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifTestForGeneration_2E_letVarExp::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration_2E_letVarExp ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestForGeneration_2E_letVarExp::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestForGeneration_2E_letVarExp (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp GGS_ifTestForGeneration_2E_letVarExp::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_letVarExp result ;
  const GGS_ifTestForGeneration_2E_letVarExp * p = (const GGS_ifTestForGeneration_2E_letVarExp *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestForGeneration_2E_letVarExp *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration.letVarExp", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @ifTestForGeneration_2E_letVarExp_3F_
//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp_3F_::GGS_ifTestForGeneration_2E_letVarExp_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp_3F_::GGS_ifTestForGeneration_2E_letVarExp_3F_ (const GGS_ifTestForGeneration_2E_letVarExp & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp_3F_ GGS_ifTestForGeneration_2E_letVarExp_3F_::init_nil (void) {
  GGS_ifTestForGeneration_2E_letVarExp_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_letVarExp_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_letVarExp_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_letVarExp_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_ifTestForGeneration_2E_letVarExp () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_letVarExp_3F_::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifTestForGeneration.letVarExp? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_letVarExp_3F_ ("ifTestForGeneration.letVarExp?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifTestForGeneration_2E_letVarExp_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration_2E_letVarExp_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestForGeneration_2E_letVarExp_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestForGeneration_2E_letVarExp_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp_3F_ GGS_ifTestForGeneration_2E_letVarExp_3F_::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_letVarExp_3F_ result ;
  const GGS_ifTestForGeneration_2E_letVarExp_3F_ * p = (const GGS_ifTestForGeneration_2E_letVarExp_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestForGeneration_2E_letVarExp_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration.letVarExp?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp::GGS_ifTestForGeneration_2E_optionalExp (void) :
mProperty_targetVarCppName (),
mProperty_isConstant (),
mProperty_exp (),
mProperty_targetType () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp::GGS_ifTestForGeneration_2E_optionalExp (const GGS_ifTestForGeneration_2E_optionalExp & inSource) :
mProperty_targetVarCppName (inSource.mProperty_targetVarCppName),
mProperty_isConstant (inSource.mProperty_isConstant),
mProperty_exp (inSource.mProperty_exp),
mProperty_targetType (inSource.mProperty_targetType) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp & GGS_ifTestForGeneration_2E_optionalExp::operator = (const GGS_ifTestForGeneration_2E_optionalExp & inSource) {
  mProperty_targetVarCppName = inSource.mProperty_targetVarCppName ;
  mProperty_isConstant = inSource.mProperty_isConstant ;
  mProperty_exp = inSource.mProperty_exp ;
  mProperty_targetType = inSource.mProperty_targetType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp GGS_ifTestForGeneration_2E_optionalExp::init_21__21__21__21_ (const GGS_string & in_targetVarCppName,
                                                                                                     const GGS_bool & in_isConstant,
                                                                                                     const GGS_semanticExpressionForGeneration & in_exp,
                                                                                                     const GGS_unifiedTypeMapEntry & in_targetType,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_optionalExp result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_targetVarCppName = in_targetVarCppName ;
  result.mProperty_isConstant = in_isConstant ;
  result.mProperty_exp = in_exp ;
  result.mProperty_targetType = in_targetType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_optionalExp::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp::GGS_ifTestForGeneration_2E_optionalExp (const GGS_string & inOperand0,
                                                                                const GGS_bool & inOperand1,
                                                                                const GGS_semanticExpressionForGeneration & inOperand2,
                                                                                const GGS_unifiedTypeMapEntry & inOperand3) :
mProperty_targetVarCppName (inOperand0),
mProperty_isConstant (inOperand1),
mProperty_exp (inOperand2),
mProperty_targetType (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_optionalExp::isValid (void) const {
  return mProperty_targetVarCppName.isValid () && mProperty_isConstant.isValid () && mProperty_exp.isValid () && mProperty_targetType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_optionalExp::drop (void) {
  mProperty_targetVarCppName.drop () ;
  mProperty_isConstant.drop () ;
  mProperty_exp.drop () ;
  mProperty_targetType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_optionalExp::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ifTestForGeneration.optionalExp:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_targetVarCppName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isConstant.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_targetType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifTestForGeneration.optionalExp generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_optionalExp ("ifTestForGeneration.optionalExp",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifTestForGeneration_2E_optionalExp::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration_2E_optionalExp ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestForGeneration_2E_optionalExp::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestForGeneration_2E_optionalExp (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp GGS_ifTestForGeneration_2E_optionalExp::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_optionalExp result ;
  const GGS_ifTestForGeneration_2E_optionalExp * p = (const GGS_ifTestForGeneration_2E_optionalExp *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestForGeneration_2E_optionalExp *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration.optionalExp", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

