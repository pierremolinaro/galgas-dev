#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionIfAST_2E_weak::objectCompare (const GGS_templateInstructionIfAST_2E_weak & inOperand) const {
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

GGS_templateInstructionIfAST_2E_weak::GGS_templateInstructionIfAST_2E_weak (void) :
GGS_templateInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfAST_2E_weak & GGS_templateInstructionIfAST_2E_weak::operator = (const GGS_templateInstructionIfAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfAST_2E_weak::GGS_templateInstructionIfAST_2E_weak (const GGS_templateInstructionIfAST & inSource) :
GGS_templateInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfAST_2E_weak GGS_templateInstructionIfAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInstructionIfAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfAST GGS_templateInstructionIfAST_2E_weak::unwrappedValue (void) const {
  GGS_templateInstructionIfAST result ;
  if (isValid ()) {
    const cPtr_templateInstructionIfAST * p = (cPtr_templateInstructionIfAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInstructionIfAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfAST GGS_templateInstructionIfAST_2E_weak::bang_templateInstructionIfAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionIfAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionIfAST) ;
      result = GGS_templateInstructionIfAST ((cPtr_templateInstructionIfAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionIfAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfAST_2E_weak ("templateInstructionIfAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_templateInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionIfAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionIfAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionIfAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfAST_2E_weak GGS_templateInstructionIfAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateInstructionIfAST_2E_weak result ;
  const GGS_templateInstructionIfAST_2E_weak * p = (const GGS_templateInstructionIfAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionIfAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionIfAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionForGeneration::objectCompare (const GGS_templateInstructionForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration::GGS_templateInstructionForGeneration (void) :
AC_GALGAS_reference_class () {
}


void cPtr_templateInstructionForGeneration::
templateInstructionForGeneration_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration::GGS_templateInstructionForGeneration (const cPtr_templateInstructionForGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionForGeneration class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionForGeneration::cPtr_templateInstructionForGeneration (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForGeneration ("templateInstructionForGeneration",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration GGS_templateInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForGeneration result ;
  const GGS_templateInstructionForGeneration * p = (const GGS_templateInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionForGeneration_2E_weak::objectCompare (const GGS_templateInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_templateInstructionForGeneration_2E_weak::GGS_templateInstructionForGeneration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration_2E_weak & GGS_templateInstructionForGeneration_2E_weak::operator = (const GGS_templateInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration_2E_weak::GGS_templateInstructionForGeneration_2E_weak (const GGS_templateInstructionForGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration_2E_weak GGS_templateInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration GGS_templateInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_templateInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_templateInstructionForGeneration * p = (cPtr_templateInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration GGS_templateInstructionForGeneration_2E_weak::bang_templateInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionForGeneration) ;
      result = GGS_templateInstructionForGeneration ((cPtr_templateInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForGeneration_2E_weak ("templateInstructionForGeneration.weak",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration_2E_weak GGS_templateInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForGeneration_2E_weak result ;
  const GGS_templateInstructionForGeneration_2E_weak * p = (const GGS_templateInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionExpressionForGeneration_2E_weak::objectCompare (const GGS_templateInstructionExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_templateInstructionExpressionForGeneration_2E_weak::GGS_templateInstructionExpressionForGeneration_2E_weak (void) :
GGS_templateInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionExpressionForGeneration_2E_weak & GGS_templateInstructionExpressionForGeneration_2E_weak::operator = (const GGS_templateInstructionExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionExpressionForGeneration_2E_weak::GGS_templateInstructionExpressionForGeneration_2E_weak (const GGS_templateInstructionExpressionForGeneration & inSource) :
GGS_templateInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionExpressionForGeneration_2E_weak GGS_templateInstructionExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInstructionExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionExpressionForGeneration GGS_templateInstructionExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_templateInstructionExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_templateInstructionExpressionForGeneration * p = (cPtr_templateInstructionExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInstructionExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionExpressionForGeneration GGS_templateInstructionExpressionForGeneration_2E_weak::bang_templateInstructionExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionExpressionForGeneration) ;
      result = GGS_templateInstructionExpressionForGeneration ((cPtr_templateInstructionExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration_2E_weak ("templateInstructionExpressionForGeneration.weak",
                                                                                                          & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionExpressionForGeneration_2E_weak GGS_templateInstructionExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_templateInstructionExpressionForGeneration_2E_weak result ;
  const GGS_templateInstructionExpressionForGeneration_2E_weak * p = (const GGS_templateInstructionExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@templateInstructionListForGeneration' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_templateInstructionListForGeneration : public cCollectionElement {
  public: GGS_templateInstructionListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_templateInstructionListForGeneration (const GGS_templateInstructionForGeneration & in_mInstruction
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_templateInstructionListForGeneration (const GGS_templateInstructionListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_templateInstructionListForGeneration::cCollectionElement_templateInstructionListForGeneration (const GGS_templateInstructionForGeneration & in_mInstruction
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_templateInstructionListForGeneration::cCollectionElement_templateInstructionListForGeneration (const GGS_templateInstructionListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_templateInstructionListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_templateInstructionListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_templateInstructionListForGeneration (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_templateInstructionListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstruction" ":") ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration::GGS_templateInstructionListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration::GGS_templateInstructionListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_templateInstructionListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_templateInstructionListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::plusPlusAssignOperation (const GGS_templateInstructionListForGeneration_2E_element & inValue
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_templateInstructionListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionListForGeneration::class_func_listWithValue (const GGS_templateInstructionForGeneration & inOperand0
                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_templateInstructionListForGeneration result ;
  if (inOperand0.isValid ()) {
    result = GGS_templateInstructionListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_templateInstructionListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GGS_templateInstructionForGeneration & in_mInstruction
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_templateInstructionListForGeneration (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::addAssignOperation (const GGS_templateInstructionForGeneration & inOperand0
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_templateInstructionListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::setter_append (const GGS_templateInstructionForGeneration inOperand0,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_templateInstructionListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::setter_insertAtIndex (const GGS_templateInstructionForGeneration inOperand0,
                                                                     const GGS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_templateInstructionListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::setter_removeAtIndex (GGS_templateInstructionForGeneration & outOperand0,
                                                                     const GGS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_templateInstructionListForGeneration * p = (cCollectionElement_templateInstructionListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mInstruction ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::setter_popFirst (GGS_templateInstructionForGeneration & outOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionListForGeneration * p = (cCollectionElement_templateInstructionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::setter_popLast (GGS_templateInstructionForGeneration & outOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionListForGeneration * p = (cCollectionElement_templateInstructionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::method_first (GGS_templateInstructionForGeneration & outOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionListForGeneration * p = (cCollectionElement_templateInstructionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::method_last (GGS_templateInstructionForGeneration & outOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionListForGeneration * p = (cCollectionElement_templateInstructionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionListForGeneration::add_operation (const GGS_templateInstructionListForGeneration & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_templateInstructionListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionListForGeneration result = GGS_templateInstructionListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionListForGeneration result = GGS_templateInstructionListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionListForGeneration result = GGS_templateInstructionListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::plusAssignOperation (const GGS_templateInstructionListForGeneration inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration::setter_setMInstructionAtIndex (GGS_templateInstructionForGeneration inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionListForGeneration * p = (cCollectionElement_templateInstructionListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration GGS_templateInstructionListForGeneration::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionListForGeneration * p = (cCollectionElement_templateInstructionListForGeneration *) attributes.ptr () ;
  GGS_templateInstructionForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @templateInstructionListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_templateInstructionListForGeneration::DownEnumerator_templateInstructionListForGeneration (const GGS_templateInstructionListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration_2E_element DownEnumerator_templateInstructionListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionListForGeneration * p = (const cCollectionElement_templateInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration DownEnumerator_templateInstructionListForGeneration::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionListForGeneration * p = (const cCollectionElement_templateInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
  return p->mObject.mProperty_mInstruction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @templateInstructionListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_templateInstructionListForGeneration::UpEnumerator_templateInstructionListForGeneration (const GGS_templateInstructionListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration_2E_element UpEnumerator_templateInstructionListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionListForGeneration * p = (const cCollectionElement_templateInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForGeneration UpEnumerator_templateInstructionListForGeneration::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionListForGeneration * p = (const cCollectionElement_templateInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionListForGeneration) ;
  return p->mObject.mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//     @templateInstructionListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionListForGeneration ("templateInstructionListForGeneration",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_templateInstructionListForGeneration result ;
  const GGS_templateInstructionListForGeneration * p = (const GGS_templateInstructionListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateBlockInstructionForGeneration_2E_weak::objectCompare (const GGS_templateBlockInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_templateBlockInstructionForGeneration_2E_weak::GGS_templateBlockInstructionForGeneration_2E_weak (void) :
GGS_templateInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateBlockInstructionForGeneration_2E_weak & GGS_templateBlockInstructionForGeneration_2E_weak::operator = (const GGS_templateBlockInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateBlockInstructionForGeneration_2E_weak::GGS_templateBlockInstructionForGeneration_2E_weak (const GGS_templateBlockInstructionForGeneration & inSource) :
GGS_templateInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateBlockInstructionForGeneration_2E_weak GGS_templateBlockInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateBlockInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateBlockInstructionForGeneration GGS_templateBlockInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_templateBlockInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_templateBlockInstructionForGeneration * p = (cPtr_templateBlockInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateBlockInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateBlockInstructionForGeneration GGS_templateBlockInstructionForGeneration_2E_weak::bang_templateBlockInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateBlockInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateBlockInstructionForGeneration) ;
      result = GGS_templateBlockInstructionForGeneration ((cPtr_templateBlockInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateBlockInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration_2E_weak ("templateBlockInstructionForGeneration.weak",
                                                                                                     & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateBlockInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateBlockInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateBlockInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateBlockInstructionForGeneration_2E_weak GGS_templateBlockInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_templateBlockInstructionForGeneration_2E_weak result ;
  const GGS_templateBlockInstructionForGeneration_2E_weak * p = (const GGS_templateBlockInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateBlockInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateBlockInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionGetColumnLocationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionGetColumnLocationForGeneration::objectCompare (const GGS_templateInstructionGetColumnLocationForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationForGeneration::GGS_templateInstructionGetColumnLocationForGeneration (void) :
GGS_templateInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationForGeneration GGS_templateInstructionGetColumnLocationForGeneration::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionGetColumnLocationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionGetColumnLocationForGeneration (inCompiler COMMA_THERE)) ;
  object->templateInstructionGetColumnLocationForGeneration_init (inCompiler) ;
  const GGS_templateInstructionGetColumnLocationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGetColumnLocationForGeneration::
templateInstructionGetColumnLocationForGeneration_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationForGeneration::GGS_templateInstructionGetColumnLocationForGeneration (const cPtr_templateInstructionGetColumnLocationForGeneration * inSourcePtr) :
GGS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionGetColumnLocationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationForGeneration GGS_templateInstructionGetColumnLocationForGeneration::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_templateInstructionGetColumnLocationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_templateInstructionGetColumnLocationForGeneration (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionGetColumnLocationForGeneration class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionGetColumnLocationForGeneration::cPtr_templateInstructionGetColumnLocationForGeneration (Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionGetColumnLocationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration ;
}

void cPtr_templateInstructionGetColumnLocationForGeneration::description (String & ioString,
                                                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@templateInstructionGetColumnLocationForGeneration]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionGetColumnLocationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionGetColumnLocationForGeneration (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionGetColumnLocationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionGetColumnLocationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration ("templateInstructionGetColumnLocationForGeneration",
                                                                                                         & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionGetColumnLocationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionGetColumnLocationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionGetColumnLocationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationForGeneration GGS_templateInstructionGetColumnLocationForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_templateInstructionGetColumnLocationForGeneration result ;
  const GGS_templateInstructionGetColumnLocationForGeneration * p = (const GGS_templateInstructionGetColumnLocationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionGetColumnLocationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionGetColumnLocationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionGetColumnLocationForGeneration_2E_weak::objectCompare (const GGS_templateInstructionGetColumnLocationForGeneration_2E_weak & inOperand) const {
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

GGS_templateInstructionGetColumnLocationForGeneration_2E_weak::GGS_templateInstructionGetColumnLocationForGeneration_2E_weak (void) :
GGS_templateInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationForGeneration_2E_weak & GGS_templateInstructionGetColumnLocationForGeneration_2E_weak::operator = (const GGS_templateInstructionGetColumnLocationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationForGeneration_2E_weak::GGS_templateInstructionGetColumnLocationForGeneration_2E_weak (const GGS_templateInstructionGetColumnLocationForGeneration & inSource) :
GGS_templateInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationForGeneration_2E_weak GGS_templateInstructionGetColumnLocationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInstructionGetColumnLocationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationForGeneration GGS_templateInstructionGetColumnLocationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_templateInstructionGetColumnLocationForGeneration result ;
  if (isValid ()) {
    const cPtr_templateInstructionGetColumnLocationForGeneration * p = (cPtr_templateInstructionGetColumnLocationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInstructionGetColumnLocationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationForGeneration GGS_templateInstructionGetColumnLocationForGeneration_2E_weak::bang_templateInstructionGetColumnLocationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionGetColumnLocationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionGetColumnLocationForGeneration) ;
      result = GGS_templateInstructionGetColumnLocationForGeneration ((cPtr_templateInstructionGetColumnLocationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionGetColumnLocationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration_2E_weak ("templateInstructionGetColumnLocationForGeneration.weak",
                                                                                                                 & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionGetColumnLocationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionGetColumnLocationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionGetColumnLocationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGetColumnLocationForGeneration_2E_weak GGS_templateInstructionGetColumnLocationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_templateInstructionGetColumnLocationForGeneration_2E_weak result ;
  const GGS_templateInstructionGetColumnLocationForGeneration_2E_weak * p = (const GGS_templateInstructionGetColumnLocationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionGetColumnLocationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionGetColumnLocationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionGotoColumnLocationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionGotoColumnLocationForGeneration::objectCompare (const GGS_templateInstructionGotoColumnLocationForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationForGeneration::GGS_templateInstructionGotoColumnLocationForGeneration (void) :
GGS_templateInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationForGeneration GGS_templateInstructionGotoColumnLocationForGeneration::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionGotoColumnLocationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionGotoColumnLocationForGeneration (inCompiler COMMA_THERE)) ;
  object->templateInstructionGotoColumnLocationForGeneration_init (inCompiler) ;
  const GGS_templateInstructionGotoColumnLocationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGotoColumnLocationForGeneration::
templateInstructionGotoColumnLocationForGeneration_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationForGeneration::GGS_templateInstructionGotoColumnLocationForGeneration (const cPtr_templateInstructionGotoColumnLocationForGeneration * inSourcePtr) :
GGS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionGotoColumnLocationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationForGeneration GGS_templateInstructionGotoColumnLocationForGeneration::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_templateInstructionGotoColumnLocationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_templateInstructionGotoColumnLocationForGeneration (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionGotoColumnLocationForGeneration class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionGotoColumnLocationForGeneration::cPtr_templateInstructionGotoColumnLocationForGeneration (Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionGotoColumnLocationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration ;
}

void cPtr_templateInstructionGotoColumnLocationForGeneration::description (String & ioString,
                                                                           const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@templateInstructionGotoColumnLocationForGeneration]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionGotoColumnLocationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionGotoColumnLocationForGeneration (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionGotoColumnLocationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionGotoColumnLocationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration ("templateInstructionGotoColumnLocationForGeneration",
                                                                                                          & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionGotoColumnLocationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionGotoColumnLocationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionGotoColumnLocationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationForGeneration GGS_templateInstructionGotoColumnLocationForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_templateInstructionGotoColumnLocationForGeneration result ;
  const GGS_templateInstructionGotoColumnLocationForGeneration * p = (const GGS_templateInstructionGotoColumnLocationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionGotoColumnLocationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionGotoColumnLocationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak::objectCompare (const GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak & inOperand) const {
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

GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak::GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak (void) :
GGS_templateInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak & GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak::operator = (const GGS_templateInstructionGotoColumnLocationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak::GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak (const GGS_templateInstructionGotoColumnLocationForGeneration & inSource) :
GGS_templateInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationForGeneration GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_templateInstructionGotoColumnLocationForGeneration result ;
  if (isValid ()) {
    const cPtr_templateInstructionGotoColumnLocationForGeneration * p = (cPtr_templateInstructionGotoColumnLocationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInstructionGotoColumnLocationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationForGeneration GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak::bang_templateInstructionGotoColumnLocationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionGotoColumnLocationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionGotoColumnLocationForGeneration) ;
      result = GGS_templateInstructionGotoColumnLocationForGeneration ((cPtr_templateInstructionGotoColumnLocationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionGotoColumnLocationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration_2E_weak ("templateInstructionGotoColumnLocationForGeneration.weak",
                                                                                                                  & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak result ;
  const GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak * p = (const GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionGotoColumnLocationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionGotoColumnLocationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@templateInstructionIfBranchListForGeneration' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_templateInstructionIfBranchListForGeneration : public cCollectionElement {
  public: GGS_templateInstructionIfBranchListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_templateInstructionIfBranchListForGeneration (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                           const GGS_templateInstructionListForGeneration & in_mInstructionList
                                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_templateInstructionIfBranchListForGeneration (const GGS_templateInstructionIfBranchListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_templateInstructionIfBranchListForGeneration::cCollectionElement_templateInstructionIfBranchListForGeneration (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                                                                                  const GGS_templateInstructionListForGeneration & in_mInstructionList
                                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression, in_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_templateInstructionIfBranchListForGeneration::cCollectionElement_templateInstructionIfBranchListForGeneration (const GGS_templateInstructionIfBranchListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExpression, inElement.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_templateInstructionIfBranchListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_templateInstructionIfBranchListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_templateInstructionIfBranchListForGeneration (mObject.mProperty_mExpression, mObject.mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_templateInstructionIfBranchListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExpression" ":") ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration::GGS_templateInstructionIfBranchListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration::GGS_templateInstructionIfBranchListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration GGS_templateInstructionIfBranchListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_templateInstructionIfBranchListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration GGS_templateInstructionIfBranchListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_templateInstructionIfBranchListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration::plusPlusAssignOperation (const GGS_templateInstructionIfBranchListForGeneration_2E_element & inValue
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_templateInstructionIfBranchListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration GGS_templateInstructionIfBranchListForGeneration::class_func_listWithValue (const GGS_semanticExpressionForGeneration & inOperand0,
                                                                                                                             const GGS_templateInstructionListForGeneration & inOperand1
                                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_templateInstructionIfBranchListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_templateInstructionIfBranchListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_templateInstructionIfBranchListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                  const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                                  const GGS_templateInstructionListForGeneration & in_mInstructionList
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_templateInstructionIfBranchListForGeneration (in_mExpression,
                                                                                  in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration::addAssignOperation (const GGS_semanticExpressionForGeneration & inOperand0,
                                                                           const GGS_templateInstructionListForGeneration & inOperand1
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_templateInstructionIfBranchListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration::setter_append (const GGS_semanticExpressionForGeneration inOperand0,
                                                                      const GGS_templateInstructionListForGeneration inOperand1,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_templateInstructionIfBranchListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration::setter_insertAtIndex (const GGS_semanticExpressionForGeneration inOperand0,
                                                                             const GGS_templateInstructionListForGeneration inOperand1,
                                                                             const GGS_uint inInsertionIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_templateInstructionIfBranchListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration::setter_removeAtIndex (GGS_semanticExpressionForGeneration & outOperand0,
                                                                             GGS_templateInstructionListForGeneration & outOperand1,
                                                                             const GGS_uint inRemoveIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mExpression ;
      outOperand1 = p->mObject.mProperty_mInstructionList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration::setter_popFirst (GGS_semanticExpressionForGeneration & outOperand0,
                                                                        GGS_templateInstructionListForGeneration & outOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration::setter_popLast (GGS_semanticExpressionForGeneration & outOperand0,
                                                                       GGS_templateInstructionListForGeneration & outOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration::method_first (GGS_semanticExpressionForGeneration & outOperand0,
                                                                     GGS_templateInstructionListForGeneration & outOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration::method_last (GGS_semanticExpressionForGeneration & outOperand0,
                                                                    GGS_templateInstructionListForGeneration & outOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration GGS_templateInstructionIfBranchListForGeneration::add_operation (const GGS_templateInstructionIfBranchListForGeneration & inOperand,
                                                                                                                  Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_templateInstructionIfBranchListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration GGS_templateInstructionIfBranchListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionIfBranchListForGeneration result = GGS_templateInstructionIfBranchListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration GGS_templateInstructionIfBranchListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionIfBranchListForGeneration result = GGS_templateInstructionIfBranchListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration GGS_templateInstructionIfBranchListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionIfBranchListForGeneration result = GGS_templateInstructionIfBranchListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration::plusAssignOperation (const GGS_templateInstructionIfBranchListForGeneration inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration::setter_setMExpressionAtIndex (GGS_semanticExpressionForGeneration inOperand,
                                                                                     GGS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_templateInstructionIfBranchListForGeneration::getter_mExpressionAtIndex (const GGS_uint & inIndex,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) attributes.ptr () ;
  GGS_semanticExpressionForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListForGeneration::setter_setMInstructionListAtIndex (GGS_templateInstructionListForGeneration inOperand,
                                                                                          GGS_uint inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionIfBranchListForGeneration::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionIfBranchListForGeneration * p = (cCollectionElement_templateInstructionIfBranchListForGeneration *) attributes.ptr () ;
  GGS_templateInstructionListForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @templateInstructionIfBranchListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_templateInstructionIfBranchListForGeneration::DownEnumerator_templateInstructionIfBranchListForGeneration (const GGS_templateInstructionIfBranchListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration_2E_element DownEnumerator_templateInstructionIfBranchListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionIfBranchListForGeneration * p = (const cCollectionElement_templateInstructionIfBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration DownEnumerator_templateInstructionIfBranchListForGeneration::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionIfBranchListForGeneration * p = (const cCollectionElement_templateInstructionIfBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
  return p->mObject.mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration DownEnumerator_templateInstructionIfBranchListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionIfBranchListForGeneration * p = (const cCollectionElement_templateInstructionIfBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
  return p->mObject.mProperty_mInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @templateInstructionIfBranchListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_templateInstructionIfBranchListForGeneration::UpEnumerator_templateInstructionIfBranchListForGeneration (const GGS_templateInstructionIfBranchListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration_2E_element UpEnumerator_templateInstructionIfBranchListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionIfBranchListForGeneration * p = (const cCollectionElement_templateInstructionIfBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration UpEnumerator_templateInstructionIfBranchListForGeneration::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionIfBranchListForGeneration * p = (const cCollectionElement_templateInstructionIfBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
  return p->mObject.mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration UpEnumerator_templateInstructionIfBranchListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionIfBranchListForGeneration * p = (const cCollectionElement_templateInstructionIfBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionIfBranchListForGeneration) ;
  return p->mObject.mProperty_mInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @templateInstructionIfBranchListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfBranchListForGeneration ("templateInstructionIfBranchListForGeneration",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionIfBranchListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfBranchListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionIfBranchListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionIfBranchListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration GGS_templateInstructionIfBranchListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_templateInstructionIfBranchListForGeneration result ;
  const GGS_templateInstructionIfBranchListForGeneration * p = (const GGS_templateInstructionIfBranchListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionIfBranchListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionIfBranchListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionIfForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionIfForGeneration::objectCompare (const GGS_templateInstructionIfForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfForGeneration::GGS_templateInstructionIfForGeneration (void) :
GGS_templateInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionIfForGeneration GGS_templateInstructionIfForGeneration::
init_21__21_ (const GGS_templateInstructionIfBranchListForGeneration & in_mTemplateInstructionIfBranchList,
              const GGS_templateInstructionListForGeneration & in_mElseInstructionList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionIfForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionIfForGeneration (inCompiler COMMA_THERE)) ;
  object->templateInstructionIfForGeneration_init_21__21_ (in_mTemplateInstructionIfBranchList, in_mElseInstructionList, inCompiler) ;
  const GGS_templateInstructionIfForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionIfForGeneration::
templateInstructionIfForGeneration_init_21__21_ (const GGS_templateInstructionIfBranchListForGeneration & in_mTemplateInstructionIfBranchList,
                                                 const GGS_templateInstructionListForGeneration & in_mElseInstructionList,
                                                 Compiler * /* inCompiler */) {
  mProperty_mTemplateInstructionIfBranchList = in_mTemplateInstructionIfBranchList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfForGeneration::GGS_templateInstructionIfForGeneration (const cPtr_templateInstructionIfForGeneration * inSourcePtr) :
GGS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionIfForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfForGeneration GGS_templateInstructionIfForGeneration::class_func_new (const GGS_templateInstructionIfBranchListForGeneration & in_mTemplateInstructionIfBranchList,
                                                                                               const GGS_templateInstructionListForGeneration & in_mElseInstructionList,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  GGS_templateInstructionIfForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_templateInstructionIfForGeneration (in_mTemplateInstructionIfBranchList, in_mElseInstructionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListForGeneration GGS_templateInstructionIfForGeneration::readProperty_mTemplateInstructionIfBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionIfBranchListForGeneration () ;
  }else{
    cPtr_templateInstructionIfForGeneration * p = (cPtr_templateInstructionIfForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionIfForGeneration) ;
    return p->mProperty_mTemplateInstructionIfBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionIfForGeneration::readProperty_mElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionIfForGeneration * p = (cPtr_templateInstructionIfForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionIfForGeneration) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionIfForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionIfForGeneration::cPtr_templateInstructionIfForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mTemplateInstructionIfBranchList (),
mProperty_mElseInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionIfForGeneration::cPtr_templateInstructionIfForGeneration (const GGS_templateInstructionIfBranchListForGeneration & in_mTemplateInstructionIfBranchList,
                                                                                  const GGS_templateInstructionListForGeneration & in_mElseInstructionList,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mTemplateInstructionIfBranchList (),
mProperty_mElseInstructionList () {
  mProperty_mTemplateInstructionIfBranchList = in_mTemplateInstructionIfBranchList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionIfForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfForGeneration ;
}

void cPtr_templateInstructionIfForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionIfForGeneration:") ;
  mProperty_mTemplateInstructionIfBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionIfForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionIfForGeneration (mProperty_mTemplateInstructionIfBranchList, mProperty_mElseInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionIfForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mTemplateInstructionIfBranchList.printNonNullClassInstanceProperties ("mTemplateInstructionIfBranchList") ;
    mProperty_mElseInstructionList.printNonNullClassInstanceProperties ("mElseInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionIfForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfForGeneration ("templateInstructionIfForGeneration",
                                                                                          & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionIfForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionIfForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionIfForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfForGeneration GGS_templateInstructionIfForGeneration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_templateInstructionIfForGeneration result ;
  const GGS_templateInstructionIfForGeneration * p = (const GGS_templateInstructionIfForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionIfForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionIfForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionIfForGeneration_2E_weak::objectCompare (const GGS_templateInstructionIfForGeneration_2E_weak & inOperand) const {
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

GGS_templateInstructionIfForGeneration_2E_weak::GGS_templateInstructionIfForGeneration_2E_weak (void) :
GGS_templateInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfForGeneration_2E_weak & GGS_templateInstructionIfForGeneration_2E_weak::operator = (const GGS_templateInstructionIfForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfForGeneration_2E_weak::GGS_templateInstructionIfForGeneration_2E_weak (const GGS_templateInstructionIfForGeneration & inSource) :
GGS_templateInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfForGeneration_2E_weak GGS_templateInstructionIfForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInstructionIfForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfForGeneration GGS_templateInstructionIfForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_templateInstructionIfForGeneration result ;
  if (isValid ()) {
    const cPtr_templateInstructionIfForGeneration * p = (cPtr_templateInstructionIfForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInstructionIfForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfForGeneration GGS_templateInstructionIfForGeneration_2E_weak::bang_templateInstructionIfForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionIfForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionIfForGeneration) ;
      result = GGS_templateInstructionIfForGeneration ((cPtr_templateInstructionIfForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionIfForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionIfForGeneration_2E_weak ("templateInstructionIfForGeneration.weak",
                                                                                                  & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionIfForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionIfForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionIfForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfForGeneration_2E_weak GGS_templateInstructionIfForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_templateInstructionIfForGeneration_2E_weak result ;
  const GGS_templateInstructionIfForGeneration_2E_weak * p = (const GGS_templateInstructionIfForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionIfForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionIfForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_templateVariableMap::cMapElement_templateVariableMap (const GGS_templateVariableMap_2E_element & inValue
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mType (inValue.mProperty_mType),
mProperty_mCppName (inValue.mProperty_mCppName) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_templateVariableMap::cMapElement_templateVariableMap (const GGS_lstring & inKey,
                                                                  const GGS_unifiedTypeMapEntry & in_mType,
                                                                  const GGS_string & in_mCppName
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mType (in_mType),
mProperty_mCppName (in_mCppName) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_templateVariableMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_templateVariableMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_templateVariableMap (mProperty_lkey, mProperty_mType, mProperty_mCppName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_templateVariableMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mType" ":") ;
  mProperty_mType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCppName" ":") ;
  mProperty_mCppName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap::GGS_templateVariableMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap::GGS_templateVariableMap (const GGS_templateVariableMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap & GGS_templateVariableMap::operator = (const GGS_templateVariableMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap GGS_templateVariableMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_templateVariableMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap GGS_templateVariableMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_templateVariableMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap_2E_element_3F_ GGS_templateVariableMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_templateVariableMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_templateVariableMap * p = (cMapElement_templateVariableMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_templateVariableMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_templateVariableMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mType = p->mProperty_mType ;
      element.mProperty_mCppName = p->mProperty_mCppName ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap GGS_templateVariableMap::class_func_mapWithMapToOverride (const GGS_templateVariableMap & inMapToOverride
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_templateVariableMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap GGS_templateVariableMap::getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_templateVariableMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateVariableMap::setter_insertKey (GGS_lstring inKey,
                                                GGS_unifiedTypeMapEntry inArgument0,
                                                GGS_string inArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_templateVariableMap * p = nullptr ;
  macroMyNew (p, cMapElement_templateVariableMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' variable is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_templateVariableMap_searchKey = "the '%K' variable is not declared" ;

//--------------------------------------------------------------------------------------------------

void GGS_templateVariableMap::method_searchKey (GGS_lstring inKey,
                                                GGS_unifiedTypeMapEntry & outArgument0,
                                                GGS_string & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kSearchErrorMessage_templateVariableMap_searchKey
                                                                                                       COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_templateVariableMap) ;
    outArgument0 = p->mProperty_mType ;
    outArgument1 = p->mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_templateVariableMap::getter_mTypeForKey (const GGS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) attributes ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_templateVariableMap) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_templateVariableMap::getter_mCppNameForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) attributes ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_templateVariableMap) ;
    result = p->mProperty_mCppName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateVariableMap::setter_setMTypeForKey (GGS_unifiedTypeMapEntry inAttributeValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_templateVariableMap * p = (cMapElement_templateVariableMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_templateVariableMap) ;
    p->mProperty_mType = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateVariableMap::setter_setMCppNameForKey (GGS_string inAttributeValue,
                                                        GGS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_templateVariableMap * p = (cMapElement_templateVariableMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_templateVariableMap) ;
    p->mProperty_mCppName = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_templateVariableMap * GGS_templateVariableMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                              const GGS_string & inKey
                                                                                              COMMA_LOCATION_ARGS) {
  cMapElement_templateVariableMap * result = (cMapElement_templateVariableMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_templateVariableMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @templateVariableMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_templateVariableMap::DownEnumerator_templateVariableMap (const GGS_templateVariableMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap_2E_element DownEnumerator_templateVariableMap::current (LOCATION_ARGS) const {
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_templateVariableMap) ;
  return GGS_templateVariableMap_2E_element (p->mProperty_lkey, p->mProperty_mType, p->mProperty_mCppName) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_templateVariableMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_templateVariableMap::current_mType (LOCATION_ARGS) const {
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_templateVariableMap) ;
  return p->mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_templateVariableMap::current_mCppName (LOCATION_ARGS) const {
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_templateVariableMap) ;
  return p->mProperty_mCppName ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @templateVariableMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_templateVariableMap::UpEnumerator_templateVariableMap (const GGS_templateVariableMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap_2E_element UpEnumerator_templateVariableMap::current (LOCATION_ARGS) const {
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_templateVariableMap) ;
  return GGS_templateVariableMap_2E_element (p->mProperty_lkey, p->mProperty_mType, p->mProperty_mCppName) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_templateVariableMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_templateVariableMap::current_mType (LOCATION_ARGS) const {
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_templateVariableMap) ;
  return p->mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_templateVariableMap::current_mCppName (LOCATION_ARGS) const {
  const cMapElement_templateVariableMap * p = (const cMapElement_templateVariableMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_templateVariableMap) ;
  return p->mProperty_mCppName ;
}


//--------------------------------------------------------------------------------------------------
//     @templateVariableMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateVariableMap ("templateVariableMap",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateVariableMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVariableMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateVariableMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateVariableMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVariableMap GGS_templateVariableMap::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_templateVariableMap result ;
  const GGS_templateVariableMap * p = (const GGS_templateVariableMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateVariableMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateVariableMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum unifiedTypeMapEntry
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry::GGS_unifiedTypeMapEntry (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_unifiedTypeMapEntry::class_func_null (UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry result ;
  result.mEnum = Enumeration::enum_null ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_unifiedTypeMapEntry::class_func_element (const GGS_unifiedTypeMapElementClass_2E_weak & inAssociatedValue0
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry result ;
  result.mEnum = Enumeration::enum_element ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_unifiedTypeMapEntry_2E_element (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntry::method_extractElement (GGS_unifiedTypeMapElementClass_2E_weak & outAssociatedValue_weakElement,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_element) {
    outAssociatedValue_weakElement.drop () ;
    String s ;
    s.appendCString ("method @unifiedTypeMapEntry.element invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_unifiedTypeMapEntry_2E_element *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_weakElement = ptr->mProperty_weakElement ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry_2E_element_3F_ GGS_unifiedTypeMapEntry::getter_getElement (UNUSED_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntry_2E_element_3F_ result ;
  if (mEnum == Enumeration::enum_element) {
    const auto ptr = (const GGS_unifiedTypeMapEntry_2E_element *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_unifiedTypeMapEntry_2E_element (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntry::getAssociatedValuesFor_element (GGS_unifiedTypeMapElementClass_2E_weak & out_weakElement) const {
  const auto ptr = (const GGS_unifiedTypeMapEntry_2E_element *) mAssociatedValues.associatedValuesPointer () ;
  out_weakElement = ptr->mProperty_weakElement ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_unifiedTypeMapEntry [3] = {
  "(not built)",
  "null",
  "element"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_unifiedTypeMapEntry::getter_isNull (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_null == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_unifiedTypeMapEntry::getter_isElement (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_element == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntry::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<enum @unifiedTypeMapEntry: ") ;
  ioString.appendCString (gEnumNameArrayFor_unifiedTypeMapEntry [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unifiedTypeMapEntry::objectCompare (const GGS_unifiedTypeMapEntry & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_element: {
        const auto left = (GGS_unifiedTypeMapEntry_2E_element *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_unifiedTypeMapEntry_2E_element *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      default:
        result = ComparisonResult::operandEqual ;
        break ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @unifiedTypeMapEntry generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntry ("unifiedTypeMapEntry",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unifiedTypeMapEntry::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapEntry ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unifiedTypeMapEntry::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unifiedTypeMapEntry (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_unifiedTypeMapEntry::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry result ;
  const GGS_unifiedTypeMapEntry * p = (const GGS_unifiedTypeMapEntry *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unifiedTypeMapEntry *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapEntry", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_predefinedTypes::GGS_predefinedTypes (void) :
mProperty_mLocationType (),
mProperty_mBoolType (),
mProperty_mCharType (),
mProperty_mStringType (),
mProperty_mUIntType (),
mProperty_mSIntType (),
mProperty_mUInt_36__34_Type (),
mProperty_mSInt_36__34_Type (),
mProperty_mDoubleType (),
mProperty_mLBoolType (),
mProperty_mLCharType (),
mProperty_mLStringType (),
mProperty_mLUIntType (),
mProperty_mLSIntType (),
mProperty_mLUInt_36__34_Type (),
mProperty_mLSInt_36__34_Type (),
mProperty_mLDoubleType (),
mProperty_mStringListType (),
mProperty_mLBigIntType (),
mProperty_mBigIntType (),
mProperty_mStringSetType (),
mProperty_mLStringListType () {
}

//--------------------------------------------------------------------------------------------------

GGS_predefinedTypes::GGS_predefinedTypes (const GGS_predefinedTypes & inSource) :
mProperty_mLocationType (inSource.mProperty_mLocationType),
mProperty_mBoolType (inSource.mProperty_mBoolType),
mProperty_mCharType (inSource.mProperty_mCharType),
mProperty_mStringType (inSource.mProperty_mStringType),
mProperty_mUIntType (inSource.mProperty_mUIntType),
mProperty_mSIntType (inSource.mProperty_mSIntType),
mProperty_mUInt_36__34_Type (inSource.mProperty_mUInt_36__34_Type),
mProperty_mSInt_36__34_Type (inSource.mProperty_mSInt_36__34_Type),
mProperty_mDoubleType (inSource.mProperty_mDoubleType),
mProperty_mLBoolType (inSource.mProperty_mLBoolType),
mProperty_mLCharType (inSource.mProperty_mLCharType),
mProperty_mLStringType (inSource.mProperty_mLStringType),
mProperty_mLUIntType (inSource.mProperty_mLUIntType),
mProperty_mLSIntType (inSource.mProperty_mLSIntType),
mProperty_mLUInt_36__34_Type (inSource.mProperty_mLUInt_36__34_Type),
mProperty_mLSInt_36__34_Type (inSource.mProperty_mLSInt_36__34_Type),
mProperty_mLDoubleType (inSource.mProperty_mLDoubleType),
mProperty_mStringListType (inSource.mProperty_mStringListType),
mProperty_mLBigIntType (inSource.mProperty_mLBigIntType),
mProperty_mBigIntType (inSource.mProperty_mBigIntType),
mProperty_mStringSetType (inSource.mProperty_mStringSetType),
mProperty_mLStringListType (inSource.mProperty_mLStringListType) {
}

//--------------------------------------------------------------------------------------------------

GGS_predefinedTypes & GGS_predefinedTypes::operator = (const GGS_predefinedTypes & inSource) {
  mProperty_mLocationType = inSource.mProperty_mLocationType ;
  mProperty_mBoolType = inSource.mProperty_mBoolType ;
  mProperty_mCharType = inSource.mProperty_mCharType ;
  mProperty_mStringType = inSource.mProperty_mStringType ;
  mProperty_mUIntType = inSource.mProperty_mUIntType ;
  mProperty_mSIntType = inSource.mProperty_mSIntType ;
  mProperty_mUInt_36__34_Type = inSource.mProperty_mUInt_36__34_Type ;
  mProperty_mSInt_36__34_Type = inSource.mProperty_mSInt_36__34_Type ;
  mProperty_mDoubleType = inSource.mProperty_mDoubleType ;
  mProperty_mLBoolType = inSource.mProperty_mLBoolType ;
  mProperty_mLCharType = inSource.mProperty_mLCharType ;
  mProperty_mLStringType = inSource.mProperty_mLStringType ;
  mProperty_mLUIntType = inSource.mProperty_mLUIntType ;
  mProperty_mLSIntType = inSource.mProperty_mLSIntType ;
  mProperty_mLUInt_36__34_Type = inSource.mProperty_mLUInt_36__34_Type ;
  mProperty_mLSInt_36__34_Type = inSource.mProperty_mLSInt_36__34_Type ;
  mProperty_mLDoubleType = inSource.mProperty_mLDoubleType ;
  mProperty_mStringListType = inSource.mProperty_mStringListType ;
  mProperty_mLBigIntType = inSource.mProperty_mLBigIntType ;
  mProperty_mBigIntType = inSource.mProperty_mBigIntType ;
  mProperty_mStringSetType = inSource.mProperty_mStringSetType ;
  mProperty_mLStringListType = inSource.mProperty_mLStringListType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_predefinedTypes GGS_predefinedTypes::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mLocationType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mBoolType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mCharType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mStringType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mUIntType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mSIntType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mUInt_36__34_Type,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mSInt_36__34_Type,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mDoubleType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLBoolType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLCharType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLStringType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLUIntType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLSIntType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLUInt_36__34_Type,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLSInt_36__34_Type,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLDoubleType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mStringListType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLBigIntType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mBigIntType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mStringSetType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLStringListType,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_predefinedTypes result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLocationType = in_mLocationType ;
  result.mProperty_mBoolType = in_mBoolType ;
  result.mProperty_mCharType = in_mCharType ;
  result.mProperty_mStringType = in_mStringType ;
  result.mProperty_mUIntType = in_mUIntType ;
  result.mProperty_mSIntType = in_mSIntType ;
  result.mProperty_mUInt_36__34_Type = in_mUInt_36__34_Type ;
  result.mProperty_mSInt_36__34_Type = in_mSInt_36__34_Type ;
  result.mProperty_mDoubleType = in_mDoubleType ;
  result.mProperty_mLBoolType = in_mLBoolType ;
  result.mProperty_mLCharType = in_mLCharType ;
  result.mProperty_mLStringType = in_mLStringType ;
  result.mProperty_mLUIntType = in_mLUIntType ;
  result.mProperty_mLSIntType = in_mLSIntType ;
  result.mProperty_mLUInt_36__34_Type = in_mLUInt_36__34_Type ;
  result.mProperty_mLSInt_36__34_Type = in_mLSInt_36__34_Type ;
  result.mProperty_mLDoubleType = in_mLDoubleType ;
  result.mProperty_mStringListType = in_mStringListType ;
  result.mProperty_mLBigIntType = in_mLBigIntType ;
  result.mProperty_mBigIntType = in_mBigIntType ;
  result.mProperty_mStringSetType = in_mStringSetType ;
  result.mProperty_mLStringListType = in_mLStringListType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_predefinedTypes::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_predefinedTypes::GGS_predefinedTypes (const GGS_unifiedTypeMapEntry & inOperand0,
                                          const GGS_unifiedTypeMapEntry & inOperand1,
                                          const GGS_unifiedTypeMapEntry & inOperand2,
                                          const GGS_unifiedTypeMapEntry & inOperand3,
                                          const GGS_unifiedTypeMapEntry & inOperand4,
                                          const GGS_unifiedTypeMapEntry & inOperand5,
                                          const GGS_unifiedTypeMapEntry & inOperand6,
                                          const GGS_unifiedTypeMapEntry & inOperand7,
                                          const GGS_unifiedTypeMapEntry & inOperand8,
                                          const GGS_unifiedTypeMapEntry & inOperand9,
                                          const GGS_unifiedTypeMapEntry & inOperand10,
                                          const GGS_unifiedTypeMapEntry & inOperand11,
                                          const GGS_unifiedTypeMapEntry & inOperand12,
                                          const GGS_unifiedTypeMapEntry & inOperand13,
                                          const GGS_unifiedTypeMapEntry & inOperand14,
                                          const GGS_unifiedTypeMapEntry & inOperand15,
                                          const GGS_unifiedTypeMapEntry & inOperand16,
                                          const GGS_unifiedTypeMapEntry & inOperand17,
                                          const GGS_unifiedTypeMapEntry & inOperand18,
                                          const GGS_unifiedTypeMapEntry & inOperand19,
                                          const GGS_unifiedTypeMapEntry & inOperand20,
                                          const GGS_unifiedTypeMapEntry & inOperand21) :
mProperty_mLocationType (inOperand0),
mProperty_mBoolType (inOperand1),
mProperty_mCharType (inOperand2),
mProperty_mStringType (inOperand3),
mProperty_mUIntType (inOperand4),
mProperty_mSIntType (inOperand5),
mProperty_mUInt_36__34_Type (inOperand6),
mProperty_mSInt_36__34_Type (inOperand7),
mProperty_mDoubleType (inOperand8),
mProperty_mLBoolType (inOperand9),
mProperty_mLCharType (inOperand10),
mProperty_mLStringType (inOperand11),
mProperty_mLUIntType (inOperand12),
mProperty_mLSIntType (inOperand13),
mProperty_mLUInt_36__34_Type (inOperand14),
mProperty_mLSInt_36__34_Type (inOperand15),
mProperty_mLDoubleType (inOperand16),
mProperty_mStringListType (inOperand17),
mProperty_mLBigIntType (inOperand18),
mProperty_mBigIntType (inOperand19),
mProperty_mStringSetType (inOperand20),
mProperty_mLStringListType (inOperand21) {
}

//--------------------------------------------------------------------------------------------------

GGS_predefinedTypes GGS_predefinedTypes::class_func_new (const GGS_unifiedTypeMapEntry & in_mLocationType,
                                                         const GGS_unifiedTypeMapEntry & in_mBoolType,
                                                         const GGS_unifiedTypeMapEntry & in_mCharType,
                                                         const GGS_unifiedTypeMapEntry & in_mStringType,
                                                         const GGS_unifiedTypeMapEntry & in_mUIntType,
                                                         const GGS_unifiedTypeMapEntry & in_mSIntType,
                                                         const GGS_unifiedTypeMapEntry & in_mUInt64Type,
                                                         const GGS_unifiedTypeMapEntry & in_mSInt64Type,
                                                         const GGS_unifiedTypeMapEntry & in_mDoubleType,
                                                         const GGS_unifiedTypeMapEntry & in_mLBoolType,
                                                         const GGS_unifiedTypeMapEntry & in_mLCharType,
                                                         const GGS_unifiedTypeMapEntry & in_mLStringType,
                                                         const GGS_unifiedTypeMapEntry & in_mLUIntType,
                                                         const GGS_unifiedTypeMapEntry & in_mLSIntType,
                                                         const GGS_unifiedTypeMapEntry & in_mLUInt64Type,
                                                         const GGS_unifiedTypeMapEntry & in_mLSInt64Type,
                                                         const GGS_unifiedTypeMapEntry & in_mLDoubleType,
                                                         const GGS_unifiedTypeMapEntry & in_mStringListType,
                                                         const GGS_unifiedTypeMapEntry & in_mLBigIntType,
                                                         const GGS_unifiedTypeMapEntry & in_mBigIntType,
                                                         const GGS_unifiedTypeMapEntry & in_mStringSetType,
                                                         const GGS_unifiedTypeMapEntry & in_mLStringListType,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_predefinedTypes result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLocationType = in_mLocationType ;
  result.mProperty_mBoolType = in_mBoolType ;
  result.mProperty_mCharType = in_mCharType ;
  result.mProperty_mStringType = in_mStringType ;
  result.mProperty_mUIntType = in_mUIntType ;
  result.mProperty_mSIntType = in_mSIntType ;
  result.mProperty_mUInt_36__34_Type = in_mUInt64Type ;
  result.mProperty_mSInt_36__34_Type = in_mSInt64Type ;
  result.mProperty_mDoubleType = in_mDoubleType ;
  result.mProperty_mLBoolType = in_mLBoolType ;
  result.mProperty_mLCharType = in_mLCharType ;
  result.mProperty_mLStringType = in_mLStringType ;
  result.mProperty_mLUIntType = in_mLUIntType ;
  result.mProperty_mLSIntType = in_mLSIntType ;
  result.mProperty_mLUInt_36__34_Type = in_mLUInt64Type ;
  result.mProperty_mLSInt_36__34_Type = in_mLSInt64Type ;
  result.mProperty_mLDoubleType = in_mLDoubleType ;
  result.mProperty_mStringListType = in_mStringListType ;
  result.mProperty_mLBigIntType = in_mLBigIntType ;
  result.mProperty_mBigIntType = in_mBigIntType ;
  result.mProperty_mStringSetType = in_mStringSetType ;
  result.mProperty_mLStringListType = in_mLStringListType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_predefinedTypes::isValid (void) const {
  return mProperty_mLocationType.isValid () && mProperty_mBoolType.isValid () && mProperty_mCharType.isValid () && mProperty_mStringType.isValid () && mProperty_mUIntType.isValid () && mProperty_mSIntType.isValid () && mProperty_mUInt_36__34_Type.isValid () && mProperty_mSInt_36__34_Type.isValid () && mProperty_mDoubleType.isValid () && mProperty_mLBoolType.isValid () && mProperty_mLCharType.isValid () && mProperty_mLStringType.isValid () && mProperty_mLUIntType.isValid () && mProperty_mLSIntType.isValid () && mProperty_mLUInt_36__34_Type.isValid () && mProperty_mLSInt_36__34_Type.isValid () && mProperty_mLDoubleType.isValid () && mProperty_mStringListType.isValid () && mProperty_mLBigIntType.isValid () && mProperty_mBigIntType.isValid () && mProperty_mStringSetType.isValid () && mProperty_mLStringListType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_predefinedTypes::drop (void) {
  mProperty_mLocationType.drop () ;
  mProperty_mBoolType.drop () ;
  mProperty_mCharType.drop () ;
  mProperty_mStringType.drop () ;
  mProperty_mUIntType.drop () ;
  mProperty_mSIntType.drop () ;
  mProperty_mUInt_36__34_Type.drop () ;
  mProperty_mSInt_36__34_Type.drop () ;
  mProperty_mDoubleType.drop () ;
  mProperty_mLBoolType.drop () ;
  mProperty_mLCharType.drop () ;
  mProperty_mLStringType.drop () ;
  mProperty_mLUIntType.drop () ;
  mProperty_mLSIntType.drop () ;
  mProperty_mLUInt_36__34_Type.drop () ;
  mProperty_mLSInt_36__34_Type.drop () ;
  mProperty_mLDoubleType.drop () ;
  mProperty_mStringListType.drop () ;
  mProperty_mLBigIntType.drop () ;
  mProperty_mBigIntType.drop () ;
  mProperty_mStringSetType.drop () ;
  mProperty_mLStringListType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_predefinedTypes::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @predefinedTypes:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLocationType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBoolType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCharType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStringType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUIntType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSIntType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUInt_36__34_Type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSInt_36__34_Type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDoubleType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLBoolType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLCharType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLStringType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLUIntType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLSIntType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLUInt_36__34_Type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLSInt_36__34_Type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLDoubleType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStringListType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLBigIntType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBigIntType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStringSetType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLStringListType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @predefinedTypes generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_predefinedTypes ("predefinedTypes",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_predefinedTypes::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_predefinedTypes ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_predefinedTypes::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_predefinedTypes (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_predefinedTypes GGS_predefinedTypes::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_predefinedTypes result ;
  const GGS_predefinedTypes * p = (const GGS_predefinedTypes *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_predefinedTypes *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("predefinedTypes", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@templateExpressionAST templateExpressionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_templateExpressionAnalysis (cPtr_templateExpressionAST * inObject,
                                                     const GGS_lstring constin_inUsefulnessCallerEntityName,
                                                     GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                     const GGS_templateAnalysisContext constin_inAnalysisContext,
                                                     GGS_unifiedTypeMap & io_ioTypeMap,
                                                     GGS_semanticExpressionForGeneration & out_outExpression,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outExpression.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_templateExpressionAST) ;
    inObject->method_templateExpressionAnalysis (constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, io_ioTypeMap, out_outExpression, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateGetterCallInExpressionAST_2E_weak::objectCompare (const GGS_templateGetterCallInExpressionAST_2E_weak & inOperand) const {
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

GGS_templateGetterCallInExpressionAST_2E_weak::GGS_templateGetterCallInExpressionAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST_2E_weak & GGS_templateGetterCallInExpressionAST_2E_weak::operator = (const GGS_templateGetterCallInExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST_2E_weak ("templateGetterCallInExpressionAST.weak",
                                                                                                 & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateGetterCallInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
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
//Class for element of '@_5B_unifiedTypeMapEntry_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_unifiedTypeMapEntry_5D_::GGS__5B_unifiedTypeMapEntry_5D_ (void) :
AC_GALGAS_root (),
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_unifiedTypeMapEntry_5D_::GGS__5B_unifiedTypeMapEntry_5D_ (const GGS__5B_unifiedTypeMapEntry_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_unifiedTypeMapEntry_5D_ & GGS__5B_unifiedTypeMapEntry_5D_::operator = (const GGS__5B_unifiedTypeMapEntry_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_unifiedTypeMapEntry_5D_ GGS__5B_unifiedTypeMapEntry_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_unifiedTypeMapEntry_5D_ result ;
  result.mSharedArray.setCapacity (16) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS__5B_unifiedTypeMapEntry_5D_::isValid (void) const {
  return mSharedArray.isAllocated () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_unifiedTypeMapEntry_5D_::drop (void) {
  mSharedArray.free () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_unifiedTypeMapEntry_5D_::plusPlusAssignOperation (const GGS_unifiedTypeMapEntry & inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mSharedArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_unifiedTypeMapEntry_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_unifiedTypeMapEntry_5D_ GGS__5B_unifiedTypeMapEntry_5D_::add_operation (const GGS__5B_unifiedTypeMapEntry_5D_ & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_unifiedTypeMapEntry_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_unifiedTypeMapEntry_5D_::description (String & ioString,
                                                   const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (", ") ;
  ioString.appendSigned (mSharedArray.count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count() > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_unifiedTypeMapEntry_5D_::plusAssignOperation (const GGS__5B_unifiedTypeMapEntry_5D_ inOperand,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_unifiedTypeMapEntry_5D_::setter_append (const GGS_unifiedTypeMapEntry inValue,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_unifiedTypeMapEntry_5D_::setter_insertAtIndex (const GGS_unifiedTypeMapEntry inValue,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_unifiedTypeMapEntry_5D_::setter_removeAtIndex (GGS_unifiedTypeMapEntry & outValue,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    outValue = mSharedArray (idx COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_unifiedTypeMapEntry_5D_::setter_popFirst (GGS_unifiedTypeMapEntry & outValue,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_unifiedTypeMapEntry_5D_::setter_popLast (GGS_unifiedTypeMapEntry & outValue,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    outValue = mSharedArray.lastObject (THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_unifiedTypeMapEntry_5D_::method_first (GGS_unifiedTypeMapEntry & outValue,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray (0 COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_unifiedTypeMapEntry_5D_::method_last (GGS_unifiedTypeMapEntry & outValue,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray.lastObject (THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS__5B_unifiedTypeMapEntry_5D_::readSubscript__3F_ (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntry result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subscript value (") ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_unifiedTypeMapEntry_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_unifiedTypeMapEntry_5D_::DownEnumerator__5B_unifiedTypeMapEntry_5D_ (const GGS__5B_unifiedTypeMapEntry_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator__5B_unifiedTypeMapEntry_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_unifiedTypeMapEntry_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_unifiedTypeMapEntry_5D_::UpEnumerator__5B_unifiedTypeMapEntry_5D_ (const GGS__5B_unifiedTypeMapEntry_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator__5B_unifiedTypeMapEntry_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[unifiedTypeMapEntry] generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS__5B_unifiedTypeMapEntry_5D_ ("[unifiedTypeMapEntry]",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS__5B_unifiedTypeMapEntry_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_unifiedTypeMapEntry_5D_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__5B_unifiedTypeMapEntry_5D_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__5B_unifiedTypeMapEntry_5D_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_unifiedTypeMapEntry_5D_ GGS__5B_unifiedTypeMapEntry_5D_::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS__5B_unifiedTypeMapEntry_5D_ result ;
  const GGS__5B_unifiedTypeMapEntry_5D_ * p = (const GGS__5B_unifiedTypeMapEntry_5D_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__5B_unifiedTypeMapEntry_5D_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("[unifiedTypeMapEntry]", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@templateInstructionAST templateInstructionAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_templateInstructionAnalysis (cPtr_templateInstructionAST * inObject,
                                                      const GGS_lstring constin_inUsefulnessCallerEntityName,
                                                      GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                      const GGS_templateAnalysisContext constin_inAnalysisContext,
                                                      GGS_unifiedTypeMap & io_ioTypeMap,
                                                      GGS_templateInstructionListForGeneration & io_ioInstructionList,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_templateInstructionAST) ;
    inObject->method_templateInstructionAnalysis (constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, io_ioTypeMap, io_ioInstructionList, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@templateInstructionForGeneration templateCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_templateCodeGeneration (cPtr_templateInstructionForGeneration * inObject,
                                                 GGS_string & io_ioGeneratedCode,
                                                 GGS_stringset & io_ioInclusionSet,
                                                 GGS_uint & io_ioTemporaryVariableIndex,
                                                 GGS_stringset & io_ioUnusedVariableCppNameSet,
                                                 GGS_bool & io_ioUseColumnMarker,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_templateInstructionForGeneration) ;
    inObject->method_templateCodeGeneration (io_ioGeneratedCode, io_ioInclusionSet, io_ioTemporaryVariableIndex, io_ioUnusedVariableCppNameSet, io_ioUseColumnMarker, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//  Enum templateInstructionForEnumerationAST
//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST::GGS_templateInstructionForEnumerationAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST GGS_templateInstructionForEnumerationAST::class_func_implicit (const GGS_string & inAssociatedValue0,
                                                                                                        const GGS_location & inAssociatedValue1
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionForEnumerationAST result ;
  result.mEnum = Enumeration::enum_implicit ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_templateInstructionForEnumerationAST_2E_implicit (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST GGS_templateInstructionForEnumerationAST::class_func_explicit (const GGS_lstringlist & inAssociatedValue0,
                                                                                                        const GGS_location & inAssociatedValue1
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionForEnumerationAST result ;
  result.mEnum = Enumeration::enum_explicit ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_templateInstructionForEnumerationAST_2E_explicit (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionForEnumerationAST::method_extractImplicit (GGS_string & outAssociatedValue_prefix,
                                                                       GGS_location & outAssociatedValue_remplacementRange,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_implicit) {
    outAssociatedValue_prefix.drop () ;
    outAssociatedValue_remplacementRange.drop () ;
    String s ;
    s.appendCString ("method @templateInstructionForEnumerationAST.implicit invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_templateInstructionForEnumerationAST_2E_implicit *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_prefix = ptr->mProperty_prefix ;
    outAssociatedValue_remplacementRange = ptr->mProperty_remplacementRange ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionForEnumerationAST::method_extractExplicit (GGS_lstringlist & outAssociatedValue_enumeration,
                                                                       GGS_location & outAssociatedValue_endOfProperties,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_explicit) {
    outAssociatedValue_enumeration.drop () ;
    outAssociatedValue_endOfProperties.drop () ;
    String s ;
    s.appendCString ("method @templateInstructionForEnumerationAST.explicit invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_templateInstructionForEnumerationAST_2E_explicit *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_enumeration = ptr->mProperty_enumeration ;
    outAssociatedValue_endOfProperties = ptr->mProperty_endOfProperties ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_implicit_3F_ GGS_templateInstructionForEnumerationAST::getter_getImplicit (UNUSED_LOCATION_ARGS) const {
  GGS_templateInstructionForEnumerationAST_2E_implicit_3F_ result ;
  if (mEnum == Enumeration::enum_implicit) {
    const auto ptr = (const GGS_templateInstructionForEnumerationAST_2E_implicit *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_templateInstructionForEnumerationAST_2E_implicit (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionForEnumerationAST::getAssociatedValuesFor_implicit (GGS_string & out_prefix,
                                                                                GGS_location & out_remplacementRange) const {
  const auto ptr = (const GGS_templateInstructionForEnumerationAST_2E_implicit *) mAssociatedValues.associatedValuesPointer () ;
  out_prefix = ptr->mProperty_prefix ;
  out_remplacementRange = ptr->mProperty_remplacementRange ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST_2E_explicit_3F_ GGS_templateInstructionForEnumerationAST::getter_getExplicit (UNUSED_LOCATION_ARGS) const {
  GGS_templateInstructionForEnumerationAST_2E_explicit_3F_ result ;
  if (mEnum == Enumeration::enum_explicit) {
    const auto ptr = (const GGS_templateInstructionForEnumerationAST_2E_explicit *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_templateInstructionForEnumerationAST_2E_explicit (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionForEnumerationAST::getAssociatedValuesFor_explicit (GGS_lstringlist & out_enumeration,
                                                                                GGS_location & out_endOfProperties) const {
  const auto ptr = (const GGS_templateInstructionForEnumerationAST_2E_explicit *) mAssociatedValues.associatedValuesPointer () ;
  out_enumeration = ptr->mProperty_enumeration ;
  out_endOfProperties = ptr->mProperty_endOfProperties ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_templateInstructionForEnumerationAST [3] = {
  "(not built)",
  "implicit",
  "explicit"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_templateInstructionForEnumerationAST::getter_isImplicit (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_implicit == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_templateInstructionForEnumerationAST::getter_isExplicit (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_explicit == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionForEnumerationAST::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<enum @templateInstructionForEnumerationAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_templateInstructionForEnumerationAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @templateInstructionForEnumerationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForEnumerationAST ("templateInstructionForEnumerationAST",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionForEnumerationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForEnumerationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionForEnumerationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionForEnumerationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForEnumerationAST GGS_templateInstructionForEnumerationAST::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForEnumerationAST result ;
  const GGS_templateInstructionForEnumerationAST * p = (const GGS_templateInstructionForEnumerationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionForEnumerationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForEnumerationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionForeachAST_2E_weak::objectCompare (const GGS_templateInstructionForeachAST_2E_weak & inOperand) const {
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

GGS_templateInstructionForeachAST_2E_weak::GGS_templateInstructionForeachAST_2E_weak (void) :
GGS_templateInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachAST_2E_weak & GGS_templateInstructionForeachAST_2E_weak::operator = (const GGS_templateInstructionForeachAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForeachAST_2E_weak ("templateInstructionForeachAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_templateInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionForeachAST_2E_weak::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_templateInstructionForeachForGeneration_2E_weak::objectCompare (const GGS_templateInstructionForeachForGeneration_2E_weak & inOperand) const {
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

GGS_templateInstructionForeachForGeneration_2E_weak::GGS_templateInstructionForeachForGeneration_2E_weak (void) :
GGS_templateInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration_2E_weak & GGS_templateInstructionForeachForGeneration_2E_weak::operator = (const GGS_templateInstructionForeachForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration_2E_weak ("templateInstructionForeachForGeneration.weak",
                                                                                                       & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionForeachForGeneration_2E_weak::staticTypeDescriptor (void) const {
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
//Class for element of '@_5B_lstring_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_::GGS__5B_lstring_5D_ (void) :
AC_GALGAS_root (),
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_::GGS__5B_lstring_5D_ (const GGS__5B_lstring_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ & GGS__5B_lstring_5D_::operator = (const GGS__5B_lstring_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS__5B_lstring_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_lstring_5D_ result ;
  result.mSharedArray.setCapacity (16) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS__5B_lstring_5D_::isValid (void) const {
  return mSharedArray.isAllocated () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_lstring_5D_::drop (void) {
  mSharedArray.free () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_lstring_5D_::plusPlusAssignOperation (const GGS_lstring & inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mSharedArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_lstring_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS__5B_lstring_5D_::add_operation (const GGS__5B_lstring_5D_ & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_lstring_5D_::description (String & ioString,
                                       const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (", ") ;
  ioString.appendSigned (mSharedArray.count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count() > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_lstring_5D_::plusAssignOperation (const GGS__5B_lstring_5D_ inOperand,
                                               Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_lstring_5D_::setter_append (const GGS_lstring inValue,
                                         Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_lstring_5D_::setter_insertAtIndex (const GGS_lstring inValue,
                                                const GGS_uint inInsertionIndex,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_lstring_5D_::setter_removeAtIndex (GGS_lstring & outValue,
                                                const GGS_uint inRemoveIndex,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    outValue = mSharedArray (idx COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_lstring_5D_::setter_popFirst (GGS_lstring & outValue,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_lstring_5D_::setter_popLast (GGS_lstring & outValue,
                                          Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    outValue = mSharedArray.lastObject (THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_lstring_5D_::method_first (GGS_lstring & outValue,
                                        Compiler * /* inCompiler */
                                        COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray (0 COMMA_THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_lstring_5D_::method_last (GGS_lstring & outValue,
                                       Compiler * /* inCompiler */
                                       COMMA_LOCATION_ARGS) const {
  if (isValid ()) {
    outValue = mSharedArray.lastObject (THERE) ;
  }else{
    outValue.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS__5B_lstring_5D_::readSubscript__3F_ (const GGS_uint & inIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subscript value (") ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_lstring_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_lstring_5D_::DownEnumerator__5B_lstring_5D_ (const GGS__5B_lstring_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator__5B_lstring_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_lstring_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_lstring_5D_::UpEnumerator__5B_lstring_5D_ (const GGS__5B_lstring_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator__5B_lstring_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[lstring] generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS__5B_lstring_5D_ ("[lstring]",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS__5B_lstring_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_lstring_5D_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__5B_lstring_5D_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__5B_lstring_5D_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS__5B_lstring_5D_::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS__5B_lstring_5D_ result ;
  const GGS__5B_lstring_5D_ * p = (const GGS__5B_lstring_5D_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__5B_lstring_5D_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("[lstring]", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@templateInstructionSwitchBranchListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_templateInstructionSwitchBranchListAST : public cCollectionElement {
  public: GGS_templateInstructionSwitchBranchListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_templateInstructionSwitchBranchListAST (const GGS__5B_lstring_5D_ & in_constantList,
                                                                     const GGS_switchExtractedValuesListAST & in_associatedValuesExtraction,
                                                                     const GGS_templateInstructionListAST & in_instructionList,
                                                                     const GGS_location & in_endOfBranch
                                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_templateInstructionSwitchBranchListAST (const GGS_templateInstructionSwitchBranchListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_templateInstructionSwitchBranchListAST::cCollectionElement_templateInstructionSwitchBranchListAST (const GGS__5B_lstring_5D_ & in_constantList,
                                                                                                                      const GGS_switchExtractedValuesListAST & in_associatedValuesExtraction,
                                                                                                                      const GGS_templateInstructionListAST & in_instructionList,
                                                                                                                      const GGS_location & in_endOfBranch
                                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_constantList, in_associatedValuesExtraction, in_instructionList, in_endOfBranch) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_templateInstructionSwitchBranchListAST::cCollectionElement_templateInstructionSwitchBranchListAST (const GGS_templateInstructionSwitchBranchListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_constantList, inElement.mProperty_associatedValuesExtraction, inElement.mProperty_instructionList, inElement.mProperty_endOfBranch) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_templateInstructionSwitchBranchListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_templateInstructionSwitchBranchListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_templateInstructionSwitchBranchListAST (mObject.mProperty_constantList, mObject.mProperty_associatedValuesExtraction, mObject.mProperty_instructionList, mObject.mProperty_endOfBranch COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_templateInstructionSwitchBranchListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("constantList" ":") ;
  mObject.mProperty_constantList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("associatedValuesExtraction" ":") ;
  mObject.mProperty_associatedValuesExtraction.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("instructionList" ":") ;
  mObject.mProperty_instructionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("endOfBranch" ":") ;
  mObject.mProperty_endOfBranch.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST::GGS_templateInstructionSwitchBranchListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST::GGS_templateInstructionSwitchBranchListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST GGS_templateInstructionSwitchBranchListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_templateInstructionSwitchBranchListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST GGS_templateInstructionSwitchBranchListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_templateInstructionSwitchBranchListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListAST::plusPlusAssignOperation (const GGS_templateInstructionSwitchBranchListAST_2E_element & inValue
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST GGS_templateInstructionSwitchBranchListAST::class_func_listWithValue (const GGS__5B_lstring_5D_ & inOperand0,
                                                                                                                 const GGS_switchExtractedValuesListAST & inOperand1,
                                                                                                                 const GGS_templateInstructionListAST & inOperand2,
                                                                                                                 const GGS_location & inOperand3
                                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_templateInstructionSwitchBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GGS_templateInstructionSwitchBranchListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_templateInstructionSwitchBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GGS__5B_lstring_5D_ & in_constantList,
                                                                            const GGS_switchExtractedValuesListAST & in_associatedValuesExtraction,
                                                                            const GGS_templateInstructionListAST & in_instructionList,
                                                                            const GGS_location & in_endOfBranch
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListAST (in_constantList,
                                                                            in_associatedValuesExtraction,
                                                                            in_instructionList,
                                                                            in_endOfBranch COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListAST::addAssignOperation (const GGS__5B_lstring_5D_ & inOperand0,
                                                                     const GGS_switchExtractedValuesListAST & inOperand1,
                                                                     const GGS_templateInstructionListAST & inOperand2,
                                                                     const GGS_location & inOperand3
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListAST::setter_append (const GGS__5B_lstring_5D_ inOperand0,
                                                                const GGS_switchExtractedValuesListAST inOperand1,
                                                                const GGS_templateInstructionListAST inOperand2,
                                                                const GGS_location inOperand3,
                                                                Compiler * /* inCompiler */
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListAST::setter_insertAtIndex (const GGS__5B_lstring_5D_ inOperand0,
                                                                       const GGS_switchExtractedValuesListAST inOperand1,
                                                                       const GGS_templateInstructionListAST inOperand2,
                                                                       const GGS_location inOperand3,
                                                                       const GGS_uint inInsertionIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListAST::setter_removeAtIndex (GGS__5B_lstring_5D_ & outOperand0,
                                                                       GGS_switchExtractedValuesListAST & outOperand1,
                                                                       GGS_templateInstructionListAST & outOperand2,
                                                                       GGS_location & outOperand3,
                                                                       const GGS_uint inRemoveIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
      outOperand0 = p->mObject.mProperty_constantList ;
      outOperand1 = p->mObject.mProperty_associatedValuesExtraction ;
      outOperand2 = p->mObject.mProperty_instructionList ;
      outOperand3 = p->mObject.mProperty_endOfBranch ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListAST::setter_popFirst (GGS__5B_lstring_5D_ & outOperand0,
                                                                  GGS_switchExtractedValuesListAST & outOperand1,
                                                                  GGS_templateInstructionListAST & outOperand2,
                                                                  GGS_location & outOperand3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    outOperand0 = p->mObject.mProperty_constantList ;
    outOperand1 = p->mObject.mProperty_associatedValuesExtraction ;
    outOperand2 = p->mObject.mProperty_instructionList ;
    outOperand3 = p->mObject.mProperty_endOfBranch ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListAST::setter_popLast (GGS__5B_lstring_5D_ & outOperand0,
                                                                 GGS_switchExtractedValuesListAST & outOperand1,
                                                                 GGS_templateInstructionListAST & outOperand2,
                                                                 GGS_location & outOperand3,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    outOperand0 = p->mObject.mProperty_constantList ;
    outOperand1 = p->mObject.mProperty_associatedValuesExtraction ;
    outOperand2 = p->mObject.mProperty_instructionList ;
    outOperand3 = p->mObject.mProperty_endOfBranch ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListAST::method_first (GGS__5B_lstring_5D_ & outOperand0,
                                                               GGS_switchExtractedValuesListAST & outOperand1,
                                                               GGS_templateInstructionListAST & outOperand2,
                                                               GGS_location & outOperand3,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    outOperand0 = p->mObject.mProperty_constantList ;
    outOperand1 = p->mObject.mProperty_associatedValuesExtraction ;
    outOperand2 = p->mObject.mProperty_instructionList ;
    outOperand3 = p->mObject.mProperty_endOfBranch ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListAST::method_last (GGS__5B_lstring_5D_ & outOperand0,
                                                              GGS_switchExtractedValuesListAST & outOperand1,
                                                              GGS_templateInstructionListAST & outOperand2,
                                                              GGS_location & outOperand3,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    outOperand0 = p->mObject.mProperty_constantList ;
    outOperand1 = p->mObject.mProperty_associatedValuesExtraction ;
    outOperand2 = p->mObject.mProperty_instructionList ;
    outOperand3 = p->mObject.mProperty_endOfBranch ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST GGS_templateInstructionSwitchBranchListAST::add_operation (const GGS_templateInstructionSwitchBranchListAST & inOperand,
                                                                                                      Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_templateInstructionSwitchBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST GGS_templateInstructionSwitchBranchListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionSwitchBranchListAST result = GGS_templateInstructionSwitchBranchListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST GGS_templateInstructionSwitchBranchListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionSwitchBranchListAST result = GGS_templateInstructionSwitchBranchListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST GGS_templateInstructionSwitchBranchListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionSwitchBranchListAST result = GGS_templateInstructionSwitchBranchListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListAST::plusAssignOperation (const GGS_templateInstructionSwitchBranchListAST inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListAST::setter_setConstantListAtIndex (GGS__5B_lstring_5D_ inOperand,
                                                                                GGS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_constantList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_templateInstructionSwitchBranchListAST::getter_constantListAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  GGS__5B_lstring_5D_ result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    result = p->mObject.mProperty_constantList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListAST::setter_setAssociatedValuesExtractionAtIndex (GGS_switchExtractedValuesListAST inOperand,
                                                                                              GGS_uint inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_associatedValuesExtraction = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST GGS_templateInstructionSwitchBranchListAST::getter_associatedValuesExtractionAtIndex (const GGS_uint & inIndex,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  GGS_switchExtractedValuesListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    result = p->mObject.mProperty_associatedValuesExtraction ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListAST::setter_setInstructionListAtIndex (GGS_templateInstructionListAST inOperand,
                                                                                   GGS_uint inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_instructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionSwitchBranchListAST::getter_instructionListAtIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  GGS_templateInstructionListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    result = p->mObject.mProperty_instructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListAST::setter_setEndOfBranchAtIndex (GGS_location inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_endOfBranch = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateInstructionSwitchBranchListAST::getter_endOfBranchAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    result = p->mObject.mProperty_endOfBranch ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @templateInstructionSwitchBranchListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_templateInstructionSwitchBranchListAST::DownEnumerator_templateInstructionSwitchBranchListAST (const GGS_templateInstructionSwitchBranchListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST_2E_element DownEnumerator_templateInstructionSwitchBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListAST * p = (const cCollectionElement_templateInstructionSwitchBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ DownEnumerator_templateInstructionSwitchBranchListAST::current_constantList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListAST * p = (const cCollectionElement_templateInstructionSwitchBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
  return p->mObject.mProperty_constantList ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST DownEnumerator_templateInstructionSwitchBranchListAST::current_associatedValuesExtraction (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListAST * p = (const cCollectionElement_templateInstructionSwitchBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
  return p->mObject.mProperty_associatedValuesExtraction ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST DownEnumerator_templateInstructionSwitchBranchListAST::current_instructionList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListAST * p = (const cCollectionElement_templateInstructionSwitchBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
  return p->mObject.mProperty_instructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_templateInstructionSwitchBranchListAST::current_endOfBranch (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListAST * p = (const cCollectionElement_templateInstructionSwitchBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
  return p->mObject.mProperty_endOfBranch ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @templateInstructionSwitchBranchListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_templateInstructionSwitchBranchListAST::UpEnumerator_templateInstructionSwitchBranchListAST (const GGS_templateInstructionSwitchBranchListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST_2E_element UpEnumerator_templateInstructionSwitchBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListAST * p = (const cCollectionElement_templateInstructionSwitchBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ UpEnumerator_templateInstructionSwitchBranchListAST::current_constantList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListAST * p = (const cCollectionElement_templateInstructionSwitchBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
  return p->mObject.mProperty_constantList ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST UpEnumerator_templateInstructionSwitchBranchListAST::current_associatedValuesExtraction (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListAST * p = (const cCollectionElement_templateInstructionSwitchBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
  return p->mObject.mProperty_associatedValuesExtraction ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST UpEnumerator_templateInstructionSwitchBranchListAST::current_instructionList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListAST * p = (const cCollectionElement_templateInstructionSwitchBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
  return p->mObject.mProperty_instructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_templateInstructionSwitchBranchListAST::current_endOfBranch (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListAST * p = (const cCollectionElement_templateInstructionSwitchBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
  return p->mObject.mProperty_endOfBranch ;
}




//--------------------------------------------------------------------------------------------------
//     @templateInstructionSwitchBranchListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListAST ("templateInstructionSwitchBranchListAST",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionSwitchBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionSwitchBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionSwitchBranchListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST GGS_templateInstructionSwitchBranchListAST::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_templateInstructionSwitchBranchListAST result ;
  const GGS_templateInstructionSwitchBranchListAST * p = (const GGS_templateInstructionSwitchBranchListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionSwitchBranchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchBranchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@switchExtractedValuesListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_switchExtractedValuesListAST : public cCollectionElement {
  public: GGS_switchExtractedValuesListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_switchExtractedValuesListAST (const GGS_lstring & in_mExtractedValueTypeName,
                                                           const GGS_lstring & in_mExtractedValueName,
                                                           const GGS_bool & in_mMarkedAsUnused
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_switchExtractedValuesListAST (const GGS_switchExtractedValuesListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_switchExtractedValuesListAST::cCollectionElement_switchExtractedValuesListAST (const GGS_lstring & in_mExtractedValueTypeName,
                                                                                                  const GGS_lstring & in_mExtractedValueName,
                                                                                                  const GGS_bool & in_mMarkedAsUnused
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExtractedValueTypeName, in_mExtractedValueName, in_mMarkedAsUnused) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_switchExtractedValuesListAST::cCollectionElement_switchExtractedValuesListAST (const GGS_switchExtractedValuesListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExtractedValueTypeName, inElement.mProperty_mExtractedValueName, inElement.mProperty_mMarkedAsUnused) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_switchExtractedValuesListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_switchExtractedValuesListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_switchExtractedValuesListAST (mObject.mProperty_mExtractedValueTypeName, mObject.mProperty_mExtractedValueName, mObject.mProperty_mMarkedAsUnused COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_switchExtractedValuesListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExtractedValueTypeName" ":") ;
  mObject.mProperty_mExtractedValueTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExtractedValueName" ":") ;
  mObject.mProperty_mExtractedValueName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mMarkedAsUnused" ":") ;
  mObject.mProperty_mMarkedAsUnused.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST::GGS_switchExtractedValuesListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST::GGS_switchExtractedValuesListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST GGS_switchExtractedValuesListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_switchExtractedValuesListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST GGS_switchExtractedValuesListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_switchExtractedValuesListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchExtractedValuesListAST::plusPlusAssignOperation (const GGS_switchExtractedValuesListAST_2E_element & inValue
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_switchExtractedValuesListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST GGS_switchExtractedValuesListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                             const GGS_lstring & inOperand1,
                                                                                             const GGS_bool & inOperand2
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_switchExtractedValuesListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_switchExtractedValuesListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_switchExtractedValuesListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchExtractedValuesListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GGS_lstring & in_mExtractedValueTypeName,
                                                                  const GGS_lstring & in_mExtractedValueName,
                                                                  const GGS_bool & in_mMarkedAsUnused
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_switchExtractedValuesListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_switchExtractedValuesListAST (in_mExtractedValueTypeName,
                                                                  in_mExtractedValueName,
                                                                  in_mMarkedAsUnused COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchExtractedValuesListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                           const GGS_lstring & inOperand1,
                                                           const GGS_bool & inOperand2
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_switchExtractedValuesListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchExtractedValuesListAST::setter_append (const GGS_lstring inOperand0,
                                                      const GGS_lstring inOperand1,
                                                      const GGS_bool inOperand2,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_switchExtractedValuesListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchExtractedValuesListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                             const GGS_lstring inOperand1,
                                                             const GGS_bool inOperand2,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_switchExtractedValuesListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchExtractedValuesListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                             GGS_lstring & outOperand1,
                                                             GGS_bool & outOperand2,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
      outOperand0 = p->mObject.mProperty_mExtractedValueTypeName ;
      outOperand1 = p->mObject.mProperty_mExtractedValueName ;
      outOperand2 = p->mObject.mProperty_mMarkedAsUnused ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchExtractedValuesListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                        GGS_lstring & outOperand1,
                                                        GGS_bool & outOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    outOperand0 = p->mObject.mProperty_mExtractedValueTypeName ;
    outOperand1 = p->mObject.mProperty_mExtractedValueName ;
    outOperand2 = p->mObject.mProperty_mMarkedAsUnused ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchExtractedValuesListAST::setter_popLast (GGS_lstring & outOperand0,
                                                       GGS_lstring & outOperand1,
                                                       GGS_bool & outOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    outOperand0 = p->mObject.mProperty_mExtractedValueTypeName ;
    outOperand1 = p->mObject.mProperty_mExtractedValueName ;
    outOperand2 = p->mObject.mProperty_mMarkedAsUnused ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchExtractedValuesListAST::method_first (GGS_lstring & outOperand0,
                                                     GGS_lstring & outOperand1,
                                                     GGS_bool & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    outOperand0 = p->mObject.mProperty_mExtractedValueTypeName ;
    outOperand1 = p->mObject.mProperty_mExtractedValueName ;
    outOperand2 = p->mObject.mProperty_mMarkedAsUnused ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_switchExtractedValuesListAST::method_last (GGS_lstring & outOperand0,
                                                    GGS_lstring & outOperand1,
                                                    GGS_bool & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    outOperand0 = p->mObject.mProperty_mExtractedValueTypeName ;
    outOperand1 = p->mObject.mProperty_mExtractedValueName ;
    outOperand2 = p->mObject.mProperty_mMarkedAsUnused ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST GGS_switchExtractedValuesListAST::add_operation (const GGS_switchExtractedValuesListAST & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_switchExtractedValuesListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST GGS_switchExtractedValuesListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_switchExtractedValuesListAST result = GGS_switchExtractedValuesListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST GGS_switchExtractedValuesListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_switchExtractedValuesListAST result = GGS_switchExtractedValuesListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST GGS_switchExtractedValuesListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_switchExtractedValuesListAST result = GGS_switchExtractedValuesListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchExtractedValuesListAST::plusAssignOperation (const GGS_switchExtractedValuesListAST inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchExtractedValuesListAST::setter_setMExtractedValueTypeNameAtIndex (GGS_lstring inOperand,
                                                                                 GGS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExtractedValueTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_switchExtractedValuesListAST::getter_mExtractedValueTypeNameAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    result = p->mObject.mProperty_mExtractedValueTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchExtractedValuesListAST::setter_setMExtractedValueNameAtIndex (GGS_lstring inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExtractedValueName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_switchExtractedValuesListAST::getter_mExtractedValueNameAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    result = p->mObject.mProperty_mExtractedValueName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchExtractedValuesListAST::setter_setMMarkedAsUnusedAtIndex (GGS_bool inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMarkedAsUnused = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_switchExtractedValuesListAST::getter_mMarkedAsUnusedAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    result = p->mObject.mProperty_mMarkedAsUnused ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @switchExtractedValuesListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_switchExtractedValuesListAST::DownEnumerator_switchExtractedValuesListAST (const GGS_switchExtractedValuesListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST_2E_element DownEnumerator_switchExtractedValuesListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_switchExtractedValuesListAST * p = (const cCollectionElement_switchExtractedValuesListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_switchExtractedValuesListAST::current_mExtractedValueTypeName (LOCATION_ARGS) const {
  const cCollectionElement_switchExtractedValuesListAST * p = (const cCollectionElement_switchExtractedValuesListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
  return p->mObject.mProperty_mExtractedValueTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_switchExtractedValuesListAST::current_mExtractedValueName (LOCATION_ARGS) const {
  const cCollectionElement_switchExtractedValuesListAST * p = (const cCollectionElement_switchExtractedValuesListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
  return p->mObject.mProperty_mExtractedValueName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_switchExtractedValuesListAST::current_mMarkedAsUnused (LOCATION_ARGS) const {
  const cCollectionElement_switchExtractedValuesListAST * p = (const cCollectionElement_switchExtractedValuesListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
  return p->mObject.mProperty_mMarkedAsUnused ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @switchExtractedValuesListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_switchExtractedValuesListAST::UpEnumerator_switchExtractedValuesListAST (const GGS_switchExtractedValuesListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST_2E_element UpEnumerator_switchExtractedValuesListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_switchExtractedValuesListAST * p = (const cCollectionElement_switchExtractedValuesListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_switchExtractedValuesListAST::current_mExtractedValueTypeName (LOCATION_ARGS) const {
  const cCollectionElement_switchExtractedValuesListAST * p = (const cCollectionElement_switchExtractedValuesListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
  return p->mObject.mProperty_mExtractedValueTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_switchExtractedValuesListAST::current_mExtractedValueName (LOCATION_ARGS) const {
  const cCollectionElement_switchExtractedValuesListAST * p = (const cCollectionElement_switchExtractedValuesListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
  return p->mObject.mProperty_mExtractedValueName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_switchExtractedValuesListAST::current_mMarkedAsUnused (LOCATION_ARGS) const {
  const cCollectionElement_switchExtractedValuesListAST * p = (const cCollectionElement_switchExtractedValuesListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
  return p->mObject.mProperty_mMarkedAsUnused ;
}




//--------------------------------------------------------------------------------------------------
//     @switchExtractedValuesListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchExtractedValuesListAST ("switchExtractedValuesListAST",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_switchExtractedValuesListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchExtractedValuesListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchExtractedValuesListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchExtractedValuesListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST GGS_switchExtractedValuesListAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_switchExtractedValuesListAST result ;
  const GGS_switchExtractedValuesListAST * p = (const GGS_switchExtractedValuesListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchExtractedValuesListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchExtractedValuesListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionSwitchAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionSwitchAST::objectCompare (const GGS_templateInstructionSwitchAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchAST::GGS_templateInstructionSwitchAST (void) :
GGS_templateInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionSwitchAST GGS_templateInstructionSwitchAST::
init_21__21__21_ (const GGS_templateExpressionAST & in_mSwitchExpression,
                  const GGS_location & in_switchExpressionEndLocation,
                  const GGS_templateInstructionSwitchBranchListAST & in_templateInstructionSwitchBranchList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionSwitchAST * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionSwitchAST (inCompiler COMMA_THERE)) ;
  object->templateInstructionSwitchAST_init_21__21__21_ (in_mSwitchExpression, in_switchExpressionEndLocation, in_templateInstructionSwitchBranchList, inCompiler) ;
  const GGS_templateInstructionSwitchAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionSwitchAST::
templateInstructionSwitchAST_init_21__21__21_ (const GGS_templateExpressionAST & in_mSwitchExpression,
                                               const GGS_location & in_switchExpressionEndLocation,
                                               const GGS_templateInstructionSwitchBranchListAST & in_templateInstructionSwitchBranchList,
                                               Compiler * /* inCompiler */) {
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_switchExpressionEndLocation = in_switchExpressionEndLocation ;
  mProperty_templateInstructionSwitchBranchList = in_templateInstructionSwitchBranchList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchAST::GGS_templateInstructionSwitchAST (const cPtr_templateInstructionSwitchAST * inSourcePtr) :
GGS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionSwitchAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchAST GGS_templateInstructionSwitchAST::class_func_new (const GGS_templateExpressionAST & in_mSwitchExpression,
                                                                                   const GGS_location & in_switchExpressionEndLocation,
                                                                                   const GGS_templateInstructionSwitchBranchListAST & in_templateInstructionSwitchBranchList,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_templateInstructionSwitchAST result ;
  macroMyNew (result.mObjectPtr, cPtr_templateInstructionSwitchAST (in_mSwitchExpression, in_switchExpressionEndLocation, in_templateInstructionSwitchBranchList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateInstructionSwitchAST::readProperty_mSwitchExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateInstructionSwitchAST * p = (cPtr_templateInstructionSwitchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchAST) ;
    return p->mProperty_mSwitchExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateInstructionSwitchAST::readProperty_switchExpressionEndLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateInstructionSwitchAST * p = (cPtr_templateInstructionSwitchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchAST) ;
    return p->mProperty_switchExpressionEndLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListAST GGS_templateInstructionSwitchAST::readProperty_templateInstructionSwitchBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionSwitchBranchListAST () ;
  }else{
    cPtr_templateInstructionSwitchAST * p = (cPtr_templateInstructionSwitchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchAST) ;
    return p->mProperty_templateInstructionSwitchBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionSwitchAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionSwitchAST::cPtr_templateInstructionSwitchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (inCompiler COMMA_THERE),
mProperty_mSwitchExpression (),
mProperty_switchExpressionEndLocation (),
mProperty_templateInstructionSwitchBranchList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionSwitchAST::cPtr_templateInstructionSwitchAST (const GGS_templateExpressionAST & in_mSwitchExpression,
                                                                      const GGS_location & in_switchExpressionEndLocation,
                                                                      const GGS_templateInstructionSwitchBranchListAST & in_templateInstructionSwitchBranchList,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (inCompiler COMMA_THERE),
mProperty_mSwitchExpression (),
mProperty_switchExpressionEndLocation (),
mProperty_templateInstructionSwitchBranchList () {
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_switchExpressionEndLocation = in_switchExpressionEndLocation ;
  mProperty_templateInstructionSwitchBranchList = in_templateInstructionSwitchBranchList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionSwitchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchAST ;
}

void cPtr_templateInstructionSwitchAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionSwitchAST:") ;
  mProperty_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_switchExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_templateInstructionSwitchBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionSwitchAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionSwitchAST (mProperty_mSwitchExpression, mProperty_switchExpressionEndLocation, mProperty_templateInstructionSwitchBranchList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionSwitchAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mSwitchExpression.printNonNullClassInstanceProperties ("mSwitchExpression") ;
    mProperty_switchExpressionEndLocation.printNonNullClassInstanceProperties ("switchExpressionEndLocation") ;
    mProperty_templateInstructionSwitchBranchList.printNonNullClassInstanceProperties ("templateInstructionSwitchBranchList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionSwitchAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchAST ("templateInstructionSwitchAST",
                                                                                    & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionSwitchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionSwitchAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionSwitchAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchAST GGS_templateInstructionSwitchAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_templateInstructionSwitchAST result ;
  const GGS_templateInstructionSwitchAST * p = (const GGS_templateInstructionSwitchAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionSwitchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionSwitchAST_2E_weak::objectCompare (const GGS_templateInstructionSwitchAST_2E_weak & inOperand) const {
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

GGS_templateInstructionSwitchAST_2E_weak::GGS_templateInstructionSwitchAST_2E_weak (void) :
GGS_templateInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchAST_2E_weak & GGS_templateInstructionSwitchAST_2E_weak::operator = (const GGS_templateInstructionSwitchAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchAST_2E_weak::GGS_templateInstructionSwitchAST_2E_weak (const GGS_templateInstructionSwitchAST & inSource) :
GGS_templateInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchAST_2E_weak GGS_templateInstructionSwitchAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInstructionSwitchAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchAST GGS_templateInstructionSwitchAST_2E_weak::unwrappedValue (void) const {
  GGS_templateInstructionSwitchAST result ;
  if (isValid ()) {
    const cPtr_templateInstructionSwitchAST * p = (cPtr_templateInstructionSwitchAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInstructionSwitchAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchAST GGS_templateInstructionSwitchAST_2E_weak::bang_templateInstructionSwitchAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionSwitchAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionSwitchAST) ;
      result = GGS_templateInstructionSwitchAST ((cPtr_templateInstructionSwitchAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionSwitchAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchAST_2E_weak ("templateInstructionSwitchAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_templateInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionSwitchAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionSwitchAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionSwitchAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchAST_2E_weak GGS_templateInstructionSwitchAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_templateInstructionSwitchAST_2E_weak result ;
  const GGS_templateInstructionSwitchAST_2E_weak * p = (const GGS_templateInstructionSwitchAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionSwitchAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@templateInstructionSwitchBranchListForGeneration' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_templateInstructionSwitchBranchListForGeneration : public cCollectionElement {
  public: GGS_templateInstructionSwitchBranchListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_templateInstructionSwitchBranchListForGeneration (const GGS__5B_lstring_5D_ & in_mConstantList,
                                                                               const GGS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                               const GGS_uint & in_mEndOfBranchLocationIndex,
                                                                               const GGS_templateInstructionListForGeneration & in_mInstructionList
                                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_templateInstructionSwitchBranchListForGeneration (const GGS_templateInstructionSwitchBranchListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_templateInstructionSwitchBranchListForGeneration::cCollectionElement_templateInstructionSwitchBranchListForGeneration (const GGS__5B_lstring_5D_ & in_mConstantList,
                                                                                                                                          const GGS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                                                                                          const GGS_uint & in_mEndOfBranchLocationIndex,
                                                                                                                                          const GGS_templateInstructionListForGeneration & in_mInstructionList
                                                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstantList, in_mExtractedAssociatedValuesForGeneration, in_mEndOfBranchLocationIndex, in_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_templateInstructionSwitchBranchListForGeneration::cCollectionElement_templateInstructionSwitchBranchListForGeneration (const GGS_templateInstructionSwitchBranchListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mConstantList, inElement.mProperty_mExtractedAssociatedValuesForGeneration, inElement.mProperty_mEndOfBranchLocationIndex, inElement.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_templateInstructionSwitchBranchListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_templateInstructionSwitchBranchListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_templateInstructionSwitchBranchListForGeneration (mObject.mProperty_mConstantList, mObject.mProperty_mExtractedAssociatedValuesForGeneration, mObject.mProperty_mEndOfBranchLocationIndex, mObject.mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_templateInstructionSwitchBranchListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mConstantList" ":") ;
  mObject.mProperty_mConstantList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExtractedAssociatedValuesForGeneration" ":") ;
  mObject.mProperty_mExtractedAssociatedValuesForGeneration.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfBranchLocationIndex" ":") ;
  mObject.mProperty_mEndOfBranchLocationIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration::GGS_templateInstructionSwitchBranchListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration::GGS_templateInstructionSwitchBranchListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration GGS_templateInstructionSwitchBranchListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_templateInstructionSwitchBranchListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration GGS_templateInstructionSwitchBranchListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_templateInstructionSwitchBranchListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListForGeneration::plusPlusAssignOperation (const GGS_templateInstructionSwitchBranchListForGeneration_2E_element & inValue
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration GGS_templateInstructionSwitchBranchListForGeneration::class_func_listWithValue (const GGS__5B_lstring_5D_ & inOperand0,
                                                                                                                                     const GGS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                                                                     const GGS_uint & inOperand2,
                                                                                                                                     const GGS_templateInstructionListForGeneration & inOperand3
                                                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_templateInstructionSwitchBranchListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GGS_templateInstructionSwitchBranchListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_templateInstructionSwitchBranchListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                      const GGS__5B_lstring_5D_ & in_mConstantList,
                                                                                      const GGS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                                      const GGS_uint & in_mEndOfBranchLocationIndex,
                                                                                      const GGS_templateInstructionListForGeneration & in_mInstructionList
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration (in_mConstantList,
                                                                                      in_mExtractedAssociatedValuesForGeneration,
                                                                                      in_mEndOfBranchLocationIndex,
                                                                                      in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListForGeneration::addAssignOperation (const GGS__5B_lstring_5D_ & inOperand0,
                                                                               const GGS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                               const GGS_uint & inOperand2,
                                                                               const GGS_templateInstructionListForGeneration & inOperand3
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListForGeneration::setter_append (const GGS__5B_lstring_5D_ inOperand0,
                                                                          const GGS_extractedAssociatedValuesForGeneration inOperand1,
                                                                          const GGS_uint inOperand2,
                                                                          const GGS_templateInstructionListForGeneration inOperand3,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListForGeneration::setter_insertAtIndex (const GGS__5B_lstring_5D_ inOperand0,
                                                                                 const GGS_extractedAssociatedValuesForGeneration inOperand1,
                                                                                 const GGS_uint inOperand2,
                                                                                 const GGS_templateInstructionListForGeneration inOperand3,
                                                                                 const GGS_uint inInsertionIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListForGeneration::setter_removeAtIndex (GGS__5B_lstring_5D_ & outOperand0,
                                                                                 GGS_extractedAssociatedValuesForGeneration & outOperand1,
                                                                                 GGS_uint & outOperand2,
                                                                                 GGS_templateInstructionListForGeneration & outOperand3,
                                                                                 const GGS_uint inRemoveIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mConstantList ;
      outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
      outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
      outOperand3 = p->mObject.mProperty_mInstructionList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListForGeneration::setter_popFirst (GGS__5B_lstring_5D_ & outOperand0,
                                                                            GGS_extractedAssociatedValuesForGeneration & outOperand1,
                                                                            GGS_uint & outOperand2,
                                                                            GGS_templateInstructionListForGeneration & outOperand3,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mConstantList ;
    outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
    outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListForGeneration::setter_popLast (GGS__5B_lstring_5D_ & outOperand0,
                                                                           GGS_extractedAssociatedValuesForGeneration & outOperand1,
                                                                           GGS_uint & outOperand2,
                                                                           GGS_templateInstructionListForGeneration & outOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mConstantList ;
    outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
    outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListForGeneration::method_first (GGS__5B_lstring_5D_ & outOperand0,
                                                                         GGS_extractedAssociatedValuesForGeneration & outOperand1,
                                                                         GGS_uint & outOperand2,
                                                                         GGS_templateInstructionListForGeneration & outOperand3,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mConstantList ;
    outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
    outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListForGeneration::method_last (GGS__5B_lstring_5D_ & outOperand0,
                                                                        GGS_extractedAssociatedValuesForGeneration & outOperand1,
                                                                        GGS_uint & outOperand2,
                                                                        GGS_templateInstructionListForGeneration & outOperand3,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mConstantList ;
    outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
    outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration GGS_templateInstructionSwitchBranchListForGeneration::add_operation (const GGS_templateInstructionSwitchBranchListForGeneration & inOperand,
                                                                                                                          Compiler * /* inCompiler */
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_templateInstructionSwitchBranchListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration GGS_templateInstructionSwitchBranchListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionSwitchBranchListForGeneration result = GGS_templateInstructionSwitchBranchListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration GGS_templateInstructionSwitchBranchListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionSwitchBranchListForGeneration result = GGS_templateInstructionSwitchBranchListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration GGS_templateInstructionSwitchBranchListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionSwitchBranchListForGeneration result = GGS_templateInstructionSwitchBranchListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListForGeneration::plusAssignOperation (const GGS_templateInstructionSwitchBranchListForGeneration inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListForGeneration::setter_setMConstantListAtIndex (GGS__5B_lstring_5D_ inOperand,
                                                                                           GGS_uint inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mConstantList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_templateInstructionSwitchBranchListForGeneration::getter_mConstantListAtIndex (const GGS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  GGS__5B_lstring_5D_ result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    result = p->mObject.mProperty_mConstantList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListForGeneration::setter_setMExtractedAssociatedValuesForGenerationAtIndex (GGS_extractedAssociatedValuesForGeneration inOperand,
                                                                                                                     GGS_uint inIndex,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExtractedAssociatedValuesForGeneration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration GGS_templateInstructionSwitchBranchListForGeneration::getter_mExtractedAssociatedValuesForGenerationAtIndex (const GGS_uint & inIndex,
                                                                                                                                                        Compiler * inCompiler
                                                                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  GGS_extractedAssociatedValuesForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    result = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListForGeneration::setter_setMEndOfBranchLocationIndexAtIndex (GGS_uint inOperand,
                                                                                                       GGS_uint inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfBranchLocationIndex = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_templateInstructionSwitchBranchListForGeneration::getter_mEndOfBranchLocationIndexAtIndex (const GGS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    result = p->mObject.mProperty_mEndOfBranchLocationIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionSwitchBranchListForGeneration::setter_setMInstructionListAtIndex (GGS_templateInstructionListForGeneration inOperand,
                                                                                              GGS_uint inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionSwitchBranchListForGeneration::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  GGS_templateInstructionListForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @templateInstructionSwitchBranchListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_templateInstructionSwitchBranchListForGeneration::DownEnumerator_templateInstructionSwitchBranchListForGeneration (const GGS_templateInstructionSwitchBranchListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration_2E_element DownEnumerator_templateInstructionSwitchBranchListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (const cCollectionElement_templateInstructionSwitchBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ DownEnumerator_templateInstructionSwitchBranchListForGeneration::current_mConstantList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (const cCollectionElement_templateInstructionSwitchBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return p->mObject.mProperty_mConstantList ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration DownEnumerator_templateInstructionSwitchBranchListForGeneration::current_mExtractedAssociatedValuesForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (const cCollectionElement_templateInstructionSwitchBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_templateInstructionSwitchBranchListForGeneration::current_mEndOfBranchLocationIndex (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (const cCollectionElement_templateInstructionSwitchBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return p->mObject.mProperty_mEndOfBranchLocationIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration DownEnumerator_templateInstructionSwitchBranchListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (const cCollectionElement_templateInstructionSwitchBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return p->mObject.mProperty_mInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @templateInstructionSwitchBranchListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_templateInstructionSwitchBranchListForGeneration::UpEnumerator_templateInstructionSwitchBranchListForGeneration (const GGS_templateInstructionSwitchBranchListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration_2E_element UpEnumerator_templateInstructionSwitchBranchListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (const cCollectionElement_templateInstructionSwitchBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ UpEnumerator_templateInstructionSwitchBranchListForGeneration::current_mConstantList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (const cCollectionElement_templateInstructionSwitchBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return p->mObject.mProperty_mConstantList ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration UpEnumerator_templateInstructionSwitchBranchListForGeneration::current_mExtractedAssociatedValuesForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (const cCollectionElement_templateInstructionSwitchBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_templateInstructionSwitchBranchListForGeneration::current_mEndOfBranchLocationIndex (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (const cCollectionElement_templateInstructionSwitchBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return p->mObject.mProperty_mEndOfBranchLocationIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration UpEnumerator_templateInstructionSwitchBranchListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (const cCollectionElement_templateInstructionSwitchBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return p->mObject.mProperty_mInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @templateInstructionSwitchBranchListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListForGeneration ("templateInstructionSwitchBranchListForGeneration",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionSwitchBranchListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionSwitchBranchListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionSwitchBranchListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration GGS_templateInstructionSwitchBranchListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateInstructionSwitchBranchListForGeneration result ;
  const GGS_templateInstructionSwitchBranchListForGeneration * p = (const GGS_templateInstructionSwitchBranchListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionSwitchBranchListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchBranchListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
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

void cCollectionElement_extractedAssociatedValuesForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mType" ":") ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCppName" ":") ;
  mObject.mProperty_mCppName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("name" ":") ;
  mObject.mProperty_name.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration::GGS_extractedAssociatedValuesForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration::GGS_extractedAssociatedValuesForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration GGS_extractedAssociatedValuesForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_extractedAssociatedValuesForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration GGS_extractedAssociatedValuesForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_extractedAssociatedValuesForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::plusPlusAssignOperation (const GGS_extractedAssociatedValuesForGeneration_2E_element & inValue
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_extractedAssociatedValuesForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration GGS_extractedAssociatedValuesForGeneration::class_func_listWithValue (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                                                                 const GGS_string & inOperand1,
                                                                                                                 const GGS_string & inOperand2
                                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_extractedAssociatedValuesForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_extractedAssociatedValuesForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_extractedAssociatedValuesForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GGS_unifiedTypeMapEntry & in_mType,
                                                                            const GGS_string & in_mCppName,
                                                                            const GGS_string & in_name
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_extractedAssociatedValuesForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_extractedAssociatedValuesForGeneration (in_mType,
                                                                            in_mCppName,
                                                                            in_name COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::addAssignOperation (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                     const GGS_string & inOperand1,
                                                                     const GGS_string & inOperand2
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_extractedAssociatedValuesForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::setter_append (const GGS_unifiedTypeMapEntry inOperand0,
                                                                const GGS_string inOperand1,
                                                                const GGS_string inOperand2,
                                                                Compiler * /* inCompiler */
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_extractedAssociatedValuesForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::setter_insertAtIndex (const GGS_unifiedTypeMapEntry inOperand0,
                                                                       const GGS_string inOperand1,
                                                                       const GGS_string inOperand2,
                                                                       const GGS_uint inInsertionIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_extractedAssociatedValuesForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::setter_removeAtIndex (GGS_unifiedTypeMapEntry & outOperand0,
                                                                       GGS_string & outOperand1,
                                                                       GGS_string & outOperand2,
                                                                       const GGS_uint inRemoveIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
      outOperand0 = p->mObject.mProperty_mType ;
      outOperand1 = p->mObject.mProperty_mCppName ;
      outOperand2 = p->mObject.mProperty_name ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::setter_popFirst (GGS_unifiedTypeMapEntry & outOperand0,
                                                                  GGS_string & outOperand1,
                                                                  GGS_string & outOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mCppName ;
    outOperand2 = p->mObject.mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::setter_popLast (GGS_unifiedTypeMapEntry & outOperand0,
                                                                 GGS_string & outOperand1,
                                                                 GGS_string & outOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mCppName ;
    outOperand2 = p->mObject.mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::method_first (GGS_unifiedTypeMapEntry & outOperand0,
                                                               GGS_string & outOperand1,
                                                               GGS_string & outOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mCppName ;
    outOperand2 = p->mObject.mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::method_last (GGS_unifiedTypeMapEntry & outOperand0,
                                                              GGS_string & outOperand1,
                                                              GGS_string & outOperand2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mCppName ;
    outOperand2 = p->mObject.mProperty_name ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration GGS_extractedAssociatedValuesForGeneration::add_operation (const GGS_extractedAssociatedValuesForGeneration & inOperand,
                                                                                                      Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extractedAssociatedValuesForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration GGS_extractedAssociatedValuesForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_extractedAssociatedValuesForGeneration result = GGS_extractedAssociatedValuesForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration GGS_extractedAssociatedValuesForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_extractedAssociatedValuesForGeneration result = GGS_extractedAssociatedValuesForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration GGS_extractedAssociatedValuesForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_extractedAssociatedValuesForGeneration result = GGS_extractedAssociatedValuesForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::plusAssignOperation (const GGS_extractedAssociatedValuesForGeneration inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::setter_setMTypeAtIndex (GGS_unifiedTypeMapEntry inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_extractedAssociatedValuesForGeneration::getter_mTypeAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) attributes.ptr () ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::setter_setMCppNameAtIndex (GGS_string inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCppName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_extractedAssociatedValuesForGeneration::getter_mCppNameAtIndex (const GGS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    result = p->mObject.mProperty_mCppName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extractedAssociatedValuesForGeneration::setter_setNameAtIndex (GGS_string inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_name = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_extractedAssociatedValuesForGeneration::getter_nameAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    result = p->mObject.mProperty_name ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @extractedAssociatedValuesForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_extractedAssociatedValuesForGeneration::DownEnumerator_extractedAssociatedValuesForGeneration (const GGS_extractedAssociatedValuesForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration_2E_element DownEnumerator_extractedAssociatedValuesForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_extractedAssociatedValuesForGeneration * p = (const cCollectionElement_extractedAssociatedValuesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_extractedAssociatedValuesForGeneration::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_extractedAssociatedValuesForGeneration * p = (const cCollectionElement_extractedAssociatedValuesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
  return p->mObject.mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_extractedAssociatedValuesForGeneration::current_mCppName (LOCATION_ARGS) const {
  const cCollectionElement_extractedAssociatedValuesForGeneration * p = (const cCollectionElement_extractedAssociatedValuesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
  return p->mObject.mProperty_mCppName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_extractedAssociatedValuesForGeneration::current_name (LOCATION_ARGS) const {
  const cCollectionElement_extractedAssociatedValuesForGeneration * p = (const cCollectionElement_extractedAssociatedValuesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
  return p->mObject.mProperty_name ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @extractedAssociatedValuesForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_extractedAssociatedValuesForGeneration::UpEnumerator_extractedAssociatedValuesForGeneration (const GGS_extractedAssociatedValuesForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extractedAssociatedValuesForGeneration_2E_element UpEnumerator_extractedAssociatedValuesForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_extractedAssociatedValuesForGeneration * p = (const cCollectionElement_extractedAssociatedValuesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_extractedAssociatedValuesForGeneration::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_extractedAssociatedValuesForGeneration * p = (const cCollectionElement_extractedAssociatedValuesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
  return p->mObject.mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_extractedAssociatedValuesForGeneration::current_mCppName (LOCATION_ARGS) const {
  const cCollectionElement_extractedAssociatedValuesForGeneration * p = (const cCollectionElement_extractedAssociatedValuesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
  return p->mObject.mProperty_mCppName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_extractedAssociatedValuesForGeneration::current_name (LOCATION_ARGS) const {
  const cCollectionElement_extractedAssociatedValuesForGeneration * p = (const cCollectionElement_extractedAssociatedValuesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
  return p->mObject.mProperty_name ;
}




//--------------------------------------------------------------------------------------------------
//     @extractedAssociatedValuesForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration ("extractedAssociatedValuesForGeneration",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extractedAssociatedValuesForGeneration::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_templateInstructionSwitchForGeneration_2E_weak::objectCompare (const GGS_templateInstructionSwitchForGeneration_2E_weak & inOperand) const {
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

GGS_templateInstructionSwitchForGeneration_2E_weak::GGS_templateInstructionSwitchForGeneration_2E_weak (void) :
GGS_templateInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchForGeneration_2E_weak & GGS_templateInstructionSwitchForGeneration_2E_weak::operator = (const GGS_templateInstructionSwitchForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchForGeneration_2E_weak::GGS_templateInstructionSwitchForGeneration_2E_weak (const GGS_templateInstructionSwitchForGeneration & inSource) :
GGS_templateInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchForGeneration_2E_weak GGS_templateInstructionSwitchForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInstructionSwitchForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchForGeneration GGS_templateInstructionSwitchForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_templateInstructionSwitchForGeneration result ;
  if (isValid ()) {
    const cPtr_templateInstructionSwitchForGeneration * p = (cPtr_templateInstructionSwitchForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInstructionSwitchForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchForGeneration GGS_templateInstructionSwitchForGeneration_2E_weak::bang_templateInstructionSwitchForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionSwitchForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionSwitchForGeneration) ;
      result = GGS_templateInstructionSwitchForGeneration ((cPtr_templateInstructionSwitchForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionSwitchForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration_2E_weak ("templateInstructionSwitchForGeneration.weak",
                                                                                                      & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateInstructionSwitchForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionSwitchForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionSwitchForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchForGeneration_2E_weak GGS_templateInstructionSwitchForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_templateInstructionSwitchForGeneration_2E_weak result ;
  const GGS_templateInstructionSwitchForGeneration_2E_weak * p = (const GGS_templateInstructionSwitchForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionSwitchForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @semanticDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticDeclarationAST::objectCompare (const GGS_semanticDeclarationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationAST::GGS_semanticDeclarationAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_semanticDeclarationAST::
semanticDeclarationAST_init_21_isPredefined (const GGS_bool & in_isPredefined,
                                             Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationAST::GGS_semanticDeclarationAST (const cPtr_semanticDeclarationAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_semanticDeclarationAST::readProperty_isPredefined (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_semanticDeclarationAST * p = (cPtr_semanticDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticDeclarationAST) ;
    return p->mProperty_isPredefined ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @semanticDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_semanticDeclarationAST::cPtr_semanticDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_isPredefined () {
}

//--------------------------------------------------------------------------------------------------

cPtr_semanticDeclarationAST::cPtr_semanticDeclarationAST (const GGS_bool & in_isPredefined,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_isPredefined () {
  mProperty_isPredefined = in_isPredefined ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_isPredefined.printNonNullClassInstanceProperties ("isPredefined") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @semanticDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationAST ("semanticDeclarationAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationAST GGS_semanticDeclarationAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_semanticDeclarationAST result ;
  const GGS_semanticDeclarationAST * p = (const GGS_semanticDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@templateDelimitorListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_templateDelimitorListAST : public cCollectionElement {
  public: GGS_templateDelimitorListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_templateDelimitorListAST (const GGS_lstring & in_mStartString,
                                                       const GGS_bool & in_nonAtomicSelection,
                                                       const GGS_bool & in_mTemplateEndMark,
                                                       const GGS_bool & in_mPreserved,
                                                       const GGS_lstring & in_mEndString
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_templateDelimitorListAST (const GGS_templateDelimitorListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_templateDelimitorListAST::cCollectionElement_templateDelimitorListAST (const GGS_lstring & in_mStartString,
                                                                                          const GGS_bool & in_nonAtomicSelection,
                                                                                          const GGS_bool & in_mTemplateEndMark,
                                                                                          const GGS_bool & in_mPreserved,
                                                                                          const GGS_lstring & in_mEndString
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mStartString, in_nonAtomicSelection, in_mTemplateEndMark, in_mPreserved, in_mEndString) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_templateDelimitorListAST::cCollectionElement_templateDelimitorListAST (const GGS_templateDelimitorListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mStartString, inElement.mProperty_nonAtomicSelection, inElement.mProperty_mTemplateEndMark, inElement.mProperty_mPreserved, inElement.mProperty_mEndString) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_templateDelimitorListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_templateDelimitorListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_templateDelimitorListAST (mObject.mProperty_mStartString, mObject.mProperty_nonAtomicSelection, mObject.mProperty_mTemplateEndMark, mObject.mProperty_mPreserved, mObject.mProperty_mEndString COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_templateDelimitorListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mStartString" ":") ;
  mObject.mProperty_mStartString.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("nonAtomicSelection" ":") ;
  mObject.mProperty_nonAtomicSelection.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTemplateEndMark" ":") ;
  mObject.mProperty_mTemplateEndMark.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPreserved" ":") ;
  mObject.mProperty_mPreserved.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndString" ":") ;
  mObject.mProperty_mEndString.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST::GGS_templateDelimitorListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST::GGS_templateDelimitorListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST GGS_templateDelimitorListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_templateDelimitorListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST GGS_templateDelimitorListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_templateDelimitorListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::plusPlusAssignOperation (const GGS_templateDelimitorListAST_2E_element & inValue
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_templateDelimitorListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST GGS_templateDelimitorListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                     const GGS_bool & inOperand1,
                                                                                     const GGS_bool & inOperand2,
                                                                                     const GGS_bool & inOperand3,
                                                                                     const GGS_lstring & inOperand4
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_templateDelimitorListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GGS_templateDelimitorListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_templateDelimitorListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GGS_lstring & in_mStartString,
                                                              const GGS_bool & in_nonAtomicSelection,
                                                              const GGS_bool & in_mTemplateEndMark,
                                                              const GGS_bool & in_mPreserved,
                                                              const GGS_lstring & in_mEndString
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_templateDelimitorListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_templateDelimitorListAST (in_mStartString,
                                                              in_nonAtomicSelection,
                                                              in_mTemplateEndMark,
                                                              in_mPreserved,
                                                              in_mEndString COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                       const GGS_bool & inOperand1,
                                                       const GGS_bool & inOperand2,
                                                       const GGS_bool & inOperand3,
                                                       const GGS_lstring & inOperand4
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_templateDelimitorListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::setter_append (const GGS_lstring inOperand0,
                                                  const GGS_bool inOperand1,
                                                  const GGS_bool inOperand2,
                                                  const GGS_bool inOperand3,
                                                  const GGS_lstring inOperand4,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_templateDelimitorListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                         const GGS_bool inOperand1,
                                                         const GGS_bool inOperand2,
                                                         const GGS_bool inOperand3,
                                                         const GGS_lstring inOperand4,
                                                         const GGS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_templateDelimitorListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                         GGS_bool & outOperand1,
                                                         GGS_bool & outOperand2,
                                                         GGS_bool & outOperand3,
                                                         GGS_lstring & outOperand4,
                                                         const GGS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_templateDelimitorListAST * p = (cCollectionElement_templateDelimitorListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_templateDelimitorListAST) ;
      outOperand0 = p->mObject.mProperty_mStartString ;
      outOperand1 = p->mObject.mProperty_nonAtomicSelection ;
      outOperand2 = p->mObject.mProperty_mTemplateEndMark ;
      outOperand3 = p->mObject.mProperty_mPreserved ;
      outOperand4 = p->mObject.mProperty_mEndString ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                    GGS_bool & outOperand1,
                                                    GGS_bool & outOperand2,
                                                    GGS_bool & outOperand3,
                                                    GGS_lstring & outOperand4,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorListAST * p = (cCollectionElement_templateDelimitorListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateDelimitorListAST) ;
    outOperand0 = p->mObject.mProperty_mStartString ;
    outOperand1 = p->mObject.mProperty_nonAtomicSelection ;
    outOperand2 = p->mObject.mProperty_mTemplateEndMark ;
    outOperand3 = p->mObject.mProperty_mPreserved ;
    outOperand4 = p->mObject.mProperty_mEndString ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::setter_popLast (GGS_lstring & outOperand0,
                                                   GGS_bool & outOperand1,
                                                   GGS_bool & outOperand2,
                                                   GGS_bool & outOperand3,
                                                   GGS_lstring & outOperand4,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorListAST * p = (cCollectionElement_templateDelimitorListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateDelimitorListAST) ;
    outOperand0 = p->mObject.mProperty_mStartString ;
    outOperand1 = p->mObject.mProperty_nonAtomicSelection ;
    outOperand2 = p->mObject.mProperty_mTemplateEndMark ;
    outOperand3 = p->mObject.mProperty_mPreserved ;
    outOperand4 = p->mObject.mProperty_mEndString ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::method_first (GGS_lstring & outOperand0,
                                                 GGS_bool & outOperand1,
                                                 GGS_bool & outOperand2,
                                                 GGS_bool & outOperand3,
                                                 GGS_lstring & outOperand4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorListAST * p = (cCollectionElement_templateDelimitorListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateDelimitorListAST) ;
    outOperand0 = p->mObject.mProperty_mStartString ;
    outOperand1 = p->mObject.mProperty_nonAtomicSelection ;
    outOperand2 = p->mObject.mProperty_mTemplateEndMark ;
    outOperand3 = p->mObject.mProperty_mPreserved ;
    outOperand4 = p->mObject.mProperty_mEndString ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::method_last (GGS_lstring & outOperand0,
                                                GGS_bool & outOperand1,
                                                GGS_bool & outOperand2,
                                                GGS_bool & outOperand3,
                                                GGS_lstring & outOperand4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorListAST * p = (cCollectionElement_templateDelimitorListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateDelimitorListAST) ;
    outOperand0 = p->mObject.mProperty_mStartString ;
    outOperand1 = p->mObject.mProperty_nonAtomicSelection ;
    outOperand2 = p->mObject.mProperty_mTemplateEndMark ;
    outOperand3 = p->mObject.mProperty_mPreserved ;
    outOperand4 = p->mObject.mProperty_mEndString ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST GGS_templateDelimitorListAST::add_operation (const GGS_templateDelimitorListAST & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_templateDelimitorListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST GGS_templateDelimitorListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_templateDelimitorListAST result = GGS_templateDelimitorListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST GGS_templateDelimitorListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_templateDelimitorListAST result = GGS_templateDelimitorListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST GGS_templateDelimitorListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_templateDelimitorListAST result = GGS_templateDelimitorListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::plusAssignOperation (const GGS_templateDelimitorListAST inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::setter_setMStartStringAtIndex (GGS_lstring inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_templateDelimitorListAST * p = (cCollectionElement_templateDelimitorListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStartString = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateDelimitorListAST::getter_mStartStringAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorListAST * p = (cCollectionElement_templateDelimitorListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorListAST) ;
    result = p->mObject.mProperty_mStartString ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::setter_setNonAtomicSelectionAtIndex (GGS_bool inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_templateDelimitorListAST * p = (cCollectionElement_templateDelimitorListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_nonAtomicSelection = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_templateDelimitorListAST::getter_nonAtomicSelectionAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorListAST * p = (cCollectionElement_templateDelimitorListAST *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorListAST) ;
    result = p->mObject.mProperty_nonAtomicSelection ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::setter_setMTemplateEndMarkAtIndex (GGS_bool inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_templateDelimitorListAST * p = (cCollectionElement_templateDelimitorListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTemplateEndMark = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_templateDelimitorListAST::getter_mTemplateEndMarkAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorListAST * p = (cCollectionElement_templateDelimitorListAST *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorListAST) ;
    result = p->mObject.mProperty_mTemplateEndMark ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::setter_setMPreservedAtIndex (GGS_bool inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_templateDelimitorListAST * p = (cCollectionElement_templateDelimitorListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPreserved = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_templateDelimitorListAST::getter_mPreservedAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorListAST * p = (cCollectionElement_templateDelimitorListAST *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorListAST) ;
    result = p->mObject.mProperty_mPreserved ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorListAST::setter_setMEndStringAtIndex (GGS_lstring inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_templateDelimitorListAST * p = (cCollectionElement_templateDelimitorListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndString = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateDelimitorListAST::getter_mEndStringAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorListAST * p = (cCollectionElement_templateDelimitorListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorListAST) ;
    result = p->mObject.mProperty_mEndString ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @templateDelimitorListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_templateDelimitorListAST::DownEnumerator_templateDelimitorListAST (const GGS_templateDelimitorListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST_2E_element DownEnumerator_templateDelimitorListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorListAST * p = (const cCollectionElement_templateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_templateDelimitorListAST::current_mStartString (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorListAST * p = (const cCollectionElement_templateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorListAST) ;
  return p->mObject.mProperty_mStartString ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_templateDelimitorListAST::current_nonAtomicSelection (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorListAST * p = (const cCollectionElement_templateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorListAST) ;
  return p->mObject.mProperty_nonAtomicSelection ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_templateDelimitorListAST::current_mTemplateEndMark (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorListAST * p = (const cCollectionElement_templateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorListAST) ;
  return p->mObject.mProperty_mTemplateEndMark ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_templateDelimitorListAST::current_mPreserved (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorListAST * p = (const cCollectionElement_templateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorListAST) ;
  return p->mObject.mProperty_mPreserved ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_templateDelimitorListAST::current_mEndString (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorListAST * p = (const cCollectionElement_templateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorListAST) ;
  return p->mObject.mProperty_mEndString ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @templateDelimitorListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_templateDelimitorListAST::UpEnumerator_templateDelimitorListAST (const GGS_templateDelimitorListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST_2E_element UpEnumerator_templateDelimitorListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorListAST * p = (const cCollectionElement_templateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_templateDelimitorListAST::current_mStartString (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorListAST * p = (const cCollectionElement_templateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorListAST) ;
  return p->mObject.mProperty_mStartString ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_templateDelimitorListAST::current_nonAtomicSelection (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorListAST * p = (const cCollectionElement_templateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorListAST) ;
  return p->mObject.mProperty_nonAtomicSelection ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_templateDelimitorListAST::current_mTemplateEndMark (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorListAST * p = (const cCollectionElement_templateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorListAST) ;
  return p->mObject.mProperty_mTemplateEndMark ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_templateDelimitorListAST::current_mPreserved (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorListAST * p = (const cCollectionElement_templateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorListAST) ;
  return p->mObject.mProperty_mPreserved ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_templateDelimitorListAST::current_mEndString (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorListAST * p = (const cCollectionElement_templateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorListAST) ;
  return p->mObject.mProperty_mEndString ;
}




//--------------------------------------------------------------------------------------------------
//     @templateDelimitorListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateDelimitorListAST ("templateDelimitorListAST",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateDelimitorListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateDelimitorListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateDelimitorListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateDelimitorListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST GGS_templateDelimitorListAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateDelimitorListAST result ;
  const GGS_templateDelimitorListAST * p = (const GGS_templateDelimitorListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateDelimitorListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateDelimitorListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@templateReplacementListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_templateReplacementListAST : public cCollectionElement {
  public: GGS_templateReplacementListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_templateReplacementListAST (const GGS_lstring & in_mMatchString,
                                                         const GGS_lstring & in_mReplacementString,
                                                         const GGS_lstring & in_mReplacementFunction
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_templateReplacementListAST (const GGS_templateReplacementListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_templateReplacementListAST::cCollectionElement_templateReplacementListAST (const GGS_lstring & in_mMatchString,
                                                                                              const GGS_lstring & in_mReplacementString,
                                                                                              const GGS_lstring & in_mReplacementFunction
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMatchString, in_mReplacementString, in_mReplacementFunction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_templateReplacementListAST::cCollectionElement_templateReplacementListAST (const GGS_templateReplacementListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mMatchString, inElement.mProperty_mReplacementString, inElement.mProperty_mReplacementFunction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_templateReplacementListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_templateReplacementListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_templateReplacementListAST (mObject.mProperty_mMatchString, mObject.mProperty_mReplacementString, mObject.mProperty_mReplacementFunction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_templateReplacementListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mMatchString" ":") ;
  mObject.mProperty_mMatchString.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mReplacementString" ":") ;
  mObject.mProperty_mReplacementString.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mReplacementFunction" ":") ;
  mObject.mProperty_mReplacementFunction.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST::GGS_templateReplacementListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST::GGS_templateReplacementListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST GGS_templateReplacementListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_templateReplacementListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST GGS_templateReplacementListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_templateReplacementListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::plusPlusAssignOperation (const GGS_templateReplacementListAST_2E_element & inValue
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_templateReplacementListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST GGS_templateReplacementListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                         const GGS_lstring & inOperand1,
                                                                                         const GGS_lstring & inOperand2
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_templateReplacementListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_templateReplacementListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_templateReplacementListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GGS_lstring & in_mMatchString,
                                                                const GGS_lstring & in_mReplacementString,
                                                                const GGS_lstring & in_mReplacementFunction
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_templateReplacementListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_templateReplacementListAST (in_mMatchString,
                                                                in_mReplacementString,
                                                                in_mReplacementFunction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                         const GGS_lstring & inOperand1,
                                                         const GGS_lstring & inOperand2
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_templateReplacementListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::setter_append (const GGS_lstring inOperand0,
                                                    const GGS_lstring inOperand1,
                                                    const GGS_lstring inOperand2,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_templateReplacementListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                           const GGS_lstring inOperand1,
                                                           const GGS_lstring inOperand2,
                                                           const GGS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_templateReplacementListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                           GGS_lstring & outOperand1,
                                                           GGS_lstring & outOperand2,
                                                           const GGS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
      outOperand0 = p->mObject.mProperty_mMatchString ;
      outOperand1 = p->mObject.mProperty_mReplacementString ;
      outOperand2 = p->mObject.mProperty_mReplacementFunction ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      GGS_lstring & outOperand2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    outOperand0 = p->mObject.mProperty_mMatchString ;
    outOperand1 = p->mObject.mProperty_mReplacementString ;
    outOperand2 = p->mObject.mProperty_mReplacementFunction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::setter_popLast (GGS_lstring & outOperand0,
                                                     GGS_lstring & outOperand1,
                                                     GGS_lstring & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    outOperand0 = p->mObject.mProperty_mMatchString ;
    outOperand1 = p->mObject.mProperty_mReplacementString ;
    outOperand2 = p->mObject.mProperty_mReplacementFunction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::method_first (GGS_lstring & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   GGS_lstring & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    outOperand0 = p->mObject.mProperty_mMatchString ;
    outOperand1 = p->mObject.mProperty_mReplacementString ;
    outOperand2 = p->mObject.mProperty_mReplacementFunction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::method_last (GGS_lstring & outOperand0,
                                                  GGS_lstring & outOperand1,
                                                  GGS_lstring & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    outOperand0 = p->mObject.mProperty_mMatchString ;
    outOperand1 = p->mObject.mProperty_mReplacementString ;
    outOperand2 = p->mObject.mProperty_mReplacementFunction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST GGS_templateReplacementListAST::add_operation (const GGS_templateReplacementListAST & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_templateReplacementListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST GGS_templateReplacementListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_templateReplacementListAST result = GGS_templateReplacementListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST GGS_templateReplacementListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_templateReplacementListAST result = GGS_templateReplacementListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST GGS_templateReplacementListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_templateReplacementListAST result = GGS_templateReplacementListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::plusAssignOperation (const GGS_templateReplacementListAST inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::setter_setMMatchStringAtIndex (GGS_lstring inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMatchString = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateReplacementListAST::getter_mMatchStringAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    result = p->mObject.mProperty_mMatchString ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::setter_setMReplacementStringAtIndex (GGS_lstring inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mReplacementString = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateReplacementListAST::getter_mReplacementStringAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    result = p->mObject.mProperty_mReplacementString ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateReplacementListAST::setter_setMReplacementFunctionAtIndex (GGS_lstring inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mReplacementFunction = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateReplacementListAST::getter_mReplacementFunctionAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    result = p->mObject.mProperty_mReplacementFunction ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @templateReplacementListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_templateReplacementListAST::DownEnumerator_templateReplacementListAST (const GGS_templateReplacementListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST_2E_element DownEnumerator_templateReplacementListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_templateReplacementListAST * p = (const cCollectionElement_templateReplacementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_templateReplacementListAST::current_mMatchString (LOCATION_ARGS) const {
  const cCollectionElement_templateReplacementListAST * p = (const cCollectionElement_templateReplacementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
  return p->mObject.mProperty_mMatchString ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_templateReplacementListAST::current_mReplacementString (LOCATION_ARGS) const {
  const cCollectionElement_templateReplacementListAST * p = (const cCollectionElement_templateReplacementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
  return p->mObject.mProperty_mReplacementString ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_templateReplacementListAST::current_mReplacementFunction (LOCATION_ARGS) const {
  const cCollectionElement_templateReplacementListAST * p = (const cCollectionElement_templateReplacementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
  return p->mObject.mProperty_mReplacementFunction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @templateReplacementListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_templateReplacementListAST::UpEnumerator_templateReplacementListAST (const GGS_templateReplacementListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST_2E_element UpEnumerator_templateReplacementListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_templateReplacementListAST * p = (const cCollectionElement_templateReplacementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_templateReplacementListAST::current_mMatchString (LOCATION_ARGS) const {
  const cCollectionElement_templateReplacementListAST * p = (const cCollectionElement_templateReplacementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
  return p->mObject.mProperty_mMatchString ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_templateReplacementListAST::current_mReplacementString (LOCATION_ARGS) const {
  const cCollectionElement_templateReplacementListAST * p = (const cCollectionElement_templateReplacementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
  return p->mObject.mProperty_mReplacementString ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_templateReplacementListAST::current_mReplacementFunction (LOCATION_ARGS) const {
  const cCollectionElement_templateReplacementListAST * p = (const cCollectionElement_templateReplacementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
  return p->mObject.mProperty_mReplacementFunction ;
}




//--------------------------------------------------------------------------------------------------
//     @templateReplacementListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateReplacementListAST ("templateReplacementListAST",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateReplacementListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateReplacementListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateReplacementListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateReplacementListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST GGS_templateReplacementListAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_templateReplacementListAST result ;
  const GGS_templateReplacementListAST * p = (const GGS_templateReplacementListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateReplacementListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateReplacementListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@lexicalAttributeListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalAttributeListAST : public cCollectionElement {
  public: GGS_lexicalAttributeListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_lexicalAttributeListAST (const GGS_lstring & in_mTypeName,
                                                      const GGS_lstring & in_mName
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalAttributeListAST (const GGS_lexicalAttributeListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalAttributeListAST::cCollectionElement_lexicalAttributeListAST (const GGS_lstring & in_mTypeName,
                                                                                        const GGS_lstring & in_mName
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeName, in_mName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalAttributeListAST::cCollectionElement_lexicalAttributeListAST (const GGS_lexicalAttributeListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTypeName, inElement.mProperty_mName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalAttributeListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalAttributeListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_lexicalAttributeListAST (mObject.mProperty_mTypeName, mObject.mProperty_mName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalAttributeListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTypeName" ":") ;
  mObject.mProperty_mTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mName" ":") ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeListAST::GGS_lexicalAttributeListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeListAST::GGS_lexicalAttributeListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeListAST GGS_lexicalAttributeListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_lexicalAttributeListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeListAST GGS_lexicalAttributeListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_lexicalAttributeListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeListAST::plusPlusAssignOperation (const GGS_lexicalAttributeListAST_2E_element & inValue
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalAttributeListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeListAST GGS_lexicalAttributeListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                   const GGS_lstring & inOperand1
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_lexicalAttributeListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_lexicalAttributeListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_lexicalAttributeListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GGS_lstring & in_mTypeName,
                                                             const GGS_lstring & in_mName
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalAttributeListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalAttributeListAST (in_mTypeName,
                                                             in_mName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                      const GGS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeListAST::setter_append (const GGS_lstring inOperand0,
                                                 const GGS_lstring inOperand1,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                        const GGS_lstring inOperand1,
                                                        const GGS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                        GGS_lstring & outOperand1,
                                                        const GGS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
      outOperand0 = p->mObject.mProperty_mTypeName ;
      outOperand1 = p->mObject.mProperty_mName ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeListAST::setter_popLast (GGS_lstring & outOperand0,
                                                  GGS_lstring & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeListAST::method_first (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeListAST::method_last (GGS_lstring & outOperand0,
                                               GGS_lstring & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeListAST GGS_lexicalAttributeListAST::add_operation (const GGS_lexicalAttributeListAST & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalAttributeListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeListAST GGS_lexicalAttributeListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lexicalAttributeListAST result = GGS_lexicalAttributeListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeListAST GGS_lexicalAttributeListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lexicalAttributeListAST result = GGS_lexicalAttributeListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeListAST GGS_lexicalAttributeListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_lexicalAttributeListAST result = GGS_lexicalAttributeListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeListAST::plusAssignOperation (const GGS_lexicalAttributeListAST inOperand,
                                                       Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeListAST::setter_setMTypeNameAtIndex (GGS_lstring inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalAttributeListAST::getter_mTypeNameAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    result = p->mObject.mProperty_mTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalAttributeListAST::setter_setMNameAtIndex (GGS_lstring inOperand,
                                                          GGS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalAttributeListAST::getter_mNameAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @lexicalAttributeListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalAttributeListAST::DownEnumerator_lexicalAttributeListAST (const GGS_lexicalAttributeListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeListAST_2E_element DownEnumerator_lexicalAttributeListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalAttributeListAST * p = (const cCollectionElement_lexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalAttributeListAST::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalAttributeListAST * p = (const cCollectionElement_lexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
  return p->mObject.mProperty_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalAttributeListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalAttributeListAST * p = (const cCollectionElement_lexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
  return p->mObject.mProperty_mName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @lexicalAttributeListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalAttributeListAST::UpEnumerator_lexicalAttributeListAST (const GGS_lexicalAttributeListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeListAST_2E_element UpEnumerator_lexicalAttributeListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalAttributeListAST * p = (const cCollectionElement_lexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalAttributeListAST::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalAttributeListAST * p = (const cCollectionElement_lexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
  return p->mObject.mProperty_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalAttributeListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalAttributeListAST * p = (const cCollectionElement_lexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
  return p->mObject.mProperty_mName ;
}




//--------------------------------------------------------------------------------------------------
//     @lexicalAttributeListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeListAST ("lexicalAttributeListAST",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalAttributeListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalAttributeListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalAttributeListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeListAST GGS_lexicalAttributeListAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_lexicalAttributeListAST result ;
  const GGS_lexicalAttributeListAST * p = (const GGS_lexicalAttributeListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalAttributeListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@lexicalStyleListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalStyleListAST : public cCollectionElement {
  public: GGS_lexicalStyleListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_lexicalStyleListAST (const GGS_lstring & in_mName,
                                                  const GGS_lstring & in_mComment
                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalStyleListAST (const GGS_lexicalStyleListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalStyleListAST::cCollectionElement_lexicalStyleListAST (const GGS_lstring & in_mName,
                                                                                const GGS_lstring & in_mComment
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mComment) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalStyleListAST::cCollectionElement_lexicalStyleListAST (const GGS_lexicalStyleListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mName, inElement.mProperty_mComment) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalStyleListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalStyleListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_lexicalStyleListAST (mObject.mProperty_mName, mObject.mProperty_mComment COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalStyleListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mName" ":") ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mComment" ":") ;
  mObject.mProperty_mComment.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST::GGS_lexicalStyleListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST::GGS_lexicalStyleListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST GGS_lexicalStyleListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_lexicalStyleListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST GGS_lexicalStyleListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_lexicalStyleListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalStyleListAST::plusPlusAssignOperation (const GGS_lexicalStyleListAST_2E_element & inValue
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalStyleListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST GGS_lexicalStyleListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                           const GGS_lstring & inOperand1
                                                                           COMMA_LOCATION_ARGS) {
  GGS_lexicalStyleListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_lexicalStyleListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_lexicalStyleListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalStyleListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GGS_lstring & in_mName,
                                                         const GGS_lstring & in_mComment
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalStyleListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalStyleListAST (in_mName,
                                                         in_mComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalStyleListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                  const GGS_lstring & inOperand1
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalStyleListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalStyleListAST::setter_append (const GGS_lstring inOperand0,
                                             const GGS_lstring inOperand1,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalStyleListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalStyleListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                    const GGS_lstring inOperand1,
                                                    const GGS_uint inInsertionIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalStyleListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalStyleListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                    GGS_lstring & outOperand1,
                                                    const GGS_uint inRemoveIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
      outOperand0 = p->mObject.mProperty_mName ;
      outOperand1 = p->mObject.mProperty_mComment ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalStyleListAST::setter_popFirst (GGS_lstring & outOperand0,
                                               GGS_lstring & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mComment ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalStyleListAST::setter_popLast (GGS_lstring & outOperand0,
                                              GGS_lstring & outOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mComment ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalStyleListAST::method_first (GGS_lstring & outOperand0,
                                            GGS_lstring & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mComment ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalStyleListAST::method_last (GGS_lstring & outOperand0,
                                           GGS_lstring & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mComment ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST GGS_lexicalStyleListAST::add_operation (const GGS_lexicalStyleListAST & inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalStyleListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST GGS_lexicalStyleListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_lexicalStyleListAST result = GGS_lexicalStyleListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST GGS_lexicalStyleListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_lexicalStyleListAST result = GGS_lexicalStyleListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST GGS_lexicalStyleListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_lexicalStyleListAST result = GGS_lexicalStyleListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalStyleListAST::plusAssignOperation (const GGS_lexicalStyleListAST inOperand,
                                                   Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalStyleListAST::setter_setMNameAtIndex (GGS_lstring inOperand,
                                                      GGS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalStyleListAST::getter_mNameAtIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalStyleListAST::setter_setMCommentAtIndex (GGS_lstring inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mComment = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalStyleListAST::getter_mCommentAtIndex (const GGS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    result = p->mObject.mProperty_mComment ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @lexicalStyleListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalStyleListAST::DownEnumerator_lexicalStyleListAST (const GGS_lexicalStyleListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST_2E_element DownEnumerator_lexicalStyleListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalStyleListAST * p = (const cCollectionElement_lexicalStyleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalStyleListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalStyleListAST * p = (const cCollectionElement_lexicalStyleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
  return p->mObject.mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalStyleListAST::current_mComment (LOCATION_ARGS) const {
  const cCollectionElement_lexicalStyleListAST * p = (const cCollectionElement_lexicalStyleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
  return p->mObject.mProperty_mComment ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @lexicalStyleListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalStyleListAST::UpEnumerator_lexicalStyleListAST (const GGS_lexicalStyleListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST_2E_element UpEnumerator_lexicalStyleListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalStyleListAST * p = (const cCollectionElement_lexicalStyleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalStyleListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalStyleListAST * p = (const cCollectionElement_lexicalStyleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
  return p->mObject.mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalStyleListAST::current_mComment (LOCATION_ARGS) const {
  const cCollectionElement_lexicalStyleListAST * p = (const cCollectionElement_lexicalStyleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
  return p->mObject.mProperty_mComment ;
}




//--------------------------------------------------------------------------------------------------
//     @lexicalStyleListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStyleListAST ("lexicalStyleListAST",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalStyleListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStyleListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalStyleListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalStyleListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST GGS_lexicalStyleListAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_lexicalStyleListAST result ;
  const GGS_lexicalStyleListAST * p = (const GGS_lexicalStyleListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalStyleListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStyleListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@terminalDeclarationListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_terminalDeclarationListAST : public cCollectionElement {
  public: GGS_terminalDeclarationListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_terminalDeclarationListAST (const GGS_lstring & in_mName,
                                                         const GGS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                         const GGS_lstring & in_mSyntaxErrorMessage,
                                                         const GGS_lstring & in_mStyle,
                                                         const GGS_bool & in_nonAtomicSelection,
                                                         const GGS_bool & in_isEndOfTemplateMark
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_terminalDeclarationListAST (const GGS_terminalDeclarationListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_terminalDeclarationListAST::cCollectionElement_terminalDeclarationListAST (const GGS_lstring & in_mName,
                                                                                              const GGS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                                                              const GGS_lstring & in_mSyntaxErrorMessage,
                                                                                              const GGS_lstring & in_mStyle,
                                                                                              const GGS_bool & in_nonAtomicSelection,
                                                                                              const GGS_bool & in_isEndOfTemplateMark
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mSentAttributeList, in_mSyntaxErrorMessage, in_mStyle, in_nonAtomicSelection, in_isEndOfTemplateMark) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_terminalDeclarationListAST::cCollectionElement_terminalDeclarationListAST (const GGS_terminalDeclarationListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mName, inElement.mProperty_mSentAttributeList, inElement.mProperty_mSyntaxErrorMessage, inElement.mProperty_mStyle, inElement.mProperty_nonAtomicSelection, inElement.mProperty_isEndOfTemplateMark) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_terminalDeclarationListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_terminalDeclarationListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_terminalDeclarationListAST (mObject.mProperty_mName, mObject.mProperty_mSentAttributeList, mObject.mProperty_mSyntaxErrorMessage, mObject.mProperty_mStyle, mObject.mProperty_nonAtomicSelection, mObject.mProperty_isEndOfTemplateMark COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_terminalDeclarationListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mName" ":") ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSentAttributeList" ":") ;
  mObject.mProperty_mSentAttributeList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSyntaxErrorMessage" ":") ;
  mObject.mProperty_mSyntaxErrorMessage.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mStyle" ":") ;
  mObject.mProperty_mStyle.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("nonAtomicSelection" ":") ;
  mObject.mProperty_nonAtomicSelection.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("isEndOfTemplateMark" ":") ;
  mObject.mProperty_isEndOfTemplateMark.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationListAST::GGS_terminalDeclarationListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationListAST::GGS_terminalDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationListAST GGS_terminalDeclarationListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_terminalDeclarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationListAST GGS_terminalDeclarationListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_terminalDeclarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalDeclarationListAST::plusPlusAssignOperation (const GGS_terminalDeclarationListAST_2E_element & inValue
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_terminalDeclarationListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationListAST GGS_terminalDeclarationListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                         const GGS_sentLexicalAttributeListAST & inOperand1,
                                                                                         const GGS_lstring & inOperand2,
                                                                                         const GGS_lstring & inOperand3,
                                                                                         const GGS_bool & inOperand4,
                                                                                         const GGS_bool & inOperand5
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_terminalDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GGS_terminalDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_terminalDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GGS_lstring & in_mName,
                                                                const GGS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                                const GGS_lstring & in_mSyntaxErrorMessage,
                                                                const GGS_lstring & in_mStyle,
                                                                const GGS_bool & in_nonAtomicSelection,
                                                                const GGS_bool & in_isEndOfTemplateMark
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalDeclarationListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_terminalDeclarationListAST (in_mName,
                                                                in_mSentAttributeList,
                                                                in_mSyntaxErrorMessage,
                                                                in_mStyle,
                                                                in_nonAtomicSelection,
                                                                in_isEndOfTemplateMark COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalDeclarationListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                         const GGS_sentLexicalAttributeListAST & inOperand1,
                                                         const GGS_lstring & inOperand2,
                                                         const GGS_lstring & inOperand3,
                                                         const GGS_bool & inOperand4,
                                                         const GGS_bool & inOperand5
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_terminalDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalDeclarationListAST::setter_append (const GGS_lstring inOperand0,
                                                    const GGS_sentLexicalAttributeListAST inOperand1,
                                                    const GGS_lstring inOperand2,
                                                    const GGS_lstring inOperand3,
                                                    const GGS_bool inOperand4,
                                                    const GGS_bool inOperand5,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_terminalDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalDeclarationListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                           const GGS_sentLexicalAttributeListAST inOperand1,
                                                           const GGS_lstring inOperand2,
                                                           const GGS_lstring inOperand3,
                                                           const GGS_bool inOperand4,
                                                           const GGS_bool inOperand5,
                                                           const GGS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_terminalDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalDeclarationListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                           GGS_sentLexicalAttributeListAST & outOperand1,
                                                           GGS_lstring & outOperand2,
                                                           GGS_lstring & outOperand3,
                                                           GGS_bool & outOperand4,
                                                           GGS_bool & outOperand5,
                                                           const GGS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;
  outOperand5.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
      outOperand0 = p->mObject.mProperty_mName ;
      outOperand1 = p->mObject.mProperty_mSentAttributeList ;
      outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
      outOperand3 = p->mObject.mProperty_mStyle ;
      outOperand4 = p->mObject.mProperty_nonAtomicSelection ;
      outOperand5 = p->mObject.mProperty_isEndOfTemplateMark ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalDeclarationListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                      GGS_sentLexicalAttributeListAST & outOperand1,
                                                      GGS_lstring & outOperand2,
                                                      GGS_lstring & outOperand3,
                                                      GGS_bool & outOperand4,
                                                      GGS_bool & outOperand5,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mSentAttributeList ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_mStyle ;
    outOperand4 = p->mObject.mProperty_nonAtomicSelection ;
    outOperand5 = p->mObject.mProperty_isEndOfTemplateMark ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalDeclarationListAST::setter_popLast (GGS_lstring & outOperand0,
                                                     GGS_sentLexicalAttributeListAST & outOperand1,
                                                     GGS_lstring & outOperand2,
                                                     GGS_lstring & outOperand3,
                                                     GGS_bool & outOperand4,
                                                     GGS_bool & outOperand5,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mSentAttributeList ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_mStyle ;
    outOperand4 = p->mObject.mProperty_nonAtomicSelection ;
    outOperand5 = p->mObject.mProperty_isEndOfTemplateMark ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalDeclarationListAST::method_first (GGS_lstring & outOperand0,
                                                   GGS_sentLexicalAttributeListAST & outOperand1,
                                                   GGS_lstring & outOperand2,
                                                   GGS_lstring & outOperand3,
                                                   GGS_bool & outOperand4,
                                                   GGS_bool & outOperand5,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mSentAttributeList ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_mStyle ;
    outOperand4 = p->mObject.mProperty_nonAtomicSelection ;
    outOperand5 = p->mObject.mProperty_isEndOfTemplateMark ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalDeclarationListAST::method_last (GGS_lstring & outOperand0,
                                                  GGS_sentLexicalAttributeListAST & outOperand1,
                                                  GGS_lstring & outOperand2,
                                                  GGS_lstring & outOperand3,
                                                  GGS_bool & outOperand4,
                                                  GGS_bool & outOperand5,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mSentAttributeList ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_mStyle ;
    outOperand4 = p->mObject.mProperty_nonAtomicSelection ;
    outOperand5 = p->mObject.mProperty_isEndOfTemplateMark ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationListAST GGS_terminalDeclarationListAST::add_operation (const GGS_terminalDeclarationListAST & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_terminalDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationListAST GGS_terminalDeclarationListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_terminalDeclarationListAST result = GGS_terminalDeclarationListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationListAST GGS_terminalDeclarationListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_terminalDeclarationListAST result = GGS_terminalDeclarationListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationListAST GGS_terminalDeclarationListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_terminalDeclarationListAST result = GGS_terminalDeclarationListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalDeclarationListAST::plusAssignOperation (const GGS_terminalDeclarationListAST inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalDeclarationListAST::setter_setMNameAtIndex (GGS_lstring inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_terminalDeclarationListAST::getter_mNameAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalDeclarationListAST::setter_setMSentAttributeListAtIndex (GGS_sentLexicalAttributeListAST inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSentAttributeList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_sentLexicalAttributeListAST GGS_terminalDeclarationListAST::getter_mSentAttributeListAtIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  GGS_sentLexicalAttributeListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    result = p->mObject.mProperty_mSentAttributeList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalDeclarationListAST::setter_setMSyntaxErrorMessageAtIndex (GGS_lstring inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSyntaxErrorMessage = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_terminalDeclarationListAST::getter_mSyntaxErrorMessageAtIndex (const GGS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    result = p->mObject.mProperty_mSyntaxErrorMessage ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalDeclarationListAST::setter_setMStyleAtIndex (GGS_lstring inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStyle = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_terminalDeclarationListAST::getter_mStyleAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    result = p->mObject.mProperty_mStyle ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalDeclarationListAST::setter_setNonAtomicSelectionAtIndex (GGS_bool inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_nonAtomicSelection = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_terminalDeclarationListAST::getter_nonAtomicSelectionAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    result = p->mObject.mProperty_nonAtomicSelection ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalDeclarationListAST::setter_setIsEndOfTemplateMarkAtIndex (GGS_bool inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_isEndOfTemplateMark = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_terminalDeclarationListAST::getter_isEndOfTemplateMarkAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    result = p->mObject.mProperty_isEndOfTemplateMark ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @terminalDeclarationListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_terminalDeclarationListAST::DownEnumerator_terminalDeclarationListAST (const GGS_terminalDeclarationListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationListAST_2E_element DownEnumerator_terminalDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_terminalDeclarationListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_sentLexicalAttributeListAST DownEnumerator_terminalDeclarationListAST::current_mSentAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mProperty_mSentAttributeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_terminalDeclarationListAST::current_mSyntaxErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mProperty_mSyntaxErrorMessage ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_terminalDeclarationListAST::current_mStyle (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mProperty_mStyle ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_terminalDeclarationListAST::current_nonAtomicSelection (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mProperty_nonAtomicSelection ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_terminalDeclarationListAST::current_isEndOfTemplateMark (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mProperty_isEndOfTemplateMark ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @terminalDeclarationListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_terminalDeclarationListAST::UpEnumerator_terminalDeclarationListAST (const GGS_terminalDeclarationListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationListAST_2E_element UpEnumerator_terminalDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_terminalDeclarationListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_sentLexicalAttributeListAST UpEnumerator_terminalDeclarationListAST::current_mSentAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mProperty_mSentAttributeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_terminalDeclarationListAST::current_mSyntaxErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mProperty_mSyntaxErrorMessage ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_terminalDeclarationListAST::current_mStyle (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mProperty_mStyle ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_terminalDeclarationListAST::current_nonAtomicSelection (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mProperty_nonAtomicSelection ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_terminalDeclarationListAST::current_isEndOfTemplateMark (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mProperty_isEndOfTemplateMark ;
}




//--------------------------------------------------------------------------------------------------
//     @terminalDeclarationListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalDeclarationListAST ("terminalDeclarationListAST",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_terminalDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalDeclarationListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalDeclarationListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationListAST GGS_terminalDeclarationListAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_terminalDeclarationListAST result ;
  const GGS_terminalDeclarationListAST * p = (const GGS_terminalDeclarationListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@lexicalMessageDeclarationListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalMessageDeclarationListAST : public cCollectionElement {
  public: GGS_lexicalMessageDeclarationListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_lexicalMessageDeclarationListAST (const GGS_lstring & in_mMessageName,
                                                               const GGS_lstring & in_mMessageValue
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalMessageDeclarationListAST (const GGS_lexicalMessageDeclarationListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalMessageDeclarationListAST::cCollectionElement_lexicalMessageDeclarationListAST (const GGS_lstring & in_mMessageName,
                                                                                                          const GGS_lstring & in_mMessageValue
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMessageName, in_mMessageValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalMessageDeclarationListAST::cCollectionElement_lexicalMessageDeclarationListAST (const GGS_lexicalMessageDeclarationListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mMessageName, inElement.mProperty_mMessageValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalMessageDeclarationListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalMessageDeclarationListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_lexicalMessageDeclarationListAST (mObject.mProperty_mMessageName, mObject.mProperty_mMessageValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalMessageDeclarationListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mMessageName" ":") ;
  mObject.mProperty_mMessageName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mMessageValue" ":") ;
  mObject.mProperty_mMessageValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageDeclarationListAST::GGS_lexicalMessageDeclarationListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageDeclarationListAST::GGS_lexicalMessageDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageDeclarationListAST GGS_lexicalMessageDeclarationListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_lexicalMessageDeclarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageDeclarationListAST GGS_lexicalMessageDeclarationListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_lexicalMessageDeclarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageDeclarationListAST::plusPlusAssignOperation (const GGS_lexicalMessageDeclarationListAST_2E_element & inValue
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalMessageDeclarationListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageDeclarationListAST GGS_lexicalMessageDeclarationListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                     const GGS_lstring & inOperand1
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_lexicalMessageDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_lexicalMessageDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_lexicalMessageDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GGS_lstring & in_mMessageName,
                                                                      const GGS_lstring & in_mMessageValue
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalMessageDeclarationListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalMessageDeclarationListAST (in_mMessageName,
                                                                      in_mMessageValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageDeclarationListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                               const GGS_lstring & inOperand1
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalMessageDeclarationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageDeclarationListAST::setter_append (const GGS_lstring inOperand0,
                                                          const GGS_lstring inOperand1,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalMessageDeclarationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageDeclarationListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                 const GGS_lstring inOperand1,
                                                                 const GGS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalMessageDeclarationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageDeclarationListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                 GGS_lstring & outOperand1,
                                                                 const GGS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
      outOperand0 = p->mObject.mProperty_mMessageName ;
      outOperand1 = p->mObject.mProperty_mMessageValue ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageDeclarationListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                            GGS_lstring & outOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mMessageName ;
    outOperand1 = p->mObject.mProperty_mMessageValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageDeclarationListAST::setter_popLast (GGS_lstring & outOperand0,
                                                           GGS_lstring & outOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mMessageName ;
    outOperand1 = p->mObject.mProperty_mMessageValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageDeclarationListAST::method_first (GGS_lstring & outOperand0,
                                                         GGS_lstring & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mMessageName ;
    outOperand1 = p->mObject.mProperty_mMessageValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageDeclarationListAST::method_last (GGS_lstring & outOperand0,
                                                        GGS_lstring & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mMessageName ;
    outOperand1 = p->mObject.mProperty_mMessageValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageDeclarationListAST GGS_lexicalMessageDeclarationListAST::add_operation (const GGS_lexicalMessageDeclarationListAST & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalMessageDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageDeclarationListAST GGS_lexicalMessageDeclarationListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lexicalMessageDeclarationListAST result = GGS_lexicalMessageDeclarationListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageDeclarationListAST GGS_lexicalMessageDeclarationListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lexicalMessageDeclarationListAST result = GGS_lexicalMessageDeclarationListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageDeclarationListAST GGS_lexicalMessageDeclarationListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lexicalMessageDeclarationListAST result = GGS_lexicalMessageDeclarationListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageDeclarationListAST::plusAssignOperation (const GGS_lexicalMessageDeclarationListAST inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageDeclarationListAST::setter_setMMessageNameAtIndex (GGS_lstring inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMessageName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalMessageDeclarationListAST::getter_mMessageNameAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    result = p->mObject.mProperty_mMessageName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageDeclarationListAST::setter_setMMessageValueAtIndex (GGS_lstring inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMessageValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalMessageDeclarationListAST::getter_mMessageValueAtIndex (const GGS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    result = p->mObject.mProperty_mMessageValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @lexicalMessageDeclarationListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalMessageDeclarationListAST::DownEnumerator_lexicalMessageDeclarationListAST (const GGS_lexicalMessageDeclarationListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageDeclarationListAST_2E_element DownEnumerator_lexicalMessageDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalMessageDeclarationListAST * p = (const cCollectionElement_lexicalMessageDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalMessageDeclarationListAST::current_mMessageName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalMessageDeclarationListAST * p = (const cCollectionElement_lexicalMessageDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return p->mObject.mProperty_mMessageName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalMessageDeclarationListAST::current_mMessageValue (LOCATION_ARGS) const {
  const cCollectionElement_lexicalMessageDeclarationListAST * p = (const cCollectionElement_lexicalMessageDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return p->mObject.mProperty_mMessageValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @lexicalMessageDeclarationListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalMessageDeclarationListAST::UpEnumerator_lexicalMessageDeclarationListAST (const GGS_lexicalMessageDeclarationListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageDeclarationListAST_2E_element UpEnumerator_lexicalMessageDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalMessageDeclarationListAST * p = (const cCollectionElement_lexicalMessageDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalMessageDeclarationListAST::current_mMessageName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalMessageDeclarationListAST * p = (const cCollectionElement_lexicalMessageDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return p->mObject.mProperty_mMessageName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalMessageDeclarationListAST::current_mMessageValue (LOCATION_ARGS) const {
  const cCollectionElement_lexicalMessageDeclarationListAST * p = (const cCollectionElement_lexicalMessageDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return p->mObject.mProperty_mMessageValue ;
}




//--------------------------------------------------------------------------------------------------
//     @lexicalMessageDeclarationListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST ("lexicalMessageDeclarationListAST",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalMessageDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalMessageDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalMessageDeclarationListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageDeclarationListAST GGS_lexicalMessageDeclarationListAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalMessageDeclarationListAST result ;
  const GGS_lexicalMessageDeclarationListAST * p = (const GGS_lexicalMessageDeclarationListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalMessageDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalMessageDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@lexicalListDeclarationListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalListDeclarationListAST : public cCollectionElement {
  public: GGS_lexicalListDeclarationListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_lexicalListDeclarationListAST (const GGS_lstring & in_mName,
                                                            const GGS_lstring & in_mStyle,
                                                            const GGS_lstring & in_mSyntaxErrorMessage,
                                                            const GGS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                            const GGS_lexicalListEntryListAST & in_mEntryList
                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalListDeclarationListAST (const GGS_lexicalListDeclarationListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalListDeclarationListAST::cCollectionElement_lexicalListDeclarationListAST (const GGS_lstring & in_mName,
                                                                                                    const GGS_lstring & in_mStyle,
                                                                                                    const GGS_lstring & in_mSyntaxErrorMessage,
                                                                                                    const GGS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                                                                    const GGS_lexicalListEntryListAST & in_mEntryList
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mStyle, in_mSyntaxErrorMessage, in_mSentAttributeList, in_mEntryList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalListDeclarationListAST::cCollectionElement_lexicalListDeclarationListAST (const GGS_lexicalListDeclarationListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mName, inElement.mProperty_mStyle, inElement.mProperty_mSyntaxErrorMessage, inElement.mProperty_mSentAttributeList, inElement.mProperty_mEntryList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalListDeclarationListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalListDeclarationListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_lexicalListDeclarationListAST (mObject.mProperty_mName, mObject.mProperty_mStyle, mObject.mProperty_mSyntaxErrorMessage, mObject.mProperty_mSentAttributeList, mObject.mProperty_mEntryList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalListDeclarationListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mName" ":") ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mStyle" ":") ;
  mObject.mProperty_mStyle.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSyntaxErrorMessage" ":") ;
  mObject.mProperty_mSyntaxErrorMessage.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSentAttributeList" ":") ;
  mObject.mProperty_mSentAttributeList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEntryList" ":") ;
  mObject.mProperty_mEntryList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationListAST::GGS_lexicalListDeclarationListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationListAST::GGS_lexicalListDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationListAST GGS_lexicalListDeclarationListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_lexicalListDeclarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationListAST GGS_lexicalListDeclarationListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_lexicalListDeclarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListDeclarationListAST::plusPlusAssignOperation (const GGS_lexicalListDeclarationListAST_2E_element & inValue
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalListDeclarationListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationListAST GGS_lexicalListDeclarationListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                               const GGS_lstring & inOperand1,
                                                                                               const GGS_lstring & inOperand2,
                                                                                               const GGS_sentLexicalAttributeListAST & inOperand3,
                                                                                               const GGS_lexicalListEntryListAST & inOperand4
                                                                                               COMMA_LOCATION_ARGS) {
  GGS_lexicalListDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GGS_lexicalListDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_lexicalListDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GGS_lstring & in_mName,
                                                                   const GGS_lstring & in_mStyle,
                                                                   const GGS_lstring & in_mSyntaxErrorMessage,
                                                                   const GGS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                                   const GGS_lexicalListEntryListAST & in_mEntryList
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListDeclarationListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalListDeclarationListAST (in_mName,
                                                                   in_mStyle,
                                                                   in_mSyntaxErrorMessage,
                                                                   in_mSentAttributeList,
                                                                   in_mEntryList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListDeclarationListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                            const GGS_lstring & inOperand1,
                                                            const GGS_lstring & inOperand2,
                                                            const GGS_sentLexicalAttributeListAST & inOperand3,
                                                            const GGS_lexicalListEntryListAST & inOperand4
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalListDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListDeclarationListAST::setter_append (const GGS_lstring inOperand0,
                                                       const GGS_lstring inOperand1,
                                                       const GGS_lstring inOperand2,
                                                       const GGS_sentLexicalAttributeListAST inOperand3,
                                                       const GGS_lexicalListEntryListAST inOperand4,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalListDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListDeclarationListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                              const GGS_lstring inOperand1,
                                                              const GGS_lstring inOperand2,
                                                              const GGS_sentLexicalAttributeListAST inOperand3,
                                                              const GGS_lexicalListEntryListAST inOperand4,
                                                              const GGS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalListDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListDeclarationListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                              GGS_lstring & outOperand1,
                                                              GGS_lstring & outOperand2,
                                                              GGS_sentLexicalAttributeListAST & outOperand3,
                                                              GGS_lexicalListEntryListAST & outOperand4,
                                                              const GGS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
      outOperand0 = p->mObject.mProperty_mName ;
      outOperand1 = p->mObject.mProperty_mStyle ;
      outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
      outOperand3 = p->mObject.mProperty_mSentAttributeList ;
      outOperand4 = p->mObject.mProperty_mEntryList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListDeclarationListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                         GGS_lstring & outOperand1,
                                                         GGS_lstring & outOperand2,
                                                         GGS_sentLexicalAttributeListAST & outOperand3,
                                                         GGS_lexicalListEntryListAST & outOperand4,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mStyle ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_mSentAttributeList ;
    outOperand4 = p->mObject.mProperty_mEntryList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListDeclarationListAST::setter_popLast (GGS_lstring & outOperand0,
                                                        GGS_lstring & outOperand1,
                                                        GGS_lstring & outOperand2,
                                                        GGS_sentLexicalAttributeListAST & outOperand3,
                                                        GGS_lexicalListEntryListAST & outOperand4,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mStyle ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_mSentAttributeList ;
    outOperand4 = p->mObject.mProperty_mEntryList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListDeclarationListAST::method_first (GGS_lstring & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      GGS_lstring & outOperand2,
                                                      GGS_sentLexicalAttributeListAST & outOperand3,
                                                      GGS_lexicalListEntryListAST & outOperand4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mStyle ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_mSentAttributeList ;
    outOperand4 = p->mObject.mProperty_mEntryList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListDeclarationListAST::method_last (GGS_lstring & outOperand0,
                                                     GGS_lstring & outOperand1,
                                                     GGS_lstring & outOperand2,
                                                     GGS_sentLexicalAttributeListAST & outOperand3,
                                                     GGS_lexicalListEntryListAST & outOperand4,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mStyle ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_mSentAttributeList ;
    outOperand4 = p->mObject.mProperty_mEntryList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationListAST GGS_lexicalListDeclarationListAST::add_operation (const GGS_lexicalListDeclarationListAST & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalListDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationListAST GGS_lexicalListDeclarationListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_lexicalListDeclarationListAST result = GGS_lexicalListDeclarationListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationListAST GGS_lexicalListDeclarationListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_lexicalListDeclarationListAST result = GGS_lexicalListDeclarationListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationListAST GGS_lexicalListDeclarationListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lexicalListDeclarationListAST result = GGS_lexicalListDeclarationListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListDeclarationListAST::plusAssignOperation (const GGS_lexicalListDeclarationListAST inOperand,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListDeclarationListAST::setter_setMNameAtIndex (GGS_lstring inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalListDeclarationListAST::getter_mNameAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListDeclarationListAST::setter_setMStyleAtIndex (GGS_lstring inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStyle = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalListDeclarationListAST::getter_mStyleAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    result = p->mObject.mProperty_mStyle ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListDeclarationListAST::setter_setMSyntaxErrorMessageAtIndex (GGS_lstring inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSyntaxErrorMessage = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalListDeclarationListAST::getter_mSyntaxErrorMessageAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    result = p->mObject.mProperty_mSyntaxErrorMessage ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListDeclarationListAST::setter_setMSentAttributeListAtIndex (GGS_sentLexicalAttributeListAST inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSentAttributeList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_sentLexicalAttributeListAST GGS_lexicalListDeclarationListAST::getter_mSentAttributeListAtIndex (const GGS_uint & inIndex,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  GGS_sentLexicalAttributeListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    result = p->mObject.mProperty_mSentAttributeList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListDeclarationListAST::setter_setMEntryListAtIndex (GGS_lexicalListEntryListAST inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEntryList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListEntryListAST GGS_lexicalListDeclarationListAST::getter_mEntryListAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  GGS_lexicalListEntryListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    result = p->mObject.mProperty_mEntryList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @lexicalListDeclarationListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalListDeclarationListAST::DownEnumerator_lexicalListDeclarationListAST (const GGS_lexicalListDeclarationListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationListAST_2E_element DownEnumerator_lexicalListDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalListDeclarationListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalListDeclarationListAST::current_mStyle (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mProperty_mStyle ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_lexicalListDeclarationListAST::current_mSyntaxErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mProperty_mSyntaxErrorMessage ;
}

//--------------------------------------------------------------------------------------------------

GGS_sentLexicalAttributeListAST DownEnumerator_lexicalListDeclarationListAST::current_mSentAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mProperty_mSentAttributeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListEntryListAST DownEnumerator_lexicalListDeclarationListAST::current_mEntryList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mProperty_mEntryList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @lexicalListDeclarationListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalListDeclarationListAST::UpEnumerator_lexicalListDeclarationListAST (const GGS_lexicalListDeclarationListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationListAST_2E_element UpEnumerator_lexicalListDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalListDeclarationListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalListDeclarationListAST::current_mStyle (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mProperty_mStyle ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_lexicalListDeclarationListAST::current_mSyntaxErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mProperty_mSyntaxErrorMessage ;
}

//--------------------------------------------------------------------------------------------------

GGS_sentLexicalAttributeListAST UpEnumerator_lexicalListDeclarationListAST::current_mSentAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mProperty_mSentAttributeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListEntryListAST UpEnumerator_lexicalListDeclarationListAST::current_mEntryList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mProperty_mEntryList ;
}




//--------------------------------------------------------------------------------------------------
//     @lexicalListDeclarationListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalListDeclarationListAST ("lexicalListDeclarationListAST",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalListDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalListDeclarationListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalListDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalListDeclarationListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationListAST GGS_lexicalListDeclarationListAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_lexicalListDeclarationListAST result ;
  const GGS_lexicalListDeclarationListAST * p = (const GGS_lexicalListDeclarationListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalListDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalListDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@lexicalRuleListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalRuleListAST : public cCollectionElement {
  public: GGS_lexicalRuleListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_lexicalRuleListAST (const GGS_abstractLexicalRuleAST & in_mLexicalRule
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalRuleListAST (const GGS_lexicalRuleListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalRuleListAST::cCollectionElement_lexicalRuleListAST (const GGS_abstractLexicalRuleAST & in_mLexicalRule
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalRule) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalRuleListAST::cCollectionElement_lexicalRuleListAST (const GGS_lexicalRuleListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLexicalRule) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalRuleListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalRuleListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_lexicalRuleListAST (mObject.mProperty_mLexicalRule COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalRuleListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalRule" ":") ;
  mObject.mProperty_mLexicalRule.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST::GGS_lexicalRuleListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST::GGS_lexicalRuleListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST GGS_lexicalRuleListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_lexicalRuleListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST GGS_lexicalRuleListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_lexicalRuleListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRuleListAST::plusPlusAssignOperation (const GGS_lexicalRuleListAST_2E_element & inValue
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalRuleListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST GGS_lexicalRuleListAST::class_func_listWithValue (const GGS_abstractLexicalRuleAST & inOperand0
                                                                         COMMA_LOCATION_ARGS) {
  GGS_lexicalRuleListAST result ;
  if (inOperand0.isValid ()) {
    result = GGS_lexicalRuleListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_lexicalRuleListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRuleListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GGS_abstractLexicalRuleAST & in_mLexicalRule
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRuleListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalRuleListAST (in_mLexicalRule COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRuleListAST::addAssignOperation (const GGS_abstractLexicalRuleAST & inOperand0
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalRuleListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRuleListAST::setter_append (const GGS_abstractLexicalRuleAST inOperand0,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalRuleListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRuleListAST::setter_insertAtIndex (const GGS_abstractLexicalRuleAST inOperand0,
                                                   const GGS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalRuleListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRuleListAST::setter_removeAtIndex (GGS_abstractLexicalRuleAST & outOperand0,
                                                   const GGS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
      outOperand0 = p->mObject.mProperty_mLexicalRule ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRuleListAST::setter_popFirst (GGS_abstractLexicalRuleAST & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
    outOperand0 = p->mObject.mProperty_mLexicalRule ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRuleListAST::setter_popLast (GGS_abstractLexicalRuleAST & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
    outOperand0 = p->mObject.mProperty_mLexicalRule ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRuleListAST::method_first (GGS_abstractLexicalRuleAST & outOperand0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
    outOperand0 = p->mObject.mProperty_mLexicalRule ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRuleListAST::method_last (GGS_abstractLexicalRuleAST & outOperand0,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
    outOperand0 = p->mObject.mProperty_mLexicalRule ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST GGS_lexicalRuleListAST::add_operation (const GGS_lexicalRuleListAST & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalRuleListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST GGS_lexicalRuleListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_lexicalRuleListAST result = GGS_lexicalRuleListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST GGS_lexicalRuleListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_lexicalRuleListAST result = GGS_lexicalRuleListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST GGS_lexicalRuleListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lexicalRuleListAST result = GGS_lexicalRuleListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRuleListAST::plusAssignOperation (const GGS_lexicalRuleListAST inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRuleListAST::setter_setMLexicalRuleAtIndex (GGS_abstractLexicalRuleAST inOperand,
                                                            GGS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexicalRule = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRuleAST GGS_lexicalRuleListAST::getter_mLexicalRuleAtIndex (const GGS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
  GGS_abstractLexicalRuleAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
    result = p->mObject.mProperty_mLexicalRule ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @lexicalRuleListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalRuleListAST::DownEnumerator_lexicalRuleListAST (const GGS_lexicalRuleListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST_2E_element DownEnumerator_lexicalRuleListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRuleListAST * p = (const cCollectionElement_lexicalRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRuleAST DownEnumerator_lexicalRuleListAST::current_mLexicalRule (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRuleListAST * p = (const cCollectionElement_lexicalRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
  return p->mObject.mProperty_mLexicalRule ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @lexicalRuleListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalRuleListAST::UpEnumerator_lexicalRuleListAST (const GGS_lexicalRuleListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST_2E_element UpEnumerator_lexicalRuleListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRuleListAST * p = (const cCollectionElement_lexicalRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRuleAST UpEnumerator_lexicalRuleListAST::current_mLexicalRule (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRuleListAST * p = (const cCollectionElement_lexicalRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
  return p->mObject.mProperty_mLexicalRule ;
}




//--------------------------------------------------------------------------------------------------
//     @lexicalRuleListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRuleListAST ("lexicalRuleListAST",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalRuleListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRuleListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRuleListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRuleListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRuleListAST GGS_lexicalRuleListAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_lexicalRuleListAST result ;
  const GGS_lexicalRuleListAST * p = (const GGS_lexicalRuleListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRuleListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRuleListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@indexingListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_indexingListAST : public cCollectionElement {
  public: GGS_indexingListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_indexingListAST (const GGS_lstring & in_mIndexName,
                                              const GGS_lstring & in_mIndexComment
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_indexingListAST (const GGS_indexingListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_indexingListAST::cCollectionElement_indexingListAST (const GGS_lstring & in_mIndexName,
                                                                        const GGS_lstring & in_mIndexComment
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mIndexName, in_mIndexComment) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_indexingListAST::cCollectionElement_indexingListAST (const GGS_indexingListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mIndexName, inElement.mProperty_mIndexComment) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_indexingListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_indexingListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_indexingListAST (mObject.mProperty_mIndexName, mObject.mProperty_mIndexComment COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_indexingListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIndexName" ":") ;
  mObject.mProperty_mIndexName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIndexComment" ":") ;
  mObject.mProperty_mIndexComment.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_indexingListAST::GGS_indexingListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_indexingListAST::GGS_indexingListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_indexingListAST GGS_indexingListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_indexingListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_indexingListAST GGS_indexingListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_indexingListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_indexingListAST::plusPlusAssignOperation (const GGS_indexingListAST_2E_element & inValue
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_indexingListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_indexingListAST GGS_indexingListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                   const GGS_lstring & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  GGS_indexingListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_indexingListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_indexingListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_indexingListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GGS_lstring & in_mIndexName,
                                                     const GGS_lstring & in_mIndexComment
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_indexingListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_indexingListAST (in_mIndexName,
                                                     in_mIndexComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_indexingListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                              const GGS_lstring & inOperand1
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_indexingListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_indexingListAST::setter_append (const GGS_lstring inOperand0,
                                         const GGS_lstring inOperand1,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_indexingListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_indexingListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                const GGS_lstring inOperand1,
                                                const GGS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_indexingListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_indexingListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                const GGS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_indexingListAST * p = (cCollectionElement_indexingListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
      outOperand0 = p->mObject.mProperty_mIndexName ;
      outOperand1 = p->mObject.mProperty_mIndexComment ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_indexingListAST::setter_popFirst (GGS_lstring & outOperand0,
                                           GGS_lstring & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_indexingListAST * p = (cCollectionElement_indexingListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
    outOperand0 = p->mObject.mProperty_mIndexName ;
    outOperand1 = p->mObject.mProperty_mIndexComment ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_indexingListAST::setter_popLast (GGS_lstring & outOperand0,
                                          GGS_lstring & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_indexingListAST * p = (cCollectionElement_indexingListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
    outOperand0 = p->mObject.mProperty_mIndexName ;
    outOperand1 = p->mObject.mProperty_mIndexComment ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_indexingListAST::method_first (GGS_lstring & outOperand0,
                                        GGS_lstring & outOperand1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_indexingListAST * p = (cCollectionElement_indexingListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
    outOperand0 = p->mObject.mProperty_mIndexName ;
    outOperand1 = p->mObject.mProperty_mIndexComment ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_indexingListAST::method_last (GGS_lstring & outOperand0,
                                       GGS_lstring & outOperand1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_indexingListAST * p = (cCollectionElement_indexingListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
    outOperand0 = p->mObject.mProperty_mIndexName ;
    outOperand1 = p->mObject.mProperty_mIndexComment ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_indexingListAST GGS_indexingListAST::add_operation (const GGS_indexingListAST & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_indexingListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_indexingListAST GGS_indexingListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_indexingListAST result = GGS_indexingListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_indexingListAST GGS_indexingListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_indexingListAST result = GGS_indexingListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_indexingListAST GGS_indexingListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_indexingListAST result = GGS_indexingListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_indexingListAST::plusAssignOperation (const GGS_indexingListAST inOperand,
                                               Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_indexingListAST::setter_setMIndexNameAtIndex (GGS_lstring inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_indexingListAST * p = (cCollectionElement_indexingListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIndexName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_indexingListAST::getter_mIndexNameAtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_indexingListAST * p = (cCollectionElement_indexingListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
    result = p->mObject.mProperty_mIndexName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_indexingListAST::setter_setMIndexCommentAtIndex (GGS_lstring inOperand,
                                                          GGS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_indexingListAST * p = (cCollectionElement_indexingListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIndexComment = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_indexingListAST::getter_mIndexCommentAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_indexingListAST * p = (cCollectionElement_indexingListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
    result = p->mObject.mProperty_mIndexComment ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @indexingListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_indexingListAST::DownEnumerator_indexingListAST (const GGS_indexingListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_indexingListAST_2E_element DownEnumerator_indexingListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_indexingListAST * p = (const cCollectionElement_indexingListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_indexingListAST::current_mIndexName (LOCATION_ARGS) const {
  const cCollectionElement_indexingListAST * p = (const cCollectionElement_indexingListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
  return p->mObject.mProperty_mIndexName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_indexingListAST::current_mIndexComment (LOCATION_ARGS) const {
  const cCollectionElement_indexingListAST * p = (const cCollectionElement_indexingListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
  return p->mObject.mProperty_mIndexComment ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @indexingListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_indexingListAST::UpEnumerator_indexingListAST (const GGS_indexingListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_indexingListAST_2E_element UpEnumerator_indexingListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_indexingListAST * p = (const cCollectionElement_indexingListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_indexingListAST::current_mIndexName (LOCATION_ARGS) const {
  const cCollectionElement_indexingListAST * p = (const cCollectionElement_indexingListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
  return p->mObject.mProperty_mIndexName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_indexingListAST::current_mIndexComment (LOCATION_ARGS) const {
  const cCollectionElement_indexingListAST * p = (const cCollectionElement_indexingListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
  return p->mObject.mProperty_mIndexComment ;
}




//--------------------------------------------------------------------------------------------------
//     @indexingListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_indexingListAST ("indexingListAST",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_indexingListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_indexingListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_indexingListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_indexingListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_indexingListAST GGS_indexingListAST::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_indexingListAST result ;
  const GGS_indexingListAST * p = (const GGS_indexingListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_indexingListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("indexingListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticDeclarationAST_2E_weak::objectCompare (const GGS_semanticDeclarationAST_2E_weak & inOperand) const {
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

GGS_semanticDeclarationAST_2E_weak::GGS_semanticDeclarationAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationAST_2E_weak & GGS_semanticDeclarationAST_2E_weak::operator = (const GGS_semanticDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationAST_2E_weak::GGS_semanticDeclarationAST_2E_weak (const GGS_semanticDeclarationAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationAST_2E_weak GGS_semanticDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_semanticDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationAST GGS_semanticDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_semanticDeclarationAST result ;
  if (isValid ()) {
    const cPtr_semanticDeclarationAST * p = (cPtr_semanticDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_semanticDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationAST GGS_semanticDeclarationAST_2E_weak::bang_semanticDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_semanticDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticDeclarationAST) ;
      result = GGS_semanticDeclarationAST ((cPtr_semanticDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak ("semanticDeclarationAST.weak",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationAST_2E_weak GGS_semanticDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_semanticDeclarationAST_2E_weak result ;
  const GGS_semanticDeclarationAST_2E_weak * p = (const GGS_semanticDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateLexiqueComponentAST_2E_weak::objectCompare (const GGS_templateLexiqueComponentAST_2E_weak & inOperand) const {
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

GGS_templateLexiqueComponentAST_2E_weak::GGS_templateLexiqueComponentAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateLexiqueComponentAST_2E_weak & GGS_templateLexiqueComponentAST_2E_weak::operator = (const GGS_templateLexiqueComponentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLexiqueComponentAST_2E_weak::GGS_templateLexiqueComponentAST_2E_weak (const GGS_templateLexiqueComponentAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateLexiqueComponentAST_2E_weak GGS_templateLexiqueComponentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateLexiqueComponentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLexiqueComponentAST GGS_templateLexiqueComponentAST_2E_weak::unwrappedValue (void) const {
  GGS_templateLexiqueComponentAST result ;
  if (isValid ()) {
    const cPtr_templateLexiqueComponentAST * p = (cPtr_templateLexiqueComponentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateLexiqueComponentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLexiqueComponentAST GGS_templateLexiqueComponentAST_2E_weak::bang_templateLexiqueComponentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateLexiqueComponentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateLexiqueComponentAST) ;
      result = GGS_templateLexiqueComponentAST ((cPtr_templateLexiqueComponentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateLexiqueComponentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateLexiqueComponentAST_2E_weak ("templateLexiqueComponentAST.weak",
                                                                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_templateLexiqueComponentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLexiqueComponentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateLexiqueComponentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateLexiqueComponentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLexiqueComponentAST_2E_weak GGS_templateLexiqueComponentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_templateLexiqueComponentAST_2E_weak result ;
  const GGS_templateLexiqueComponentAST_2E_weak * p = (const GGS_templateLexiqueComponentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateLexiqueComponentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLexiqueComponentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalExpressionAST::objectCompare (const GGS_lexicalExpressionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST::GGS_lexicalExpressionAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_lexicalExpressionAST::
lexicalExpressionAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST::GGS_lexicalExpressionAST (const cPtr_lexicalExpressionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalExpressionAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_lexicalExpressionAST::cPtr_lexicalExpressionAST (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalExpressionAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExpressionAST ("lexicalExpressionAST",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST GGS_lexicalExpressionAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_lexicalExpressionAST result ;
  const GGS_lexicalExpressionAST * p = (const GGS_lexicalExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalExpressionAST_2E_weak::objectCompare (const GGS_lexicalExpressionAST_2E_weak & inOperand) const {
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

GGS_lexicalExpressionAST_2E_weak::GGS_lexicalExpressionAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST_2E_weak & GGS_lexicalExpressionAST_2E_weak::operator = (const GGS_lexicalExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST_2E_weak::GGS_lexicalExpressionAST_2E_weak (const GGS_lexicalExpressionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST_2E_weak GGS_lexicalExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST GGS_lexicalExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalExpressionAST result ;
  if (isValid ()) {
    const cPtr_lexicalExpressionAST * p = (cPtr_lexicalExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST GGS_lexicalExpressionAST_2E_weak::bang_lexicalExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalExpressionAST) ;
      result = GGS_lexicalExpressionAST ((cPtr_lexicalExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExpressionAST_2E_weak ("lexicalExpressionAST.weak",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST_2E_weak GGS_lexicalExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_lexicalExpressionAST_2E_weak result ;
  const GGS_lexicalExpressionAST_2E_weak * p = (const GGS_lexicalExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalInstructionAST::objectCompare (const GGS_lexicalInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionAST::GGS_lexicalInstructionAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_lexicalInstructionAST::
lexicalInstructionAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionAST::GGS_lexicalInstructionAST (const cPtr_lexicalInstructionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalInstructionAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_lexicalInstructionAST::cPtr_lexicalInstructionAST (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalInstructionAST ("lexicalInstructionAST",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionAST GGS_lexicalInstructionAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_lexicalInstructionAST result ;
  const GGS_lexicalInstructionAST * p = (const GGS_lexicalInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalInstructionAST_2E_weak::objectCompare (const GGS_lexicalInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalInstructionAST_2E_weak::GGS_lexicalInstructionAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionAST_2E_weak & GGS_lexicalInstructionAST_2E_weak::operator = (const GGS_lexicalInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionAST_2E_weak::GGS_lexicalInstructionAST_2E_weak (const GGS_lexicalInstructionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionAST_2E_weak GGS_lexicalInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionAST GGS_lexicalInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalInstructionAST * p = (cPtr_lexicalInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionAST GGS_lexicalInstructionAST_2E_weak::bang_lexicalInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalInstructionAST) ;
      result = GGS_lexicalInstructionAST ((cPtr_lexicalInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak ("lexicalInstructionAST.weak",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionAST_2E_weak GGS_lexicalInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_lexicalInstructionAST_2E_weak result ;
  const GGS_lexicalInstructionAST_2E_weak * p = (const GGS_lexicalInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@lexicalInstructionListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalInstructionListAST : public cCollectionElement {
  public: GGS_lexicalInstructionListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_lexicalInstructionListAST (const GGS_lexicalInstructionAST & in_mInstruction
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalInstructionListAST (const GGS_lexicalInstructionListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalInstructionListAST::cCollectionElement_lexicalInstructionListAST (const GGS_lexicalInstructionAST & in_mInstruction
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalInstructionListAST::cCollectionElement_lexicalInstructionListAST (const GGS_lexicalInstructionListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalInstructionListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalInstructionListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_lexicalInstructionListAST (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalInstructionListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstruction" ":") ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST::GGS_lexicalInstructionListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST::GGS_lexicalInstructionListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST GGS_lexicalInstructionListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_lexicalInstructionListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST GGS_lexicalInstructionListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_lexicalInstructionListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST::plusPlusAssignOperation (const GGS_lexicalInstructionListAST_2E_element & inValue
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalInstructionListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST GGS_lexicalInstructionListAST::class_func_listWithValue (const GGS_lexicalInstructionAST & inOperand0
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_lexicalInstructionListAST result ;
  if (inOperand0.isValid ()) {
    result = GGS_lexicalInstructionListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_lexicalInstructionListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GGS_lexicalInstructionAST & in_mInstruction
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalInstructionListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalInstructionListAST (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST::addAssignOperation (const GGS_lexicalInstructionAST & inOperand0
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalInstructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST::setter_append (const GGS_lexicalInstructionAST inOperand0,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalInstructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST::setter_insertAtIndex (const GGS_lexicalInstructionAST inOperand0,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalInstructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST::setter_removeAtIndex (GGS_lexicalInstructionAST & outOperand0,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
      outOperand0 = p->mObject.mProperty_mInstruction ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST::setter_popFirst (GGS_lexicalInstructionAST & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST::setter_popLast (GGS_lexicalInstructionAST & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST::method_first (GGS_lexicalInstructionAST & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST::method_last (GGS_lexicalInstructionAST & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST GGS_lexicalInstructionListAST::add_operation (const GGS_lexicalInstructionListAST & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lexicalInstructionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST GGS_lexicalInstructionListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lexicalInstructionListAST result = GGS_lexicalInstructionListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST GGS_lexicalInstructionListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lexicalInstructionListAST result = GGS_lexicalInstructionListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST GGS_lexicalInstructionListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lexicalInstructionListAST result = GGS_lexicalInstructionListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST::plusAssignOperation (const GGS_lexicalInstructionListAST inOperand,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalInstructionListAST::setter_setMInstructionAtIndex (GGS_lexicalInstructionAST inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionAST GGS_lexicalInstructionListAST::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
  GGS_lexicalInstructionAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @lexicalInstructionListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_lexicalInstructionListAST::DownEnumerator_lexicalInstructionListAST (const GGS_lexicalInstructionListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST_2E_element DownEnumerator_lexicalInstructionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalInstructionListAST * p = (const cCollectionElement_lexicalInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionAST DownEnumerator_lexicalInstructionListAST::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_lexicalInstructionListAST * p = (const cCollectionElement_lexicalInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
  return p->mObject.mProperty_mInstruction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @lexicalInstructionListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_lexicalInstructionListAST::UpEnumerator_lexicalInstructionListAST (const GGS_lexicalInstructionListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST_2E_element UpEnumerator_lexicalInstructionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalInstructionListAST * p = (const cCollectionElement_lexicalInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionAST UpEnumerator_lexicalInstructionListAST::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_lexicalInstructionListAST * p = (const cCollectionElement_lexicalInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
  return p->mObject.mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//     @lexicalInstructionListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalInstructionListAST ("lexicalInstructionListAST",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalInstructionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalInstructionListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalInstructionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalInstructionListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST GGS_lexicalInstructionListAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_lexicalInstructionListAST result ;
  const GGS_lexicalInstructionListAST * p = (const GGS_lexicalInstructionListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalInstructionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalInstructionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractLexicalRuleAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractLexicalRuleAST::objectCompare (const GGS_abstractLexicalRuleAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRuleAST::GGS_abstractLexicalRuleAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractLexicalRuleAST::
abstractLexicalRuleAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRuleAST::GGS_abstractLexicalRuleAST (const cPtr_abstractLexicalRuleAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractLexicalRuleAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractLexicalRuleAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractLexicalRuleAST::cPtr_abstractLexicalRuleAST (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractLexicalRuleAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractLexicalRuleAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractLexicalRuleAST ("abstractLexicalRuleAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractLexicalRuleAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLexicalRuleAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractLexicalRuleAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractLexicalRuleAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRuleAST GGS_abstractLexicalRuleAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_abstractLexicalRuleAST result ;
  const GGS_abstractLexicalRuleAST * p = (const GGS_abstractLexicalRuleAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractLexicalRuleAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractLexicalRuleAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractLexicalRuleAST_2E_weak::objectCompare (const GGS_abstractLexicalRuleAST_2E_weak & inOperand) const {
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

GGS_abstractLexicalRuleAST_2E_weak::GGS_abstractLexicalRuleAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRuleAST_2E_weak & GGS_abstractLexicalRuleAST_2E_weak::operator = (const GGS_abstractLexicalRuleAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRuleAST_2E_weak::GGS_abstractLexicalRuleAST_2E_weak (const GGS_abstractLexicalRuleAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRuleAST_2E_weak GGS_abstractLexicalRuleAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractLexicalRuleAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRuleAST GGS_abstractLexicalRuleAST_2E_weak::unwrappedValue (void) const {
  GGS_abstractLexicalRuleAST result ;
  if (isValid ()) {
    const cPtr_abstractLexicalRuleAST * p = (cPtr_abstractLexicalRuleAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractLexicalRuleAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRuleAST GGS_abstractLexicalRuleAST_2E_weak::bang_abstractLexicalRuleAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractLexicalRuleAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractLexicalRuleAST) ;
      result = GGS_abstractLexicalRuleAST ((cPtr_abstractLexicalRuleAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractLexicalRuleAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractLexicalRuleAST_2E_weak ("abstractLexicalRuleAST.weak",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractLexicalRuleAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLexicalRuleAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractLexicalRuleAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractLexicalRuleAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRuleAST_2E_weak GGS_abstractLexicalRuleAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_abstractLexicalRuleAST_2E_weak result ;
  const GGS_abstractLexicalRuleAST_2E_weak * p = (const GGS_abstractLexicalRuleAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractLexicalRuleAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractLexicalRuleAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalRuleListAST useLoopLocalVar'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_useLoopLocalVar (const GGS_lexicalRuleListAST & inObject,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
  const GGS_lexicalRuleListAST temp_0 = inObject ;
  UpEnumerator_lexicalRuleListAST enumerator_2838 (temp_0) ;
  bool bool_1 = result_result.operator_not (SOURCE_FILE ("lexiqueTypesForAST.galgas", 73)).isValidAndTrue () ;
  if (enumerator_2838.hasCurrentObject () && bool_1) {
    while (enumerator_2838.hasCurrentObject () && bool_1) {
      result_result = callExtensionGetter_lexicalRuleUsesLoopLocalVar ((const cPtr_abstractLexicalRuleAST *) enumerator_2838.current_mLexicalRule (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas", 74)) ;
      enumerator_2838.gotoNextObject () ;
      if (enumerator_2838.hasCurrentObject ()) {
        bool_1 = result_result.operator_not (SOURCE_FILE ("lexiqueTypesForAST.galgas", 73)).isValidAndTrue () ;
      }
    }
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalImplicitRuleAST_2E_weak::objectCompare (const GGS_lexicalImplicitRuleAST_2E_weak & inOperand) const {
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

GGS_lexicalImplicitRuleAST_2E_weak::GGS_lexicalImplicitRuleAST_2E_weak (void) :
GGS_abstractLexicalRuleAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalImplicitRuleAST_2E_weak & GGS_lexicalImplicitRuleAST_2E_weak::operator = (const GGS_lexicalImplicitRuleAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalImplicitRuleAST_2E_weak::GGS_lexicalImplicitRuleAST_2E_weak (const GGS_lexicalImplicitRuleAST & inSource) :
GGS_abstractLexicalRuleAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalImplicitRuleAST_2E_weak GGS_lexicalImplicitRuleAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalImplicitRuleAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalImplicitRuleAST GGS_lexicalImplicitRuleAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalImplicitRuleAST result ;
  if (isValid ()) {
    const cPtr_lexicalImplicitRuleAST * p = (cPtr_lexicalImplicitRuleAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalImplicitRuleAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalImplicitRuleAST GGS_lexicalImplicitRuleAST_2E_weak::bang_lexicalImplicitRuleAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalImplicitRuleAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalImplicitRuleAST) ;
      result = GGS_lexicalImplicitRuleAST ((cPtr_lexicalImplicitRuleAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalImplicitRuleAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalImplicitRuleAST_2E_weak ("lexicalImplicitRuleAST.weak",
                                                                                      & kTypeDescriptor_GALGAS_abstractLexicalRuleAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalImplicitRuleAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalImplicitRuleAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalImplicitRuleAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalImplicitRuleAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalImplicitRuleAST_2E_weak GGS_lexicalImplicitRuleAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_lexicalImplicitRuleAST_2E_weak result ;
  const GGS_lexicalImplicitRuleAST_2E_weak * p = (const GGS_lexicalImplicitRuleAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalImplicitRuleAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalImplicitRuleAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalExplicitRuleAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalExplicitRuleAST::objectCompare (const GGS_lexicalExplicitRuleAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitRuleAST::GGS_lexicalExplicitRuleAST (void) :
GGS_abstractLexicalRuleAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalExplicitRuleAST GGS_lexicalExplicitRuleAST::
init_21__21_ (const GGS_lexicalExpressionAST & in_mLexicalRuleExpression,
              const GGS_lexicalInstructionListAST & in_mInstructionList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalExplicitRuleAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalExplicitRuleAST (inCompiler COMMA_THERE)) ;
  object->lexicalExplicitRuleAST_init_21__21_ (in_mLexicalRuleExpression, in_mInstructionList, inCompiler) ;
  const GGS_lexicalExplicitRuleAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalExplicitRuleAST::
lexicalExplicitRuleAST_init_21__21_ (const GGS_lexicalExpressionAST & in_mLexicalRuleExpression,
                                     const GGS_lexicalInstructionListAST & in_mInstructionList,
                                     Compiler * /* inCompiler */) {
  mProperty_mLexicalRuleExpression = in_mLexicalRuleExpression ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitRuleAST::GGS_lexicalExplicitRuleAST (const cPtr_lexicalExplicitRuleAST * inSourcePtr) :
GGS_abstractLexicalRuleAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalExplicitRuleAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitRuleAST GGS_lexicalExplicitRuleAST::class_func_new (const GGS_lexicalExpressionAST & in_mLexicalRuleExpression,
                                                                       const GGS_lexicalInstructionListAST & in_mInstructionList,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GGS_lexicalExplicitRuleAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalExplicitRuleAST (in_mLexicalRuleExpression, in_mInstructionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST GGS_lexicalExplicitRuleAST::readProperty_mLexicalRuleExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalExpressionAST () ;
  }else{
    cPtr_lexicalExplicitRuleAST * p = (cPtr_lexicalExplicitRuleAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalExplicitRuleAST) ;
    return p->mProperty_mLexicalRuleExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalInstructionListAST GGS_lexicalExplicitRuleAST::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalInstructionListAST () ;
  }else{
    cPtr_lexicalExplicitRuleAST * p = (cPtr_lexicalExplicitRuleAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalExplicitRuleAST) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalExplicitRuleAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalExplicitRuleAST::cPtr_lexicalExplicitRuleAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRuleAST (inCompiler COMMA_THERE),
mProperty_mLexicalRuleExpression (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalExplicitRuleAST::cPtr_lexicalExplicitRuleAST (const GGS_lexicalExpressionAST & in_mLexicalRuleExpression,
                                                          const GGS_lexicalInstructionListAST & in_mInstructionList,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRuleAST (inCompiler COMMA_THERE),
mProperty_mLexicalRuleExpression (),
mProperty_mInstructionList () {
  mProperty_mLexicalRuleExpression = in_mLexicalRuleExpression ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalExplicitRuleAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ;
}

void cPtr_lexicalExplicitRuleAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalExplicitRuleAST:") ;
  mProperty_mLexicalRuleExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalExplicitRuleAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalExplicitRuleAST (mProperty_mLexicalRuleExpression, mProperty_mInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalExplicitRuleAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractLexicalRuleAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexicalRuleExpression.printNonNullClassInstanceProperties ("mLexicalRuleExpression") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalExplicitRuleAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ("lexicalExplicitRuleAST",
                                                                              & kTypeDescriptor_GALGAS_abstractLexicalRuleAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalExplicitRuleAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalExplicitRuleAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalExplicitRuleAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitRuleAST GGS_lexicalExplicitRuleAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_lexicalExplicitRuleAST result ;
  const GGS_lexicalExplicitRuleAST * p = (const GGS_lexicalExplicitRuleAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalExplicitRuleAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExplicitRuleAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalExplicitRuleAST_2E_weak::objectCompare (const GGS_lexicalExplicitRuleAST_2E_weak & inOperand) const {
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

GGS_lexicalExplicitRuleAST_2E_weak::GGS_lexicalExplicitRuleAST_2E_weak (void) :
GGS_abstractLexicalRuleAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitRuleAST_2E_weak & GGS_lexicalExplicitRuleAST_2E_weak::operator = (const GGS_lexicalExplicitRuleAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitRuleAST_2E_weak::GGS_lexicalExplicitRuleAST_2E_weak (const GGS_lexicalExplicitRuleAST & inSource) :
GGS_abstractLexicalRuleAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitRuleAST_2E_weak GGS_lexicalExplicitRuleAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalExplicitRuleAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitRuleAST GGS_lexicalExplicitRuleAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalExplicitRuleAST result ;
  if (isValid ()) {
    const cPtr_lexicalExplicitRuleAST * p = (cPtr_lexicalExplicitRuleAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalExplicitRuleAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitRuleAST GGS_lexicalExplicitRuleAST_2E_weak::bang_lexicalExplicitRuleAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalExplicitRuleAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalExplicitRuleAST) ;
      result = GGS_lexicalExplicitRuleAST ((cPtr_lexicalExplicitRuleAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalExplicitRuleAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitRuleAST_2E_weak ("lexicalExplicitRuleAST.weak",
                                                                                      & kTypeDescriptor_GALGAS_abstractLexicalRuleAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_lexicalExplicitRuleAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitRuleAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalExplicitRuleAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalExplicitRuleAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitRuleAST_2E_weak GGS_lexicalExplicitRuleAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_lexicalExplicitRuleAST_2E_weak result ;
  const GGS_lexicalExplicitRuleAST_2E_weak * p = (const GGS_lexicalExplicitRuleAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalExplicitRuleAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExplicitRuleAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@sentLexicalAttributeListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_sentLexicalAttributeListAST : public cCollectionElement {
  public: GGS_sentLexicalAttributeListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_sentLexicalAttributeListAST (const GGS_lstring & in_mFormalSelector,
                                                          const GGS_lstring & in_mAttributeName
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_sentLexicalAttributeListAST (const GGS_sentLexicalAttributeListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_sentLexicalAttributeListAST::cCollectionElement_sentLexicalAttributeListAST (const GGS_lstring & in_mFormalSelector,
                                                                                                const GGS_lstring & in_mAttributeName
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mAttributeName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_sentLexicalAttributeListAST::cCollectionElement_sentLexicalAttributeListAST (const GGS_sentLexicalAttributeListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalSelector, inElement.mProperty_mAttributeName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_sentLexicalAttributeListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_sentLexicalAttributeListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_sentLexicalAttributeListAST (mObject.mProperty_mFormalSelector, mObject.mProperty_mAttributeName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_sentLexicalAttributeListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalSelector" ":") ;
  mObject.mProperty_mFormalSelector.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAttributeName" ":") ;
  mObject.mProperty_mAttributeName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_sentLexicalAttributeListAST::GGS_sentLexicalAttributeListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_sentLexicalAttributeListAST::GGS_sentLexicalAttributeListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_sentLexicalAttributeListAST GGS_sentLexicalAttributeListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_sentLexicalAttributeListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_sentLexicalAttributeListAST GGS_sentLexicalAttributeListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_sentLexicalAttributeListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sentLexicalAttributeListAST::plusPlusAssignOperation (const GGS_sentLexicalAttributeListAST_2E_element & inValue
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_sentLexicalAttributeListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_sentLexicalAttributeListAST GGS_sentLexicalAttributeListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                           const GGS_lstring & inOperand1
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_sentLexicalAttributeListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_sentLexicalAttributeListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_sentLexicalAttributeListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sentLexicalAttributeListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GGS_lstring & in_mFormalSelector,
                                                                 const GGS_lstring & in_mAttributeName
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_sentLexicalAttributeListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_sentLexicalAttributeListAST (in_mFormalSelector,
                                                                 in_mAttributeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sentLexicalAttributeListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                          const GGS_lstring & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_sentLexicalAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sentLexicalAttributeListAST::setter_append (const GGS_lstring inOperand0,
                                                     const GGS_lstring inOperand1,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_sentLexicalAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sentLexicalAttributeListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                            const GGS_lstring inOperand1,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_sentLexicalAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sentLexicalAttributeListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                            GGS_lstring & outOperand1,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
      outOperand0 = p->mObject.mProperty_mFormalSelector ;
      outOperand1 = p->mObject.mProperty_mAttributeName ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sentLexicalAttributeListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                       GGS_lstring & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sentLexicalAttributeListAST::setter_popLast (GGS_lstring & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sentLexicalAttributeListAST::method_first (GGS_lstring & outOperand0,
                                                    GGS_lstring & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sentLexicalAttributeListAST::method_last (GGS_lstring & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_sentLexicalAttributeListAST GGS_sentLexicalAttributeListAST::add_operation (const GGS_sentLexicalAttributeListAST & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_sentLexicalAttributeListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sentLexicalAttributeListAST GGS_sentLexicalAttributeListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_sentLexicalAttributeListAST result = GGS_sentLexicalAttributeListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sentLexicalAttributeListAST GGS_sentLexicalAttributeListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_sentLexicalAttributeListAST result = GGS_sentLexicalAttributeListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sentLexicalAttributeListAST GGS_sentLexicalAttributeListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_sentLexicalAttributeListAST result = GGS_sentLexicalAttributeListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sentLexicalAttributeListAST::plusAssignOperation (const GGS_sentLexicalAttributeListAST inOperand,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sentLexicalAttributeListAST::setter_setMFormalSelectorAtIndex (GGS_lstring inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalSelector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_sentLexicalAttributeListAST::getter_mFormalSelectorAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    result = p->mObject.mProperty_mFormalSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sentLexicalAttributeListAST::setter_setMAttributeNameAtIndex (GGS_lstring inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_sentLexicalAttributeListAST::getter_mAttributeNameAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    result = p->mObject.mProperty_mAttributeName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @sentLexicalAttributeListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_sentLexicalAttributeListAST::DownEnumerator_sentLexicalAttributeListAST (const GGS_sentLexicalAttributeListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_sentLexicalAttributeListAST_2E_element DownEnumerator_sentLexicalAttributeListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_sentLexicalAttributeListAST * p = (const cCollectionElement_sentLexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_sentLexicalAttributeListAST::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_sentLexicalAttributeListAST * p = (const cCollectionElement_sentLexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_sentLexicalAttributeListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_sentLexicalAttributeListAST * p = (const cCollectionElement_sentLexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
  return p->mObject.mProperty_mAttributeName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @sentLexicalAttributeListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_sentLexicalAttributeListAST::UpEnumerator_sentLexicalAttributeListAST (const GGS_sentLexicalAttributeListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_sentLexicalAttributeListAST_2E_element UpEnumerator_sentLexicalAttributeListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_sentLexicalAttributeListAST * p = (const cCollectionElement_sentLexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_sentLexicalAttributeListAST::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_sentLexicalAttributeListAST * p = (const cCollectionElement_sentLexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_sentLexicalAttributeListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_sentLexicalAttributeListAST * p = (const cCollectionElement_sentLexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
  return p->mObject.mProperty_mAttributeName ;
}




//--------------------------------------------------------------------------------------------------
//     @sentLexicalAttributeListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sentLexicalAttributeListAST ("sentLexicalAttributeListAST",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_sentLexicalAttributeListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sentLexicalAttributeListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sentLexicalAttributeListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sentLexicalAttributeListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sentLexicalAttributeListAST GGS_sentLexicalAttributeListAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_sentLexicalAttributeListAST result ;
  const GGS_sentLexicalAttributeListAST * p = (const GGS_sentLexicalAttributeListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sentLexicalAttributeListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sentLexicalAttributeListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

