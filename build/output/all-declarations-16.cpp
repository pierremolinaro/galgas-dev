#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-16.h"

//--------------------------------------------------------------------------------------------------
// @lexicalStringNotMatchAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalStringNotMatchAST::objectCompare (const GGS_lexicalStringNotMatchAST & inOperand) const {
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

GGS_lexicalStringNotMatchAST::GGS_lexicalStringNotMatchAST (void) :
GGS_lexicalExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalStringNotMatchAST GGS_lexicalStringNotMatchAST::
init_21__21_ (const GGS_lstring & in_mString,
              const GGS_lstring & in_mErrorMessage,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalStringNotMatchAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalStringNotMatchAST (inCompiler COMMA_THERE)) ;
  object->lexicalStringNotMatchAST_init_21__21_ (in_mString, in_mErrorMessage, inCompiler) ;
  const GGS_lexicalStringNotMatchAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStringNotMatchAST::
lexicalStringNotMatchAST_init_21__21_ (const GGS_lstring & in_mString,
                                       const GGS_lstring & in_mErrorMessage,
                                       Compiler * /* inCompiler */) {
  mProperty_mString = in_mString ;
  mProperty_mErrorMessage = in_mErrorMessage ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringNotMatchAST::GGS_lexicalStringNotMatchAST (const cPtr_lexicalStringNotMatchAST * inSourcePtr) :
GGS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalStringNotMatchAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalStringNotMatchAST::readProperty_mString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalStringNotMatchAST * p = (cPtr_lexicalStringNotMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringNotMatchAST) ;
    return p->mProperty_mString ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalStringNotMatchAST::readProperty_mErrorMessage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalStringNotMatchAST * p = (cPtr_lexicalStringNotMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringNotMatchAST) ;
    return p->mProperty_mErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalStringNotMatchAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalStringNotMatchAST::cPtr_lexicalStringNotMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mString (),
mProperty_mErrorMessage () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalStringNotMatchAST::cPtr_lexicalStringNotMatchAST (const GGS_lstring & in_mString,
                                                              const GGS_lstring & in_mErrorMessage,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mString (),
mProperty_mErrorMessage () {
  mProperty_mString = in_mString ;
  mProperty_mErrorMessage = in_mErrorMessage ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalStringNotMatchAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_lexicalStringNotMatchAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalStringNotMatchAST (mProperty_mString, mProperty_mErrorMessage, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @lexicalStringNotMatchAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ("lexicalStringNotMatchAST",
                                                                             & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalStringNotMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalStringNotMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalStringNotMatchAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringNotMatchAST GGS_lexicalStringNotMatchAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalStringNotMatchAST result ;
  const GGS_lexicalStringNotMatchAST * p = (const GGS_lexicalStringNotMatchAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalStringNotMatchAST *> (p)) {
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

ComparisonResult GGS_lexicalSendTerminalByDefaultAST::objectCompare (const GGS_lexicalSendTerminalByDefaultAST & inOperand) const {
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

GGS_lexicalSendTerminalByDefaultAST::GGS_lexicalSendTerminalByDefaultAST (void) :
GGS_lexicalSendDefaultActionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalSendTerminalByDefaultAST GGS_lexicalSendTerminalByDefaultAST::
init_21_ (const GGS_lstring & in_mDefaultSentTerminal,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalSendTerminalByDefaultAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalSendTerminalByDefaultAST (inCompiler COMMA_THERE)) ;
  object->lexicalSendTerminalByDefaultAST_init_21_ (in_mDefaultSentTerminal, inCompiler) ;
  const GGS_lexicalSendTerminalByDefaultAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSendTerminalByDefaultAST::
lexicalSendTerminalByDefaultAST_init_21_ (const GGS_lstring & in_mDefaultSentTerminal,
                                          Compiler * /* inCompiler */) {
  mProperty_mDefaultSentTerminal = in_mDefaultSentTerminal ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendTerminalByDefaultAST::GGS_lexicalSendTerminalByDefaultAST (const cPtr_lexicalSendTerminalByDefaultAST * inSourcePtr) :
GGS_lexicalSendDefaultActionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalSendTerminalByDefaultAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalSendTerminalByDefaultAST::readProperty_mDefaultSentTerminal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalSendTerminalByDefaultAST * p = (cPtr_lexicalSendTerminalByDefaultAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSendTerminalByDefaultAST) ;
    return p->mProperty_mDefaultSentTerminal ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalSendTerminalByDefaultAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalSendTerminalByDefaultAST::cPtr_lexicalSendTerminalByDefaultAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalSendDefaultActionAST (inCompiler COMMA_THERE),
mProperty_mDefaultSentTerminal () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalSendTerminalByDefaultAST::cPtr_lexicalSendTerminalByDefaultAST (const GGS_lstring & in_mDefaultSentTerminal,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalSendDefaultActionAST (inCompiler COMMA_THERE),
mProperty_mDefaultSentTerminal () {
  mProperty_mDefaultSentTerminal = in_mDefaultSentTerminal ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalSendTerminalByDefaultAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ;
}

void cPtr_lexicalSendTerminalByDefaultAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalSendTerminalByDefaultAST:") ;
  mProperty_mDefaultSentTerminal.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalSendTerminalByDefaultAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalSendTerminalByDefaultAST (mProperty_mDefaultSentTerminal, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalSendTerminalByDefaultAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalSendDefaultActionAST::printNonNullClassInstanceProperties () ;
    mProperty_mDefaultSentTerminal.printNonNullClassInstanceProperties ("mDefaultSentTerminal") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalSendTerminalByDefaultAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ("lexicalSendTerminalByDefaultAST",
                                                                                    & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalSendTerminalByDefaultAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalSendTerminalByDefaultAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalSendTerminalByDefaultAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendTerminalByDefaultAST GGS_lexicalSendTerminalByDefaultAST::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexicalSendTerminalByDefaultAST result ;
  const GGS_lexicalSendTerminalByDefaultAST * p = (const GGS_lexicalSendTerminalByDefaultAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalSendTerminalByDefaultAST *> (p)) {
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

ComparisonResult GGS_lexicalErrorByDefaultAST::objectCompare (const GGS_lexicalErrorByDefaultAST & inOperand) const {
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

GGS_lexicalErrorByDefaultAST::GGS_lexicalErrorByDefaultAST (void) :
GGS_lexicalSendDefaultActionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalErrorByDefaultAST GGS_lexicalErrorByDefaultAST::
init_21_ (const GGS_lstring & in_mDefaultErrorMessageName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalErrorByDefaultAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalErrorByDefaultAST (inCompiler COMMA_THERE)) ;
  object->lexicalErrorByDefaultAST_init_21_ (in_mDefaultErrorMessageName, inCompiler) ;
  const GGS_lexicalErrorByDefaultAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalErrorByDefaultAST::
lexicalErrorByDefaultAST_init_21_ (const GGS_lstring & in_mDefaultErrorMessageName,
                                   Compiler * /* inCompiler */) {
  mProperty_mDefaultErrorMessageName = in_mDefaultErrorMessageName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorByDefaultAST::GGS_lexicalErrorByDefaultAST (const cPtr_lexicalErrorByDefaultAST * inSourcePtr) :
GGS_lexicalSendDefaultActionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalErrorByDefaultAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalErrorByDefaultAST::readProperty_mDefaultErrorMessageName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalErrorByDefaultAST * p = (cPtr_lexicalErrorByDefaultAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalErrorByDefaultAST) ;
    return p->mProperty_mDefaultErrorMessageName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalErrorByDefaultAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalErrorByDefaultAST::cPtr_lexicalErrorByDefaultAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalSendDefaultActionAST (inCompiler COMMA_THERE),
mProperty_mDefaultErrorMessageName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalErrorByDefaultAST::cPtr_lexicalErrorByDefaultAST (const GGS_lstring & in_mDefaultErrorMessageName,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalSendDefaultActionAST (inCompiler COMMA_THERE),
mProperty_mDefaultErrorMessageName () {
  mProperty_mDefaultErrorMessageName = in_mDefaultErrorMessageName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalErrorByDefaultAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ;
}

void cPtr_lexicalErrorByDefaultAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalErrorByDefaultAST:") ;
  mProperty_mDefaultErrorMessageName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalErrorByDefaultAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalErrorByDefaultAST (mProperty_mDefaultErrorMessageName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalErrorByDefaultAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalSendDefaultActionAST::printNonNullClassInstanceProperties () ;
    mProperty_mDefaultErrorMessageName.printNonNullClassInstanceProperties ("mDefaultErrorMessageName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalErrorByDefaultAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ("lexicalErrorByDefaultAST",
                                                                             & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalErrorByDefaultAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalErrorByDefaultAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalErrorByDefaultAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorByDefaultAST GGS_lexicalErrorByDefaultAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalErrorByDefaultAST result ;
  const GGS_lexicalErrorByDefaultAST * p = (const GGS_lexicalErrorByDefaultAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalErrorByDefaultAST *> (p)) {
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

ComparisonResult GGS_lexicalAttributeInputArgumentAST::objectCompare (const GGS_lexicalAttributeInputArgumentAST & inOperand) const {
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

GGS_lexicalAttributeInputArgumentAST::GGS_lexicalAttributeInputArgumentAST (void) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalAttributeInputArgumentAST GGS_lexicalAttributeInputArgumentAST::
init_21_ (const GGS_lstring & in_mAttributeName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalAttributeInputArgumentAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalAttributeInputArgumentAST (inCompiler COMMA_THERE)) ;
  object->lexicalAttributeInputArgumentAST_init_21_ (in_mAttributeName, inCompiler) ;
  const GGS_lexicalAttributeInputArgumentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputArgumentAST::
lexicalAttributeInputArgumentAST_init_21_ (const GGS_lstring & in_mAttributeName,
                                           Compiler * /* inCompiler */) {
  mProperty_mAttributeName = in_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputArgumentAST::GGS_lexicalAttributeInputArgumentAST (const cPtr_lexicalAttributeInputArgumentAST * inSourcePtr) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalAttributeInputArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalAttributeInputArgumentAST::readProperty_mAttributeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalAttributeInputArgumentAST * p = (cPtr_lexicalAttributeInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalAttributeInputArgumentAST) ;
    return p->mProperty_mAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalAttributeInputArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalAttributeInputArgumentAST::cPtr_lexicalAttributeInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (inCompiler COMMA_THERE),
mProperty_mAttributeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalAttributeInputArgumentAST::cPtr_lexicalAttributeInputArgumentAST (const GGS_lstring & in_mAttributeName,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (inCompiler COMMA_THERE),
mProperty_mAttributeName () {
  mProperty_mAttributeName = in_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalAttributeInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ;
}

void cPtr_lexicalAttributeInputArgumentAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalAttributeInputArgumentAST:") ;
  mProperty_mAttributeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalAttributeInputArgumentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalAttributeInputArgumentAST (mProperty_mAttributeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalAttributeInputArgumentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST::printNonNullClassInstanceProperties () ;
    mProperty_mAttributeName.printNonNullClassInstanceProperties ("mAttributeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalAttributeInputArgumentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ("lexicalAttributeInputArgumentAST",
                                                                                     & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalAttributeInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalAttributeInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalAttributeInputArgumentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputArgumentAST GGS_lexicalAttributeInputArgumentAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalAttributeInputArgumentAST result ;
  const GGS_lexicalAttributeInputArgumentAST * p = (const GGS_lexicalAttributeInputArgumentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalAttributeInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalFunctionInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalFunctionInputArgumentAST::objectCompare (const GGS_lexicalFunctionInputArgumentAST & inOperand) const {
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

GGS_lexicalFunctionInputArgumentAST::GGS_lexicalFunctionInputArgumentAST (void) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalFunctionInputArgumentAST GGS_lexicalFunctionInputArgumentAST::
init_21__21_ (const GGS_lstring & in_mFunctionName,
              const GGS_lexicalFunctionCallActualArgumentListAST & in_mFunctionActualArgumentList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalFunctionInputArgumentAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalFunctionInputArgumentAST (inCompiler COMMA_THERE)) ;
  object->lexicalFunctionInputArgumentAST_init_21__21_ (in_mFunctionName, in_mFunctionActualArgumentList, inCompiler) ;
  const GGS_lexicalFunctionInputArgumentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFunctionInputArgumentAST::
lexicalFunctionInputArgumentAST_init_21__21_ (const GGS_lstring & in_mFunctionName,
                                              const GGS_lexicalFunctionCallActualArgumentListAST & in_mFunctionActualArgumentList,
                                              Compiler * /* inCompiler */) {
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFunctionActualArgumentList = in_mFunctionActualArgumentList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionInputArgumentAST::GGS_lexicalFunctionInputArgumentAST (const cPtr_lexicalFunctionInputArgumentAST * inSourcePtr) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalFunctionInputArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalFunctionInputArgumentAST::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalFunctionInputArgumentAST * p = (cPtr_lexicalFunctionInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionInputArgumentAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionCallActualArgumentListAST GGS_lexicalFunctionInputArgumentAST::readProperty_mFunctionActualArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalFunctionCallActualArgumentListAST () ;
  }else{
    cPtr_lexicalFunctionInputArgumentAST * p = (cPtr_lexicalFunctionInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionInputArgumentAST) ;
    return p->mProperty_mFunctionActualArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalFunctionInputArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalFunctionInputArgumentAST::cPtr_lexicalFunctionInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mFunctionActualArgumentList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalFunctionInputArgumentAST::cPtr_lexicalFunctionInputArgumentAST (const GGS_lstring & in_mFunctionName,
                                                                            const GGS_lexicalFunctionCallActualArgumentListAST & in_mFunctionActualArgumentList,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mFunctionActualArgumentList () {
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFunctionActualArgumentList = in_mFunctionActualArgumentList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalFunctionInputArgumentAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_lexicalFunctionInputArgumentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalFunctionInputArgumentAST (mProperty_mFunctionName, mProperty_mFunctionActualArgumentList, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @lexicalFunctionInputArgumentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST ("lexicalFunctionInputArgumentAST",
                                                                                    & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalFunctionInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalFunctionInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalFunctionInputArgumentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionInputArgumentAST GGS_lexicalFunctionInputArgumentAST::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexicalFunctionInputArgumentAST result ;
  const GGS_lexicalFunctionInputArgumentAST * p = (const GGS_lexicalFunctionInputArgumentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalFunctionInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@semanticInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInstructionInSemanticContext (cPtr_semanticInstructionAST * inObject,
                                                            GGS_unifiedTypeMap & io_ioTypeMap,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticInstructionAST) ;
    inObject->method_enterInstructionInSemanticContext (io_ioTypeMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_routineMap::GGS_routineMap (void) :
mProperty_mInternalRoutineMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap::GGS_routineMap (const GGS_routineMap & inSource) :
mProperty_mInternalRoutineMap (inSource.mProperty_mInternalRoutineMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap & GGS_routineMap::operator = (const GGS_routineMap & inSource) {
  mProperty_mInternalRoutineMap = inSource.mProperty_mInternalRoutineMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_routineMap GGS_routineMap::init (Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineMap result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mInternalRoutineMap = GGS_internalRoutineMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap::GGS_routineMap (const GGS_internalRoutineMap & inOperand0) :
mProperty_mInternalRoutineMap (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineMap::isValid (void) const {
  return mProperty_mInternalRoutineMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap::drop (void) {
  mProperty_mInternalRoutineMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap::description (String & ioString,
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
//     @routineMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineMap ("routineMap",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap GGS_routineMap::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_routineMap result ;
  const GGS_routineMap * p = (const GGS_routineMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//'@semanticTypePrecedenceGraph' graph
//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph::GGS_semanticTypePrecedenceGraph (void) :
AC_GALGAS_graph () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_semanticTypePrecedenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::setter_addNode (GGS_lstring inKey,
                                                      GGS_semanticDeclarationAST inArgument_0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  CollectionElement attributes ;
  GGS_semanticDeclarationListAST::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' type is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_topologicalSort (GGS_semanticDeclarationListAST & outSortedList,
                                                              GGS_lstringlist & outSortedKeyList,
                                                              GGS_semanticDeclarationListAST & outUnsortedList,
                                                              GGS_lstringlist & outUnsortedKeyList,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  CollectionElementArray sortedList ;
  CollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_semanticDeclarationListAST (sortedList) ;
  outUnsortedList = GGS_semanticDeclarationListAST (unsortedList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_depthFirstTopologicalSort (GGS_semanticDeclarationListAST & outSortedList,
                                                                        GGS_lstringlist & outSortedKeyList,
                                                                        GGS_semanticDeclarationListAST & outUnsortedList,
                                                                        GGS_lstringlist & outUnsortedKeyList,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  CollectionElementArray sortedList ;
  CollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_semanticDeclarationListAST (sortedList) ;
  outUnsortedList = GGS_semanticDeclarationListAST (unsortedList) ;
}


//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GGS_semanticTypePrecedenceGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_circularities (GGS_semanticDeclarationListAST & outInfoList,
                                                            GGS_lstringlist & outKeyList
                                                            COMMA_LOCATION_ARGS) const {
  CollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_semanticDeclarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_nodesWithNoSuccessor (GGS_semanticDeclarationListAST & outInfoList,
                                                                   GGS_lstringlist & outKeyList
                                                                   COMMA_LOCATION_ARGS) const {
  CollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_semanticDeclarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticTypePrecedenceGraph::method_nodesWithNoPredecessor (GGS_semanticDeclarationListAST & outInfoList,
                                                                     GGS_lstringlist & outKeyList
                                                                     COMMA_LOCATION_ARGS) const {
  CollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_semanticDeclarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::getter_subgraphFromNodes (const GGS_lstringlist & inStartKeyList,
                                                                                           const GGS_stringset & inKeysToExclude,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_semanticTypePrecedenceGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationListAST GGS_semanticTypePrecedenceGraph::getter_nodeList (UNUSED_LOCATION_ARGS) const {
  GGS_semanticDeclarationListAST resultingList ;
  if (isValid ()) {
    resultingList = graph () ;
  }
  return resultingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_semanticTypePrecedenceGraph::getter_accessibleNodesFrom (const GGS_lstringlist & inStartKeyList,
                                                                             const GGS_stringset & inNodesToExclude,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  GGS_semanticTypePrecedenceGraph resultingGraph ;
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
//     @semanticTypePrecedenceGraph generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ("semanticTypePrecedenceGraph",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticTypePrecedenceGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTypePrecedenceGraph ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticTypePrecedenceGraph::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticTypePrecedenceGraph (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticTypePrecedenceGraph GGS_semanticTypePrecedenceGraph::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_semanticTypePrecedenceGraph result ;
  const GGS_semanticTypePrecedenceGraph * p = (const GGS_semanticTypePrecedenceGraph *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticTypePrecedenceGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticTypePrecedenceGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarManager::GGS_localVarManager (void) :
mProperty_mCurrentManager (),
mProperty_mOverridenManagers () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarManager::GGS_localVarManager (const GGS_localVarManager & inSource) :
mProperty_mCurrentManager (inSource.mProperty_mCurrentManager),
mProperty_mOverridenManagers (inSource.mProperty_mOverridenManagers) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVarManager & GGS_localVarManager::operator = (const GGS_localVarManager & inSource) {
  mProperty_mCurrentManager = inSource.mProperty_mCurrentManager ;
  mProperty_mOverridenManagers = inSource.mProperty_mOverridenManagers ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_localVarManager GGS_localVarManager::init (Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_localVarManager result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarManager::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mCurrentManager = GGS_currentVarManager::init (inCompiler COMMA_HERE) ;
  mProperty_mOverridenManagers = GGS_openedOverrideList::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarManager::GGS_localVarManager (const GGS_currentVarManager & inOperand0,
                                          const GGS_openedOverrideList & inOperand1) :
mProperty_mCurrentManager (inOperand0),
mProperty_mOverridenManagers (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_localVarManager::isValid (void) const {
  return mProperty_mCurrentManager.isValid () && mProperty_mOverridenManagers.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarManager::drop (void) {
  mProperty_mCurrentManager.drop () ;
  mProperty_mOverridenManagers.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarManager::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @localVarManager:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mCurrentManager.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOverridenManagers.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @localVarManager generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVarManager ("localVarManager",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localVarManager::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVarManager ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVarManager::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVarManager (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarManager GGS_localVarManager::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_localVarManager result ;
  const GGS_localVarManager * p = (const GGS_localVarManager *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVarManager *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVarManager", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertInitializedLocalVariable'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializedLocalVariable (GGS_localVarManager & ioObject,
                                                     const GGS_lstring constinArgument_inVarName,
                                                     const GGS_bool constinArgument_inWarnsIfNotMutated,
                                                     const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                     const GGS_string constinArgument_inCppName,
                                                     const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  GGS_localVariableAttributes temp_0 ;
  const GalgasBool test_1 = constinArgument_inWarnsIfNotMutated.boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_localVariableAttributes::init (inCompiler COMMA_HERE) ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 53)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 53)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 53)) ;
  }
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, temp_0, GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 54)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 48)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertUsedLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertUsedLocalConstant (GGS_localVarManager & ioObject,
                                              const GGS_lstring constinArgument_inVarName,
                                              const GGS_unifiedTypeMapEntry constinArgument_inType,
                                              const GGS_string constinArgument_inCppName,
                                              const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas4", 71)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 71)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 71)), GGS_localVarValuation::class_func_read (SOURCE_FILE ("variable-manager.galgas4", 72)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 66)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertInitializedLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializedLocalConstant (GGS_localVarManager & ioObject,
                                                     const GGS_lstring constinArgument_inVarName,
                                                     const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                     const GGS_string constinArgument_inCppName,
                                                     const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas4", 87)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 87)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 87)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 88)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 82)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertDeclaredLocalConstant'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertDeclaredLocalConstant (GGS_localVarManager & ioObject,
                                                  const GGS_lstring constinArgument_inVarName,
                                                  const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                  const GGS_string constinArgument_inCppName,
                                                  const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas4", 103)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 103)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 103)), GGS_localVarValuation::class_func_declared (GGS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas4", 104)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 98)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertInputFormalArgumentDeclaredAsUnused'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputFormalArgumentDeclaredAsUnused (GGS_localVarManager & ioObject,
                                                                const GGS_lstring constinArgument_inVarName,
                                                                const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GGS_string constinArgument_inCppName,
                                                                const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 121)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 121)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 121)).operator_or (GGS_localVariableAttributes::class_func_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas4", 121)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 121)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 122)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 116)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertInputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputFormalArgument (GGS_localVarManager & ioObject,
                                                const GGS_lstring constinArgument_inVarName,
                                                const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                const GGS_string constinArgument_inCppName,
                                                const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 137)).operator_or (GGS_localVariableAttributes::class_func_suggestDeclareUnusedParameterAsUnused (SOURCE_FILE ("variable-manager.galgas4", 137)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 137)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 138)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 132)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertConstantInputFormalArgumentDeclaredAsUnused'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (GGS_localVarManager & ioObject,
                                                                        const GGS_lstring constinArgument_inVarName,
                                                                        const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                        const GGS_string constinArgument_inCppName,
                                                                        const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas4", 153)).operator_or (GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 153)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 153)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 153)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 153)).operator_or (GGS_localVariableAttributes::class_func_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas4", 153)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 153)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 154)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 148)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertConstantInputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertConstantInputFormalArgument (GGS_localVarManager & ioObject,
                                                        const GGS_lstring constinArgument_inVarName,
                                                        const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                        const GGS_string constinArgument_inCppName,
                                                        const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas4", 169)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 169)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 169)).operator_or (GGS_localVariableAttributes::class_func_suggestDeclareUnusedParameterAsUnused (SOURCE_FILE ("variable-manager.galgas4", 169)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 169)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 170)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 164)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertOutputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertOutputFormalArgument (GGS_localVarManager & ioObject,
                                                 const GGS_lstring constinArgument_inVarName,
                                                 const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                 const GGS_string constinArgument_inCppName,
                                                 const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectDeclaredStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 187)).operator_or (GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 187)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 187)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 187)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 187)), GGS_localVarValuation::class_func_declared (GGS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas4", 188)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 182)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertInputOutputFormalArgumentDeclaredAsUnused'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputOutputFormalArgumentDeclaredAsUnused (GGS_localVarManager & ioObject,
                                                                      const GGS_lstring constinArgument_inVarName,
                                                                      const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                      const GGS_string constinArgument_inCppName,
                                                                      const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 205)).operator_or (GGS_localVariableAttributes::class_func_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas4", 205)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 205)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 206)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 200)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertInputOutputFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInputOutputFormalArgument (GGS_localVarManager & ioObject,
                                                      const GGS_lstring constinArgument_inVarName,
                                                      const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                      const GGS_string constinArgument_inCppName,
                                                      const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 221)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 221)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 221)).operator_or (GGS_localVariableAttributes::class_func_suggestDeclareUnusedParameterAsUnused (SOURCE_FILE ("variable-manager.galgas4", 222)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 221)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 223)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 216)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertNonMutableProperty'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertNonMutableProperty (GGS_localVarManager & ioObject,
                                               const GGS_lstring constinArgument_inVarName,
                                               const GGS_unifiedTypeMapEntry constinArgument_inType,
                                               const GGS_string constinArgument_inCppName,
                                               const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas4", 240)).operator_or (GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 241)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 240)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 241)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 241)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 242)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 235)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertMutableProperty'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertMutableProperty (GGS_localVarManager & ioObject,
                                            const GGS_lstring constinArgument_inVarName,
                                            const GGS_unifiedTypeMapEntry constinArgument_inType,
                                            const GGS_string constinArgument_inCppName,
                                            const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 257)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 257)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 257)), GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 258)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 252)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager insertInitializerSelfProperty'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertInitializerSelfProperty (GGS_localVarManager & ioObject,
                                                    const GGS_string constinArgument_inPropertyName,
                                                    const GGS_location constinArgument_inErrorLocation,
                                                    const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                    const GGS_string constinArgument_inCppName,
                                                    const GGS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                                    const GGS_bool constinArgument_inInitialized,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_varName_12691 = GGS_lstring::init_21__21_ (GGS_string ("self.").add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 273)), constinArgument_inErrorLocation, inCompiler COMMA_HERE) ;
  {
  GGS_localVarValuation temp_0 ;
  const GalgasBool test_1 = constinArgument_inInitialized.boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas4", 281)) ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_localVarValuation::class_func_declared (GGS_bool (false)  COMMA_SOURCE_FILE ("variable-manager.galgas4", 281)) ;
  }
  extensionSetter_insertKey (ioObject.mProperty_mCurrentManager, var_varName_12691, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, GGS_localVariableAttributes::class_func_rejectDeclaredStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 279)).operator_or (GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 280)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 279)).operator_or (GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas4", 280)) COMMA_SOURCE_FILE ("variable-manager.galgas4", 280)), temp_0, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 274)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager openOverrideForSelectBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForSelectBlock (GGS_localVarManager & ioObject,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVarManager temp_0 = ioObject ;
  ioObject.mProperty_mOverridenManagers.plusPlusAssignOperation (GGS_openedOverrideList_2E_element::init_21_ (GGS_overrideKind::class_func_selectOverrideFirstBranch (temp_0.readProperty_mCurrentManager ()  COMMA_SOURCE_FILE ("variable-manager.galgas4", 290)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("variable-manager.galgas4", 290)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager openOverrideForRepeatBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openOverrideForRepeatBlock (GGS_localVarManager & ioObject,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mProperty_mOverridenManagers.plusPlusAssignOperation (GGS_openedOverrideList_2E_element::init_21_ (GGS_overrideKind::class_func_repeatOverride (SOURCE_FILE ("variable-manager.galgas4", 296)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("variable-manager.galgas4", 296)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager closeOverride'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeOverride (GGS_localVarManager & ioObject,
                                    const GGS_location /* constinArgument__5F_inEndOfBranchLocation */,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_localVarManager temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mOverridenManagers ().getter_count (SOURCE_FILE ("variable-manager.galgas4", 302)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_overrideKind var_savedManager_13964 ;
      {
      ioObject.mProperty_mOverridenManagers.setter_popLast (var_savedManager_13964, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 303)) ;
      }
      switch (var_savedManager_13964.enumValue ()) {
      case GGS_overrideKind::Enumeration::invalid:
        break ;
      case GGS_overrideKind::Enumeration::enum_selectOverrideFirstBranch:
        break ;
      case GGS_overrideKind::Enumeration::enum_selectOverrideNextBranches:
        {
          GGS_currentVarManager extractedValue_14130__savedManager_0 ;
          GGS_currentVarManager extractedValue_14164_referenceManager_1 ;
          var_savedManager_13964.getAssociatedValuesFor_selectOverrideNextBranches (extractedValue_14130__savedManager_0, extractedValue_14164_referenceManager_1) ;
          ioObject.mProperty_mCurrentManager = extractedValue_14164_referenceManager_1 ;
        }
        break ;
      case GGS_overrideKind::Enumeration::enum_repeatOverride:
        break ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager openBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openBranch (GGS_localVarManager & ioObject,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_openScope (ioObject.mProperty_mCurrentManager, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 316)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager closeBranch'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeBranch (GGS_localVarManager & ioObject,
                                  const GGS_location constinArgument_inEndOfBranchLocation,
                                  Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_closeScope (ioObject.mProperty_mCurrentManager, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 322)) ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_localVarManager temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mOverridenManagers ().getter_count (SOURCE_FILE ("variable-manager.galgas4", 324)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_overrideKind var_savedManager_14803 ;
      {
      ioObject.mProperty_mOverridenManagers.setter_popLast (var_savedManager_14803, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 325)) ;
      }
      switch (var_savedManager_14803.enumValue ()) {
      case GGS_overrideKind::Enumeration::invalid:
        break ;
      case GGS_overrideKind::Enumeration::enum_selectOverrideFirstBranch:
        {
          GGS_currentVarManager extractedValue_14896_savedManager_0 ;
          var_savedManager_14803.getAssociatedValuesFor_selectOverrideFirstBranch (extractedValue_14896_savedManager_0) ;
          const GGS_localVarManager temp_2 = ioObject ;
          ioObject.mProperty_mOverridenManagers.plusPlusAssignOperation (GGS_openedOverrideList_2E_element::init_21_ (GGS_overrideKind::class_func_selectOverrideNextBranches (extractedValue_14896_savedManager_0, temp_2.readProperty_mCurrentManager ()  COMMA_SOURCE_FILE ("variable-manager.galgas4", 328)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("variable-manager.galgas4", 328)) ;
          ioObject.mProperty_mCurrentManager = extractedValue_14896_savedManager_0 ;
        }
        break ;
      case GGS_overrideKind::Enumeration::enum_selectOverrideNextBranches:
        {
          GGS_currentVarManager extractedValue_15146_savedManager_0 ;
          GGS_currentVarManager extractedValue_15179_referenceManager_1 ;
          var_savedManager_14803.getAssociatedValuesFor_selectOverrideNextBranches (extractedValue_15146_savedManager_0, extractedValue_15179_referenceManager_1) ;
          const GGS_localVarManager temp_3 = ioObject ;
          GGS_currentVarManager var_newReferenceManager_15209 = temp_3.readProperty_mCurrentManager () ;
          {
          extensionSetter_combineManagerWith (var_newReferenceManager_15209, extractedValue_15179_referenceManager_1, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 332)) ;
          }
          ioObject.mProperty_mOverridenManagers.plusPlusAssignOperation (GGS_openedOverrideList_2E_element::init_21_ (GGS_overrideKind::class_func_selectOverrideNextBranches (extractedValue_15146_savedManager_0, var_newReferenceManager_15209  COMMA_SOURCE_FILE ("variable-manager.galgas4", 333)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("variable-manager.galgas4", 333)) ;
          ioObject.mProperty_mCurrentManager = extractedValue_15146_savedManager_0 ;
        }
        break ;
      case GGS_overrideKind::Enumeration::enum_repeatOverride:
        {
          ioObject.mProperty_mOverridenManagers.plusPlusAssignOperation (GGS_openedOverrideList_2E_element::init_21_ (var_savedManager_14803, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("variable-manager.galgas4", 336)) ;
        }
        break ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager checkSelfObjectIsFullyInitialized'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkSelfObjectIsFullyInitialized (const GGS_localVarManager inObject,
                                                        const GGS_location constinArgument_inErrorLocation,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVarManager temp_0 = inObject ;
  extensionMethod_checkSelfObjectIsFullyInitialized (temp_0.readProperty_mCurrentManager (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 416)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager neutralAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_neutralAccess (GGS_localVarManager & ioObject,
                                    const GGS_lstring constinArgument_inVarName,
                                    GGS_unifiedTypeMapEntry & outArgument_outType,
                                    GGS_string & outArgument_outCppName,
                                    GGS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  {
  extensionSetter_neutralAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 442)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager searchForDropAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForDropAccess (GGS_localVarManager & ioObject,
                                          const GGS_lstring constinArgument_inVarName,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_searchForDropAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 499)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager searchForWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForWriteAccess (GGS_localVarManager & ioObject,
                                           const GGS_lstring constinArgument_inVarName,
                                           GGS_unifiedTypeMapEntry & outArgument_outType,
                                           GGS_string & outArgument_outCppName,
                                           GGS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  {
  extensionSetter_searchForWriteAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 529)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager searchForReadAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadAccess (GGS_localVarManager & ioObject,
                                          const GGS_lstring constinArgument_inVarName,
                                          GGS_unifiedTypeMapEntry & outArgument_outType,
                                          GGS_string & outArgument_outCppName,
                                          GGS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  {
  extensionSetter_searchForReadAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 626)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager searchForReadWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadWriteAccess (GGS_localVarManager & ioObject,
                                               const GGS_lstring constinArgument_inVarName,
                                               GGS_unifiedTypeMapEntry & outArgument_outType,
                                               GGS_string & outArgument_outCppName,
                                               GGS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  {
  extensionSetter_searchForReadWriteAccess (ioObject.mProperty_mCurrentManager, constinArgument_inVarName, outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 710)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@localVarManager checkAutomatonStates'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkAutomatonStates (const GGS_localVarManager inObject,
                                           const GGS_location constinArgument_inErrorLocation,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_localVarManager temp_0 = inObject ;
  extensionMethod_checkAutomatonStates (temp_0.readProperty_mCurrentManager (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas4", 859)) ;
}


//--------------------------------------------------------------------------------------------------
//  Extension Getter '@unifiedTypeMap unsolvedEntryList'
//--------------------------------------------------------------------------------------------------

GGS_lstringlist extensionGetter_unsolvedEntryList (const GGS_unifiedTypeMap & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstringlist result_result ; // Returned variable
  result_result = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  const GGS_unifiedTypeMap temp_0 = inObject ;
  UpEnumerator_unifiedTypeMap enumerator_1860 (temp_0) ;
  while (enumerator_1860.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = enumerator_1860.current_mElement (HERE).readProperty_mDefinition ().getter_isUnsolved (SOURCE_FILE ("unified-type-map.galgas4", 37)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        result_result.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (enumerator_1860.current_lkey (HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("unified-type-map.galgas4", 38)) ;
      }
    }
    enumerator_1860.gotoNextObject () ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @unifiedTypeMapElementClass reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unifiedTypeMapElementClass::objectCompare (const GGS_unifiedTypeMapElementClass & inOperand) const {
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

GGS_unifiedTypeMapElementClass::GGS_unifiedTypeMapElementClass (void) :
AC_GALGAS_reference_class () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_unifiedTypeMapElementClass GGS_unifiedTypeMapElementClass::
init_21_ (const GGS_typeDefinition & in_mDefinition,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_unifiedTypeMapElementClass * object = nullptr ;
  macroMyNew (object, cPtr_unifiedTypeMapElementClass (inCompiler COMMA_THERE)) ;
  object->unifiedTypeMapElementClass_init_21_ (in_mDefinition, inCompiler) ;
  const GGS_unifiedTypeMapElementClass result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_unifiedTypeMapElementClass::
unifiedTypeMapElementClass_init_21_ (const GGS_typeDefinition & in_mDefinition,
                                     Compiler * /* inCompiler */) {
  mProperty_mDefinition = in_mDefinition ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass::GGS_unifiedTypeMapElementClass (const cPtr_unifiedTypeMapElementClass * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unifiedTypeMapElementClass) ;
}
//--------------------------------------------------------------------------------------------------

GGS_typeDefinition GGS_unifiedTypeMapElementClass::readProperty_mDefinition (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typeDefinition () ;
  }else{
    cPtr_unifiedTypeMapElementClass * p = (cPtr_unifiedTypeMapElementClass *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unifiedTypeMapElementClass) ;
    return p->mProperty_mDefinition ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapElementClass::setProperty_mDefinition (const GGS_typeDefinition & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_unifiedTypeMapElementClass * p = (cPtr_unifiedTypeMapElementClass *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unifiedTypeMapElementClass) ;
    p->mProperty_mDefinition = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @unifiedTypeMapElementClass class
//--------------------------------------------------------------------------------------------------

cPtr_unifiedTypeMapElementClass::cPtr_unifiedTypeMapElementClass (Compiler * inCompiler COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE),
mProperty_mDefinition () {
}

//--------------------------------------------------------------------------------------------------

cPtr_unifiedTypeMapElementClass::cPtr_unifiedTypeMapElementClass (const GGS_typeDefinition & in_mDefinition,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE),
mProperty_mDefinition () {
  mProperty_mDefinition = in_mDefinition ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_unifiedTypeMapElementClass::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ;
}

void cPtr_unifiedTypeMapElementClass::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@unifiedTypeMapElementClass:") ;
  mProperty_mDefinition.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_unifiedTypeMapElementClass::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_unifiedTypeMapElementClass (mProperty_mDefinition, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_unifiedTypeMapElementClass::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
    mProperty_mDefinition.printNonNullClassInstanceProperties ("mDefinition") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @unifiedTypeMapElementClass generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ("unifiedTypeMapElementClass",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unifiedTypeMapElementClass::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapElementClass ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMapElementClass::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMapElementClass (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapElementClass GGS_unifiedTypeMapElementClass::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapElementClass result ;
  const GGS_unifiedTypeMapElementClass * p = (const GGS_unifiedTypeMapElementClass *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMapElementClass *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapElementClass", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension func '@unifiedTypeMapElementClass definition'
//
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeDefinition cPtr_unifiedTypeMapElementClass::getter_definition (Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_unifiedTypeDefinition result_result ; // Returned variable
  const GGS_unifiedTypeMapElementClass temp_0 = this ;
  switch (temp_0.readProperty_mDefinition ().enumValue ()) {
  case GGS_typeDefinition::Enumeration::invalid:
    break ;
  case GGS_typeDefinition::Enumeration::enum_unsolved:
    {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas4", 152)), GGS_string ("unsolved type"), fixItArray1  COMMA_SOURCE_FILE ("unified-type-map.galgas4", 152)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_typeDefinition::Enumeration::enum_solved:
    {
      GGS_unifiedTypeDefinition extractedValue_5972_definition_0 ;
      temp_0.readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_5972_definition_0) ;
      result_result = extractedValue_5972_definition_0 ;
    }
    break ;
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeDefinition callExtensionGetter_definition (const cPtr_unifiedTypeMapElementClass * inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeDefinition result ;
  if (nullptr != inObject) {
    result = inObject->getter_definition (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@routineMap insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (GGS_routineMap & ioObject,
                                const GGS_lstring constinArgument_inRoutineName,
                                const GGS_formalParameterSignature constinArgument_inRoutineSignature,
                                const GGS_bool constinArgument_inIsFilePrivate,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineArgumentMap var_routineArgumentMap_2940 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_routineMap temp_1 = ioObject ;
    test_0 = temp_1.readProperty_mInternalRoutineMap ().getter_hasKey (constinArgument_inRoutineName.readProperty_string () COMMA_SOURCE_FILE ("routineMap.galgas4", 72)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_routineMap temp_2 = ioObject ;
      temp_2.readProperty_mInternalRoutineMap ().method_searchKey (constinArgument_inRoutineName, var_routineArgumentMap_2940, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 73)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_routineArgumentMap_2940 = GGS_routineArgumentMap::init (inCompiler COMMA_HERE) ;
  }
  GGS_string var_routineArguments_3153 = function_routineArgumentFromFormalParameters (constinArgument_inRoutineSignature, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 77)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_routineArgumentMap_2940.getter_hasKey (var_routineArguments_3153 COMMA_SOURCE_FILE ("routineMap.galgas4", 78)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), GGS_string ("duplicated declaration of the ").add_operation (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 79)).add_operation (var_routineArguments_3153, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 79)).add_operation (GGS_string (" routine"), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 79)), fixItArray4  COMMA_SOURCE_FILE ("routineMap.galgas4", 79)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    {
    var_routineArgumentMap_2940.setter_insertKey (GGS_lstring::init_21__21_ (var_routineArguments_3153, constinArgument_inRoutineName.readProperty_location (), inCompiler COMMA_HERE), constinArgument_inRoutineSignature, constinArgument_inIsFilePrivate, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 81)) ;
    }
    {
    ioObject.mProperty_mInternalRoutineMap.setter_insertOrReplace (constinArgument_inRoutineName, var_routineArgumentMap_2940 COMMA_SOURCE_FILE ("routineMap.galgas4", 86)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@routineMap searchKey'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_searchKey (const GGS_routineMap inObject,
                                const GGS_lstring constinArgument_inRoutineName,
                                const GGS_actualParameterListAST constinArgument_inActualParameterList,
                                GGS_formalParameterSignature & outArgument_outRoutineSignature,
                                GGS_bool & outArgument_outIsFilePrivate,
                                GGS_lstring & outArgument_outRoutineMangledName,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  outArgument_outIsFilePrivate.drop () ; // Release 'out' argument
  outArgument_outRoutineMangledName.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_routineMap temp_1 = inObject ;
    const GGS_internalRoutineMap_2E_element var_routine_4097 = temp_1.readProperty_mInternalRoutineMap ().readSubscript__3F_ (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!temp_1.readProperty_mInternalRoutineMap ().readSubscript__3F_ (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outIsFilePrivate = GGS_bool (false) ;
      outArgument_outRoutineSignature = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
      UpEnumerator_routineArgumentMap enumerator_4243 (var_routine_4097.readProperty_mArgumentMap ()) ;
      while (enumerator_4243.hasCurrentObject ()) {
        outArgument_outIsFilePrivate = enumerator_4243.current (HERE).readProperty_mIsFilePrivate () ;
        outArgument_outRoutineSignature = enumerator_4243.current (HERE).readProperty_mRoutineSignature () ;
        enumerator_4243.gotoNextObject () ;
      }
      GGS_acceptableParameterList var_acceptableParameterList_4406 = GGS_acceptableParameterList::init (inCompiler COMMA_HERE) ;
      UpEnumerator_routineArgumentMap enumerator_4463 (var_routine_4097.readProperty_mArgumentMap ()) ;
      while (enumerator_4463.hasCurrentObject ()) {
        GGS_bool var_accept_4491 = GGS_bool (ComparisonKind::equal, constinArgument_inActualParameterList.getter_count (SOURCE_FILE ("routineMap.galgas4", 106)).objectCompare (enumerator_4463.current (HERE).readProperty_mRoutineSignature ().getter_count (SOURCE_FILE ("routineMap.galgas4", 106)))) ;
        UpEnumerator_formalParameterSignature enumerator_4598 (enumerator_4463.current (HERE).readProperty_mRoutineSignature ()) ;
        UpEnumerator_actualParameterListAST enumerator_4618 (constinArgument_inActualParameterList) ;
        bool bool_2 = var_accept_4491.isValidAndTrue () ;
        if (enumerator_4598.hasCurrentObject () && enumerator_4618.hasCurrentObject () && bool_2) {
          while (enumerator_4598.hasCurrentObject () && enumerator_4618.hasCurrentObject () && bool_2) {
            var_accept_4491 = callExtensionGetter_isCompatibleWith ((const cPtr_actualParameterAST *) enumerator_4618.current_mActualParameter (HERE).ptr (), enumerator_4598.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_4598.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 108)) ;
            enumerator_4598.gotoNextObject () ;
            enumerator_4618.gotoNextObject () ;
            if (enumerator_4598.hasCurrentObject () && enumerator_4618.hasCurrentObject ()) {
              bool_2 = var_accept_4491.isValidAndTrue () ;
            }
          }
        }
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = var_accept_4491.boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            var_acceptableParameterList_4406.plusPlusAssignOperation (GGS_acceptableParameterList_2E_element::init_21__21_ (enumerator_4463.current (HERE).readProperty_mRoutineSignature (), enumerator_4463.current (HERE).readProperty_mIsFilePrivate (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("routineMap.galgas4", 114)) ;
          }
        }
        enumerator_4463.gotoNextObject () ;
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, var_acceptableParameterList_4406.getter_count (SOURCE_FILE ("routineMap.galgas4", 117)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          var_acceptableParameterList_4406.method_first (outArgument_outRoutineSignature, outArgument_outIsFilePrivate, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 118)) ;
          outArgument_outRoutineMangledName = function_routineMangledName (constinArgument_inRoutineName, outArgument_outRoutineSignature, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 119)) ;
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          test_5 = GGS_bool (ComparisonKind::equal, var_acceptableParameterList_4406.getter_count (SOURCE_FILE ("routineMap.galgas4", 120)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_5) {
            GenericArray <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), GGS_string ("cannot find any procedure with compatible formal argument list"), fixItArray6  COMMA_SOURCE_FILE ("routineMap.galgas4", 121)) ;
            outArgument_outRoutineSignature.drop () ; // Release error dropped variable
            outArgument_outIsFilePrivate.drop () ; // Release error dropped variable
            outArgument_outRoutineMangledName.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_5) {
          GGS_string var_s_5460 = GGS_string ("ambiguity, several procedures with compatible formal argument list:") ;
          UpEnumerator_acceptableParameterList enumerator_5557 (var_acceptableParameterList_4406) ;
          while (enumerator_5557.hasCurrentObject ()) {
            var_s_5460.plusAssignOperation(GGS_string ("\n  - ").add_operation (function_routineArgumentFromFormalParameters (enumerator_5557.current (HERE).readProperty_mRoutineSignature (), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 127)), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 127)), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas4", 127)) ;
            enumerator_5557.gotoNextObject () ;
          }
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), var_s_5460, fixItArray7  COMMA_SOURCE_FILE ("routineMap.galgas4", 129)) ;
          outArgument_outRoutineSignature.drop () ; // Release error dropped variable
          outArgument_outIsFilePrivate.drop () ; // Release error dropped variable
          outArgument_outRoutineMangledName.drop () ; // Release error dropped variable
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GenericArray <FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inRoutineName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 135)).add_operation (GGS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 135)), fixItArray8  COMMA_SOURCE_FILE ("routineMap.galgas4", 134)) ;
    outArgument_outRoutineSignature.drop () ; // Release error dropped variable
    outArgument_outIsFilePrivate.drop () ; // Release error dropped variable
    outArgument_outRoutineMangledName.drop () ; // Release error dropped variable
  }
}


//--------------------------------------------------------------------------------------------------
//  Extension Getter '@routineMap locationForKey'
//--------------------------------------------------------------------------------------------------

GGS_location extensionGetter_locationForKey (const GGS_routineMap & inObject,
                                             const GGS_string & constinArgument_inKey,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_location result_result ; // Returned variable
  const GGS_routineMap temp_0 = inObject ;
  result_result = temp_0.readProperty_mInternalRoutineMap ().getter_locationForKey (constinArgument_inKey, inCompiler COMMA_SOURCE_FILE ("routineMap.galgas4", 143)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension proc '@syntaxExtensions insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (GGS_syntaxExtensions & ioObject,
                                const GGS_string constinArgument_inKey,
                                const GGS_lstring constinArgument_inSyntaxComponentName,
                                const GGS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                const GGS_syntaxRuleListAST constinArgument_inRuleList,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_syntaxExtensions temp_1 = ioObject ;
    test_0 = temp_1.readProperty_dictionary ().getter_hasKey (constinArgument_inKey COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 40)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_galgas_33_SyntaxExtensionListAST var_aList_2104 ;
      const GGS_syntaxExtensions temp_2 = ioObject ;
      temp_2.readProperty_dictionary ().method_searchKey (constinArgument_inKey, var_aList_2104, inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 41)) ;
      {
      var_aList_2104.setter_append (constinArgument_inSyntaxComponentName, constinArgument_inNonterminalDeclarationList, constinArgument_inRuleList, inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 42)) ;
      }
      ioObject.mProperty_dictionary.plusPlusAssignOperation (GGS_syntaxExtensionsDictionary_2E_element::init_21__21_ (constinArgument_inKey, var_aList_2104, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 43)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_galgas_33_SyntaxExtensionListAST temp_3 = GGS_galgas_33_SyntaxExtensionListAST::init (inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 45)) ;
    temp_3.plusPlusAssignOperation (GGS_galgas_33_SyntaxExtensionListAST_2E_element::init_21__21__21_ (constinArgument_inSyntaxComponentName, constinArgument_inNonterminalDeclarationList, constinArgument_inRuleList, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 45)) ;
    ioObject.mProperty_dictionary.plusPlusAssignOperation (GGS_syntaxExtensionsDictionary_2E_element::init_21__21_ (constinArgument_inKey, temp_3, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 45)) ;
  }
}


//--------------------------------------------------------------------------------------------------
// @inputParameterVariable reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inputParameterVariable::objectCompare (const GGS_inputParameterVariable & inOperand) const {
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

GGS_inputParameterVariable::GGS_inputParameterVariable (void) :
GGS_abstractInputParameter () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputParameterVariable GGS_inputParameterVariable::
init_21_ (const GGS_lstring & in_mActualParameterName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_inputParameterVariable * object = nullptr ;
  macroMyNew (object, cPtr_inputParameterVariable (inCompiler COMMA_THERE)) ;
  object->inputParameterVariable_init_21_ (in_mActualParameterName, inCompiler) ;
  const GGS_inputParameterVariable result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterVariable::
inputParameterVariable_init_21_ (const GGS_lstring & in_mActualParameterName,
                                 Compiler * /* inCompiler */) {
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterVariable::GGS_inputParameterVariable (const cPtr_inputParameterVariable * inSourcePtr) :
GGS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterVariable) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputParameterVariable::readProperty_mActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputParameterVariable * p = (cPtr_inputParameterVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterVariable) ;
    return p->mProperty_mActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputParameterVariable class
//--------------------------------------------------------------------------------------------------

cPtr_inputParameterVariable::cPtr_inputParameterVariable (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inputParameterVariable::cPtr_inputParameterVariable (const GGS_lstring & in_mActualParameterName,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterName () {
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_inputParameterVariable::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterVariable ;
}

void cPtr_inputParameterVariable::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@inputParameterVariable:") ;
  mProperty_mActualParameterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_inputParameterVariable::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputParameterVariable (mProperty_mActualParameterName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputParameterVariable::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInputParameter::printNonNullClassInstanceProperties () ;
    mProperty_mActualParameterName.printNonNullClassInstanceProperties ("mActualParameterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inputParameterVariable generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterVariable ("inputParameterVariable",
                                                                           & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputParameterVariable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterVariable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputParameterVariable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputParameterVariable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterVariable GGS_inputParameterVariable::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_inputParameterVariable result ;
  const GGS_inputParameterVariable * p = (const GGS_inputParameterVariable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputParameterVariable *> (p)) {
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

ComparisonResult GGS_inputParameterDeclaredVariable::objectCompare (const GGS_inputParameterDeclaredVariable & inOperand) const {
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

GGS_inputParameterDeclaredVariable::GGS_inputParameterDeclaredVariable (void) :
GGS_abstractInputParameter () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputParameterDeclaredVariable GGS_inputParameterDeclaredVariable::
init_21__21_ (const GGS_lstring & in_mActualParameterTypeName,
              const GGS_lstring & in_mActualParameterName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_inputParameterDeclaredVariable * object = nullptr ;
  macroMyNew (object, cPtr_inputParameterDeclaredVariable (inCompiler COMMA_THERE)) ;
  object->inputParameterDeclaredVariable_init_21__21_ (in_mActualParameterTypeName, in_mActualParameterName, inCompiler) ;
  const GGS_inputParameterDeclaredVariable result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterDeclaredVariable::
inputParameterDeclaredVariable_init_21__21_ (const GGS_lstring & in_mActualParameterTypeName,
                                             const GGS_lstring & in_mActualParameterName,
                                             Compiler * /* inCompiler */) {
  mProperty_mActualParameterTypeName = in_mActualParameterTypeName ;
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredVariable::GGS_inputParameterDeclaredVariable (const cPtr_inputParameterDeclaredVariable * inSourcePtr) :
GGS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterDeclaredVariable) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputParameterDeclaredVariable::readProperty_mActualParameterTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputParameterDeclaredVariable * p = (cPtr_inputParameterDeclaredVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredVariable) ;
    return p->mProperty_mActualParameterTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputParameterDeclaredVariable::readProperty_mActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputParameterDeclaredVariable * p = (cPtr_inputParameterDeclaredVariable *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredVariable) ;
    return p->mProperty_mActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputParameterDeclaredVariable class
//--------------------------------------------------------------------------------------------------

cPtr_inputParameterDeclaredVariable::cPtr_inputParameterDeclaredVariable (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterTypeName (),
mProperty_mActualParameterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inputParameterDeclaredVariable::cPtr_inputParameterDeclaredVariable (const GGS_lstring & in_mActualParameterTypeName,
                                                                          const GGS_lstring & in_mActualParameterName,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterTypeName (),
mProperty_mActualParameterName () {
  mProperty_mActualParameterTypeName = in_mActualParameterTypeName ;
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_inputParameterDeclaredVariable::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_inputParameterDeclaredVariable::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputParameterDeclaredVariable (mProperty_mActualParameterTypeName, mProperty_mActualParameterName, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @inputParameterDeclaredVariable generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ("inputParameterDeclaredVariable",
                                                                                   & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputParameterDeclaredVariable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredVariable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputParameterDeclaredVariable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputParameterDeclaredVariable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredVariable GGS_inputParameterDeclaredVariable::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_inputParameterDeclaredVariable result ;
  const GGS_inputParameterDeclaredVariable * p = (const GGS_inputParameterDeclaredVariable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputParameterDeclaredVariable *> (p)) {
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

ComparisonResult GGS_inputParameterDeclaredConstant::objectCompare (const GGS_inputParameterDeclaredConstant & inOperand) const {
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

GGS_inputParameterDeclaredConstant::GGS_inputParameterDeclaredConstant (void) :
GGS_abstractInputParameter () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inputParameterDeclaredConstant GGS_inputParameterDeclaredConstant::
init_21__21_ (const GGS_lstring & in_mActualParameterTypeName,
              const GGS_lstring & in_mActualParameterName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_inputParameterDeclaredConstant * object = nullptr ;
  macroMyNew (object, cPtr_inputParameterDeclaredConstant (inCompiler COMMA_THERE)) ;
  object->inputParameterDeclaredConstant_init_21__21_ (in_mActualParameterTypeName, in_mActualParameterName, inCompiler) ;
  const GGS_inputParameterDeclaredConstant result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterDeclaredConstant::
inputParameterDeclaredConstant_init_21__21_ (const GGS_lstring & in_mActualParameterTypeName,
                                             const GGS_lstring & in_mActualParameterName,
                                             Compiler * /* inCompiler */) {
  mProperty_mActualParameterTypeName = in_mActualParameterTypeName ;
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredConstant::GGS_inputParameterDeclaredConstant (const cPtr_inputParameterDeclaredConstant * inSourcePtr) :
GGS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterDeclaredConstant) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputParameterDeclaredConstant::readProperty_mActualParameterTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputParameterDeclaredConstant * p = (cPtr_inputParameterDeclaredConstant *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredConstant) ;
    return p->mProperty_mActualParameterTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_inputParameterDeclaredConstant::readProperty_mActualParameterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_inputParameterDeclaredConstant * p = (cPtr_inputParameterDeclaredConstant *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputParameterDeclaredConstant) ;
    return p->mProperty_mActualParameterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputParameterDeclaredConstant class
//--------------------------------------------------------------------------------------------------

cPtr_inputParameterDeclaredConstant::cPtr_inputParameterDeclaredConstant (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterTypeName (),
mProperty_mActualParameterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_inputParameterDeclaredConstant::cPtr_inputParameterDeclaredConstant (const GGS_lstring & in_mActualParameterTypeName,
                                                                          const GGS_lstring & in_mActualParameterName,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE),
mProperty_mActualParameterTypeName (),
mProperty_mActualParameterName () {
  mProperty_mActualParameterTypeName = in_mActualParameterTypeName ;
  mProperty_mActualParameterName = in_mActualParameterName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_inputParameterDeclaredConstant::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_inputParameterDeclaredConstant::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputParameterDeclaredConstant (mProperty_mActualParameterTypeName, mProperty_mActualParameterName, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @inputParameterDeclaredConstant generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ("inputParameterDeclaredConstant",
                                                                                   & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inputParameterDeclaredConstant::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredConstant ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inputParameterDeclaredConstant::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inputParameterDeclaredConstant (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inputParameterDeclaredConstant GGS_inputParameterDeclaredConstant::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_inputParameterDeclaredConstant result ;
  const GGS_inputParameterDeclaredConstant * p = (const GGS_inputParameterDeclaredConstant *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inputParameterDeclaredConstant *> (p)) {
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

ComparisonResult GGS_externFunctionDeclarationAST::objectCompare (const GGS_externFunctionDeclarationAST & inOperand) const {
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

GGS_externFunctionDeclarationAST::GGS_externFunctionDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_externFunctionDeclarationAST GGS_externFunctionDeclarationAST::
init_21_isPredefined_21__21__21__21_usefullFunc (const GGS_bool & in_isPredefined,
                                                 const GGS_lstring & in_mFunctionName,
                                                 const GGS_formalInputParameterListAST & in_mFormalArgumentList,
                                                 const GGS_lstring & in_mResultTypeName,
                                                 const GGS_bool & in_usefullFunc,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cPtr_externFunctionDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_externFunctionDeclarationAST (inCompiler COMMA_THERE)) ;
  object->externFunctionDeclarationAST_init_21_isPredefined_21__21__21__21_usefullFunc (in_isPredefined, in_mFunctionName, in_mFormalArgumentList, in_mResultTypeName, in_usefullFunc, inCompiler) ;
  const GGS_externFunctionDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::
externFunctionDeclarationAST_init_21_isPredefined_21__21__21__21_usefullFunc (const GGS_bool & in_isPredefined,
                                                                              const GGS_lstring & in_mFunctionName,
                                                                              const GGS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                              const GGS_lstring & in_mResultTypeName,
                                                                              const GGS_bool & in_usefullFunc,
                                                                              Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mResultTypeName = in_mResultTypeName ;
  mProperty_usefullFunc = in_usefullFunc ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationAST::GGS_externFunctionDeclarationAST (const cPtr_externFunctionDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externFunctionDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_externFunctionDeclarationAST::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST GGS_externFunctionDeclarationAST::readProperty_mFormalArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalInputParameterListAST () ;
  }else{
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    return p->mProperty_mFormalArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_externFunctionDeclarationAST::readProperty_mResultTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_externFunctionDeclarationAST::readProperty_usefullFunc (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_externFunctionDeclarationAST * p = (cPtr_externFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externFunctionDeclarationAST) ;
    return p->mProperty_usefullFunc ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @externFunctionDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_externFunctionDeclarationAST::cPtr_externFunctionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mFormalArgumentList (),
mProperty_mResultTypeName (),
mProperty_usefullFunc () {
}

//--------------------------------------------------------------------------------------------------

cPtr_externFunctionDeclarationAST::cPtr_externFunctionDeclarationAST (const GGS_bool & in_isPredefined,
                                                                      const GGS_lstring & in_mFunctionName,
                                                                      const GGS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                      const GGS_lstring & in_mResultTypeName,
                                                                      const GGS_bool & in_usefullFunc,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_externFunctionDeclarationAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_externFunctionDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_externFunctionDeclarationAST (mProperty_isPredefined, mProperty_mFunctionName, mProperty_mFormalArgumentList, mProperty_mResultTypeName, mProperty_usefullFunc, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @externFunctionDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externFunctionDeclarationAST ("externFunctionDeclarationAST",
                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externFunctionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externFunctionDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externFunctionDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionDeclarationAST GGS_externFunctionDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_externFunctionDeclarationAST result ;
  const GGS_externFunctionDeclarationAST * p = (const GGS_externFunctionDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externFunctionDeclarationAST *> (p)) {
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

ComparisonResult GGS_functionDeclarationAST::objectCompare (const GGS_functionDeclarationAST & inOperand) const {
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

GGS_functionDeclarationAST::GGS_functionDeclarationAST (void) :
GGS_externFunctionDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_functionDeclarationAST GGS_functionDeclarationAST::
init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                 const GGS_lstring & in_mFunctionName,
                                                                 const GGS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                 const GGS_lstring & in_mResultTypeName,
                                                                 const GGS_bool & in_usefullFunc,
                                                                 const GGS_lstring & in_mResultVariableName,
                                                                 const GGS__5B_semanticInstructionAST_5D_ & in_mFunctionInstructionList,
                                                                 const GGS_location & in_mEndOfFunctionInstructionList,
                                                                 const GGS_bool & in_mIsInternal,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cPtr_functionDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_functionDeclarationAST (inCompiler COMMA_THERE)) ;
  object->functionDeclarationAST_init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (in_isPredefined, in_mFunctionName, in_mFormalArgumentList, in_mResultTypeName, in_usefullFunc, in_mResultVariableName, in_mFunctionInstructionList, in_mEndOfFunctionInstructionList, in_mIsInternal, inCompiler) ;
  const GGS_functionDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::
functionDeclarationAST_init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                                        const GGS_lstring & in_mFunctionName,
                                                                                        const GGS_formalInputParameterListAST & in_mFormalArgumentList,
                                                                                        const GGS_lstring & in_mResultTypeName,
                                                                                        const GGS_bool & in_usefullFunc,
                                                                                        const GGS_lstring & in_mResultVariableName,
                                                                                        const GGS__5B_semanticInstructionAST_5D_ & in_mFunctionInstructionList,
                                                                                        const GGS_location & in_mEndOfFunctionInstructionList,
                                                                                        const GGS_bool & in_mIsInternal,
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

GGS_functionDeclarationAST::GGS_functionDeclarationAST (const cPtr_functionDeclarationAST * inSourcePtr) :
GGS_externFunctionDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_functionDeclarationAST::readProperty_mResultVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mResultVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_ GGS_functionDeclarationAST::readProperty_mFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_semanticInstructionAST_5D_ () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_functionDeclarationAST::readProperty_mEndOfFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mEndOfFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_functionDeclarationAST::readProperty_mIsInternal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_functionDeclarationAST * p = (cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    return p->mProperty_mIsInternal ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @functionDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_functionDeclarationAST::cPtr_functionDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_externFunctionDeclarationAST (inCompiler COMMA_THERE),
mProperty_mResultVariableName (),
mProperty_mFunctionInstructionList (),
mProperty_mEndOfFunctionInstructionList (),
mProperty_mIsInternal () {
}

//--------------------------------------------------------------------------------------------------

cPtr_functionDeclarationAST::cPtr_functionDeclarationAST (const GGS_bool & in_isPredefined,
                                                          const GGS_lstring & in_mFunctionName,
                                                          const GGS_formalInputParameterListAST & in_mFormalArgumentList,
                                                          const GGS_lstring & in_mResultTypeName,
                                                          const GGS_bool & in_usefullFunc,
                                                          const GGS_lstring & in_mResultVariableName,
                                                          const GGS__5B_semanticInstructionAST_5D_ & in_mFunctionInstructionList,
                                                          const GGS_location & in_mEndOfFunctionInstructionList,
                                                          const GGS_bool & in_mIsInternal,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_externFunctionDeclarationAST (in_isPredefined, in_mFunctionName, in_mFormalArgumentList, in_mResultTypeName, in_usefullFunc, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_functionDeclarationAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_functionDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_functionDeclarationAST (mProperty_isPredefined, mProperty_mFunctionName, mProperty_mFormalArgumentList, mProperty_mResultTypeName, mProperty_usefullFunc, mProperty_mResultVariableName, mProperty_mFunctionInstructionList, mProperty_mEndOfFunctionInstructionList, mProperty_mIsInternal, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @functionDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionDeclarationAST ("functionDeclarationAST",
                                                                           & kTypeDescriptor_GALGAS_externFunctionDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionDeclarationAST GGS_functionDeclarationAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_functionDeclarationAST result ;
  const GGS_functionDeclarationAST * p = (const GGS_functionDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionDeclarationAST *> (p)) {
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

ComparisonResult GGS_onceFunctionDeclarationAST::objectCompare (const GGS_onceFunctionDeclarationAST & inOperand) const {
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

GGS_onceFunctionDeclarationAST::GGS_onceFunctionDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_onceFunctionDeclarationAST GGS_onceFunctionDeclarationAST::
init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                  const GGS_lstring & in_mFunctionName,
                                                  const GGS_lstring & in_mResultTypeName,
                                                  const GGS_lstring & in_mResultVariableName,
                                                  const GGS__5B_semanticInstructionAST_5D_ & in_mFunctionInstructionList,
                                                  const GGS_location & in_mEndOfFunctionInstructionList,
                                                  const GGS_bool & in_mIsInternal,
                                                  const GGS_bool & in_mIsUsefull,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_onceFunctionDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_onceFunctionDeclarationAST (inCompiler COMMA_THERE)) ;
  object->onceFunctionDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (in_isPredefined, in_mFunctionName, in_mResultTypeName, in_mResultVariableName, in_mFunctionInstructionList, in_mEndOfFunctionInstructionList, in_mIsInternal, in_mIsUsefull, inCompiler) ;
  const GGS_onceFunctionDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::
onceFunctionDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                             const GGS_lstring & in_mFunctionName,
                                                                             const GGS_lstring & in_mResultTypeName,
                                                                             const GGS_lstring & in_mResultVariableName,
                                                                             const GGS__5B_semanticInstructionAST_5D_ & in_mFunctionInstructionList,
                                                                             const GGS_location & in_mEndOfFunctionInstructionList,
                                                                             const GGS_bool & in_mIsInternal,
                                                                             const GGS_bool & in_mIsUsefull,
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

GGS_onceFunctionDeclarationAST::GGS_onceFunctionDeclarationAST (const cPtr_onceFunctionDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_onceFunctionDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_onceFunctionDeclarationAST::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_onceFunctionDeclarationAST::readProperty_mResultTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mResultTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_onceFunctionDeclarationAST::readProperty_mResultVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mResultVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_ GGS_onceFunctionDeclarationAST::readProperty_mFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_semanticInstructionAST_5D_ () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_onceFunctionDeclarationAST::readProperty_mEndOfFunctionInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mEndOfFunctionInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_onceFunctionDeclarationAST::readProperty_mIsInternal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mIsInternal ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_onceFunctionDeclarationAST::readProperty_mIsUsefull (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_onceFunctionDeclarationAST * p = (cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    return p->mProperty_mIsUsefull ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @onceFunctionDeclarationAST class
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

cPtr_onceFunctionDeclarationAST::cPtr_onceFunctionDeclarationAST (const GGS_bool & in_isPredefined,
                                                                  const GGS_lstring & in_mFunctionName,
                                                                  const GGS_lstring & in_mResultTypeName,
                                                                  const GGS_lstring & in_mResultVariableName,
                                                                  const GGS__5B_semanticInstructionAST_5D_ & in_mFunctionInstructionList,
                                                                  const GGS_location & in_mEndOfFunctionInstructionList,
                                                                  const GGS_bool & in_mIsInternal,
                                                                  const GGS_bool & in_mIsUsefull,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_onceFunctionDeclarationAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_onceFunctionDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_onceFunctionDeclarationAST (mProperty_isPredefined, mProperty_mFunctionName, mProperty_mResultTypeName, mProperty_mResultVariableName, mProperty_mFunctionInstructionList, mProperty_mEndOfFunctionInstructionList, mProperty_mIsInternal, mProperty_mIsUsefull, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @onceFunctionDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ("onceFunctionDeclarationAST",
                                                                               & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_onceFunctionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_onceFunctionDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_onceFunctionDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationAST GGS_onceFunctionDeclarationAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_onceFunctionDeclarationAST result ;
  const GGS_onceFunctionDeclarationAST * p = (const GGS_onceFunctionDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_onceFunctionDeclarationAST *> (p)) {
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

ComparisonResult GGS_filewrapperDeclarationAST::objectCompare (const GGS_filewrapperDeclarationAST & inOperand) const {
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

GGS_filewrapperDeclarationAST::GGS_filewrapperDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_filewrapperDeclarationAST GGS_filewrapperDeclarationAST::
init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                  const GGS_bool & in_mIsInternal,
                                                  const GGS_string & in_mSourceFileAbsolutePath,
                                                  const GGS_lstring & in_mFilewrapperName,
                                                  const GGS_lstring & in_mFilewrapperPath,
                                                  const GGS_lstringlist & in_mFilewrapperTextFileExtensionList,
                                                  const GGS_lstringlist & in_mFilewrapperBinaryFileExtensionList,
                                                  const GGS_filewrapperTemplateListAST & in_mFilewrapperTemplateList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_filewrapperDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_filewrapperDeclarationAST (inCompiler COMMA_THERE)) ;
  object->filewrapperDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (in_isPredefined, in_mIsInternal, in_mSourceFileAbsolutePath, in_mFilewrapperName, in_mFilewrapperPath, in_mFilewrapperTextFileExtensionList, in_mFilewrapperBinaryFileExtensionList, in_mFilewrapperTemplateList, inCompiler) ;
  const GGS_filewrapperDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::
filewrapperDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                            const GGS_bool & in_mIsInternal,
                                                                            const GGS_string & in_mSourceFileAbsolutePath,
                                                                            const GGS_lstring & in_mFilewrapperName,
                                                                            const GGS_lstring & in_mFilewrapperPath,
                                                                            const GGS_lstringlist & in_mFilewrapperTextFileExtensionList,
                                                                            const GGS_lstringlist & in_mFilewrapperBinaryFileExtensionList,
                                                                            const GGS_filewrapperTemplateListAST & in_mFilewrapperTemplateList,
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

GGS_filewrapperDeclarationAST::GGS_filewrapperDeclarationAST (const cPtr_filewrapperDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_filewrapperDeclarationAST::readProperty_mIsInternal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mIsInternal ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_filewrapperDeclarationAST::readProperty_mSourceFileAbsolutePath (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mSourceFileAbsolutePath ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_filewrapperDeclarationAST::readProperty_mFilewrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_filewrapperDeclarationAST::readProperty_mFilewrapperPath (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperPath ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_filewrapperDeclarationAST::readProperty_mFilewrapperTextFileExtensionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperTextFileExtensionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_filewrapperDeclarationAST::readProperty_mFilewrapperBinaryFileExtensionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperBinaryFileExtensionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListAST GGS_filewrapperDeclarationAST::readProperty_mFilewrapperTemplateList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_filewrapperTemplateListAST () ;
  }else{
    cPtr_filewrapperDeclarationAST * p = (cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    return p->mProperty_mFilewrapperTemplateList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperDeclarationAST class
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

cPtr_filewrapperDeclarationAST::cPtr_filewrapperDeclarationAST (const GGS_bool & in_isPredefined,
                                                                const GGS_bool & in_mIsInternal,
                                                                const GGS_string & in_mSourceFileAbsolutePath,
                                                                const GGS_lstring & in_mFilewrapperName,
                                                                const GGS_lstring & in_mFilewrapperPath,
                                                                const GGS_lstringlist & in_mFilewrapperTextFileExtensionList,
                                                                const GGS_lstringlist & in_mFilewrapperBinaryFileExtensionList,
                                                                const GGS_filewrapperTemplateListAST & in_mFilewrapperTemplateList,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_filewrapperDeclarationAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_filewrapperDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_filewrapperDeclarationAST (mProperty_isPredefined, mProperty_mIsInternal, mProperty_mSourceFileAbsolutePath, mProperty_mFilewrapperName, mProperty_mFilewrapperPath, mProperty_mFilewrapperTextFileExtensionList, mProperty_mFilewrapperBinaryFileExtensionList, mProperty_mFilewrapperTemplateList, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @filewrapperDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperDeclarationAST ("filewrapperDeclarationAST",
                                                                              & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationAST GGS_filewrapperDeclarationAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_filewrapperDeclarationAST result ;
  const GGS_filewrapperDeclarationAST * p = (const GGS_filewrapperDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperDeclarationAST *> (p)) {
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

ComparisonResult GGS_galgas_33_SyntaxComponentAST::objectCompare (const GGS_galgas_33_SyntaxComponentAST & inOperand) const {
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

GGS_galgas_33_SyntaxComponentAST::GGS_galgas_33_SyntaxComponentAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST GGS_galgas_33_SyntaxComponentAST::
init_21_isPredefined_21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                          const GGS_lstring & in_mSyntaxComponentName,
                                          const GGS_lstring & in_mLexiqueName,
                                          const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                          const GGS_syntaxRuleListAST & in_mRuleList,
                                          const GGS_bool & in_mHasTranslateFeature,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_galgas_33_SyntaxComponentAST * object = nullptr ;
  macroMyNew (object, cPtr_galgas_33_SyntaxComponentAST (inCompiler COMMA_THERE)) ;
  object->galgas_33_SyntaxComponentAST_init_21_isPredefined_21__21__21__21__21_ (in_isPredefined, in_mSyntaxComponentName, in_mLexiqueName, in_mNonterminalDeclarationList, in_mRuleList, in_mHasTranslateFeature, inCompiler) ;
  const GGS_galgas_33_SyntaxComponentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::
galgas_33_SyntaxComponentAST_init_21_isPredefined_21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                       const GGS_lstring & in_mSyntaxComponentName,
                                                                       const GGS_lstring & in_mLexiqueName,
                                                                       const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                       const GGS_syntaxRuleListAST & in_mRuleList,
                                                                       const GGS_bool & in_mHasTranslateFeature,
                                                                       Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mNonterminalDeclarationList = in_mNonterminalDeclarationList ;
  mProperty_mRuleList = in_mRuleList ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST::GGS_galgas_33_SyntaxComponentAST (const cPtr_galgas_33_SyntaxComponentAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_galgas_33_SyntaxComponentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_galgas_33_SyntaxComponentAST::readProperty_mSyntaxComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mSyntaxComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_galgas_33_SyntaxComponentAST::readProperty_mLexiqueName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mLexiqueName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalDeclarationListAST GGS_galgas_33_SyntaxComponentAST::readProperty_mNonterminalDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_nonterminalDeclarationListAST () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mNonterminalDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleListAST GGS_galgas_33_SyntaxComponentAST::readProperty_mRuleList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_syntaxRuleListAST () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mRuleList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_galgas_33_SyntaxComponentAST::readProperty_mHasTranslateFeature (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_galgas_33_SyntaxComponentAST * p = (cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    return p->mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @galgas3SyntaxComponentAST class
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

cPtr_galgas_33_SyntaxComponentAST::cPtr_galgas_33_SyntaxComponentAST (const GGS_bool & in_isPredefined,
                                                                      const GGS_lstring & in_mSyntaxComponentName,
                                                                      const GGS_lstring & in_mLexiqueName,
                                                                      const GGS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                      const GGS_syntaxRuleListAST & in_mRuleList,
                                                                      const GGS_bool & in_mHasTranslateFeature,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_galgas_33_SyntaxComponentAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_galgas_33_SyntaxComponentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_galgas_33_SyntaxComponentAST (mProperty_isPredefined, mProperty_mSyntaxComponentName, mProperty_mLexiqueName, mProperty_mNonterminalDeclarationList, mProperty_mRuleList, mProperty_mHasTranslateFeature, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @galgas3SyntaxComponentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ("galgas3SyntaxComponentAST",
                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgas_33_SyntaxComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgas_33_SyntaxComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgas_33_SyntaxComponentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_SyntaxComponentAST GGS_galgas_33_SyntaxComponentAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_galgas_33_SyntaxComponentAST result ;
  const GGS_galgas_33_SyntaxComponentAST * p = (const GGS_galgas_33_SyntaxComponentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgas_33_SyntaxComponentAST *> (p)) {
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

ComparisonResult GGS_galgas_33_GrammarComponentAST::objectCompare (const GGS_galgas_33_GrammarComponentAST & inOperand) const {
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

GGS_galgas_33_GrammarComponentAST::GGS_galgas_33_GrammarComponentAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST GGS_galgas_33_GrammarComponentAST::
init_21_isPredefined_21__21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                      const GGS_lbool & in_mHasIndexing,
                                                      const GGS_lstring & in_mGrammarComponentName,
                                                      const GGS_lstring & in_mGrammarClass,
                                                      const GGS_lstringlist & in_mSyntaxComponents,
                                                      const GGS_lstring & in_mStartSymbolName,
                                                      const GGS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                                      const GGS_lstringlist & in_mUnusedNonterminalList,
                                                      const GGS_bool & in_mHasTranslateFeature,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cPtr_galgas_33_GrammarComponentAST * object = nullptr ;
  macroMyNew (object, cPtr_galgas_33_GrammarComponentAST (inCompiler COMMA_THERE)) ;
  object->galgas_33_GrammarComponentAST_init_21_isPredefined_21__21__21__21__21__21__21__21_ (in_isPredefined, in_mHasIndexing, in_mGrammarComponentName, in_mGrammarClass, in_mSyntaxComponents, in_mStartSymbolName, in_mStartSymbolLabelList, in_mUnusedNonterminalList, in_mHasTranslateFeature, inCompiler) ;
  const GGS_galgas_33_GrammarComponentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::
galgas_33_GrammarComponentAST_init_21_isPredefined_21__21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                                    const GGS_lbool & in_mHasIndexing,
                                                                                    const GGS_lstring & in_mGrammarComponentName,
                                                                                    const GGS_lstring & in_mGrammarClass,
                                                                                    const GGS_lstringlist & in_mSyntaxComponents,
                                                                                    const GGS_lstring & in_mStartSymbolName,
                                                                                    const GGS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                                                                    const GGS_lstringlist & in_mUnusedNonterminalList,
                                                                                    const GGS_bool & in_mHasTranslateFeature,
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

GGS_galgas_33_GrammarComponentAST::GGS_galgas_33_GrammarComponentAST (const cPtr_galgas_33_GrammarComponentAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_galgas_33_GrammarComponentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lbool GGS_galgas_33_GrammarComponentAST::readProperty_mHasIndexing (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lbool () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mHasIndexing ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_galgas_33_GrammarComponentAST::readProperty_mGrammarComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mGrammarComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_galgas_33_GrammarComponentAST::readProperty_mGrammarClass (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mGrammarClass ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_galgas_33_GrammarComponentAST::readProperty_mSyntaxComponents (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mSyntaxComponents ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_galgas_33_GrammarComponentAST::readProperty_mStartSymbolName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mStartSymbolName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST GGS_galgas_33_GrammarComponentAST::readProperty_mStartSymbolLabelList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_nonTerminalLabelListAST () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mStartSymbolLabelList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_galgas_33_GrammarComponentAST::readProperty_mUnusedNonterminalList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mUnusedNonterminalList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_galgas_33_GrammarComponentAST::readProperty_mHasTranslateFeature (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @galgas3GrammarComponentAST class
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

cPtr_galgas_33_GrammarComponentAST::cPtr_galgas_33_GrammarComponentAST (const GGS_bool & in_isPredefined,
                                                                        const GGS_lbool & in_mHasIndexing,
                                                                        const GGS_lstring & in_mGrammarComponentName,
                                                                        const GGS_lstring & in_mGrammarClass,
                                                                        const GGS_lstringlist & in_mSyntaxComponents,
                                                                        const GGS_lstring & in_mStartSymbolName,
                                                                        const GGS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                                                        const GGS_lstringlist & in_mUnusedNonterminalList,
                                                                        const GGS_bool & in_mHasTranslateFeature,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_galgas_33_GrammarComponentAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_galgas_33_GrammarComponentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_galgas_33_GrammarComponentAST (mProperty_isPredefined, mProperty_mHasIndexing, mProperty_mGrammarComponentName, mProperty_mGrammarClass, mProperty_mSyntaxComponents, mProperty_mStartSymbolName, mProperty_mStartSymbolLabelList, mProperty_mUnusedNonterminalList, mProperty_mHasTranslateFeature, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @galgas3GrammarComponentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ("galgas3GrammarComponentAST",
                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgas_33_GrammarComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgas_33_GrammarComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgas_33_GrammarComponentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST GGS_galgas_33_GrammarComponentAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_galgas_33_GrammarComponentAST result ;
  const GGS_galgas_33_GrammarComponentAST * p = (const GGS_galgas_33_GrammarComponentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgas_33_GrammarComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3GrammarComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@galgasDeclarationAST getOptionalTypeName'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_getOptionalTypeName (GGS_galgasDeclarationAST & ioObject,
                                          GGS_lstring & outArgument_outOptionalTypeName,
                                          const GGS_lstring constinArgument_inTypeName,
                                          const GGS_bool constinArgument_inPredefined,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptionalTypeName.drop () ; // Release 'out' argument
  outArgument_outOptionalTypeName = function_makeOptionalTypeLName (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 425)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_galgasDeclarationAST temp_1 = ioObject ;
    test_0 = temp_1.readProperty_implicitTypeDeclarationSet ().getter_hasKey (outArgument_outOptionalTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 426)).operator_not (SOURCE_FILE ("semanticsTypesForAST.galgas4", 426)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioObject.mProperty_implicitTypeDeclarationSet.plusPlusAssignOperation (outArgument_outOptionalTypeName.readProperty_string ()  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 427)) ;
      ioObject.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_semanticDeclarationListAST_2E_element::init_21_ (GGS_optionalTypeDeclarationAST::init_21_isPredefined_21_optionalTypeName_21_unwrappedTypeName_21_isUsefull (constinArgument_inPredefined, outArgument_outOptionalTypeName, constinArgument_inTypeName, GGS_bool (true), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas4", 428)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//     L E X I Q U E
//
//--------------------------------------------------------------------------------------------------

#include "utf32.h"
#include "scanner_actions.h"
#include "LexiqueIntrospection.h"

//--------------------------------------------------------------------------------------------------

Lexique_galgasTemplateScanner::Lexique_galgasTemplateScanner (Compiler * inCallerCompiler,
                                                              const String & inSourceFileName
                                                              COMMA_LOCATION_ARGS) :
Lexique_galgasScanner_34_ (inCallerCompiler, inSourceFileName COMMA_THERE),
mMatchedTemplateDelimiterIndex (-1) {
}

//--------------------------------------------------------------------------------------------------

Lexique_galgasTemplateScanner::Lexique_galgasTemplateScanner (Compiler * inCallerCompiler,
                                                              const String & inSourceString,
                                                              const String & inStringForError
                                                              COMMA_LOCATION_ARGS) :
Lexique_galgasScanner_34_ (inCallerCompiler, inSourceString, inStringForError COMMA_THERE),
mMatchedTemplateDelimiterIndex (-1) {
}

//--------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S
//--------------------------------------------------------------------------------------------------

//--- Unicode string for '$\n$'
static const std::initializer_list <utf32> kUnicodeString_galgasTemplateScanner__A_ = {
  utf32 (10),
} ;

//--- Unicode string for '$%$'
static const std::initializer_list <utf32> kUnicodeString_galgasTemplateScanner__25_ = {
  utf32 ('%'),
} ;

//--- Unicode string for '$\\$'
static const std::initializer_list <utf32> kUnicodeString_galgasTemplateScanner__5C_ = {
  utf32 ('\\'),
} ;

//--- Unicode string for '$\\%$'
static const std::initializer_list <utf32> kUnicodeString_galgasTemplateScanner__5C__25_ = {
  utf32 ('\\'),
  utf32 ('%'),
} ;

//--- Unicode string for '$\\\\$'
static const std::initializer_list <utf32> kUnicodeString_galgasTemplateScanner__5C__5C_ = {
  utf32 ('\\'),
  utf32 ('\\'),
} ;

//--- Unicode string for '$\\n$'
static const std::initializer_list <utf32> kUnicodeString_galgasTemplateScanner__5C_n = {
  utf32 ('\\'),
  utf32 ('n'),
} ;

//--------------------------------------------------------------------------------------------------
//                           Template Delimiters
//--------------------------------------------------------------------------------------------------

static const TemplateDelimiter galgasTemplateScanner_kTemplateDefinitionArray [1] = {
  TemplateDelimiter (kUnicodeString_galgasTemplateScanner__25_, 1, kUnicodeString_galgasTemplateScanner__25_, 1, nullptr, true)
} ;

//--------------------------------------------------------------------------------------------------
//                           Template Replacements
//--------------------------------------------------------------------------------------------------

static const TemplateDelimiter galgasTemplateScanner_kTemplateReplacementArray [3] = {
  TemplateDelimiter (kUnicodeString_galgasTemplateScanner__5C__25_, 2, kUnicodeString_galgasTemplateScanner__25_, 1, nullptr, true),
  TemplateDelimiter (kUnicodeString_galgasTemplateScanner__5C_n, 2, kUnicodeString_galgasTemplateScanner__A_, 1, nullptr, true),
  TemplateDelimiter (kUnicodeString_galgasTemplateScanner__5C__5C_, 2, kUnicodeString_galgasTemplateScanner__5C_, 1, nullptr, true)
} ;

//--------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark
//--------------------------------------------------------------------------------------------------

static const bool galgasTemplateScanner_kEndOfScriptInTemplateArray [192] = {
  false /* identifier */,
  false /* double.xxx */,
  false /* literalInt */,
  false /* 'char' */,
  false /* $terminal$ */,
  false /* comment */,
  false /* commentMark */,
  false /* @type */,
  false /* ?selector: */,
  false /* ? */,
  false /* ?!selector: */,
  false /* ?! */,
  false /* !selector: */,
  false /* ! */,
  false /* !?selector: */,
  false /* !? */,
  false /* < */,
  false /* <= */,
  false /* << */,
  false /* <non_terminal> */,
  false /* "string" */,
  false /* abstract */,
  false /* after */,
  false /* as */,
  false /* before */,
  false /* between */,
  false /* block */,
  false /* boolset */,
  false /* case */,
  false /* class */,
  false /* default */,
  false /* dict */,
  false /* do */,
  false /* drop */,
  false /* else */,
  false /* elsif */,
  false /* end */,
  false /* enum */,
  false /* error */,
  false /* extension */,
  false /* extern */,
  false /* false */,
  false /* fileprivate */,
  false /* filewrapper */,
  false /* final */,
  false /* for */,
  false /* fixit */,
  false /* func */,
  false /* grammar */,
  false /* graph */,
  false /* guard */,
  false /* gui */,
  false /* if */,
  false /* in */,
  false /* indexing */,
  false /* init */,
  false /* is */,
  false /* json */,
  false /* label */,
  false /* let */,
  false /* lexique */,
  false /* list */,
  false /* log */,
  false /* loop */,
  false /* map */,
  false /* mod */,
  false /* mutating */,
  false /* nil */,
  false /* not */,
  false /* on */,
  false /* operator */,
  false /* option */,
  false /* or */,
  false /* override */,
  false /* package */,
  false /* parse */,
  false /* public */,
  false /* protected */,
  false /* private */,
  false /* proc */,
  false /* project */,
  false /* repeat */,
  false /* rewind */,
  false /* rule */,
  false /* select */,
  false /* self */,
  false /* send */,
  false /* sortedlist */,
  false /* spoil */,
  false /* super */,
  false /* struct */,
  false /* style */,
  false /* switch */,
  false /* syntax */,
  false /* tag */,
  false /* template */,
  false /* then */,
  false /* true */,
  false /* typealias */,
  false /* var */,
  false /* warning */,
  false /* weak */,
  false /* while */,
  false /* with */,
  false /* #applicationBundleBase */,
  false /* #clonable */,
  false /* #codeblocks-linux32 */,
  false /* #codeblocks-linux64 */,
  false /* #codeblocks-windows */,
  false /* #comparable */,
  false /* #equatable */,
  false /* #errorMessage */,
  false /* #from */,
  false /* #generatedInSeparateFile */,
  false /* #initArgLabel */,
  false /* #insertAfter */,
  false /* #insertBefore */,
  false /* #insertOrReplaceSetter */,
  false /* #insertSetter */,
  false /* #libpmAtPath */,
  false /* #macCodeSign */,
  false /* #makefile-macosx */,
  false /* #makefile-unix */,
  false /* #makefile-x86linux32-on-macosx */,
  false /* #makefile-x86linux64-on-macosx */,
  false /* #makefile-arm64-linux-on-macosx */,
  false /* #makefile-win32-on-macosx */,
  false /* #MacSwiftApp */,
  false /* #nonAtomicSelection */,
  false /* #once */,
  false /* #preserved */,
  false /* #quietOutputByDefault */,
  false /* #replaceBy */,
  false /* #remove */,
  false /* #removeSetter */,
  false /* #replaceSetter */,
  false /* #searchMethod */,
  false /* #searchSubscript */,
  false /* #searchString */,
  false /* #templateEndMark */,
  false /* #templateReplacement */,
  false /* #translate */,
  false /* #unused */,
  false /* #usefull */,
  false /* * */,
  false /* , */,
  false /* + */,
  false /* &+ */,
  false /* &- */,
  false /* &* */,
  false /* &/ */,
  false /* > */,
  false /* ; */,
  false /* : */,
  false /* :> */,
  false /* - */,
  false /* ( */,
  false /* ) */,
  false /* -> */,
  false /* == */,
  false /* = */,
  false /* && */,
  false /* [ */,
  false /* ] */,
  false /* ++= */,
  false /* . */,
  false /* @( */,
  false /* ... */,
  false /* ..< */,
  false /* += */,
  false /* -= */,
  false /* *= */,
  false /* /= */,
  false /* &= */,
  false /* |= */,
  false /* ^= */,
  false /* / */,
  false /* != */,
  false /* >= */,
  false /* & */,
  false /* { */,
  false /* } */,
  false /* ` */,
  false /* || */,
  false /* | */,
  false /* ^ */,
  false /* >> */,
  false /* ~ */,
  false /* === */,
  false /* !== */,
  false /* ?^ */,
  false /* !^ */
} ;

//--------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N
//--------------------------------------------------------------------------------------------------

bool Lexique_galgasTemplateScanner::parseLexicalToken (void) {
  cTokenFor_galgasTemplateScanner token ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (mCurrentChar.u32 () != '\0')) {
    if ((mMatchedTemplateDelimiterIndex >= 0)
        && (galgasTemplateScanner_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength > 0)
        && (mCurrentChar.u32 () != '\0')) {
      const bool foundEndDelimitor = testForInputUTF32String (galgasTemplateScanner_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndString,
                                                               true) ;
      if (foundEndDelimitor) {
        mMatchedTemplateDelimiterIndex = -1 ;
      }
    }
    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar.u32 () != '\0')) {
      int32_t replacementIndex = 0 ;
      while (replacementIndex >= 0) {
        replacementIndex = findTemplateDelimiterIndex (galgasTemplateScanner_kTemplateReplacementArray, 3) ;
        if (replacementIndex >= 0) {
          if (galgasTemplateScanner_kTemplateReplacementArray [replacementIndex].mReplacementFunction == nullptr) {
            token.mTemplateStringBeforeToken.appendString (galgasTemplateScanner_kTemplateReplacementArray [replacementIndex].mEndString) ;
          }else{
            String s ;
            while (notTestForInputUTF32String (galgasTemplateScanner_kTemplateReplacementArray [replacementIndex].mEndString,
                                               kEndOfSourceLexicalErrorMessage
                                               COMMA_HERE)) {
              s.appendChar (previousChar ()) ;
            }
            galgasTemplateScanner_kTemplateReplacementArray [replacementIndex].mReplacementFunction (*this, s, token.mTemplateStringBeforeToken) ;
          }
        }
      }
      mMatchedTemplateDelimiterIndex = findTemplateDelimiterIndex (galgasTemplateScanner_kTemplateDefinitionArray, 1) ;
      if (mMatchedTemplateDelimiterIndex < 0) {
        token.mTemplateStringBeforeToken.appendChar (mCurrentChar) ;
        advance () ;
      }
    }
    if ((mMatchedTemplateDelimiterIndex >= 0) && (mCurrentChar.u32 () != '\0')) {
      internalParseLexicalToken (token) ;
    }
    if ((token.mTokenCode > 0) && galgasTemplateScanner_kEndOfScriptInTemplateArray [token.mTokenCode - 1]) {
      mMatchedTemplateDelimiterIndex = -1 ;
    }
  }
  if (mCurrentChar.u32 () == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N
//--------------------------------------------------------------------------------------------------

GGS_stringlist Lexique_galgasTemplateScanner::symbols (LOCATION_ARGS) {
  GGS_stringlist result = GGS_stringlist::init (nullptr COMMA_THERE) ;
  result.addAssignOperation (GGS_string ("identifier") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("double.xxx") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("literalInt") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("'char'") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("$terminal$") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("comment") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("commentMark") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("@type") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\?selector:") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\?") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\?!selector:") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\?!") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!selector:") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!\?selector:") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!\?") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<<") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<non_terminal>") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\"string\"") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("abstract") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("after") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("as") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("before") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("between") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("block") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("boolset") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("case") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("class") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("default") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("dict") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("do") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("drop") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("else") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("elsif") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("end") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("enum") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("error") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("extension") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("extern") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("false") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("fileprivate") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("filewrapper") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("final") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("for") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("fixit") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("func") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("grammar") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("graph") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("guard") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("gui") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("if") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("in") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("indexing") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("init") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("is") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("json") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("label") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("let") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("lexique") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("list") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("log") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("loop") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("map") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("mod") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("mutating") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("nil") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("not") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("on") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("operator") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("option") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("or") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("override") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("package") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("parse") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("public") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("protected") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("private") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("proc") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("project") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("repeat") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("rewind") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("rule") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("select") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("self") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("send") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("sortedlist") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("spoil") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("super") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("struct") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("style") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("switch") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("syntax") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("tag") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("template") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("then") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("true") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("typealias") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("var") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("warning") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("weak") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("while") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("with") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#applicationBundleBase") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#clonable") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#codeblocks-linux32") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#codeblocks-linux64") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#codeblocks-windows") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#comparable") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#equatable") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#errorMessage") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#from") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#generatedInSeparateFile") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#initArgLabel") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#insertAfter") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#insertBefore") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#insertOrReplaceSetter") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#insertSetter") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#libpmAtPath") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#macCodeSign") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#makefile-macosx") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#makefile-unix") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#makefile-x86linux32-on-macosx") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#makefile-x86linux64-on-macosx") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#makefile-arm64-linux-on-macosx") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#makefile-win32-on-macosx") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#MacSwiftApp") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#nonAtomicSelection") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#once") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#preserved") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#quietOutputByDefault") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#replaceBy") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#remove") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#removeSetter") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#replaceSetter") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#searchMethod") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#searchSubscript") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#searchString") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#templateEndMark") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#templateReplacement") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#translate") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#unused") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("#usefull") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("*") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (",") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("+") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&+") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&-") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&*") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&/") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (">") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (";") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (":") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (":>") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("-") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("(") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (")") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("->") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("==") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&&") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("[") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("]") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("++=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (".") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("@(") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("...") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("..<") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("+=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("-=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("*=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("/=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("|=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("^=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("/") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (">=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("{") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("}") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("`") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("||") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("|") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("^") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (">>") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("~") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("===") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!==") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\?^") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!^") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_galgasTemplateScanner (GenericUniqueArray <String> & /* ioList */) {
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_galgasTemplateScanner (const String & /* inIdentifier */,
                                                            bool & /* ioFound */,
                                                            GenericUniqueArray <String> & /* ioList */) {
}

//--------------------------------------------------------------------------------------------------

static LexiqueIntrospection lexiqueIntrospection_galgasTemplateScanner
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_galgasTemplateScanner, getKeywordsForIdentifier_galgasTemplateScanner) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@templateInstructionForGeneration templateCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_templateCodeGeneration (cPtr_templateInstructionForGeneration * inObject,
                                                 GGS_string & io_ioGeneratedCode,
                                                 GGS_stringset & io_ioInclusionSet,
                                                 GGS_uint & io__5F_ioTemporaryVariableIndex,
                                                 GGS_stringset & io__5F_ioUnusedVariableCppNameSet,
                                                 GGS_bool & io__5F_ioUseColumnMarker,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_templateInstructionForGeneration) ;
    inObject->method_templateCodeGeneration (io_ioGeneratedCode, io_ioInclusionSet, io__5F_ioTemporaryVariableIndex, io__5F_ioUnusedVariableCppNameSet, io__5F_ioUseColumnMarker, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @templateInstructionForeachAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionForeachAST::objectCompare (const GGS_templateInstructionForeachAST & inOperand) const {
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

GGS_templateInstructionForeachAST::GGS_templateInstructionForeachAST (void) :
GGS_templateInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionForeachAST GGS_templateInstructionForeachAST::
init_21__21__21__21__21__21__21__21__21_ (const GGS_bool & in_mIsAscending,
                                          const GGS_templateExpressionAST & in_mExpression,
                                          const GGS_lstringlist & in_mEnumeration,
                                          const GGS_location & in_mEndOfProperties,
                                          const GGS_templateInstructionListAST & in_mBeforeInstructionList,
                                          const GGS_templateInstructionListAST & in_mDoInstructionList,
                                          const GGS_lstring & in_mIndexIdentifier,
                                          const GGS_templateInstructionListAST & in_mBetweenInstructionList,
                                          const GGS_templateInstructionListAST & in_mAfterInstructionList,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionForeachAST * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionForeachAST (inCompiler COMMA_THERE)) ;
  object->templateInstructionForeachAST_init_21__21__21__21__21__21__21__21__21_ (in_mIsAscending, in_mExpression, in_mEnumeration, in_mEndOfProperties, in_mBeforeInstructionList, in_mDoInstructionList, in_mIndexIdentifier, in_mBetweenInstructionList, in_mAfterInstructionList, inCompiler) ;
  const GGS_templateInstructionForeachAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachAST::
templateInstructionForeachAST_init_21__21__21__21__21__21__21__21__21_ (const GGS_bool & in_mIsAscending,
                                                                        const GGS_templateExpressionAST & in_mExpression,
                                                                        const GGS_lstringlist & in_mEnumeration,
                                                                        const GGS_location & in_mEndOfProperties,
                                                                        const GGS_templateInstructionListAST & in_mBeforeInstructionList,
                                                                        const GGS_templateInstructionListAST & in_mDoInstructionList,
                                                                        const GGS_lstring & in_mIndexIdentifier,
                                                                        const GGS_templateInstructionListAST & in_mBetweenInstructionList,
                                                                        const GGS_templateInstructionListAST & in_mAfterInstructionList,
                                                                        Compiler * /* inCompiler */) {
  mProperty_mIsAscending = in_mIsAscending ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mEnumeration = in_mEnumeration ;
  mProperty_mEndOfProperties = in_mEndOfProperties ;
  mProperty_mBeforeInstructionList = in_mBeforeInstructionList ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mIndexIdentifier = in_mIndexIdentifier ;
  mProperty_mBetweenInstructionList = in_mBetweenInstructionList ;
  mProperty_mAfterInstructionList = in_mAfterInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachAST::GGS_templateInstructionForeachAST (const cPtr_templateInstructionForeachAST * inSourcePtr) :
GGS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionForeachAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_templateInstructionForeachAST::readProperty_mIsAscending (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mIsAscending ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateInstructionForeachAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_templateInstructionForeachAST::readProperty_mEnumeration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mEnumeration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateInstructionForeachAST::readProperty_mEndOfProperties (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mEndOfProperties ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionForeachAST::readProperty_mBeforeInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mBeforeInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionForeachAST::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateInstructionForeachAST::readProperty_mIndexIdentifier (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mIndexIdentifier ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionForeachAST::readProperty_mBetweenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mBetweenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionForeachAST::readProperty_mAfterInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mAfterInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionForeachAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionForeachAST::cPtr_templateInstructionForeachAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (inCompiler COMMA_THERE),
mProperty_mIsAscending (),
mProperty_mExpression (),
mProperty_mEnumeration (),
mProperty_mEndOfProperties (),
mProperty_mBeforeInstructionList (),
mProperty_mDoInstructionList (),
mProperty_mIndexIdentifier (),
mProperty_mBetweenInstructionList (),
mProperty_mAfterInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionForeachAST::cPtr_templateInstructionForeachAST (const GGS_bool & in_mIsAscending,
                                                                        const GGS_templateExpressionAST & in_mExpression,
                                                                        const GGS_lstringlist & in_mEnumeration,
                                                                        const GGS_location & in_mEndOfProperties,
                                                                        const GGS_templateInstructionListAST & in_mBeforeInstructionList,
                                                                        const GGS_templateInstructionListAST & in_mDoInstructionList,
                                                                        const GGS_lstring & in_mIndexIdentifier,
                                                                        const GGS_templateInstructionListAST & in_mBetweenInstructionList,
                                                                        const GGS_templateInstructionListAST & in_mAfterInstructionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (inCompiler COMMA_THERE),
mProperty_mIsAscending (),
mProperty_mExpression (),
mProperty_mEnumeration (),
mProperty_mEndOfProperties (),
mProperty_mBeforeInstructionList (),
mProperty_mDoInstructionList (),
mProperty_mIndexIdentifier (),
mProperty_mBetweenInstructionList (),
mProperty_mAfterInstructionList () {
  mProperty_mIsAscending = in_mIsAscending ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mEnumeration = in_mEnumeration ;
  mProperty_mEndOfProperties = in_mEndOfProperties ;
  mProperty_mBeforeInstructionList = in_mBeforeInstructionList ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mIndexIdentifier = in_mIndexIdentifier ;
  mProperty_mBetweenInstructionList = in_mBetweenInstructionList ;
  mProperty_mAfterInstructionList = in_mAfterInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateInstructionForeachAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachAST ;
}

void cPtr_templateInstructionForeachAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionForeachAST:") ;
  mProperty_mIsAscending.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEnumeration.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfProperties.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBeforeInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIndexIdentifier.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBetweenInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAfterInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateInstructionForeachAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionForeachAST (mProperty_mIsAscending, mProperty_mExpression, mProperty_mEnumeration, mProperty_mEndOfProperties, mProperty_mBeforeInstructionList, mProperty_mDoInstructionList, mProperty_mIndexIdentifier, mProperty_mBetweenInstructionList, mProperty_mAfterInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionForeachAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mIsAscending.printNonNullClassInstanceProperties ("mIsAscending") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mEnumeration.printNonNullClassInstanceProperties ("mEnumeration") ;
    mProperty_mEndOfProperties.printNonNullClassInstanceProperties ("mEndOfProperties") ;
    mProperty_mBeforeInstructionList.printNonNullClassInstanceProperties ("mBeforeInstructionList") ;
    mProperty_mDoInstructionList.printNonNullClassInstanceProperties ("mDoInstructionList") ;
    mProperty_mIndexIdentifier.printNonNullClassInstanceProperties ("mIndexIdentifier") ;
    mProperty_mBetweenInstructionList.printNonNullClassInstanceProperties ("mBetweenInstructionList") ;
    mProperty_mAfterInstructionList.printNonNullClassInstanceProperties ("mAfterInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionForeachAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForeachAST ("templateInstructionForeachAST",
                                                                                  & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionForeachAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionForeachAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionForeachAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachAST GGS_templateInstructionForeachAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForeachAST result ;
  const GGS_templateInstructionForeachAST * p = (const GGS_templateInstructionForeachAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionForeachAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForeachAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionForeachAST_2E_weak::objectCompare (const GGS_templateInstructionForeachAST_2E_weak & inOperand) const {
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

GGS_templateInstructionForeachAST_2E_weak::GGS_templateInstructionForeachAST_2E_weak (void) :
GGS_templateInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachAST_2E_weak & GGS_templateInstructionForeachAST_2E_weak::operator = (const GGS_templateInstructionForeachAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachAST_2E_weak::GGS_templateInstructionForeachAST_2E_weak (const GGS_templateInstructionForeachAST & inSource) :
GGS_templateInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachAST_2E_weak GGS_templateInstructionForeachAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInstructionForeachAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachAST GGS_templateInstructionForeachAST_2E_weak::unwrappedValue (void) const {
  GGS_templateInstructionForeachAST result ;
  if (isValid ()) {
    const cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInstructionForeachAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachAST GGS_templateInstructionForeachAST_2E_weak::bang_templateInstructionForeachAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionForeachAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionForeachAST) ;
      result = GGS_templateInstructionForeachAST ((cPtr_templateInstructionForeachAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionForeachAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForeachAST_2E_weak ("templateInstructionForeachAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_templateInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionForeachAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionForeachAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionForeachAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachAST_2E_weak GGS_templateInstructionForeachAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForeachAST_2E_weak result ;
  const GGS_templateInstructionForeachAST_2E_weak * p = (const GGS_templateInstructionForeachAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionForeachAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForeachAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionForeachForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionForeachForGeneration::objectCompare (const GGS_templateInstructionForeachForGeneration & inOperand) const {
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

GGS_templateInstructionForeachForGeneration::GGS_templateInstructionForeachForGeneration (void) :
GGS_templateInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration GGS_templateInstructionForeachForGeneration::
init_21__21__21__21__21__21__21__21_ (const GGS_bool & in_mIsAscending,
                                      const GGS_semanticExpressionForGeneration & in_mExpression,
                                      const GGS_string & in_mEnumeratorCppName,
                                      const GGS_templateInstructionListForGeneration & in_mBeforeInstructionList,
                                      const GGS_templateInstructionListForGeneration & in_mDoInstructionList,
                                      const GGS_string & in_mIndexCppName,
                                      const GGS_templateInstructionListForGeneration & in_mBetweenInstructionList,
                                      const GGS_templateInstructionListForGeneration & in_mAfterInstructionList,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionForeachForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionForeachForGeneration (inCompiler COMMA_THERE)) ;
  object->templateInstructionForeachForGeneration_init_21__21__21__21__21__21__21__21_ (in_mIsAscending, in_mExpression, in_mEnumeratorCppName, in_mBeforeInstructionList, in_mDoInstructionList, in_mIndexCppName, in_mBetweenInstructionList, in_mAfterInstructionList, inCompiler) ;
  const GGS_templateInstructionForeachForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachForGeneration::
templateInstructionForeachForGeneration_init_21__21__21__21__21__21__21__21_ (const GGS_bool & in_mIsAscending,
                                                                              const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                              const GGS_string & in_mEnumeratorCppName,
                                                                              const GGS_templateInstructionListForGeneration & in_mBeforeInstructionList,
                                                                              const GGS_templateInstructionListForGeneration & in_mDoInstructionList,
                                                                              const GGS_string & in_mIndexCppName,
                                                                              const GGS_templateInstructionListForGeneration & in_mBetweenInstructionList,
                                                                              const GGS_templateInstructionListForGeneration & in_mAfterInstructionList,
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

GGS_templateInstructionForeachForGeneration::GGS_templateInstructionForeachForGeneration (const cPtr_templateInstructionForeachForGeneration * inSourcePtr) :
GGS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionForeachForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_templateInstructionForeachForGeneration::readProperty_mIsAscending (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mIsAscending ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_templateInstructionForeachForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_templateInstructionForeachForGeneration::readProperty_mEnumeratorCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mEnumeratorCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionForeachForGeneration::readProperty_mBeforeInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mBeforeInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionForeachForGeneration::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_templateInstructionForeachForGeneration::readProperty_mIndexCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mIndexCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionForeachForGeneration::readProperty_mBetweenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mBetweenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionForeachForGeneration::readProperty_mAfterInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mAfterInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionForeachForGeneration class
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

cPtr_templateInstructionForeachForGeneration::cPtr_templateInstructionForeachForGeneration (const GGS_bool & in_mIsAscending,
                                                                                            const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                                            const GGS_string & in_mEnumeratorCppName,
                                                                                            const GGS_templateInstructionListForGeneration & in_mBeforeInstructionList,
                                                                                            const GGS_templateInstructionListForGeneration & in_mDoInstructionList,
                                                                                            const GGS_string & in_mIndexCppName,
                                                                                            const GGS_templateInstructionListForGeneration & in_mBetweenInstructionList,
                                                                                            const GGS_templateInstructionListForGeneration & in_mAfterInstructionList,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_templateInstructionForeachForGeneration::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_templateInstructionForeachForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionForeachForGeneration (mProperty_mIsAscending, mProperty_mExpression, mProperty_mEnumeratorCppName, mProperty_mBeforeInstructionList, mProperty_mDoInstructionList, mProperty_mIndexCppName, mProperty_mBetweenInstructionList, mProperty_mAfterInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @templateInstructionForeachForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ("templateInstructionForeachForGeneration",
                                                                                            & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionForeachForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionForeachForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionForeachForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration GGS_templateInstructionForeachForGeneration::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForeachForGeneration result ;
  const GGS_templateInstructionForeachForGeneration * p = (const GGS_templateInstructionForeachForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionForeachForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForeachForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionForeachForGeneration_2E_weak::objectCompare (const GGS_templateInstructionForeachForGeneration_2E_weak & inOperand) const {
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

GGS_templateInstructionForeachForGeneration_2E_weak::GGS_templateInstructionForeachForGeneration_2E_weak (void) :
GGS_templateInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration_2E_weak & GGS_templateInstructionForeachForGeneration_2E_weak::operator = (const GGS_templateInstructionForeachForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration_2E_weak::GGS_templateInstructionForeachForGeneration_2E_weak (const GGS_templateInstructionForeachForGeneration & inSource) :
GGS_templateInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration_2E_weak GGS_templateInstructionForeachForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInstructionForeachForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration GGS_templateInstructionForeachForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_templateInstructionForeachForGeneration result ;
  if (isValid ()) {
    const cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInstructionForeachForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration GGS_templateInstructionForeachForGeneration_2E_weak::bang_templateInstructionForeachForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionForeachForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionForeachForGeneration) ;
      result = GGS_templateInstructionForeachForGeneration ((cPtr_templateInstructionForeachForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionForeachForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration_2E_weak ("templateInstructionForeachForGeneration.weak",
                                                                                                    & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionForeachForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionForeachForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionForeachForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration_2E_weak GGS_templateInstructionForeachForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForeachForGeneration_2E_weak result ;
  const GGS_templateInstructionForeachForGeneration_2E_weak * p = (const GGS_templateInstructionForeachForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionForeachForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForeachForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

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

const GALGAS_TypeDescriptor * cPtr_templateInstructionExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ;
}

void cPtr_templateInstructionExpressionForGeneration::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionExpressionForGeneration:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateInstructionExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ("templateInstructionExpressionForGeneration",
                                                                                               & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionExpressionForGeneration::staticTypeDescriptor (void) const {
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
// @templateBlockInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateBlockInstructionForGeneration::objectCompare (const GGS_templateBlockInstructionForGeneration & inOperand) const {
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

GGS_templateBlockInstructionForGeneration::GGS_templateBlockInstructionForGeneration (void) :
GGS_templateInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateBlockInstructionForGeneration GGS_templateBlockInstructionForGeneration::
init_21__21__21_ (const GGS_semanticExpressionForGeneration & in_mExpression,
                  const GGS_location & in_mLocation,
                  const GGS_templateInstructionListForGeneration & in_mBlockInstructionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateBlockInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_templateBlockInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->templateBlockInstructionForGeneration_init_21__21__21_ (in_mExpression, in_mLocation, in_mBlockInstructionList, inCompiler) ;
  const GGS_templateBlockInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionForGeneration::
templateBlockInstructionForGeneration_init_21__21__21_ (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                        const GGS_location & in_mLocation,
                                                        const GGS_templateInstructionListForGeneration & in_mBlockInstructionList,
                                                        Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mBlockInstructionList = in_mBlockInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateBlockInstructionForGeneration::GGS_templateBlockInstructionForGeneration (const cPtr_templateBlockInstructionForGeneration * inSourcePtr) :
GGS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateBlockInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_templateBlockInstructionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_templateBlockInstructionForGeneration * p = (cPtr_templateBlockInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateBlockInstructionForGeneration::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateBlockInstructionForGeneration * p = (cPtr_templateBlockInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionForGeneration) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateBlockInstructionForGeneration::readProperty_mBlockInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateBlockInstructionForGeneration * p = (cPtr_templateBlockInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionForGeneration) ;
    return p->mProperty_mBlockInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateBlockInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_templateBlockInstructionForGeneration::cPtr_templateBlockInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mLocation (),
mProperty_mBlockInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateBlockInstructionForGeneration::cPtr_templateBlockInstructionForGeneration (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                                        const GGS_location & in_mLocation,
                                                                                        const GGS_templateInstructionListForGeneration & in_mBlockInstructionList,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mLocation (),
mProperty_mBlockInstructionList () {
  mProperty_mExpression = in_mExpression ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mBlockInstructionList = in_mBlockInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateBlockInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration ;
}

void cPtr_templateBlockInstructionForGeneration::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@templateBlockInstructionForGeneration:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBlockInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateBlockInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateBlockInstructionForGeneration (mProperty_mExpression, mProperty_mLocation, mProperty_mBlockInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateBlockInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
    mProperty_mBlockInstructionList.printNonNullClassInstanceProperties ("mBlockInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateBlockInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration ("templateBlockInstructionForGeneration",
                                                                                          & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateBlockInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateBlockInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateBlockInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateBlockInstructionForGeneration GGS_templateBlockInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_templateBlockInstructionForGeneration result ;
  const GGS_templateBlockInstructionForGeneration * p = (const GGS_templateBlockInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateBlockInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateBlockInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateGetterCallInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateGetterCallInExpressionAST::objectCompare (const GGS_templateGetterCallInExpressionAST & inOperand) const {
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

GGS_templateGetterCallInExpressionAST::GGS_templateGetterCallInExpressionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST GGS_templateGetterCallInExpressionAST::
init_21__21__21__21_ (const GGS_templateExpressionAST & in_mReceiverExpression,
                      const GGS_lstring & in_mGetterName,
                      const GGS_templateExpressionListAST & in_mExpressionList,
                      const GGS_location & in_mExpressionLocation,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_templateGetterCallInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateGetterCallInExpressionAST (inCompiler COMMA_THERE)) ;
  object->templateGetterCallInExpressionAST_init_21__21__21__21_ (in_mReceiverExpression, in_mGetterName, in_mExpressionList, in_mExpressionLocation, inCompiler) ;
  const GGS_templateGetterCallInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateGetterCallInExpressionAST::
templateGetterCallInExpressionAST_init_21__21__21__21_ (const GGS_templateExpressionAST & in_mReceiverExpression,
                                                        const GGS_lstring & in_mGetterName,
                                                        const GGS_templateExpressionListAST & in_mExpressionList,
                                                        const GGS_location & in_mExpressionLocation,
                                                        Compiler * /* inCompiler */) {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mGetterName = in_mGetterName ;
  mProperty_mExpressionList = in_mExpressionList ;
  mProperty_mExpressionLocation = in_mExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST::GGS_templateGetterCallInExpressionAST (const cPtr_templateGetterCallInExpressionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateGetterCallInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateGetterCallInExpressionAST::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateGetterCallInExpressionAST * p = (cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateGetterCallInExpressionAST::readProperty_mGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateGetterCallInExpressionAST * p = (cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    return p->mProperty_mGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateGetterCallInExpressionAST::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionListAST () ;
  }else{
    cPtr_templateGetterCallInExpressionAST * p = (cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    return p->mProperty_mExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateGetterCallInExpressionAST::readProperty_mExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateGetterCallInExpressionAST * p = (cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    return p->mProperty_mExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateGetterCallInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateGetterCallInExpressionAST::cPtr_templateGetterCallInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mGetterName (),
mProperty_mExpressionList (),
mProperty_mExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateGetterCallInExpressionAST::cPtr_templateGetterCallInExpressionAST (const GGS_templateExpressionAST & in_mReceiverExpression,
                                                                                const GGS_lstring & in_mGetterName,
                                                                                const GGS_templateExpressionListAST & in_mExpressionList,
                                                                                const GGS_location & in_mExpressionLocation,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mGetterName (),
mProperty_mExpressionList (),
mProperty_mExpressionLocation () {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mGetterName = in_mGetterName ;
  mProperty_mExpressionList = in_mExpressionList ;
  mProperty_mExpressionLocation = in_mExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateGetterCallInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST ;
}

void cPtr_templateGetterCallInExpressionAST::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@templateGetterCallInExpressionAST:") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateGetterCallInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateGetterCallInExpressionAST (mProperty_mReceiverExpression, mProperty_mGetterName, mProperty_mExpressionList, mProperty_mExpressionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateGetterCallInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mGetterName.printNonNullClassInstanceProperties ("mGetterName") ;
    mProperty_mExpressionList.printNonNullClassInstanceProperties ("mExpressionList") ;
    mProperty_mExpressionLocation.printNonNullClassInstanceProperties ("mExpressionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateGetterCallInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST ("templateGetterCallInExpressionAST",
                                                                                      & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateGetterCallInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateGetterCallInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateGetterCallInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST GGS_templateGetterCallInExpressionAST::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_templateGetterCallInExpressionAST result ;
  const GGS_templateGetterCallInExpressionAST * p = (const GGS_templateGetterCallInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateGetterCallInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateGetterCallInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateGetterCallInExpressionAST_2E_weak::objectCompare (const GGS_templateGetterCallInExpressionAST_2E_weak & inOperand) const {
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

GGS_templateGetterCallInExpressionAST_2E_weak::GGS_templateGetterCallInExpressionAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST_2E_weak & GGS_templateGetterCallInExpressionAST_2E_weak::operator = (const GGS_templateGetterCallInExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST_2E_weak::GGS_templateGetterCallInExpressionAST_2E_weak (const GGS_templateGetterCallInExpressionAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST_2E_weak GGS_templateGetterCallInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateGetterCallInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST GGS_templateGetterCallInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_templateGetterCallInExpressionAST result ;
  if (isValid ()) {
    const cPtr_templateGetterCallInExpressionAST * p = (cPtr_templateGetterCallInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateGetterCallInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST GGS_templateGetterCallInExpressionAST_2E_weak::bang_templateGetterCallInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateGetterCallInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateGetterCallInExpressionAST) ;
      result = GGS_templateGetterCallInExpressionAST ((cPtr_templateGetterCallInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateGetterCallInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST_2E_weak ("templateGetterCallInExpressionAST.weak",
                                                                                              & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateGetterCallInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateGetterCallInExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateGetterCallInExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST_2E_weak GGS_templateGetterCallInExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_templateGetterCallInExpressionAST_2E_weak result ;
  const GGS_templateGetterCallInExpressionAST_2E_weak * p = (const GGS_templateGetterCallInExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateGetterCallInExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateGetterCallInExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionSwitchForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionSwitchForGeneration::objectCompare (const GGS_templateInstructionSwitchForGeneration & inOperand) const {
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

GGS_templateInstructionSwitchForGeneration::GGS_templateInstructionSwitchForGeneration (void) :
GGS_templateInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionSwitchForGeneration GGS_templateInstructionSwitchForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_enumType,
                  const GGS_semanticExpressionForGeneration & in_switchExpression,
                  const GGS_templateInstructionSwitchBranchListForGeneration & in_templateInstructionSwitchBranchList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionSwitchForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionSwitchForGeneration (inCompiler COMMA_THERE)) ;
  object->templateInstructionSwitchForGeneration_init_21__21__21_ (in_enumType, in_switchExpression, in_templateInstructionSwitchBranchList, inCompiler) ;
  const GGS_templateInstructionSwitchForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionSwitchForGeneration::
templateInstructionSwitchForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_enumType,
                                                         const GGS_semanticExpressionForGeneration & in_switchExpression,
                                                         const GGS_templateInstructionSwitchBranchListForGeneration & in_templateInstructionSwitchBranchList,
                                                         Compiler * /* inCompiler */) {
  mProperty_enumType = in_enumType ;
  mProperty_switchExpression = in_switchExpression ;
  mProperty_templateInstructionSwitchBranchList = in_templateInstructionSwitchBranchList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchForGeneration::GGS_templateInstructionSwitchForGeneration (const cPtr_templateInstructionSwitchForGeneration * inSourcePtr) :
GGS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionSwitchForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_templateInstructionSwitchForGeneration::readProperty_enumType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_templateInstructionSwitchForGeneration * p = (cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
    return p->mProperty_enumType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_templateInstructionSwitchForGeneration::readProperty_switchExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_templateInstructionSwitchForGeneration * p = (cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
    return p->mProperty_switchExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration GGS_templateInstructionSwitchForGeneration::readProperty_templateInstructionSwitchBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionSwitchBranchListForGeneration () ;
  }else{
    cPtr_templateInstructionSwitchForGeneration * p = (cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
    return p->mProperty_templateInstructionSwitchBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionSwitchForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionSwitchForGeneration::cPtr_templateInstructionSwitchForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_enumType (),
mProperty_switchExpression (),
mProperty_templateInstructionSwitchBranchList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionSwitchForGeneration::cPtr_templateInstructionSwitchForGeneration (const GGS_unifiedTypeMapEntry & in_enumType,
                                                                                          const GGS_semanticExpressionForGeneration & in_switchExpression,
                                                                                          const GGS_templateInstructionSwitchBranchListForGeneration & in_templateInstructionSwitchBranchList,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_enumType (),
mProperty_switchExpression (),
mProperty_templateInstructionSwitchBranchList () {
  mProperty_enumType = in_enumType ;
  mProperty_switchExpression = in_switchExpression ;
  mProperty_templateInstructionSwitchBranchList = in_templateInstructionSwitchBranchList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateInstructionSwitchForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ;
}

void cPtr_templateInstructionSwitchForGeneration::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionSwitchForGeneration:") ;
  mProperty_enumType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_switchExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_templateInstructionSwitchBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateInstructionSwitchForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionSwitchForGeneration (mProperty_enumType, mProperty_switchExpression, mProperty_templateInstructionSwitchBranchList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionSwitchForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_enumType.printNonNullClassInstanceProperties ("enumType") ;
    mProperty_switchExpression.printNonNullClassInstanceProperties ("switchExpression") ;
    mProperty_templateInstructionSwitchBranchList.printNonNullClassInstanceProperties ("templateInstructionSwitchBranchList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionSwitchForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ("templateInstructionSwitchForGeneration",
                                                                                           & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionSwitchForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionSwitchForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionSwitchForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchForGeneration GGS_templateInstructionSwitchForGeneration::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_templateInstructionSwitchForGeneration result ;
  const GGS_templateInstructionSwitchForGeneration * p = (const GGS_templateInstructionSwitchForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionSwitchForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateClassFunctionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateClassFunctionAST::objectCompare (const GGS_templateClassFunctionAST & inOperand) const {
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

GGS_templateClassFunctionAST::GGS_templateClassFunctionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateClassFunctionAST GGS_templateClassFunctionAST::
init_21__21__21_ (const GGS_lstring & in_mTypeName,
                  const GGS_lstring & in_mClassFunctionName,
                  const GGS_templateExpressionListAST & in_mExpressionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateClassFunctionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateClassFunctionAST (inCompiler COMMA_THERE)) ;
  object->templateClassFunctionAST_init_21__21__21_ (in_mTypeName, in_mClassFunctionName, in_mExpressionList, inCompiler) ;
  const GGS_templateClassFunctionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateClassFunctionAST::
templateClassFunctionAST_init_21__21__21_ (const GGS_lstring & in_mTypeName,
                                           const GGS_lstring & in_mClassFunctionName,
                                           const GGS_templateExpressionListAST & in_mExpressionList,
                                           Compiler * /* inCompiler */) {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mClassFunctionName = in_mClassFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateClassFunctionAST::GGS_templateClassFunctionAST (const cPtr_templateClassFunctionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateClassFunctionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateClassFunctionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateClassFunctionAST * p = (cPtr_templateClassFunctionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateClassFunctionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateClassFunctionAST::readProperty_mClassFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateClassFunctionAST * p = (cPtr_templateClassFunctionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateClassFunctionAST) ;
    return p->mProperty_mClassFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateClassFunctionAST::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionListAST () ;
  }else{
    cPtr_templateClassFunctionAST * p = (cPtr_templateClassFunctionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateClassFunctionAST) ;
    return p->mProperty_mExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateClassFunctionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateClassFunctionAST::cPtr_templateClassFunctionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mClassFunctionName (),
mProperty_mExpressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateClassFunctionAST::cPtr_templateClassFunctionAST (const GGS_lstring & in_mTypeName,
                                                              const GGS_lstring & in_mClassFunctionName,
                                                              const GGS_templateExpressionListAST & in_mExpressionList,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mClassFunctionName (),
mProperty_mExpressionList () {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mClassFunctionName = in_mClassFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateClassFunctionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateClassFunctionAST ;
}

void cPtr_templateClassFunctionAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@templateClassFunctionAST:") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mClassFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateClassFunctionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateClassFunctionAST (mProperty_mTypeName, mProperty_mClassFunctionName, mProperty_mExpressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateClassFunctionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mClassFunctionName.printNonNullClassInstanceProperties ("mClassFunctionName") ;
    mProperty_mExpressionList.printNonNullClassInstanceProperties ("mExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateClassFunctionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateClassFunctionAST ("templateClassFunctionAST",
                                                                             & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateClassFunctionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateClassFunctionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateClassFunctionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateClassFunctionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateClassFunctionAST GGS_templateClassFunctionAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateClassFunctionAST result ;
  const GGS_templateClassFunctionAST * p = (const GGS_templateClassFunctionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateClassFunctionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateClassFunctionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateFileWrapperTemplateCallAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateFileWrapperTemplateCallAST::objectCompare (const GGS_templateFileWrapperTemplateCallAST & inOperand) const {
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

GGS_templateFileWrapperTemplateCallAST::GGS_templateFileWrapperTemplateCallAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateFileWrapperTemplateCallAST GGS_templateFileWrapperTemplateCallAST::
init_21__21__21_ (const GGS_lstring & in_mFileWrapperName,
                  const GGS_lstring & in_mTemplateName,
                  const GGS_templateExpressionListAST & in_mOutExpressionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateFileWrapperTemplateCallAST * object = nullptr ;
  macroMyNew (object, cPtr_templateFileWrapperTemplateCallAST (inCompiler COMMA_THERE)) ;
  object->templateFileWrapperTemplateCallAST_init_21__21__21_ (in_mFileWrapperName, in_mTemplateName, in_mOutExpressionList, inCompiler) ;
  const GGS_templateFileWrapperTemplateCallAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateFileWrapperTemplateCallAST::
templateFileWrapperTemplateCallAST_init_21__21__21_ (const GGS_lstring & in_mFileWrapperName,
                                                     const GGS_lstring & in_mTemplateName,
                                                     const GGS_templateExpressionListAST & in_mOutExpressionList,
                                                     Compiler * /* inCompiler */) {
  mProperty_mFileWrapperName = in_mFileWrapperName ;
  mProperty_mTemplateName = in_mTemplateName ;
  mProperty_mOutExpressionList = in_mOutExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateFileWrapperTemplateCallAST::GGS_templateFileWrapperTemplateCallAST (const cPtr_templateFileWrapperTemplateCallAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateFileWrapperTemplateCallAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateFileWrapperTemplateCallAST::readProperty_mFileWrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateFileWrapperTemplateCallAST * p = (cPtr_templateFileWrapperTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
    return p->mProperty_mFileWrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateFileWrapperTemplateCallAST::readProperty_mTemplateName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateFileWrapperTemplateCallAST * p = (cPtr_templateFileWrapperTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
    return p->mProperty_mTemplateName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateFileWrapperTemplateCallAST::readProperty_mOutExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionListAST () ;
  }else{
    cPtr_templateFileWrapperTemplateCallAST * p = (cPtr_templateFileWrapperTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
    return p->mProperty_mOutExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateFileWrapperTemplateCallAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateFileWrapperTemplateCallAST::cPtr_templateFileWrapperTemplateCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mFileWrapperName (),
mProperty_mTemplateName (),
mProperty_mOutExpressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateFileWrapperTemplateCallAST::cPtr_templateFileWrapperTemplateCallAST (const GGS_lstring & in_mFileWrapperName,
                                                                                  const GGS_lstring & in_mTemplateName,
                                                                                  const GGS_templateExpressionListAST & in_mOutExpressionList,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mFileWrapperName (),
mProperty_mTemplateName (),
mProperty_mOutExpressionList () {
  mProperty_mFileWrapperName = in_mFileWrapperName ;
  mProperty_mTemplateName = in_mTemplateName ;
  mProperty_mOutExpressionList = in_mOutExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateFileWrapperTemplateCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ;
}

void cPtr_templateFileWrapperTemplateCallAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@templateFileWrapperTemplateCallAST:") ;
  mProperty_mFileWrapperName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTemplateName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateFileWrapperTemplateCallAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateFileWrapperTemplateCallAST (mProperty_mFileWrapperName, mProperty_mTemplateName, mProperty_mOutExpressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateFileWrapperTemplateCallAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mFileWrapperName.printNonNullClassInstanceProperties ("mFileWrapperName") ;
    mProperty_mTemplateName.printNonNullClassInstanceProperties ("mTemplateName") ;
    mProperty_mOutExpressionList.printNonNullClassInstanceProperties ("mOutExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateFileWrapperTemplateCallAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ("templateFileWrapperTemplateCallAST",
                                                                                       & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateFileWrapperTemplateCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateFileWrapperTemplateCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateFileWrapperTemplateCallAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateFileWrapperTemplateCallAST GGS_templateFileWrapperTemplateCallAST::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_templateFileWrapperTemplateCallAST result ;
  const GGS_templateFileWrapperTemplateCallAST * p = (const GGS_templateFileWrapperTemplateCallAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateFileWrapperTemplateCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateFileWrapperTemplateCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateExtensionTemplateCallAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateExtensionTemplateCallAST::objectCompare (const GGS_templateExtensionTemplateCallAST & inOperand) const {
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

GGS_templateExtensionTemplateCallAST::GGS_templateExtensionTemplateCallAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateExtensionTemplateCallAST GGS_templateExtensionTemplateCallAST::
init_21__21__21_ (const GGS_templateExpressionAST & in_mExpressionValue,
                  const GGS_lstring & in_mTemplateName,
                  const GGS_templateExpressionListAST & in_mOutExpressionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateExtensionTemplateCallAST * object = nullptr ;
  macroMyNew (object, cPtr_templateExtensionTemplateCallAST (inCompiler COMMA_THERE)) ;
  object->templateExtensionTemplateCallAST_init_21__21__21_ (in_mExpressionValue, in_mTemplateName, in_mOutExpressionList, inCompiler) ;
  const GGS_templateExtensionTemplateCallAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateExtensionTemplateCallAST::
templateExtensionTemplateCallAST_init_21__21__21_ (const GGS_templateExpressionAST & in_mExpressionValue,
                                                   const GGS_lstring & in_mTemplateName,
                                                   const GGS_templateExpressionListAST & in_mOutExpressionList,
                                                   Compiler * /* inCompiler */) {
  mProperty_mExpressionValue = in_mExpressionValue ;
  mProperty_mTemplateName = in_mTemplateName ;
  mProperty_mOutExpressionList = in_mOutExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateExtensionTemplateCallAST::GGS_templateExtensionTemplateCallAST (const cPtr_templateExtensionTemplateCallAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateExtensionTemplateCallAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateExtensionTemplateCallAST::readProperty_mExpressionValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateExtensionTemplateCallAST * p = (cPtr_templateExtensionTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateExtensionTemplateCallAST) ;
    return p->mProperty_mExpressionValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateExtensionTemplateCallAST::readProperty_mTemplateName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateExtensionTemplateCallAST * p = (cPtr_templateExtensionTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateExtensionTemplateCallAST) ;
    return p->mProperty_mTemplateName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateExtensionTemplateCallAST::readProperty_mOutExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionListAST () ;
  }else{
    cPtr_templateExtensionTemplateCallAST * p = (cPtr_templateExtensionTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateExtensionTemplateCallAST) ;
    return p->mProperty_mOutExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateExtensionTemplateCallAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateExtensionTemplateCallAST::cPtr_templateExtensionTemplateCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mExpressionValue (),
mProperty_mTemplateName (),
mProperty_mOutExpressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateExtensionTemplateCallAST::cPtr_templateExtensionTemplateCallAST (const GGS_templateExpressionAST & in_mExpressionValue,
                                                                              const GGS_lstring & in_mTemplateName,
                                                                              const GGS_templateExpressionListAST & in_mOutExpressionList,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mExpressionValue (),
mProperty_mTemplateName (),
mProperty_mOutExpressionList () {
  mProperty_mExpressionValue = in_mExpressionValue ;
  mProperty_mTemplateName = in_mTemplateName ;
  mProperty_mOutExpressionList = in_mOutExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateExtensionTemplateCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST ;
}

void cPtr_templateExtensionTemplateCallAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@templateExtensionTemplateCallAST:") ;
  mProperty_mExpressionValue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTemplateName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateExtensionTemplateCallAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateExtensionTemplateCallAST (mProperty_mExpressionValue, mProperty_mTemplateName, mProperty_mOutExpressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateExtensionTemplateCallAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpressionValue.printNonNullClassInstanceProperties ("mExpressionValue") ;
    mProperty_mTemplateName.printNonNullClassInstanceProperties ("mTemplateName") ;
    mProperty_mOutExpressionList.printNonNullClassInstanceProperties ("mOutExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateExtensionTemplateCallAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST ("templateExtensionTemplateCallAST",
                                                                                     & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateExtensionTemplateCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateExtensionTemplateCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateExtensionTemplateCallAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateExtensionTemplateCallAST GGS_templateExtensionTemplateCallAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateExtensionTemplateCallAST result ;
  const GGS_templateExtensionTemplateCallAST * p = (const GGS_templateExtensionTemplateCallAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateExtensionTemplateCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateExtensionTemplateCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateLiteralUIntExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateLiteralUIntExpressionAST::objectCompare (const GGS_templateLiteralUIntExpressionAST & inOperand) const {
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

GGS_templateLiteralUIntExpressionAST::GGS_templateLiteralUIntExpressionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateLiteralUIntExpressionAST GGS_templateLiteralUIntExpressionAST::
init_21_ (const GGS_lbigint & in_mLiteralInt,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateLiteralUIntExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateLiteralUIntExpressionAST (inCompiler COMMA_THERE)) ;
  object->templateLiteralUIntExpressionAST_init_21_ (in_mLiteralInt, inCompiler) ;
  const GGS_templateLiteralUIntExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralUIntExpressionAST::
templateLiteralUIntExpressionAST_init_21_ (const GGS_lbigint & in_mLiteralInt,
                                           Compiler * /* inCompiler */) {
  mProperty_mLiteralInt = in_mLiteralInt ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralUIntExpressionAST::GGS_templateLiteralUIntExpressionAST (const cPtr_templateLiteralUIntExpressionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralUIntExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lbigint GGS_templateLiteralUIntExpressionAST::readProperty_mLiteralInt (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lbigint () ;
  }else{
    cPtr_templateLiteralUIntExpressionAST * p = (cPtr_templateLiteralUIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralUIntExpressionAST) ;
    return p->mProperty_mLiteralInt ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateLiteralUIntExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralUIntExpressionAST::cPtr_templateLiteralUIntExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralInt () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralUIntExpressionAST::cPtr_templateLiteralUIntExpressionAST (const GGS_lbigint & in_mLiteralInt,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralInt () {
  mProperty_mLiteralInt = in_mLiteralInt ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateLiteralUIntExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ;
}

void cPtr_templateLiteralUIntExpressionAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@templateLiteralUIntExpressionAST:") ;
  mProperty_mLiteralInt.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateLiteralUIntExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateLiteralUIntExpressionAST (mProperty_mLiteralInt, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateLiteralUIntExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralInt.printNonNullClassInstanceProperties ("mLiteralInt") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateLiteralUIntExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ("templateLiteralUIntExpressionAST",
                                                                                     & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateLiteralUIntExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateLiteralUIntExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateLiteralUIntExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralUIntExpressionAST GGS_templateLiteralUIntExpressionAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateLiteralUIntExpressionAST result ;
  const GGS_templateLiteralUIntExpressionAST * p = (const GGS_templateLiteralUIntExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateLiteralUIntExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralUIntExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @structFieldAccessTemplateExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structFieldAccessTemplateExpressionAST::objectCompare (const GGS_structFieldAccessTemplateExpressionAST & inOperand) const {
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

GGS_structFieldAccessTemplateExpressionAST::GGS_structFieldAccessTemplateExpressionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_structFieldAccessTemplateExpressionAST GGS_structFieldAccessTemplateExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_templateExpressionAST & in_mExpression,
                  const GGS_lstring & in_mStructFieldName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_structFieldAccessTemplateExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_structFieldAccessTemplateExpressionAST (inCompiler COMMA_THERE)) ;
  object->structFieldAccessTemplateExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mExpression, in_mStructFieldName, inCompiler) ;
  const GGS_structFieldAccessTemplateExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_structFieldAccessTemplateExpressionAST::
structFieldAccessTemplateExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                                         const GGS_templateExpressionAST & in_mExpression,
                                                         const GGS_lstring & in_mStructFieldName,
                                                         Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mStructFieldName = in_mStructFieldName ;
}

//--------------------------------------------------------------------------------------------------

GGS_structFieldAccessTemplateExpressionAST::GGS_structFieldAccessTemplateExpressionAST (const cPtr_structFieldAccessTemplateExpressionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structFieldAccessTemplateExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_structFieldAccessTemplateExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_structFieldAccessTemplateExpressionAST * p = (cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_structFieldAccessTemplateExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_structFieldAccessTemplateExpressionAST * p = (cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_structFieldAccessTemplateExpressionAST::readProperty_mStructFieldName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_structFieldAccessTemplateExpressionAST * p = (cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    return p->mProperty_mStructFieldName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @structFieldAccessTemplateExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_structFieldAccessTemplateExpressionAST::cPtr_structFieldAccessTemplateExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression (),
mProperty_mStructFieldName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_structFieldAccessTemplateExpressionAST::cPtr_structFieldAccessTemplateExpressionAST (const GGS_location & in_mOperatorLocation,
                                                                                          const GGS_templateExpressionAST & in_mExpression,
                                                                                          const GGS_lstring & in_mStructFieldName,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression (),
mProperty_mStructFieldName () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mStructFieldName = in_mStructFieldName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_structFieldAccessTemplateExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ;
}

void cPtr_structFieldAccessTemplateExpressionAST::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@structFieldAccessTemplateExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructFieldName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_structFieldAccessTemplateExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_structFieldAccessTemplateExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression, mProperty_mStructFieldName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_structFieldAccessTemplateExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mStructFieldName.printNonNullClassInstanceProperties ("mStructFieldName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @structFieldAccessTemplateExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ("structFieldAccessTemplateExpressionAST",
                                                                                           & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_structFieldAccessTemplateExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_structFieldAccessTemplateExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_structFieldAccessTemplateExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structFieldAccessTemplateExpressionAST GGS_structFieldAccessTemplateExpressionAST::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_structFieldAccessTemplateExpressionAST result ;
  const GGS_structFieldAccessTemplateExpressionAST * p = (const GGS_structFieldAccessTemplateExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_structFieldAccessTemplateExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structFieldAccessTemplateExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateOptionAccessAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateOptionAccessAST::objectCompare (const GGS_templateOptionAccessAST & inOperand) const {
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

GGS_templateOptionAccessAST::GGS_templateOptionAccessAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateOptionAccessAST GGS_templateOptionAccessAST::
init_21__21__21_ (const GGS_lstring & in_mOptionComponentName,
                  const GGS_lstring & in_mOptionName,
                  const GGS_lstring & in_mGetterName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateOptionAccessAST * object = nullptr ;
  macroMyNew (object, cPtr_templateOptionAccessAST (inCompiler COMMA_THERE)) ;
  object->templateOptionAccessAST_init_21__21__21_ (in_mOptionComponentName, in_mOptionName, in_mGetterName, inCompiler) ;
  const GGS_templateOptionAccessAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateOptionAccessAST::
templateOptionAccessAST_init_21__21__21_ (const GGS_lstring & in_mOptionComponentName,
                                          const GGS_lstring & in_mOptionName,
                                          const GGS_lstring & in_mGetterName,
                                          Compiler * /* inCompiler */) {
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionName = in_mOptionName ;
  mProperty_mGetterName = in_mGetterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateOptionAccessAST::GGS_templateOptionAccessAST (const cPtr_templateOptionAccessAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateOptionAccessAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateOptionAccessAST::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateOptionAccessAST * p = (cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateOptionAccessAST::readProperty_mOptionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateOptionAccessAST * p = (cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    return p->mProperty_mOptionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateOptionAccessAST::readProperty_mGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateOptionAccessAST * p = (cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    return p->mProperty_mGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateOptionAccessAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateOptionAccessAST::cPtr_templateOptionAccessAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOptionComponentName (),
mProperty_mOptionName (),
mProperty_mGetterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateOptionAccessAST::cPtr_templateOptionAccessAST (const GGS_lstring & in_mOptionComponentName,
                                                            const GGS_lstring & in_mOptionName,
                                                            const GGS_lstring & in_mGetterName,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOptionComponentName (),
mProperty_mOptionName (),
mProperty_mGetterName () {
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionName = in_mOptionName ;
  mProperty_mGetterName = in_mGetterName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateOptionAccessAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateOptionAccessAST ;
}

void cPtr_templateOptionAccessAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@templateOptionAccessAST:") ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateOptionAccessAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateOptionAccessAST (mProperty_mOptionComponentName, mProperty_mOptionName, mProperty_mGetterName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateOptionAccessAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOptionComponentName.printNonNullClassInstanceProperties ("mOptionComponentName") ;
    mProperty_mOptionName.printNonNullClassInstanceProperties ("mOptionName") ;
    mProperty_mGetterName.printNonNullClassInstanceProperties ("mGetterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateOptionAccessAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateOptionAccessAST ("templateOptionAccessAST",
                                                                            & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateOptionAccessAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateOptionAccessAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateOptionAccessAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateOptionAccessAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateOptionAccessAST GGS_templateOptionAccessAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_templateOptionAccessAST result ;
  const GGS_templateOptionAccessAST * p = (const GGS_templateOptionAccessAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateOptionAccessAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateOptionAccessAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateTestDynamicClassAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateTestDynamicClassAST::objectCompare (const GGS_templateTestDynamicClassAST & inOperand) const {
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

GGS_templateTestDynamicClassAST::GGS_templateTestDynamicClassAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateTestDynamicClassAST GGS_templateTestDynamicClassAST::
init_21__21__21_ (const GGS_templateExpressionAST & in_mReceiverExpression,
                  const GGS_location & in_mEndOfReceiverExpression,
                  const GGS_lstring & in_mTypeName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateTestDynamicClassAST * object = nullptr ;
  macroMyNew (object, cPtr_templateTestDynamicClassAST (inCompiler COMMA_THERE)) ;
  object->templateTestDynamicClassAST_init_21__21__21_ (in_mReceiverExpression, in_mEndOfReceiverExpression, in_mTypeName, inCompiler) ;
  const GGS_templateTestDynamicClassAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateTestDynamicClassAST::
templateTestDynamicClassAST_init_21__21__21_ (const GGS_templateExpressionAST & in_mReceiverExpression,
                                              const GGS_location & in_mEndOfReceiverExpression,
                                              const GGS_lstring & in_mTypeName,
                                              Compiler * /* inCompiler */) {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mEndOfReceiverExpression = in_mEndOfReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateTestDynamicClassAST::GGS_templateTestDynamicClassAST (const cPtr_templateTestDynamicClassAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateTestDynamicClassAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateTestDynamicClassAST::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateTestDynamicClassAST * p = (cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateTestDynamicClassAST::readProperty_mEndOfReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateTestDynamicClassAST * p = (cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    return p->mProperty_mEndOfReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateTestDynamicClassAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateTestDynamicClassAST * p = (cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateTestDynamicClassAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateTestDynamicClassAST::cPtr_templateTestDynamicClassAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mEndOfReceiverExpression (),
mProperty_mTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateTestDynamicClassAST::cPtr_templateTestDynamicClassAST (const GGS_templateExpressionAST & in_mReceiverExpression,
                                                                    const GGS_location & in_mEndOfReceiverExpression,
                                                                    const GGS_lstring & in_mTypeName,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mEndOfReceiverExpression (),
mProperty_mTypeName () {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mEndOfReceiverExpression = in_mEndOfReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateTestDynamicClassAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateTestDynamicClassAST ;
}

void cPtr_templateTestDynamicClassAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@templateTestDynamicClassAST:") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateTestDynamicClassAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateTestDynamicClassAST (mProperty_mReceiverExpression, mProperty_mEndOfReceiverExpression, mProperty_mTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateTestDynamicClassAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mEndOfReceiverExpression.printNonNullClassInstanceProperties ("mEndOfReceiverExpression") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateTestDynamicClassAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateTestDynamicClassAST ("templateTestDynamicClassAST",
                                                                                & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateTestDynamicClassAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateTestDynamicClassAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateTestDynamicClassAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateTestDynamicClassAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateTestDynamicClassAST GGS_templateTestDynamicClassAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_templateTestDynamicClassAST result ;
  const GGS_templateTestDynamicClassAST * p = (const GGS_templateTestDynamicClassAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateTestDynamicClassAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateTestDynamicClassAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateFunctionCallAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateFunctionCallAST::objectCompare (const GGS_templateFunctionCallAST & inOperand) const {
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

GGS_templateFunctionCallAST::GGS_templateFunctionCallAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateFunctionCallAST GGS_templateFunctionCallAST::
init_21__21_ (const GGS_lstring & in_mFunctionName,
              const GGS_templateExpressionListAST & in_mExpressionList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_templateFunctionCallAST * object = nullptr ;
  macroMyNew (object, cPtr_templateFunctionCallAST (inCompiler COMMA_THERE)) ;
  object->templateFunctionCallAST_init_21__21_ (in_mFunctionName, in_mExpressionList, inCompiler) ;
  const GGS_templateFunctionCallAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateFunctionCallAST::
templateFunctionCallAST_init_21__21_ (const GGS_lstring & in_mFunctionName,
                                      const GGS_templateExpressionListAST & in_mExpressionList,
                                      Compiler * /* inCompiler */) {
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateFunctionCallAST::GGS_templateFunctionCallAST (const cPtr_templateFunctionCallAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateFunctionCallAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateFunctionCallAST::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateFunctionCallAST * p = (cPtr_templateFunctionCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFunctionCallAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateFunctionCallAST::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionListAST () ;
  }else{
    cPtr_templateFunctionCallAST * p = (cPtr_templateFunctionCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFunctionCallAST) ;
    return p->mProperty_mExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateFunctionCallAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateFunctionCallAST::cPtr_templateFunctionCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mExpressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateFunctionCallAST::cPtr_templateFunctionCallAST (const GGS_lstring & in_mFunctionName,
                                                            const GGS_templateExpressionListAST & in_mExpressionList,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mExpressionList () {
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateFunctionCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFunctionCallAST ;
}

void cPtr_templateFunctionCallAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@templateFunctionCallAST:") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateFunctionCallAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateFunctionCallAST (mProperty_mFunctionName, mProperty_mExpressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateFunctionCallAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mExpressionList.printNonNullClassInstanceProperties ("mExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateFunctionCallAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateFunctionCallAST ("templateFunctionCallAST",
                                                                            & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateFunctionCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFunctionCallAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateFunctionCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateFunctionCallAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateFunctionCallAST GGS_templateFunctionCallAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_templateFunctionCallAST result ;
  const GGS_templateFunctionCallAST * p = (const GGS_templateFunctionCallAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateFunctionCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateFunctionCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateVarInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateVarInExpressionAST::objectCompare (const GGS_templateVarInExpressionAST & inOperand) const {
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

GGS_templateVarInExpressionAST::GGS_templateVarInExpressionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateVarInExpressionAST GGS_templateVarInExpressionAST::
init_21_ (const GGS_lstring & in_mVarName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateVarInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateVarInExpressionAST (inCompiler COMMA_THERE)) ;
  object->templateVarInExpressionAST_init_21_ (in_mVarName, inCompiler) ;
  const GGS_templateVarInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateVarInExpressionAST::
templateVarInExpressionAST_init_21_ (const GGS_lstring & in_mVarName,
                                     Compiler * /* inCompiler */) {
  mProperty_mVarName = in_mVarName ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVarInExpressionAST::GGS_templateVarInExpressionAST (const cPtr_templateVarInExpressionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateVarInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateVarInExpressionAST::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateVarInExpressionAST * p = (cPtr_templateVarInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateVarInExpressionAST) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateVarInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateVarInExpressionAST::cPtr_templateVarInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mVarName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateVarInExpressionAST::cPtr_templateVarInExpressionAST (const GGS_lstring & in_mVarName,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mVarName () {
  mProperty_mVarName = in_mVarName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateVarInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVarInExpressionAST ;
}

void cPtr_templateVarInExpressionAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@templateVarInExpressionAST:") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateVarInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateVarInExpressionAST (mProperty_mVarName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateVarInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateVarInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateVarInExpressionAST ("templateVarInExpressionAST",
                                                                               & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateVarInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVarInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateVarInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateVarInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVarInExpressionAST GGS_templateVarInExpressionAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_templateVarInExpressionAST result ;
  const GGS_templateVarInExpressionAST * p = (const GGS_templateVarInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateVarInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateVarInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}



//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_expression_5F_template_i0_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                             Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_term_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_0 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_1797 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 39)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__7C_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 40)) ;
      GGS_templateExpressionAST var_leftOperand_1870 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightOperand_1929 ;
      nt_relation_5F_term_5F_tpl_ (var_rightOperand_1929, inCompiler) ;
      outArgument_outExpression = GGS_templateOrOperationAST::init_21__21__21_ (var_operatorLocation_1797, var_leftOperand_1870, var_rightOperand_1929, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_2098 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 46)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 47)) ;
      GGS_templateExpressionAST var_leftOperand_2171 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightOperand_2230 ;
      nt_relation_5F_term_5F_tpl_ (var_rightOperand_2230, inCompiler) ;
      outArgument_outExpression = GGS_templateXorOperationAST::init_21__21__21_ (var_operatorLocation_2098, var_leftOperand_2171, var_rightOperand_2230, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_expression_5F_template_i0_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  nt_relation_5F_term_5F_tpl_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__7C_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 40)) ;
      nt_relation_5F_term_5F_tpl_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 47)) ;
      nt_relation_5F_term_5F_tpl_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_relation_5F_term_5F_tpl_i1_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                              Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_factor_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_1 (inCompiler) == 2) {
      GGS_location var_operatorLocation_2770 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 66)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__26_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 67)) ;
      GGS_templateExpressionAST var_leftOperand_2843 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightOperand_2901 ;
      nt_relation_5F_factor_5F_tpl_ (var_rightOperand_2901, inCompiler) ;
      outArgument_outExpression = GGS_templateAndOperationAST::init_21__21__21_ (var_operatorLocation_2770, var_leftOperand_2843, var_rightOperand_2901, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_relation_5F_term_5F_tpl_i1_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  nt_relation_5F_factor_5F_tpl_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__26_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 67)) ;
      nt_relation_5F_factor_5F_tpl_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_relation_5F_factor_5F_tpl_i2_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                                Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_simple_5F_expression_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  switch (select_templateSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GGS_location var_operatorLocation_3448 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 86)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 87)) ;
    GGS_templateExpressionAST var_leftExpression_3522 = outArgument_outExpression ;
    GGS_templateExpressionAST var_rightExpression_3584 ;
    nt_simple_5F_expression_5F_tpl_ (var_rightExpression_3584, inCompiler) ;
    outArgument_outExpression = GGS_templateEqualTestAST::init_21__21__21_ (var_operatorLocation_3448, var_leftExpression_3522, var_rightExpression_3584, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    GGS_location var_operatorLocation_3764 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 93)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 94)) ;
    GGS_templateExpressionAST var_leftExpression_3838 = outArgument_outExpression ;
    GGS_templateExpressionAST var_rightExpression_3900 ;
    nt_simple_5F_expression_5F_tpl_ (var_rightExpression_3900, inCompiler) ;
    outArgument_outExpression = GGS_templateNonEqualTestAST::init_21__21__21_ (var_operatorLocation_3764, var_leftExpression_3838, var_rightExpression_3900, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    GGS_location var_operatorLocation_4083 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 100)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 101)) ;
    GGS_templateExpressionAST var_leftExpression_4157 = outArgument_outExpression ;
    GGS_templateExpressionAST var_rightExpression_4219 ;
    nt_simple_5F_expression_5F_tpl_ (var_rightExpression_4219, inCompiler) ;
    outArgument_outExpression = GGS_templateInfOrEqualTestAST::init_21__21__21_ (var_operatorLocation_4083, var_leftExpression_4157, var_rightExpression_4219, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    GGS_location var_operatorLocation_4404 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 107)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 108)) ;
    GGS_templateExpressionAST var_leftExpression_4478 = outArgument_outExpression ;
    GGS_templateExpressionAST var_rightExpression_4540 ;
    nt_simple_5F_expression_5F_tpl_ (var_rightExpression_4540, inCompiler) ;
    outArgument_outExpression = GGS_templateSupOrEqualTestAST::init_21__21__21_ (var_operatorLocation_4404, var_leftExpression_4478, var_rightExpression_4540, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    GGS_location var_operatorLocation_4725 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 114)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 115)) ;
    GGS_templateExpressionAST var_leftExpression_4798 = outArgument_outExpression ;
    GGS_templateExpressionAST var_rightExpression_4860 ;
    nt_simple_5F_expression_5F_tpl_ (var_rightExpression_4860, inCompiler) ;
    outArgument_outExpression = GGS_templateStrictSupTestAST::init_21__21__21_ (var_operatorLocation_4725, var_leftExpression_4798, var_rightExpression_4860, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    GGS_location var_operatorLocation_5044 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 121)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 122)) ;
    GGS_templateExpressionAST var_leftExpression_5117 = outArgument_outExpression ;
    GGS_templateExpressionAST var_rightExpression_5179 ;
    nt_simple_5F_expression_5F_tpl_ (var_rightExpression_5179, inCompiler) ;
    outArgument_outExpression = GGS_templateStrictInfTestAST::init_21__21__21_ (var_operatorLocation_5044, var_leftExpression_5117, var_rightExpression_5179, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_relation_5F_factor_5F_tpl_i2_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  nt_simple_5F_expression_5F_tpl_indexing (inCompiler) ;
  switch (select_templateSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 87)) ;
    nt_simple_5F_expression_5F_tpl_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 94)) ;
    nt_simple_5F_expression_5F_tpl_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 101)) ;
    nt_simple_5F_expression_5F_tpl_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 108)) ;
    nt_simple_5F_expression_5F_tpl_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 115)) ;
    nt_simple_5F_expression_5F_tpl_indexing (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 122)) ;
    nt_simple_5F_expression_5F_tpl_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_simple_5F_expression_5F_tpl_i3_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                                  Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_term_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_3 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_5735 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 140)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 141)) ;
      GGS_templateExpressionAST var_leftExpression_5809 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightExpression_5871 ;
      nt_term_5F_tpl_ (var_rightExpression_5871, inCompiler) ;
      outArgument_outExpression = GGS_templateLeftShiftOperationAST::init_21__21__21_ (var_operatorLocation_5735, var_leftExpression_5809, var_rightExpression_5871, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_6050 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 147)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 148)) ;
      GGS_templateExpressionAST var_leftExpression_6124 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightExpression_6186 ;
      nt_term_5F_tpl_ (var_rightExpression_6186, inCompiler) ;
      outArgument_outExpression = GGS_templateRightShiftOperationAST::init_21__21__21_ (var_operatorLocation_6050, var_leftExpression_6124, var_rightExpression_6186, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_6366 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 154)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2B_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 155)) ;
      GGS_templateExpressionAST var_leftExpression_6439 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightExpression_6501 ;
      nt_term_5F_tpl_ (var_rightExpression_6501, inCompiler) ;
      outArgument_outExpression = GGS_templateAddOperationAST::init_21__21__21_ (var_operatorLocation_6366, var_leftExpression_6439, var_rightExpression_6501, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_6674 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 161)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 162)) ;
      GGS_templateExpressionAST var_leftExpression_6747 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightExpression_6809 ;
      nt_term_5F_tpl_ (var_rightExpression_6809, inCompiler) ;
      outArgument_outExpression = GGS_templateSubOperationAST::init_21__21__21_ (var_operatorLocation_6674, var_leftExpression_6747, var_rightExpression_6809, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_simple_5F_expression_5F_tpl_i3_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  nt_term_5F_tpl_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 141)) ;
      nt_term_5F_tpl_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 148)) ;
      nt_term_5F_tpl_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2B_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 155)) ;
      nt_term_5F_tpl_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 162)) ;
      nt_term_5F_tpl_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_term_5F_tpl_i4_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                  Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_factor_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_4 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_7315 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 181)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 182)) ;
      GGS_templateExpressionAST var_leftExpression_7388 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightExpression_7450 ;
      nt_factor_5F_tpl_ (var_rightExpression_7450, inCompiler) ;
      outArgument_outExpression = GGS_templateMultiplyOperationAST::init_21__21__21_ (var_operatorLocation_7315, var_leftExpression_7388, var_rightExpression_7450, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_7630 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 188)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2F_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 189)) ;
      GGS_templateExpressionAST var_leftExpression_7703 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightExpression_7765 ;
      nt_factor_5F_tpl_ (var_rightExpression_7765, inCompiler) ;
      outArgument_outExpression = GGS_templateDivideOperationAST::init_21__21__21_ (var_operatorLocation_7630, var_leftExpression_7703, var_rightExpression_7765, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_7943 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 195)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_mod COMMA_SOURCE_FILE ("templateSyntax.galgas4", 196)) ;
      GGS_templateExpressionAST var_leftExpression_8018 = outArgument_outExpression ;
      GGS_templateExpressionAST var_rightExpression_8080 ;
      nt_factor_5F_tpl_ (var_rightExpression_8080, inCompiler) ;
      outArgument_outExpression = GGS_templateModuloOperationAST::init_21__21__21_ (var_operatorLocation_7943, var_leftExpression_8018, var_rightExpression_8080, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_term_5F_tpl_i4_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  nt_factor_5F_tpl_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 182)) ;
      nt_factor_5F_tpl_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2F_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 189)) ;
      nt_factor_5F_tpl_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_mod COMMA_SOURCE_FILE ("templateSyntax.galgas4", 196)) ;
      nt_factor_5F_tpl_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i5_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                    Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 214)) ;
      GGS_lstring var_structFieldName_8646 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 215)) ;
      outArgument_outExpression = GGS_structFieldAccessTemplateExpressionAST::init_21__21__21_ (var_structFieldName_8646.readProperty_location (), outArgument_outExpression, var_structFieldName_8646, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i5_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  nt_primary_5F_tpl_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 214)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 215)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i6_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                    Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_9135 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 231)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 232)) ;
  GGS_templateExpressionAST var_expression_9204 ;
  nt_factor_5F_tpl_ (var_expression_9204, inCompiler) ;
  outArgument_outExpression = GGS_templateUnaryMinusOperationAST::init_21__21_ (var_operatorLocation_9135, var_expression_9204, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i6_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 232)) ;
  nt_factor_5F_tpl_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i7_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                    Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_9650 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 245)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_not COMMA_SOURCE_FILE ("templateSyntax.galgas4", 246)) ;
  GGS_templateExpressionAST var_ifCondition_9721 ;
  nt_factor_5F_tpl_ (var_ifCondition_9721, inCompiler) ;
  outArgument_outExpression = GGS_templateNotOperatorAST::init_21__21_ (var_operatorLocation_9650, var_ifCondition_9721, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i7_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_not COMMA_SOURCE_FILE ("templateSyntax.galgas4", 246)) ;
  nt_factor_5F_tpl_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i8_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                    Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_10162 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 260)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__7E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 261)) ;
  GGS_templateExpressionAST var_ifCondition_10231 ;
  nt_factor_5F_tpl_ (var_ifCondition_10231, inCompiler) ;
  outArgument_outExpression = GGS_templateLogicalNegateAST::init_21__21_ (var_operatorLocation_10162, var_ifCondition_10231, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_factor_5F_tpl_i8_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__7E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 261)) ;
  nt_factor_5F_tpl_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i9_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                     Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_identifier_10684 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 274)) ;
  outArgument_outExpression = GGS_templateVarInExpressionAST::init_21_ (var_identifier_10684, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i9_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 274)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i10_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 285)) ;
  nt_expression_5F_template_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 287)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i10_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 285)) ;
  nt_expression_5F_template_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 287)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i11_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_true COMMA_SOURCE_FILE ("templateSyntax.galgas4", 297)) ;
  outArgument_outExpression = GGS_templateTrueBoolAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 298)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i11_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_true COMMA_SOURCE_FILE ("templateSyntax.galgas4", 297)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i12_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_false COMMA_SOURCE_FILE ("templateSyntax.galgas4", 308)) ;
  outArgument_outExpression = GGS_templateFalseBoolAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 309)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i12_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_false COMMA_SOURCE_FILE ("templateSyntax.galgas4", 308)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i13_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lbigint var_literalInt_12207 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("templateSyntax.galgas4", 319)) ;
  outArgument_outExpression = GGS_templateLiteralUIntExpressionAST::init_21_ (var_literalInt_12207, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i13_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("templateSyntax.galgas4", 319)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i14_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_ldouble var_literalDouble_12613 ;
  var_literalDouble_12613 = inCompiler->synthetizedAttribute_floatValue () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("templateSyntax.galgas4", 331)) ;
  outArgument_outExpression = GGS_templateLiteralDoubleExpressionAST::init_21_ (var_literalDouble_12613, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i14_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("templateSyntax.galgas4", 331)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i15_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lchar var_literalChar_13083 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 342)) ;
  outArgument_outExpression = GGS_templateLiteralCharExpressionAST::init_21_ (var_literalChar_13083, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i15_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 342)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i16_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_stringlist var_literalStringList_13505 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_literalString_13568 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 355)) ;
    var_literalStringList_13505.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_literalString_13568.readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 356)) ;
    if (select_templateSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outExpression = GGS_templateLiteralStringExpressionAST::init_21__21_ (var_literalStringList_13505, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 359)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i16_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 355)) ;
    if (select_templateSyntax_6 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i17_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5B_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 375)) ;
  switch (select_templateSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_template COMMA_SOURCE_FILE ("templateSyntax.galgas4", 378)) ;
    GGS_templateExpressionAST var_receiverExpression_14533 ;
    nt_expression_5F_template_ (var_receiverExpression_14533, inCompiler) ;
    GGS_lstring var_templateName_14632 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 381)) ;
    GGS_templateExpressionListAST var_expressionList_14681 ;
    nt_output_5F_expression_5F_list_5F_tpl_ (var_expressionList_14681, inCompiler) ;
    outArgument_outExpression = GGS_templateExtensionTemplateCallAST::init_21__21__21_ (var_receiverExpression_14533, var_templateName_14632, var_expressionList_14681, inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 389)) ;
  } break ;
  case 2: {
    GGS_lstring var_typeName_14947 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("templateSyntax.galgas4", 391)) ;
    GGS_lstring var_constructorName_14989 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 392)) ;
    GGS_templateExpressionListAST var_expressionList_15072 ;
    nt_output_5F_expression_5F_list_5F_tpl_ (var_expressionList_15072, inCompiler) ;
    outArgument_outExpression = GGS_templateClassFunctionAST::init_21__21__21_ (var_typeName_14947, var_constructorName_14989, var_expressionList_15072, inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 399)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_filewrapper COMMA_SOURCE_FILE ("templateSyntax.galgas4", 401)) ;
    GGS_lstring var_filewrapperName_15312 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 402)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 403)) ;
    GGS_lstring var_templateName_15369 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 404)) ;
    GGS_templateExpressionListAST var_expressionList_15418 ;
    nt_output_5F_expression_5F_list_5F_tpl_ (var_expressionList_15418, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 407)) ;
    outArgument_outExpression = GGS_templateFileWrapperTemplateCallAST::init_21__21__21_ (var_filewrapperName_15312, var_templateName_15369, var_expressionList_15418, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    GGS_location var_startLocation_15654 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 410)) ;
    GGS_templateExpressionAST var_receiverExpression_15716 ;
    nt_expression_5F_template_ (var_receiverExpression_15716, inCompiler) ;
    GGS_lstring var_getterName_15815 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 413)) ;
    GGS_templateExpressionListAST var_expressionList_15862 ;
    nt_output_5F_expression_5F_list_5F_tpl_ (var_expressionList_15862, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 416)) ;
    GGS_location var_endLocation_15944 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 417)) ;
    outArgument_outExpression = GGS_templateGetterCallInExpressionAST::init_21__21__21__21_ (var_receiverExpression_15716, var_getterName_15815, var_expressionList_15862, var_startLocation_15654.getter_union (var_endLocation_15944, inCompiler COMMA_SOURCE_FILE ("templateSyntax.galgas4", 422)), inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_option COMMA_SOURCE_FILE ("templateSyntax.galgas4", 425)) ;
    switch (select_templateSyntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 427)) ;
      GGS_lstring var_optionName_16215 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 428)) ;
      GGS_lstring var_getterName_16261 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 429)) ;
      outArgument_outExpression = GGS_templateOptionAccessAST::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("galgas_builtin_options"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 430)), inCompiler COMMA_HERE), var_optionName_16215, var_getterName_16261, inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      GGS_lstring var_optionComponentName_16439 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 432)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 433)) ;
      GGS_lstring var_optionName_16504 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 434)) ;
      GGS_lstring var_getterName_16550 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 435)) ;
      outArgument_outExpression = GGS_templateOptionAccessAST::init_21__21__21_ (var_optionComponentName_16439, var_optionName_16504, var_getterName_16550, inCompiler COMMA_HERE) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 438)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i17_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5B_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 375)) ;
  switch (select_templateSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_template COMMA_SOURCE_FILE ("templateSyntax.galgas4", 378)) ;
    nt_expression_5F_template_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 381)) ;
    nt_output_5F_expression_5F_list_5F_tpl_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 389)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("templateSyntax.galgas4", 391)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 392)) ;
    nt_output_5F_expression_5F_list_5F_tpl_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 399)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_filewrapper COMMA_SOURCE_FILE ("templateSyntax.galgas4", 401)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 402)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 403)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 404)) ;
    nt_output_5F_expression_5F_list_5F_tpl_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 407)) ;
  } break ;
  case 4: {
    nt_expression_5F_template_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 413)) ;
    nt_output_5F_expression_5F_list_5F_tpl_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 416)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_option COMMA_SOURCE_FILE ("templateSyntax.galgas4", 425)) ;
    switch (select_templateSyntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 427)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 428)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 429)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 432)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 433)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 434)) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 435)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__5D_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 438)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i18_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_functionName_17072 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 450)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 451)) ;
  GGS_templateExpressionListAST var_expressionList_17156 ;
  nt_output_5F_expression_5F_list_5F_tpl_ (var_expressionList_17156, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 453)) ;
  outArgument_outExpression = GGS_templateFunctionCallAST::init_21__21_ (var_functionName_17072, var_expressionList_17156, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i18_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("templateSyntax.galgas4", 450)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 451)) ;
  nt_output_5F_expression_5F_list_5F_tpl_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 453)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i19_ (GGS_templateExpressionAST & outArgument_outExpression,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_5F_tpl_ (outArgument_outExpression, inCompiler) ;
  GGS_location var_endOfReceiverExpression_17468 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 461)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_is COMMA_SOURCE_FILE ("templateSyntax.galgas4", 462)) ;
  GGS_lstring var_typeName_17541 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("templateSyntax.galgas4", 463)) ;
  outArgument_outExpression = GGS_templateTestDynamicClassAST::init_21__21__21_ (outArgument_outExpression, var_endOfReceiverExpression_17468, var_typeName_17541, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_primary_5F_tpl_i19_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  nt_primary_5F_tpl_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_is COMMA_SOURCE_FILE ("templateSyntax.galgas4", 462)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("templateSyntax.galgas4", 463)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_ (GGS_templateExpressionListAST & outArgument_outExpressionList,
                                                                                           Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GGS_templateExpressionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_9 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_18079 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 481)) ;
      GGS_templateExpressionAST var_expression_18144 ;
      nt_expression_5F_template_ (var_expression_18144, inCompiler) ;
      outArgument_outExpressionList.plusPlusAssignOperation (GGS_templateExpressionListAST_2E_element::init_21__21__21_ (var_selector_18079, var_expression_18144, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 483)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 483)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 485)) ;
      GGS_lstring var_selector_18246 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("templateSyntax.galgas4", 486)) ;
      GGS_templateExpressionAST var_expression_18320 ;
      nt_expression_5F_template_ (var_expression_18320, inCompiler) ;
      outArgument_outExpressionList.plusPlusAssignOperation (GGS_templateExpressionListAST_2E_element::init_21__21__21_ (var_selector_18246, var_expression_18320, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 488)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 488)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_templateSyntax_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 481)) ;
      nt_expression_5F_template_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 485)) ;
      nt_expression_5F_template_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i21_ (GGS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 499)) ;
  GGS_templateExpressionAST var_expression_18795 ;
  nt_expression_5F_template_ (var_expression_18795, inCompiler) ;
  ioArgument_ioResultingInstructionList.plusPlusAssignOperation (GGS_templateInstructionListAST_2E_element::init_21_ (GGS_templateInstructionExpressionAST::init_21__21_ (var_expression_18795, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 501)), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 501)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i21_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 499)) ;
  nt_expression_5F_template_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i22_ (GGS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3F__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 507)) ;
  ioArgument_ioResultingInstructionList.plusPlusAssignOperation (GGS_templateInstructionListAST_2E_element::init_21_ (GGS_templateInstructionGetColumnLocationAST::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 508)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i22_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3F__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 507)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i23_ (GGS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 514)) ;
  ioArgument_ioResultingInstructionList.plusPlusAssignOperation (GGS_templateInstructionListAST_2E_element::init_21_ (GGS_templateInstructionGotoColumnLocationAST::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 515)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i23_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__21__5E_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 514)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i24_ (GGS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_block COMMA_SOURCE_FILE ("templateSyntax.galgas4", 521)) ;
  GGS_templateExpressionAST var_expression_19729 ;
  nt_expression_5F_template_ (var_expression_19729, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 523)) ;
  GGS_templateInstructionListAST var_blockInstructionList_19776 = GGS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    {
    routine_enterTemplateString_26_ (var_blockInstructionList_19776, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 527)) ;
    }
    if (select_templateSyntax_10 (inCompiler) == 2) {
      nt_template_5F_instruction_ (var_blockInstructionList_19776, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas4", 532)) ;
  ioArgument_ioResultingInstructionList.plusPlusAssignOperation (GGS_templateInstructionListAST_2E_element::init_21_ (GGS_templateBlockInstructionAST::init_21__21__21_ (var_expression_19729, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 535)), var_blockInstructionList_19776, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 533)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i24_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_block COMMA_SOURCE_FILE ("templateSyntax.galgas4", 521)) ;
  nt_expression_5F_template_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("templateSyntax.galgas4", 523)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_10 (inCompiler) == 2) {
      nt_template_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas4", 532)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i25_ (GGS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_if COMMA_SOURCE_FILE ("templateSyntax.galgas4", 542)) ;
  GGS_templateInstructionIfBranchListAST var_templateInstructionIfBranchList_20302 = GGS_templateInstructionIfBranchListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_templateExpressionAST var_expression_20416 ;
    nt_expression_5F_template_ (var_expression_20416, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_then COMMA_SOURCE_FILE ("templateSyntax.galgas4", 546)) ;
    GGS_templateInstructionListAST var_instructionList_20475 = GGS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      {
      routine_enterTemplateString_26_ (var_instructionList_20475, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 549)) ;
      }
      if (select_templateSyntax_12 (inCompiler) == 2) {
        nt_template_5F_instruction_ (var_instructionList_20475, inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    var_templateInstructionIfBranchList_20302.plusPlusAssignOperation (GGS_templateInstructionIfBranchListAST_2E_element::init_21__21_ (var_expression_20416, var_instructionList_20475, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 553)) ;
    if (select_templateSyntax_11 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_elsif COMMA_SOURCE_FILE ("templateSyntax.galgas4", 555)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_templateInstructionListAST var_elseInstructionList_20763 = GGS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
  switch (select_templateSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_else COMMA_SOURCE_FILE ("templateSyntax.galgas4", 561)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      {
      routine_enterTemplateString_26_ (var_elseInstructionList_20763, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 563)) ;
      }
      if (select_templateSyntax_14 (inCompiler) == 2) {
        nt_template_5F_instruction_ (var_elseInstructionList_20763, inCompiler) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas4", 569)) ;
  ioArgument_ioResultingInstructionList.plusPlusAssignOperation (GGS_templateInstructionListAST_2E_element::init_21_ (GGS_templateInstructionIfAST::init_21__21_ (var_templateInstructionIfBranchList_20302, var_elseInstructionList_20763, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 570)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i25_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_if COMMA_SOURCE_FILE ("templateSyntax.galgas4", 542)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_expression_5F_template_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_then COMMA_SOURCE_FILE ("templateSyntax.galgas4", 546)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_templateSyntax_12 (inCompiler) == 2) {
        nt_template_5F_instruction_indexing (inCompiler) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    if (select_templateSyntax_11 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_elsif COMMA_SOURCE_FILE ("templateSyntax.galgas4", 555)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_templateSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_else COMMA_SOURCE_FILE ("templateSyntax.galgas4", 561)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      if (select_templateSyntax_14 (inCompiler) == 2) {
        nt_template_5F_instruction_indexing (inCompiler) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("templateSyntax.galgas4", 569)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_ (GGS_templateInstructionListAST & outArgument_outResultingInstructionList,
                                                                                             Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outResultingInstructionList.drop () ; // Release 'out' argument
  outArgument_outResultingInstructionList = GGS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    {
    routine_enterTemplateString_26_ (outArgument_outResultingInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas4", 580)) ;
    }
    if (select_templateSyntax_15 (inCompiler) == 2) {
      nt_template_5F_instruction_ (outArgument_outResultingInstructionList, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_15 (inCompiler) == 2) {
      nt_template_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i27_ (GGS_lstringlist & ioArgument_ioElementList,
                                                                                     Lexique_galgasTemplateScanner * inCompiler) {
  GGS_lbigint var_count_2641 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 53)) ;
  GGS_uint var_n_2664 = var_count_2641.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 54)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_n_2664.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_count_2641.readProperty_location (), GGS_string ("this value should be > 0"), fixItArray1  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 56)) ;
    }
  }
  if (var_n_2664.isValid ()) {
    uint32_t variant_2765 = var_n_2664.uintValue () ;
    bool loop_2765 = true ;
    while (loop_2765) {
      loop_2765 = GGS_bool (ComparisonKind::greaterThan, var_n_2664.objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_2765) {
        loop_2765 = GGS_bool (ComparisonKind::greaterThan, var_n_2664.objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_2765 && (0 == variant_2765)) {
        loop_2765 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("template-for-instruction.galgas4", 58)) ;
      }
      if (loop_2765) {
        variant_2765 -= 1 ;
        ioArgument_ioElementList.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("template-for-instruction.galgas4", 59)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 59)) ;
        var_n_2664.minusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 60)) ;
      }
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i27_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 52)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i28_ (GGS_lstringlist & ioArgument_ioElementList,
                                                                                     Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 67)) ;
  ioArgument_ioElementList.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("template-for-instruction.galgas4", 68)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 68)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i28_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i29_ (GGS_lstringlist & ioArgument_ioElementList,
                                                                                     Lexique_galgasTemplateScanner * inCompiler) {
  GGS_lstring var_constantName_3263 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 74)) ;
  ioArgument_ioElementList.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (var_constantName_3263, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 75)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_element_i29_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 74)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_ (GGS_lstringlist & outArgument_outEnumeration,
                                                                                                  GGS_location & outArgument_outEndOfProperties,
                                                                                                  GGS_templateExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outEnumeration.drop () ; // Release 'out' argument
  outArgument_outEndOfProperties.drop () ; // Release 'out' argument
  outArgument_outExpression.drop () ; // Release 'out' argument
  outArgument_outEnumeration = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 84)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_ (outArgument_outEnumeration, inCompiler) ;
    if (select_templateSyntax_16 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outEndOfProperties = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 89)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 90)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_in COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 91)) ;
  nt_expression_5F_template_ (outArgument_outExpression, inCompiler) ;
  switch (select_templateSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 95)) ;
    GGS_location var_startLocation_3918 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 96)) ;
    GGS_lstring var_prefixString_3983 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 97)) ;
    GenericArray <FixItDescription> fixItArray1 ;
    appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string::makeEmptyString ()) ;
    inCompiler->emitSemanticError (var_prefixString_3983.readProperty_location ().getter_union (var_startLocation_3918, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 98)), GGS_string ("useless prefix"), fixItArray1  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 98)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 84)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_indexing (inCompiler) ;
    if (select_templateSyntax_16 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 90)) ;
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_in COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 91)) ;
  nt_expression_5F_template_indexing (inCompiler) ;
  switch (select_templateSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 95)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 97)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i31_ (GGS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_for COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 106)) ;
  GGS_bool var_ascending_4331 ;
  switch (select_templateSyntax_18 (inCompiler)) {
  case 1: {
    var_ascending_4331 = GGS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 111)) ;
    var_ascending_4331 = GGS_bool (true) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 114)) ;
    var_ascending_4331 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GGS_lstringlist var_enumeration_4510 ;
  GGS_location var_endOfProperties_4528 ;
  GGS_templateExpressionAST var_expression_4550 ;
  nt_for_5F_instruction_5F_enumerated_5F_object_ (var_enumeration_4510, var_endOfProperties_4528, var_expression_4550, inCompiler) ;
  GGS_templateInstructionListAST var_beforeInstructionList_4619 = GGS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
  switch (select_templateSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_before COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 122)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      {
      routine_enterTemplateString_26_ (var_beforeInstructionList_4619, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 124)) ;
      }
      if (select_templateSyntax_20 (inCompiler) == 2) {
        nt_template_5F_instruction_ (var_beforeInstructionList_4619, inCompiler) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_do COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 130)) ;
  GGS_lstring var_indexIdentifier_4877 ;
  switch (select_templateSyntax_21 (inCompiler)) {
  case 1: {
    var_indexIdentifier_4877 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 133)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 135)) ;
    var_indexIdentifier_4877 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 136)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 137)) ;
  } break ;
  default:
    break ;
  }
  GGS_templateInstructionListAST var_doInstructionList_5068 = GGS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    {
    routine_enterTemplateString_26_ (var_doInstructionList_5068, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 141)) ;
    }
    if (select_templateSyntax_22 (inCompiler) == 2) {
      nt_template_5F_instruction_ (var_doInstructionList_5068, inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_templateInstructionListAST var_betweenInstructionList_5278 = GGS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
  switch (select_templateSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_between COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 149)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      {
      routine_enterTemplateString_26_ (var_betweenInstructionList_5278, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 151)) ;
      }
      if (select_templateSyntax_24 (inCompiler) == 2) {
        nt_template_5F_instruction_ (var_betweenInstructionList_5278, inCompiler) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  GGS_templateInstructionListAST var_afterInstructionList_5553 = GGS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
  switch (select_templateSyntax_25 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_after COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 160)) ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      {
      routine_enterTemplateString_26_ (var_afterInstructionList_5553, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 162)) ;
      }
      if (select_templateSyntax_26 (inCompiler) == 2) {
        nt_template_5F_instruction_ (var_beforeInstructionList_4619, inCompiler) ;
      }else{
        repeatFlag_3 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 168)) ;
  ioArgument_ioResultingInstructionList.plusPlusAssignOperation (GGS_templateInstructionListAST_2E_element::init_21_ (GGS_templateInstructionForeachAST::init_21__21__21__21__21__21__21__21__21_ (var_ascending_4331, var_expression_4550, var_enumeration_4510, var_endOfProperties_4528, var_beforeInstructionList_4619, var_doInstructionList_5068, var_indexIdentifier_4877, var_betweenInstructionList_5278, var_afterInstructionList_5553, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 169)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i31_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_for COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 106)) ;
  switch (select_templateSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3C_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 111)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3E_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 114)) ;
  } break ;
  default:
    break ;
  }
  nt_for_5F_instruction_5F_enumerated_5F_object_indexing (inCompiler) ;
  switch (select_templateSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_before COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 122)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_templateSyntax_20 (inCompiler) == 2) {
        nt_template_5F_instruction_indexing (inCompiler) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_do COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 130)) ;
  switch (select_templateSyntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 135)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 136)) ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 137)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_templateSyntax_22 (inCompiler) == 2) {
      nt_template_5F_instruction_indexing (inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  switch (select_templateSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_between COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 149)) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      if (select_templateSyntax_24 (inCompiler) == 2) {
        nt_template_5F_instruction_indexing (inCompiler) ;
      }else{
        repeatFlag_2 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  switch (select_templateSyntax_25 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_after COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 160)) ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      if (select_templateSyntax_26 (inCompiler) == 2) {
        nt_template_5F_instruction_indexing (inCompiler) ;
      }else{
        repeatFlag_3 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("template-for-instruction.galgas4", 168)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i32_ (GGS_templateInstructionListAST & ioArgument_ioResultingInstructionList,
                                                                               Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_switch COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 46)) ;
  GGS_templateExpressionAST var_switchExpression_2429 ;
  nt_expression_5F_template_ (var_switchExpression_2429, inCompiler) ;
  GGS_location var_endOfSwitchExpression_2465 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 49)) ;
  GGS_templateInstructionSwitchBranchListAST var_templateInstructionSwitchBranchList_2574 = GGS_templateInstructionSwitchBranchListAST::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_27 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_case COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 54)) ;
      GGS__5B_lstring_5D_ var_constantNameList_2696 ;
      GGS_switchExtractedValuesListAST var_associatedValuesExtraction_2757 ;
      nt_switch_5F_case_ (var_constantNameList_2696, var_associatedValuesExtraction_2757, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 59)) ;
      GGS_templateInstructionListAST var_instructionList_2840 = GGS_templateInstructionListAST::init (inCompiler COMMA_HERE) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        {
        routine_enterTemplateString_26_ (var_instructionList_2840, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 62)) ;
        }
        if (select_templateSyntax_28 (inCompiler) == 2) {
          nt_template_5F_instruction_ (var_instructionList_2840, inCompiler) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      var_templateInstructionSwitchBranchList_2574.plusPlusAssignOperation (GGS_templateInstructionSwitchBranchListAST_2E_element::init_21__21__21__21_ (var_constantNameList_2696, var_associatedValuesExtraction_2757, var_instructionList_2840, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 66)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 66)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 68)) ;
  ioArgument_ioResultingInstructionList.plusPlusAssignOperation (GGS_templateInstructionListAST_2E_element::init_21_ (GGS_templateInstructionSwitchAST::init_21__21__21_ (var_switchExpression_2429, var_endOfSwitchExpression_2465, var_templateInstructionSwitchBranchList_2574, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 70)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_template_5F_instruction_i32_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_switch COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 46)) ;
  nt_expression_5F_template_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_templateSyntax_27 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_case COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 54)) ;
      nt_switch_5F_case_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__3A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 59)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        if (select_templateSyntax_28 (inCompiler) == 2) {
          nt_template_5F_instruction_indexing (inCompiler) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_end COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 68)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_switch_5F_case_i33_ (GGS__5B_lstring_5D_ & outArgument_outConstantNameList,
                                                                      GGS_switchExtractedValuesListAST & outArgument_outAssociatedValuesExtraction,
                                                                      Lexique_galgasTemplateScanner * inCompiler) {
  outArgument_outConstantNameList.drop () ; // Release 'out' argument
  outArgument_outAssociatedValuesExtraction.drop () ; // Release 'out' argument
  outArgument_outConstantNameList = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_constantName_3634 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 83)) ;
    {
    outArgument_outConstantNameList.setter_append (var_constantName_3634, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 84)) ;
    }
    if (select_templateSyntax_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2C_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 86)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outAssociatedValuesExtraction = GGS_switchExtractedValuesListAST::init (inCompiler COMMA_HERE) ;
  switch (select_templateSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 91)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_templateSyntax_32 (inCompiler)) {
      case 1: {
        GGS_lbigint var_n_3851 = inCompiler->synthetizedAttribute_bigintValue () ;
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 94)) ;
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 95)) ;
        UpEnumerator_range enumerator_3895 (GGS_range (GGS_uint (uint32_t (0U)), var_n_3851.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 96)).substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 96)))) ;
        while (enumerator_3895.hasCurrentObject ()) {
          outArgument_outAssociatedValuesExtraction.plusPlusAssignOperation (GGS_switchExtractedValuesListAST_2E_element::init_21__21__21_ (GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 97)), GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 97)), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 97)) ;
          enumerator_3895.gotoNextObject () ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 100)) ;
        outArgument_outAssociatedValuesExtraction.plusPlusAssignOperation (GGS_switchExtractedValuesListAST_2E_element::init_21__21__21_ (GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 101)), GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 101)), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 101)) ;
      } break ;
      case 3: {
        GGS_lstring var_typeName_4124 ;
        switch (select_templateSyntax_33 (inCompiler)) {
        case 1: {
          var_typeName_4124 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 105)) ;
        } break ;
        case 2: {
          var_typeName_4124 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 107)) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_constantName_4278 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 109)) ;
        GGS_bool var_constantMarkedAsUnused_4306 = var_constantName_4278.readProperty_string ().getter_hasPrefix (GGS_string ("_") COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 110)) ;
        outArgument_outAssociatedValuesExtraction.plusPlusAssignOperation (GGS_switchExtractedValuesListAST_2E_element::init_21__21__21_ (var_typeName_4124, var_constantName_4278, var_constantMarkedAsUnused_4306, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 111)) ;
      } break ;
      default:
        break ;
      }
      if (select_templateSyntax_31 (inCompiler) == 2) {
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 115)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_templateSyntax::rule_templateSyntax_switch_5F_case_i33_indexing (Lexique_galgasTemplateScanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 83)) ;
    if (select_templateSyntax_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2C_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 86)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_templateSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__28_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 91)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_templateSyntax_32 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_literalInt COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 94)) ;
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 95)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__2A_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 100)) ;
      } break ;
      case 3: {
        switch (select_templateSyntax_33 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__40_type COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 105)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken_identifier COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 109)) ;
      } break ;
      default:
        break ;
      }
      if (select_templateSyntax_31 (inCompiler) == 2) {
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasTemplateScanner::kToken__29_ COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 115)) ;
  } break ;
  default:
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
// @procDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_procDeclarationAST::objectCompare (const GGS_procDeclarationAST & inOperand) const {
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

GGS_procDeclarationAST::GGS_procDeclarationAST (void) :
GGS_externProcedureDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_procDeclarationAST GGS_procDeclarationAST::
init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (const GGS_bool & in_isPredefined,
                                                                           const GGS_bool & in_isFilePrivate,
                                                                           const GGS_lstring & in_mRoutineName,
                                                                           const GGS_formalParameterListAST & in_mFormalArgumentListAST,
                                                                           const GGS_bool & in_usefullProcedure,
                                                                           const GGS__5B_semanticInstructionAST_5D_ & in_mRoutineInstructionList,
                                                                           const GGS_location & in_mEndOfRoutineInstructionList,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cPtr_procDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_procDeclarationAST (inCompiler COMMA_THERE)) ;
  object->procDeclarationAST_init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (in_isPredefined, in_isFilePrivate, in_mRoutineName, in_mFormalArgumentListAST, in_usefullProcedure, in_mRoutineInstructionList, in_mEndOfRoutineInstructionList, inCompiler) ;
  const GGS_procDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::
procDeclarationAST_init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (const GGS_bool & in_isPredefined,
                                                                                              const GGS_bool & in_isFilePrivate,
                                                                                              const GGS_lstring & in_mRoutineName,
                                                                                              const GGS_formalParameterListAST & in_mFormalArgumentListAST,
                                                                                              const GGS_bool & in_usefullProcedure,
                                                                                              const GGS__5B_semanticInstructionAST_5D_ & in_mRoutineInstructionList,
                                                                                              const GGS_location & in_mEndOfRoutineInstructionList,
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

GGS_procDeclarationAST::GGS_procDeclarationAST (const cPtr_procDeclarationAST * inSourcePtr) :
GGS_externProcedureDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_ GGS_procDeclarationAST::readProperty_mRoutineInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_semanticInstructionAST_5D_ () ;
  }else{
    cPtr_procDeclarationAST * p = (cPtr_procDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procDeclarationAST) ;
    return p->mProperty_mRoutineInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_procDeclarationAST::readProperty_mEndOfRoutineInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_procDeclarationAST * p = (cPtr_procDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procDeclarationAST) ;
    return p->mProperty_mEndOfRoutineInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @procDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_procDeclarationAST::cPtr_procDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_externProcedureDeclarationAST (inCompiler COMMA_THERE),
mProperty_mRoutineInstructionList (),
mProperty_mEndOfRoutineInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_procDeclarationAST::cPtr_procDeclarationAST (const GGS_bool & in_isPredefined,
                                                  const GGS_bool & in_isFilePrivate,
                                                  const GGS_lstring & in_mRoutineName,
                                                  const GGS_formalParameterListAST & in_mFormalArgumentListAST,
                                                  const GGS_bool & in_usefullProcedure,
                                                  const GGS__5B_semanticInstructionAST_5D_ & in_mRoutineInstructionList,
                                                  const GGS_location & in_mEndOfRoutineInstructionList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_externProcedureDeclarationAST (in_isPredefined, in_isFilePrivate, in_mRoutineName, in_mFormalArgumentListAST, in_usefullProcedure, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_procDeclarationAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_procDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_procDeclarationAST (mProperty_isPredefined, mProperty_isFilePrivate, mProperty_mRoutineName, mProperty_mFormalArgumentListAST, mProperty_usefullProcedure, mProperty_mRoutineInstructionList, mProperty_mEndOfRoutineInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @procDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procDeclarationAST ("procDeclarationAST",
                                                                       & kTypeDescriptor_GALGAS_externProcedureDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_procDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_procDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_procDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procDeclarationAST GGS_procDeclarationAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_procDeclarationAST result ;
  const GGS_procDeclarationAST * p = (const GGS_procDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_procDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_routineImplementationForGeneration_2E_weak::objectCompare (const GGS_routineImplementationForGeneration_2E_weak & inOperand) const {
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

GGS_routineImplementationForGeneration_2E_weak::GGS_routineImplementationForGeneration_2E_weak (void) :
GGS_routinePrototypeDeclarationForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration_2E_weak & GGS_routineImplementationForGeneration_2E_weak::operator = (const GGS_routineImplementationForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration_2E_weak::GGS_routineImplementationForGeneration_2E_weak (const GGS_routineImplementationForGeneration & inSource) :
GGS_routinePrototypeDeclarationForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration_2E_weak GGS_routineImplementationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_routineImplementationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration GGS_routineImplementationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_routineImplementationForGeneration result ;
  if (isValid ()) {
    const cPtr_routineImplementationForGeneration * p = (cPtr_routineImplementationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_routineImplementationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration GGS_routineImplementationForGeneration_2E_weak::bang_routineImplementationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_routineImplementationForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_routineImplementationForGeneration) ;
      result = GGS_routineImplementationForGeneration ((cPtr_routineImplementationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @routineImplementationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineImplementationForGeneration_2E_weak ("routineImplementationForGeneration.weak",
                                                                                               & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineImplementationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineImplementationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineImplementationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineImplementationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration_2E_weak GGS_routineImplementationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_routineImplementationForGeneration_2E_weak result ;
  const GGS_routineImplementationForGeneration_2E_weak * p = (const GGS_routineImplementationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineImplementationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineImplementationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @nonTerminalInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_nonTerminalInstructionForGrammarAnalysis::objectCompare (const GGS_nonTerminalInstructionForGrammarAnalysis & inOperand) const {
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

GGS_nonTerminalInstructionForGrammarAnalysis::GGS_nonTerminalInstructionForGrammarAnalysis (void) :
GGS_abstractSyntaxInstructionForGrammarAnalysis () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_nonTerminalInstructionForGrammarAnalysis GGS_nonTerminalInstructionForGrammarAnalysis::
init_21__21__21_ (const GGS_location & in_mStartLocation,
                  const GGS_lstring & in_mNonterminalSymbolName,
                  const GGS_uint & in_mNonterminalSymbolIndex,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_nonTerminalInstructionForGrammarAnalysis * object = nullptr ;
  macroMyNew (object, cPtr_nonTerminalInstructionForGrammarAnalysis (inCompiler COMMA_THERE)) ;
  object->nonTerminalInstructionForGrammarAnalysis_init_21__21__21_ (in_mStartLocation, in_mNonterminalSymbolName, in_mNonterminalSymbolIndex, inCompiler) ;
  const GGS_nonTerminalInstructionForGrammarAnalysis result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_nonTerminalInstructionForGrammarAnalysis::
nonTerminalInstructionForGrammarAnalysis_init_21__21__21_ (const GGS_location & in_mStartLocation,
                                                           const GGS_lstring & in_mNonterminalSymbolName,
                                                           const GGS_uint & in_mNonterminalSymbolIndex,
                                                           Compiler * /* inCompiler */) {
  mProperty_mStartLocation = in_mStartLocation ;
  mProperty_mNonterminalSymbolName = in_mNonterminalSymbolName ;
  mProperty_mNonterminalSymbolIndex = in_mNonterminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalInstructionForGrammarAnalysis::GGS_nonTerminalInstructionForGrammarAnalysis (const cPtr_nonTerminalInstructionForGrammarAnalysis * inSourcePtr) :
GGS_abstractSyntaxInstructionForGrammarAnalysis (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_nonTerminalInstructionForGrammarAnalysis) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_nonTerminalInstructionForGrammarAnalysis::readProperty_mNonterminalSymbolName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_nonTerminalInstructionForGrammarAnalysis * p = (cPtr_nonTerminalInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonTerminalInstructionForGrammarAnalysis) ;
    return p->mProperty_mNonterminalSymbolName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonTerminalInstructionForGrammarAnalysis::readProperty_mNonterminalSymbolIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_nonTerminalInstructionForGrammarAnalysis * p = (cPtr_nonTerminalInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonTerminalInstructionForGrammarAnalysis) ;
    return p->mProperty_mNonterminalSymbolIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @nonTerminalInstructionForGrammarAnalysis class
//--------------------------------------------------------------------------------------------------

cPtr_nonTerminalInstructionForGrammarAnalysis::cPtr_nonTerminalInstructionForGrammarAnalysis (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (inCompiler COMMA_THERE),
mProperty_mNonterminalSymbolName (),
mProperty_mNonterminalSymbolIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_nonTerminalInstructionForGrammarAnalysis::cPtr_nonTerminalInstructionForGrammarAnalysis (const GGS_location & in_mStartLocation,
                                                                                              const GGS_lstring & in_mNonterminalSymbolName,
                                                                                              const GGS_uint & in_mNonterminalSymbolIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (in_mStartLocation, inCompiler COMMA_THERE),
mProperty_mNonterminalSymbolName (),
mProperty_mNonterminalSymbolIndex () {
  mProperty_mStartLocation = in_mStartLocation ;
  mProperty_mNonterminalSymbolName = in_mNonterminalSymbolName ;
  mProperty_mNonterminalSymbolIndex = in_mNonterminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_nonTerminalInstructionForGrammarAnalysis::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis ;
}

void cPtr_nonTerminalInstructionForGrammarAnalysis::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@nonTerminalInstructionForGrammarAnalysis:") ;
  mProperty_mStartLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonterminalSymbolName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonterminalSymbolIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_nonTerminalInstructionForGrammarAnalysis::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_nonTerminalInstructionForGrammarAnalysis (mProperty_mStartLocation, mProperty_mNonterminalSymbolName, mProperty_mNonterminalSymbolIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_nonTerminalInstructionForGrammarAnalysis::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractSyntaxInstructionForGrammarAnalysis::printNonNullClassInstanceProperties () ;
    mProperty_mNonterminalSymbolName.printNonNullClassInstanceProperties ("mNonterminalSymbolName") ;
    mProperty_mNonterminalSymbolIndex.printNonNullClassInstanceProperties ("mNonterminalSymbolIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @nonTerminalInstructionForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis ("nonTerminalInstructionForGrammarAnalysis",
                                                                                             & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonTerminalInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonTerminalInstructionForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonTerminalInstructionForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalInstructionForGrammarAnalysis GGS_nonTerminalInstructionForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_nonTerminalInstructionForGrammarAnalysis result ;
  const GGS_nonTerminalInstructionForGrammarAnalysis * p = (const GGS_nonTerminalInstructionForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonTerminalInstructionForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalInstructionForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @classFuncExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classFuncExpressionAST::objectCompare (const GGS_classFuncExpressionAST & inOperand) const {
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

GGS_classFuncExpressionAST::GGS_classFuncExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_classFuncExpressionAST GGS_classFuncExpressionAST::
init_21__21__21__21_ (const GGS_lstring & in_typeName,
                      const GGS_lstring & in_classFuncName,
                      const GGS_actualOutputArgumentList & in_expressions,
                      const GGS_location & in_locationForOldStyleCollectionInitializerError,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_classFuncExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_classFuncExpressionAST (inCompiler COMMA_THERE)) ;
  object->classFuncExpressionAST_init_21__21__21__21_ (in_typeName, in_classFuncName, in_expressions, in_locationForOldStyleCollectionInitializerError, inCompiler) ;
  const GGS_classFuncExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionAST::
classFuncExpressionAST_init_21__21__21__21_ (const GGS_lstring & in_typeName,
                                             const GGS_lstring & in_classFuncName,
                                             const GGS_actualOutputArgumentList & in_expressions,
                                             const GGS_location & in_locationForOldStyleCollectionInitializerError,
                                             Compiler * /* inCompiler */) {
  mProperty_typeName = in_typeName ;
  mProperty_classFuncName = in_classFuncName ;
  mProperty_expressions = in_expressions ;
  mProperty_locationForOldStyleCollectionInitializerError = in_locationForOldStyleCollectionInitializerError ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionAST::GGS_classFuncExpressionAST (const cPtr_classFuncExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classFuncExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_classFuncExpressionAST::readProperty_typeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_classFuncExpressionAST * p = (cPtr_classFuncExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionAST) ;
    return p->mProperty_typeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_classFuncExpressionAST::readProperty_classFuncName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_classFuncExpressionAST * p = (cPtr_classFuncExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionAST) ;
    return p->mProperty_classFuncName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList GGS_classFuncExpressionAST::readProperty_expressions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualOutputArgumentList () ;
  }else{
    cPtr_classFuncExpressionAST * p = (cPtr_classFuncExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionAST) ;
    return p->mProperty_expressions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_classFuncExpressionAST::readProperty_locationForOldStyleCollectionInitializerError (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_classFuncExpressionAST * p = (cPtr_classFuncExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionAST) ;
    return p->mProperty_locationForOldStyleCollectionInitializerError ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @classFuncExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_classFuncExpressionAST::cPtr_classFuncExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_typeName (),
mProperty_classFuncName (),
mProperty_expressions (),
mProperty_locationForOldStyleCollectionInitializerError () {
}

//--------------------------------------------------------------------------------------------------

cPtr_classFuncExpressionAST::cPtr_classFuncExpressionAST (const GGS_lstring & in_typeName,
                                                          const GGS_lstring & in_classFuncName,
                                                          const GGS_actualOutputArgumentList & in_expressions,
                                                          const GGS_location & in_locationForOldStyleCollectionInitializerError,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_typeName (),
mProperty_classFuncName (),
mProperty_expressions (),
mProperty_locationForOldStyleCollectionInitializerError () {
  mProperty_typeName = in_typeName ;
  mProperty_classFuncName = in_classFuncName ;
  mProperty_expressions = in_expressions ;
  mProperty_locationForOldStyleCollectionInitializerError = in_locationForOldStyleCollectionInitializerError ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_classFuncExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classFuncExpressionAST ;
}

void cPtr_classFuncExpressionAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@classFuncExpressionAST:") ;
  mProperty_typeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_classFuncName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_expressions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_locationForOldStyleCollectionInitializerError.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_classFuncExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_classFuncExpressionAST (mProperty_typeName, mProperty_classFuncName, mProperty_expressions, mProperty_locationForOldStyleCollectionInitializerError, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_classFuncExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_typeName.printNonNullClassInstanceProperties ("typeName") ;
    mProperty_classFuncName.printNonNullClassInstanceProperties ("classFuncName") ;
    mProperty_expressions.printNonNullClassInstanceProperties ("expressions") ;
    mProperty_locationForOldStyleCollectionInitializerError.printNonNullClassInstanceProperties ("locationForOldStyleCollectionInitializerError") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @classFuncExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classFuncExpressionAST ("classFuncExpressionAST",
                                                                           & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classFuncExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classFuncExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classFuncExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classFuncExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionAST GGS_classFuncExpressionAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_classFuncExpressionAST result ;
  const GGS_classFuncExpressionAST * p = (const GGS_classFuncExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classFuncExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classFuncExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @classFuncExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classFuncExpressionForGeneration::objectCompare (const GGS_classFuncExpressionForGeneration & inOperand) const {
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

GGS_classFuncExpressionForGeneration::GGS_classFuncExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_classFuncExpressionForGeneration GGS_classFuncExpressionForGeneration::
init_21__21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                  const GGS_location & in_mLocation,
                                  const GGS_unifiedTypeMapEntry & in_classFuncType,
                                  const GGS_string & in_classFuncName,
                                  const GGS_semanticExpressionListForGeneration & in_mEffectiveParameterList,
                                  const GGS_bool & in_mHasCompilerArgument,
                                  const GGS__5B_unifiedTypeMapEntry_5D_ & in_requiredTypes,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_classFuncExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_classFuncExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->classFuncExpressionForGeneration_init_21__21__21__21__21__21__21_ (in_mResultType, in_mLocation, in_classFuncType, in_classFuncName, in_mEffectiveParameterList, in_mHasCompilerArgument, in_requiredTypes, inCompiler) ;
  const GGS_classFuncExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionForGeneration::
classFuncExpressionForGeneration_init_21__21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                   const GGS_location & in_mLocation,
                                                                   const GGS_unifiedTypeMapEntry & in_classFuncType,
                                                                   const GGS_string & in_classFuncName,
                                                                   const GGS_semanticExpressionListForGeneration & in_mEffectiveParameterList,
                                                                   const GGS_bool & in_mHasCompilerArgument,
                                                                   const GGS__5B_unifiedTypeMapEntry_5D_ & in_requiredTypes,
                                                                   Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_classFuncType = in_classFuncType ;
  mProperty_classFuncName = in_classFuncName ;
  mProperty_mEffectiveParameterList = in_mEffectiveParameterList ;
  mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  mProperty_requiredTypes = in_requiredTypes ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionForGeneration::GGS_classFuncExpressionForGeneration (const cPtr_classFuncExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classFuncExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_classFuncExpressionForGeneration::readProperty_classFuncType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_classFuncExpressionForGeneration * p = (cPtr_classFuncExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionForGeneration) ;
    return p->mProperty_classFuncType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_classFuncExpressionForGeneration::readProperty_classFuncName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_classFuncExpressionForGeneration * p = (cPtr_classFuncExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionForGeneration) ;
    return p->mProperty_classFuncName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_classFuncExpressionForGeneration::readProperty_mEffectiveParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionListForGeneration () ;
  }else{
    cPtr_classFuncExpressionForGeneration * p = (cPtr_classFuncExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionForGeneration) ;
    return p->mProperty_mEffectiveParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classFuncExpressionForGeneration::readProperty_mHasCompilerArgument (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_classFuncExpressionForGeneration * p = (cPtr_classFuncExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionForGeneration) ;
    return p->mProperty_mHasCompilerArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_unifiedTypeMapEntry_5D_ GGS_classFuncExpressionForGeneration::readProperty_requiredTypes (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_unifiedTypeMapEntry_5D_ () ;
  }else{
    cPtr_classFuncExpressionForGeneration * p = (cPtr_classFuncExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionForGeneration) ;
    return p->mProperty_requiredTypes ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @classFuncExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_classFuncExpressionForGeneration::cPtr_classFuncExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_classFuncType (),
mProperty_classFuncName (),
mProperty_mEffectiveParameterList (),
mProperty_mHasCompilerArgument (),
mProperty_requiredTypes () {
}

//--------------------------------------------------------------------------------------------------

cPtr_classFuncExpressionForGeneration::cPtr_classFuncExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                              const GGS_location & in_mLocation,
                                                                              const GGS_unifiedTypeMapEntry & in_classFuncType,
                                                                              const GGS_string & in_classFuncName,
                                                                              const GGS_semanticExpressionListForGeneration & in_mEffectiveParameterList,
                                                                              const GGS_bool & in_mHasCompilerArgument,
                                                                              const GGS__5B_unifiedTypeMapEntry_5D_ & in_requiredTypes,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_classFuncType (),
mProperty_classFuncName (),
mProperty_mEffectiveParameterList (),
mProperty_mHasCompilerArgument (),
mProperty_requiredTypes () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_classFuncType = in_classFuncType ;
  mProperty_classFuncName = in_classFuncName ;
  mProperty_mEffectiveParameterList = in_mEffectiveParameterList ;
  mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  mProperty_requiredTypes = in_requiredTypes ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_classFuncExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classFuncExpressionForGeneration ;
}

void cPtr_classFuncExpressionForGeneration::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@classFuncExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_classFuncType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_classFuncName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEffectiveParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_requiredTypes.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_classFuncExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_classFuncExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_classFuncType, mProperty_classFuncName, mProperty_mEffectiveParameterList, mProperty_mHasCompilerArgument, mProperty_requiredTypes, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_classFuncExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_classFuncType.printNonNullClassInstanceProperties ("classFuncType") ;
    mProperty_classFuncName.printNonNullClassInstanceProperties ("classFuncName") ;
    mProperty_mEffectiveParameterList.printNonNullClassInstanceProperties ("mEffectiveParameterList") ;
    mProperty_mHasCompilerArgument.printNonNullClassInstanceProperties ("mHasCompilerArgument") ;
    mProperty_requiredTypes.printNonNullClassInstanceProperties ("requiredTypes") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @classFuncExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classFuncExpressionForGeneration ("classFuncExpressionForGeneration",
                                                                                     & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classFuncExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classFuncExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classFuncExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classFuncExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionForGeneration GGS_classFuncExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_classFuncExpressionForGeneration result ;
  const GGS_classFuncExpressionForGeneration * p = (const GGS_classFuncExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classFuncExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classFuncExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classFuncExpressionForGeneration_2E_weak::objectCompare (const GGS_classFuncExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_classFuncExpressionForGeneration_2E_weak::GGS_classFuncExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionForGeneration_2E_weak & GGS_classFuncExpressionForGeneration_2E_weak::operator = (const GGS_classFuncExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionForGeneration_2E_weak::GGS_classFuncExpressionForGeneration_2E_weak (const GGS_classFuncExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionForGeneration_2E_weak GGS_classFuncExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_classFuncExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionForGeneration GGS_classFuncExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_classFuncExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_classFuncExpressionForGeneration * p = (cPtr_classFuncExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_classFuncExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionForGeneration GGS_classFuncExpressionForGeneration_2E_weak::bang_classFuncExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_classFuncExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_classFuncExpressionForGeneration) ;
      result = GGS_classFuncExpressionForGeneration ((cPtr_classFuncExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @classFuncExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classFuncExpressionForGeneration_2E_weak ("classFuncExpressionForGeneration.weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classFuncExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classFuncExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classFuncExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classFuncExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionForGeneration_2E_weak GGS_classFuncExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_classFuncExpressionForGeneration_2E_weak result ;
  const GGS_classFuncExpressionForGeneration_2E_weak * p = (const GGS_classFuncExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classFuncExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classFuncExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @collectionValueAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_collectionValueAST::objectCompare (const GGS_collectionValueAST & inOperand) const {
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

GGS_collectionValueAST::GGS_collectionValueAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_collectionValueAST GGS_collectionValueAST::
init_21__21__21_ (const GGS_lstring & in_mTypeName,
                  const GGS_collectionValueElementList & in_mExpressionList,
                  const GGS_location & in_mEndOfCollectionValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_collectionValueAST * object = nullptr ;
  macroMyNew (object, cPtr_collectionValueAST (inCompiler COMMA_THERE)) ;
  object->collectionValueAST_init_21__21__21_ (in_mTypeName, in_mExpressionList, in_mEndOfCollectionValue, inCompiler) ;
  const GGS_collectionValueAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::
collectionValueAST_init_21__21__21_ (const GGS_lstring & in_mTypeName,
                                     const GGS_collectionValueElementList & in_mExpressionList,
                                     const GGS_location & in_mEndOfCollectionValue,
                                     Compiler * /* inCompiler */) {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mExpressionList = in_mExpressionList ;
  mProperty_mEndOfCollectionValue = in_mEndOfCollectionValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueAST::GGS_collectionValueAST (const cPtr_collectionValueAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_collectionValueAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_collectionValueAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_collectionValueAST * p = (cPtr_collectionValueAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_collectionValueAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList GGS_collectionValueAST::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_collectionValueElementList () ;
  }else{
    cPtr_collectionValueAST * p = (cPtr_collectionValueAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_collectionValueAST) ;
    return p->mProperty_mExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_collectionValueAST::readProperty_mEndOfCollectionValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_collectionValueAST * p = (cPtr_collectionValueAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_collectionValueAST) ;
    return p->mProperty_mEndOfCollectionValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @collectionValueAST class
//--------------------------------------------------------------------------------------------------

cPtr_collectionValueAST::cPtr_collectionValueAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mExpressionList (),
mProperty_mEndOfCollectionValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_collectionValueAST::cPtr_collectionValueAST (const GGS_lstring & in_mTypeName,
                                                  const GGS_collectionValueElementList & in_mExpressionList,
                                                  const GGS_location & in_mEndOfCollectionValue,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mExpressionList (),
mProperty_mEndOfCollectionValue () {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mExpressionList = in_mExpressionList ;
  mProperty_mEndOfCollectionValue = in_mEndOfCollectionValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_collectionValueAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueAST ;
}

void cPtr_collectionValueAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@collectionValueAST:") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfCollectionValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_collectionValueAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_collectionValueAST (mProperty_mTypeName, mProperty_mExpressionList, mProperty_mEndOfCollectionValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_collectionValueAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mExpressionList.printNonNullClassInstanceProperties ("mExpressionList") ;
    mProperty_mEndOfCollectionValue.printNonNullClassInstanceProperties ("mEndOfCollectionValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @collectionValueAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_collectionValueAST ("collectionValueAST",
                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_collectionValueAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_collectionValueAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_collectionValueAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueAST GGS_collectionValueAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_collectionValueAST result ;
  const GGS_collectionValueAST * p = (const GGS_collectionValueAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_collectionValueAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("collectionValueAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @expressionCollectionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_expressionCollectionForGeneration::objectCompare (const GGS_expressionCollectionForGeneration & inOperand) const {
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

GGS_expressionCollectionForGeneration::GGS_expressionCollectionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_expressionCollectionForGeneration GGS_expressionCollectionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_collectionValueElementListForGeneration & in_expressionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_expressionCollectionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_expressionCollectionForGeneration (inCompiler COMMA_THERE)) ;
  object->expressionCollectionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_expressionList, inCompiler) ;
  const GGS_expressionCollectionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionForGeneration::
expressionCollectionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                    const GGS_location & in_mLocation,
                                                    const GGS_collectionValueElementListForGeneration & in_expressionList,
                                                    Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_expressionList = in_expressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionCollectionForGeneration::GGS_expressionCollectionForGeneration (const cPtr_expressionCollectionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expressionCollectionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration GGS_expressionCollectionForGeneration::readProperty_expressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_collectionValueElementListForGeneration () ;
  }else{
    cPtr_expressionCollectionForGeneration * p = (cPtr_expressionCollectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionCollectionForGeneration) ;
    return p->mProperty_expressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @expressionCollectionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_expressionCollectionForGeneration::cPtr_expressionCollectionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_expressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_expressionCollectionForGeneration::cPtr_expressionCollectionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                const GGS_location & in_mLocation,
                                                                                const GGS_collectionValueElementListForGeneration & in_expressionList,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_expressionList () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_expressionList = in_expressionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_expressionCollectionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionCollectionForGeneration ;
}

void cPtr_expressionCollectionForGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@expressionCollectionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_expressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_expressionCollectionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_expressionCollectionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_expressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_expressionCollectionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_expressionList.printNonNullClassInstanceProperties ("expressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @expressionCollectionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_expressionCollectionForGeneration ("expressionCollectionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_expressionCollectionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionCollectionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_expressionCollectionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_expressionCollectionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionCollectionForGeneration GGS_expressionCollectionForGeneration::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_expressionCollectionForGeneration result ;
  const GGS_expressionCollectionForGeneration * p = (const GGS_expressionCollectionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_expressionCollectionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionCollectionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @varInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_varInExpressionAST::objectCompare (const GGS_varInExpressionAST & inOperand) const {
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

GGS_varInExpressionAST::GGS_varInExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_varInExpressionAST GGS_varInExpressionAST::
init_21_ (const GGS_lstring & in_mVarName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_varInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_varInExpressionAST (inCompiler COMMA_THERE)) ;
  object->varInExpressionAST_init_21_ (in_mVarName, inCompiler) ;
  const GGS_varInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionAST::
varInExpressionAST_init_21_ (const GGS_lstring & in_mVarName,
                             Compiler * /* inCompiler */) {
  mProperty_mVarName = in_mVarName ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionAST::GGS_varInExpressionAST (const cPtr_varInExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_varInExpressionAST::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_varInExpressionAST * p = (cPtr_varInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionAST) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @varInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_varInExpressionAST::cPtr_varInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mVarName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_varInExpressionAST::cPtr_varInExpressionAST (const GGS_lstring & in_mVarName,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mVarName () {
  mProperty_mVarName = in_mVarName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_varInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionAST ;
}

void cPtr_varInExpressionAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@varInExpressionAST:") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_varInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_varInExpressionAST (mProperty_mVarName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_varInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @varInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varInExpressionAST ("varInExpressionAST",
                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_varInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_varInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_varInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionAST GGS_varInExpressionAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_varInExpressionAST result ;
  const GGS_varInExpressionAST * p = (const GGS_varInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_varInExpressionAST *> (p)) {
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

ComparisonResult GGS_varInExpressionForGeneration::objectCompare (const GGS_varInExpressionForGeneration & inOperand) const {
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

GGS_varInExpressionForGeneration::GGS_varInExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_varInExpressionForGeneration GGS_varInExpressionForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                      const GGS_location & in_mLocation,
                      const GGS_string & in_mCppVarName,
                      const GGS_string & in_mNameForCheckingFormalParameterUsing,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_varInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_varInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->varInExpressionForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_mCppVarName, in_mNameForCheckingFormalParameterUsing, inCompiler) ;
  const GGS_varInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionForGeneration::
varInExpressionForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                   const GGS_location & in_mLocation,
                                                   const GGS_string & in_mCppVarName,
                                                   const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                                   Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mCppVarName = in_mCppVarName ;
  mProperty_mNameForCheckingFormalParameterUsing = in_mNameForCheckingFormalParameterUsing ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionForGeneration::GGS_varInExpressionForGeneration (const cPtr_varInExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_varInExpressionForGeneration::readProperty_mCppVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_varInExpressionForGeneration * p = (cPtr_varInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionForGeneration) ;
    return p->mProperty_mCppVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_varInExpressionForGeneration::readProperty_mNameForCheckingFormalParameterUsing (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_varInExpressionForGeneration * p = (cPtr_varInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionForGeneration) ;
    return p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @varInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_varInExpressionForGeneration::cPtr_varInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mCppVarName (),
mProperty_mNameForCheckingFormalParameterUsing () {
}

//--------------------------------------------------------------------------------------------------

cPtr_varInExpressionForGeneration::cPtr_varInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                      const GGS_location & in_mLocation,
                                                                      const GGS_string & in_mCppVarName,
                                                                      const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mCppVarName (),
mProperty_mNameForCheckingFormalParameterUsing () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mCppVarName = in_mCppVarName ;
  mProperty_mNameForCheckingFormalParameterUsing = in_mNameForCheckingFormalParameterUsing ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_varInExpressionForGeneration::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_varInExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_varInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mCppVarName, mProperty_mNameForCheckingFormalParameterUsing, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @varInExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varInExpressionForGeneration ("varInExpressionForGeneration",
                                                                                 & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_varInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_varInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_varInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionForGeneration GGS_varInExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_varInExpressionForGeneration result ;
  const GGS_varInExpressionForGeneration * p = (const GGS_varInExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_varInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @optionExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionExpressionAST::objectCompare (const GGS_optionExpressionAST & inOperand) const {
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

GGS_optionExpressionAST::GGS_optionExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_optionExpressionAST GGS_optionExpressionAST::
init_21__21__21_ (const GGS_lstring & in_mOptionComponentName,
                  const GGS_lstring & in_mOptionEntryName,
                  const GGS_lstring & in_mOptionGetterName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_optionExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_optionExpressionAST (inCompiler COMMA_THERE)) ;
  object->optionExpressionAST_init_21__21__21_ (in_mOptionComponentName, in_mOptionEntryName, in_mOptionGetterName, inCompiler) ;
  const GGS_optionExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionExpressionAST::
optionExpressionAST_init_21__21__21_ (const GGS_lstring & in_mOptionComponentName,
                                      const GGS_lstring & in_mOptionEntryName,
                                      const GGS_lstring & in_mOptionGetterName,
                                      Compiler * /* inCompiler */) {
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
  mProperty_mOptionGetterName = in_mOptionGetterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionExpressionAST::GGS_optionExpressionAST (const cPtr_optionExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_optionExpressionAST::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_optionExpressionAST * p = (cPtr_optionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionExpressionAST) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_optionExpressionAST::readProperty_mOptionEntryName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_optionExpressionAST * p = (cPtr_optionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionExpressionAST) ;
    return p->mProperty_mOptionEntryName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_optionExpressionAST::readProperty_mOptionGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_optionExpressionAST * p = (cPtr_optionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionExpressionAST) ;
    return p->mProperty_mOptionGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_optionExpressionAST::cPtr_optionExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName (),
mProperty_mOptionGetterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_optionExpressionAST::cPtr_optionExpressionAST (const GGS_lstring & in_mOptionComponentName,
                                                    const GGS_lstring & in_mOptionEntryName,
                                                    const GGS_lstring & in_mOptionGetterName,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName (),
mProperty_mOptionGetterName () {
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
  mProperty_mOptionGetterName = in_mOptionGetterName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_optionExpressionAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_optionExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionExpressionAST (mProperty_mOptionComponentName, mProperty_mOptionEntryName, mProperty_mOptionGetterName, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @optionExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionExpressionAST ("optionExpressionAST",
                                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionExpressionAST GGS_optionExpressionAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_optionExpressionAST result ;
  const GGS_optionExpressionAST * p = (const GGS_optionExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionExpressionAST *> (p)) {
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

ComparisonResult GGS_optionValueExpressionForGeneration::objectCompare (const GGS_optionValueExpressionForGeneration & inOperand) const {
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

GGS_optionValueExpressionForGeneration::GGS_optionValueExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_optionValueExpressionForGeneration GGS_optionValueExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_bool & in_mOptionComponentIsPredefined,
                          const GGS_string & in_mOptionComponentName,
                          const GGS_string & in_mOptionEntryName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_optionValueExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_optionValueExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->optionValueExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mOptionComponentIsPredefined, in_mOptionComponentName, in_mOptionEntryName, inCompiler) ;
  const GGS_optionValueExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionValueExpressionForGeneration::
optionValueExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                             const GGS_location & in_mLocation,
                                                             const GGS_bool & in_mOptionComponentIsPredefined,
                                                             const GGS_string & in_mOptionComponentName,
                                                             const GGS_string & in_mOptionEntryName,
                                                             Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mOptionComponentIsPredefined = in_mOptionComponentIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionValueExpressionForGeneration::GGS_optionValueExpressionForGeneration (const cPtr_optionValueExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionValueExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionValueExpressionForGeneration::readProperty_mOptionComponentIsPredefined (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_optionValueExpressionForGeneration * p = (cPtr_optionValueExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionValueExpressionForGeneration) ;
    return p->mProperty_mOptionComponentIsPredefined ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionValueExpressionForGeneration::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_optionValueExpressionForGeneration * p = (cPtr_optionValueExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionValueExpressionForGeneration) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionValueExpressionForGeneration::readProperty_mOptionEntryName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_optionValueExpressionForGeneration * p = (cPtr_optionValueExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionValueExpressionForGeneration) ;
    return p->mProperty_mOptionEntryName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionValueExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_optionValueExpressionForGeneration::cPtr_optionValueExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mOptionComponentIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_optionValueExpressionForGeneration::cPtr_optionValueExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                  const GGS_location & in_mLocation,
                                                                                  const GGS_bool & in_mOptionComponentIsPredefined,
                                                                                  const GGS_string & in_mOptionComponentName,
                                                                                  const GGS_string & in_mOptionEntryName,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_optionValueExpressionForGeneration::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_optionValueExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionValueExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mOptionComponentIsPredefined, mProperty_mOptionComponentName, mProperty_mOptionEntryName, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @optionValueExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionValueExpressionForGeneration ("optionValueExpressionForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionValueExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionValueExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionValueExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionValueExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionValueExpressionForGeneration GGS_optionValueExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_optionValueExpressionForGeneration result ;
  const GGS_optionValueExpressionForGeneration * p = (const GGS_optionValueExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionValueExpressionForGeneration *> (p)) {
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

ComparisonResult GGS_optionCharExpressionForGeneration::objectCompare (const GGS_optionCharExpressionForGeneration & inOperand) const {
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

GGS_optionCharExpressionForGeneration::GGS_optionCharExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_optionCharExpressionForGeneration GGS_optionCharExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_bool & in_mOptionComponentIsPredefined,
                          const GGS_string & in_mOptionComponentName,
                          const GGS_string & in_mOptionEntryName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_optionCharExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_optionCharExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->optionCharExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mOptionComponentIsPredefined, in_mOptionComponentName, in_mOptionEntryName, inCompiler) ;
  const GGS_optionCharExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionCharExpressionForGeneration::
optionCharExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                            const GGS_location & in_mLocation,
                                                            const GGS_bool & in_mOptionComponentIsPredefined,
                                                            const GGS_string & in_mOptionComponentName,
                                                            const GGS_string & in_mOptionEntryName,
                                                            Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mOptionComponentIsPredefined = in_mOptionComponentIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionCharExpressionForGeneration::GGS_optionCharExpressionForGeneration (const cPtr_optionCharExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionCharExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionCharExpressionForGeneration::readProperty_mOptionComponentIsPredefined (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_optionCharExpressionForGeneration * p = (cPtr_optionCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCharExpressionForGeneration) ;
    return p->mProperty_mOptionComponentIsPredefined ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionCharExpressionForGeneration::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_optionCharExpressionForGeneration * p = (cPtr_optionCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCharExpressionForGeneration) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionCharExpressionForGeneration::readProperty_mOptionEntryName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_optionCharExpressionForGeneration * p = (cPtr_optionCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCharExpressionForGeneration) ;
    return p->mProperty_mOptionEntryName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionCharExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_optionCharExpressionForGeneration::cPtr_optionCharExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mOptionComponentIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_optionCharExpressionForGeneration::cPtr_optionCharExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                const GGS_location & in_mLocation,
                                                                                const GGS_bool & in_mOptionComponentIsPredefined,
                                                                                const GGS_string & in_mOptionComponentName,
                                                                                const GGS_string & in_mOptionEntryName,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_optionCharExpressionForGeneration::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_optionCharExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionCharExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mOptionComponentIsPredefined, mProperty_mOptionComponentName, mProperty_mOptionEntryName, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @optionCharExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionCharExpressionForGeneration ("optionCharExpressionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionCharExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionCharExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionCharExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionCharExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionCharExpressionForGeneration GGS_optionCharExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_optionCharExpressionForGeneration result ;
  const GGS_optionCharExpressionForGeneration * p = (const GGS_optionCharExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionCharExpressionForGeneration *> (p)) {
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

ComparisonResult GGS_optionStringExpressionForGeneration::objectCompare (const GGS_optionStringExpressionForGeneration & inOperand) const {
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

GGS_optionStringExpressionForGeneration::GGS_optionStringExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_optionStringExpressionForGeneration GGS_optionStringExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_bool & in_mOptionComponentIsPredefined,
                          const GGS_string & in_mOptionComponentName,
                          const GGS_string & in_mOptionEntryName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_optionStringExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_optionStringExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->optionStringExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mOptionComponentIsPredefined, in_mOptionComponentName, in_mOptionEntryName, inCompiler) ;
  const GGS_optionStringExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionStringExpressionForGeneration::
optionStringExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                              const GGS_location & in_mLocation,
                                                              const GGS_bool & in_mOptionComponentIsPredefined,
                                                              const GGS_string & in_mOptionComponentName,
                                                              const GGS_string & in_mOptionEntryName,
                                                              Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mOptionComponentIsPredefined = in_mOptionComponentIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionStringExpressionForGeneration::GGS_optionStringExpressionForGeneration (const cPtr_optionStringExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionStringExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionStringExpressionForGeneration::readProperty_mOptionComponentIsPredefined (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_optionStringExpressionForGeneration * p = (cPtr_optionStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionStringExpressionForGeneration) ;
    return p->mProperty_mOptionComponentIsPredefined ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionStringExpressionForGeneration::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_optionStringExpressionForGeneration * p = (cPtr_optionStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionStringExpressionForGeneration) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionStringExpressionForGeneration::readProperty_mOptionEntryName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_optionStringExpressionForGeneration * p = (cPtr_optionStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionStringExpressionForGeneration) ;
    return p->mProperty_mOptionEntryName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionStringExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_optionStringExpressionForGeneration::cPtr_optionStringExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mOptionComponentIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_optionStringExpressionForGeneration::cPtr_optionStringExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                    const GGS_location & in_mLocation,
                                                                                    const GGS_bool & in_mOptionComponentIsPredefined,
                                                                                    const GGS_string & in_mOptionComponentName,
                                                                                    const GGS_string & in_mOptionEntryName,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_optionStringExpressionForGeneration::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_optionStringExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionStringExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mOptionComponentIsPredefined, mProperty_mOptionComponentName, mProperty_mOptionEntryName, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @optionStringExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionStringExpressionForGeneration ("optionStringExpressionForGeneration",
                                                                                        & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionStringExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionStringExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionStringExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionStringExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionStringExpressionForGeneration GGS_optionStringExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_optionStringExpressionForGeneration result ;
  const GGS_optionStringExpressionForGeneration * p = (const GGS_optionStringExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionStringExpressionForGeneration *> (p)) {
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

ComparisonResult GGS_optionCommentExpressionForGeneration::objectCompare (const GGS_optionCommentExpressionForGeneration & inOperand) const {
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

GGS_optionCommentExpressionForGeneration::GGS_optionCommentExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_optionCommentExpressionForGeneration GGS_optionCommentExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_bool & in_mOptionComponentIsPredefined,
                          const GGS_string & in_mOptionComponentName,
                          const GGS_string & in_mOptionEntryName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_optionCommentExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_optionCommentExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->optionCommentExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mOptionComponentIsPredefined, in_mOptionComponentName, in_mOptionEntryName, inCompiler) ;
  const GGS_optionCommentExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionCommentExpressionForGeneration::
optionCommentExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                               const GGS_location & in_mLocation,
                                                               const GGS_bool & in_mOptionComponentIsPredefined,
                                                               const GGS_string & in_mOptionComponentName,
                                                               const GGS_string & in_mOptionEntryName,
                                                               Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mOptionComponentIsPredefined = in_mOptionComponentIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionCommentExpressionForGeneration::GGS_optionCommentExpressionForGeneration (const cPtr_optionCommentExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionCommentExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionCommentExpressionForGeneration::readProperty_mOptionComponentIsPredefined (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_optionCommentExpressionForGeneration * p = (cPtr_optionCommentExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCommentExpressionForGeneration) ;
    return p->mProperty_mOptionComponentIsPredefined ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionCommentExpressionForGeneration::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_optionCommentExpressionForGeneration * p = (cPtr_optionCommentExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCommentExpressionForGeneration) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionCommentExpressionForGeneration::readProperty_mOptionEntryName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_optionCommentExpressionForGeneration * p = (cPtr_optionCommentExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCommentExpressionForGeneration) ;
    return p->mProperty_mOptionEntryName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionCommentExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_optionCommentExpressionForGeneration::cPtr_optionCommentExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mOptionComponentIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_optionCommentExpressionForGeneration::cPtr_optionCommentExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GGS_location & in_mLocation,
                                                                                      const GGS_bool & in_mOptionComponentIsPredefined,
                                                                                      const GGS_string & in_mOptionComponentName,
                                                                                      const GGS_string & in_mOptionEntryName,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_optionCommentExpressionForGeneration::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_optionCommentExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionCommentExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mOptionComponentIsPredefined, mProperty_mOptionComponentName, mProperty_mOptionEntryName, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @optionCommentExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration ("optionCommentExpressionForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionCommentExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionCommentExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionCommentExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionCommentExpressionForGeneration GGS_optionCommentExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_optionCommentExpressionForGeneration result ;
  const GGS_optionCommentExpressionForGeneration * p = (const GGS_optionCommentExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionCommentExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionCommentExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalCharExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalCharExpressionForGeneration::objectCompare (const GGS_literalCharExpressionForGeneration & inOperand) const {
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

GGS_literalCharExpressionForGeneration::GGS_literalCharExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalCharExpressionForGeneration GGS_literalCharExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_char & in_mCharacter,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalCharExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalCharExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalCharExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mCharacter, inCompiler) ;
  const GGS_literalCharExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionForGeneration::
literalCharExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                     const GGS_location & in_mLocation,
                                                     const GGS_char & in_mCharacter,
                                                     Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mCharacter = in_mCharacter ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionForGeneration::GGS_literalCharExpressionForGeneration (const cPtr_literalCharExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalCharExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_char GGS_literalCharExpressionForGeneration::readProperty_mCharacter (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_char () ;
  }else{
    cPtr_literalCharExpressionForGeneration * p = (cPtr_literalCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalCharExpressionForGeneration) ;
    return p->mProperty_mCharacter ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalCharExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalCharExpressionForGeneration::cPtr_literalCharExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mCharacter () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalCharExpressionForGeneration::cPtr_literalCharExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                  const GGS_location & in_mLocation,
                                                                                  const GGS_char & in_mCharacter,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mCharacter () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mCharacter = in_mCharacter ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalCharExpressionForGeneration::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_literalCharExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalCharExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mCharacter, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalCharExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mCharacter.printNonNullClassInstanceProperties ("mCharacter") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalCharExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalCharExpressionForGeneration ("literalCharExpressionForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalCharExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalCharExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalCharExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionForGeneration GGS_literalCharExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_literalCharExpressionForGeneration result ;
  const GGS_literalCharExpressionForGeneration * p = (const GGS_literalCharExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalCharExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalCharExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalBigIntExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalBigIntExpressionAST::objectCompare (const GGS_literalBigIntExpressionAST & inOperand) const {
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

GGS_literalBigIntExpressionAST::GGS_literalBigIntExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalBigIntExpressionAST GGS_literalBigIntExpressionAST::
init_21_ (const GGS_lbigint & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_literalBigIntExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_literalBigIntExpressionAST (inCompiler COMMA_THERE)) ;
  object->literalBigIntExpressionAST_init_21_ (in_mValue, inCompiler) ;
  const GGS_literalBigIntExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionAST::
literalBigIntExpressionAST_init_21_ (const GGS_lbigint & in_mValue,
                                     Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionAST::GGS_literalBigIntExpressionAST (const cPtr_literalBigIntExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalBigIntExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lbigint GGS_literalBigIntExpressionAST::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lbigint () ;
  }else{
    cPtr_literalBigIntExpressionAST * p = (cPtr_literalBigIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalBigIntExpressionAST) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalBigIntExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalBigIntExpressionAST::cPtr_literalBigIntExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalBigIntExpressionAST::cPtr_literalBigIntExpressionAST (const GGS_lbigint & in_mValue,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalBigIntExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBigIntExpressionAST ;
}

void cPtr_literalBigIntExpressionAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@literalBigIntExpressionAST:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalBigIntExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalBigIntExpressionAST (mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalBigIntExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalBigIntExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalBigIntExpressionAST ("literalBigIntExpressionAST",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalBigIntExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBigIntExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalBigIntExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalBigIntExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionAST GGS_literalBigIntExpressionAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_literalBigIntExpressionAST result ;
  const GGS_literalBigIntExpressionAST * p = (const GGS_literalBigIntExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalBigIntExpressionAST *> (p)) {
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

ComparisonResult GGS_literalUIntExpressionForGeneration::objectCompare (const GGS_literalUIntExpressionForGeneration & inOperand) const {
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

GGS_literalUIntExpressionForGeneration::GGS_literalUIntExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalUIntExpressionForGeneration GGS_literalUIntExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_uint & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalUIntExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalUIntExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalUIntExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GGS_literalUIntExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalUIntExpressionForGeneration::
literalUIntExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                     const GGS_location & in_mLocation,
                                                     const GGS_uint & in_mValue,
                                                     Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalUIntExpressionForGeneration::GGS_literalUIntExpressionForGeneration (const cPtr_literalUIntExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalUIntExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_literalUIntExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_literalUIntExpressionForGeneration * p = (cPtr_literalUIntExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalUIntExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalUIntExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalUIntExpressionForGeneration::cPtr_literalUIntExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalUIntExpressionForGeneration::cPtr_literalUIntExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                  const GGS_location & in_mLocation,
                                                                                  const GGS_uint & in_mValue,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalUIntExpressionForGeneration::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_literalUIntExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalUIntExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalUIntExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalUIntExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration ("literalUIntExpressionForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalUIntExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalUIntExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalUIntExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalUIntExpressionForGeneration GGS_literalUIntExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_literalUIntExpressionForGeneration result ;
  const GGS_literalUIntExpressionForGeneration * p = (const GGS_literalUIntExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalUIntExpressionForGeneration *> (p)) {
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

ComparisonResult GGS_literalUInt_36__34_ExpressionForGeneration::objectCompare (const GGS_literalUInt_36__34_ExpressionForGeneration & inOperand) const {
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

GGS_literalUInt_36__34_ExpressionForGeneration::GGS_literalUInt_36__34_ExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalUInt_36__34_ExpressionForGeneration GGS_literalUInt_36__34_ExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_uint_36__34_ & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalUInt_36__34_ExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalUInt_36__34_ExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalUInt_36__34_ExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GGS_literalUInt_36__34_ExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalUInt_36__34_ExpressionForGeneration::
literalUInt_36__34_ExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                             const GGS_location & in_mLocation,
                                                             const GGS_uint_36__34_ & in_mValue,
                                                             Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalUInt_36__34_ExpressionForGeneration::GGS_literalUInt_36__34_ExpressionForGeneration (const cPtr_literalUInt_36__34_ExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalUInt_36__34_ExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_literalUInt_36__34_ExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint_36__34_ () ;
  }else{
    cPtr_literalUInt_36__34_ExpressionForGeneration * p = (cPtr_literalUInt_36__34_ExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalUInt_36__34_ExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalUInt64ExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalUInt_36__34_ExpressionForGeneration::cPtr_literalUInt_36__34_ExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalUInt_36__34_ExpressionForGeneration::cPtr_literalUInt_36__34_ExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                  const GGS_location & in_mLocation,
                                                                                                  const GGS_uint_36__34_ & in_mValue,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalUInt_36__34_ExpressionForGeneration::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_literalUInt_36__34_ExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalUInt_36__34_ExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalUInt_36__34_ExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalUInt64ExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration ("literalUInt64ExpressionForGeneration",
                                                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalUInt_36__34_ExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalUInt_36__34_ExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalUInt_36__34_ExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalUInt_36__34_ExpressionForGeneration GGS_literalUInt_36__34_ExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_literalUInt_36__34_ExpressionForGeneration result ;
  const GGS_literalUInt_36__34_ExpressionForGeneration * p = (const GGS_literalUInt_36__34_ExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalUInt_36__34_ExpressionForGeneration *> (p)) {
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

ComparisonResult GGS_literalSIntExpressionForGeneration::objectCompare (const GGS_literalSIntExpressionForGeneration & inOperand) const {
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

GGS_literalSIntExpressionForGeneration::GGS_literalSIntExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalSIntExpressionForGeneration GGS_literalSIntExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_sint & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalSIntExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalSIntExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalSIntExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GGS_literalSIntExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalSIntExpressionForGeneration::
literalSIntExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                     const GGS_location & in_mLocation,
                                                     const GGS_sint & in_mValue,
                                                     Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalSIntExpressionForGeneration::GGS_literalSIntExpressionForGeneration (const cPtr_literalSIntExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalSIntExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_sint GGS_literalSIntExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_sint () ;
  }else{
    cPtr_literalSIntExpressionForGeneration * p = (cPtr_literalSIntExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalSIntExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalSIntExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalSIntExpressionForGeneration::cPtr_literalSIntExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalSIntExpressionForGeneration::cPtr_literalSIntExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                  const GGS_location & in_mLocation,
                                                                                  const GGS_sint & in_mValue,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalSIntExpressionForGeneration::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_literalSIntExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalSIntExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalSIntExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalSIntExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration ("literalSIntExpressionForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalSIntExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalSIntExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalSIntExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalSIntExpressionForGeneration GGS_literalSIntExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_literalSIntExpressionForGeneration result ;
  const GGS_literalSIntExpressionForGeneration * p = (const GGS_literalSIntExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalSIntExpressionForGeneration *> (p)) {
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

ComparisonResult GGS_literalSInt_36__34_ExpressionForGeneration::objectCompare (const GGS_literalSInt_36__34_ExpressionForGeneration & inOperand) const {
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

GGS_literalSInt_36__34_ExpressionForGeneration::GGS_literalSInt_36__34_ExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalSInt_36__34_ExpressionForGeneration GGS_literalSInt_36__34_ExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_sint_36__34_ & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalSInt_36__34_ExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalSInt_36__34_ExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalSInt_36__34_ExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GGS_literalSInt_36__34_ExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalSInt_36__34_ExpressionForGeneration::
literalSInt_36__34_ExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                             const GGS_location & in_mLocation,
                                                             const GGS_sint_36__34_ & in_mValue,
                                                             Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalSInt_36__34_ExpressionForGeneration::GGS_literalSInt_36__34_ExpressionForGeneration (const cPtr_literalSInt_36__34_ExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalSInt_36__34_ExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_sint_36__34_ GGS_literalSInt_36__34_ExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_sint_36__34_ () ;
  }else{
    cPtr_literalSInt_36__34_ExpressionForGeneration * p = (cPtr_literalSInt_36__34_ExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalSInt_36__34_ExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalSInt64ExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalSInt_36__34_ExpressionForGeneration::cPtr_literalSInt_36__34_ExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalSInt_36__34_ExpressionForGeneration::cPtr_literalSInt_36__34_ExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                  const GGS_location & in_mLocation,
                                                                                                  const GGS_sint_36__34_ & in_mValue,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalSInt_36__34_ExpressionForGeneration::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_literalSInt_36__34_ExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalSInt_36__34_ExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalSInt_36__34_ExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalSInt64ExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration ("literalSInt64ExpressionForGeneration",
                                                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalSInt_36__34_ExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalSInt_36__34_ExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalSInt_36__34_ExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalSInt_36__34_ExpressionForGeneration GGS_literalSInt_36__34_ExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_literalSInt_36__34_ExpressionForGeneration result ;
  const GGS_literalSInt_36__34_ExpressionForGeneration * p = (const GGS_literalSInt_36__34_ExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalSInt_36__34_ExpressionForGeneration *> (p)) {
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

ComparisonResult GGS_literalBigIntExpressionForGeneration::objectCompare (const GGS_literalBigIntExpressionForGeneration & inOperand) const {
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

GGS_literalBigIntExpressionForGeneration::GGS_literalBigIntExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalBigIntExpressionForGeneration GGS_literalBigIntExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_bigint & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalBigIntExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalBigIntExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalBigIntExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GGS_literalBigIntExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionForGeneration::
literalBigIntExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                       const GGS_location & in_mLocation,
                                                       const GGS_bigint & in_mValue,
                                                       Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionForGeneration::GGS_literalBigIntExpressionForGeneration (const cPtr_literalBigIntExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalBigIntExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_literalBigIntExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bigint () ;
  }else{
    cPtr_literalBigIntExpressionForGeneration * p = (cPtr_literalBigIntExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalBigIntExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalBigIntExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalBigIntExpressionForGeneration::cPtr_literalBigIntExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalBigIntExpressionForGeneration::cPtr_literalBigIntExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GGS_location & in_mLocation,
                                                                                      const GGS_bigint & in_mValue,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalBigIntExpressionForGeneration::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_literalBigIntExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalBigIntExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalBigIntExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalBigIntExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration ("literalBigIntExpressionForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalBigIntExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalBigIntExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalBigIntExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionForGeneration GGS_literalBigIntExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_literalBigIntExpressionForGeneration result ;
  const GGS_literalBigIntExpressionForGeneration * p = (const GGS_literalBigIntExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalBigIntExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalBigIntExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalStringExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalStringExpressionForGeneration::objectCompare (const GGS_literalStringExpressionForGeneration & inOperand) const {
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

GGS_literalStringExpressionForGeneration::GGS_literalStringExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalStringExpressionForGeneration GGS_literalStringExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_string & in_mString,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalStringExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalStringExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalStringExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mString, inCompiler) ;
  const GGS_literalStringExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionForGeneration::
literalStringExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                       const GGS_location & in_mLocation,
                                                       const GGS_string & in_mString,
                                                       Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mString = in_mString ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionForGeneration::GGS_literalStringExpressionForGeneration (const cPtr_literalStringExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalStringExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_literalStringExpressionForGeneration::readProperty_mString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_literalStringExpressionForGeneration * p = (cPtr_literalStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringExpressionForGeneration) ;
    return p->mProperty_mString ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalStringExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalStringExpressionForGeneration::cPtr_literalStringExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mString () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalStringExpressionForGeneration::cPtr_literalStringExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GGS_location & in_mLocation,
                                                                                      const GGS_string & in_mString,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mString () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mString = in_mString ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalStringExpressionForGeneration::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_literalStringExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalStringExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mString, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalStringExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mString.printNonNullClassInstanceProperties ("mString") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalStringExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalStringExpressionForGeneration ("literalStringExpressionForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalStringExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalStringExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalStringExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionForGeneration GGS_literalStringExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_literalStringExpressionForGeneration result ;
  const GGS_literalStringExpressionForGeneration * p = (const GGS_literalStringExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalStringExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexiqueIntrospectionExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexiqueIntrospectionExpressionAST::objectCompare (const GGS_lexiqueIntrospectionExpressionAST & inOperand) const {
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

GGS_lexiqueIntrospectionExpressionAST::GGS_lexiqueIntrospectionExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexiqueIntrospectionExpressionAST GGS_lexiqueIntrospectionExpressionAST::
init_21__21_ (const GGS_lstring & in_mLexiqueComponentName,
              const GGS_lstring & in_mLexiqueGetterName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexiqueIntrospectionExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexiqueIntrospectionExpressionAST (inCompiler COMMA_THERE)) ;
  object->lexiqueIntrospectionExpressionAST_init_21__21_ (in_mLexiqueComponentName, in_mLexiqueGetterName, inCompiler) ;
  const GGS_lexiqueIntrospectionExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionExpressionAST::
lexiqueIntrospectionExpressionAST_init_21__21_ (const GGS_lstring & in_mLexiqueComponentName,
                                                const GGS_lstring & in_mLexiqueGetterName,
                                                Compiler * /* inCompiler */) {
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mLexiqueGetterName = in_mLexiqueGetterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueIntrospectionExpressionAST::GGS_lexiqueIntrospectionExpressionAST (const cPtr_lexiqueIntrospectionExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexiqueIntrospectionExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexiqueIntrospectionExpressionAST::readProperty_mLexiqueComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexiqueIntrospectionExpressionAST * p = (cPtr_lexiqueIntrospectionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionExpressionAST) ;
    return p->mProperty_mLexiqueComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexiqueIntrospectionExpressionAST::readProperty_mLexiqueGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexiqueIntrospectionExpressionAST * p = (cPtr_lexiqueIntrospectionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionExpressionAST) ;
    return p->mProperty_mLexiqueGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexiqueIntrospectionExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexiqueIntrospectionExpressionAST::cPtr_lexiqueIntrospectionExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mLexiqueComponentName (),
mProperty_mLexiqueGetterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexiqueIntrospectionExpressionAST::cPtr_lexiqueIntrospectionExpressionAST (const GGS_lstring & in_mLexiqueComponentName,
                                                                                const GGS_lstring & in_mLexiqueGetterName,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mLexiqueComponentName (),
mProperty_mLexiqueGetterName () {
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mLexiqueGetterName = in_mLexiqueGetterName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexiqueIntrospectionExpressionAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_lexiqueIntrospectionExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexiqueIntrospectionExpressionAST (mProperty_mLexiqueComponentName, mProperty_mLexiqueGetterName, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @lexiqueIntrospectionExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST ("lexiqueIntrospectionExpressionAST",
                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexiqueIntrospectionExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexiqueIntrospectionExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexiqueIntrospectionExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueIntrospectionExpressionAST GGS_lexiqueIntrospectionExpressionAST::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_lexiqueIntrospectionExpressionAST result ;
  const GGS_lexiqueIntrospectionExpressionAST * p = (const GGS_lexiqueIntrospectionExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexiqueIntrospectionExpressionAST *> (p)) {
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

ComparisonResult GGS_lexiqueIntrospectionForGeneration::objectCompare (const GGS_lexiqueIntrospectionForGeneration & inOperand) const {
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

GGS_lexiqueIntrospectionForGeneration::GGS_lexiqueIntrospectionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexiqueIntrospectionForGeneration GGS_lexiqueIntrospectionForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                      const GGS_location & in_mLocation,
                      const GGS_string & in_mLexiqueComponentName,
                      const GGS_string & in_mLexiqueGetterName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_lexiqueIntrospectionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_lexiqueIntrospectionForGeneration (inCompiler COMMA_THERE)) ;
  object->lexiqueIntrospectionForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_mLexiqueComponentName, in_mLexiqueGetterName, inCompiler) ;
  const GGS_lexiqueIntrospectionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionForGeneration::
lexiqueIntrospectionForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                        const GGS_location & in_mLocation,
                                                        const GGS_string & in_mLexiqueComponentName,
                                                        const GGS_string & in_mLexiqueGetterName,
                                                        Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mLexiqueGetterName = in_mLexiqueGetterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueIntrospectionForGeneration::GGS_lexiqueIntrospectionForGeneration (const cPtr_lexiqueIntrospectionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexiqueIntrospectionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_lexiqueIntrospectionForGeneration::readProperty_mLexiqueComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_lexiqueIntrospectionForGeneration * p = (cPtr_lexiqueIntrospectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionForGeneration) ;
    return p->mProperty_mLexiqueComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_lexiqueIntrospectionForGeneration::readProperty_mLexiqueGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_lexiqueIntrospectionForGeneration * p = (cPtr_lexiqueIntrospectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionForGeneration) ;
    return p->mProperty_mLexiqueGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexiqueIntrospectionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_lexiqueIntrospectionForGeneration::cPtr_lexiqueIntrospectionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLexiqueComponentName (),
mProperty_mLexiqueGetterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexiqueIntrospectionForGeneration::cPtr_lexiqueIntrospectionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                const GGS_location & in_mLocation,
                                                                                const GGS_string & in_mLexiqueComponentName,
                                                                                const GGS_string & in_mLexiqueGetterName,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mLexiqueComponentName (),
mProperty_mLexiqueGetterName () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mLexiqueGetterName = in_mLexiqueGetterName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexiqueIntrospectionForGeneration::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_lexiqueIntrospectionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexiqueIntrospectionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLexiqueComponentName, mProperty_mLexiqueGetterName, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @lexiqueIntrospectionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration ("lexiqueIntrospectionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexiqueIntrospectionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexiqueIntrospectionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexiqueIntrospectionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueIntrospectionForGeneration GGS_lexiqueIntrospectionForGeneration::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_lexiqueIntrospectionForGeneration result ;
  const GGS_lexiqueIntrospectionForGeneration * p = (const GGS_lexiqueIntrospectionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexiqueIntrospectionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueIntrospectionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @unaryMinusExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryMinusExpressionForGeneration::objectCompare (const GGS_unaryMinusExpressionForGeneration & inOperand) const {
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

GGS_unaryMinusExpressionForGeneration::GGS_unaryMinusExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_unaryMinusExpressionForGeneration GGS_unaryMinusExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_semanticExpressionForGeneration & in_mExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_unaryMinusExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_unaryMinusExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->unaryMinusExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mExpression, inCompiler) ;
  const GGS_unaryMinusExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionForGeneration::
unaryMinusExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                    const GGS_location & in_mLocation,
                                                    const GGS_semanticExpressionForGeneration & in_mExpression,
                                                    Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionForGeneration::GGS_unaryMinusExpressionForGeneration (const cPtr_unaryMinusExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unaryMinusExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_unaryMinusExpressionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_unaryMinusExpressionForGeneration * p = (cPtr_unaryMinusExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryMinusExpressionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @unaryMinusExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_unaryMinusExpressionForGeneration::cPtr_unaryMinusExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_unaryMinusExpressionForGeneration::cPtr_unaryMinusExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
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

const GALGAS_TypeDescriptor * cPtr_unaryMinusExpressionForGeneration::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_unaryMinusExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_unaryMinusExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_unaryMinusExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @unaryMinusExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration ("unaryMinusExpressionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unaryMinusExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unaryMinusExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unaryMinusExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionForGeneration GGS_unaryMinusExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_unaryMinusExpressionForGeneration result ;
  const GGS_unaryMinusExpressionForGeneration * p = (const GGS_unaryMinusExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unaryMinusExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryMinusExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @notExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_notExpressionForGeneration::objectCompare (const GGS_notExpressionForGeneration & inOperand) const {
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

GGS_notExpressionForGeneration::GGS_notExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_notExpressionForGeneration GGS_notExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_semanticExpressionForGeneration & in_mExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_notExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_notExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->notExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mExpression, inCompiler) ;
  const GGS_notExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionForGeneration::
notExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                             const GGS_location & in_mLocation,
                                             const GGS_semanticExpressionForGeneration & in_mExpression,
                                             Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_notExpressionForGeneration::GGS_notExpressionForGeneration (const cPtr_notExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_notExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_notExpressionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_notExpressionForGeneration * p = (cPtr_notExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notExpressionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @notExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_notExpressionForGeneration::cPtr_notExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_notExpressionForGeneration::cPtr_notExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
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

const GALGAS_TypeDescriptor * cPtr_notExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notExpressionForGeneration ;
}

void cPtr_notExpressionForGeneration::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@notExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_notExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_notExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_notExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @notExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_notExpressionForGeneration ("notExpressionForGeneration",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_notExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_notExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_notExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_notExpressionForGeneration GGS_notExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_notExpressionForGeneration result ;
  const GGS_notExpressionForGeneration * p = (const GGS_notExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_notExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("notExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

