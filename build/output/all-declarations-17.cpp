#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-17.h"

//--------------------------------------------------------------------------------------------------
// @inputSingleJokerActualParameterAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_inputSingleJokerActualParameterAST::cPtr_inputSingleJokerActualParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mActualSelector (),
mProperty_mPoisonedVarNameList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputSingleJokerActualParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualSelector.printNonNullClassInstanceProperties ("mActualSelector") ;
    mProperty_mPoisonedVarNameList.printNonNullClassInstanceProperties ("mPoisonedVarNameList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_inputSingleJokerActualParameterAST::objectCompare (const GALGAS_inputSingleJokerActualParameterAST & inOperand) const {
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

GALGAS_inputSingleJokerActualParameterAST::GALGAS_inputSingleJokerActualParameterAST (void) :
GALGAS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_inputSingleJokerActualParameterAST GALGAS_inputSingleJokerActualParameterAST::
init_21__21_ (const GALGAS_lstring & in_mActualSelector,
              const GALGAS_lstringlist & in_mPoisonedVarNameList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_inputSingleJokerActualParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_inputSingleJokerActualParameterAST (inCompiler COMMA_THERE)) ;
  object->inputSingleJokerActualParameterAST_init_21__21_ (in_mActualSelector, in_mPoisonedVarNameList, inCompiler) ;
  const GALGAS_inputSingleJokerActualParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputSingleJokerActualParameterAST::
inputSingleJokerActualParameterAST_init_21__21_ (const GALGAS_lstring & in_mActualSelector,
                                                 const GALGAS_lstringlist & in_mPoisonedVarNameList,
                                                 Compiler * /* inCompiler */) {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputSingleJokerActualParameterAST::GALGAS_inputSingleJokerActualParameterAST (const cPtr_inputSingleJokerActualParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputSingleJokerActualParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_inputSingleJokerActualParameterAST GALGAS_inputSingleJokerActualParameterAST::class_func_new (const GALGAS_lstring & in_mActualSelector,
                                                                                                     const GALGAS_lstringlist & in_mPoisonedVarNameList
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_inputSingleJokerActualParameterAST result ;
  macroMyNew (result.mObjectPtr, cPtr_inputSingleJokerActualParameterAST (in_mActualSelector, in_mPoisonedVarNameList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputSingleJokerActualParameterAST::readProperty_mActualSelector (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputSingleJokerActualParameterAST * p = (cPtr_inputSingleJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputSingleJokerActualParameterAST) ;
    return p->mProperty_mActualSelector ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_inputSingleJokerActualParameterAST::readProperty_mPoisonedVarNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_inputSingleJokerActualParameterAST * p = (cPtr_inputSingleJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputSingleJokerActualParameterAST) ;
    return p->mProperty_mPoisonedVarNameList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputSingleJokerActualParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_inputSingleJokerActualParameterAST::cPtr_inputSingleJokerActualParameterAST (const GALGAS_lstring & in_mActualSelector,
                                                                                  const GALGAS_lstringlist & in_mPoisonedVarNameList
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mProperty_mActualSelector (),
mProperty_mPoisonedVarNameList () {
  mProperty_mActualSelector = in_mActualSelector ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputSingleJokerActualParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST ;
}

void cPtr_inputSingleJokerActualParameterAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@inputSingleJokerActualParameterAST:") ;
  mProperty_mActualSelector.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPoisonedVarNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputSingleJokerActualParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputSingleJokerActualParameterAST (mProperty_mActualSelector, mProperty_mPoisonedVarNameList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @inputSingleJokerActualParameterAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST ("inputSingleJokerActualParameterAST",
                                                                                          & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputSingleJokerActualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputSingleJokerActualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputSingleJokerActualParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputSingleJokerActualParameterAST GALGAS_inputSingleJokerActualParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_inputSingleJokerActualParameterAST result ;
  const GALGAS_inputSingleJokerActualParameterAST * p = (const GALGAS_inputSingleJokerActualParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inputSingleJokerActualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputSingleJokerActualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @externProcedureDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_externProcedureDeclarationAST::cPtr_externProcedureDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_isFilePrivate (),
mProperty_mRoutineName (),
mProperty_mFormalArgumentListAST (),
mProperty_usefullProcedure () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_externProcedureDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_isFilePrivate.printNonNullClassInstanceProperties ("isFilePrivate") ;
    mProperty_mRoutineName.printNonNullClassInstanceProperties ("mRoutineName") ;
    mProperty_mFormalArgumentListAST.printNonNullClassInstanceProperties ("mFormalArgumentListAST") ;
    mProperty_usefullProcedure.printNonNullClassInstanceProperties ("usefullProcedure") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_externProcedureDeclarationAST::objectCompare (const GALGAS_externProcedureDeclarationAST & inOperand) const {
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

GALGAS_externProcedureDeclarationAST::GALGAS_externProcedureDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_externProcedureDeclarationAST GALGAS_externProcedureDeclarationAST::
init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure (const GALGAS_bool & in_isPredefined,
                                                                   const GALGAS_bool & in_isFilePrivate,
                                                                   const GALGAS_lstring & in_mRoutineName,
                                                                   const GALGAS_formalParameterListAST & in_mFormalArgumentListAST,
                                                                   const GALGAS_bool & in_usefullProcedure,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cPtr_externProcedureDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_externProcedureDeclarationAST (inCompiler COMMA_THERE)) ;
  object->externProcedureDeclarationAST_init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure (in_isPredefined, in_isFilePrivate, in_mRoutineName, in_mFormalArgumentListAST, in_usefullProcedure, inCompiler) ;
  const GALGAS_externProcedureDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_externProcedureDeclarationAST::
externProcedureDeclarationAST_init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure (const GALGAS_bool & in_isPredefined,
                                                                                                 const GALGAS_bool & in_isFilePrivate,
                                                                                                 const GALGAS_lstring & in_mRoutineName,
                                                                                                 const GALGAS_formalParameterListAST & in_mFormalArgumentListAST,
                                                                                                 const GALGAS_bool & in_usefullProcedure,
                                                                                                 Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_isFilePrivate = in_isFilePrivate ;
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mFormalArgumentListAST = in_mFormalArgumentListAST ;
  mProperty_usefullProcedure = in_usefullProcedure ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureDeclarationAST::GALGAS_externProcedureDeclarationAST (const cPtr_externProcedureDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externProcedureDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureDeclarationAST GALGAS_externProcedureDeclarationAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                                           const GALGAS_bool & in_isFilePrivate,
                                                                                           const GALGAS_lstring & in_mRoutineName,
                                                                                           const GALGAS_formalParameterListAST & in_mFormalArgumentListAST,
                                                                                           const GALGAS_bool & in_usefullProcedure
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_externProcedureDeclarationAST (in_isPredefined, in_isFilePrivate, in_mRoutineName, in_mFormalArgumentListAST, in_usefullProcedure COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_externProcedureDeclarationAST::readProperty_isFilePrivate (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_externProcedureDeclarationAST * p = (cPtr_externProcedureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externProcedureDeclarationAST) ;
    return p->mProperty_isFilePrivate ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externProcedureDeclarationAST::readProperty_mRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_externProcedureDeclarationAST * p = (cPtr_externProcedureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externProcedureDeclarationAST) ;
    return p->mProperty_mRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_externProcedureDeclarationAST::readProperty_mFormalArgumentListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_formalParameterListAST () ;
  }else{
    cPtr_externProcedureDeclarationAST * p = (cPtr_externProcedureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externProcedureDeclarationAST) ;
    return p->mProperty_mFormalArgumentListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_externProcedureDeclarationAST::readProperty_usefullProcedure (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_externProcedureDeclarationAST * p = (cPtr_externProcedureDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externProcedureDeclarationAST) ;
    return p->mProperty_usefullProcedure ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @externProcedureDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_externProcedureDeclarationAST::cPtr_externProcedureDeclarationAST (const GALGAS_bool & in_isPredefined,
                                                                        const GALGAS_bool & in_isFilePrivate,
                                                                        const GALGAS_lstring & in_mRoutineName,
                                                                        const GALGAS_formalParameterListAST & in_mFormalArgumentListAST,
                                                                        const GALGAS_bool & in_usefullProcedure
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_isFilePrivate (),
mProperty_mRoutineName (),
mProperty_mFormalArgumentListAST (),
mProperty_usefullProcedure () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_isFilePrivate = in_isFilePrivate ;
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mFormalArgumentListAST = in_mFormalArgumentListAST ;
  mProperty_usefullProcedure = in_usefullProcedure ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_externProcedureDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureDeclarationAST ;
}

void cPtr_externProcedureDeclarationAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@externProcedureDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isFilePrivate.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_usefullProcedure.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_externProcedureDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_externProcedureDeclarationAST (mProperty_isPredefined, mProperty_isFilePrivate, mProperty_mRoutineName, mProperty_mFormalArgumentListAST, mProperty_usefullProcedure COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @externProcedureDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externProcedureDeclarationAST ("externProcedureDeclarationAST",
                                                                                     & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externProcedureDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externProcedureDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externProcedureDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureDeclarationAST GALGAS_externProcedureDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureDeclarationAST result ;
  const GALGAS_externProcedureDeclarationAST * p = (const GALGAS_externProcedureDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externProcedureDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externProcedureDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @routinePrototypeDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_routinePrototypeDeclarationForGeneration::cPtr_routinePrototypeDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_routineMangledName (),
mProperty_mFormalArgumentList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_routinePrototypeDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_routineMangledName.printNonNullClassInstanceProperties ("routineMangledName") ;
    mProperty_mFormalArgumentList.printNonNullClassInstanceProperties ("mFormalArgumentList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_routinePrototypeDeclarationForGeneration::objectCompare (const GALGAS_routinePrototypeDeclarationForGeneration & inOperand) const {
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

GALGAS_routinePrototypeDeclarationForGeneration::GALGAS_routinePrototypeDeclarationForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_routinePrototypeDeclarationForGeneration GALGAS_routinePrototypeDeclarationForGeneration::
init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21_ (const GALGAS_bool & in_generateHeader,
                                                                               const GALGAS_string & in_implementationCppFileName,
                                                                               const GALGAS_string & in_routineMangledName,
                                                                               const GALGAS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cPtr_routinePrototypeDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_routinePrototypeDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->routinePrototypeDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21_ (in_generateHeader, in_implementationCppFileName, in_routineMangledName, in_mFormalArgumentList, inCompiler) ;
  const GALGAS_routinePrototypeDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_routinePrototypeDeclarationForGeneration::
routinePrototypeDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21_ (const GALGAS_bool & in_generateHeader,
                                                                                                                        const GALGAS_string & in_implementationCppFileName,
                                                                                                                        const GALGAS_string & in_routineMangledName,
                                                                                                                        const GALGAS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                                                                        Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_routineMangledName = in_routineMangledName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routinePrototypeDeclarationForGeneration::GALGAS_routinePrototypeDeclarationForGeneration (const cPtr_routinePrototypeDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_routinePrototypeDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_routinePrototypeDeclarationForGeneration GALGAS_routinePrototypeDeclarationForGeneration::class_func_new (const GALGAS_bool & in_generateHeader,
                                                                                                                 const GALGAS_string & in_implementationCppFileName,
                                                                                                                 const GALGAS_string & in_routineMangledName,
                                                                                                                 const GALGAS_formalParameterListForGeneration & in_mFormalArgumentList
                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_routinePrototypeDeclarationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_routinePrototypeDeclarationForGeneration (in_generateHeader, in_implementationCppFileName, in_routineMangledName, in_mFormalArgumentList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_routinePrototypeDeclarationForGeneration::readProperty_routineMangledName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_routinePrototypeDeclarationForGeneration * p = (cPtr_routinePrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routinePrototypeDeclarationForGeneration) ;
    return p->mProperty_routineMangledName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_routinePrototypeDeclarationForGeneration::readProperty_mFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_formalParameterListForGeneration () ;
  }else{
    cPtr_routinePrototypeDeclarationForGeneration * p = (cPtr_routinePrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routinePrototypeDeclarationForGeneration) ;
    return p->mProperty_mFormalArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @routinePrototypeDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_routinePrototypeDeclarationForGeneration::cPtr_routinePrototypeDeclarationForGeneration (const GALGAS_bool & in_generateHeader,
                                                                                              const GALGAS_string & in_implementationCppFileName,
                                                                                              const GALGAS_string & in_routineMangledName,
                                                                                              const GALGAS_formalParameterListForGeneration & in_mFormalArgumentList
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName COMMA_THERE),
mProperty_routineMangledName (),
mProperty_mFormalArgumentList () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_routineMangledName = in_routineMangledName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_routinePrototypeDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration ;
}

void cPtr_routinePrototypeDeclarationForGeneration::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@routinePrototypeDeclarationForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_routineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_routinePrototypeDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_routinePrototypeDeclarationForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_routineMangledName, mProperty_mFormalArgumentList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @routinePrototypeDeclarationForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration ("routinePrototypeDeclarationForGeneration",
                                                                                                & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routinePrototypeDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routinePrototypeDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routinePrototypeDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routinePrototypeDeclarationForGeneration GALGAS_routinePrototypeDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_routinePrototypeDeclarationForGeneration result ;
  const GALGAS_routinePrototypeDeclarationForGeneration * p = (const GALGAS_routinePrototypeDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routinePrototypeDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routinePrototypeDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_routinePrototypeDeclarationForGeneration_2D_weak & inOperand) const {
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

GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::GALGAS_routinePrototypeDeclarationForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routinePrototypeDeclarationForGeneration_2D_weak & GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::operator = (const GALGAS_routinePrototypeDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::GALGAS_routinePrototypeDeclarationForGeneration_2D_weak (const GALGAS_routinePrototypeDeclarationForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routinePrototypeDeclarationForGeneration_2D_weak GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_routinePrototypeDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routinePrototypeDeclarationForGeneration GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::bang_routinePrototypeDeclarationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_routinePrototypeDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_routinePrototypeDeclarationForGeneration) ;
      result = GALGAS_routinePrototypeDeclarationForGeneration ((cPtr_routinePrototypeDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routinePrototypeDeclarationForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration_2D_weak ("routinePrototypeDeclarationForGeneration-weak",
                                                                                                        & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routinePrototypeDeclarationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routinePrototypeDeclarationForGeneration_2D_weak GALGAS_routinePrototypeDeclarationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_routinePrototypeDeclarationForGeneration_2D_weak result ;
  const GALGAS_routinePrototypeDeclarationForGeneration_2D_weak * p = (const GALGAS_routinePrototypeDeclarationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routinePrototypeDeclarationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routinePrototypeDeclarationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @procDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_procDeclarationAST::cPtr_procDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_externProcedureDeclarationAST (inCompiler COMMA_THERE),
mProperty_mRoutineInstructionList (),
mProperty_mEndOfRoutineInstructionList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_procDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_externProcedureDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineInstructionList.printNonNullClassInstanceProperties ("mRoutineInstructionList") ;
    mProperty_mEndOfRoutineInstructionList.printNonNullClassInstanceProperties ("mEndOfRoutineInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_procDeclarationAST::objectCompare (const GALGAS_procDeclarationAST & inOperand) const {
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

GALGAS_procDeclarationAST::GALGAS_procDeclarationAST (void) :
GALGAS_externProcedureDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_procDeclarationAST GALGAS_procDeclarationAST::
init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (const GALGAS_bool & in_isPredefined,
                                                                           const GALGAS_bool & in_isFilePrivate,
                                                                           const GALGAS_lstring & in_mRoutineName,
                                                                           const GALGAS_formalParameterListAST & in_mFormalArgumentListAST,
                                                                           const GALGAS_bool & in_usefullProcedure,
                                                                           const GALGAS_semanticInstructionListAST & in_mRoutineInstructionList,
                                                                           const GALGAS_location & in_mEndOfRoutineInstructionList,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cPtr_procDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_procDeclarationAST (inCompiler COMMA_THERE)) ;
  object->procDeclarationAST_init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (in_isPredefined, in_isFilePrivate, in_mRoutineName, in_mFormalArgumentListAST, in_usefullProcedure, in_mRoutineInstructionList, in_mEndOfRoutineInstructionList, inCompiler) ;
  const GALGAS_procDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::
procDeclarationAST_init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (const GALGAS_bool & in_isPredefined,
                                                                                              const GALGAS_bool & in_isFilePrivate,
                                                                                              const GALGAS_lstring & in_mRoutineName,
                                                                                              const GALGAS_formalParameterListAST & in_mFormalArgumentListAST,
                                                                                              const GALGAS_bool & in_usefullProcedure,
                                                                                              const GALGAS_semanticInstructionListAST & in_mRoutineInstructionList,
                                                                                              const GALGAS_location & in_mEndOfRoutineInstructionList,
                                                                                              Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_isFilePrivate = in_isFilePrivate ;
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mFormalArgumentListAST = in_mFormalArgumentListAST ;
  mProperty_usefullProcedure = in_usefullProcedure ;
  mProperty_mRoutineInstructionList = in_mRoutineInstructionList ;
  mProperty_mEndOfRoutineInstructionList = in_mEndOfRoutineInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procDeclarationAST::GALGAS_procDeclarationAST (const cPtr_procDeclarationAST * inSourcePtr) :
GALGAS_externProcedureDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_procDeclarationAST GALGAS_procDeclarationAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                     const GALGAS_bool & in_isFilePrivate,
                                                                     const GALGAS_lstring & in_mRoutineName,
                                                                     const GALGAS_formalParameterListAST & in_mFormalArgumentListAST,
                                                                     const GALGAS_bool & in_usefullProcedure,
                                                                     const GALGAS_semanticInstructionListAST & in_mRoutineInstructionList,
                                                                     const GALGAS_location & in_mEndOfRoutineInstructionList
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_procDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_procDeclarationAST (in_isPredefined, in_isFilePrivate, in_mRoutineName, in_mFormalArgumentListAST, in_usefullProcedure, in_mRoutineInstructionList, in_mEndOfRoutineInstructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_procDeclarationAST::readProperty_mRoutineInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_procDeclarationAST * p = (cPtr_procDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procDeclarationAST) ;
    return p->mProperty_mRoutineInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_procDeclarationAST::readProperty_mEndOfRoutineInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_procDeclarationAST * p = (cPtr_procDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procDeclarationAST) ;
    return p->mProperty_mEndOfRoutineInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @procDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_procDeclarationAST::cPtr_procDeclarationAST (const GALGAS_bool & in_isPredefined,
                                                  const GALGAS_bool & in_isFilePrivate,
                                                  const GALGAS_lstring & in_mRoutineName,
                                                  const GALGAS_formalParameterListAST & in_mFormalArgumentListAST,
                                                  const GALGAS_bool & in_usefullProcedure,
                                                  const GALGAS_semanticInstructionListAST & in_mRoutineInstructionList,
                                                  const GALGAS_location & in_mEndOfRoutineInstructionList
                                                  COMMA_LOCATION_ARGS) :
cPtr_externProcedureDeclarationAST (in_isPredefined, in_isFilePrivate, in_mRoutineName, in_mFormalArgumentListAST, in_usefullProcedure COMMA_THERE),
mProperty_mRoutineInstructionList (),
mProperty_mEndOfRoutineInstructionList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_isFilePrivate = in_isFilePrivate ;
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mFormalArgumentListAST = in_mFormalArgumentListAST ;
  mProperty_usefullProcedure = in_usefullProcedure ;
  mProperty_mRoutineInstructionList = in_mRoutineInstructionList ;
  mProperty_mEndOfRoutineInstructionList = in_mEndOfRoutineInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_procDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procDeclarationAST ;
}

void cPtr_procDeclarationAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@procDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isFilePrivate.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_usefullProcedure.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRoutineInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfRoutineInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_procDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_procDeclarationAST (mProperty_isPredefined, mProperty_isFilePrivate, mProperty_mRoutineName, mProperty_mFormalArgumentListAST, mProperty_usefullProcedure, mProperty_mRoutineInstructionList, mProperty_mEndOfRoutineInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @procDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procDeclarationAST ("procDeclarationAST",
                                                                          & kTypeDescriptor_GALGAS_externProcedureDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_procDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_procDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procDeclarationAST GALGAS_procDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_procDeclarationAST result ;
  const GALGAS_procDeclarationAST * p = (const GALGAS_procDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_procDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @routineImplementationForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_routineImplementationForGeneration::cPtr_routineImplementationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_routinePrototypeDeclarationForGeneration (inCompiler COMMA_THERE),
mProperty_mGenerateStatic (),
mProperty_mRoutineInstructionList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_routineImplementationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_routinePrototypeDeclarationForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mGenerateStatic.printNonNullClassInstanceProperties ("mGenerateStatic") ;
    mProperty_mRoutineInstructionList.printNonNullClassInstanceProperties ("mRoutineInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_routineImplementationForGeneration::objectCompare (const GALGAS_routineImplementationForGeneration & inOperand) const {
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

GALGAS_routineImplementationForGeneration::GALGAS_routineImplementationForGeneration (void) :
GALGAS_routinePrototypeDeclarationForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_routineImplementationForGeneration GALGAS_routineImplementationForGeneration::
init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (const GALGAS_bool & in_generateHeader,
                                                                                       const GALGAS_string & in_implementationCppFileName,
                                                                                       const GALGAS_string & in_routineMangledName,
                                                                                       const GALGAS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                                       const GALGAS_bool & in_mGenerateStatic,
                                                                                       const GALGAS_semanticInstructionListForGeneration & in_mRoutineInstructionList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cPtr_routineImplementationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_routineImplementationForGeneration (inCompiler COMMA_THERE)) ;
  object->routineImplementationForGeneration_init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (in_generateHeader, in_implementationCppFileName, in_routineMangledName, in_mFormalArgumentList, in_mGenerateStatic, in_mRoutineInstructionList, inCompiler) ;
  const GALGAS_routineImplementationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_routineImplementationForGeneration::
routineImplementationForGeneration_init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (const GALGAS_bool & in_generateHeader,
                                                                                                                          const GALGAS_string & in_implementationCppFileName,
                                                                                                                          const GALGAS_string & in_routineMangledName,
                                                                                                                          const GALGAS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                                                                          const GALGAS_bool & in_mGenerateStatic,
                                                                                                                          const GALGAS_semanticInstructionListForGeneration & in_mRoutineInstructionList,
                                                                                                                          Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_routineMangledName = in_routineMangledName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mGenerateStatic = in_mGenerateStatic ;
  mProperty_mRoutineInstructionList = in_mRoutineInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineImplementationForGeneration::GALGAS_routineImplementationForGeneration (const cPtr_routineImplementationForGeneration * inSourcePtr) :
GALGAS_routinePrototypeDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_routineImplementationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_routineImplementationForGeneration GALGAS_routineImplementationForGeneration::class_func_new (const GALGAS_bool & in_generateHeader,
                                                                                                     const GALGAS_string & in_implementationCppFileName,
                                                                                                     const GALGAS_string & in_routineMangledName,
                                                                                                     const GALGAS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                                                     const GALGAS_bool & in_mGenerateStatic,
                                                                                                     const GALGAS_semanticInstructionListForGeneration & in_mRoutineInstructionList
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_routineImplementationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_routineImplementationForGeneration (in_generateHeader, in_implementationCppFileName, in_routineMangledName, in_mFormalArgumentList, in_mGenerateStatic, in_mRoutineInstructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_routineImplementationForGeneration::readProperty_mGenerateStatic (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_routineImplementationForGeneration * p = (cPtr_routineImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routineImplementationForGeneration) ;
    return p->mProperty_mGenerateStatic ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_routineImplementationForGeneration::readProperty_mRoutineInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_routineImplementationForGeneration * p = (cPtr_routineImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routineImplementationForGeneration) ;
    return p->mProperty_mRoutineInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @routineImplementationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_routineImplementationForGeneration::cPtr_routineImplementationForGeneration (const GALGAS_bool & in_generateHeader,
                                                                                  const GALGAS_string & in_implementationCppFileName,
                                                                                  const GALGAS_string & in_routineMangledName,
                                                                                  const GALGAS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                                  const GALGAS_bool & in_mGenerateStatic,
                                                                                  const GALGAS_semanticInstructionListForGeneration & in_mRoutineInstructionList
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_routinePrototypeDeclarationForGeneration (in_generateHeader, in_implementationCppFileName, in_routineMangledName, in_mFormalArgumentList COMMA_THERE),
mProperty_mGenerateStatic (),
mProperty_mRoutineInstructionList () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_routineMangledName = in_routineMangledName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mGenerateStatic = in_mGenerateStatic ;
  mProperty_mRoutineInstructionList = in_mRoutineInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_routineImplementationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineImplementationForGeneration ;
}

void cPtr_routineImplementationForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@routineImplementationForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_routineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGenerateStatic.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRoutineInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_routineImplementationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_routineImplementationForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_routineMangledName, mProperty_mFormalArgumentList, mProperty_mGenerateStatic, mProperty_mRoutineInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @routineImplementationForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineImplementationForGeneration ("routineImplementationForGeneration",
                                                                                          & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineImplementationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineImplementationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineImplementationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineImplementationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineImplementationForGeneration GALGAS_routineImplementationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_routineImplementationForGeneration result ;
  const GALGAS_routineImplementationForGeneration * p = (const GALGAS_routineImplementationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineImplementationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineImplementationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_routineImplementationForGeneration_2D_weak::objectCompare (const GALGAS_routineImplementationForGeneration_2D_weak & inOperand) const {
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

GALGAS_routineImplementationForGeneration_2D_weak::GALGAS_routineImplementationForGeneration_2D_weak (void) :
GALGAS_routinePrototypeDeclarationForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineImplementationForGeneration_2D_weak & GALGAS_routineImplementationForGeneration_2D_weak::operator = (const GALGAS_routineImplementationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineImplementationForGeneration_2D_weak::GALGAS_routineImplementationForGeneration_2D_weak (const GALGAS_routineImplementationForGeneration & inSource) :
GALGAS_routinePrototypeDeclarationForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineImplementationForGeneration_2D_weak GALGAS_routineImplementationForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_routineImplementationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineImplementationForGeneration GALGAS_routineImplementationForGeneration_2D_weak::bang_routineImplementationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_routineImplementationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_routineImplementationForGeneration) ;
      result = GALGAS_routineImplementationForGeneration ((cPtr_routineImplementationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineImplementationForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineImplementationForGeneration_2D_weak ("routineImplementationForGeneration-weak",
                                                                                                  & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineImplementationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineImplementationForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineImplementationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineImplementationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineImplementationForGeneration_2D_weak GALGAS_routineImplementationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_routineImplementationForGeneration_2D_weak result ;
  const GALGAS_routineImplementationForGeneration_2D_weak * p = (const GALGAS_routineImplementationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineImplementationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineImplementationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputParameterVariable reference class
//--------------------------------------------------------------------------------------------------

cPtr_inputParameterVariable::cPtr_inputParameterVariable (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputParameterVariable::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInputParameter::printNonNullClassInstanceProperties () ;
    mProperty_mActualParameterName.printNonNullClassInstanceProperties ("mActualParameterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_inputParameterVariable::objectCompare (const GALGAS_inputParameterVariable & inOperand) const {
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

GALGAS_inputParameterVariable::GALGAS_inputParameterVariable (void) :
GALGAS_abstractInputParameter () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_inputParameterVariable GALGAS_inputParameterVariable::
init_21_ (const GALGAS_lstring & in_mActualParameterName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_inputParameterVariable * object = nullptr ;
  macroMyNew (object, cPtr_inputParameterVariable (inCompiler COMMA_THERE)) ;
  object->inputParameterVariable_init_21_ (in_mActualParameterName, inCompiler) ;
  const GALGAS_inputParameterVariable result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterVariable::
inputParameterVariable_init_21_ (const GALGAS_lstring & in_mActualParameterName,
                                 Compiler * /* inCompiler */) {
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterVariable::GALGAS_inputParameterVariable (const cPtr_inputParameterVariable * inSourcePtr) :
GALGAS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterVariable) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterVariable GALGAS_inputParameterVariable::class_func_new (const GALGAS_lstring & in_mActualParameterName
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterVariable result ;
  macroMyNew (result.mObjectPtr, cPtr_inputParameterVariable (in_mActualParameterName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputParameterVariable::readProperty_mActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputParameterVariable * p = (cPtr_inputParameterVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterVariable) ;
    return p->mProperty_mActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputParameterVariable class
//--------------------------------------------------------------------------------------------------

cPtr_inputParameterVariable::cPtr_inputParameterVariable (const GALGAS_lstring & in_mActualParameterName
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (THERE),
mProperty_mActualParameterName () {
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputParameterVariable::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterVariable ;
}

void cPtr_inputParameterVariable::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@inputParameterVariable:") ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputParameterVariable::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputParameterVariable (mProperty_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @inputParameterVariable generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterVariable ("inputParameterVariable",
                                                                              & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputParameterVariable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterVariable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputParameterVariable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputParameterVariable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterVariable GALGAS_inputParameterVariable::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterVariable result ;
  const GALGAS_inputParameterVariable * p = (const GALGAS_inputParameterVariable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inputParameterVariable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterVariable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputParameterDeclaredVariable reference class
//--------------------------------------------------------------------------------------------------

cPtr_inputParameterDeclaredVariable::cPtr_inputParameterDeclaredVariable (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterTypeName (),
mProperty_mActualParameterName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputParameterDeclaredVariable::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInputParameter::printNonNullClassInstanceProperties () ;
    mProperty_mActualParameterTypeName.printNonNullClassInstanceProperties ("mActualParameterTypeName") ;
    mProperty_mActualParameterName.printNonNullClassInstanceProperties ("mActualParameterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_inputParameterDeclaredVariable::objectCompare (const GALGAS_inputParameterDeclaredVariable & inOperand) const {
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

GALGAS_inputParameterDeclaredVariable::GALGAS_inputParameterDeclaredVariable (void) :
GALGAS_abstractInputParameter () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_inputParameterDeclaredVariable GALGAS_inputParameterDeclaredVariable::
init_21__21_ (const GALGAS_lstring & in_mActualParameterTypeName,
              const GALGAS_lstring & in_mActualParameterName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_inputParameterDeclaredVariable * object = nullptr ;
  macroMyNew (object, cPtr_inputParameterDeclaredVariable (inCompiler COMMA_THERE)) ;
  object->inputParameterDeclaredVariable_init_21__21_ (in_mActualParameterTypeName, in_mActualParameterName, inCompiler) ;
  const GALGAS_inputParameterDeclaredVariable result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterDeclaredVariable::
inputParameterDeclaredVariable_init_21__21_ (const GALGAS_lstring & in_mActualParameterTypeName,
                                             const GALGAS_lstring & in_mActualParameterName,
                                             Compiler * /* inCompiler */) {
  mProperty_mActualParameterTypeName = in_mActualParameterTypeName ;
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredVariable::GALGAS_inputParameterDeclaredVariable (const cPtr_inputParameterDeclaredVariable * inSourcePtr) :
GALGAS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterDeclaredVariable) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredVariable GALGAS_inputParameterDeclaredVariable::class_func_new (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                                             const GALGAS_lstring & in_mActualParameterName
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterDeclaredVariable result ;
  macroMyNew (result.mObjectPtr, cPtr_inputParameterDeclaredVariable (in_mActualParameterTypeName, in_mActualParameterName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputParameterDeclaredVariable::readProperty_mActualParameterTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputParameterDeclaredVariable * p = (cPtr_inputParameterDeclaredVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredVariable) ;
    return p->mProperty_mActualParameterTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputParameterDeclaredVariable::readProperty_mActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputParameterDeclaredVariable * p = (cPtr_inputParameterDeclaredVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredVariable) ;
    return p->mProperty_mActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputParameterDeclaredVariable class
//--------------------------------------------------------------------------------------------------

cPtr_inputParameterDeclaredVariable::cPtr_inputParameterDeclaredVariable (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                          const GALGAS_lstring & in_mActualParameterName
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (THERE),
mProperty_mActualParameterTypeName (),
mProperty_mActualParameterName () {
  mProperty_mActualParameterTypeName = in_mActualParameterTypeName ;
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputParameterDeclaredVariable::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ;
}

void cPtr_inputParameterDeclaredVariable::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@inputParameterDeclaredVariable:") ;
  mProperty_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputParameterDeclaredVariable::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputParameterDeclaredVariable (mProperty_mActualParameterTypeName, mProperty_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @inputParameterDeclaredVariable generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ("inputParameterDeclaredVariable",
                                                                                      & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputParameterDeclaredVariable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputParameterDeclaredVariable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputParameterDeclaredVariable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredVariable GALGAS_inputParameterDeclaredVariable::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterDeclaredVariable result ;
  const GALGAS_inputParameterDeclaredVariable * p = (const GALGAS_inputParameterDeclaredVariable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inputParameterDeclaredVariable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterDeclaredVariable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputParameterDeclaredConstant reference class
//--------------------------------------------------------------------------------------------------

cPtr_inputParameterDeclaredConstant::cPtr_inputParameterDeclaredConstant (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterTypeName (),
mProperty_mActualParameterName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputParameterDeclaredConstant::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInputParameter::printNonNullClassInstanceProperties () ;
    mProperty_mActualParameterTypeName.printNonNullClassInstanceProperties ("mActualParameterTypeName") ;
    mProperty_mActualParameterName.printNonNullClassInstanceProperties ("mActualParameterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_inputParameterDeclaredConstant::objectCompare (const GALGAS_inputParameterDeclaredConstant & inOperand) const {
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

GALGAS_inputParameterDeclaredConstant::GALGAS_inputParameterDeclaredConstant (void) :
GALGAS_abstractInputParameter () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_inputParameterDeclaredConstant GALGAS_inputParameterDeclaredConstant::
init_21__21_ (const GALGAS_lstring & in_mActualParameterTypeName,
              const GALGAS_lstring & in_mActualParameterName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_inputParameterDeclaredConstant * object = nullptr ;
  macroMyNew (object, cPtr_inputParameterDeclaredConstant (inCompiler COMMA_THERE)) ;
  object->inputParameterDeclaredConstant_init_21__21_ (in_mActualParameterTypeName, in_mActualParameterName, inCompiler) ;
  const GALGAS_inputParameterDeclaredConstant result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterDeclaredConstant::
inputParameterDeclaredConstant_init_21__21_ (const GALGAS_lstring & in_mActualParameterTypeName,
                                             const GALGAS_lstring & in_mActualParameterName,
                                             Compiler * /* inCompiler */) {
  mProperty_mActualParameterTypeName = in_mActualParameterTypeName ;
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredConstant::GALGAS_inputParameterDeclaredConstant (const cPtr_inputParameterDeclaredConstant * inSourcePtr) :
GALGAS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterDeclaredConstant) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredConstant GALGAS_inputParameterDeclaredConstant::class_func_new (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                                             const GALGAS_lstring & in_mActualParameterName
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterDeclaredConstant result ;
  macroMyNew (result.mObjectPtr, cPtr_inputParameterDeclaredConstant (in_mActualParameterTypeName, in_mActualParameterName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputParameterDeclaredConstant::readProperty_mActualParameterTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputParameterDeclaredConstant * p = (cPtr_inputParameterDeclaredConstant *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredConstant) ;
    return p->mProperty_mActualParameterTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_inputParameterDeclaredConstant::readProperty_mActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_inputParameterDeclaredConstant * p = (cPtr_inputParameterDeclaredConstant *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredConstant) ;
    return p->mProperty_mActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputParameterDeclaredConstant class
//--------------------------------------------------------------------------------------------------

cPtr_inputParameterDeclaredConstant::cPtr_inputParameterDeclaredConstant (const GALGAS_lstring & in_mActualParameterTypeName,
                                                                          const GALGAS_lstring & in_mActualParameterName
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (THERE),
mProperty_mActualParameterTypeName (),
mProperty_mActualParameterName () {
  mProperty_mActualParameterTypeName = in_mActualParameterTypeName ;
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputParameterDeclaredConstant::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ;
}

void cPtr_inputParameterDeclaredConstant::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@inputParameterDeclaredConstant:") ;
  mProperty_mActualParameterTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputParameterDeclaredConstant::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputParameterDeclaredConstant (mProperty_mActualParameterTypeName, mProperty_mActualParameterName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @inputParameterDeclaredConstant generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ("inputParameterDeclaredConstant",
                                                                                      & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputParameterDeclaredConstant::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputParameterDeclaredConstant::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputParameterDeclaredConstant (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredConstant GALGAS_inputParameterDeclaredConstant::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterDeclaredConstant result ;
  const GALGAS_inputParameterDeclaredConstant * p = (const GALGAS_inputParameterDeclaredConstant *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inputParameterDeclaredConstant *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterDeclaredConstant", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @externFunctionDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_externFunctionDeclarationAST::cPtr_externFunctionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mFormalArgumentList (),
mProperty_mResultTypeName (),
mProperty_usefullFunc () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_externFunctionDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mFormalArgumentList.printNonNullClassInstanceProperties ("mFormalArgumentList") ;
    mProperty_mResultTypeName.printNonNullClassInstanceProperties ("mResultTypeName") ;
    mProperty_usefullFunc.printNonNullClassInstanceProperties ("usefullFunc") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_externFunctionDeclarationAST::objectCompare (const GALGAS_externFunctionDeclarationAST & inOperand) const {
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

GALGAS_externFunctionDeclarationAST::GALGAS_externFunctionDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_externFunctionDeclarationAST GALGAS_externFunctionDeclarationAST::
init_21_isPredefined_21__21__21__21_usefullFunc (const GALGAS_bool & in_isPredefined,
                                                 const GALGAS_lstring & in_mFunctionName,
                                                 const GALGAS_formalInputParameterListAST & in_mFormalArgumentList,
                                                 const GALGAS_lstring & in_mResultTypeName,
                                                 const GALGAS_bool & in_usefullFunc,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cPtr_externFunctionDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_externFunctionDeclarationAST (inCompiler COMMA_THERE)) ;
  object->externFunctionDeclarationAST_init_21_isPredefined_21__21__21__21_usefullFunc (in_isPredefined, in_mFunctionName, in_mFormalArgumentList, in_mResultTypeName, in_usefullFunc, inCompiler) ;
  const GALGAS_externFunctionDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::
externFunctionDeclarationAST_init_21_isPredefined_21__21__21__21_usefullFunc (const GALGAS_bool & in_isPredefined,
                                                                              const GALGAS_lstring & in_mFunctionName,
                                                                              const GALGAS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                              const GALGAS_lstring & in_mResultTypeName,
                                                                              const GALGAS_bool & in_usefullFunc,
                                                                              Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_usefullFunc = in_usefullFunc ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationAST::GALGAS_externFunctionDeclarationAST (const cPtr_externFunctionDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externFunctionDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationAST GALGAS_externFunctionDeclarationAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                                         const GALGAS_lstring & in_mFunctionName,
                                                                                         const GALGAS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                                         const GALGAS_lstring & in_mResultTypeName,
                                                                                         const GALGAS_bool & in_usefullFunc
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_externFunctionDeclarationAST (in_isPredefined, in_mFunctionName, in_mFormalArgumentList, in_mResultTypeName, in_usefullFunc COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externFunctionDeclarationAST::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_externFunctionDeclarationAST::readProperty_mFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_formalInputParameterListAST () ;
  }else{
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    return p->mProperty_mFormalArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externFunctionDeclarationAST::readProperty_mResultTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_externFunctionDeclarationAST::readProperty_usefullFunc (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    return p->mProperty_usefullFunc ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @externFunctionDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_externFunctionDeclarationAST::cPtr_externFunctionDeclarationAST (const GALGAS_bool & in_isPredefined,
                                                                      const GALGAS_lstring & in_mFunctionName,
                                                                      const GALGAS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                      const GALGAS_lstring & in_mResultTypeName,
                                                                      const GALGAS_bool & in_usefullFunc
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mFormalArgumentList (),
mProperty_mResultTypeName (),
mProperty_usefullFunc () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_usefullFunc = in_usefullFunc ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_externFunctionDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionDeclarationAST ;
}

void cPtr_externFunctionDeclarationAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@externFunctionDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_usefullFunc.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_externFunctionDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_externFunctionDeclarationAST (mProperty_isPredefined, mProperty_mFunctionName, mProperty_mFormalArgumentList, mProperty_mResultTypeName, mProperty_usefullFunc COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @externFunctionDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionDeclarationAST ("externFunctionDeclarationAST",
                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externFunctionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externFunctionDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externFunctionDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationAST GALGAS_externFunctionDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionDeclarationAST result ;
  const GALGAS_externFunctionDeclarationAST * p = (const GALGAS_externFunctionDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externFunctionDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @functionDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_functionDeclarationAST::cPtr_functionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_externFunctionDeclarationAST (inCompiler COMMA_THERE),
mProperty_mResultVariableName (),
mProperty_mFunctionInstructionList (),
mProperty_mEndOfFunctionInstructionList (),
mProperty_mIsInternal () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_functionDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_externFunctionDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mResultVariableName.printNonNullClassInstanceProperties ("mResultVariableName") ;
    mProperty_mFunctionInstructionList.printNonNullClassInstanceProperties ("mFunctionInstructionList") ;
    mProperty_mEndOfFunctionInstructionList.printNonNullClassInstanceProperties ("mEndOfFunctionInstructionList") ;
    mProperty_mIsInternal.printNonNullClassInstanceProperties ("mIsInternal") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_functionDeclarationAST::objectCompare (const GALGAS_functionDeclarationAST & inOperand) const {
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

GALGAS_functionDeclarationAST::GALGAS_functionDeclarationAST (void) :
GALGAS_externFunctionDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_functionDeclarationAST GALGAS_functionDeclarationAST::
init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (const GALGAS_bool & in_isPredefined,
                                                                 const GALGAS_lstring & in_mFunctionName,
                                                                 const GALGAS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                 const GALGAS_lstring & in_mResultTypeName,
                                                                 const GALGAS_bool & in_usefullFunc,
                                                                 const GALGAS_lstring & in_mResultVariableName,
                                                                 const GALGAS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                                 const GALGAS_location & in_mEndOfFunctionInstructionList,
                                                                 const GALGAS_bool & in_mIsInternal,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cPtr_functionDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_functionDeclarationAST (inCompiler COMMA_THERE)) ;
  object->functionDeclarationAST_init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (in_isPredefined, in_mFunctionName, in_mFormalArgumentList, in_mResultTypeName, in_usefullFunc, in_mResultVariableName, in_mFunctionInstructionList, in_mEndOfFunctionInstructionList, in_mIsInternal, inCompiler) ;
  const GALGAS_functionDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::
functionDeclarationAST_init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (const GALGAS_bool & in_isPredefined,
                                                                                        const GALGAS_lstring & in_mFunctionName,
                                                                                        const GALGAS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                                        const GALGAS_lstring & in_mResultTypeName,
                                                                                        const GALGAS_bool & in_usefullFunc,
                                                                                        const GALGAS_lstring & in_mResultVariableName,
                                                                                        const GALGAS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                                                        const GALGAS_location & in_mEndOfFunctionInstructionList,
                                                                                        const GALGAS_bool & in_mIsInternal,
                                                                                        Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_usefullFunc = in_usefullFunc ;
  mProperty_mResultVariableName = in_mResultVariableName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
  mProperty_mEndOfFunctionInstructionList = in_mEndOfFunctionInstructionList ;
  mProperty_mIsInternal = in_mIsInternal ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionDeclarationAST::GALGAS_functionDeclarationAST (const cPtr_functionDeclarationAST * inSourcePtr) :
GALGAS_externFunctionDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_functionDeclarationAST GALGAS_functionDeclarationAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                             const GALGAS_lstring & in_mFunctionName,
                                                                             const GALGAS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                             const GALGAS_lstring & in_mResultTypeName,
                                                                             const GALGAS_bool & in_usefullFunc,
                                                                             const GALGAS_lstring & in_mResultVariableName,
                                                                             const GALGAS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                                             const GALGAS_location & in_mEndOfFunctionInstructionList,
                                                                             const GALGAS_bool & in_mIsInternal
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_functionDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_functionDeclarationAST (in_isPredefined, in_mFunctionName, in_mFormalArgumentList, in_mResultTypeName, in_usefullFunc, in_mResultVariableName, in_mFunctionInstructionList, in_mEndOfFunctionInstructionList, in_mIsInternal COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_functionDeclarationAST::readProperty_mResultVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mResultVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_functionDeclarationAST::readProperty_mFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_functionDeclarationAST::readProperty_mEndOfFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mEndOfFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_functionDeclarationAST::readProperty_mIsInternal (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mIsInternal ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @functionDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_functionDeclarationAST::cPtr_functionDeclarationAST (const GALGAS_bool & in_isPredefined,
                                                          const GALGAS_lstring & in_mFunctionName,
                                                          const GALGAS_formalInputParameterListAST & in_mFormalArgumentList,
                                                          const GALGAS_lstring & in_mResultTypeName,
                                                          const GALGAS_bool & in_usefullFunc,
                                                          const GALGAS_lstring & in_mResultVariableName,
                                                          const GALGAS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                          const GALGAS_location & in_mEndOfFunctionInstructionList,
                                                          const GALGAS_bool & in_mIsInternal
                                                          COMMA_LOCATION_ARGS) :
cPtr_externFunctionDeclarationAST (in_isPredefined, in_mFunctionName, in_mFormalArgumentList, in_mResultTypeName, in_usefullFunc COMMA_THERE),
mProperty_mResultVariableName (),
mProperty_mFunctionInstructionList (),
mProperty_mEndOfFunctionInstructionList (),
mProperty_mIsInternal () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_usefullFunc = in_usefullFunc ;
  mProperty_mResultVariableName = in_mResultVariableName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
  mProperty_mEndOfFunctionInstructionList = in_mEndOfFunctionInstructionList ;
  mProperty_mIsInternal = in_mIsInternal ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_functionDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationAST ;
}

void cPtr_functionDeclarationAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@functionDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_usefullFunc.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsInternal.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_functionDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_functionDeclarationAST (mProperty_isPredefined, mProperty_mFunctionName, mProperty_mFormalArgumentList, mProperty_mResultTypeName, mProperty_usefullFunc, mProperty_mResultVariableName, mProperty_mFunctionInstructionList, mProperty_mEndOfFunctionInstructionList, mProperty_mIsInternal COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @functionDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDeclarationAST ("functionDeclarationAST",
                                                                              & kTypeDescriptor_GALGAS_externFunctionDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionDeclarationAST GALGAS_functionDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_functionDeclarationAST result ;
  const GALGAS_functionDeclarationAST * p = (const GALGAS_functionDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_functionDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @onceFunctionDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_onceFunctionDeclarationAST::cPtr_onceFunctionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mResultTypeName (),
mProperty_mResultVariableName (),
mProperty_mFunctionInstructionList (),
mProperty_mEndOfFunctionInstructionList (),
mProperty_mIsInternal (),
mProperty_mIsUsefull () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_onceFunctionDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mResultTypeName.printNonNullClassInstanceProperties ("mResultTypeName") ;
    mProperty_mResultVariableName.printNonNullClassInstanceProperties ("mResultVariableName") ;
    mProperty_mFunctionInstructionList.printNonNullClassInstanceProperties ("mFunctionInstructionList") ;
    mProperty_mEndOfFunctionInstructionList.printNonNullClassInstanceProperties ("mEndOfFunctionInstructionList") ;
    mProperty_mIsInternal.printNonNullClassInstanceProperties ("mIsInternal") ;
    mProperty_mIsUsefull.printNonNullClassInstanceProperties ("mIsUsefull") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_onceFunctionDeclarationAST::objectCompare (const GALGAS_onceFunctionDeclarationAST & inOperand) const {
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

GALGAS_onceFunctionDeclarationAST::GALGAS_onceFunctionDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_onceFunctionDeclarationAST GALGAS_onceFunctionDeclarationAST::
init_21_isPredefined_21__21__21__21__21__21__21_ (const GALGAS_bool & in_isPredefined,
                                                  const GALGAS_lstring & in_mFunctionName,
                                                  const GALGAS_lstring & in_mResultTypeName,
                                                  const GALGAS_lstring & in_mResultVariableName,
                                                  const GALGAS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                  const GALGAS_location & in_mEndOfFunctionInstructionList,
                                                  const GALGAS_bool & in_mIsInternal,
                                                  const GALGAS_bool & in_mIsUsefull,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_onceFunctionDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_onceFunctionDeclarationAST (inCompiler COMMA_THERE)) ;
  object->onceFunctionDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (in_isPredefined, in_mFunctionName, in_mResultTypeName, in_mResultVariableName, in_mFunctionInstructionList, in_mEndOfFunctionInstructionList, in_mIsInternal, in_mIsUsefull, inCompiler) ;
  const GALGAS_onceFunctionDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::
onceFunctionDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const GALGAS_bool & in_isPredefined,
                                                                             const GALGAS_lstring & in_mFunctionName,
                                                                             const GALGAS_lstring & in_mResultTypeName,
                                                                             const GALGAS_lstring & in_mResultVariableName,
                                                                             const GALGAS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                                             const GALGAS_location & in_mEndOfFunctionInstructionList,
                                                                             const GALGAS_bool & in_mIsInternal,
                                                                             const GALGAS_bool & in_mIsUsefull,
                                                                             Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_mResultVariableName = in_mResultVariableName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
  mProperty_mEndOfFunctionInstructionList = in_mEndOfFunctionInstructionList ;
  mProperty_mIsInternal = in_mIsInternal ;
  mProperty_mIsUsefull = in_mIsUsefull ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationAST::GALGAS_onceFunctionDeclarationAST (const cPtr_onceFunctionDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_onceFunctionDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationAST GALGAS_onceFunctionDeclarationAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                                     const GALGAS_lstring & in_mFunctionName,
                                                                                     const GALGAS_lstring & in_mResultTypeName,
                                                                                     const GALGAS_lstring & in_mResultVariableName,
                                                                                     const GALGAS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                                                     const GALGAS_location & in_mEndOfFunctionInstructionList,
                                                                                     const GALGAS_bool & in_mIsInternal,
                                                                                     const GALGAS_bool & in_mIsUsefull
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_onceFunctionDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_onceFunctionDeclarationAST (in_isPredefined, in_mFunctionName, in_mResultTypeName, in_mResultVariableName, in_mFunctionInstructionList, in_mEndOfFunctionInstructionList, in_mIsInternal, in_mIsUsefull COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_onceFunctionDeclarationAST::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_onceFunctionDeclarationAST::readProperty_mResultTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_onceFunctionDeclarationAST::readProperty_mResultVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mResultVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_onceFunctionDeclarationAST::readProperty_mFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_onceFunctionDeclarationAST::readProperty_mEndOfFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mEndOfFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_onceFunctionDeclarationAST::readProperty_mIsInternal (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mIsInternal ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_onceFunctionDeclarationAST::readProperty_mIsUsefull (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mIsUsefull ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @onceFunctionDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_onceFunctionDeclarationAST::cPtr_onceFunctionDeclarationAST (const GALGAS_bool & in_isPredefined,
                                                                  const GALGAS_lstring & in_mFunctionName,
                                                                  const GALGAS_lstring & in_mResultTypeName,
                                                                  const GALGAS_lstring & in_mResultVariableName,
                                                                  const GALGAS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                                  const GALGAS_location & in_mEndOfFunctionInstructionList,
                                                                  const GALGAS_bool & in_mIsInternal,
                                                                  const GALGAS_bool & in_mIsUsefull
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mResultTypeName (),
mProperty_mResultVariableName (),
mProperty_mFunctionInstructionList (),
mProperty_mEndOfFunctionInstructionList (),
mProperty_mIsInternal (),
mProperty_mIsUsefull () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_mResultVariableName = in_mResultVariableName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
  mProperty_mEndOfFunctionInstructionList = in_mEndOfFunctionInstructionList ;
  mProperty_mIsInternal = in_mIsInternal ;
  mProperty_mIsUsefull = in_mIsUsefull ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_onceFunctionDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ;
}

void cPtr_onceFunctionDeclarationAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@onceFunctionDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsInternal.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsUsefull.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_onceFunctionDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_onceFunctionDeclarationAST (mProperty_isPredefined, mProperty_mFunctionName, mProperty_mResultTypeName, mProperty_mResultVariableName, mProperty_mFunctionInstructionList, mProperty_mEndOfFunctionInstructionList, mProperty_mIsInternal, mProperty_mIsUsefull COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @onceFunctionDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ("onceFunctionDeclarationAST",
                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_onceFunctionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_onceFunctionDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_onceFunctionDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationAST GALGAS_onceFunctionDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_onceFunctionDeclarationAST result ;
  const GALGAS_onceFunctionDeclarationAST * p = (const GALGAS_onceFunctionDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_onceFunctionDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("onceFunctionDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @filewrapperDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperDeclarationAST::cPtr_filewrapperDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mIsInternal (),
mProperty_mSourceFileAbsolutePath (),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperPath (),
mProperty_mFilewrapperTextFileExtensionList (),
mProperty_mFilewrapperBinaryFileExtensionList (),
mProperty_mFilewrapperTemplateList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_filewrapperDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mIsInternal.printNonNullClassInstanceProperties ("mIsInternal") ;
    mProperty_mSourceFileAbsolutePath.printNonNullClassInstanceProperties ("mSourceFileAbsolutePath") ;
    mProperty_mFilewrapperName.printNonNullClassInstanceProperties ("mFilewrapperName") ;
    mProperty_mFilewrapperPath.printNonNullClassInstanceProperties ("mFilewrapperPath") ;
    mProperty_mFilewrapperTextFileExtensionList.printNonNullClassInstanceProperties ("mFilewrapperTextFileExtensionList") ;
    mProperty_mFilewrapperBinaryFileExtensionList.printNonNullClassInstanceProperties ("mFilewrapperBinaryFileExtensionList") ;
    mProperty_mFilewrapperTemplateList.printNonNullClassInstanceProperties ("mFilewrapperTemplateList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_filewrapperDeclarationAST::objectCompare (const GALGAS_filewrapperDeclarationAST & inOperand) const {
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

GALGAS_filewrapperDeclarationAST::GALGAS_filewrapperDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_filewrapperDeclarationAST GALGAS_filewrapperDeclarationAST::
init_21_isPredefined_21__21__21__21__21__21__21_ (const GALGAS_bool & in_isPredefined,
                                                  const GALGAS_bool & in_mIsInternal,
                                                  const GALGAS_string & in_mSourceFileAbsolutePath,
                                                  const GALGAS_lstring & in_mFilewrapperName,
                                                  const GALGAS_lstring & in_mFilewrapperPath,
                                                  const GALGAS_lstringlist & in_mFilewrapperTextFileExtensionList,
                                                  const GALGAS_lstringlist & in_mFilewrapperBinaryFileExtensionList,
                                                  const GALGAS_filewrapperTemplateListAST & in_mFilewrapperTemplateList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_filewrapperDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_filewrapperDeclarationAST (inCompiler COMMA_THERE)) ;
  object->filewrapperDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (in_isPredefined, in_mIsInternal, in_mSourceFileAbsolutePath, in_mFilewrapperName, in_mFilewrapperPath, in_mFilewrapperTextFileExtensionList, in_mFilewrapperBinaryFileExtensionList, in_mFilewrapperTemplateList, inCompiler) ;
  const GALGAS_filewrapperDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::
filewrapperDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const GALGAS_bool & in_isPredefined,
                                                                            const GALGAS_bool & in_mIsInternal,
                                                                            const GALGAS_string & in_mSourceFileAbsolutePath,
                                                                            const GALGAS_lstring & in_mFilewrapperName,
                                                                            const GALGAS_lstring & in_mFilewrapperPath,
                                                                            const GALGAS_lstringlist & in_mFilewrapperTextFileExtensionList,
                                                                            const GALGAS_lstringlist & in_mFilewrapperBinaryFileExtensionList,
                                                                            const GALGAS_filewrapperTemplateListAST & in_mFilewrapperTemplateList,
                                                                            Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mIsInternal = in_mIsInternal ;
  mProperty_mSourceFileAbsolutePath = in_mSourceFileAbsolutePath ;
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperPath = in_mFilewrapperPath ;
  mProperty_mFilewrapperTextFileExtensionList = in_mFilewrapperTextFileExtensionList ;
  mProperty_mFilewrapperBinaryFileExtensionList = in_mFilewrapperBinaryFileExtensionList ;
  mProperty_mFilewrapperTemplateList = in_mFilewrapperTemplateList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationAST::GALGAS_filewrapperDeclarationAST (const cPtr_filewrapperDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationAST GALGAS_filewrapperDeclarationAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                                   const GALGAS_bool & in_mIsInternal,
                                                                                   const GALGAS_string & in_mSourceFileAbsolutePath,
                                                                                   const GALGAS_lstring & in_mFilewrapperName,
                                                                                   const GALGAS_lstring & in_mFilewrapperPath,
                                                                                   const GALGAS_lstringlist & in_mFilewrapperTextFileExtensionList,
                                                                                   const GALGAS_lstringlist & in_mFilewrapperBinaryFileExtensionList,
                                                                                   const GALGAS_filewrapperTemplateListAST & in_mFilewrapperTemplateList
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_filewrapperDeclarationAST (in_isPredefined, in_mIsInternal, in_mSourceFileAbsolutePath, in_mFilewrapperName, in_mFilewrapperPath, in_mFilewrapperTextFileExtensionList, in_mFilewrapperBinaryFileExtensionList, in_mFilewrapperTemplateList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_filewrapperDeclarationAST::readProperty_mIsInternal (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mIsInternal ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_filewrapperDeclarationAST::readProperty_mSourceFileAbsolutePath (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mSourceFileAbsolutePath ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperDeclarationAST::readProperty_mFilewrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperDeclarationAST::readProperty_mFilewrapperPath (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperPath ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_filewrapperDeclarationAST::readProperty_mFilewrapperTextFileExtensionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperTextFileExtensionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_filewrapperDeclarationAST::readProperty_mFilewrapperBinaryFileExtensionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperBinaryFileExtensionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperDeclarationAST::readProperty_mFilewrapperTemplateList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_filewrapperTemplateListAST () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperTemplateList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperDeclarationAST::cPtr_filewrapperDeclarationAST (const GALGAS_bool & in_isPredefined,
                                                                const GALGAS_bool & in_mIsInternal,
                                                                const GALGAS_string & in_mSourceFileAbsolutePath,
                                                                const GALGAS_lstring & in_mFilewrapperName,
                                                                const GALGAS_lstring & in_mFilewrapperPath,
                                                                const GALGAS_lstringlist & in_mFilewrapperTextFileExtensionList,
                                                                const GALGAS_lstringlist & in_mFilewrapperBinaryFileExtensionList,
                                                                const GALGAS_filewrapperTemplateListAST & in_mFilewrapperTemplateList
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_mIsInternal (),
mProperty_mSourceFileAbsolutePath (),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperPath (),
mProperty_mFilewrapperTextFileExtensionList (),
mProperty_mFilewrapperBinaryFileExtensionList (),
mProperty_mFilewrapperTemplateList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mIsInternal = in_mIsInternal ;
  mProperty_mSourceFileAbsolutePath = in_mSourceFileAbsolutePath ;
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperPath = in_mFilewrapperPath ;
  mProperty_mFilewrapperTextFileExtensionList = in_mFilewrapperTextFileExtensionList ;
  mProperty_mFilewrapperBinaryFileExtensionList = in_mFilewrapperBinaryFileExtensionList ;
  mProperty_mFilewrapperTemplateList = in_mFilewrapperTemplateList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_filewrapperDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationAST ;
}

void cPtr_filewrapperDeclarationAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@filewrapperDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsInternal.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceFileAbsolutePath.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperPath.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperTextFileExtensionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperBinaryFileExtensionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperTemplateList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_filewrapperDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_filewrapperDeclarationAST (mProperty_isPredefined, mProperty_mIsInternal, mProperty_mSourceFileAbsolutePath, mProperty_mFilewrapperName, mProperty_mFilewrapperPath, mProperty_mFilewrapperTextFileExtensionList, mProperty_mFilewrapperBinaryFileExtensionList, mProperty_mFilewrapperTemplateList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @filewrapperDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperDeclarationAST ("filewrapperDeclarationAST",
                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationAST GALGAS_filewrapperDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperDeclarationAST result ;
  const GALGAS_filewrapperDeclarationAST * p = (const GALGAS_filewrapperDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_filewrapperDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @galgas_33_SyntaxComponentAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_galgas_33_SyntaxComponentAST::cPtr_galgas_33_SyntaxComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mSyntaxComponentName (),
mProperty_mLexiqueName (),
mProperty_mNonterminalDeclarationList (),
mProperty_mRuleList (),
mProperty_mHasTranslateFeature () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_galgas_33_SyntaxComponentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mSyntaxComponentName.printNonNullClassInstanceProperties ("mSyntaxComponentName") ;
    mProperty_mLexiqueName.printNonNullClassInstanceProperties ("mLexiqueName") ;
    mProperty_mNonterminalDeclarationList.printNonNullClassInstanceProperties ("mNonterminalDeclarationList") ;
    mProperty_mRuleList.printNonNullClassInstanceProperties ("mRuleList") ;
    mProperty_mHasTranslateFeature.printNonNullClassInstanceProperties ("mHasTranslateFeature") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_galgas_33_SyntaxComponentAST::objectCompare (const GALGAS_galgas_33_SyntaxComponentAST & inOperand) const {
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

GALGAS_galgas_33_SyntaxComponentAST::GALGAS_galgas_33_SyntaxComponentAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentAST GALGAS_galgas_33_SyntaxComponentAST::
init_21_isPredefined_21__21__21__21__21_ (const GALGAS_bool & in_isPredefined,
                                          const GALGAS_lstring & in_mSyntaxComponentName,
                                          const GALGAS_lstring & in_mLexiqueName,
                                          const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                          const GALGAS_syntaxRuleListAST & in_mRuleList,
                                          const GALGAS_bool & in_mHasTranslateFeature,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_galgas_33_SyntaxComponentAST * object = nullptr ;
  macroMyNew (object, cPtr_galgas_33_SyntaxComponentAST (inCompiler COMMA_THERE)) ;
  object->galgas_33_SyntaxComponentAST_init_21_isPredefined_21__21__21__21__21_ (in_isPredefined, in_mSyntaxComponentName, in_mLexiqueName, in_mNonterminalDeclarationList, in_mRuleList, in_mHasTranslateFeature, inCompiler) ;
  const GALGAS_galgas_33_SyntaxComponentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::
galgas_33_SyntaxComponentAST_init_21_isPredefined_21__21__21__21__21_ (const GALGAS_bool & in_isPredefined,
                                                                       const GALGAS_lstring & in_mSyntaxComponentName,
                                                                       const GALGAS_lstring & in_mLexiqueName,
                                                                       const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                       const GALGAS_syntaxRuleListAST & in_mRuleList,
                                                                       const GALGAS_bool & in_mHasTranslateFeature,
                                                                       Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mNonterminalDeclarationList = in_mNonterminalDeclarationList ;
  mProperty_mRuleList = in_mRuleList ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentAST::GALGAS_galgas_33_SyntaxComponentAST (const cPtr_galgas_33_SyntaxComponentAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_galgas_33_SyntaxComponentAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentAST GALGAS_galgas_33_SyntaxComponentAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                                         const GALGAS_lstring & in_mSyntaxComponentName,
                                                                                         const GALGAS_lstring & in_mLexiqueName,
                                                                                         const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                                         const GALGAS_syntaxRuleListAST & in_mRuleList,
                                                                                         const GALGAS_bool & in_mHasTranslateFeature
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxComponentAST result ;
  macroMyNew (result.mObjectPtr, cPtr_galgas_33_SyntaxComponentAST (in_isPredefined, in_mSyntaxComponentName, in_mLexiqueName, in_mNonterminalDeclarationList, in_mRuleList, in_mHasTranslateFeature COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_SyntaxComponentAST::readProperty_mSyntaxComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mSyntaxComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_SyntaxComponentAST::readProperty_mLexiqueName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mLexiqueName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST GALGAS_galgas_33_SyntaxComponentAST::readProperty_mNonterminalDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_nonterminalDeclarationListAST () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mNonterminalDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST GALGAS_galgas_33_SyntaxComponentAST::readProperty_mRuleList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_syntaxRuleListAST () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mRuleList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_galgas_33_SyntaxComponentAST::readProperty_mHasTranslateFeature (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @galgas3SyntaxComponentAST class
//--------------------------------------------------------------------------------------------------

cPtr_galgas_33_SyntaxComponentAST::cPtr_galgas_33_SyntaxComponentAST (const GALGAS_bool & in_isPredefined,
                                                                      const GALGAS_lstring & in_mSyntaxComponentName,
                                                                      const GALGAS_lstring & in_mLexiqueName,
                                                                      const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                      const GALGAS_syntaxRuleListAST & in_mRuleList,
                                                                      const GALGAS_bool & in_mHasTranslateFeature
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_mSyntaxComponentName (),
mProperty_mLexiqueName (),
mProperty_mNonterminalDeclarationList (),
mProperty_mRuleList (),
mProperty_mHasTranslateFeature () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mNonterminalDeclarationList = in_mNonterminalDeclarationList ;
  mProperty_mRuleList = in_mRuleList ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_galgas_33_SyntaxComponentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ;
}

void cPtr_galgas_33_SyntaxComponentAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@galgas3SyntaxComponentAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonterminalDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRuleList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_galgas_33_SyntaxComponentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_galgas_33_SyntaxComponentAST (mProperty_isPredefined, mProperty_mSyntaxComponentName, mProperty_mLexiqueName, mProperty_mNonterminalDeclarationList, mProperty_mRuleList, mProperty_mHasTranslateFeature COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @galgas3SyntaxComponentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ("galgas3SyntaxComponentAST",
                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_galgas_33_SyntaxComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_galgas_33_SyntaxComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_SyntaxComponentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentAST GALGAS_galgas_33_SyntaxComponentAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxComponentAST result ;
  const GALGAS_galgas_33_SyntaxComponentAST * p = (const GALGAS_galgas_33_SyntaxComponentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_galgas_33_SyntaxComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3SyntaxComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @galgas_33_GrammarComponentAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_galgas_33_GrammarComponentAST::cPtr_galgas_33_GrammarComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mHasIndexing (),
mProperty_mGrammarComponentName (),
mProperty_mGrammarClass (),
mProperty_mSyntaxComponents (),
mProperty_mStartSymbolName (),
mProperty_mStartSymbolLabelList (),
mProperty_mUnusedNonterminalList (),
mProperty_mHasTranslateFeature () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_galgas_33_GrammarComponentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mHasIndexing.printNonNullClassInstanceProperties ("mHasIndexing") ;
    mProperty_mGrammarComponentName.printNonNullClassInstanceProperties ("mGrammarComponentName") ;
    mProperty_mGrammarClass.printNonNullClassInstanceProperties ("mGrammarClass") ;
    mProperty_mSyntaxComponents.printNonNullClassInstanceProperties ("mSyntaxComponents") ;
    mProperty_mStartSymbolName.printNonNullClassInstanceProperties ("mStartSymbolName") ;
    mProperty_mStartSymbolLabelList.printNonNullClassInstanceProperties ("mStartSymbolLabelList") ;
    mProperty_mUnusedNonterminalList.printNonNullClassInstanceProperties ("mUnusedNonterminalList") ;
    mProperty_mHasTranslateFeature.printNonNullClassInstanceProperties ("mHasTranslateFeature") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_galgas_33_GrammarComponentAST::objectCompare (const GALGAS_galgas_33_GrammarComponentAST & inOperand) const {
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

GALGAS_galgas_33_GrammarComponentAST::GALGAS_galgas_33_GrammarComponentAST (void) :
GALGAS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_galgas_33_GrammarComponentAST GALGAS_galgas_33_GrammarComponentAST::
init_21_isPredefined_21__21__21__21__21__21__21__21_ (const GALGAS_bool & in_isPredefined,
                                                      const GALGAS_lbool & in_mHasIndexing,
                                                      const GALGAS_lstring & in_mGrammarComponentName,
                                                      const GALGAS_lstring & in_mGrammarClass,
                                                      const GALGAS_lstringlist & in_mSyntaxComponents,
                                                      const GALGAS_lstring & in_mStartSymbolName,
                                                      const GALGAS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                                      const GALGAS_lstringlist & in_mUnusedNonterminalList,
                                                      const GALGAS_bool & in_mHasTranslateFeature,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cPtr_galgas_33_GrammarComponentAST * object = nullptr ;
  macroMyNew (object, cPtr_galgas_33_GrammarComponentAST (inCompiler COMMA_THERE)) ;
  object->galgas_33_GrammarComponentAST_init_21_isPredefined_21__21__21__21__21__21__21__21_ (in_isPredefined, in_mHasIndexing, in_mGrammarComponentName, in_mGrammarClass, in_mSyntaxComponents, in_mStartSymbolName, in_mStartSymbolLabelList, in_mUnusedNonterminalList, in_mHasTranslateFeature, inCompiler) ;
  const GALGAS_galgas_33_GrammarComponentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::
galgas_33_GrammarComponentAST_init_21_isPredefined_21__21__21__21__21__21__21__21_ (const GALGAS_bool & in_isPredefined,
                                                                                    const GALGAS_lbool & in_mHasIndexing,
                                                                                    const GALGAS_lstring & in_mGrammarComponentName,
                                                                                    const GALGAS_lstring & in_mGrammarClass,
                                                                                    const GALGAS_lstringlist & in_mSyntaxComponents,
                                                                                    const GALGAS_lstring & in_mStartSymbolName,
                                                                                    const GALGAS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                                                                    const GALGAS_lstringlist & in_mUnusedNonterminalList,
                                                                                    const GALGAS_bool & in_mHasTranslateFeature,
                                                                                    Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mHasIndexing = in_mHasIndexing ;
  mProperty_mGrammarComponentName = in_mGrammarComponentName ;
  mProperty_mGrammarClass = in_mGrammarClass ;
  mProperty_mSyntaxComponents = in_mSyntaxComponents ;
  mProperty_mStartSymbolName = in_mStartSymbolName ;
  mProperty_mStartSymbolLabelList = in_mStartSymbolLabelList ;
  mProperty_mUnusedNonterminalList = in_mUnusedNonterminalList ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GrammarComponentAST::GALGAS_galgas_33_GrammarComponentAST (const cPtr_galgas_33_GrammarComponentAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_galgas_33_GrammarComponentAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GrammarComponentAST GALGAS_galgas_33_GrammarComponentAST::class_func_new (const GALGAS_bool & in_isPredefined,
                                                                                           const GALGAS_lbool & in_mHasIndexing,
                                                                                           const GALGAS_lstring & in_mGrammarComponentName,
                                                                                           const GALGAS_lstring & in_mGrammarClass,
                                                                                           const GALGAS_lstringlist & in_mSyntaxComponents,
                                                                                           const GALGAS_lstring & in_mStartSymbolName,
                                                                                           const GALGAS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                                                                           const GALGAS_lstringlist & in_mUnusedNonterminalList,
                                                                                           const GALGAS_bool & in_mHasTranslateFeature
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_GrammarComponentAST result ;
  macroMyNew (result.mObjectPtr, cPtr_galgas_33_GrammarComponentAST (in_isPredefined, in_mHasIndexing, in_mGrammarComponentName, in_mGrammarClass, in_mSyntaxComponents, in_mStartSymbolName, in_mStartSymbolLabelList, in_mUnusedNonterminalList, in_mHasTranslateFeature COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lbool GALGAS_galgas_33_GrammarComponentAST::readProperty_mHasIndexing (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lbool () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mHasIndexing ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_GrammarComponentAST::readProperty_mGrammarComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mGrammarComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_GrammarComponentAST::readProperty_mGrammarClass (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mGrammarClass ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_galgas_33_GrammarComponentAST::readProperty_mSyntaxComponents (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mSyntaxComponents ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_GrammarComponentAST::readProperty_mStartSymbolName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mStartSymbolName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalLabelListAST GALGAS_galgas_33_GrammarComponentAST::readProperty_mStartSymbolLabelList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_nonTerminalLabelListAST () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mStartSymbolLabelList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_galgas_33_GrammarComponentAST::readProperty_mUnusedNonterminalList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mUnusedNonterminalList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_galgas_33_GrammarComponentAST::readProperty_mHasTranslateFeature (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @galgas3GrammarComponentAST class
//--------------------------------------------------------------------------------------------------

cPtr_galgas_33_GrammarComponentAST::cPtr_galgas_33_GrammarComponentAST (const GALGAS_bool & in_isPredefined,
                                                                        const GALGAS_lbool & in_mHasIndexing,
                                                                        const GALGAS_lstring & in_mGrammarComponentName,
                                                                        const GALGAS_lstring & in_mGrammarClass,
                                                                        const GALGAS_lstringlist & in_mSyntaxComponents,
                                                                        const GALGAS_lstring & in_mStartSymbolName,
                                                                        const GALGAS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                                                        const GALGAS_lstringlist & in_mUnusedNonterminalList,
                                                                        const GALGAS_bool & in_mHasTranslateFeature
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined COMMA_THERE),
mProperty_mHasIndexing (),
mProperty_mGrammarComponentName (),
mProperty_mGrammarClass (),
mProperty_mSyntaxComponents (),
mProperty_mStartSymbolName (),
mProperty_mStartSymbolLabelList (),
mProperty_mUnusedNonterminalList (),
mProperty_mHasTranslateFeature () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mHasIndexing = in_mHasIndexing ;
  mProperty_mGrammarComponentName = in_mGrammarComponentName ;
  mProperty_mGrammarClass = in_mGrammarClass ;
  mProperty_mSyntaxComponents = in_mSyntaxComponents ;
  mProperty_mStartSymbolName = in_mStartSymbolName ;
  mProperty_mStartSymbolLabelList = in_mStartSymbolLabelList ;
  mProperty_mUnusedNonterminalList = in_mUnusedNonterminalList ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_galgas_33_GrammarComponentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ;
}

void cPtr_galgas_33_GrammarComponentAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@galgas3GrammarComponentAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasIndexing.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarClass.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSyntaxComponents.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStartSymbolName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStartSymbolLabelList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUnusedNonterminalList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_galgas_33_GrammarComponentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_galgas_33_GrammarComponentAST (mProperty_isPredefined, mProperty_mHasIndexing, mProperty_mGrammarComponentName, mProperty_mGrammarClass, mProperty_mSyntaxComponents, mProperty_mStartSymbolName, mProperty_mStartSymbolLabelList, mProperty_mUnusedNonterminalList, mProperty_mHasTranslateFeature COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @galgas3GrammarComponentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ("galgas3GrammarComponentAST",
                                                                                     & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_galgas_33_GrammarComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_galgas_33_GrammarComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_GrammarComponentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GrammarComponentAST GALGAS_galgas_33_GrammarComponentAST::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_GrammarComponentAST result ;
  const GALGAS_galgas_33_GrammarComponentAST * p = (const GALGAS_galgas_33_GrammarComponentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_galgas_33_GrammarComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3GrammarComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMap::GALGAS_routineMap (void) :
mProperty_mInternalRoutineMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMap::~ GALGAS_routineMap (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_routineMap GALGAS_routineMap::init (Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMap result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMap::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mInternalRoutineMap = GALGAS_internalRoutineMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMap::GALGAS_routineMap (const GALGAS_internalRoutineMap & inOperand0) :
mProperty_mInternalRoutineMap (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMap GALGAS_routineMap::class_func_new (Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_routineMap result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_routineMap::isValid (void) const {
  return mProperty_mInternalRoutineMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMap::drop (void) {
  mProperty_mInternalRoutineMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_routineMap::description (String & ioString,
                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineMap:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInternalRoutineMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @routineMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_routineMap ("routineMap",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_routineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_routineMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_routineMap GALGAS_routineMap::extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_routineMap result ;
  const GALGAS_routineMap * p = (const GALGAS_routineMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_routineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@routineMap searchKey'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchKey (const GALGAS_routineMap inObject,
                                const GALGAS_lstring constinArgument_inRoutineName,
                                GALGAS_actualParameterListAST inArgument_inActualParameterList,
                                GALGAS_formalParameterSignature & outArgument_outRoutineSignature,
                                GALGAS_bool & outArgument_outIsFilePrivate,
                                GALGAS_lstring & outArgument_outRoutineMangledName,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  outArgument_outIsFilePrivate.drop () ; // Release 'out' argument
  outArgument_outRoutineMangledName.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_routineMap temp_1 = inObject ;
    GALGAS_routineArgumentMap var_routineArgumentMap_4104 ;
    const bool optionalResult4074 = temp_1.readProperty_mInternalRoutineMap ().optional_searchKey (constinArgument_inRoutineName.readProperty_string (), var_routineArgumentMap_4104) ;
    if (!optionalResult4074) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      outArgument_outIsFilePrivate = GALGAS_bool (false) ;
      outArgument_outRoutineSignature = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
      cEnumerator_routineArgumentMap enumerator_4210 (var_routineArgumentMap_4104, EnumerationOrder::up) ;
      while (enumerator_4210.hasCurrentObject ()) {
        outArgument_outIsFilePrivate = enumerator_4210.current (HERE).readProperty_mIsFilePrivate () ;
        outArgument_outRoutineSignature = enumerator_4210.current (HERE).readProperty_mRoutineSignature () ;
        enumerator_4210.gotoNextObject () ;
      }
      GALGAS_acceptableParameterList var_acceptableParameterList_4379 = GALGAS_acceptableParameterList::init (inCompiler COMMA_HERE) ;
      cEnumerator_routineArgumentMap enumerator_4427 (var_routineArgumentMap_4104, EnumerationOrder::up) ;
      while (enumerator_4427.hasCurrentObject ()) {
        GALGAS_bool var_accept_4461 = GALGAS_bool (ComparisonKind::equal, inArgument_inActualParameterList.getter_count (SOURCE_FILE ("routineMap.galgas", 106)).objectCompare (enumerator_4427.current (HERE).readProperty_mRoutineSignature ().getter_count (SOURCE_FILE ("routineMap.galgas", 106)))) ;
        cEnumerator_formalParameterSignature enumerator_4572 (enumerator_4427.current (HERE).readProperty_mRoutineSignature (), EnumerationOrder::up) ;
        cEnumerator_actualParameterListAST enumerator_4592 (inArgument_inActualParameterList, EnumerationOrder::up) ;
        bool bool_2 = var_accept_4461.isValidAndTrue () ;
        if (enumerator_4572.hasCurrentObject () && enumerator_4592.hasCurrentObject () && bool_2) {
          while (enumerator_4572.hasCurrentObject () && enumerator_4592.hasCurrentObject () && bool_2) {
            var_accept_4461 = callExtensionGetter_isCompatibleWith ((const cPtr_actualParameterAST *) enumerator_4592.current_mActualParameter (HERE).ptr (), enumerator_4572.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_4572.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 108)) ;
            enumerator_4572.gotoNextObject () ;
            enumerator_4592.gotoNextObject () ;
            if (enumerator_4572.hasCurrentObject () && enumerator_4592.hasCurrentObject ()) {
              bool_2 = var_accept_4461.isValidAndTrue () ;
            }
          }
        }
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_accept_4461.boolEnum () ;
          if (kBoolTrue == test_3) {
            var_acceptableParameterList_4379.addAssign_operation (enumerator_4427.current (HERE).readProperty_mRoutineSignature (), enumerator_4427.current (HERE).readProperty_mIsFilePrivate ()  COMMA_SOURCE_FILE ("routineMap.galgas", 114)) ;
          }
        }
        enumerator_4427.gotoNextObject () ;
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (ComparisonKind::equal, var_acceptableParameterList_4379.getter_count (SOURCE_FILE ("routineMap.galgas", 117)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          var_acceptableParameterList_4379.method_first (outArgument_outRoutineSignature, outArgument_outIsFilePrivate, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 118)) ;
          outArgument_outRoutineMangledName = function_routineMangledName (constinArgument_inRoutineName, outArgument_outRoutineSignature, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 119)) ;
        }
      }
      if (kBoolFalse == test_4) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GALGAS_bool (ComparisonKind::equal, var_acceptableParameterList_4379.getter_count (SOURCE_FILE ("routineMap.galgas", 120)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), GALGAS_string ("cannot find any procedure with compatible formal argument list"), fixItArray6  COMMA_SOURCE_FILE ("routineMap.galgas", 121)) ;
            outArgument_outRoutineSignature.drop () ; // Release error dropped variable
            outArgument_outIsFilePrivate.drop () ; // Release error dropped variable
            outArgument_outRoutineMangledName.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_5) {
          GALGAS_string var_s_5427 = GALGAS_string ("ambiguity, several procedures with compatible formal argument list:") ;
          cEnumerator_acceptableParameterList enumerator_5524 (var_acceptableParameterList_4379, EnumerationOrder::up) ;
          while (enumerator_5524.hasCurrentObject ()) {
            var_s_5427.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (function_routineArgumentFromFormalParameters (enumerator_5524.current (HERE).readProperty_mRoutineSignature (), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas", 127)) ;
            enumerator_5524.gotoNextObject () ;
          }
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), var_s_5427, fixItArray7  COMMA_SOURCE_FILE ("routineMap.galgas", 129)) ;
          outArgument_outRoutineSignature.drop () ; // Release error dropped variable
          outArgument_outIsFilePrivate.drop () ; // Release error dropped variable
          outArgument_outRoutineMangledName.drop () ; // Release error dropped variable
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 135)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 135)), fixItArray8  COMMA_SOURCE_FILE ("routineMap.galgas", 134)) ;
    outArgument_outRoutineSignature.drop () ; // Release error dropped variable
    outArgument_outIsFilePrivate.drop () ; // Release error dropped variable
    outArgument_outRoutineMangledName.drop () ; // Release error dropped variable
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@routineMap locationForKey'
//
//--------------------------------------------------------------------------------------------------

GALGAS_location extensionGetter_locationForKey (const GALGAS_routineMap & inObject,
                                                const GALGAS_string & constinArgument_inKey,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_result ; // Returned variable
  const GALGAS_routineMap temp_0 = inObject ;
  result_result = temp_0.readProperty_mInternalRoutineMap ().getter_locationForKey (constinArgument_inKey, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas", 143)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateExpression (cPtr_semanticExpressionForGeneration * inObject,
                                             GALGAS_string & io_ioGeneratedCode,
                                             GALGAS_stringset & io_ioInclusionSet,
                                             GALGAS_uint & io_ioTemporaryVariableIndex,
                                             GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                             GALGAS_string & out_outCppExpression,
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

cPtr_castInExpressionForGeneration::cPtr_castInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mTypeName (),
mProperty_mCastType () {
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



ComparisonResult GALGAS_castInExpressionForGeneration::objectCompare (const GALGAS_castInExpressionForGeneration & inOperand) const {
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

GALGAS_castInExpressionForGeneration::GALGAS_castInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_castInExpressionForGeneration GALGAS_castInExpressionForGeneration::
init_21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                          const GALGAS_location & in_mLocation,
                          const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                          const GALGAS_string & in_mTypeName,
                          const GALGAS_unifiedTypeMapEntry & in_mCastType,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_castInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_castInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->castInExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mReceiverExpression, in_mTypeName, in_mCastType, inCompiler) ;
  const GALGAS_castInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionForGeneration::
castInExpressionForGeneration_init_21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                        const GALGAS_location & in_mLocation,
                                                        const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                        const GALGAS_string & in_mTypeName,
                                                        const GALGAS_unifiedTypeMapEntry & in_mCastType,
                                                        Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mCastType = in_mCastType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInExpressionForGeneration::GALGAS_castInExpressionForGeneration (const cPtr_castInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_castInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_castInExpressionForGeneration GALGAS_castInExpressionForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                           const GALGAS_location & in_mLocation,
                                                                                           const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                           const GALGAS_string & in_mTypeName,
                                                                                           const GALGAS_unifiedTypeMapEntry & in_mCastType
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_castInExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_castInExpressionForGeneration (in_mResultType, in_mLocation, in_mReceiverExpression, in_mTypeName, in_mCastType COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_castInExpressionForGeneration::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_castInExpressionForGeneration::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_castInExpressionForGeneration::readProperty_mCastType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    return p->mProperty_mCastType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @castInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_castInExpressionForGeneration::cPtr_castInExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                        const GALGAS_location & in_mLocation,
                                                                        const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                        const GALGAS_string & in_mTypeName,
                                                                        const GALGAS_unifiedTypeMapEntry & in_mCastType
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_castInExpressionForGeneration::classDescriptor (void) const {
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

acPtr_class * cPtr_castInExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_castInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mReceiverExpression, mProperty_mTypeName, mProperty_mCastType COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @castInExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInExpressionForGeneration ("castInExpressionForGeneration",
                                                                                     & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_castInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_castInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInExpressionForGeneration GALGAS_castInExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_castInExpressionForGeneration result ;
  const GALGAS_castInExpressionForGeneration * p = (const GALGAS_castInExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_castInExpressionForGeneration *> (p)) {
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

cPtr_outputActualParameterForGeneration::cPtr_outputActualParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (inCompiler COMMA_THERE),
mProperty_mOutputActualParameterExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_outputActualParameterForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOutputActualParameterExpression.printNonNullClassInstanceProperties ("mOutputActualParameterExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_outputActualParameterForGeneration::objectCompare (const GALGAS_outputActualParameterForGeneration & inOperand) const {
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

GALGAS_outputActualParameterForGeneration::GALGAS_outputActualParameterForGeneration (void) :
GALGAS_actualParameterForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_outputActualParameterForGeneration GALGAS_outputActualParameterForGeneration::
init_21__21_ (const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
              const GALGAS_semanticExpressionForGeneration & in_mOutputActualParameterExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_outputActualParameterForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_outputActualParameterForGeneration (inCompiler COMMA_THERE)) ;
  object->outputActualParameterForGeneration_init_21__21_ (in_mFormalArgumentType, in_mOutputActualParameterExpression, inCompiler) ;
  const GALGAS_outputActualParameterForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterForGeneration::
outputActualParameterForGeneration_init_21__21_ (const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                 const GALGAS_semanticExpressionForGeneration & in_mOutputActualParameterExpression,
                                                 Compiler * /* inCompiler */) {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  mProperty_mOutputActualParameterExpression = in_mOutputActualParameterExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterForGeneration::GALGAS_outputActualParameterForGeneration (const cPtr_outputActualParameterForGeneration * inSourcePtr) :
GALGAS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputActualParameterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterForGeneration GALGAS_outputActualParameterForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                                     const GALGAS_semanticExpressionForGeneration & in_mOutputActualParameterExpression
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_outputActualParameterForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_outputActualParameterForGeneration (in_mFormalArgumentType, in_mOutputActualParameterExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_outputActualParameterForGeneration::readProperty_mOutputActualParameterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_outputActualParameterForGeneration * p = (cPtr_outputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterForGeneration) ;
    return p->mProperty_mOutputActualParameterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @outputActualParameterForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_outputActualParameterForGeneration::cPtr_outputActualParameterForGeneration (const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                  const GALGAS_semanticExpressionForGeneration & in_mOutputActualParameterExpression
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (in_mFormalArgumentType COMMA_THERE),
mProperty_mOutputActualParameterExpression () {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  mProperty_mOutputActualParameterExpression = in_mOutputActualParameterExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_outputActualParameterForGeneration::classDescriptor (void) const {
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

acPtr_class * cPtr_outputActualParameterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_outputActualParameterForGeneration (mProperty_mFormalArgumentType, mProperty_mOutputActualParameterExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @outputActualParameterForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputActualParameterForGeneration ("outputActualParameterForGeneration",
                                                                                          & kTypeDescriptor_GALGAS_actualParameterForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outputActualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outputActualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputActualParameterForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterForGeneration GALGAS_outputActualParameterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_outputActualParameterForGeneration result ;
  const GALGAS_outputActualParameterForGeneration * p = (const GALGAS_outputActualParameterForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_outputActualParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputActualParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputActualParameterForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_inputActualParameterForGeneration::cPtr_inputActualParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (inCompiler COMMA_THERE),
mProperty_mInputActualCppName (),
mProperty_mPoisonedVarNameList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputActualParameterForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInputActualCppName.printNonNullClassInstanceProperties ("mInputActualCppName") ;
    mProperty_mPoisonedVarNameList.printNonNullClassInstanceProperties ("mPoisonedVarNameList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_inputActualParameterForGeneration::objectCompare (const GALGAS_inputActualParameterForGeneration & inOperand) const {
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

GALGAS_inputActualParameterForGeneration::GALGAS_inputActualParameterForGeneration (void) :
GALGAS_actualParameterForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_inputActualParameterForGeneration GALGAS_inputActualParameterForGeneration::
init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                  const GALGAS_string & in_mInputActualCppName,
                  const GALGAS__32_stringlist & in_mPoisonedVarNameList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_inputActualParameterForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_inputActualParameterForGeneration (inCompiler COMMA_THERE)) ;
  object->inputActualParameterForGeneration_init_21__21__21_ (in_mFormalArgumentType, in_mInputActualCppName, in_mPoisonedVarNameList, inCompiler) ;
  const GALGAS_inputActualParameterForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputActualParameterForGeneration::
inputActualParameterForGeneration_init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                    const GALGAS_string & in_mInputActualCppName,
                                                    const GALGAS__32_stringlist & in_mPoisonedVarNameList,
                                                    Compiler * /* inCompiler */) {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  mProperty_mInputActualCppName = in_mInputActualCppName ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualParameterForGeneration::GALGAS_inputActualParameterForGeneration (const cPtr_inputActualParameterForGeneration * inSourcePtr) :
GALGAS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputActualParameterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_inputActualParameterForGeneration GALGAS_inputActualParameterForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                                   const GALGAS_string & in_mInputActualCppName,
                                                                                                   const GALGAS__32_stringlist & in_mPoisonedVarNameList
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_inputActualParameterForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_inputActualParameterForGeneration (in_mFormalArgumentType, in_mInputActualCppName, in_mPoisonedVarNameList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_inputActualParameterForGeneration::readProperty_mInputActualCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_inputActualParameterForGeneration * p = (cPtr_inputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualParameterForGeneration) ;
    return p->mProperty_mInputActualCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_inputActualParameterForGeneration::readProperty_mPoisonedVarNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS__32_stringlist () ;
  }else{
    cPtr_inputActualParameterForGeneration * p = (cPtr_inputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputActualParameterForGeneration) ;
    return p->mProperty_mPoisonedVarNameList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputActualParameterForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_inputActualParameterForGeneration::cPtr_inputActualParameterForGeneration (const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                const GALGAS_string & in_mInputActualCppName,
                                                                                const GALGAS__32_stringlist & in_mPoisonedVarNameList
                                                                                COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (in_mFormalArgumentType COMMA_THERE),
mProperty_mInputActualCppName (),
mProperty_mPoisonedVarNameList () {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  mProperty_mInputActualCppName = in_mInputActualCppName ;
  mProperty_mPoisonedVarNameList = in_mPoisonedVarNameList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputActualParameterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualParameterForGeneration ;
}

void cPtr_inputActualParameterForGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@inputActualParameterForGeneration:") ;
  mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInputActualCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPoisonedVarNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputActualParameterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputActualParameterForGeneration (mProperty_mFormalArgumentType, mProperty_mInputActualCppName, mProperty_mPoisonedVarNameList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @inputActualParameterForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualParameterForGeneration ("inputActualParameterForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_actualParameterForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputActualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualParameterForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputActualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualParameterForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualParameterForGeneration GALGAS_inputActualParameterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_inputActualParameterForGeneration result ;
  const GALGAS_inputActualParameterForGeneration * p = (const GALGAS_inputActualParameterForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inputActualParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexiqueDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexiqueDeclarationForGeneration::cPtr_lexiqueDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mLexiqueName (),
mProperty_mSuperLexiqueName (),
mProperty_mHeaderContents (),
mProperty_mCppContents (),
mProperty_mObjcCocoaHeader (),
mProperty_mObjcCocoaImplementation (),
mProperty_mSwiftCocoaImplementation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexiqueDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLexiqueName.printNonNullClassInstanceProperties ("mLexiqueName") ;
    mProperty_mSuperLexiqueName.printNonNullClassInstanceProperties ("mSuperLexiqueName") ;
    mProperty_mHeaderContents.printNonNullClassInstanceProperties ("mHeaderContents") ;
    mProperty_mCppContents.printNonNullClassInstanceProperties ("mCppContents") ;
    mProperty_mObjcCocoaHeader.printNonNullClassInstanceProperties ("mObjcCocoaHeader") ;
    mProperty_mObjcCocoaImplementation.printNonNullClassInstanceProperties ("mObjcCocoaImplementation") ;
    mProperty_mSwiftCocoaImplementation.printNonNullClassInstanceProperties ("mSwiftCocoaImplementation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_lexiqueDeclarationForGeneration::objectCompare (const GALGAS_lexiqueDeclarationForGeneration & inOperand) const {
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

GALGAS_lexiqueDeclarationForGeneration::GALGAS_lexiqueDeclarationForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexiqueDeclarationForGeneration GALGAS_lexiqueDeclarationForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21_ (const GALGAS_bool & in_generateHeader,
                                                                                 const GALGAS_string & in_implementationCppFileName,
                                                                                 const GALGAS_string & in_mLexiqueName,
                                                                                 const GALGAS_string & in_mSuperLexiqueName,
                                                                                 const GALGAS_string & in_mHeaderContents,
                                                                                 const GALGAS_string & in_mCppContents,
                                                                                 const GALGAS_string & in_mObjcCocoaHeader,
                                                                                 const GALGAS_string & in_mObjcCocoaImplementation,
                                                                                 const GALGAS_string & in_mSwiftCocoaImplementation,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cPtr_lexiqueDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_lexiqueDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->lexiqueDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mLexiqueName, in_mSuperLexiqueName, in_mHeaderContents, in_mCppContents, in_mObjcCocoaHeader, in_mObjcCocoaImplementation, in_mSwiftCocoaImplementation, inCompiler) ;
  const GALGAS_lexiqueDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueDeclarationForGeneration::
lexiqueDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21_ (const GALGAS_bool & in_generateHeader,
                                                                                                                 const GALGAS_string & in_implementationCppFileName,
                                                                                                                 const GALGAS_string & in_mLexiqueName,
                                                                                                                 const GALGAS_string & in_mSuperLexiqueName,
                                                                                                                 const GALGAS_string & in_mHeaderContents,
                                                                                                                 const GALGAS_string & in_mCppContents,
                                                                                                                 const GALGAS_string & in_mObjcCocoaHeader,
                                                                                                                 const GALGAS_string & in_mObjcCocoaImplementation,
                                                                                                                 const GALGAS_string & in_mSwiftCocoaImplementation,
                                                                                                                 Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mSuperLexiqueName = in_mSuperLexiqueName ;
  mProperty_mHeaderContents = in_mHeaderContents ;
  mProperty_mCppContents = in_mCppContents ;
  mProperty_mObjcCocoaHeader = in_mObjcCocoaHeader ;
  mProperty_mObjcCocoaImplementation = in_mObjcCocoaImplementation ;
  mProperty_mSwiftCocoaImplementation = in_mSwiftCocoaImplementation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueDeclarationForGeneration::GALGAS_lexiqueDeclarationForGeneration (const cPtr_lexiqueDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexiqueDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueDeclarationForGeneration GALGAS_lexiqueDeclarationForGeneration::class_func_new (const GALGAS_bool & in_generateHeader,
                                                                                               const GALGAS_string & in_implementationCppFileName,
                                                                                               const GALGAS_string & in_mLexiqueName,
                                                                                               const GALGAS_string & in_mSuperLexiqueName,
                                                                                               const GALGAS_string & in_mHeaderContents,
                                                                                               const GALGAS_string & in_mCppContents,
                                                                                               const GALGAS_string & in_mObjcCocoaHeader,
                                                                                               const GALGAS_string & in_mObjcCocoaImplementation,
                                                                                               const GALGAS_string & in_mSwiftCocoaImplementation
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueDeclarationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_lexiqueDeclarationForGeneration (in_generateHeader, in_implementationCppFileName, in_mLexiqueName, in_mSuperLexiqueName, in_mHeaderContents, in_mCppContents, in_mObjcCocoaHeader, in_mObjcCocoaImplementation, in_mSwiftCocoaImplementation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::readProperty_mLexiqueName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mLexiqueName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::readProperty_mSuperLexiqueName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mSuperLexiqueName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::readProperty_mHeaderContents (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mHeaderContents ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::readProperty_mCppContents (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mCppContents ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::readProperty_mObjcCocoaHeader (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mObjcCocoaHeader ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::readProperty_mObjcCocoaImplementation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mObjcCocoaImplementation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::readProperty_mSwiftCocoaImplementation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    return p->mProperty_mSwiftCocoaImplementation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexiqueDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_lexiqueDeclarationForGeneration::cPtr_lexiqueDeclarationForGeneration (const GALGAS_bool & in_generateHeader,
                                                                            const GALGAS_string & in_implementationCppFileName,
                                                                            const GALGAS_string & in_mLexiqueName,
                                                                            const GALGAS_string & in_mSuperLexiqueName,
                                                                            const GALGAS_string & in_mHeaderContents,
                                                                            const GALGAS_string & in_mCppContents,
                                                                            const GALGAS_string & in_mObjcCocoaHeader,
                                                                            const GALGAS_string & in_mObjcCocoaImplementation,
                                                                            const GALGAS_string & in_mSwiftCocoaImplementation
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName COMMA_THERE),
mProperty_mLexiqueName (),
mProperty_mSuperLexiqueName (),
mProperty_mHeaderContents (),
mProperty_mCppContents (),
mProperty_mObjcCocoaHeader (),
mProperty_mObjcCocoaImplementation (),
mProperty_mSwiftCocoaImplementation () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mSuperLexiqueName = in_mSuperLexiqueName ;
  mProperty_mHeaderContents = in_mHeaderContents ;
  mProperty_mCppContents = in_mCppContents ;
  mProperty_mObjcCocoaHeader = in_mObjcCocoaHeader ;
  mProperty_mObjcCocoaImplementation = in_mObjcCocoaImplementation ;
  mProperty_mSwiftCocoaImplementation = in_mSwiftCocoaImplementation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexiqueDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration ;
}

void cPtr_lexiqueDeclarationForGeneration::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@lexiqueDeclarationForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSuperLexiqueName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHeaderContents.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppContents.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mObjcCocoaHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mObjcCocoaImplementation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSwiftCocoaImplementation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexiqueDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexiqueDeclarationForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mLexiqueName, mProperty_mSuperLexiqueName, mProperty_mHeaderContents, mProperty_mCppContents, mProperty_mObjcCocoaHeader, mProperty_mObjcCocoaImplementation, mProperty_mSwiftCocoaImplementation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexiqueDeclarationForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration ("lexiqueDeclarationForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexiqueDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexiqueDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueDeclarationForGeneration GALGAS_lexiqueDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueDeclarationForGeneration result ;
  const GALGAS_lexiqueDeclarationForGeneration * p = (const GALGAS_lexiqueDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexiqueDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexiqueDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_lexiqueDeclarationForGeneration_2D_weak & inOperand) const {
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

GALGAS_lexiqueDeclarationForGeneration_2D_weak::GALGAS_lexiqueDeclarationForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueDeclarationForGeneration_2D_weak & GALGAS_lexiqueDeclarationForGeneration_2D_weak::operator = (const GALGAS_lexiqueDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueDeclarationForGeneration_2D_weak::GALGAS_lexiqueDeclarationForGeneration_2D_weak (const GALGAS_lexiqueDeclarationForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueDeclarationForGeneration_2D_weak GALGAS_lexiqueDeclarationForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_lexiqueDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueDeclarationForGeneration GALGAS_lexiqueDeclarationForGeneration_2D_weak::bang_lexiqueDeclarationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexiqueDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexiqueDeclarationForGeneration) ;
      result = GALGAS_lexiqueDeclarationForGeneration ((cPtr_lexiqueDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexiqueDeclarationForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration_2D_weak ("lexiqueDeclarationForGeneration-weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexiqueDeclarationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexiqueDeclarationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueDeclarationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueDeclarationForGeneration_2D_weak GALGAS_lexiqueDeclarationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueDeclarationForGeneration_2D_weak result ;
  const GALGAS_lexiqueDeclarationForGeneration_2D_weak * p = (const GALGAS_lexiqueDeclarationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexiqueDeclarationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueDeclarationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @functionPrototypeDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_functionPrototypeDeclarationForGeneration::cPtr_functionPrototypeDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mFormalArgumentList (),
mProperty_mReturnType () {
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



ComparisonResult GALGAS_functionPrototypeDeclarationForGeneration::objectCompare (const GALGAS_functionPrototypeDeclarationForGeneration & inOperand) const {
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

GALGAS_functionPrototypeDeclarationForGeneration::GALGAS_functionPrototypeDeclarationForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_functionPrototypeDeclarationForGeneration GALGAS_functionPrototypeDeclarationForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21_ (const GALGAS_bool & in_generateHeader,
                                                                 const GALGAS_string & in_implementationCppFileName,
                                                                 const GALGAS_string & in_mFunctionName,
                                                                 const GALGAS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                 const GALGAS_unifiedTypeMapEntry & in_mReturnType,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cPtr_functionPrototypeDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_functionPrototypeDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->functionPrototypeDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mFunctionName, in_mFormalArgumentList, in_mReturnType, inCompiler) ;
  const GALGAS_functionPrototypeDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_functionPrototypeDeclarationForGeneration::
functionPrototypeDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21_ (const GALGAS_bool & in_generateHeader,
                                                                                                           const GALGAS_string & in_implementationCppFileName,
                                                                                                           const GALGAS_string & in_mFunctionName,
                                                                                                           const GALGAS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                                           const GALGAS_unifiedTypeMapEntry & in_mReturnType,
                                                                                                           Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mReturnType = in_mReturnType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionPrototypeDeclarationForGeneration::GALGAS_functionPrototypeDeclarationForGeneration (const cPtr_functionPrototypeDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionPrototypeDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_functionPrototypeDeclarationForGeneration GALGAS_functionPrototypeDeclarationForGeneration::class_func_new (const GALGAS_bool & in_generateHeader,
                                                                                                                   const GALGAS_string & in_implementationCppFileName,
                                                                                                                   const GALGAS_string & in_mFunctionName,
                                                                                                                   const GALGAS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                                                   const GALGAS_unifiedTypeMapEntry & in_mReturnType
                                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_functionPrototypeDeclarationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_functionPrototypeDeclarationForGeneration (in_generateHeader, in_implementationCppFileName, in_mFunctionName, in_mFormalArgumentList, in_mReturnType COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_functionPrototypeDeclarationForGeneration::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_functionPrototypeDeclarationForGeneration * p = (cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration GALGAS_functionPrototypeDeclarationForGeneration::readProperty_mFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_formalInputParameterListForGeneration () ;
  }else{
    cPtr_functionPrototypeDeclarationForGeneration * p = (cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    return p->mProperty_mFormalArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_functionPrototypeDeclarationForGeneration::readProperty_mReturnType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_functionPrototypeDeclarationForGeneration * p = (cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    return p->mProperty_mReturnType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @functionPrototypeDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_functionPrototypeDeclarationForGeneration::cPtr_functionPrototypeDeclarationForGeneration (const GALGAS_bool & in_generateHeader,
                                                                                                const GALGAS_string & in_implementationCppFileName,
                                                                                                const GALGAS_string & in_mFunctionName,
                                                                                                const GALGAS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                                const GALGAS_unifiedTypeMapEntry & in_mReturnType
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_functionPrototypeDeclarationForGeneration::classDescriptor (void) const {
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

acPtr_class * cPtr_functionPrototypeDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_functionPrototypeDeclarationForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mFunctionName, mProperty_mFormalArgumentList, mProperty_mReturnType COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @functionPrototypeDeclarationForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration ("functionPrototypeDeclarationForGeneration",
                                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionPrototypeDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionPrototypeDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionPrototypeDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionPrototypeDeclarationForGeneration GALGAS_functionPrototypeDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_functionPrototypeDeclarationForGeneration result ;
  const GALGAS_functionPrototypeDeclarationForGeneration * p = (const GALGAS_functionPrototypeDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_functionPrototypeDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionPrototypeDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_functionPrototypeDeclarationForGeneration_2D_weak & inOperand) const {
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

GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::GALGAS_functionPrototypeDeclarationForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionPrototypeDeclarationForGeneration_2D_weak & GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::operator = (const GALGAS_functionPrototypeDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::GALGAS_functionPrototypeDeclarationForGeneration_2D_weak (const GALGAS_functionPrototypeDeclarationForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionPrototypeDeclarationForGeneration_2D_weak GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_functionPrototypeDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionPrototypeDeclarationForGeneration GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::bang_functionPrototypeDeclarationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_functionPrototypeDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionPrototypeDeclarationForGeneration) ;
      result = GALGAS_functionPrototypeDeclarationForGeneration ((cPtr_functionPrototypeDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @functionPrototypeDeclarationForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration_2D_weak ("functionPrototypeDeclarationForGeneration-weak",
                                                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionPrototypeDeclarationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionPrototypeDeclarationForGeneration_2D_weak GALGAS_functionPrototypeDeclarationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_functionPrototypeDeclarationForGeneration_2D_weak result ;
  const GALGAS_functionPrototypeDeclarationForGeneration_2D_weak * p = (const GALGAS_functionPrototypeDeclarationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_functionPrototypeDeclarationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionPrototypeDeclarationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @functionImplementationForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_functionImplementationForGeneration::cPtr_functionImplementationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_functionPrototypeDeclarationForGeneration (inCompiler COMMA_THERE),
mProperty_mResultVariableCppName (),
mProperty_mFunctionInstructionList () {
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



ComparisonResult GALGAS_functionImplementationForGeneration::objectCompare (const GALGAS_functionImplementationForGeneration & inOperand) const {
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

GALGAS_functionImplementationForGeneration::GALGAS_functionImplementationForGeneration (void) :
GALGAS_functionPrototypeDeclarationForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_functionImplementationForGeneration GALGAS_functionImplementationForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const GALGAS_bool & in_generateHeader,
                                                                         const GALGAS_string & in_implementationCppFileName,
                                                                         const GALGAS_string & in_mFunctionName,
                                                                         const GALGAS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                         const GALGAS_unifiedTypeMapEntry & in_mReturnType,
                                                                         const GALGAS_string & in_mResultVariableCppName,
                                                                         const GALGAS_semanticInstructionListForGeneration & in_mFunctionInstructionList,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cPtr_functionImplementationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_functionImplementationForGeneration (inCompiler COMMA_THERE)) ;
  object->functionImplementationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mFunctionName, in_mFormalArgumentList, in_mReturnType, in_mResultVariableCppName, in_mFunctionInstructionList, inCompiler) ;
  const GALGAS_functionImplementationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_functionImplementationForGeneration::
functionImplementationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const GALGAS_bool & in_generateHeader,
                                                                                                             const GALGAS_string & in_implementationCppFileName,
                                                                                                             const GALGAS_string & in_mFunctionName,
                                                                                                             const GALGAS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                                             const GALGAS_unifiedTypeMapEntry & in_mReturnType,
                                                                                                             const GALGAS_string & in_mResultVariableCppName,
                                                                                                             const GALGAS_semanticInstructionListForGeneration & in_mFunctionInstructionList,
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

GALGAS_functionImplementationForGeneration::GALGAS_functionImplementationForGeneration (const cPtr_functionImplementationForGeneration * inSourcePtr) :
GALGAS_functionPrototypeDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionImplementationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_functionImplementationForGeneration GALGAS_functionImplementationForGeneration::class_func_new (const GALGAS_bool & in_generateHeader,
                                                                                                       const GALGAS_string & in_implementationCppFileName,
                                                                                                       const GALGAS_string & in_mFunctionName,
                                                                                                       const GALGAS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                                       const GALGAS_unifiedTypeMapEntry & in_mReturnType,
                                                                                                       const GALGAS_string & in_mResultVariableCppName,
                                                                                                       const GALGAS_semanticInstructionListForGeneration & in_mFunctionInstructionList
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_functionImplementationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_functionImplementationForGeneration (in_generateHeader, in_implementationCppFileName, in_mFunctionName, in_mFormalArgumentList, in_mReturnType, in_mResultVariableCppName, in_mFunctionInstructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_functionImplementationForGeneration::readProperty_mResultVariableCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_functionImplementationForGeneration * p = (cPtr_functionImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionImplementationForGeneration) ;
    return p->mProperty_mResultVariableCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_functionImplementationForGeneration::readProperty_mFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_functionImplementationForGeneration * p = (cPtr_functionImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionImplementationForGeneration) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @functionImplementationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_functionImplementationForGeneration::cPtr_functionImplementationForGeneration (const GALGAS_bool & in_generateHeader,
                                                                                    const GALGAS_string & in_implementationCppFileName,
                                                                                    const GALGAS_string & in_mFunctionName,
                                                                                    const GALGAS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                    const GALGAS_unifiedTypeMapEntry & in_mReturnType,
                                                                                    const GALGAS_string & in_mResultVariableCppName,
                                                                                    const GALGAS_semanticInstructionListForGeneration & in_mFunctionInstructionList
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_functionPrototypeDeclarationForGeneration (in_generateHeader, in_implementationCppFileName, in_mFunctionName, in_mFormalArgumentList, in_mReturnType COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_functionImplementationForGeneration::classDescriptor (void) const {
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

acPtr_class * cPtr_functionImplementationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_functionImplementationForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mFunctionName, mProperty_mFormalArgumentList, mProperty_mReturnType, mProperty_mResultVariableCppName, mProperty_mFunctionInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @functionImplementationForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionImplementationForGeneration ("functionImplementationForGeneration",
                                                                                           & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionImplementationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionImplementationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionImplementationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionImplementationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionImplementationForGeneration GALGAS_functionImplementationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_functionImplementationForGeneration result ;
  const GALGAS_functionImplementationForGeneration * p = (const GALGAS_functionImplementationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_functionImplementationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionImplementationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_functionImplementationForGeneration_2D_weak::objectCompare (const GALGAS_functionImplementationForGeneration_2D_weak & inOperand) const {
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

GALGAS_functionImplementationForGeneration_2D_weak::GALGAS_functionImplementationForGeneration_2D_weak (void) :
GALGAS_functionPrototypeDeclarationForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionImplementationForGeneration_2D_weak & GALGAS_functionImplementationForGeneration_2D_weak::operator = (const GALGAS_functionImplementationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionImplementationForGeneration_2D_weak::GALGAS_functionImplementationForGeneration_2D_weak (const GALGAS_functionImplementationForGeneration & inSource) :
GALGAS_functionPrototypeDeclarationForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionImplementationForGeneration_2D_weak GALGAS_functionImplementationForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_functionImplementationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionImplementationForGeneration GALGAS_functionImplementationForGeneration_2D_weak::bang_functionImplementationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_functionImplementationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionImplementationForGeneration) ;
      result = GALGAS_functionImplementationForGeneration ((cPtr_functionImplementationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @functionImplementationForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionImplementationForGeneration_2D_weak ("functionImplementationForGeneration-weak",
                                                                                                   & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionImplementationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionImplementationForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionImplementationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionImplementationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionImplementationForGeneration_2D_weak GALGAS_functionImplementationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_functionImplementationForGeneration_2D_weak result ;
  const GALGAS_functionImplementationForGeneration_2D_weak * p = (const GALGAS_functionImplementationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_functionImplementationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionImplementationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @onceFunctionDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_onceFunctionDeclarationForGeneration::cPtr_onceFunctionDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mReturnType (),
mProperty_mResultVariableCppName (),
mProperty_mFunctionInstructionList () {
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



ComparisonResult GALGAS_onceFunctionDeclarationForGeneration::objectCompare (const GALGAS_onceFunctionDeclarationForGeneration & inOperand) const {
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

GALGAS_onceFunctionDeclarationForGeneration::GALGAS_onceFunctionDeclarationForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_onceFunctionDeclarationForGeneration GALGAS_onceFunctionDeclarationForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (const GALGAS_bool & in_generateHeader,
                                                                     const GALGAS_string & in_implementationCppFileName,
                                                                     const GALGAS_string & in_mFunctionName,
                                                                     const GALGAS_unifiedTypeMapEntry & in_mReturnType,
                                                                     const GALGAS_string & in_mResultVariableCppName,
                                                                     const GALGAS_semanticInstructionListForGeneration & in_mFunctionInstructionList,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cPtr_onceFunctionDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_onceFunctionDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->onceFunctionDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mFunctionName, in_mReturnType, in_mResultVariableCppName, in_mFunctionInstructionList, inCompiler) ;
  const GALGAS_onceFunctionDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationForGeneration::
onceFunctionDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21_ (const GALGAS_bool & in_generateHeader,
                                                                                                          const GALGAS_string & in_implementationCppFileName,
                                                                                                          const GALGAS_string & in_mFunctionName,
                                                                                                          const GALGAS_unifiedTypeMapEntry & in_mReturnType,
                                                                                                          const GALGAS_string & in_mResultVariableCppName,
                                                                                                          const GALGAS_semanticInstructionListForGeneration & in_mFunctionInstructionList,
                                                                                                          Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mReturnType = in_mReturnType ;
  mProperty_mResultVariableCppName = in_mResultVariableCppName ;
  mProperty_mFunctionInstructionList = in_mFunctionInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationForGeneration::GALGAS_onceFunctionDeclarationForGeneration (const cPtr_onceFunctionDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_onceFunctionDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationForGeneration GALGAS_onceFunctionDeclarationForGeneration::class_func_new (const GALGAS_bool & in_generateHeader,
                                                                                                         const GALGAS_string & in_implementationCppFileName,
                                                                                                         const GALGAS_string & in_mFunctionName,
                                                                                                         const GALGAS_unifiedTypeMapEntry & in_mReturnType,
                                                                                                         const GALGAS_string & in_mResultVariableCppName,
                                                                                                         const GALGAS_semanticInstructionListForGeneration & in_mFunctionInstructionList
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_onceFunctionDeclarationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_onceFunctionDeclarationForGeneration (in_generateHeader, in_implementationCppFileName, in_mFunctionName, in_mReturnType, in_mResultVariableCppName, in_mFunctionInstructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_onceFunctionDeclarationForGeneration::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_onceFunctionDeclarationForGeneration::readProperty_mReturnType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    return p->mProperty_mReturnType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_onceFunctionDeclarationForGeneration::readProperty_mResultVariableCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    return p->mProperty_mResultVariableCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_onceFunctionDeclarationForGeneration::readProperty_mFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @onceFunctionDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_onceFunctionDeclarationForGeneration::cPtr_onceFunctionDeclarationForGeneration (const GALGAS_bool & in_generateHeader,
                                                                                      const GALGAS_string & in_implementationCppFileName,
                                                                                      const GALGAS_string & in_mFunctionName,
                                                                                      const GALGAS_unifiedTypeMapEntry & in_mReturnType,
                                                                                      const GALGAS_string & in_mResultVariableCppName,
                                                                                      const GALGAS_semanticInstructionListForGeneration & in_mFunctionInstructionList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_onceFunctionDeclarationForGeneration::classDescriptor (void) const {
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

acPtr_class * cPtr_onceFunctionDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_onceFunctionDeclarationForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mFunctionName, mProperty_mReturnType, mProperty_mResultVariableCppName, mProperty_mFunctionInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @onceFunctionDeclarationForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration ("onceFunctionDeclarationForGeneration",
                                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_onceFunctionDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_onceFunctionDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_onceFunctionDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationForGeneration GALGAS_onceFunctionDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_onceFunctionDeclarationForGeneration result ;
  const GALGAS_onceFunctionDeclarationForGeneration * p = (const GALGAS_onceFunctionDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_onceFunctionDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("onceFunctionDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_onceFunctionDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_onceFunctionDeclarationForGeneration_2D_weak & inOperand) const {
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

GALGAS_onceFunctionDeclarationForGeneration_2D_weak::GALGAS_onceFunctionDeclarationForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationForGeneration_2D_weak & GALGAS_onceFunctionDeclarationForGeneration_2D_weak::operator = (const GALGAS_onceFunctionDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationForGeneration_2D_weak::GALGAS_onceFunctionDeclarationForGeneration_2D_weak (const GALGAS_onceFunctionDeclarationForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationForGeneration_2D_weak GALGAS_onceFunctionDeclarationForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_onceFunctionDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationForGeneration GALGAS_onceFunctionDeclarationForGeneration_2D_weak::bang_onceFunctionDeclarationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_onceFunctionDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_onceFunctionDeclarationForGeneration) ;
      result = GALGAS_onceFunctionDeclarationForGeneration ((cPtr_onceFunctionDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @onceFunctionDeclarationForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration_2D_weak ("onceFunctionDeclarationForGeneration-weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_onceFunctionDeclarationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_onceFunctionDeclarationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_onceFunctionDeclarationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationForGeneration_2D_weak GALGAS_onceFunctionDeclarationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_onceFunctionDeclarationForGeneration_2D_weak result ;
  const GALGAS_onceFunctionDeclarationForGeneration_2D_weak * p = (const GALGAS_onceFunctionDeclarationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_onceFunctionDeclarationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("onceFunctionDeclarationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @filewrapperDeclarationForGeneration reference class
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



ComparisonResult GALGAS_filewrapperDeclarationForGeneration::objectCompare (const GALGAS_filewrapperDeclarationForGeneration & inOperand) const {
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

GALGAS_filewrapperDeclarationForGeneration::GALGAS_filewrapperDeclarationForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_filewrapperDeclarationForGeneration GALGAS_filewrapperDeclarationForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const GALGAS_bool & in_generateHeader,
                                                                         const GALGAS_string & in_implementationCppFileName,
                                                                         const GALGAS_string & in_mFilewrapperName,
                                                                         const GALGAS_string & in_mFilewrapperAbsolutePath,
                                                                         const GALGAS_wrapperFileMap & in_mFilewrapperFileMap,
                                                                         const GALGAS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                                         const GALGAS_filewrapperTemplateListForGeneration & in_mFilewrapperTemplateListForGeneration,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cPtr_filewrapperDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_filewrapperDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->filewrapperDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mFilewrapperName, in_mFilewrapperAbsolutePath, in_mFilewrapperFileMap, in_mFilewrapperDirectoryMap, in_mFilewrapperTemplateListForGeneration, inCompiler) ;
  const GALGAS_filewrapperDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationForGeneration::
filewrapperDeclarationForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (const GALGAS_bool & in_generateHeader,
                                                                                                             const GALGAS_string & in_implementationCppFileName,
                                                                                                             const GALGAS_string & in_mFilewrapperName,
                                                                                                             const GALGAS_string & in_mFilewrapperAbsolutePath,
                                                                                                             const GALGAS_wrapperFileMap & in_mFilewrapperFileMap,
                                                                                                             const GALGAS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                                                                             const GALGAS_filewrapperTemplateListForGeneration & in_mFilewrapperTemplateListForGeneration,
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

GALGAS_filewrapperDeclarationForGeneration::GALGAS_filewrapperDeclarationForGeneration (const cPtr_filewrapperDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationForGeneration GALGAS_filewrapperDeclarationForGeneration::class_func_new (const GALGAS_bool & in_generateHeader,
                                                                                                       const GALGAS_string & in_implementationCppFileName,
                                                                                                       const GALGAS_string & in_mFilewrapperName,
                                                                                                       const GALGAS_string & in_mFilewrapperAbsolutePath,
                                                                                                       const GALGAS_wrapperFileMap & in_mFilewrapperFileMap,
                                                                                                       const GALGAS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                                                                       const GALGAS_filewrapperTemplateListForGeneration & in_mFilewrapperTemplateListForGeneration
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperDeclarationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_filewrapperDeclarationForGeneration (in_generateHeader, in_implementationCppFileName, in_mFilewrapperName, in_mFilewrapperAbsolutePath, in_mFilewrapperFileMap, in_mFilewrapperDirectoryMap, in_mFilewrapperTemplateListForGeneration COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperAbsolutePath (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperAbsolutePath ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_wrapperFileMap GALGAS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperFileMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_wrapperFileMap () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperFileMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_wrapperDirectoryMap GALGAS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperDirectoryMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_wrapperDirectoryMap () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperDirectoryMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListForGeneration GALGAS_filewrapperDeclarationForGeneration::readProperty_mFilewrapperTemplateListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_filewrapperTemplateListForGeneration () ;
  }else{
    cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    return p->mProperty_mFilewrapperTemplateListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperDeclarationForGeneration::cPtr_filewrapperDeclarationForGeneration (const GALGAS_bool & in_generateHeader,
                                                                                    const GALGAS_string & in_implementationCppFileName,
                                                                                    const GALGAS_string & in_mFilewrapperName,
                                                                                    const GALGAS_string & in_mFilewrapperAbsolutePath,
                                                                                    const GALGAS_wrapperFileMap & in_mFilewrapperFileMap,
                                                                                    const GALGAS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                                                    const GALGAS_filewrapperTemplateListForGeneration & in_mFilewrapperTemplateListForGeneration
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_filewrapperDeclarationForGeneration::classDescriptor (void) const {
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

acPtr_class * cPtr_filewrapperDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_filewrapperDeclarationForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mFilewrapperName, mProperty_mFilewrapperAbsolutePath, mProperty_mFilewrapperFileMap, mProperty_mFilewrapperDirectoryMap, mProperty_mFilewrapperTemplateListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @filewrapperDeclarationForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ("filewrapperDeclarationForGeneration",
                                                                                           & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationForGeneration GALGAS_filewrapperDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperDeclarationForGeneration result ;
  const GALGAS_filewrapperDeclarationForGeneration * p = (const GALGAS_filewrapperDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_filewrapperDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_filewrapperDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_filewrapperDeclarationForGeneration_2D_weak & inOperand) const {
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

GALGAS_filewrapperDeclarationForGeneration_2D_weak::GALGAS_filewrapperDeclarationForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationForGeneration_2D_weak & GALGAS_filewrapperDeclarationForGeneration_2D_weak::operator = (const GALGAS_filewrapperDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationForGeneration_2D_weak::GALGAS_filewrapperDeclarationForGeneration_2D_weak (const GALGAS_filewrapperDeclarationForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationForGeneration_2D_weak GALGAS_filewrapperDeclarationForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_filewrapperDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationForGeneration GALGAS_filewrapperDeclarationForGeneration_2D_weak::bang_filewrapperDeclarationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_filewrapperDeclarationForGeneration) ;
      result = GALGAS_filewrapperDeclarationForGeneration ((cPtr_filewrapperDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @filewrapperDeclarationForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration_2D_weak ("filewrapperDeclarationForGeneration-weak",
                                                                                                   & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperDeclarationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperDeclarationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperDeclarationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationForGeneration_2D_weak GALGAS_filewrapperDeclarationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperDeclarationForGeneration_2D_weak result ;
  const GALGAS_filewrapperDeclarationForGeneration_2D_weak * p = (const GALGAS_filewrapperDeclarationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_filewrapperDeclarationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperDeclarationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @programComponentForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_programComponentForGeneration::cPtr_programComponentForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mInclusionSet (),
mProperty_mImplementationString () {
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



ComparisonResult GALGAS_programComponentForGeneration::objectCompare (const GALGAS_programComponentForGeneration & inOperand) const {
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

GALGAS_programComponentForGeneration::GALGAS_programComponentForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_programComponentForGeneration GALGAS_programComponentForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21_ (const GALGAS_bool & in_generateHeader,
                                                             const GALGAS_string & in_implementationCppFileName,
                                                             const GALGAS_stringset & in_mInclusionSet,
                                                             const GALGAS_string & in_mImplementationString,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cPtr_programComponentForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_programComponentForGeneration (inCompiler COMMA_THERE)) ;
  object->programComponentForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21_ (in_generateHeader, in_implementationCppFileName, in_mInclusionSet, in_mImplementationString, inCompiler) ;
  const GALGAS_programComponentForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_programComponentForGeneration::
programComponentForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21_ (const GALGAS_bool & in_generateHeader,
                                                                                           const GALGAS_string & in_implementationCppFileName,
                                                                                           const GALGAS_stringset & in_mInclusionSet,
                                                                                           const GALGAS_string & in_mImplementationString,
                                                                                           Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mInclusionSet = in_mInclusionSet ;
  mProperty_mImplementationString = in_mImplementationString ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programComponentForGeneration::GALGAS_programComponentForGeneration (const cPtr_programComponentForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_programComponentForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_programComponentForGeneration GALGAS_programComponentForGeneration::class_func_new (const GALGAS_bool & in_generateHeader,
                                                                                           const GALGAS_string & in_implementationCppFileName,
                                                                                           const GALGAS_stringset & in_mInclusionSet,
                                                                                           const GALGAS_string & in_mImplementationString
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_programComponentForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_programComponentForGeneration (in_generateHeader, in_implementationCppFileName, in_mInclusionSet, in_mImplementationString COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_programComponentForGeneration::readProperty_mInclusionSet (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_stringset () ;
  }else{
    cPtr_programComponentForGeneration * p = (cPtr_programComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_programComponentForGeneration) ;
    return p->mProperty_mInclusionSet ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_programComponentForGeneration::readProperty_mImplementationString (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_programComponentForGeneration * p = (cPtr_programComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_programComponentForGeneration) ;
    return p->mProperty_mImplementationString ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @programComponentForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_programComponentForGeneration::cPtr_programComponentForGeneration (const GALGAS_bool & in_generateHeader,
                                                                        const GALGAS_string & in_implementationCppFileName,
                                                                        const GALGAS_stringset & in_mInclusionSet,
                                                                        const GALGAS_string & in_mImplementationString
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName COMMA_THERE),
mProperty_mInclusionSet (),
mProperty_mImplementationString () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mInclusionSet = in_mInclusionSet ;
  mProperty_mImplementationString = in_mImplementationString ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_programComponentForGeneration::classDescriptor (void) const {
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

acPtr_class * cPtr_programComponentForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_programComponentForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mInclusionSet, mProperty_mImplementationString COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @programComponentForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programComponentForGeneration ("programComponentForGeneration",
                                                                                     & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_programComponentForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programComponentForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_programComponentForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_programComponentForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programComponentForGeneration GALGAS_programComponentForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_programComponentForGeneration result ;
  const GALGAS_programComponentForGeneration * p = (const GALGAS_programComponentForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_programComponentForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programComponentForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_programComponentForGeneration_2D_weak::objectCompare (const GALGAS_programComponentForGeneration_2D_weak & inOperand) const {
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

GALGAS_programComponentForGeneration_2D_weak::GALGAS_programComponentForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_programComponentForGeneration_2D_weak & GALGAS_programComponentForGeneration_2D_weak::operator = (const GALGAS_programComponentForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programComponentForGeneration_2D_weak::GALGAS_programComponentForGeneration_2D_weak (const GALGAS_programComponentForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_programComponentForGeneration_2D_weak GALGAS_programComponentForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_programComponentForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programComponentForGeneration GALGAS_programComponentForGeneration_2D_weak::bang_programComponentForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_programComponentForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_programComponentForGeneration) ;
      result = GALGAS_programComponentForGeneration ((cPtr_programComponentForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @programComponentForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programComponentForGeneration_2D_weak ("programComponentForGeneration-weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_programComponentForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programComponentForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_programComponentForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_programComponentForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programComponentForGeneration_2D_weak GALGAS_programComponentForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_programComponentForGeneration_2D_weak result ;
  const GALGAS_programComponentForGeneration_2D_weak * p = (const GALGAS_programComponentForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_programComponentForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programComponentForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeGrammarInstructionSDT'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeGrammarInstructionSDT (cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                       const GALGAS_analysisContext constin_inAnalysisContext,
                                                       GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                       const GALGAS_bool constin_inHasTranslateFeature,
                                                       const GALGAS_string constin_inSyntaxDirectedTranslationResultVarName,
                                                       GALGAS_stringlist & io_ioAssignementList,
                                                       GALGAS_localVarManager & io_ioVariableMap,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
    inObject->method_analyzeGrammarInstructionSDT (constin_inAnalysisContext, io_ioTypeMap, constin_inHasTranslateFeature, constin_inSyntaxDirectedTranslationResultVarName, io_ioAssignementList, io_ioVariableMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @grammarForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_grammarForGeneration::cPtr_grammarForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mGrammarName (),
mProperty_mLexiqueName (),
mProperty_mNonTerminalMapForGrammarAnalysis (),
mProperty_mNonTerminalToAddList (),
mProperty_mSyntaxComponents (),
mProperty_mStartSymbolName (),
mProperty_mHasTranslateFeature (),
mProperty_mCppFileContents () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mGrammarName.printNonNullClassInstanceProperties ("mGrammarName") ;
    mProperty_mLexiqueName.printNonNullClassInstanceProperties ("mLexiqueName") ;
    mProperty_mNonTerminalMapForGrammarAnalysis.printNonNullClassInstanceProperties ("mNonTerminalMapForGrammarAnalysis") ;
    mProperty_mNonTerminalToAddList.printNonNullClassInstanceProperties ("mNonTerminalToAddList") ;
    mProperty_mSyntaxComponents.printNonNullClassInstanceProperties ("mSyntaxComponents") ;
    mProperty_mStartSymbolName.printNonNullClassInstanceProperties ("mStartSymbolName") ;
    mProperty_mHasTranslateFeature.printNonNullClassInstanceProperties ("mHasTranslateFeature") ;
    mProperty_mCppFileContents.printNonNullClassInstanceProperties ("mCppFileContents") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_grammarForGeneration::objectCompare (const GALGAS_grammarForGeneration & inOperand) const {
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

GALGAS_grammarForGeneration::GALGAS_grammarForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_grammarForGeneration GALGAS_grammarForGeneration::
init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (const GALGAS_bool & in_generateHeader,
                                                                                     const GALGAS_string & in_implementationCppFileName,
                                                                                     const GALGAS_string & in_mGrammarName,
                                                                                     const GALGAS_string & in_mLexiqueName,
                                                                                     const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & in_mNonTerminalMapForGrammarAnalysis,
                                                                                     const GALGAS_nonTerminalToAddList & in_mNonTerminalToAddList,
                                                                                     const GALGAS_lstringlist & in_mSyntaxComponents,
                                                                                     const GALGAS_string & in_mStartSymbolName,
                                                                                     const GALGAS_bool & in_mHasTranslateFeature,
                                                                                     const GALGAS_string & in_mCppFileContents,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cPtr_grammarForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_grammarForGeneration (inCompiler COMMA_THERE)) ;
  object->grammarForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (in_generateHeader, in_implementationCppFileName, in_mGrammarName, in_mLexiqueName, in_mNonTerminalMapForGrammarAnalysis, in_mNonTerminalToAddList, in_mSyntaxComponents, in_mStartSymbolName, in_mHasTranslateFeature, in_mCppFileContents, inCompiler) ;
  const GALGAS_grammarForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_grammarForGeneration::
grammarForGeneration_init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (const GALGAS_bool & in_generateHeader,
                                                                                                          const GALGAS_string & in_implementationCppFileName,
                                                                                                          const GALGAS_string & in_mGrammarName,
                                                                                                          const GALGAS_string & in_mLexiqueName,
                                                                                                          const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & in_mNonTerminalMapForGrammarAnalysis,
                                                                                                          const GALGAS_nonTerminalToAddList & in_mNonTerminalToAddList,
                                                                                                          const GALGAS_lstringlist & in_mSyntaxComponents,
                                                                                                          const GALGAS_string & in_mStartSymbolName,
                                                                                                          const GALGAS_bool & in_mHasTranslateFeature,
                                                                                                          const GALGAS_string & in_mCppFileContents,
                                                                                                          Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mGrammarName = in_mGrammarName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mNonTerminalMapForGrammarAnalysis = in_mNonTerminalMapForGrammarAnalysis ;
  mProperty_mNonTerminalToAddList = in_mNonTerminalToAddList ;
  mProperty_mSyntaxComponents = in_mSyntaxComponents ;
  mProperty_mStartSymbolName = in_mStartSymbolName ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
  mProperty_mCppFileContents = in_mCppFileContents ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarForGeneration::GALGAS_grammarForGeneration (const cPtr_grammarForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_grammarForGeneration GALGAS_grammarForGeneration::class_func_new (const GALGAS_bool & in_generateHeader,
                                                                         const GALGAS_string & in_implementationCppFileName,
                                                                         const GALGAS_string & in_mGrammarName,
                                                                         const GALGAS_string & in_mLexiqueName,
                                                                         const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & in_mNonTerminalMapForGrammarAnalysis,
                                                                         const GALGAS_nonTerminalToAddList & in_mNonTerminalToAddList,
                                                                         const GALGAS_lstringlist & in_mSyntaxComponents,
                                                                         const GALGAS_string & in_mStartSymbolName,
                                                                         const GALGAS_bool & in_mHasTranslateFeature,
                                                                         const GALGAS_string & in_mCppFileContents
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_grammarForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_grammarForGeneration (in_generateHeader, in_implementationCppFileName, in_mGrammarName, in_mLexiqueName, in_mNonTerminalMapForGrammarAnalysis, in_mNonTerminalToAddList, in_mSyntaxComponents, in_mStartSymbolName, in_mHasTranslateFeature, in_mCppFileContents COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarForGeneration::readProperty_mGrammarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mGrammarName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarForGeneration::readProperty_mLexiqueName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mLexiqueName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis GALGAS_grammarForGeneration::readProperty_mNonTerminalMapForGrammarAnalysis (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_nonTerminalSymbolMapForGrammarAnalysis () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mNonTerminalMapForGrammarAnalysis ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalToAddList GALGAS_grammarForGeneration::readProperty_mNonTerminalToAddList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_nonTerminalToAddList () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mNonTerminalToAddList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_grammarForGeneration::readProperty_mSyntaxComponents (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mSyntaxComponents ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarForGeneration::readProperty_mStartSymbolName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mStartSymbolName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_grammarForGeneration::readProperty_mHasTranslateFeature (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_grammarForGeneration::readProperty_mCppFileContents (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mCppFileContents ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_grammarForGeneration::cPtr_grammarForGeneration (const GALGAS_bool & in_generateHeader,
                                                      const GALGAS_string & in_implementationCppFileName,
                                                      const GALGAS_string & in_mGrammarName,
                                                      const GALGAS_string & in_mLexiqueName,
                                                      const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & in_mNonTerminalMapForGrammarAnalysis,
                                                      const GALGAS_nonTerminalToAddList & in_mNonTerminalToAddList,
                                                      const GALGAS_lstringlist & in_mSyntaxComponents,
                                                      const GALGAS_string & in_mStartSymbolName,
                                                      const GALGAS_bool & in_mHasTranslateFeature,
                                                      const GALGAS_string & in_mCppFileContents
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_generateHeader, in_implementationCppFileName COMMA_THERE),
mProperty_mGrammarName (),
mProperty_mLexiqueName (),
mProperty_mNonTerminalMapForGrammarAnalysis (),
mProperty_mNonTerminalToAddList (),
mProperty_mSyntaxComponents (),
mProperty_mStartSymbolName (),
mProperty_mHasTranslateFeature (),
mProperty_mCppFileContents () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mGrammarName = in_mGrammarName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mNonTerminalMapForGrammarAnalysis = in_mNonTerminalMapForGrammarAnalysis ;
  mProperty_mNonTerminalToAddList = in_mNonTerminalToAddList ;
  mProperty_mSyntaxComponents = in_mSyntaxComponents ;
  mProperty_mStartSymbolName = in_mStartSymbolName ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
  mProperty_mCppFileContents = in_mCppFileContents ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_grammarForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarForGeneration ;
}

void cPtr_grammarForGeneration::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@grammarForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonTerminalMapForGrammarAnalysis.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonTerminalToAddList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSyntaxComponents.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStartSymbolName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppFileContents.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mGrammarName, mProperty_mLexiqueName, mProperty_mNonTerminalMapForGrammarAnalysis, mProperty_mNonTerminalToAddList, mProperty_mSyntaxComponents, mProperty_mStartSymbolName, mProperty_mHasTranslateFeature, mProperty_mCppFileContents COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @grammarForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarForGeneration ("grammarForGeneration",
                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarForGeneration GALGAS_grammarForGeneration::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_grammarForGeneration result ;
  const GALGAS_grammarForGeneration * p = (const GALGAS_grammarForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_grammarForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_grammarForGeneration_2D_weak::objectCompare (const GALGAS_grammarForGeneration_2D_weak & inOperand) const {
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

GALGAS_grammarForGeneration_2D_weak::GALGAS_grammarForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarForGeneration_2D_weak & GALGAS_grammarForGeneration_2D_weak::operator = (const GALGAS_grammarForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarForGeneration_2D_weak::GALGAS_grammarForGeneration_2D_weak (const GALGAS_grammarForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarForGeneration_2D_weak GALGAS_grammarForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_grammarForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarForGeneration GALGAS_grammarForGeneration_2D_weak::bang_grammarForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarForGeneration) ;
      result = GALGAS_grammarForGeneration ((cPtr_grammarForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @grammarForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarForGeneration_2D_weak ("grammarForGeneration-weak",
                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarForGeneration_2D_weak GALGAS_grammarForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_grammarForGeneration_2D_weak result ;
  const GALGAS_grammarForGeneration_2D_weak * p = (const GALGAS_grammarForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_grammarForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @primitiveTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_primitiveTypeForGeneration::cPtr_primitiveTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mPredefinedTypeName (),
mProperty_mCppDeclarationString (),
mProperty_isPackage () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_primitiveTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mPredefinedTypeName.printNonNullClassInstanceProperties ("mPredefinedTypeName") ;
    mProperty_mCppDeclarationString.printNonNullClassInstanceProperties ("mCppDeclarationString") ;
    mProperty_isPackage.printNonNullClassInstanceProperties ("isPackage") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_primitiveTypeForGeneration::objectCompare (const GALGAS_primitiveTypeForGeneration & inOperand) const {
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

GALGAS_primitiveTypeForGeneration::GALGAS_primitiveTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_primitiveTypeForGeneration GALGAS_primitiveTypeForGeneration::
init_21__21__21__21_isPackage (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                               const GALGAS_string & in_mPredefinedTypeName,
                               const GALGAS_string & in_mCppDeclarationString,
                               const GALGAS_bool & in_isPackage,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) {
  cPtr_primitiveTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_primitiveTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->primitiveTypeForGeneration_init_21__21__21__21_isPackage (in_mSelfTypeEntry, in_mPredefinedTypeName, in_mCppDeclarationString, in_isPackage, inCompiler) ;
  const GALGAS_primitiveTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_primitiveTypeForGeneration::
primitiveTypeForGeneration_init_21__21__21__21_isPackage (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                          const GALGAS_string & in_mPredefinedTypeName,
                                                          const GALGAS_string & in_mCppDeclarationString,
                                                          const GALGAS_bool & in_isPackage,
                                                          Compiler * /* inCompiler */) {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
  mProperty_mCppDeclarationString = in_mCppDeclarationString ;
  mProperty_isPackage = in_isPackage ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primitiveTypeForGeneration::GALGAS_primitiveTypeForGeneration (const cPtr_primitiveTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_primitiveTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_primitiveTypeForGeneration GALGAS_primitiveTypeForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                                     const GALGAS_string & in_mPredefinedTypeName,
                                                                                     const GALGAS_string & in_mCppDeclarationString,
                                                                                     const GALGAS_bool & in_isPackage
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_primitiveTypeForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_primitiveTypeForGeneration (in_mSelfTypeEntry, in_mPredefinedTypeName, in_mCppDeclarationString, in_isPackage COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_primitiveTypeForGeneration::readProperty_mPredefinedTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_primitiveTypeForGeneration * p = (cPtr_primitiveTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primitiveTypeForGeneration) ;
    return p->mProperty_mPredefinedTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_primitiveTypeForGeneration::readProperty_mCppDeclarationString (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_primitiveTypeForGeneration * p = (cPtr_primitiveTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primitiveTypeForGeneration) ;
    return p->mProperty_mCppDeclarationString ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_primitiveTypeForGeneration::readProperty_isPackage (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_primitiveTypeForGeneration * p = (cPtr_primitiveTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primitiveTypeForGeneration) ;
    return p->mProperty_isPackage ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @primitiveTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_primitiveTypeForGeneration::cPtr_primitiveTypeForGeneration (const GALGAS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                  const GALGAS_string & in_mPredefinedTypeName,
                                                                  const GALGAS_string & in_mCppDeclarationString,
                                                                  const GALGAS_bool & in_isPackage
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mPredefinedTypeName (),
mProperty_mCppDeclarationString (),
mProperty_isPackage () {
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
  mProperty_mCppDeclarationString = in_mCppDeclarationString ;
  mProperty_isPackage = in_isPackage ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_primitiveTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primitiveTypeForGeneration ;
}

void cPtr_primitiveTypeForGeneration::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@primitiveTypeForGeneration:") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppDeclarationString.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isPackage.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_primitiveTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_primitiveTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mPredefinedTypeName, mProperty_mCppDeclarationString, mProperty_isPackage COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @primitiveTypeForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primitiveTypeForGeneration ("primitiveTypeForGeneration",
                                                                                  & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_primitiveTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primitiveTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_primitiveTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primitiveTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primitiveTypeForGeneration GALGAS_primitiveTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_primitiveTypeForGeneration result ;
  const GALGAS_primitiveTypeForGeneration * p = (const GALGAS_primitiveTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_primitiveTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primitiveTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_primitiveTypeForGeneration_2D_weak::objectCompare (const GALGAS_primitiveTypeForGeneration_2D_weak & inOperand) const {
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

GALGAS_primitiveTypeForGeneration_2D_weak::GALGAS_primitiveTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_primitiveTypeForGeneration_2D_weak & GALGAS_primitiveTypeForGeneration_2D_weak::operator = (const GALGAS_primitiveTypeForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primitiveTypeForGeneration_2D_weak::GALGAS_primitiveTypeForGeneration_2D_weak (const GALGAS_primitiveTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_primitiveTypeForGeneration_2D_weak GALGAS_primitiveTypeForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_primitiveTypeForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primitiveTypeForGeneration GALGAS_primitiveTypeForGeneration_2D_weak::bang_primitiveTypeForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_primitiveTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_primitiveTypeForGeneration) ;
      result = GALGAS_primitiveTypeForGeneration ((cPtr_primitiveTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @primitiveTypeForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_primitiveTypeForGeneration_2D_weak ("primitiveTypeForGeneration-weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_primitiveTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primitiveTypeForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_primitiveTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_primitiveTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_primitiveTypeForGeneration_2D_weak GALGAS_primitiveTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_primitiveTypeForGeneration_2D_weak result ;
  const GALGAS_primitiveTypeForGeneration_2D_weak * p = (const GALGAS_primitiveTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_primitiveTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("primitiveTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ifExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_ifExpressionForGeneration::cPtr_ifExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mIfExpression (),
mProperty_mThenExpression (),
mProperty_mElseExpression () {
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



ComparisonResult GALGAS_ifExpressionForGeneration::objectCompare (const GALGAS_ifExpressionForGeneration & inOperand) const {
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

GALGAS_ifExpressionForGeneration::GALGAS_ifExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_ifExpressionForGeneration GALGAS_ifExpressionForGeneration::
init_21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                          const GALGAS_location & in_mLocation,
                          const GALGAS_semanticExpressionForGeneration & in_mIfExpression,
                          const GALGAS_semanticExpressionForGeneration & in_mThenExpression,
                          const GALGAS_semanticExpressionForGeneration & in_mElseExpression,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_ifExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_ifExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->ifExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mIfExpression, in_mThenExpression, in_mElseExpression, inCompiler) ;
  const GALGAS_ifExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionForGeneration::
ifExpressionForGeneration_init_21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                    const GALGAS_location & in_mLocation,
                                                    const GALGAS_semanticExpressionForGeneration & in_mIfExpression,
                                                    const GALGAS_semanticExpressionForGeneration & in_mThenExpression,
                                                    const GALGAS_semanticExpressionForGeneration & in_mElseExpression,
                                                    Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mIfExpression = in_mIfExpression ;
  mProperty_mThenExpression = in_mThenExpression ;
  mProperty_mElseExpression = in_mElseExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionForGeneration::GALGAS_ifExpressionForGeneration (const cPtr_ifExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionForGeneration GALGAS_ifExpressionForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                   const GALGAS_location & in_mLocation,
                                                                                   const GALGAS_semanticExpressionForGeneration & in_mIfExpression,
                                                                                   const GALGAS_semanticExpressionForGeneration & in_mThenExpression,
                                                                                   const GALGAS_semanticExpressionForGeneration & in_mElseExpression
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_ifExpressionForGeneration (in_mResultType, in_mLocation, in_mIfExpression, in_mThenExpression, in_mElseExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_ifExpressionForGeneration::readProperty_mIfExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_ifExpressionForGeneration * p = (cPtr_ifExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionForGeneration) ;
    return p->mProperty_mIfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_ifExpressionForGeneration::readProperty_mThenExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_ifExpressionForGeneration * p = (cPtr_ifExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionForGeneration) ;
    return p->mProperty_mThenExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_ifExpressionForGeneration::readProperty_mElseExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_ifExpressionForGeneration * p = (cPtr_ifExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionForGeneration) ;
    return p->mProperty_mElseExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ifExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_ifExpressionForGeneration::cPtr_ifExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                const GALGAS_location & in_mLocation,
                                                                const GALGAS_semanticExpressionForGeneration & in_mIfExpression,
                                                                const GALGAS_semanticExpressionForGeneration & in_mThenExpression,
                                                                const GALGAS_semanticExpressionForGeneration & in_mElseExpression
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_ifExpressionForGeneration::classDescriptor (void) const {
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

acPtr_class * cPtr_ifExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ifExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mIfExpression, mProperty_mThenExpression, mProperty_mElseExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ifExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionForGeneration ("ifExpressionForGeneration",
                                                                                 & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionForGeneration GALGAS_ifExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionForGeneration result ;
  const GALGAS_ifExpressionForGeneration * p = (const GALGAS_ifExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @unaryMinusExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_unaryMinusExpressionForGeneration::cPtr_unaryMinusExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_unaryMinusExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_unaryMinusExpressionForGeneration::objectCompare (const GALGAS_unaryMinusExpressionForGeneration & inOperand) const {
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

GALGAS_unaryMinusExpressionForGeneration::GALGAS_unaryMinusExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_unaryMinusExpressionForGeneration GALGAS_unaryMinusExpressionForGeneration::
init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                  const GALGAS_location & in_mLocation,
                  const GALGAS_semanticExpressionForGeneration & in_mExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_unaryMinusExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_unaryMinusExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->unaryMinusExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mExpression, inCompiler) ;
  const GALGAS_unaryMinusExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionForGeneration::
unaryMinusExpressionForGeneration_init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                    const GALGAS_location & in_mLocation,
                                                    const GALGAS_semanticExpressionForGeneration & in_mExpression,
                                                    Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unaryMinusExpressionForGeneration::GALGAS_unaryMinusExpressionForGeneration (const cPtr_unaryMinusExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unaryMinusExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_unaryMinusExpressionForGeneration GALGAS_unaryMinusExpressionForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                   const GALGAS_location & in_mLocation,
                                                                                                   const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_unaryMinusExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_unaryMinusExpressionForGeneration (in_mResultType, in_mLocation, in_mExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_unaryMinusExpressionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_unaryMinusExpressionForGeneration * p = (cPtr_unaryMinusExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryMinusExpressionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @unaryMinusExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_unaryMinusExpressionForGeneration::cPtr_unaryMinusExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                const GALGAS_location & in_mLocation,
                                                                                const GALGAS_semanticExpressionForGeneration & in_mExpression
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mExpression () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_unaryMinusExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration ;
}

void cPtr_unaryMinusExpressionForGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@unaryMinusExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_unaryMinusExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_unaryMinusExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @unaryMinusExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration ("unaryMinusExpressionForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unaryMinusExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unaryMinusExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unaryMinusExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unaryMinusExpressionForGeneration GALGAS_unaryMinusExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_unaryMinusExpressionForGeneration result ;
  const GALGAS_unaryMinusExpressionForGeneration * p = (const GALGAS_unaryMinusExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_unaryMinusExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryMinusExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @varInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_varInExpressionAST::cPtr_varInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mVarName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_varInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_varInExpressionAST::objectCompare (const GALGAS_varInExpressionAST & inOperand) const {
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

GALGAS_varInExpressionAST::GALGAS_varInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_varInExpressionAST GALGAS_varInExpressionAST::
init_21_ (const GALGAS_lstring & in_mVarName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_varInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_varInExpressionAST (inCompiler COMMA_THERE)) ;
  object->varInExpressionAST_init_21_ (in_mVarName, inCompiler) ;
  const GALGAS_varInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionAST::
varInExpressionAST_init_21_ (const GALGAS_lstring & in_mVarName,
                             Compiler * /* inCompiler */) {
  mProperty_mVarName = in_mVarName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varInExpressionAST::GALGAS_varInExpressionAST (const cPtr_varInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_varInExpressionAST GALGAS_varInExpressionAST::class_func_new (const GALGAS_lstring & in_mVarName
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_varInExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_varInExpressionAST (in_mVarName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_varInExpressionAST::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_varInExpressionAST * p = (cPtr_varInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionAST) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @varInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_varInExpressionAST::cPtr_varInExpressionAST (const GALGAS_lstring & in_mVarName
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mVarName () {
  mProperty_mVarName = in_mVarName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_varInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionAST ;
}

void cPtr_varInExpressionAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@varInExpressionAST:") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_varInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_varInExpressionAST (mProperty_mVarName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @varInExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInExpressionAST ("varInExpressionAST",
                                                                          & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varInExpressionAST GALGAS_varInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_varInExpressionAST result ;
  const GALGAS_varInExpressionAST * p = (const GALGAS_varInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_varInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @varInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_varInExpressionForGeneration::cPtr_varInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mCppVarName (),
mProperty_mNameForCheckingFormalParameterUsing () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_varInExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mCppVarName.printNonNullClassInstanceProperties ("mCppVarName") ;
    mProperty_mNameForCheckingFormalParameterUsing.printNonNullClassInstanceProperties ("mNameForCheckingFormalParameterUsing") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_varInExpressionForGeneration::objectCompare (const GALGAS_varInExpressionForGeneration & inOperand) const {
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

GALGAS_varInExpressionForGeneration::GALGAS_varInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_varInExpressionForGeneration GALGAS_varInExpressionForGeneration::
init_21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                      const GALGAS_location & in_mLocation,
                      const GALGAS_string & in_mCppVarName,
                      const GALGAS_string & in_mNameForCheckingFormalParameterUsing,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_varInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_varInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->varInExpressionForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_mCppVarName, in_mNameForCheckingFormalParameterUsing, inCompiler) ;
  const GALGAS_varInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionForGeneration::
varInExpressionForGeneration_init_21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                   const GALGAS_location & in_mLocation,
                                                   const GALGAS_string & in_mCppVarName,
                                                   const GALGAS_string & in_mNameForCheckingFormalParameterUsing,
                                                   Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mCppVarName = in_mCppVarName ;
  mProperty_mNameForCheckingFormalParameterUsing = in_mNameForCheckingFormalParameterUsing ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varInExpressionForGeneration::GALGAS_varInExpressionForGeneration (const cPtr_varInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_varInExpressionForGeneration GALGAS_varInExpressionForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                         const GALGAS_location & in_mLocation,
                                                                                         const GALGAS_string & in_mCppVarName,
                                                                                         const GALGAS_string & in_mNameForCheckingFormalParameterUsing
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_varInExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_varInExpressionForGeneration (in_mResultType, in_mLocation, in_mCppVarName, in_mNameForCheckingFormalParameterUsing COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_varInExpressionForGeneration::readProperty_mCppVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_varInExpressionForGeneration * p = (cPtr_varInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionForGeneration) ;
    return p->mProperty_mCppVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_varInExpressionForGeneration::readProperty_mNameForCheckingFormalParameterUsing (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_varInExpressionForGeneration * p = (cPtr_varInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionForGeneration) ;
    return p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @varInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_varInExpressionForGeneration::cPtr_varInExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                      const GALGAS_location & in_mLocation,
                                                                      const GALGAS_string & in_mCppVarName,
                                                                      const GALGAS_string & in_mNameForCheckingFormalParameterUsing
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mCppVarName (),
mProperty_mNameForCheckingFormalParameterUsing () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mCppVarName = in_mCppVarName ;
  mProperty_mNameForCheckingFormalParameterUsing = in_mNameForCheckingFormalParameterUsing ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_varInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionForGeneration ;
}

void cPtr_varInExpressionForGeneration::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@varInExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_varInExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_varInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mCppVarName, mProperty_mNameForCheckingFormalParameterUsing COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @varInExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInExpressionForGeneration ("varInExpressionForGeneration",
                                                                                    & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varInExpressionForGeneration GALGAS_varInExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_varInExpressionForGeneration result ;
  const GALGAS_varInExpressionForGeneration * p = (const GALGAS_varInExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_varInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@actualOutputArgumentList initializerSignature'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_initializerSignature (const GALGAS_actualOutputArgumentList & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("init") ;
  const GALGAS_actualOutputArgumentList temp_0 = inObject ;
  cEnumerator_actualOutputArgumentList enumerator_1639 (temp_0, EnumerationOrder::up) ;
  while (enumerator_1639.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("!").add_operation (enumerator_1639.current (HERE).readProperty_mActualSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 32)) ;
    enumerator_1639.gotoNextObject () ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @trueExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_trueExpressionForGeneration::cPtr_trueExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_trueExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_trueExpressionForGeneration::objectCompare (const GALGAS_trueExpressionForGeneration & inOperand) const {
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

GALGAS_trueExpressionForGeneration::GALGAS_trueExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_trueExpressionForGeneration GALGAS_trueExpressionForGeneration::
init_21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
              const GALGAS_location & in_mLocation,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_trueExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_trueExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->trueExpressionForGeneration_init_21__21_ (in_mResultType, in_mLocation, inCompiler) ;
  const GALGAS_trueExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionForGeneration::
trueExpressionForGeneration_init_21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                          const GALGAS_location & in_mLocation,
                                          Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_trueExpressionForGeneration::GALGAS_trueExpressionForGeneration (const cPtr_trueExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_trueExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_trueExpressionForGeneration GALGAS_trueExpressionForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                       const GALGAS_location & in_mLocation
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_trueExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_trueExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @trueExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_trueExpressionForGeneration::cPtr_trueExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                    const GALGAS_location & in_mLocation
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_trueExpressionForGeneration::classDescriptor (void) const {
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

acPtr_class * cPtr_trueExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_trueExpressionForGeneration (mProperty_mResultType, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @trueExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_trueExpressionForGeneration ("trueExpressionForGeneration",
                                                                                   & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_trueExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_trueExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_trueExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_trueExpressionForGeneration GALGAS_trueExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_trueExpressionForGeneration result ;
  const GALGAS_trueExpressionForGeneration * p = (const GALGAS_trueExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_trueExpressionForGeneration *> (p)) {
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

cPtr_falseExpressionForGeneration::cPtr_falseExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_falseExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_falseExpressionForGeneration::objectCompare (const GALGAS_falseExpressionForGeneration & inOperand) const {
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

GALGAS_falseExpressionForGeneration::GALGAS_falseExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_falseExpressionForGeneration GALGAS_falseExpressionForGeneration::
init_21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
              const GALGAS_location & in_mLocation,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_falseExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_falseExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->falseExpressionForGeneration_init_21__21_ (in_mResultType, in_mLocation, inCompiler) ;
  const GALGAS_falseExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionForGeneration::
falseExpressionForGeneration_init_21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                           const GALGAS_location & in_mLocation,
                                           Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_falseExpressionForGeneration::GALGAS_falseExpressionForGeneration (const cPtr_falseExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_falseExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_falseExpressionForGeneration GALGAS_falseExpressionForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                         const GALGAS_location & in_mLocation
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_falseExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_falseExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @falseExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_falseExpressionForGeneration::cPtr_falseExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                      const GALGAS_location & in_mLocation
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_falseExpressionForGeneration::classDescriptor (void) const {
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

acPtr_class * cPtr_falseExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_falseExpressionForGeneration (mProperty_mResultType, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @falseExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_falseExpressionForGeneration ("falseExpressionForGeneration",
                                                                                    & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_falseExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_falseExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_falseExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_falseExpressionForGeneration GALGAS_falseExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_falseExpressionForGeneration result ;
  const GALGAS_falseExpressionForGeneration * p = (const GALGAS_falseExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_falseExpressionForGeneration *> (p)) {
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

GALGAS_bool cPtr_semanticExpressionForGeneration::getter_isTrueExpression (Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_isTrueExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isTrueExpression (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalStringExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_literalStringExpressionForGeneration::cPtr_literalStringExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mString () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalStringExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mString.printNonNullClassInstanceProperties ("mString") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_literalStringExpressionForGeneration::objectCompare (const GALGAS_literalStringExpressionForGeneration & inOperand) const {
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

GALGAS_literalStringExpressionForGeneration::GALGAS_literalStringExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_literalStringExpressionForGeneration GALGAS_literalStringExpressionForGeneration::
init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                  const GALGAS_location & in_mLocation,
                  const GALGAS_string & in_mString,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalStringExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalStringExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalStringExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mString, inCompiler) ;
  const GALGAS_literalStringExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionForGeneration::
literalStringExpressionForGeneration_init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                       const GALGAS_location & in_mLocation,
                                                       const GALGAS_string & in_mString,
                                                       Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mString = in_mString ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionForGeneration::GALGAS_literalStringExpressionForGeneration (const cPtr_literalStringExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalStringExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionForGeneration GALGAS_literalStringExpressionForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                         const GALGAS_location & in_mLocation,
                                                                                                         const GALGAS_string & in_mString
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_literalStringExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_literalStringExpressionForGeneration (in_mResultType, in_mLocation, in_mString COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_literalStringExpressionForGeneration::readProperty_mString (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_literalStringExpressionForGeneration * p = (cPtr_literalStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringExpressionForGeneration) ;
    return p->mProperty_mString ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalStringExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalStringExpressionForGeneration::cPtr_literalStringExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GALGAS_location & in_mLocation,
                                                                                      const GALGAS_string & in_mString
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mString () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mString = in_mString ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalStringExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringExpressionForGeneration ;
}

void cPtr_literalStringExpressionForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@literalStringExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mString.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalStringExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalStringExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mString COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @literalStringExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalStringExpressionForGeneration ("literalStringExpressionForGeneration",
                                                                                            & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalStringExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalStringExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalStringExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionForGeneration GALGAS_literalStringExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_literalStringExpressionForGeneration result ;
  const GALGAS_literalStringExpressionForGeneration * p = (const GALGAS_literalStringExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_literalStringExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalCharExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_literalCharExpressionAST::cPtr_literalCharExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mCharacter () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalCharExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mCharacter.printNonNullClassInstanceProperties ("mCharacter") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_literalCharExpressionAST::objectCompare (const GALGAS_literalCharExpressionAST & inOperand) const {
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

GALGAS_literalCharExpressionAST::GALGAS_literalCharExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_literalCharExpressionAST GALGAS_literalCharExpressionAST::
init_21_ (const GALGAS_lchar & in_mCharacter,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_literalCharExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_literalCharExpressionAST (inCompiler COMMA_THERE)) ;
  object->literalCharExpressionAST_init_21_ (in_mCharacter, inCompiler) ;
  const GALGAS_literalCharExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionAST::
literalCharExpressionAST_init_21_ (const GALGAS_lchar & in_mCharacter,
                                   Compiler * /* inCompiler */) {
  mProperty_mCharacter = in_mCharacter ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionAST::GALGAS_literalCharExpressionAST (const cPtr_literalCharExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalCharExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionAST GALGAS_literalCharExpressionAST::class_func_new (const GALGAS_lchar & in_mCharacter
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_literalCharExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_literalCharExpressionAST (in_mCharacter COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_literalCharExpressionAST::readProperty_mCharacter (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lchar () ;
  }else{
    cPtr_literalCharExpressionAST * p = (cPtr_literalCharExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalCharExpressionAST) ;
    return p->mProperty_mCharacter ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalCharExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalCharExpressionAST::cPtr_literalCharExpressionAST (const GALGAS_lchar & in_mCharacter
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mCharacter () {
  mProperty_mCharacter = in_mCharacter ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalCharExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionAST ;
}

void cPtr_literalCharExpressionAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@literalCharExpressionAST:") ;
  mProperty_mCharacter.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalCharExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalCharExpressionAST (mProperty_mCharacter COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @literalCharExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalCharExpressionAST ("literalCharExpressionAST",
                                                                                & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalCharExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalCharExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalCharExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionAST GALGAS_literalCharExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_literalCharExpressionAST result ;
  const GALGAS_literalCharExpressionAST * p = (const GALGAS_literalCharExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_literalCharExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalCharExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalCharExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_literalCharExpressionForGeneration::cPtr_literalCharExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mCharacter () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalCharExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mCharacter.printNonNullClassInstanceProperties ("mCharacter") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_literalCharExpressionForGeneration::objectCompare (const GALGAS_literalCharExpressionForGeneration & inOperand) const {
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

GALGAS_literalCharExpressionForGeneration::GALGAS_literalCharExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_literalCharExpressionForGeneration GALGAS_literalCharExpressionForGeneration::
init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                  const GALGAS_location & in_mLocation,
                  const GALGAS_char & in_mCharacter,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalCharExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalCharExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalCharExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mCharacter, inCompiler) ;
  const GALGAS_literalCharExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionForGeneration::
literalCharExpressionForGeneration_init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                     const GALGAS_location & in_mLocation,
                                                     const GALGAS_char & in_mCharacter,
                                                     Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mCharacter = in_mCharacter ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionForGeneration::GALGAS_literalCharExpressionForGeneration (const cPtr_literalCharExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalCharExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionForGeneration GALGAS_literalCharExpressionForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                     const GALGAS_location & in_mLocation,
                                                                                                     const GALGAS_char & in_mCharacter
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_literalCharExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_literalCharExpressionForGeneration (in_mResultType, in_mLocation, in_mCharacter COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_char GALGAS_literalCharExpressionForGeneration::readProperty_mCharacter (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_char () ;
  }else{
    cPtr_literalCharExpressionForGeneration * p = (cPtr_literalCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalCharExpressionForGeneration) ;
    return p->mProperty_mCharacter ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalCharExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalCharExpressionForGeneration::cPtr_literalCharExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                  const GALGAS_location & in_mLocation,
                                                                                  const GALGAS_char & in_mCharacter
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mCharacter () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mCharacter = in_mCharacter ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalCharExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionForGeneration ;
}

void cPtr_literalCharExpressionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@literalCharExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCharacter.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalCharExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalCharExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mCharacter COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @literalCharExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalCharExpressionForGeneration ("literalCharExpressionForGeneration",
                                                                                          & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalCharExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalCharExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalCharExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalCharExpressionForGeneration GALGAS_literalCharExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalCharExpressionForGeneration result ;
  const GALGAS_literalCharExpressionForGeneration * p = (const GALGAS_literalCharExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_literalCharExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalCharExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalDoubleExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_literalDoubleExpressionAST::cPtr_literalDoubleExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalDoubleExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_literalDoubleExpressionAST::objectCompare (const GALGAS_literalDoubleExpressionAST & inOperand) const {
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

GALGAS_literalDoubleExpressionAST::GALGAS_literalDoubleExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_literalDoubleExpressionAST GALGAS_literalDoubleExpressionAST::
init_21_ (const GALGAS_ldouble & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_literalDoubleExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_literalDoubleExpressionAST (inCompiler COMMA_THERE)) ;
  object->literalDoubleExpressionAST_init_21_ (in_mValue, inCompiler) ;
  const GALGAS_literalDoubleExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionAST::
literalDoubleExpressionAST_init_21_ (const GALGAS_ldouble & in_mValue,
                                     Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionAST::GALGAS_literalDoubleExpressionAST (const cPtr_literalDoubleExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalDoubleExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionAST GALGAS_literalDoubleExpressionAST::class_func_new (const GALGAS_ldouble & in_mValue
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_literalDoubleExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_literalDoubleExpressionAST (in_mValue COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ldouble GALGAS_literalDoubleExpressionAST::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ldouble () ;
  }else{
    cPtr_literalDoubleExpressionAST * p = (cPtr_literalDoubleExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalDoubleExpressionAST) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalDoubleExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalDoubleExpressionAST::cPtr_literalDoubleExpressionAST (const GALGAS_ldouble & in_mValue
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalDoubleExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalDoubleExpressionAST ;
}

void cPtr_literalDoubleExpressionAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@literalDoubleExpressionAST:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalDoubleExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalDoubleExpressionAST (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @literalDoubleExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalDoubleExpressionAST ("literalDoubleExpressionAST",
                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalDoubleExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalDoubleExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalDoubleExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalDoubleExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionAST GALGAS_literalDoubleExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalDoubleExpressionAST result ;
  const GALGAS_literalDoubleExpressionAST * p = (const GALGAS_literalDoubleExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_literalDoubleExpressionAST *> (p)) {
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

cPtr_literalDoubleExpressionForGeneration::cPtr_literalDoubleExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalDoubleExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_literalDoubleExpressionForGeneration::objectCompare (const GALGAS_literalDoubleExpressionForGeneration & inOperand) const {
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

GALGAS_literalDoubleExpressionForGeneration::GALGAS_literalDoubleExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_literalDoubleExpressionForGeneration GALGAS_literalDoubleExpressionForGeneration::
init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                  const GALGAS_location & in_mLocation,
                  const GALGAS_double & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalDoubleExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalDoubleExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalDoubleExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GALGAS_literalDoubleExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionForGeneration::
literalDoubleExpressionForGeneration_init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                       const GALGAS_location & in_mLocation,
                                                       const GALGAS_double & in_mValue,
                                                       Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionForGeneration::GALGAS_literalDoubleExpressionForGeneration (const cPtr_literalDoubleExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalDoubleExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionForGeneration GALGAS_literalDoubleExpressionForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                         const GALGAS_location & in_mLocation,
                                                                                                         const GALGAS_double & in_mValue
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_literalDoubleExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_literalDoubleExpressionForGeneration (in_mResultType, in_mLocation, in_mValue COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_double GALGAS_literalDoubleExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_double () ;
  }else{
    cPtr_literalDoubleExpressionForGeneration * p = (cPtr_literalDoubleExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalDoubleExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalDoubleExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalDoubleExpressionForGeneration::cPtr_literalDoubleExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GALGAS_location & in_mLocation,
                                                                                      const GALGAS_double & in_mValue
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalDoubleExpressionForGeneration::classDescriptor (void) const {
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

acPtr_class * cPtr_literalDoubleExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalDoubleExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @literalDoubleExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration ("literalDoubleExpressionForGeneration",
                                                                                            & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalDoubleExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalDoubleExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalDoubleExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalDoubleExpressionForGeneration GALGAS_literalDoubleExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_literalDoubleExpressionForGeneration result ;
  const GALGAS_literalDoubleExpressionForGeneration * p = (const GALGAS_literalDoubleExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_literalDoubleExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalDoubleExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalBigIntExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_literalBigIntExpressionAST::cPtr_literalBigIntExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalBigIntExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_literalBigIntExpressionAST::objectCompare (const GALGAS_literalBigIntExpressionAST & inOperand) const {
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

GALGAS_literalBigIntExpressionAST::GALGAS_literalBigIntExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_literalBigIntExpressionAST GALGAS_literalBigIntExpressionAST::
init_21_ (const GALGAS_lbigint & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_literalBigIntExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_literalBigIntExpressionAST (inCompiler COMMA_THERE)) ;
  object->literalBigIntExpressionAST_init_21_ (in_mValue, inCompiler) ;
  const GALGAS_literalBigIntExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionAST::
literalBigIntExpressionAST_init_21_ (const GALGAS_lbigint & in_mValue,
                                     Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalBigIntExpressionAST::GALGAS_literalBigIntExpressionAST (const cPtr_literalBigIntExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalBigIntExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_literalBigIntExpressionAST GALGAS_literalBigIntExpressionAST::class_func_new (const GALGAS_lbigint & in_mValue
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_literalBigIntExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_literalBigIntExpressionAST (in_mValue COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lbigint GALGAS_literalBigIntExpressionAST::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lbigint () ;
  }else{
    cPtr_literalBigIntExpressionAST * p = (cPtr_literalBigIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalBigIntExpressionAST) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalBigIntExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalBigIntExpressionAST::cPtr_literalBigIntExpressionAST (const GALGAS_lbigint & in_mValue
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalBigIntExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBigIntExpressionAST ;
}

void cPtr_literalBigIntExpressionAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@literalBigIntExpressionAST:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalBigIntExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalBigIntExpressionAST (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @literalBigIntExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalBigIntExpressionAST ("literalBigIntExpressionAST",
                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalBigIntExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBigIntExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalBigIntExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalBigIntExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalBigIntExpressionAST GALGAS_literalBigIntExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalBigIntExpressionAST result ;
  const GALGAS_literalBigIntExpressionAST * p = (const GALGAS_literalBigIntExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_literalBigIntExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalBigIntExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalUIntExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_literalUIntExpressionForGeneration::cPtr_literalUIntExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalUIntExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_literalUIntExpressionForGeneration::objectCompare (const GALGAS_literalUIntExpressionForGeneration & inOperand) const {
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

GALGAS_literalUIntExpressionForGeneration::GALGAS_literalUIntExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_literalUIntExpressionForGeneration GALGAS_literalUIntExpressionForGeneration::
init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                  const GALGAS_location & in_mLocation,
                  const GALGAS_uint & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalUIntExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalUIntExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalUIntExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GALGAS_literalUIntExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalUIntExpressionForGeneration::
literalUIntExpressionForGeneration_init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                     const GALGAS_location & in_mLocation,
                                                     const GALGAS_uint & in_mValue,
                                                     Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalUIntExpressionForGeneration::GALGAS_literalUIntExpressionForGeneration (const cPtr_literalUIntExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalUIntExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_literalUIntExpressionForGeneration GALGAS_literalUIntExpressionForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                     const GALGAS_location & in_mLocation,
                                                                                                     const GALGAS_uint & in_mValue
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_literalUIntExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_literalUIntExpressionForGeneration (in_mResultType, in_mLocation, in_mValue COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_literalUIntExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_literalUIntExpressionForGeneration * p = (cPtr_literalUIntExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalUIntExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalUIntExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalUIntExpressionForGeneration::cPtr_literalUIntExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                  const GALGAS_location & in_mLocation,
                                                                                  const GALGAS_uint & in_mValue
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalUIntExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration ;
}

void cPtr_literalUIntExpressionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@literalUIntExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalUIntExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalUIntExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @literalUIntExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration ("literalUIntExpressionForGeneration",
                                                                                          & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalUIntExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalUIntExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalUIntExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalUIntExpressionForGeneration GALGAS_literalUIntExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalUIntExpressionForGeneration result ;
  const GALGAS_literalUIntExpressionForGeneration * p = (const GALGAS_literalUIntExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_literalUIntExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalUIntExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalUInt_36__34_ExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_literalUInt_36__34_ExpressionForGeneration::cPtr_literalUInt_36__34_ExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalUInt_36__34_ExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_literalUInt_36__34_ExpressionForGeneration::objectCompare (const GALGAS_literalUInt_36__34_ExpressionForGeneration & inOperand) const {
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

GALGAS_literalUInt_36__34_ExpressionForGeneration::GALGAS_literalUInt_36__34_ExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_literalUInt_36__34_ExpressionForGeneration GALGAS_literalUInt_36__34_ExpressionForGeneration::
init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                  const GALGAS_location & in_mLocation,
                  const GALGAS_uint_36__34_ & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalUInt_36__34_ExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalUInt_36__34_ExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalUInt_36__34_ExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GALGAS_literalUInt_36__34_ExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalUInt_36__34_ExpressionForGeneration::
literalUInt_36__34_ExpressionForGeneration_init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                             const GALGAS_location & in_mLocation,
                                                             const GALGAS_uint_36__34_ & in_mValue,
                                                             Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalUInt_36__34_ExpressionForGeneration::GALGAS_literalUInt_36__34_ExpressionForGeneration (const cPtr_literalUInt_36__34_ExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalUInt_36__34_ExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_literalUInt_36__34_ExpressionForGeneration GALGAS_literalUInt_36__34_ExpressionForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                                     const GALGAS_location & in_mLocation,
                                                                                                                     const GALGAS_uint_36__34_ & in_mValue
                                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_literalUInt_36__34_ExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_literalUInt_36__34_ExpressionForGeneration (in_mResultType, in_mLocation, in_mValue COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_ GALGAS_literalUInt_36__34_ExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint_36__34_ () ;
  }else{
    cPtr_literalUInt_36__34_ExpressionForGeneration * p = (cPtr_literalUInt_36__34_ExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalUInt_36__34_ExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalUInt64ExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalUInt_36__34_ExpressionForGeneration::cPtr_literalUInt_36__34_ExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                  const GALGAS_location & in_mLocation,
                                                                                                  const GALGAS_uint_36__34_ & in_mValue
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalUInt_36__34_ExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration ;
}

void cPtr_literalUInt_36__34_ExpressionForGeneration::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@literalUInt64ExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalUInt_36__34_ExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalUInt_36__34_ExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @literalUInt64ExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration ("literalUInt64ExpressionForGeneration",
                                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalUInt_36__34_ExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalUInt_36__34_ExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalUInt_36__34_ExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalUInt_36__34_ExpressionForGeneration GALGAS_literalUInt_36__34_ExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalUInt_36__34_ExpressionForGeneration result ;
  const GALGAS_literalUInt_36__34_ExpressionForGeneration * p = (const GALGAS_literalUInt_36__34_ExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_literalUInt_36__34_ExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalUInt64ExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalSIntExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_literalSIntExpressionForGeneration::cPtr_literalSIntExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalSIntExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_literalSIntExpressionForGeneration::objectCompare (const GALGAS_literalSIntExpressionForGeneration & inOperand) const {
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

GALGAS_literalSIntExpressionForGeneration::GALGAS_literalSIntExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_literalSIntExpressionForGeneration GALGAS_literalSIntExpressionForGeneration::
init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                  const GALGAS_location & in_mLocation,
                  const GALGAS_sint & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalSIntExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalSIntExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalSIntExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GALGAS_literalSIntExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalSIntExpressionForGeneration::
literalSIntExpressionForGeneration_init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                     const GALGAS_location & in_mLocation,
                                                     const GALGAS_sint & in_mValue,
                                                     Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalSIntExpressionForGeneration::GALGAS_literalSIntExpressionForGeneration (const cPtr_literalSIntExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalSIntExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_literalSIntExpressionForGeneration GALGAS_literalSIntExpressionForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                     const GALGAS_location & in_mLocation,
                                                                                                     const GALGAS_sint & in_mValue
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_literalSIntExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_literalSIntExpressionForGeneration (in_mResultType, in_mLocation, in_mValue COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sint GALGAS_literalSIntExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_sint () ;
  }else{
    cPtr_literalSIntExpressionForGeneration * p = (cPtr_literalSIntExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalSIntExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalSIntExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalSIntExpressionForGeneration::cPtr_literalSIntExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                  const GALGAS_location & in_mLocation,
                                                                                  const GALGAS_sint & in_mValue
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalSIntExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration ;
}

void cPtr_literalSIntExpressionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@literalSIntExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalSIntExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalSIntExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @literalSIntExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration ("literalSIntExpressionForGeneration",
                                                                                          & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalSIntExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalSIntExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalSIntExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalSIntExpressionForGeneration GALGAS_literalSIntExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalSIntExpressionForGeneration result ;
  const GALGAS_literalSIntExpressionForGeneration * p = (const GALGAS_literalSIntExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_literalSIntExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalSIntExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalSInt_36__34_ExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_literalSInt_36__34_ExpressionForGeneration::cPtr_literalSInt_36__34_ExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalSInt_36__34_ExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_literalSInt_36__34_ExpressionForGeneration::objectCompare (const GALGAS_literalSInt_36__34_ExpressionForGeneration & inOperand) const {
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

GALGAS_literalSInt_36__34_ExpressionForGeneration::GALGAS_literalSInt_36__34_ExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_literalSInt_36__34_ExpressionForGeneration GALGAS_literalSInt_36__34_ExpressionForGeneration::
init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                  const GALGAS_location & in_mLocation,
                  const GALGAS_sint_36__34_ & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalSInt_36__34_ExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalSInt_36__34_ExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalSInt_36__34_ExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GALGAS_literalSInt_36__34_ExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalSInt_36__34_ExpressionForGeneration::
literalSInt_36__34_ExpressionForGeneration_init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                             const GALGAS_location & in_mLocation,
                                                             const GALGAS_sint_36__34_ & in_mValue,
                                                             Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalSInt_36__34_ExpressionForGeneration::GALGAS_literalSInt_36__34_ExpressionForGeneration (const cPtr_literalSInt_36__34_ExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalSInt_36__34_ExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_literalSInt_36__34_ExpressionForGeneration GALGAS_literalSInt_36__34_ExpressionForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                                     const GALGAS_location & in_mLocation,
                                                                                                                     const GALGAS_sint_36__34_ & in_mValue
                                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_literalSInt_36__34_ExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_literalSInt_36__34_ExpressionForGeneration (in_mResultType, in_mLocation, in_mValue COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_ GALGAS_literalSInt_36__34_ExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_sint_36__34_ () ;
  }else{
    cPtr_literalSInt_36__34_ExpressionForGeneration * p = (cPtr_literalSInt_36__34_ExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalSInt_36__34_ExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalSInt64ExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalSInt_36__34_ExpressionForGeneration::cPtr_literalSInt_36__34_ExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                  const GALGAS_location & in_mLocation,
                                                                                                  const GALGAS_sint_36__34_ & in_mValue
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalSInt_36__34_ExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration ;
}

void cPtr_literalSInt_36__34_ExpressionForGeneration::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@literalSInt64ExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalSInt_36__34_ExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalSInt_36__34_ExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @literalSInt64ExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration ("literalSInt64ExpressionForGeneration",
                                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalSInt_36__34_ExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalSInt_36__34_ExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalSInt_36__34_ExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalSInt_36__34_ExpressionForGeneration GALGAS_literalSInt_36__34_ExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalSInt_36__34_ExpressionForGeneration result ;
  const GALGAS_literalSInt_36__34_ExpressionForGeneration * p = (const GALGAS_literalSInt_36__34_ExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_literalSInt_36__34_ExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalSInt64ExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalBigIntExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_literalBigIntExpressionForGeneration::cPtr_literalBigIntExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalBigIntExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_literalBigIntExpressionForGeneration::objectCompare (const GALGAS_literalBigIntExpressionForGeneration & inOperand) const {
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

GALGAS_literalBigIntExpressionForGeneration::GALGAS_literalBigIntExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_literalBigIntExpressionForGeneration GALGAS_literalBigIntExpressionForGeneration::
init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                  const GALGAS_location & in_mLocation,
                  const GALGAS_bigint & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalBigIntExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalBigIntExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalBigIntExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GALGAS_literalBigIntExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionForGeneration::
literalBigIntExpressionForGeneration_init_21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                       const GALGAS_location & in_mLocation,
                                                       const GALGAS_bigint & in_mValue,
                                                       Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalBigIntExpressionForGeneration::GALGAS_literalBigIntExpressionForGeneration (const cPtr_literalBigIntExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalBigIntExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_literalBigIntExpressionForGeneration GALGAS_literalBigIntExpressionForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                         const GALGAS_location & in_mLocation,
                                                                                                         const GALGAS_bigint & in_mValue
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_literalBigIntExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_literalBigIntExpressionForGeneration (in_mResultType, in_mLocation, in_mValue COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bigint GALGAS_literalBigIntExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bigint () ;
  }else{
    cPtr_literalBigIntExpressionForGeneration * p = (cPtr_literalBigIntExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalBigIntExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalBigIntExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalBigIntExpressionForGeneration::cPtr_literalBigIntExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GALGAS_location & in_mLocation,
                                                                                      const GALGAS_bigint & in_mValue
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalBigIntExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration ;
}

void cPtr_literalBigIntExpressionForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@literalBigIntExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalBigIntExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalBigIntExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @literalBigIntExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration ("literalBigIntExpressionForGeneration",
                                                                                            & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalBigIntExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalBigIntExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalBigIntExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalBigIntExpressionForGeneration GALGAS_literalBigIntExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_literalBigIntExpressionForGeneration result ;
  const GALGAS_literalBigIntExpressionForGeneration * p = (const GALGAS_literalBigIntExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_literalBigIntExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalBigIntExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @comparisonExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_comparisonExpressionForGeneration::cPtr_comparisonExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mComparison (),
mProperty_mRightExpression () {
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



ComparisonResult GALGAS_comparisonExpressionForGeneration::objectCompare (const GALGAS_comparisonExpressionForGeneration & inOperand) const {
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

GALGAS_comparisonExpressionForGeneration::GALGAS_comparisonExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_comparisonExpressionForGeneration GALGAS_comparisonExpressionForGeneration::
init_21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                          const GALGAS_location & in_mLocation,
                          const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                          const GALGAS_comparison & in_mComparison,
                          const GALGAS_semanticExpressionForGeneration & in_mRightExpression,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_comparisonExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_comparisonExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->comparisonExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mLeftExpression, in_mComparison, in_mRightExpression, inCompiler) ;
  const GALGAS_comparisonExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionForGeneration::
comparisonExpressionForGeneration_init_21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                            const GALGAS_location & in_mLocation,
                                                            const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                            const GALGAS_comparison & in_mComparison,
                                                            const GALGAS_semanticExpressionForGeneration & in_mRightExpression,
                                                            Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mComparison = in_mComparison ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonExpressionForGeneration::GALGAS_comparisonExpressionForGeneration (const cPtr_comparisonExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_comparisonExpressionForGeneration GALGAS_comparisonExpressionForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                   const GALGAS_location & in_mLocation,
                                                                                                   const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                                   const GALGAS_comparison & in_mComparison,
                                                                                                   const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_comparisonExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_comparisonExpressionForGeneration (in_mResultType, in_mLocation, in_mLeftExpression, in_mComparison, in_mRightExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_comparisonExpressionForGeneration::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_comparisonExpressionForGeneration * p = (cPtr_comparisonExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionForGeneration) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparisonExpressionForGeneration::readProperty_mComparison (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_comparison () ;
  }else{
    cPtr_comparisonExpressionForGeneration * p = (cPtr_comparisonExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionForGeneration) ;
    return p->mProperty_mComparison ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_comparisonExpressionForGeneration::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_comparisonExpressionForGeneration * p = (cPtr_comparisonExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionForGeneration) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @comparisonExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_comparisonExpressionForGeneration::cPtr_comparisonExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                const GALGAS_location & in_mLocation,
                                                                                const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                const GALGAS_comparison & in_mComparison,
                                                                                const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_comparisonExpressionForGeneration::classDescriptor (void) const {
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

acPtr_class * cPtr_comparisonExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_comparisonExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mComparison, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @comparisonExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonExpressionForGeneration ("comparisonExpressionForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_comparisonExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_comparisonExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonExpressionForGeneration GALGAS_comparisonExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_comparisonExpressionForGeneration result ;
  const GALGAS_comparisonExpressionForGeneration * p = (const GALGAS_comparisonExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_comparisonExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @binaryOperatorExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_binaryOperatorExpressionForGeneration::cPtr_binaryOperatorExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mOperator (),
mProperty_mRightExpression () {
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



ComparisonResult GALGAS_binaryOperatorExpressionForGeneration::objectCompare (const GALGAS_binaryOperatorExpressionForGeneration & inOperand) const {
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

GALGAS_binaryOperatorExpressionForGeneration::GALGAS_binaryOperatorExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_binaryOperatorExpressionForGeneration GALGAS_binaryOperatorExpressionForGeneration::
init_21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                          const GALGAS_location & in_mLocation,
                          const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                          const GALGAS_binaryOperator & in_mOperator,
                          const GALGAS_semanticExpressionForGeneration & in_mRightExpression,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_binaryOperatorExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_binaryOperatorExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->binaryOperatorExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mLeftExpression, in_mOperator, in_mRightExpression, inCompiler) ;
  const GALGAS_binaryOperatorExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_binaryOperatorExpressionForGeneration::
binaryOperatorExpressionForGeneration_init_21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                const GALGAS_location & in_mLocation,
                                                                const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                const GALGAS_binaryOperator & in_mOperator,
                                                                const GALGAS_semanticExpressionForGeneration & in_mRightExpression,
                                                                Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mOperator = in_mOperator ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_binaryOperatorExpressionForGeneration::GALGAS_binaryOperatorExpressionForGeneration (const cPtr_binaryOperatorExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_binaryOperatorExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_binaryOperatorExpressionForGeneration GALGAS_binaryOperatorExpressionForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                           const GALGAS_location & in_mLocation,
                                                                                                           const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                                           const GALGAS_binaryOperator & in_mOperator,
                                                                                                           const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_binaryOperatorExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_binaryOperatorExpressionForGeneration (in_mResultType, in_mLocation, in_mLeftExpression, in_mOperator, in_mRightExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_binaryOperatorExpressionForGeneration::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_binaryOperatorExpressionForGeneration * p = (cPtr_binaryOperatorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperatorExpressionForGeneration) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperatorExpressionForGeneration::readProperty_mOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_binaryOperator () ;
  }else{
    cPtr_binaryOperatorExpressionForGeneration * p = (cPtr_binaryOperatorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperatorExpressionForGeneration) ;
    return p->mProperty_mOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_binaryOperatorExpressionForGeneration::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_binaryOperatorExpressionForGeneration * p = (cPtr_binaryOperatorExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_binaryOperatorExpressionForGeneration) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @binaryOperatorExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_binaryOperatorExpressionForGeneration::cPtr_binaryOperatorExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                        const GALGAS_location & in_mLocation,
                                                                                        const GALGAS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                        const GALGAS_binaryOperator & in_mOperator,
                                                                                        const GALGAS_semanticExpressionForGeneration & in_mRightExpression
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_binaryOperatorExpressionForGeneration::classDescriptor (void) const {
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

acPtr_class * cPtr_binaryOperatorExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_binaryOperatorExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mOperator, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @binaryOperatorExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_binaryOperatorExpressionForGeneration ("binaryOperatorExpressionForGeneration",
                                                                                             & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_binaryOperatorExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperatorExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_binaryOperatorExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_binaryOperatorExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_binaryOperatorExpressionForGeneration GALGAS_binaryOperatorExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_binaryOperatorExpressionForGeneration result ;
  const GALGAS_binaryOperatorExpressionForGeneration * p = (const GALGAS_binaryOperatorExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_binaryOperatorExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binaryOperatorExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @testDynamicClassInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_testDynamicClassInExpressionAST::cPtr_testDynamicClassInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mEndOfReceiverExpression (),
mProperty_mTypeComparisonKind (),
mProperty_mTypeName () {
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



ComparisonResult GALGAS_testDynamicClassInExpressionAST::objectCompare (const GALGAS_testDynamicClassInExpressionAST & inOperand) const {
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

GALGAS_testDynamicClassInExpressionAST::GALGAS_testDynamicClassInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_testDynamicClassInExpressionAST GALGAS_testDynamicClassInExpressionAST::
init_21__21__21__21_ (const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                      const GALGAS_location & in_mEndOfReceiverExpression,
                      const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                      const GALGAS_lstring & in_mTypeName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_testDynamicClassInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_testDynamicClassInExpressionAST (inCompiler COMMA_THERE)) ;
  object->testDynamicClassInExpressionAST_init_21__21__21__21_ (in_mReceiverExpression, in_mEndOfReceiverExpression, in_mTypeComparisonKind, in_mTypeName, inCompiler) ;
  const GALGAS_testDynamicClassInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionAST::
testDynamicClassInExpressionAST_init_21__21__21__21_ (const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                                      const GALGAS_location & in_mEndOfReceiverExpression,
                                                      const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                      const GALGAS_lstring & in_mTypeName,
                                                      Compiler * /* inCompiler */) {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mEndOfReceiverExpression = in_mEndOfReceiverExpression ;
  mProperty_mTypeComparisonKind = in_mTypeComparisonKind ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_testDynamicClassInExpressionAST::GALGAS_testDynamicClassInExpressionAST (const cPtr_testDynamicClassInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_testDynamicClassInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_testDynamicClassInExpressionAST GALGAS_testDynamicClassInExpressionAST::class_func_new (const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                                                                               const GALGAS_location & in_mEndOfReceiverExpression,
                                                                                               const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                               const GALGAS_lstring & in_mTypeName
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_testDynamicClassInExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_testDynamicClassInExpressionAST (in_mReceiverExpression, in_mEndOfReceiverExpression, in_mTypeComparisonKind, in_mTypeName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_testDynamicClassInExpressionAST::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_testDynamicClassInExpressionAST * p = (cPtr_testDynamicClassInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_testDynamicClassInExpressionAST::readProperty_mEndOfReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_testDynamicClassInExpressionAST * p = (cPtr_testDynamicClassInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
    return p->mProperty_mEndOfReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_dynamicTypeComparisonKind GALGAS_testDynamicClassInExpressionAST::readProperty_mTypeComparisonKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_dynamicTypeComparisonKind () ;
  }else{
    cPtr_testDynamicClassInExpressionAST * p = (cPtr_testDynamicClassInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
    return p->mProperty_mTypeComparisonKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_testDynamicClassInExpressionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_testDynamicClassInExpressionAST * p = (cPtr_testDynamicClassInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @testDynamicClassInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_testDynamicClassInExpressionAST::cPtr_testDynamicClassInExpressionAST (const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                                                            const GALGAS_location & in_mEndOfReceiverExpression,
                                                                            const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                            const GALGAS_lstring & in_mTypeName
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
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

const C_galgas_type_descriptor * cPtr_testDynamicClassInExpressionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_testDynamicClassInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_testDynamicClassInExpressionAST (mProperty_mReceiverExpression, mProperty_mEndOfReceiverExpression, mProperty_mTypeComparisonKind, mProperty_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @testDynamicClassInExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST ("testDynamicClassInExpressionAST",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_testDynamicClassInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_testDynamicClassInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_testDynamicClassInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_testDynamicClassInExpressionAST GALGAS_testDynamicClassInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_testDynamicClassInExpressionAST result ;
  const GALGAS_testDynamicClassInExpressionAST * p = (const GALGAS_testDynamicClassInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_testDynamicClassInExpressionAST *> (p)) {
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

cPtr_castInExpressionAST::cPtr_castInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mEndOfReceiverExpression (),
mProperty_mTypeName () {
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



ComparisonResult GALGAS_castInExpressionAST::objectCompare (const GALGAS_castInExpressionAST & inOperand) const {
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

GALGAS_castInExpressionAST::GALGAS_castInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_castInExpressionAST GALGAS_castInExpressionAST::
init_21__21__21_ (const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                  const GALGAS_location & in_mEndOfReceiverExpression,
                  const GALGAS_lstring & in_mTypeName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_castInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_castInExpressionAST (inCompiler COMMA_THERE)) ;
  object->castInExpressionAST_init_21__21__21_ (in_mReceiverExpression, in_mEndOfReceiverExpression, in_mTypeName, inCompiler) ;
  const GALGAS_castInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionAST::
castInExpressionAST_init_21__21__21_ (const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                      const GALGAS_location & in_mEndOfReceiverExpression,
                                      const GALGAS_lstring & in_mTypeName,
                                      Compiler * /* inCompiler */) {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mEndOfReceiverExpression = in_mEndOfReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInExpressionAST::GALGAS_castInExpressionAST (const cPtr_castInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_castInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_castInExpressionAST GALGAS_castInExpressionAST::class_func_new (const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                                                       const GALGAS_location & in_mEndOfReceiverExpression,
                                                                       const GALGAS_lstring & in_mTypeName
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_castInExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_castInExpressionAST (in_mReceiverExpression, in_mEndOfReceiverExpression, in_mTypeName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_castInExpressionAST::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_castInExpressionAST * p = (cPtr_castInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_castInExpressionAST::readProperty_mEndOfReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_castInExpressionAST * p = (cPtr_castInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionAST) ;
    return p->mProperty_mEndOfReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_castInExpressionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_castInExpressionAST * p = (cPtr_castInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @castInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_castInExpressionAST::cPtr_castInExpressionAST (const GALGAS_semanticExpressionAST & in_mReceiverExpression,
                                                    const GALGAS_location & in_mEndOfReceiverExpression,
                                                    const GALGAS_lstring & in_mTypeName
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mReceiverExpression (),
mProperty_mEndOfReceiverExpression (),
mProperty_mTypeName () {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mEndOfReceiverExpression = in_mEndOfReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_castInExpressionAST::classDescriptor (void) const {
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

acPtr_class * cPtr_castInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_castInExpressionAST (mProperty_mReceiverExpression, mProperty_mEndOfReceiverExpression, mProperty_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @castInExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInExpressionAST ("castInExpressionAST",
                                                                           & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_castInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_castInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_castInExpressionAST GALGAS_castInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_castInExpressionAST result ;
  const GALGAS_castInExpressionAST * p = (const GALGAS_castInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_castInExpressionAST *> (p)) {
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

cPtr_testDynamicClassInExpressionForGeneration::cPtr_testDynamicClassInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mTypeComparisonKind (),
mProperty_mCastType () {
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



ComparisonResult GALGAS_testDynamicClassInExpressionForGeneration::objectCompare (const GALGAS_testDynamicClassInExpressionForGeneration & inOperand) const {
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

GALGAS_testDynamicClassInExpressionForGeneration::GALGAS_testDynamicClassInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_testDynamicClassInExpressionForGeneration GALGAS_testDynamicClassInExpressionForGeneration::
init_21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                          const GALGAS_location & in_mLocation,
                          const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                          const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                          const GALGAS_unifiedTypeMapEntry & in_mCastType,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_testDynamicClassInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_testDynamicClassInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->testDynamicClassInExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mReceiverExpression, in_mTypeComparisonKind, in_mCastType, inCompiler) ;
  const GALGAS_testDynamicClassInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionForGeneration::
testDynamicClassInExpressionForGeneration_init_21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                    const GALGAS_location & in_mLocation,
                                                                    const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                    const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                    const GALGAS_unifiedTypeMapEntry & in_mCastType,
                                                                    Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mTypeComparisonKind = in_mTypeComparisonKind ;
  mProperty_mCastType = in_mCastType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_testDynamicClassInExpressionForGeneration::GALGAS_testDynamicClassInExpressionForGeneration (const cPtr_testDynamicClassInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_testDynamicClassInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_testDynamicClassInExpressionForGeneration GALGAS_testDynamicClassInExpressionForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                                   const GALGAS_location & in_mLocation,
                                                                                                                   const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                                                   const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                                   const GALGAS_unifiedTypeMapEntry & in_mCastType
                                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_testDynamicClassInExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_testDynamicClassInExpressionForGeneration (in_mResultType, in_mLocation, in_mReceiverExpression, in_mTypeComparisonKind, in_mCastType COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_testDynamicClassInExpressionForGeneration::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_testDynamicClassInExpressionForGeneration * p = (cPtr_testDynamicClassInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_dynamicTypeComparisonKind GALGAS_testDynamicClassInExpressionForGeneration::readProperty_mTypeComparisonKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_dynamicTypeComparisonKind () ;
  }else{
    cPtr_testDynamicClassInExpressionForGeneration * p = (cPtr_testDynamicClassInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionForGeneration) ;
    return p->mProperty_mTypeComparisonKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_testDynamicClassInExpressionForGeneration::readProperty_mCastType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_testDynamicClassInExpressionForGeneration * p = (cPtr_testDynamicClassInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionForGeneration) ;
    return p->mProperty_mCastType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @testDynamicClassInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_testDynamicClassInExpressionForGeneration::cPtr_testDynamicClassInExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                const GALGAS_location & in_mLocation,
                                                                                                const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                                const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                const GALGAS_unifiedTypeMapEntry & in_mCastType
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_testDynamicClassInExpressionForGeneration::classDescriptor (void) const {
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

acPtr_class * cPtr_testDynamicClassInExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_testDynamicClassInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mReceiverExpression, mProperty_mTypeComparisonKind, mProperty_mCastType COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @testDynamicClassInExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration ("testDynamicClassInExpressionForGeneration",
                                                                                                 & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_testDynamicClassInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_testDynamicClassInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_testDynamicClassInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_testDynamicClassInExpressionForGeneration GALGAS_testDynamicClassInExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_testDynamicClassInExpressionForGeneration result ;
  const GALGAS_testDynamicClassInExpressionForGeneration * p = (const GALGAS_testDynamicClassInExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_testDynamicClassInExpressionForGeneration *> (p)) {
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

cPtr_extractObjectInExpressionForGeneration::cPtr_extractObjectInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mTypeName () {
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



ComparisonResult GALGAS_extractObjectInExpressionForGeneration::objectCompare (const GALGAS_extractObjectInExpressionForGeneration & inOperand) const {
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

GALGAS_extractObjectInExpressionForGeneration::GALGAS_extractObjectInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_extractObjectInExpressionForGeneration GALGAS_extractObjectInExpressionForGeneration::
init_21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                      const GALGAS_location & in_mLocation,
                      const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                      const GALGAS_string & in_mTypeName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_extractObjectInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_extractObjectInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->extractObjectInExpressionForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_mReceiverExpression, in_mTypeName, inCompiler) ;
  const GALGAS_extractObjectInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_extractObjectInExpressionForGeneration::
extractObjectInExpressionForGeneration_init_21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                             const GALGAS_location & in_mLocation,
                                                             const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                             const GALGAS_string & in_mTypeName,
                                                             Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extractObjectInExpressionForGeneration::GALGAS_extractObjectInExpressionForGeneration (const cPtr_extractObjectInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extractObjectInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_extractObjectInExpressionForGeneration GALGAS_extractObjectInExpressionForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                             const GALGAS_location & in_mLocation,
                                                                                                             const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                                             const GALGAS_string & in_mTypeName
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_extractObjectInExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_extractObjectInExpressionForGeneration (in_mResultType, in_mLocation, in_mReceiverExpression, in_mTypeName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionForGeneration GALGAS_extractObjectInExpressionForGeneration::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionForGeneration () ;
  }else{
    cPtr_extractObjectInExpressionForGeneration * p = (cPtr_extractObjectInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extractObjectInExpressionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_extractObjectInExpressionForGeneration::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_extractObjectInExpressionForGeneration * p = (cPtr_extractObjectInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extractObjectInExpressionForGeneration) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @extractObjectInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_extractObjectInExpressionForGeneration::cPtr_extractObjectInExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                          const GALGAS_location & in_mLocation,
                                                                                          const GALGAS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                          const GALGAS_string & in_mTypeName
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mTypeName () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_extractObjectInExpressionForGeneration::classDescriptor (void) const {
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

acPtr_class * cPtr_extractObjectInExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_extractObjectInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mReceiverExpression, mProperty_mTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @extractObjectInExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration ("extractObjectInExpressionForGeneration",
                                                                                              & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extractObjectInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extractObjectInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extractObjectInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extractObjectInExpressionForGeneration GALGAS_extractObjectInExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_extractObjectInExpressionForGeneration result ;
  const GALGAS_extractObjectInExpressionForGeneration * p = (const GALGAS_extractObjectInExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extractObjectInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extractObjectInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @optionExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_optionExpressionAST::cPtr_optionExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName (),
mProperty_mOptionGetterName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOptionComponentName.printNonNullClassInstanceProperties ("mOptionComponentName") ;
    mProperty_mOptionEntryName.printNonNullClassInstanceProperties ("mOptionEntryName") ;
    mProperty_mOptionGetterName.printNonNullClassInstanceProperties ("mOptionGetterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_optionExpressionAST::objectCompare (const GALGAS_optionExpressionAST & inOperand) const {
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

GALGAS_optionExpressionAST::GALGAS_optionExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_optionExpressionAST GALGAS_optionExpressionAST::
init_21__21__21_ (const GALGAS_lstring & in_mOptionComponentName,
                  const GALGAS_lstring & in_mOptionEntryName,
                  const GALGAS_lstring & in_mOptionGetterName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_optionExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_optionExpressionAST (inCompiler COMMA_THERE)) ;
  object->optionExpressionAST_init_21__21__21_ (in_mOptionComponentName, in_mOptionEntryName, in_mOptionGetterName, inCompiler) ;
  const GALGAS_optionExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionExpressionAST::
optionExpressionAST_init_21__21__21_ (const GALGAS_lstring & in_mOptionComponentName,
                                      const GALGAS_lstring & in_mOptionEntryName,
                                      const GALGAS_lstring & in_mOptionGetterName,
                                      Compiler * /* inCompiler */) {
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
  mProperty_mOptionGetterName = in_mOptionGetterName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionExpressionAST::GALGAS_optionExpressionAST (const cPtr_optionExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_optionExpressionAST GALGAS_optionExpressionAST::class_func_new (const GALGAS_lstring & in_mOptionComponentName,
                                                                       const GALGAS_lstring & in_mOptionEntryName,
                                                                       const GALGAS_lstring & in_mOptionGetterName
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_optionExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_optionExpressionAST (in_mOptionComponentName, in_mOptionEntryName, in_mOptionGetterName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_optionExpressionAST::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_optionExpressionAST * p = (cPtr_optionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionExpressionAST) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_optionExpressionAST::readProperty_mOptionEntryName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_optionExpressionAST * p = (cPtr_optionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionExpressionAST) ;
    return p->mProperty_mOptionEntryName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_optionExpressionAST::readProperty_mOptionGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_optionExpressionAST * p = (cPtr_optionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionExpressionAST) ;
    return p->mProperty_mOptionGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_optionExpressionAST::cPtr_optionExpressionAST (const GALGAS_lstring & in_mOptionComponentName,
                                                    const GALGAS_lstring & in_mOptionEntryName,
                                                    const GALGAS_lstring & in_mOptionGetterName
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName (),
mProperty_mOptionGetterName () {
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
  mProperty_mOptionGetterName = in_mOptionGetterName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_optionExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionExpressionAST ;
}

void cPtr_optionExpressionAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@optionExpressionAST:") ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionEntryName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_optionExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionExpressionAST (mProperty_mOptionComponentName, mProperty_mOptionEntryName, mProperty_mOptionGetterName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @optionExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionExpressionAST ("optionExpressionAST",
                                                                           & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionExpressionAST GALGAS_optionExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_optionExpressionAST result ;
  const GALGAS_optionExpressionAST * p = (const GALGAS_optionExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_optionExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @optionValueExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_optionValueExpressionForGeneration::cPtr_optionValueExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mOptionComponentIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionValueExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOptionComponentIsPredefined.printNonNullClassInstanceProperties ("mOptionComponentIsPredefined") ;
    mProperty_mOptionComponentName.printNonNullClassInstanceProperties ("mOptionComponentName") ;
    mProperty_mOptionEntryName.printNonNullClassInstanceProperties ("mOptionEntryName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_optionValueExpressionForGeneration::objectCompare (const GALGAS_optionValueExpressionForGeneration & inOperand) const {
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

GALGAS_optionValueExpressionForGeneration::GALGAS_optionValueExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_optionValueExpressionForGeneration GALGAS_optionValueExpressionForGeneration::
init_21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                          const GALGAS_location & in_mLocation,
                          const GALGAS_bool & in_mOptionComponentIsPredefined,
                          const GALGAS_string & in_mOptionComponentName,
                          const GALGAS_string & in_mOptionEntryName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_optionValueExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_optionValueExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->optionValueExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mOptionComponentIsPredefined, in_mOptionComponentName, in_mOptionEntryName, inCompiler) ;
  const GALGAS_optionValueExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionValueExpressionForGeneration::
optionValueExpressionForGeneration_init_21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                             const GALGAS_location & in_mLocation,
                                                             const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                             const GALGAS_string & in_mOptionComponentName,
                                                             const GALGAS_string & in_mOptionEntryName,
                                                             Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mOptionComponentIsPredefined = in_mOptionComponentIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionValueExpressionForGeneration::GALGAS_optionValueExpressionForGeneration (const cPtr_optionValueExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionValueExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_optionValueExpressionForGeneration GALGAS_optionValueExpressionForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                     const GALGAS_location & in_mLocation,
                                                                                                     const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                                                                     const GALGAS_string & in_mOptionComponentName,
                                                                                                     const GALGAS_string & in_mOptionEntryName
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_optionValueExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_optionValueExpressionForGeneration (in_mResultType, in_mLocation, in_mOptionComponentIsPredefined, in_mOptionComponentName, in_mOptionEntryName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionValueExpressionForGeneration::readProperty_mOptionComponentIsPredefined (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_optionValueExpressionForGeneration * p = (cPtr_optionValueExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionValueExpressionForGeneration) ;
    return p->mProperty_mOptionComponentIsPredefined ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_optionValueExpressionForGeneration::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_optionValueExpressionForGeneration * p = (cPtr_optionValueExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionValueExpressionForGeneration) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_optionValueExpressionForGeneration::readProperty_mOptionEntryName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_optionValueExpressionForGeneration * p = (cPtr_optionValueExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionValueExpressionForGeneration) ;
    return p->mProperty_mOptionEntryName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionValueExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_optionValueExpressionForGeneration::cPtr_optionValueExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                  const GALGAS_location & in_mLocation,
                                                                                  const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                                                  const GALGAS_string & in_mOptionComponentName,
                                                                                  const GALGAS_string & in_mOptionEntryName
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mOptionComponentIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mOptionComponentIsPredefined = in_mOptionComponentIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_optionValueExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionValueExpressionForGeneration ;
}

void cPtr_optionValueExpressionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@optionValueExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentIsPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionEntryName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_optionValueExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionValueExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mOptionComponentIsPredefined, mProperty_mOptionComponentName, mProperty_mOptionEntryName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @optionValueExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionValueExpressionForGeneration ("optionValueExpressionForGeneration",
                                                                                          & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionValueExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionValueExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionValueExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionValueExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionValueExpressionForGeneration GALGAS_optionValueExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_optionValueExpressionForGeneration result ;
  const GALGAS_optionValueExpressionForGeneration * p = (const GALGAS_optionValueExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_optionValueExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionValueExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @optionCharExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_optionCharExpressionForGeneration::cPtr_optionCharExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mOptionComponentIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionCharExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOptionComponentIsPredefined.printNonNullClassInstanceProperties ("mOptionComponentIsPredefined") ;
    mProperty_mOptionComponentName.printNonNullClassInstanceProperties ("mOptionComponentName") ;
    mProperty_mOptionEntryName.printNonNullClassInstanceProperties ("mOptionEntryName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_optionCharExpressionForGeneration::objectCompare (const GALGAS_optionCharExpressionForGeneration & inOperand) const {
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

GALGAS_optionCharExpressionForGeneration::GALGAS_optionCharExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_optionCharExpressionForGeneration GALGAS_optionCharExpressionForGeneration::
init_21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                          const GALGAS_location & in_mLocation,
                          const GALGAS_bool & in_mOptionComponentIsPredefined,
                          const GALGAS_string & in_mOptionComponentName,
                          const GALGAS_string & in_mOptionEntryName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_optionCharExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_optionCharExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->optionCharExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mOptionComponentIsPredefined, in_mOptionComponentName, in_mOptionEntryName, inCompiler) ;
  const GALGAS_optionCharExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionCharExpressionForGeneration::
optionCharExpressionForGeneration_init_21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                            const GALGAS_location & in_mLocation,
                                                            const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                            const GALGAS_string & in_mOptionComponentName,
                                                            const GALGAS_string & in_mOptionEntryName,
                                                            Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mOptionComponentIsPredefined = in_mOptionComponentIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionCharExpressionForGeneration::GALGAS_optionCharExpressionForGeneration (const cPtr_optionCharExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionCharExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_optionCharExpressionForGeneration GALGAS_optionCharExpressionForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                   const GALGAS_location & in_mLocation,
                                                                                                   const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                                                                   const GALGAS_string & in_mOptionComponentName,
                                                                                                   const GALGAS_string & in_mOptionEntryName
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_optionCharExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_optionCharExpressionForGeneration (in_mResultType, in_mLocation, in_mOptionComponentIsPredefined, in_mOptionComponentName, in_mOptionEntryName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionCharExpressionForGeneration::readProperty_mOptionComponentIsPredefined (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_optionCharExpressionForGeneration * p = (cPtr_optionCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCharExpressionForGeneration) ;
    return p->mProperty_mOptionComponentIsPredefined ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_optionCharExpressionForGeneration::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_optionCharExpressionForGeneration * p = (cPtr_optionCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCharExpressionForGeneration) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_optionCharExpressionForGeneration::readProperty_mOptionEntryName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_optionCharExpressionForGeneration * p = (cPtr_optionCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCharExpressionForGeneration) ;
    return p->mProperty_mOptionEntryName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionCharExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_optionCharExpressionForGeneration::cPtr_optionCharExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                const GALGAS_location & in_mLocation,
                                                                                const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                                                const GALGAS_string & in_mOptionComponentName,
                                                                                const GALGAS_string & in_mOptionEntryName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mOptionComponentIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mOptionComponentIsPredefined = in_mOptionComponentIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_optionCharExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionCharExpressionForGeneration ;
}

void cPtr_optionCharExpressionForGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@optionCharExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentIsPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionEntryName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_optionCharExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionCharExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mOptionComponentIsPredefined, mProperty_mOptionComponentName, mProperty_mOptionEntryName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @optionCharExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionCharExpressionForGeneration ("optionCharExpressionForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionCharExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionCharExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionCharExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionCharExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionCharExpressionForGeneration GALGAS_optionCharExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_optionCharExpressionForGeneration result ;
  const GALGAS_optionCharExpressionForGeneration * p = (const GALGAS_optionCharExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_optionCharExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionCharExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @optionStringExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_optionStringExpressionForGeneration::cPtr_optionStringExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mOptionComponentIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionStringExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOptionComponentIsPredefined.printNonNullClassInstanceProperties ("mOptionComponentIsPredefined") ;
    mProperty_mOptionComponentName.printNonNullClassInstanceProperties ("mOptionComponentName") ;
    mProperty_mOptionEntryName.printNonNullClassInstanceProperties ("mOptionEntryName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_optionStringExpressionForGeneration::objectCompare (const GALGAS_optionStringExpressionForGeneration & inOperand) const {
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

GALGAS_optionStringExpressionForGeneration::GALGAS_optionStringExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_optionStringExpressionForGeneration GALGAS_optionStringExpressionForGeneration::
init_21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                          const GALGAS_location & in_mLocation,
                          const GALGAS_bool & in_mOptionComponentIsPredefined,
                          const GALGAS_string & in_mOptionComponentName,
                          const GALGAS_string & in_mOptionEntryName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_optionStringExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_optionStringExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->optionStringExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mOptionComponentIsPredefined, in_mOptionComponentName, in_mOptionEntryName, inCompiler) ;
  const GALGAS_optionStringExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionStringExpressionForGeneration::
optionStringExpressionForGeneration_init_21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                              const GALGAS_location & in_mLocation,
                                                              const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                              const GALGAS_string & in_mOptionComponentName,
                                                              const GALGAS_string & in_mOptionEntryName,
                                                              Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mOptionComponentIsPredefined = in_mOptionComponentIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionStringExpressionForGeneration::GALGAS_optionStringExpressionForGeneration (const cPtr_optionStringExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionStringExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_optionStringExpressionForGeneration GALGAS_optionStringExpressionForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                       const GALGAS_location & in_mLocation,
                                                                                                       const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                                                                       const GALGAS_string & in_mOptionComponentName,
                                                                                                       const GALGAS_string & in_mOptionEntryName
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_optionStringExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_optionStringExpressionForGeneration (in_mResultType, in_mLocation, in_mOptionComponentIsPredefined, in_mOptionComponentName, in_mOptionEntryName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionStringExpressionForGeneration::readProperty_mOptionComponentIsPredefined (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_optionStringExpressionForGeneration * p = (cPtr_optionStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionStringExpressionForGeneration) ;
    return p->mProperty_mOptionComponentIsPredefined ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_optionStringExpressionForGeneration::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_optionStringExpressionForGeneration * p = (cPtr_optionStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionStringExpressionForGeneration) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_optionStringExpressionForGeneration::readProperty_mOptionEntryName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_optionStringExpressionForGeneration * p = (cPtr_optionStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionStringExpressionForGeneration) ;
    return p->mProperty_mOptionEntryName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionStringExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_optionStringExpressionForGeneration::cPtr_optionStringExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                    const GALGAS_location & in_mLocation,
                                                                                    const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                                                    const GALGAS_string & in_mOptionComponentName,
                                                                                    const GALGAS_string & in_mOptionEntryName
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mOptionComponentIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mOptionComponentIsPredefined = in_mOptionComponentIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_optionStringExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionStringExpressionForGeneration ;
}

void cPtr_optionStringExpressionForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@optionStringExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentIsPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionEntryName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_optionStringExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionStringExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mOptionComponentIsPredefined, mProperty_mOptionComponentName, mProperty_mOptionEntryName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @optionStringExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionStringExpressionForGeneration ("optionStringExpressionForGeneration",
                                                                                           & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionStringExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionStringExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionStringExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionStringExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionStringExpressionForGeneration GALGAS_optionStringExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_optionStringExpressionForGeneration result ;
  const GALGAS_optionStringExpressionForGeneration * p = (const GALGAS_optionStringExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_optionStringExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionStringExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @optionCommentExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_optionCommentExpressionForGeneration::cPtr_optionCommentExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mOptionComponentIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionCommentExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOptionComponentIsPredefined.printNonNullClassInstanceProperties ("mOptionComponentIsPredefined") ;
    mProperty_mOptionComponentName.printNonNullClassInstanceProperties ("mOptionComponentName") ;
    mProperty_mOptionEntryName.printNonNullClassInstanceProperties ("mOptionEntryName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_optionCommentExpressionForGeneration::objectCompare (const GALGAS_optionCommentExpressionForGeneration & inOperand) const {
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

GALGAS_optionCommentExpressionForGeneration::GALGAS_optionCommentExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_optionCommentExpressionForGeneration GALGAS_optionCommentExpressionForGeneration::
init_21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                          const GALGAS_location & in_mLocation,
                          const GALGAS_bool & in_mOptionComponentIsPredefined,
                          const GALGAS_string & in_mOptionComponentName,
                          const GALGAS_string & in_mOptionEntryName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_optionCommentExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_optionCommentExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->optionCommentExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mOptionComponentIsPredefined, in_mOptionComponentName, in_mOptionEntryName, inCompiler) ;
  const GALGAS_optionCommentExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionCommentExpressionForGeneration::
optionCommentExpressionForGeneration_init_21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                               const GALGAS_location & in_mLocation,
                                                               const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                               const GALGAS_string & in_mOptionComponentName,
                                                               const GALGAS_string & in_mOptionEntryName,
                                                               Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mOptionComponentIsPredefined = in_mOptionComponentIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionCommentExpressionForGeneration::GALGAS_optionCommentExpressionForGeneration (const cPtr_optionCommentExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionCommentExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_optionCommentExpressionForGeneration GALGAS_optionCommentExpressionForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                         const GALGAS_location & in_mLocation,
                                                                                                         const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                                                                         const GALGAS_string & in_mOptionComponentName,
                                                                                                         const GALGAS_string & in_mOptionEntryName
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_optionCommentExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_optionCommentExpressionForGeneration (in_mResultType, in_mLocation, in_mOptionComponentIsPredefined, in_mOptionComponentName, in_mOptionEntryName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionCommentExpressionForGeneration::readProperty_mOptionComponentIsPredefined (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_optionCommentExpressionForGeneration * p = (cPtr_optionCommentExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCommentExpressionForGeneration) ;
    return p->mProperty_mOptionComponentIsPredefined ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_optionCommentExpressionForGeneration::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_optionCommentExpressionForGeneration * p = (cPtr_optionCommentExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCommentExpressionForGeneration) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_optionCommentExpressionForGeneration::readProperty_mOptionEntryName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_optionCommentExpressionForGeneration * p = (cPtr_optionCommentExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCommentExpressionForGeneration) ;
    return p->mProperty_mOptionEntryName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionCommentExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_optionCommentExpressionForGeneration::cPtr_optionCommentExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GALGAS_location & in_mLocation,
                                                                                      const GALGAS_bool & in_mOptionComponentIsPredefined,
                                                                                      const GALGAS_string & in_mOptionComponentName,
                                                                                      const GALGAS_string & in_mOptionEntryName
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mOptionComponentIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mOptionComponentIsPredefined = in_mOptionComponentIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_optionCommentExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration ;
}

void cPtr_optionCommentExpressionForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@optionCommentExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentIsPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionEntryName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_optionCommentExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionCommentExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mOptionComponentIsPredefined, mProperty_mOptionComponentName, mProperty_mOptionEntryName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @optionCommentExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration ("optionCommentExpressionForGeneration",
                                                                                            & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionCommentExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionCommentExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionCommentExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionCommentExpressionForGeneration GALGAS_optionCommentExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_optionCommentExpressionForGeneration result ;
  const GALGAS_optionCommentExpressionForGeneration * p = (const GALGAS_optionCommentExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_optionCommentExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionCommentExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexiqueIntrospectionExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexiqueIntrospectionExpressionAST::cPtr_lexiqueIntrospectionExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mLexiqueComponentName (),
mProperty_mLexiqueGetterName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexiqueIntrospectionExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexiqueComponentName.printNonNullClassInstanceProperties ("mLexiqueComponentName") ;
    mProperty_mLexiqueGetterName.printNonNullClassInstanceProperties ("mLexiqueGetterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_lexiqueIntrospectionExpressionAST::objectCompare (const GALGAS_lexiqueIntrospectionExpressionAST & inOperand) const {
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

GALGAS_lexiqueIntrospectionExpressionAST::GALGAS_lexiqueIntrospectionExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexiqueIntrospectionExpressionAST GALGAS_lexiqueIntrospectionExpressionAST::
init_21__21_ (const GALGAS_lstring & in_mLexiqueComponentName,
              const GALGAS_lstring & in_mLexiqueGetterName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexiqueIntrospectionExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexiqueIntrospectionExpressionAST (inCompiler COMMA_THERE)) ;
  object->lexiqueIntrospectionExpressionAST_init_21__21_ (in_mLexiqueComponentName, in_mLexiqueGetterName, inCompiler) ;
  const GALGAS_lexiqueIntrospectionExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionExpressionAST::
lexiqueIntrospectionExpressionAST_init_21__21_ (const GALGAS_lstring & in_mLexiqueComponentName,
                                                const GALGAS_lstring & in_mLexiqueGetterName,
                                                Compiler * /* inCompiler */) {
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mLexiqueGetterName = in_mLexiqueGetterName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueIntrospectionExpressionAST::GALGAS_lexiqueIntrospectionExpressionAST (const cPtr_lexiqueIntrospectionExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexiqueIntrospectionExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueIntrospectionExpressionAST GALGAS_lexiqueIntrospectionExpressionAST::class_func_new (const GALGAS_lstring & in_mLexiqueComponentName,
                                                                                                   const GALGAS_lstring & in_mLexiqueGetterName
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueIntrospectionExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexiqueIntrospectionExpressionAST (in_mLexiqueComponentName, in_mLexiqueGetterName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexiqueIntrospectionExpressionAST::readProperty_mLexiqueComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexiqueIntrospectionExpressionAST * p = (cPtr_lexiqueIntrospectionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionExpressionAST) ;
    return p->mProperty_mLexiqueComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexiqueIntrospectionExpressionAST::readProperty_mLexiqueGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexiqueIntrospectionExpressionAST * p = (cPtr_lexiqueIntrospectionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionExpressionAST) ;
    return p->mProperty_mLexiqueGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexiqueIntrospectionExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexiqueIntrospectionExpressionAST::cPtr_lexiqueIntrospectionExpressionAST (const GALGAS_lstring & in_mLexiqueComponentName,
                                                                                const GALGAS_lstring & in_mLexiqueGetterName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mLexiqueComponentName (),
mProperty_mLexiqueGetterName () {
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mLexiqueGetterName = in_mLexiqueGetterName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexiqueIntrospectionExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST ;
}

void cPtr_lexiqueIntrospectionExpressionAST::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@lexiqueIntrospectionExpressionAST:") ;
  mProperty_mLexiqueComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexiqueIntrospectionExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexiqueIntrospectionExpressionAST (mProperty_mLexiqueComponentName, mProperty_mLexiqueGetterName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexiqueIntrospectionExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST ("lexiqueIntrospectionExpressionAST",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexiqueIntrospectionExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexiqueIntrospectionExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueIntrospectionExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueIntrospectionExpressionAST GALGAS_lexiqueIntrospectionExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueIntrospectionExpressionAST result ;
  const GALGAS_lexiqueIntrospectionExpressionAST * p = (const GALGAS_lexiqueIntrospectionExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexiqueIntrospectionExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueIntrospectionExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexiqueIntrospectionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexiqueIntrospectionForGeneration::cPtr_lexiqueIntrospectionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLexiqueComponentName (),
mProperty_mLexiqueGetterName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexiqueIntrospectionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLexiqueComponentName.printNonNullClassInstanceProperties ("mLexiqueComponentName") ;
    mProperty_mLexiqueGetterName.printNonNullClassInstanceProperties ("mLexiqueGetterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_lexiqueIntrospectionForGeneration::objectCompare (const GALGAS_lexiqueIntrospectionForGeneration & inOperand) const {
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

GALGAS_lexiqueIntrospectionForGeneration::GALGAS_lexiqueIntrospectionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexiqueIntrospectionForGeneration GALGAS_lexiqueIntrospectionForGeneration::
init_21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                      const GALGAS_location & in_mLocation,
                      const GALGAS_string & in_mLexiqueComponentName,
                      const GALGAS_string & in_mLexiqueGetterName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_lexiqueIntrospectionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_lexiqueIntrospectionForGeneration (inCompiler COMMA_THERE)) ;
  object->lexiqueIntrospectionForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_mLexiqueComponentName, in_mLexiqueGetterName, inCompiler) ;
  const GALGAS_lexiqueIntrospectionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionForGeneration::
lexiqueIntrospectionForGeneration_init_21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                        const GALGAS_location & in_mLocation,
                                                        const GALGAS_string & in_mLexiqueComponentName,
                                                        const GALGAS_string & in_mLexiqueGetterName,
                                                        Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mLexiqueGetterName = in_mLexiqueGetterName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueIntrospectionForGeneration::GALGAS_lexiqueIntrospectionForGeneration (const cPtr_lexiqueIntrospectionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexiqueIntrospectionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueIntrospectionForGeneration GALGAS_lexiqueIntrospectionForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                   const GALGAS_location & in_mLocation,
                                                                                                   const GALGAS_string & in_mLexiqueComponentName,
                                                                                                   const GALGAS_string & in_mLexiqueGetterName
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueIntrospectionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_lexiqueIntrospectionForGeneration (in_mResultType, in_mLocation, in_mLexiqueComponentName, in_mLexiqueGetterName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueIntrospectionForGeneration::readProperty_mLexiqueComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_lexiqueIntrospectionForGeneration * p = (cPtr_lexiqueIntrospectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionForGeneration) ;
    return p->mProperty_mLexiqueComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexiqueIntrospectionForGeneration::readProperty_mLexiqueGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_lexiqueIntrospectionForGeneration * p = (cPtr_lexiqueIntrospectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionForGeneration) ;
    return p->mProperty_mLexiqueGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexiqueIntrospectionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_lexiqueIntrospectionForGeneration::cPtr_lexiqueIntrospectionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                const GALGAS_location & in_mLocation,
                                                                                const GALGAS_string & in_mLexiqueComponentName,
                                                                                const GALGAS_string & in_mLexiqueGetterName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mLexiqueComponentName (),
mProperty_mLexiqueGetterName () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mLexiqueGetterName = in_mLexiqueGetterName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexiqueIntrospectionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration ;
}

void cPtr_lexiqueIntrospectionForGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@lexiqueIntrospectionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexiqueIntrospectionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexiqueIntrospectionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLexiqueComponentName, mProperty_mLexiqueGetterName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexiqueIntrospectionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration ("lexiqueIntrospectionForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexiqueIntrospectionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexiqueIntrospectionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueIntrospectionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexiqueIntrospectionForGeneration GALGAS_lexiqueIntrospectionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueIntrospectionForGeneration result ;
  const GALGAS_lexiqueIntrospectionForGeneration * p = (const GALGAS_lexiqueIntrospectionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexiqueIntrospectionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueIntrospectionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @filewrapperObjectInstanciationInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperObjectInstanciationInExpressionAST::cPtr_filewrapperObjectInstanciationInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mFilewrapperName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_filewrapperObjectInstanciationInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mFilewrapperName.printNonNullClassInstanceProperties ("mFilewrapperName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_filewrapperObjectInstanciationInExpressionAST::objectCompare (const GALGAS_filewrapperObjectInstanciationInExpressionAST & inOperand) const {
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

GALGAS_filewrapperObjectInstanciationInExpressionAST::GALGAS_filewrapperObjectInstanciationInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_filewrapperObjectInstanciationInExpressionAST GALGAS_filewrapperObjectInstanciationInExpressionAST::
init_21_ (const GALGAS_lstring & in_mFilewrapperName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_filewrapperObjectInstanciationInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_filewrapperObjectInstanciationInExpressionAST (inCompiler COMMA_THERE)) ;
  object->filewrapperObjectInstanciationInExpressionAST_init_21_ (in_mFilewrapperName, inCompiler) ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperObjectInstanciationInExpressionAST::
filewrapperObjectInstanciationInExpressionAST_init_21_ (const GALGAS_lstring & in_mFilewrapperName,
                                                        Compiler * /* inCompiler */) {
  mProperty_mFilewrapperName = in_mFilewrapperName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperObjectInstanciationInExpressionAST::GALGAS_filewrapperObjectInstanciationInExpressionAST (const cPtr_filewrapperObjectInstanciationInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperObjectInstanciationInExpressionAST GALGAS_filewrapperObjectInstanciationInExpressionAST::class_func_new (const GALGAS_lstring & in_mFilewrapperName
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperObjectInstanciationInExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_filewrapperObjectInstanciationInExpressionAST (in_mFilewrapperName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperObjectInstanciationInExpressionAST::readProperty_mFilewrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_filewrapperObjectInstanciationInExpressionAST * p = (cPtr_filewrapperObjectInstanciationInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperObjectInstanciationInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperObjectInstanciationInExpressionAST::cPtr_filewrapperObjectInstanciationInExpressionAST (const GALGAS_lstring & in_mFilewrapperName
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mFilewrapperName () {
  mProperty_mFilewrapperName = in_mFilewrapperName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_filewrapperObjectInstanciationInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST ;
}

void cPtr_filewrapperObjectInstanciationInExpressionAST::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@filewrapperObjectInstanciationInExpressionAST:") ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_filewrapperObjectInstanciationInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_filewrapperObjectInstanciationInExpressionAST (mProperty_mFilewrapperName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @filewrapperObjectInstanciationInExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST ("filewrapperObjectInstanciationInExpressionAST",
                                                                                                     & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperObjectInstanciationInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperObjectInstanciationInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperObjectInstanciationInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperObjectInstanciationInExpressionAST GALGAS_filewrapperObjectInstanciationInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperObjectInstanciationInExpressionAST result ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST * p = (const GALGAS_filewrapperObjectInstanciationInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_filewrapperObjectInstanciationInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperObjectInstanciationInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @filewrapperInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperInExpressionAST::cPtr_filewrapperInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperPath () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_filewrapperInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mFilewrapperName.printNonNullClassInstanceProperties ("mFilewrapperName") ;
    mProperty_mFilewrapperPath.printNonNullClassInstanceProperties ("mFilewrapperPath") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_filewrapperInExpressionAST::objectCompare (const GALGAS_filewrapperInExpressionAST & inOperand) const {
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

GALGAS_filewrapperInExpressionAST::GALGAS_filewrapperInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_filewrapperInExpressionAST GALGAS_filewrapperInExpressionAST::
init_21__21_ (const GALGAS_lstring & in_mFilewrapperName,
              const GALGAS_lstring & in_mFilewrapperPath,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_filewrapperInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_filewrapperInExpressionAST (inCompiler COMMA_THERE)) ;
  object->filewrapperInExpressionAST_init_21__21_ (in_mFilewrapperName, in_mFilewrapperPath, inCompiler) ;
  const GALGAS_filewrapperInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionAST::
filewrapperInExpressionAST_init_21__21_ (const GALGAS_lstring & in_mFilewrapperName,
                                         const GALGAS_lstring & in_mFilewrapperPath,
                                         Compiler * /* inCompiler */) {
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperPath = in_mFilewrapperPath ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperInExpressionAST::GALGAS_filewrapperInExpressionAST (const cPtr_filewrapperInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperInExpressionAST GALGAS_filewrapperInExpressionAST::class_func_new (const GALGAS_lstring & in_mFilewrapperName,
                                                                                     const GALGAS_lstring & in_mFilewrapperPath
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperInExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_filewrapperInExpressionAST (in_mFilewrapperName, in_mFilewrapperPath COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperInExpressionAST::readProperty_mFilewrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_filewrapperInExpressionAST * p = (cPtr_filewrapperInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionAST) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperInExpressionAST::readProperty_mFilewrapperPath (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_filewrapperInExpressionAST * p = (cPtr_filewrapperInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionAST) ;
    return p->mProperty_mFilewrapperPath ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperInExpressionAST::cPtr_filewrapperInExpressionAST (const GALGAS_lstring & in_mFilewrapperName,
                                                                  const GALGAS_lstring & in_mFilewrapperPath
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperPath () {
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperPath = in_mFilewrapperPath ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_filewrapperInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperInExpressionAST ;
}

void cPtr_filewrapperInExpressionAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@filewrapperInExpressionAST:") ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperPath.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_filewrapperInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_filewrapperInExpressionAST (mProperty_mFilewrapperName, mProperty_mFilewrapperPath COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @filewrapperInExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperInExpressionAST ("filewrapperInExpressionAST",
                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperInExpressionAST GALGAS_filewrapperInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperInExpressionAST result ;
  const GALGAS_filewrapperInExpressionAST * p = (const GALGAS_filewrapperInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_filewrapperInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @filewrapperTemplateInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperTemplateInExpressionAST::cPtr_filewrapperTemplateInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperTemplateName (),
mProperty_mExpressions () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_filewrapperTemplateInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mFilewrapperName.printNonNullClassInstanceProperties ("mFilewrapperName") ;
    mProperty_mFilewrapperTemplateName.printNonNullClassInstanceProperties ("mFilewrapperTemplateName") ;
    mProperty_mExpressions.printNonNullClassInstanceProperties ("mExpressions") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_filewrapperTemplateInExpressionAST::objectCompare (const GALGAS_filewrapperTemplateInExpressionAST & inOperand) const {
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

GALGAS_filewrapperTemplateInExpressionAST::GALGAS_filewrapperTemplateInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionAST GALGAS_filewrapperTemplateInExpressionAST::
init_21__21__21_ (const GALGAS_lstring & in_mFilewrapperName,
                  const GALGAS_lstring & in_mFilewrapperTemplateName,
                  const GALGAS_actualOutputArgumentList & in_mExpressions,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_filewrapperTemplateInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_filewrapperTemplateInExpressionAST (inCompiler COMMA_THERE)) ;
  object->filewrapperTemplateInExpressionAST_init_21__21__21_ (in_mFilewrapperName, in_mFilewrapperTemplateName, in_mExpressions, inCompiler) ;
  const GALGAS_filewrapperTemplateInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionAST::
filewrapperTemplateInExpressionAST_init_21__21__21_ (const GALGAS_lstring & in_mFilewrapperName,
                                                     const GALGAS_lstring & in_mFilewrapperTemplateName,
                                                     const GALGAS_actualOutputArgumentList & in_mExpressions,
                                                     Compiler * /* inCompiler */) {
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperTemplateName = in_mFilewrapperTemplateName ;
  mProperty_mExpressions = in_mExpressions ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionAST::GALGAS_filewrapperTemplateInExpressionAST (const cPtr_filewrapperTemplateInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperTemplateInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionAST GALGAS_filewrapperTemplateInExpressionAST::class_func_new (const GALGAS_lstring & in_mFilewrapperName,
                                                                                                     const GALGAS_lstring & in_mFilewrapperTemplateName,
                                                                                                     const GALGAS_actualOutputArgumentList & in_mExpressions
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateInExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_filewrapperTemplateInExpressionAST (in_mFilewrapperName, in_mFilewrapperTemplateName, in_mExpressions COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperTemplateInExpressionAST::readProperty_mFilewrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_filewrapperTemplateInExpressionAST * p = (cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperTemplateInExpressionAST::readProperty_mFilewrapperTemplateName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_filewrapperTemplateInExpressionAST * p = (cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
    return p->mProperty_mFilewrapperTemplateName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualOutputArgumentList GALGAS_filewrapperTemplateInExpressionAST::readProperty_mExpressions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_actualOutputArgumentList () ;
  }else{
    cPtr_filewrapperTemplateInExpressionAST * p = (cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
    return p->mProperty_mExpressions ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperTemplateInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperTemplateInExpressionAST::cPtr_filewrapperTemplateInExpressionAST (const GALGAS_lstring & in_mFilewrapperName,
                                                                                  const GALGAS_lstring & in_mFilewrapperTemplateName,
                                                                                  const GALGAS_actualOutputArgumentList & in_mExpressions
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperTemplateName (),
mProperty_mExpressions () {
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperTemplateName = in_mFilewrapperTemplateName ;
  mProperty_mExpressions = in_mExpressions ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_filewrapperTemplateInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST ;
}

void cPtr_filewrapperTemplateInExpressionAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@filewrapperTemplateInExpressionAST:") ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperTemplateName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_filewrapperTemplateInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_filewrapperTemplateInExpressionAST (mProperty_mFilewrapperName, mProperty_mFilewrapperTemplateName, mProperty_mExpressions COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @filewrapperTemplateInExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST ("filewrapperTemplateInExpressionAST",
                                                                                          & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperTemplateInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperTemplateInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperTemplateInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionAST GALGAS_filewrapperTemplateInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateInExpressionAST result ;
  const GALGAS_filewrapperTemplateInExpressionAST * p = (const GALGAS_filewrapperTemplateInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_filewrapperTemplateInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @filewrapperInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperInExpressionForGeneration::cPtr_filewrapperInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperPath () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_filewrapperInExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFilewrapperName.printNonNullClassInstanceProperties ("mFilewrapperName") ;
    mProperty_mFilewrapperPath.printNonNullClassInstanceProperties ("mFilewrapperPath") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_filewrapperInExpressionForGeneration::objectCompare (const GALGAS_filewrapperInExpressionForGeneration & inOperand) const {
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

GALGAS_filewrapperInExpressionForGeneration::GALGAS_filewrapperInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_filewrapperInExpressionForGeneration GALGAS_filewrapperInExpressionForGeneration::
init_21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                      const GALGAS_location & in_mLocation,
                      const GALGAS_string & in_mFilewrapperName,
                      const GALGAS_string & in_mFilewrapperPath,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_filewrapperInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_filewrapperInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->filewrapperInExpressionForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_mFilewrapperName, in_mFilewrapperPath, inCompiler) ;
  const GALGAS_filewrapperInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionForGeneration::
filewrapperInExpressionForGeneration_init_21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                           const GALGAS_location & in_mLocation,
                                                           const GALGAS_string & in_mFilewrapperName,
                                                           const GALGAS_string & in_mFilewrapperPath,
                                                           Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperPath = in_mFilewrapperPath ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperInExpressionForGeneration::GALGAS_filewrapperInExpressionForGeneration (const cPtr_filewrapperInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperInExpressionForGeneration GALGAS_filewrapperInExpressionForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                         const GALGAS_location & in_mLocation,
                                                                                                         const GALGAS_string & in_mFilewrapperName,
                                                                                                         const GALGAS_string & in_mFilewrapperPath
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperInExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_filewrapperInExpressionForGeneration (in_mResultType, in_mLocation, in_mFilewrapperName, in_mFilewrapperPath COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_filewrapperInExpressionForGeneration::readProperty_mFilewrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_filewrapperInExpressionForGeneration * p = (cPtr_filewrapperInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionForGeneration) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_filewrapperInExpressionForGeneration::readProperty_mFilewrapperPath (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_filewrapperInExpressionForGeneration * p = (cPtr_filewrapperInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionForGeneration) ;
    return p->mProperty_mFilewrapperPath ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperInExpressionForGeneration::cPtr_filewrapperInExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GALGAS_location & in_mLocation,
                                                                                      const GALGAS_string & in_mFilewrapperName,
                                                                                      const GALGAS_string & in_mFilewrapperPath
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperPath () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperPath = in_mFilewrapperPath ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_filewrapperInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration ;
}

void cPtr_filewrapperInExpressionForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@filewrapperInExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperPath.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_filewrapperInExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_filewrapperInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mFilewrapperName, mProperty_mFilewrapperPath COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @filewrapperInExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration ("filewrapperInExpressionForGeneration",
                                                                                            & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperInExpressionForGeneration GALGAS_filewrapperInExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperInExpressionForGeneration result ;
  const GALGAS_filewrapperInExpressionForGeneration * p = (const GALGAS_filewrapperInExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_filewrapperInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @filewrapperTemplateInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperTemplateInExpressionForGeneration::cPtr_filewrapperTemplateInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperTemplateName (),
mProperty_mActualOutputParameterList () {
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



ComparisonResult GALGAS_filewrapperTemplateInExpressionForGeneration::objectCompare (const GALGAS_filewrapperTemplateInExpressionForGeneration & inOperand) const {
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

GALGAS_filewrapperTemplateInExpressionForGeneration::GALGAS_filewrapperTemplateInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionForGeneration GALGAS_filewrapperTemplateInExpressionForGeneration::
init_21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                          const GALGAS_location & in_mLocation,
                          const GALGAS_string & in_mFilewrapperName,
                          const GALGAS_string & in_mFilewrapperTemplateName,
                          const GALGAS_semanticExpressionListForGeneration & in_mActualOutputParameterList,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_filewrapperTemplateInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_filewrapperTemplateInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->filewrapperTemplateInExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mFilewrapperName, in_mFilewrapperTemplateName, in_mActualOutputParameterList, inCompiler) ;
  const GALGAS_filewrapperTemplateInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionForGeneration::
filewrapperTemplateInExpressionForGeneration_init_21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                       const GALGAS_location & in_mLocation,
                                                                       const GALGAS_string & in_mFilewrapperName,
                                                                       const GALGAS_string & in_mFilewrapperTemplateName,
                                                                       const GALGAS_semanticExpressionListForGeneration & in_mActualOutputParameterList,
                                                                       Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperTemplateName = in_mFilewrapperTemplateName ;
  mProperty_mActualOutputParameterList = in_mActualOutputParameterList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionForGeneration::GALGAS_filewrapperTemplateInExpressionForGeneration (const cPtr_filewrapperTemplateInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperTemplateInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionForGeneration GALGAS_filewrapperTemplateInExpressionForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                                         const GALGAS_location & in_mLocation,
                                                                                                                         const GALGAS_string & in_mFilewrapperName,
                                                                                                                         const GALGAS_string & in_mFilewrapperTemplateName,
                                                                                                                         const GALGAS_semanticExpressionListForGeneration & in_mActualOutputParameterList
                                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateInExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_filewrapperTemplateInExpressionForGeneration (in_mResultType, in_mLocation, in_mFilewrapperName, in_mFilewrapperTemplateName, in_mActualOutputParameterList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_filewrapperTemplateInExpressionForGeneration::readProperty_mFilewrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_filewrapperTemplateInExpressionForGeneration * p = (cPtr_filewrapperTemplateInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionForGeneration) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_filewrapperTemplateInExpressionForGeneration::readProperty_mFilewrapperTemplateName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_filewrapperTemplateInExpressionForGeneration * p = (cPtr_filewrapperTemplateInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionForGeneration) ;
    return p->mProperty_mFilewrapperTemplateName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration GALGAS_filewrapperTemplateInExpressionForGeneration::readProperty_mActualOutputParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionListForGeneration () ;
  }else{
    cPtr_filewrapperTemplateInExpressionForGeneration * p = (cPtr_filewrapperTemplateInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionForGeneration) ;
    return p->mProperty_mActualOutputParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperTemplateInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperTemplateInExpressionForGeneration::cPtr_filewrapperTemplateInExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                      const GALGAS_location & in_mLocation,
                                                                                                      const GALGAS_string & in_mFilewrapperName,
                                                                                                      const GALGAS_string & in_mFilewrapperTemplateName,
                                                                                                      const GALGAS_semanticExpressionListForGeneration & in_mActualOutputParameterList
                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_filewrapperTemplateInExpressionForGeneration::classDescriptor (void) const {
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

acPtr_class * cPtr_filewrapperTemplateInExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_filewrapperTemplateInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mFilewrapperName, mProperty_mFilewrapperTemplateName, mProperty_mActualOutputParameterList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @filewrapperTemplateInExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionForGeneration ("filewrapperTemplateInExpressionForGeneration",
                                                                                                    & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperTemplateInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperTemplateInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperTemplateInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateInExpressionForGeneration GALGAS_filewrapperTemplateInExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateInExpressionForGeneration result ;
  const GALGAS_filewrapperTemplateInExpressionForGeneration * p = (const GALGAS_filewrapperTemplateInExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_filewrapperTemplateInExpressionForGeneration *> (p)) {
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

cPtr_filewrapperStaticPathInExpressionForGeneration::cPtr_filewrapperStaticPathInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperFileIndex (),
mProperty_mIsTextFile () {
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



ComparisonResult GALGAS_filewrapperStaticPathInExpressionForGeneration::objectCompare (const GALGAS_filewrapperStaticPathInExpressionForGeneration & inOperand) const {
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

GALGAS_filewrapperStaticPathInExpressionForGeneration::GALGAS_filewrapperStaticPathInExpressionForGeneration (void) :
GALGAS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_filewrapperStaticPathInExpressionForGeneration GALGAS_filewrapperStaticPathInExpressionForGeneration::
init_21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                          const GALGAS_location & in_mLocation,
                          const GALGAS_string & in_mFilewrapperName,
                          const GALGAS_uint & in_mFilewrapperFileIndex,
                          const GALGAS_bool & in_mIsTextFile,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_filewrapperStaticPathInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_filewrapperStaticPathInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->filewrapperStaticPathInExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mFilewrapperName, in_mFilewrapperFileIndex, in_mIsTextFile, inCompiler) ;
  const GALGAS_filewrapperStaticPathInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperStaticPathInExpressionForGeneration::
filewrapperStaticPathInExpressionForGeneration_init_21__21__21__21__21_ (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                         const GALGAS_location & in_mLocation,
                                                                         const GALGAS_string & in_mFilewrapperName,
                                                                         const GALGAS_uint & in_mFilewrapperFileIndex,
                                                                         const GALGAS_bool & in_mIsTextFile,
                                                                         Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperFileIndex = in_mFilewrapperFileIndex ;
  mProperty_mIsTextFile = in_mIsTextFile ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperStaticPathInExpressionForGeneration::GALGAS_filewrapperStaticPathInExpressionForGeneration (const cPtr_filewrapperStaticPathInExpressionForGeneration * inSourcePtr) :
GALGAS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperStaticPathInExpressionForGeneration GALGAS_filewrapperStaticPathInExpressionForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                                             const GALGAS_location & in_mLocation,
                                                                                                                             const GALGAS_string & in_mFilewrapperName,
                                                                                                                             const GALGAS_uint & in_mFilewrapperFileIndex,
                                                                                                                             const GALGAS_bool & in_mIsTextFile
                                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperStaticPathInExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_filewrapperStaticPathInExpressionForGeneration (in_mResultType, in_mLocation, in_mFilewrapperName, in_mFilewrapperFileIndex, in_mIsTextFile COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_filewrapperStaticPathInExpressionForGeneration::readProperty_mFilewrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_filewrapperStaticPathInExpressionForGeneration * p = (cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_filewrapperStaticPathInExpressionForGeneration::readProperty_mFilewrapperFileIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_filewrapperStaticPathInExpressionForGeneration * p = (cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
    return p->mProperty_mFilewrapperFileIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_filewrapperStaticPathInExpressionForGeneration::readProperty_mIsTextFile (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_filewrapperStaticPathInExpressionForGeneration * p = (cPtr_filewrapperStaticPathInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
    return p->mProperty_mIsTextFile ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperStaticPathInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperStaticPathInExpressionForGeneration::cPtr_filewrapperStaticPathInExpressionForGeneration (const GALGAS_unifiedTypeMapEntry & in_mResultType,
                                                                                                          const GALGAS_location & in_mLocation,
                                                                                                          const GALGAS_string & in_mFilewrapperName,
                                                                                                          const GALGAS_uint & in_mFilewrapperFileIndex,
                                                                                                          const GALGAS_bool & in_mIsTextFile
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_filewrapperStaticPathInExpressionForGeneration::classDescriptor (void) const {
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

acPtr_class * cPtr_filewrapperStaticPathInExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_filewrapperStaticPathInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mFilewrapperName, mProperty_mFilewrapperFileIndex, mProperty_mIsTextFile COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @filewrapperStaticPathInExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration ("filewrapperStaticPathInExpressionForGeneration",
                                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperStaticPathInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperStaticPathInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperStaticPathInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperStaticPathInExpressionForGeneration GALGAS_filewrapperStaticPathInExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperStaticPathInExpressionForGeneration result ;
  const GALGAS_filewrapperStaticPathInExpressionForGeneration * p = (const GALGAS_filewrapperStaticPathInExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_filewrapperStaticPathInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperStaticPathInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

