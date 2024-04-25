#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::objectCompare (const GALGAS_lexicalCharacterIntervalMatchAST_2D_weak & inOperand) const {
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

GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::GALGAS_lexicalCharacterIntervalMatchAST_2D_weak (void) :
GALGAS_lexicalExpressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST_2D_weak & GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::operator = (const GALGAS_lexicalCharacterIntervalMatchAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::GALGAS_lexicalCharacterIntervalMatchAST_2D_weak (const GALGAS_lexicalCharacterIntervalMatchAST & inSource) :
GALGAS_lexicalExpressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST_2D_weak GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_lexicalCharacterIntervalMatchAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::bang_lexicalCharacterIntervalMatchAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalCharacterIntervalMatchAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalCharacterIntervalMatchAST) ;
      result = GALGAS_lexicalCharacterIntervalMatchAST ((cPtr_lexicalCharacterIntervalMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalCharacterIntervalMatchAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST_2D_weak ("lexicalCharacterIntervalMatchAST-weak",
                                                                                                & kTypeDescriptor_GALGAS_lexicalExpressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterIntervalMatchAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterIntervalMatchAST_2D_weak GALGAS_lexicalCharacterIntervalMatchAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterIntervalMatchAST_2D_weak result ;
  const GALGAS_lexicalCharacterIntervalMatchAST_2D_weak * p = (const GALGAS_lexicalCharacterIntervalMatchAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalCharacterIntervalMatchAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterIntervalMatchAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalStringMatchAST_2D_weak::objectCompare (const GALGAS_lexicalStringMatchAST_2D_weak & inOperand) const {
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

GALGAS_lexicalStringMatchAST_2D_weak::GALGAS_lexicalStringMatchAST_2D_weak (void) :
GALGAS_lexicalExpressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST_2D_weak & GALGAS_lexicalStringMatchAST_2D_weak::operator = (const GALGAS_lexicalStringMatchAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST_2D_weak::GALGAS_lexicalStringMatchAST_2D_weak (const GALGAS_lexicalStringMatchAST & inSource) :
GALGAS_lexicalExpressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST_2D_weak GALGAS_lexicalStringMatchAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_lexicalStringMatchAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST GALGAS_lexicalStringMatchAST_2D_weak::bang_lexicalStringMatchAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalStringMatchAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalStringMatchAST) ;
      result = GALGAS_lexicalStringMatchAST ((cPtr_lexicalStringMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalStringMatchAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStringMatchAST_2D_weak ("lexicalStringMatchAST-weak",
                                                                                     & kTypeDescriptor_GALGAS_lexicalExpressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalStringMatchAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringMatchAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalStringMatchAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalStringMatchAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalStringMatchAST_2D_weak GALGAS_lexicalStringMatchAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStringMatchAST_2D_weak result ;
  const GALGAS_lexicalStringMatchAST_2D_weak * p = (const GALGAS_lexicalStringMatchAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalStringMatchAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStringMatchAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalStringNotMatchAST_2D_weak::objectCompare (const GALGAS_lexicalStringNotMatchAST_2D_weak & inOperand) const {
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

GALGAS_lexicalStringNotMatchAST_2D_weak::GALGAS_lexicalStringNotMatchAST_2D_weak (void) :
GALGAS_lexicalExpressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST_2D_weak & GALGAS_lexicalStringNotMatchAST_2D_weak::operator = (const GALGAS_lexicalStringNotMatchAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST_2D_weak::GALGAS_lexicalStringNotMatchAST_2D_weak (const GALGAS_lexicalStringNotMatchAST & inSource) :
GALGAS_lexicalExpressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST_2D_weak GALGAS_lexicalStringNotMatchAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_lexicalStringNotMatchAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST GALGAS_lexicalStringNotMatchAST_2D_weak::bang_lexicalStringNotMatchAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalStringNotMatchAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalStringNotMatchAST) ;
      result = GALGAS_lexicalStringNotMatchAST ((cPtr_lexicalStringNotMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalStringNotMatchAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStringNotMatchAST_2D_weak ("lexicalStringNotMatchAST-weak",
                                                                                        & kTypeDescriptor_GALGAS_lexicalExpressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalStringNotMatchAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringNotMatchAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalStringNotMatchAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalStringNotMatchAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalStringNotMatchAST_2D_weak GALGAS_lexicalStringNotMatchAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStringNotMatchAST_2D_weak result ;
  const GALGAS_lexicalStringNotMatchAST_2D_weak * p = (const GALGAS_lexicalStringNotMatchAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalStringNotMatchAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStringNotMatchAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalSendSearchListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalSendSearchListAST : public cCollectionElement {
  public: GALGAS_lexicalSendSearchListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_lexicalSendSearchListAST (const GALGAS_lstring & in_mAttributeName,
                                                       const GALGAS_lstring & in_mSearchListName
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalSendSearchListAST (const GALGAS_lexicalSendSearchListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalSendSearchListAST::cCollectionElement_lexicalSendSearchListAST (const GALGAS_lstring & in_mAttributeName,
                                                                                          const GALGAS_lstring & in_mSearchListName
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeName, in_mSearchListName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalSendSearchListAST::cCollectionElement_lexicalSendSearchListAST (const GALGAS_lexicalSendSearchListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAttributeName, inElement.mProperty_mSearchListName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalSendSearchListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalSendSearchListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_lexicalSendSearchListAST (mObject.mProperty_mAttributeName, mObject.mProperty_mSearchListName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalSendSearchListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAttributeName" ":") ;
  mObject.mProperty_mAttributeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSearchListName" ":") ;
  mObject.mProperty_mSearchListName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST::GALGAS_lexicalSendSearchListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST::GALGAS_lexicalSendSearchListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalSendSearchListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalSendSearchListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSendSearchListAST::enterElement (const GALGAS_lexicalSendSearchListAST_2D_element & inValue,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalSendSearchListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                           const GALGAS_lstring & inOperand1
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSendSearchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalSendSearchListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalSendSearchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSendSearchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_lstring & in_mAttributeName,
                                                                 const GALGAS_lstring & in_mSearchListName
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalSendSearchListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalSendSearchListAST (in_mAttributeName,
                                                              in_mSearchListName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSendSearchListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                           const GALGAS_lstring & inOperand1
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalSendSearchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSendSearchListAST::setter_append (const GALGAS_lstring inOperand0,
                                                     const GALGAS_lstring inOperand1,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalSendSearchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSendSearchListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                            const GALGAS_lstring inOperand1,
                                                            const GALGAS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_lexicalSendSearchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_lexicalSendSearchListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            const GALGAS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
        outOperand0 = p->mObject.mProperty_mAttributeName ;
        outOperand1 = p->mObject.mProperty_mSearchListName ;
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

void GALGAS_lexicalSendSearchListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mSearchListName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSendSearchListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mSearchListName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSendSearchListAST::method_first (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mSearchListName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSendSearchListAST::method_last (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mSearchListName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::add_operation (const GALGAS_lexicalSendSearchListAST & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalSendSearchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSendSearchListAST result = GALGAS_lexicalSendSearchListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSendSearchListAST result = GALGAS_lexicalSendSearchListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSendSearchListAST result = GALGAS_lexicalSendSearchListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSendSearchListAST::plusAssign_operation (const GALGAS_lexicalSendSearchListAST inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSendSearchListAST::setter_setMAttributeNameAtIndex (GALGAS_lstring inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalSendSearchListAST::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
    result = p->mObject.mProperty_mAttributeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSendSearchListAST::setter_setMSearchListNameAtIndex (GALGAS_lstring inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSearchListName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalSendSearchListAST::getter_mSearchListNameAtIndex (const GALGAS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
    result = p->mObject.mProperty_mSearchListName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_lexicalSendSearchListAST::cEnumerator_lexicalSendSearchListAST (const GALGAS_lexicalSendSearchListAST & inEnumeratedObject,
                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST_2D_element cEnumerator_lexicalSendSearchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSendSearchListAST * p = (const cCollectionElement_lexicalSendSearchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalSendSearchListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSendSearchListAST * p = (const cCollectionElement_lexicalSendSearchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
  return p->mObject.mProperty_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalSendSearchListAST::current_mSearchListName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSendSearchListAST * p = (const cCollectionElement_lexicalSendSearchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
  return p->mObject.mProperty_mSearchListName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @lexicalSendSearchListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSendSearchListAST ("lexicalSendSearchListAST",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSendSearchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendSearchListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSendSearchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSendSearchListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSendSearchListAST result ;
  const GALGAS_lexicalSendSearchListAST * p = (const GALGAS_lexicalSendSearchListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalSendSearchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSendSearchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalSendDefaultActionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalSendDefaultActionAST::cPtr_lexicalSendDefaultActionAST (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalSendDefaultActionAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalSendDefaultActionAST::objectCompare (const GALGAS_lexicalSendDefaultActionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendDefaultActionAST::GALGAS_lexicalSendDefaultActionAST (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendDefaultActionAST::GALGAS_lexicalSendDefaultActionAST (const cPtr_lexicalSendDefaultActionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalSendDefaultActionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalSendDefaultActionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalSendDefaultActionAST::cPtr_lexicalSendDefaultActionAST (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalSendDefaultActionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST ("lexicalSendDefaultActionAST",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSendDefaultActionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSendDefaultActionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSendDefaultActionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendDefaultActionAST GALGAS_lexicalSendDefaultActionAST::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSendDefaultActionAST result ;
  const GALGAS_lexicalSendDefaultActionAST * p = (const GALGAS_lexicalSendDefaultActionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalSendDefaultActionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSendDefaultActionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalSendDefaultActionAST_2D_weak::objectCompare (const GALGAS_lexicalSendDefaultActionAST_2D_weak & inOperand) const {
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

GALGAS_lexicalSendDefaultActionAST_2D_weak::GALGAS_lexicalSendDefaultActionAST_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendDefaultActionAST_2D_weak & GALGAS_lexicalSendDefaultActionAST_2D_weak::operator = (const GALGAS_lexicalSendDefaultActionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendDefaultActionAST_2D_weak::GALGAS_lexicalSendDefaultActionAST_2D_weak (const GALGAS_lexicalSendDefaultActionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendDefaultActionAST_2D_weak GALGAS_lexicalSendDefaultActionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_lexicalSendDefaultActionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendDefaultActionAST GALGAS_lexicalSendDefaultActionAST_2D_weak::bang_lexicalSendDefaultActionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSendDefaultActionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalSendDefaultActionAST) ;
      result = GALGAS_lexicalSendDefaultActionAST ((cPtr_lexicalSendDefaultActionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalSendDefaultActionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST_2D_weak ("lexicalSendDefaultActionAST-weak",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSendDefaultActionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSendDefaultActionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSendDefaultActionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendDefaultActionAST_2D_weak GALGAS_lexicalSendDefaultActionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSendDefaultActionAST_2D_weak result ;
  const GALGAS_lexicalSendDefaultActionAST_2D_weak * p = (const GALGAS_lexicalSendDefaultActionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalSendDefaultActionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSendDefaultActionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::objectCompare (const GALGAS_lexicalSendTerminalByDefaultAST_2D_weak & inOperand) const {
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

GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::GALGAS_lexicalSendTerminalByDefaultAST_2D_weak (void) :
GALGAS_lexicalSendDefaultActionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST_2D_weak & GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::operator = (const GALGAS_lexicalSendTerminalByDefaultAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::GALGAS_lexicalSendTerminalByDefaultAST_2D_weak (const GALGAS_lexicalSendTerminalByDefaultAST & inSource) :
GALGAS_lexicalSendDefaultActionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST_2D_weak GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_lexicalSendTerminalByDefaultAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::bang_lexicalSendTerminalByDefaultAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSendTerminalByDefaultAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalSendTerminalByDefaultAST) ;
      result = GALGAS_lexicalSendTerminalByDefaultAST ((cPtr_lexicalSendTerminalByDefaultAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalSendTerminalByDefaultAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST_2D_weak ("lexicalSendTerminalByDefaultAST-weak",
                                                                                               & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSendTerminalByDefaultAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendTerminalByDefaultAST_2D_weak GALGAS_lexicalSendTerminalByDefaultAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSendTerminalByDefaultAST_2D_weak result ;
  const GALGAS_lexicalSendTerminalByDefaultAST_2D_weak * p = (const GALGAS_lexicalSendTerminalByDefaultAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalSendTerminalByDefaultAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSendTerminalByDefaultAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalErrorByDefaultAST_2D_weak::objectCompare (const GALGAS_lexicalErrorByDefaultAST_2D_weak & inOperand) const {
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

GALGAS_lexicalErrorByDefaultAST_2D_weak::GALGAS_lexicalErrorByDefaultAST_2D_weak (void) :
GALGAS_lexicalSendDefaultActionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST_2D_weak & GALGAS_lexicalErrorByDefaultAST_2D_weak::operator = (const GALGAS_lexicalErrorByDefaultAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST_2D_weak::GALGAS_lexicalErrorByDefaultAST_2D_weak (const GALGAS_lexicalErrorByDefaultAST & inSource) :
GALGAS_lexicalSendDefaultActionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST_2D_weak GALGAS_lexicalErrorByDefaultAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_lexicalErrorByDefaultAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST GALGAS_lexicalErrorByDefaultAST_2D_weak::bang_lexicalErrorByDefaultAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalErrorByDefaultAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalErrorByDefaultAST) ;
      result = GALGAS_lexicalErrorByDefaultAST ((cPtr_lexicalErrorByDefaultAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalErrorByDefaultAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST_2D_weak ("lexicalErrorByDefaultAST-weak",
                                                                                        & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalErrorByDefaultAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalErrorByDefaultAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalErrorByDefaultAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorByDefaultAST_2D_weak GALGAS_lexicalErrorByDefaultAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalErrorByDefaultAST_2D_weak result ;
  const GALGAS_lexicalErrorByDefaultAST_2D_weak * p = (const GALGAS_lexicalErrorByDefaultAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalErrorByDefaultAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalErrorByDefaultAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalWhileBranchListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalWhileBranchListAST : public cCollectionElement {
  public: GALGAS_lexicalWhileBranchListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_lexicalWhileBranchListAST (const GALGAS_lexicalExpressionAST & in_mWhileExpression,
                                                        const GALGAS_lexicalInstructionListAST & in_mWhileInstructionList
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalWhileBranchListAST (const GALGAS_lexicalWhileBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalWhileBranchListAST::cCollectionElement_lexicalWhileBranchListAST (const GALGAS_lexicalExpressionAST & in_mWhileExpression,
                                                                                            const GALGAS_lexicalInstructionListAST & in_mWhileInstructionList
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mWhileExpression, in_mWhileInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalWhileBranchListAST::cCollectionElement_lexicalWhileBranchListAST (const GALGAS_lexicalWhileBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mWhileExpression, inElement.mProperty_mWhileInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalWhileBranchListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalWhileBranchListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_lexicalWhileBranchListAST (mObject.mProperty_mWhileExpression, mObject.mProperty_mWhileInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalWhileBranchListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mWhileExpression" ":") ;
  mObject.mProperty_mWhileExpression.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mWhileInstructionList" ":") ;
  mObject.mProperty_mWhileInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST::GALGAS_lexicalWhileBranchListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST::GALGAS_lexicalWhileBranchListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalWhileBranchListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalWhileBranchListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalWhileBranchListAST::enterElement (const GALGAS_lexicalWhileBranchListAST_2D_element & inValue,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalWhileBranchListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::class_func_listWithValue (const GALGAS_lexicalExpressionAST & inOperand0,
                                                                                             const GALGAS_lexicalInstructionListAST & inOperand1
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_lexicalWhileBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalWhileBranchListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalWhileBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalWhileBranchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_lexicalExpressionAST & in_mWhileExpression,
                                                                  const GALGAS_lexicalInstructionListAST & in_mWhileInstructionList
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalWhileBranchListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalWhileBranchListAST (in_mWhileExpression,
                                                               in_mWhileInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalWhileBranchListAST::addAssign_operation (const GALGAS_lexicalExpressionAST & inOperand0,
                                                            const GALGAS_lexicalInstructionListAST & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalWhileBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalWhileBranchListAST::setter_append (const GALGAS_lexicalExpressionAST inOperand0,
                                                      const GALGAS_lexicalInstructionListAST inOperand1,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalWhileBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalWhileBranchListAST::setter_insertAtIndex (const GALGAS_lexicalExpressionAST inOperand0,
                                                             const GALGAS_lexicalInstructionListAST inOperand1,
                                                             const GALGAS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_lexicalWhileBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_lexicalWhileBranchListAST::setter_removeAtIndex (GALGAS_lexicalExpressionAST & outOperand0,
                                                             GALGAS_lexicalInstructionListAST & outOperand1,
                                                             const GALGAS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
        outOperand0 = p->mObject.mProperty_mWhileExpression ;
        outOperand1 = p->mObject.mProperty_mWhileInstructionList ;
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

void GALGAS_lexicalWhileBranchListAST::setter_popFirst (GALGAS_lexicalExpressionAST & outOperand0,
                                                        GALGAS_lexicalInstructionListAST & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mWhileExpression ;
    outOperand1 = p->mObject.mProperty_mWhileInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalWhileBranchListAST::setter_popLast (GALGAS_lexicalExpressionAST & outOperand0,
                                                       GALGAS_lexicalInstructionListAST & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mWhileExpression ;
    outOperand1 = p->mObject.mProperty_mWhileInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalWhileBranchListAST::method_first (GALGAS_lexicalExpressionAST & outOperand0,
                                                     GALGAS_lexicalInstructionListAST & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mWhileExpression ;
    outOperand1 = p->mObject.mProperty_mWhileInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalWhileBranchListAST::method_last (GALGAS_lexicalExpressionAST & outOperand0,
                                                    GALGAS_lexicalInstructionListAST & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mWhileExpression ;
    outOperand1 = p->mObject.mProperty_mWhileInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::add_operation (const GALGAS_lexicalWhileBranchListAST & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalWhileBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalWhileBranchListAST result = GALGAS_lexicalWhileBranchListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalWhileBranchListAST result = GALGAS_lexicalWhileBranchListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalWhileBranchListAST result = GALGAS_lexicalWhileBranchListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalWhileBranchListAST::plusAssign_operation (const GALGAS_lexicalWhileBranchListAST inOperand,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalWhileBranchListAST::setter_setMWhileExpressionAtIndex (GALGAS_lexicalExpressionAST inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mWhileExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST GALGAS_lexicalWhileBranchListAST::getter_mWhileExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) attributes.ptr () ;
  GALGAS_lexicalExpressionAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
    result = p->mObject.mProperty_mWhileExpression ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalWhileBranchListAST::setter_setMWhileInstructionListAtIndex (GALGAS_lexicalInstructionListAST inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mWhileInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalWhileBranchListAST::getter_mWhileInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) attributes.ptr () ;
  GALGAS_lexicalInstructionListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
    result = p->mObject.mProperty_mWhileInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_lexicalWhileBranchListAST::cEnumerator_lexicalWhileBranchListAST (const GALGAS_lexicalWhileBranchListAST & inEnumeratedObject,
                                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST_2D_element cEnumerator_lexicalWhileBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalWhileBranchListAST * p = (const cCollectionElement_lexicalWhileBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST cEnumerator_lexicalWhileBranchListAST::current_mWhileExpression (LOCATION_ARGS) const {
  const cCollectionElement_lexicalWhileBranchListAST * p = (const cCollectionElement_lexicalWhileBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
  return p->mObject.mProperty_mWhileExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST cEnumerator_lexicalWhileBranchListAST::current_mWhileInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalWhileBranchListAST * p = (const cCollectionElement_lexicalWhileBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
  return p->mObject.mProperty_mWhileInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @lexicalWhileBranchListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalWhileBranchListAST ("lexicalWhileBranchListAST",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalWhileBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalWhileBranchListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalWhileBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalWhileBranchListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalWhileBranchListAST result ;
  const GALGAS_lexicalWhileBranchListAST * p = (const GALGAS_lexicalWhileBranchListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalWhileBranchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalWhileBranchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalSelectBranchListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalSelectBranchListAST : public cCollectionElement {
  public: GALGAS_lexicalSelectBranchListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_lexicalSelectBranchListAST (const GALGAS_lexicalExpressionAST & in_mSelectExpression,
                                                         const GALGAS_lexicalInstructionListAST & in_mSelectInstructionList
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalSelectBranchListAST (const GALGAS_lexicalSelectBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalSelectBranchListAST::cCollectionElement_lexicalSelectBranchListAST (const GALGAS_lexicalExpressionAST & in_mSelectExpression,
                                                                                              const GALGAS_lexicalInstructionListAST & in_mSelectInstructionList
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSelectExpression, in_mSelectInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalSelectBranchListAST::cCollectionElement_lexicalSelectBranchListAST (const GALGAS_lexicalSelectBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSelectExpression, inElement.mProperty_mSelectInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalSelectBranchListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalSelectBranchListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_lexicalSelectBranchListAST (mObject.mProperty_mSelectExpression, mObject.mProperty_mSelectInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalSelectBranchListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSelectExpression" ":") ;
  mObject.mProperty_mSelectExpression.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSelectInstructionList" ":") ;
  mObject.mProperty_mSelectInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST::GALGAS_lexicalSelectBranchListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST::GALGAS_lexicalSelectBranchListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalSelectBranchListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalSelectBranchListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSelectBranchListAST::enterElement (const GALGAS_lexicalSelectBranchListAST_2D_element & inValue,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalSelectBranchListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::class_func_listWithValue (const GALGAS_lexicalExpressionAST & inOperand0,
                                                                                               const GALGAS_lexicalInstructionListAST & inOperand1
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSelectBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalSelectBranchListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalSelectBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSelectBranchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_lexicalExpressionAST & in_mSelectExpression,
                                                                   const GALGAS_lexicalInstructionListAST & in_mSelectInstructionList
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalSelectBranchListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalSelectBranchListAST (in_mSelectExpression,
                                                                in_mSelectInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSelectBranchListAST::addAssign_operation (const GALGAS_lexicalExpressionAST & inOperand0,
                                                             const GALGAS_lexicalInstructionListAST & inOperand1
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalSelectBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSelectBranchListAST::setter_append (const GALGAS_lexicalExpressionAST inOperand0,
                                                       const GALGAS_lexicalInstructionListAST inOperand1,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalSelectBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSelectBranchListAST::setter_insertAtIndex (const GALGAS_lexicalExpressionAST inOperand0,
                                                              const GALGAS_lexicalInstructionListAST inOperand1,
                                                              const GALGAS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_lexicalSelectBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_lexicalSelectBranchListAST::setter_removeAtIndex (GALGAS_lexicalExpressionAST & outOperand0,
                                                              GALGAS_lexicalInstructionListAST & outOperand1,
                                                              const GALGAS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
        outOperand0 = p->mObject.mProperty_mSelectExpression ;
        outOperand1 = p->mObject.mProperty_mSelectInstructionList ;
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

void GALGAS_lexicalSelectBranchListAST::setter_popFirst (GALGAS_lexicalExpressionAST & outOperand0,
                                                         GALGAS_lexicalInstructionListAST & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mSelectExpression ;
    outOperand1 = p->mObject.mProperty_mSelectInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSelectBranchListAST::setter_popLast (GALGAS_lexicalExpressionAST & outOperand0,
                                                        GALGAS_lexicalInstructionListAST & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mSelectExpression ;
    outOperand1 = p->mObject.mProperty_mSelectInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSelectBranchListAST::method_first (GALGAS_lexicalExpressionAST & outOperand0,
                                                      GALGAS_lexicalInstructionListAST & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mSelectExpression ;
    outOperand1 = p->mObject.mProperty_mSelectInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSelectBranchListAST::method_last (GALGAS_lexicalExpressionAST & outOperand0,
                                                     GALGAS_lexicalInstructionListAST & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mSelectExpression ;
    outOperand1 = p->mObject.mProperty_mSelectInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::add_operation (const GALGAS_lexicalSelectBranchListAST & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalSelectBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSelectBranchListAST result = GALGAS_lexicalSelectBranchListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSelectBranchListAST result = GALGAS_lexicalSelectBranchListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSelectBranchListAST result = GALGAS_lexicalSelectBranchListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSelectBranchListAST::plusAssign_operation (const GALGAS_lexicalSelectBranchListAST inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSelectBranchListAST::setter_setMSelectExpressionAtIndex (GALGAS_lexicalExpressionAST inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSelectExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST GALGAS_lexicalSelectBranchListAST::getter_mSelectExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) attributes.ptr () ;
  GALGAS_lexicalExpressionAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
    result = p->mObject.mProperty_mSelectExpression ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSelectBranchListAST::setter_setMSelectInstructionListAtIndex (GALGAS_lexicalInstructionListAST inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSelectInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalSelectBranchListAST::getter_mSelectInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) attributes.ptr () ;
  GALGAS_lexicalInstructionListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
    result = p->mObject.mProperty_mSelectInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_lexicalSelectBranchListAST::cEnumerator_lexicalSelectBranchListAST (const GALGAS_lexicalSelectBranchListAST & inEnumeratedObject,
                                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST_2D_element cEnumerator_lexicalSelectBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSelectBranchListAST * p = (const cCollectionElement_lexicalSelectBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST cEnumerator_lexicalSelectBranchListAST::current_mSelectExpression (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSelectBranchListAST * p = (const cCollectionElement_lexicalSelectBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
  return p->mObject.mProperty_mSelectExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST cEnumerator_lexicalSelectBranchListAST::current_mSelectInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSelectBranchListAST * p = (const cCollectionElement_lexicalSelectBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
  return p->mObject.mProperty_mSelectInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @lexicalSelectBranchListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSelectBranchListAST ("lexicalSelectBranchListAST",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSelectBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectBranchListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSelectBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSelectBranchListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSelectBranchListAST result ;
  const GALGAS_lexicalSelectBranchListAST * p = (const GALGAS_lexicalSelectBranchListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalSelectBranchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSelectBranchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalRoutineOrFunctionFormalInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST::cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST::objectCompare (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST::GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST::GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalRoutineOrFunctionFormalInputArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST::cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalRoutineOrFunctionFormalInputArgumentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST ("lexicalRoutineOrFunctionFormalInputArgumentAST",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST result ;
  const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST * p = (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineOrFunctionFormalInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak::objectCompare (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak & inOperand) const {
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

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak::GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak & GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak::operator = (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak::GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak::bang_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
      result = GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST ((cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalRoutineOrFunctionFormalInputArgumentAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak ("lexicalRoutineOrFunctionFormalInputArgumentAST-weak",
                                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak result ;
  const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak * p = (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineOrFunctionFormalInputArgumentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalFunctionCallActualArgumentListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalFunctionCallActualArgumentListAST : public cCollectionElement {
  public: GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_lexicalFunctionCallActualArgumentListAST (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument
                                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalFunctionCallActualArgumentListAST (const GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalFunctionCallActualArgumentListAST::cCollectionElement_lexicalFunctionCallActualArgumentListAST (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument
                                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalActualInputArgument) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalFunctionCallActualArgumentListAST::cCollectionElement_lexicalFunctionCallActualArgumentListAST (const GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLexicalActualInputArgument) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalFunctionCallActualArgumentListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalFunctionCallActualArgumentListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_lexicalFunctionCallActualArgumentListAST (mObject.mProperty_mLexicalActualInputArgument COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalFunctionCallActualArgumentListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalActualInputArgument" ":") ;
  mObject.mProperty_mLexicalActualInputArgument.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST::GALGAS_lexicalFunctionCallActualArgumentListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST::GALGAS_lexicalFunctionCallActualArgumentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalFunctionCallActualArgumentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalFunctionCallActualArgumentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionCallActualArgumentListAST::enterElement (const GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element & inValue,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::class_func_listWithValue (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCallActualArgumentListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_lexicalFunctionCallActualArgumentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalFunctionCallActualArgumentListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionCallActualArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                 const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST (in_mLexicalActualInputArgument COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionCallActualArgumentListAST::addAssign_operation (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionCallActualArgumentListAST::setter_append (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST inOperand0,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionCallActualArgumentListAST::setter_insertAtIndex (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST inOperand0,
                                                                            const GALGAS_uint inInsertionIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST (inOperand0 COMMA_THERE)) ;
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

void GALGAS_lexicalFunctionCallActualArgumentListAST::setter_removeAtIndex (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outOperand0,
                                                                            const GALGAS_uint inRemoveIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (cCollectionElement_lexicalFunctionCallActualArgumentListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
        outOperand0 = p->mObject.mProperty_mLexicalActualInputArgument ;
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

void GALGAS_lexicalFunctionCallActualArgumentListAST::setter_popFirst (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (cCollectionElement_lexicalFunctionCallActualArgumentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mLexicalActualInputArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionCallActualArgumentListAST::setter_popLast (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (cCollectionElement_lexicalFunctionCallActualArgumentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mLexicalActualInputArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionCallActualArgumentListAST::method_first (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (cCollectionElement_lexicalFunctionCallActualArgumentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mLexicalActualInputArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionCallActualArgumentListAST::method_last (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (cCollectionElement_lexicalFunctionCallActualArgumentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mLexicalActualInputArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::add_operation (const GALGAS_lexicalFunctionCallActualArgumentListAST & inOperand,
                                                                                                                Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionCallActualArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionCallActualArgumentListAST result = GALGAS_lexicalFunctionCallActualArgumentListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionCallActualArgumentListAST result = GALGAS_lexicalFunctionCallActualArgumentListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionCallActualArgumentListAST result = GALGAS_lexicalFunctionCallActualArgumentListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionCallActualArgumentListAST::plusAssign_operation (const GALGAS_lexicalFunctionCallActualArgumentListAST inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionCallActualArgumentListAST::setter_setMLexicalActualInputArgumentAtIndex (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST inOperand,
                                                                                                    GALGAS_uint inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (cCollectionElement_lexicalFunctionCallActualArgumentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexicalActualInputArgument = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST GALGAS_lexicalFunctionCallActualArgumentListAST::getter_mLexicalActualInputArgumentAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (cCollectionElement_lexicalFunctionCallActualArgumentListAST *) attributes.ptr () ;
  GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
    result = p->mObject.mProperty_mLexicalActualInputArgument ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_lexicalFunctionCallActualArgumentListAST::cEnumerator_lexicalFunctionCallActualArgumentListAST (const GALGAS_lexicalFunctionCallActualArgumentListAST & inEnumeratedObject,
                                                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element cEnumerator_lexicalFunctionCallActualArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (const cCollectionElement_lexicalFunctionCallActualArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST cEnumerator_lexicalFunctionCallActualArgumentListAST::current_mLexicalActualInputArgument (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (const cCollectionElement_lexicalFunctionCallActualArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
  return p->mObject.mProperty_mLexicalActualInputArgument ;
}




//--------------------------------------------------------------------------------------------------
//
//     @lexicalFunctionCallActualArgumentListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST ("lexicalFunctionCallActualArgumentListAST",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionCallActualArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionCallActualArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionCallActualArgumentListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCallActualArgumentListAST result ;
  const GALGAS_lexicalFunctionCallActualArgumentListAST * p = (const GALGAS_lexicalFunctionCallActualArgumentListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalFunctionCallActualArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionCallActualArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalAttributeInputArgumentAST_2D_weak::objectCompare (const GALGAS_lexicalAttributeInputArgumentAST_2D_weak & inOperand) const {
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

GALGAS_lexicalAttributeInputArgumentAST_2D_weak::GALGAS_lexicalAttributeInputArgumentAST_2D_weak (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST_2D_weak & GALGAS_lexicalAttributeInputArgumentAST_2D_weak::operator = (const GALGAS_lexicalAttributeInputArgumentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST_2D_weak::GALGAS_lexicalAttributeInputArgumentAST_2D_weak (const GALGAS_lexicalAttributeInputArgumentAST & inSource) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST_2D_weak GALGAS_lexicalAttributeInputArgumentAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputArgumentAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST GALGAS_lexicalAttributeInputArgumentAST_2D_weak::bang_lexicalAttributeInputArgumentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeInputArgumentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalAttributeInputArgumentAST) ;
      result = GALGAS_lexicalAttributeInputArgumentAST ((cPtr_lexicalAttributeInputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalAttributeInputArgumentAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST_2D_weak ("lexicalAttributeInputArgumentAST-weak",
                                                                                                & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalAttributeInputArgumentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalAttributeInputArgumentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalAttributeInputArgumentAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputArgumentAST_2D_weak GALGAS_lexicalAttributeInputArgumentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputArgumentAST_2D_weak result ;
  const GALGAS_lexicalAttributeInputArgumentAST_2D_weak * p = (const GALGAS_lexicalAttributeInputArgumentAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalAttributeInputArgumentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeInputArgumentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalCharacterInputArgumentAST_2D_weak::objectCompare (const GALGAS_lexicalCharacterInputArgumentAST_2D_weak & inOperand) const {
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

GALGAS_lexicalCharacterInputArgumentAST_2D_weak::GALGAS_lexicalCharacterInputArgumentAST_2D_weak (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST_2D_weak & GALGAS_lexicalCharacterInputArgumentAST_2D_weak::operator = (const GALGAS_lexicalCharacterInputArgumentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST_2D_weak::GALGAS_lexicalCharacterInputArgumentAST_2D_weak (const GALGAS_lexicalCharacterInputArgumentAST & inSource) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST_2D_weak GALGAS_lexicalCharacterInputArgumentAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_lexicalCharacterInputArgumentAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST GALGAS_lexicalCharacterInputArgumentAST_2D_weak::bang_lexicalCharacterInputArgumentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalCharacterInputArgumentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalCharacterInputArgumentAST) ;
      result = GALGAS_lexicalCharacterInputArgumentAST ((cPtr_lexicalCharacterInputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalCharacterInputArgumentAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST_2D_weak ("lexicalCharacterInputArgumentAST-weak",
                                                                                                & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCharacterInputArgumentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCharacterInputArgumentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCharacterInputArgumentAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCharacterInputArgumentAST_2D_weak GALGAS_lexicalCharacterInputArgumentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCharacterInputArgumentAST_2D_weak result ;
  const GALGAS_lexicalCharacterInputArgumentAST_2D_weak * p = (const GALGAS_lexicalCharacterInputArgumentAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalCharacterInputArgumentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCharacterInputArgumentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalUnsignedInputArgumentAST_2D_weak::objectCompare (const GALGAS_lexicalUnsignedInputArgumentAST_2D_weak & inOperand) const {
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

GALGAS_lexicalUnsignedInputArgumentAST_2D_weak::GALGAS_lexicalUnsignedInputArgumentAST_2D_weak (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalUnsignedInputArgumentAST_2D_weak & GALGAS_lexicalUnsignedInputArgumentAST_2D_weak::operator = (const GALGAS_lexicalUnsignedInputArgumentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalUnsignedInputArgumentAST_2D_weak::GALGAS_lexicalUnsignedInputArgumentAST_2D_weak (const GALGAS_lexicalUnsignedInputArgumentAST & inSource) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalUnsignedInputArgumentAST_2D_weak GALGAS_lexicalUnsignedInputArgumentAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_lexicalUnsignedInputArgumentAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalUnsignedInputArgumentAST GALGAS_lexicalUnsignedInputArgumentAST_2D_weak::bang_lexicalUnsignedInputArgumentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalUnsignedInputArgumentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalUnsignedInputArgumentAST) ;
      result = GALGAS_lexicalUnsignedInputArgumentAST ((cPtr_lexicalUnsignedInputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalUnsignedInputArgumentAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST_2D_weak ("lexicalUnsignedInputArgumentAST-weak",
                                                                                               & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalUnsignedInputArgumentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalUnsignedInputArgumentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalUnsignedInputArgumentAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalUnsignedInputArgumentAST_2D_weak GALGAS_lexicalUnsignedInputArgumentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalUnsignedInputArgumentAST_2D_weak result ;
  const GALGAS_lexicalUnsignedInputArgumentAST_2D_weak * p = (const GALGAS_lexicalUnsignedInputArgumentAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalUnsignedInputArgumentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalUnsignedInputArgumentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalCurrentCharacterInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalCurrentCharacterInputArgumentAST::cPtr_lexicalCurrentCharacterInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (inCompiler COMMA_THERE),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalCurrentCharacterInputArgumentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST::printNonNullClassInstanceProperties () ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalCurrentCharacterInputArgumentAST::objectCompare (const GALGAS_lexicalCurrentCharacterInputArgumentAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCurrentCharacterInputArgumentAST::GALGAS_lexicalCurrentCharacterInputArgumentAST (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexicalCurrentCharacterInputArgumentAST GALGAS_lexicalCurrentCharacterInputArgumentAST::
init_21_ (const GALGAS_location & in_mLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalCurrentCharacterInputArgumentAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalCurrentCharacterInputArgumentAST (inCompiler COMMA_THERE)) ;
  object->lexicalCurrentCharacterInputArgumentAST_init_21_ (in_mLocation, inCompiler) ;
  const GALGAS_lexicalCurrentCharacterInputArgumentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCurrentCharacterInputArgumentAST::
lexicalCurrentCharacterInputArgumentAST_init_21_ (const GALGAS_location & in_mLocation,
                                                  Compiler * /* inCompiler */) {
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCurrentCharacterInputArgumentAST::GALGAS_lexicalCurrentCharacterInputArgumentAST (const cPtr_lexicalCurrentCharacterInputArgumentAST * inSourcePtr) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCurrentCharacterInputArgumentAST GALGAS_lexicalCurrentCharacterInputArgumentAST::class_func_new (const GALGAS_location & in_mLocation
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCurrentCharacterInputArgumentAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalCurrentCharacterInputArgumentAST (in_mLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_lexicalCurrentCharacterInputArgumentAST::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_lexicalCurrentCharacterInputArgumentAST * p = (cPtr_lexicalCurrentCharacterInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalCurrentCharacterInputArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalCurrentCharacterInputArgumentAST::cPtr_lexicalCurrentCharacterInputArgumentAST (const GALGAS_location & in_mLocation
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (THERE),
mProperty_mLocation () {
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalCurrentCharacterInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST ;
}

void cPtr_lexicalCurrentCharacterInputArgumentAST::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalCurrentCharacterInputArgumentAST:") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalCurrentCharacterInputArgumentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalCurrentCharacterInputArgumentAST (mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalCurrentCharacterInputArgumentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST ("lexicalCurrentCharacterInputArgumentAST",
                                                                                               & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCurrentCharacterInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCurrentCharacterInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCurrentCharacterInputArgumentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCurrentCharacterInputArgumentAST GALGAS_lexicalCurrentCharacterInputArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCurrentCharacterInputArgumentAST result ;
  const GALGAS_lexicalCurrentCharacterInputArgumentAST * p = (const GALGAS_lexicalCurrentCharacterInputArgumentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalCurrentCharacterInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCurrentCharacterInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak::objectCompare (const GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak & inOperand) const {
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

GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak::GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak & GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak::operator = (const GALGAS_lexicalCurrentCharacterInputArgumentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak::GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak (const GALGAS_lexicalCurrentCharacterInputArgumentAST & inSource) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCurrentCharacterInputArgumentAST GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak::bang_lexicalCurrentCharacterInputArgumentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalCurrentCharacterInputArgumentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
      result = GALGAS_lexicalCurrentCharacterInputArgumentAST ((cPtr_lexicalCurrentCharacterInputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalCurrentCharacterInputArgumentAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak ("lexicalCurrentCharacterInputArgumentAST-weak",
                                                                                                       & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak result ;
  const GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak * p = (const GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalCurrentCharacterInputArgumentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCurrentCharacterInputArgumentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalFunctionInputArgumentAST_2D_weak::objectCompare (const GALGAS_lexicalFunctionInputArgumentAST_2D_weak & inOperand) const {
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

GALGAS_lexicalFunctionInputArgumentAST_2D_weak::GALGAS_lexicalFunctionInputArgumentAST_2D_weak (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionInputArgumentAST_2D_weak & GALGAS_lexicalFunctionInputArgumentAST_2D_weak::operator = (const GALGAS_lexicalFunctionInputArgumentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionInputArgumentAST_2D_weak::GALGAS_lexicalFunctionInputArgumentAST_2D_weak (const GALGAS_lexicalFunctionInputArgumentAST & inSource) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionInputArgumentAST_2D_weak GALGAS_lexicalFunctionInputArgumentAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_lexicalFunctionInputArgumentAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionInputArgumentAST GALGAS_lexicalFunctionInputArgumentAST_2D_weak::bang_lexicalFunctionInputArgumentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionInputArgumentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalFunctionInputArgumentAST) ;
      result = GALGAS_lexicalFunctionInputArgumentAST ((cPtr_lexicalFunctionInputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalFunctionInputArgumentAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST_2D_weak ("lexicalFunctionInputArgumentAST-weak",
                                                                                               & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionInputArgumentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionInputArgumentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionInputArgumentAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionInputArgumentAST_2D_weak GALGAS_lexicalFunctionInputArgumentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionInputArgumentAST_2D_weak result ;
  const GALGAS_lexicalFunctionInputArgumentAST_2D_weak * p = (const GALGAS_lexicalFunctionInputArgumentAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalFunctionInputArgumentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionInputArgumentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalArgumentModeAST::GALGAS_lexicalArgumentModeAST (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GALGAS_lexicalArgumentModeAST GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalArgumentModeAST result ;
  result.mEnum = Enumeration::enum_lexicalInputMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalArgumentModeAST GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalArgumentModeAST result ;
  result.mEnum = Enumeration::enum_lexicalInputOutputMode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalArgumentModeAST::getter_lexicalInputMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lexicalInputMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalArgumentModeAST::getter_lexicalInputOutputMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lexicalInputOutputMode == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_lexicalArgumentModeAST [3] = {
  "(not built)",
  "lexicalInputMode",
  "lexicalInputOutputMode"
} ;

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalArgumentModeAST::description (String & ioString,
                                                 const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @lexicalArgumentModeAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_lexicalArgumentModeAST [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalArgumentModeAST::objectCompare (const GALGAS_lexicalArgumentModeAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalArgumentModeAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalArgumentModeAST ("lexicalArgumentModeAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalArgumentModeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalArgumentModeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalArgumentModeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalArgumentModeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalArgumentModeAST GALGAS_lexicalArgumentModeAST::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalArgumentModeAST result ;
  const GALGAS_lexicalArgumentModeAST * p = (const GALGAS_lexicalArgumentModeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalArgumentModeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalArgumentModeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalArgumentModeAST lexicalFormalModeName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_lexicalFormalModeName (const GALGAS_lexicalArgumentModeAST & inObject,
                                                     Compiler *
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalArgumentModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalArgumentModeAST::Enumeration::invalid:
    break ;
  case GALGAS_lexicalArgumentModeAST::Enumeration::enum_lexicalInputMode:
    {
      result_result = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_lexicalArgumentModeAST::Enumeration::enum_lexicalInputOutputMode:
    {
      result_result = GALGAS_string ("\?!") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalArgumentModeAST cppConstInFormalArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_cppConstInFormalArgument (const GALGAS_lexicalArgumentModeAST & inObject,
                                                        Compiler *
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalArgumentModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalArgumentModeAST::Enumeration::invalid:
    break ;
  case GALGAS_lexicalArgumentModeAST::Enumeration::enum_lexicalInputMode:
    {
      result_result = GALGAS_string ("const ") ;
    }
    break ;
  case GALGAS_lexicalArgumentModeAST::Enumeration::enum_lexicalInputOutputMode:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalArgumentModeAST cppReferenceInFormalArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_cppReferenceInFormalArgument (const GALGAS_lexicalArgumentModeAST & inObject,
                                                            Compiler *
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalArgumentModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalArgumentModeAST::Enumeration::invalid:
    break ;
  case GALGAS_lexicalArgumentModeAST::Enumeration::enum_lexicalInputMode:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalArgumentModeAST::Enumeration::enum_lexicalInputOutputMode:
    {
      result_result = GALGAS_string (" &") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalArgumentModeAST cocoaPointerInFormalArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_cocoaPointerInFormalArgument (const GALGAS_lexicalArgumentModeAST & inObject,
                                                            Compiler *
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalArgumentModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalArgumentModeAST::Enumeration::invalid:
    break ;
  case GALGAS_lexicalArgumentModeAST::Enumeration::enum_lexicalInputMode:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalArgumentModeAST::Enumeration::enum_lexicalInputOutputMode:
    {
      result_result = GALGAS_string (" *") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum::GALGAS_lexicalTypeEnum (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_string (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = Enumeration::enum_lexicalType_5F_string ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = Enumeration::enum_lexicalType_5F_char ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = Enumeration::enum_lexicalType_5F_uint ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = Enumeration::enum_lexicalType_5F_uint_36__34_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_sint (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = Enumeration::enum_lexicalType_5F_sint ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = Enumeration::enum_lexicalType_5F_sint_36__34_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_double (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = Enumeration::enum_lexicalType_5F_double ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = Enumeration::enum_lexicalType_5F_bigint ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalTypeEnum::getter_lexicalType_5F_string (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lexicalType_5F_string == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalTypeEnum::getter_lexicalType_5F_char (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lexicalType_5F_char == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalTypeEnum::getter_lexicalType_5F_uint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lexicalType_5F_uint == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalTypeEnum::getter_lexicalType_5F_uint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lexicalType_5F_uint_36__34_ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalTypeEnum::getter_lexicalType_5F_sint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lexicalType_5F_sint == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalTypeEnum::getter_lexicalType_5F_sint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lexicalType_5F_sint_36__34_ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalTypeEnum::getter_lexicalType_5F_double (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lexicalType_5F_double == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalTypeEnum::getter_lexicalType_5F_bigint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lexicalType_5F_bigint == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_lexicalTypeEnum [9] = {
  "(not built)",
  "lexicalType_string",
  "lexicalType_char",
  "lexicalType_uint",
  "lexicalType_uint64",
  "lexicalType_sint",
  "lexicalType_sint64",
  "lexicalType_double",
  "lexicalType_bigint"
} ;

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalTypeEnum::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @lexicalTypeEnum: ") ;
  ioString.appendCString (gEnumNameArrayFor_lexicalTypeEnum [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalTypeEnum::objectCompare (const GALGAS_lexicalTypeEnum & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalTypeEnum generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTypeEnum ("lexicalTypeEnum",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalTypeEnum::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTypeEnum ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalTypeEnum::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalTypeEnum (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  const GALGAS_lexicalTypeEnum * p = (const GALGAS_lexicalTypeEnum *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalTypeEnum *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTypeEnum", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalSentValueList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalSentValueList : public cCollectionElement {
  public: GALGAS_lexicalSentValueList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_lexicalSentValueList (const GALGAS_lstring & in_mLexicalFormalSelector,
                                                   const GALGAS_string & in_mLexicalAttributeName,
                                                   const GALGAS_lexicalTypeEnum & in_mLexicalType
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalSentValueList (const GALGAS_lexicalSentValueList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalSentValueList::cCollectionElement_lexicalSentValueList (const GALGAS_lstring & in_mLexicalFormalSelector,
                                                                                  const GALGAS_string & in_mLexicalAttributeName,
                                                                                  const GALGAS_lexicalTypeEnum & in_mLexicalType
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalFormalSelector, in_mLexicalAttributeName, in_mLexicalType) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalSentValueList::cCollectionElement_lexicalSentValueList (const GALGAS_lexicalSentValueList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLexicalFormalSelector, inElement.mProperty_mLexicalAttributeName, inElement.mProperty_mLexicalType) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalSentValueList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalSentValueList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_lexicalSentValueList (mObject.mProperty_mLexicalFormalSelector, mObject.mProperty_mLexicalAttributeName, mObject.mProperty_mLexicalType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalSentValueList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalFormalSelector" ":") ;
  mObject.mProperty_mLexicalFormalSelector.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalAttributeName" ":") ;
  mObject.mProperty_mLexicalAttributeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalType" ":") ;
  mObject.mProperty_mLexicalType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList::GALGAS_lexicalSentValueList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList::GALGAS_lexicalSentValueList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalSentValueList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalSentValueList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSentValueList::enterElement (const GALGAS_lexicalSentValueList_2D_element & inValue,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalSentValueList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                   const GALGAS_string & inOperand1,
                                                                                   const GALGAS_lexicalTypeEnum & inOperand2
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSentValueList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_lexicalSentValueList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalSentValueList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSentValueList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_lstring & in_mLexicalFormalSelector,
                                                             const GALGAS_string & in_mLexicalAttributeName,
                                                             const GALGAS_lexicalTypeEnum & in_mLexicalType
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalSentValueList * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalSentValueList (in_mLexicalFormalSelector,
                                                          in_mLexicalAttributeName,
                                                          in_mLexicalType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSentValueList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                       const GALGAS_string & inOperand1,
                                                       const GALGAS_lexicalTypeEnum & inOperand2
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalSentValueList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSentValueList::setter_append (const GALGAS_lstring inOperand0,
                                                 const GALGAS_string inOperand1,
                                                 const GALGAS_lexicalTypeEnum inOperand2,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalSentValueList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSentValueList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                        const GALGAS_string inOperand1,
                                                        const GALGAS_lexicalTypeEnum inOperand2,
                                                        const GALGAS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_lexicalSentValueList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_lexicalSentValueList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                        GALGAS_string & outOperand1,
                                                        GALGAS_lexicalTypeEnum & outOperand2,
                                                        const GALGAS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
        outOperand0 = p->mObject.mProperty_mLexicalFormalSelector ;
        outOperand1 = p->mObject.mProperty_mLexicalAttributeName ;
        outOperand2 = p->mObject.mProperty_mLexicalType ;
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

void GALGAS_lexicalSentValueList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                   GALGAS_string & outOperand1,
                                                   GALGAS_lexicalTypeEnum & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    outOperand0 = p->mObject.mProperty_mLexicalFormalSelector ;
    outOperand1 = p->mObject.mProperty_mLexicalAttributeName ;
    outOperand2 = p->mObject.mProperty_mLexicalType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSentValueList::setter_popLast (GALGAS_lstring & outOperand0,
                                                  GALGAS_string & outOperand1,
                                                  GALGAS_lexicalTypeEnum & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    outOperand0 = p->mObject.mProperty_mLexicalFormalSelector ;
    outOperand1 = p->mObject.mProperty_mLexicalAttributeName ;
    outOperand2 = p->mObject.mProperty_mLexicalType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSentValueList::method_first (GALGAS_lstring & outOperand0,
                                                GALGAS_string & outOperand1,
                                                GALGAS_lexicalTypeEnum & outOperand2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    outOperand0 = p->mObject.mProperty_mLexicalFormalSelector ;
    outOperand1 = p->mObject.mProperty_mLexicalAttributeName ;
    outOperand2 = p->mObject.mProperty_mLexicalType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSentValueList::method_last (GALGAS_lstring & outOperand0,
                                               GALGAS_string & outOperand1,
                                               GALGAS_lexicalTypeEnum & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    outOperand0 = p->mObject.mProperty_mLexicalFormalSelector ;
    outOperand1 = p->mObject.mProperty_mLexicalAttributeName ;
    outOperand2 = p->mObject.mProperty_mLexicalType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::add_operation (const GALGAS_lexicalSentValueList & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalSentValueList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSentValueList result = GALGAS_lexicalSentValueList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSentValueList result = GALGAS_lexicalSentValueList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSentValueList result = GALGAS_lexicalSentValueList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSentValueList::plusAssign_operation (const GALGAS_lexicalSentValueList inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSentValueList::setter_setMLexicalFormalSelectorAtIndex (GALGAS_lstring inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexicalFormalSelector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalSentValueList::getter_mLexicalFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    result = p->mObject.mProperty_mLexicalFormalSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSentValueList::setter_setMLexicalAttributeNameAtIndex (GALGAS_string inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexicalAttributeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexicalSentValueList::getter_mLexicalAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    result = p->mObject.mProperty_mLexicalAttributeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalSentValueList::setter_setMLexicalTypeAtIndex (GALGAS_lexicalTypeEnum inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexicalType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalSentValueList::getter_mLexicalTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
  GALGAS_lexicalTypeEnum result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    result = p->mObject.mProperty_mLexicalType ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_lexicalSentValueList::cEnumerator_lexicalSentValueList (const GALGAS_lexicalSentValueList & inEnumeratedObject,
                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList_2D_element cEnumerator_lexicalSentValueList::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSentValueList * p = (const cCollectionElement_lexicalSentValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalSentValueList::current_mLexicalFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSentValueList * p = (const cCollectionElement_lexicalSentValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
  return p->mObject.mProperty_mLexicalFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_lexicalSentValueList::current_mLexicalAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSentValueList * p = (const cCollectionElement_lexicalSentValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
  return p->mObject.mProperty_mLexicalAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum cEnumerator_lexicalSentValueList::current_mLexicalType (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSentValueList * p = (const cCollectionElement_lexicalSentValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
  return p->mObject.mProperty_mLexicalType ;
}




//--------------------------------------------------------------------------------------------------
//
//     @lexicalSentValueList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSentValueList ("lexicalSentValueList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSentValueList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSentValueList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSentValueList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSentValueList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSentValueList result ;
  const GALGAS_lexicalSentValueList * p = (const GALGAS_lexicalSentValueList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalSentValueList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSentValueList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_terminalMap::cMapElement_terminalMap (const GALGAS_terminalMap_2D_element & inValue
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mSentAttributeList (inValue.mProperty_mSentAttributeList) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_terminalMap::cMapElement_terminalMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_lexicalSentValueList & in_mSentAttributeList
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mSentAttributeList (in_mSentAttributeList) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_terminalMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_terminalMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_terminalMap (mProperty_lkey, mProperty_mSentAttributeList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_terminalMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSentAttributeList" ":") ;
  mProperty_mSentAttributeList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalMap::GALGAS_terminalMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalMap::GALGAS_terminalMap (const GALGAS_terminalMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalMap & GALGAS_terminalMap::operator = (const GALGAS_terminalMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalMap GALGAS_terminalMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_terminalMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalMap GALGAS_terminalMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_terminalMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalMap_2D_element_3F_ GALGAS_terminalMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_terminalMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_terminalMap * p = (cMapElement_terminalMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_terminalMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_terminalMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mSentAttributeList = p->mProperty_mSentAttributeList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalMap GALGAS_terminalMap::class_func_mapWithMapToOverride (const GALGAS_terminalMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_terminalMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalMap GALGAS_terminalMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_terminalMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalMap::enterElement (const GALGAS_terminalMap_2D_element & inValue,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  cMapElement_terminalMap * p = nullptr ;
  macroMyNew (p, cMapElement_terminalMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@terminalMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalMap::addAssign_operation (const GALGAS_lstring & inKey,
                                              const GALGAS_lexicalSentValueList & inArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_terminalMap * p = nullptr ;
  macroMyNew (p, cMapElement_terminalMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@terminalMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalMap GALGAS_terminalMap::add_operation (const GALGAS_terminalMap & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_terminalMap result = *this ;
  cEnumerator_terminalMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mSentAttributeList (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalMap::setter_insertKey (GALGAS_lstring inKey,
                                           GALGAS_lexicalSentValueList inArgument0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_terminalMap * p = nullptr ;
  macroMyNew (p, cMapElement_terminalMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' terminal has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_terminalMap_searchKey = "the '%K' terminal is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalMap::method_searchKey (GALGAS_lstring inKey,
                                           GALGAS_lexicalSentValueList & outArgument0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_terminalMap * p = (const cMapElement_terminalMap *) performSearch (inKey,
                                                                                       inCompiler,
                                                                                       kSearchErrorMessage_terminalMap_searchKey
                                                                                       COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_terminalMap) ;
    outArgument0 = p->mProperty_mSentAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList GALGAS_terminalMap::getter_mSentAttributeListForKey (const GALGAS_string & inKey,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_terminalMap * p = (const cMapElement_terminalMap *) attributes ;
  GALGAS_lexicalSentValueList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_terminalMap) ;
    result = p->mProperty_mSentAttributeList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalMap::setter_setMSentAttributeListForKey (GALGAS_lexicalSentValueList inAttributeValue,
                                                             GALGAS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_terminalMap * p = (cMapElement_terminalMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_terminalMap) ;
    p->mProperty_mSentAttributeList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_terminalMap * GALGAS_terminalMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_terminalMap * result = (cMapElement_terminalMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_terminalMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_terminalMap::cEnumerator_terminalMap (const GALGAS_terminalMap & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalMap_2D_element cEnumerator_terminalMap::current (LOCATION_ARGS) const {
  const cMapElement_terminalMap * p = (const cMapElement_terminalMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_terminalMap) ;
  return GALGAS_terminalMap_2D_element (p->mProperty_lkey, p->mProperty_mSentAttributeList) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_terminalMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList cEnumerator_terminalMap::current_mSentAttributeList (LOCATION_ARGS) const {
  const cMapElement_terminalMap * p = (const cMapElement_terminalMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_terminalMap) ;
  return p->mProperty_mSentAttributeList ;
}

//--------------------------------------------------------------------------------------------------
//
//     @terminalMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalMap ("terminalMap",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_terminalMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_terminalMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalMap GALGAS_terminalMap::extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_terminalMap result ;
  const GALGAS_terminalMap * p = (const GALGAS_terminalMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_terminalMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexicalTypeMap::cMapElement_lexicalTypeMap (const GALGAS_lexicalTypeMap_2D_element & inValue
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mLexicalType (inValue.mProperty_mLexicalType) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexicalTypeMap::cMapElement_lexicalTypeMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_lexicalTypeEnum & in_mLexicalType
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLexicalType (in_mLexicalType) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_lexicalTypeMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_lexicalTypeMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_lexicalTypeMap (mProperty_lkey, mProperty_mLexicalType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_lexicalTypeMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalType" ":") ;
  mProperty_mLexicalType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap::GALGAS_lexicalTypeMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap::GALGAS_lexicalTypeMap (const GALGAS_lexicalTypeMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap & GALGAS_lexicalTypeMap::operator = (const GALGAS_lexicalTypeMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap GALGAS_lexicalTypeMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTypeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap GALGAS_lexicalTypeMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalTypeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap_2D_element_3F_ GALGAS_lexicalTypeMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalTypeMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_lexicalTypeMap * p = (cMapElement_lexicalTypeMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_lexicalTypeMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_lexicalTypeMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mLexicalType = p->mProperty_mLexicalType ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap GALGAS_lexicalTypeMap::class_func_mapWithMapToOverride (const GALGAS_lexicalTypeMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTypeMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap GALGAS_lexicalTypeMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalTypeMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalTypeMap::enterElement (const GALGAS_lexicalTypeMap_2D_element & inValue,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cMapElement_lexicalTypeMap * p = nullptr ;
  macroMyNew (p, cMapElement_lexicalTypeMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalTypeMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalTypeMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_lexicalTypeEnum & inArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_lexicalTypeMap * p = nullptr ;
  macroMyNew (p, cMapElement_lexicalTypeMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalTypeMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap GALGAS_lexicalTypeMap::add_operation (const GALGAS_lexicalTypeMap & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalTypeMap result = *this ;
  cEnumerator_lexicalTypeMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mLexicalType (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalTypeMap::setter_insertKey (GALGAS_lstring inKey,
                                              GALGAS_lexicalTypeEnum inArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_lexicalTypeMap * p = nullptr ;
  macroMyNew (p, cMapElement_lexicalTypeMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '@%K' lexical type is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_lexicalTypeMap_searchKey = "there is no '@%K' lexical type" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalTypeMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_lexicalTypeEnum & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_lexicalTypeMap * p = (const cMapElement_lexicalTypeMap *) performSearch (inKey,
                                                                                             inCompiler,
                                                                                             kSearchErrorMessage_lexicalTypeMap_searchKey
                                                                                             COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_lexicalTypeMap) ;
    outArgument0 = p->mProperty_mLexicalType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeMap::getter_mLexicalTypeForKey (const GALGAS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalTypeMap * p = (const cMapElement_lexicalTypeMap *) attributes ;
  GALGAS_lexicalTypeEnum result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalTypeMap) ;
    result = p->mProperty_mLexicalType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalTypeMap::setter_setMLexicalTypeForKey (GALGAS_lexicalTypeEnum inAttributeValue,
                                                          GALGAS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalTypeMap * p = (cMapElement_lexicalTypeMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalTypeMap) ;
    p->mProperty_mLexicalType = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexicalTypeMap * GALGAS_lexicalTypeMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_lexicalTypeMap * result = (cMapElement_lexicalTypeMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalTypeMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_lexicalTypeMap::cEnumerator_lexicalTypeMap (const GALGAS_lexicalTypeMap & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap_2D_element cEnumerator_lexicalTypeMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalTypeMap * p = (const cMapElement_lexicalTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalTypeMap) ;
  return GALGAS_lexicalTypeMap_2D_element (p->mProperty_lkey, p->mProperty_mLexicalType) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalTypeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum cEnumerator_lexicalTypeMap::current_mLexicalType (LOCATION_ARGS) const {
  const cMapElement_lexicalTypeMap * p = (const cMapElement_lexicalTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalTypeMap) ;
  return p->mProperty_mLexicalType ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalTypeMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTypeMap ("lexicalTypeMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalTypeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTypeMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalTypeMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalTypeMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeMap GALGAS_lexicalTypeMap::extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTypeMap result ;
  const GALGAS_lexicalTypeMap * p = (const GALGAS_lexicalTypeMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalTypeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTypeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexicalAttributeMap::cMapElement_lexicalAttributeMap (const GALGAS_lexicalAttributeMap_2D_element & inValue
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mLexicalType (inValue.mProperty_mLexicalType) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexicalAttributeMap::cMapElement_lexicalAttributeMap (const GALGAS_lstring & inKey,
                                                                  const GALGAS_lexicalTypeEnum & in_mLexicalType
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLexicalType (in_mLexicalType) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_lexicalAttributeMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_lexicalAttributeMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_lexicalAttributeMap (mProperty_lkey, mProperty_mLexicalType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_lexicalAttributeMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalType" ":") ;
  mProperty_mLexicalType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeMap::GALGAS_lexicalAttributeMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeMap::GALGAS_lexicalAttributeMap (const GALGAS_lexicalAttributeMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeMap & GALGAS_lexicalAttributeMap::operator = (const GALGAS_lexicalAttributeMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeMap GALGAS_lexicalAttributeMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeMap GALGAS_lexicalAttributeMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalAttributeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeMap_2D_element_3F_ GALGAS_lexicalAttributeMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_lexicalAttributeMap * p = (cMapElement_lexicalAttributeMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_lexicalAttributeMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_lexicalAttributeMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mLexicalType = p->mProperty_mLexicalType ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeMap GALGAS_lexicalAttributeMap::class_func_mapWithMapToOverride (const GALGAS_lexicalAttributeMap & inMapToOverride
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeMap GALGAS_lexicalAttributeMap::getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeMap::enterElement (const GALGAS_lexicalAttributeMap_2D_element & inValue,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_lexicalAttributeMap * p = nullptr ;
  macroMyNew (p, cMapElement_lexicalAttributeMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalAttributeMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                      const GALGAS_lexicalTypeEnum & inArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_lexicalAttributeMap * p = nullptr ;
  macroMyNew (p, cMapElement_lexicalAttributeMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalAttributeMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeMap GALGAS_lexicalAttributeMap::add_operation (const GALGAS_lexicalAttributeMap & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeMap result = *this ;
  cEnumerator_lexicalAttributeMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mLexicalType (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeMap::setter_insertKey (GALGAS_lstring inKey,
                                                   GALGAS_lexicalTypeEnum inArgument0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_lexicalAttributeMap * p = nullptr ;
  macroMyNew (p, cMapElement_lexicalAttributeMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' lexical attribute has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_lexicalAttributeMap_searchKey = "the '%K' lexical attribute is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeMap::method_searchKey (GALGAS_lstring inKey,
                                                   GALGAS_lexicalTypeEnum & outArgument0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_lexicalAttributeMap * p = (const cMapElement_lexicalAttributeMap *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kSearchErrorMessage_lexicalAttributeMap_searchKey
                                                                                                       COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_lexicalAttributeMap) ;
    outArgument0 = p->mProperty_mLexicalType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalAttributeMap::getter_mLexicalTypeForKey (const GALGAS_string & inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalAttributeMap * p = (const cMapElement_lexicalAttributeMap *) attributes ;
  GALGAS_lexicalTypeEnum result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalAttributeMap) ;
    result = p->mProperty_mLexicalType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeMap::setter_setMLexicalTypeForKey (GALGAS_lexicalTypeEnum inAttributeValue,
                                                               GALGAS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalAttributeMap * p = (cMapElement_lexicalAttributeMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalAttributeMap) ;
    p->mProperty_mLexicalType = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexicalAttributeMap * GALGAS_lexicalAttributeMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_lexicalAttributeMap * result = (cMapElement_lexicalAttributeMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalAttributeMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_lexicalAttributeMap::cEnumerator_lexicalAttributeMap (const GALGAS_lexicalAttributeMap & inEnumeratedObject,
                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeMap_2D_element cEnumerator_lexicalAttributeMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalAttributeMap * p = (const cMapElement_lexicalAttributeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalAttributeMap) ;
  return GALGAS_lexicalAttributeMap_2D_element (p->mProperty_lkey, p->mProperty_mLexicalType) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalAttributeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum cEnumerator_lexicalAttributeMap::current_mLexicalType (LOCATION_ARGS) const {
  const cMapElement_lexicalAttributeMap * p = (const cMapElement_lexicalAttributeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalAttributeMap) ;
  return p->mProperty_mLexicalType ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalAttributeMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeMap ("lexicalAttributeMap",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalAttributeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalAttributeMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalAttributeMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeMap GALGAS_lexicalAttributeMap::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeMap result ;
  const GALGAS_lexicalAttributeMap * p = (const GALGAS_lexicalAttributeMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalAttributeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@terminalList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_terminalList : public cCollectionElement {
  public: GALGAS_terminalList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_terminalList (const GALGAS_lstring & in_mTerminalName,
                                           const GALGAS_lexicalSentValueList & in_mSentAttributeList,
                                           const GALGAS_string & in_mSyntaxErrorMessage,
                                           const GALGAS_bool & in_isEndOfTemplateMark,
                                           const GALGAS_bool & in_atomicSelection,
                                           const GALGAS_uint & in_mStyleIndex
                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_terminalList (const GALGAS_terminalList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_terminalList::cCollectionElement_terminalList (const GALGAS_lstring & in_mTerminalName,
                                                                  const GALGAS_lexicalSentValueList & in_mSentAttributeList,
                                                                  const GALGAS_string & in_mSyntaxErrorMessage,
                                                                  const GALGAS_bool & in_isEndOfTemplateMark,
                                                                  const GALGAS_bool & in_atomicSelection,
                                                                  const GALGAS_uint & in_mStyleIndex
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTerminalName, in_mSentAttributeList, in_mSyntaxErrorMessage, in_isEndOfTemplateMark, in_atomicSelection, in_mStyleIndex) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_terminalList::cCollectionElement_terminalList (const GALGAS_terminalList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTerminalName, inElement.mProperty_mSentAttributeList, inElement.mProperty_mSyntaxErrorMessage, inElement.mProperty_isEndOfTemplateMark, inElement.mProperty_atomicSelection, inElement.mProperty_mStyleIndex) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_terminalList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_terminalList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_terminalList (mObject.mProperty_mTerminalName, mObject.mProperty_mSentAttributeList, mObject.mProperty_mSyntaxErrorMessage, mObject.mProperty_isEndOfTemplateMark, mObject.mProperty_atomicSelection, mObject.mProperty_mStyleIndex COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_terminalList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTerminalName" ":") ;
  mObject.mProperty_mTerminalName.description (ioString, inIndentation) ;
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
  ioString.appendCString ("isEndOfTemplateMark" ":") ;
  mObject.mProperty_isEndOfTemplateMark.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("atomicSelection" ":") ;
  mObject.mProperty_atomicSelection.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mStyleIndex" ":") ;
  mObject.mProperty_mStyleIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalList::GALGAS_terminalList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalList::GALGAS_terminalList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalList GALGAS_terminalList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_terminalList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalList GALGAS_terminalList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_terminalList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalList::enterElement (const GALGAS_terminalList_2D_element & inValue,
                                        Compiler * /* inCompiler */
                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_terminalList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalList GALGAS_terminalList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                   const GALGAS_lexicalSentValueList & inOperand1,
                                                                   const GALGAS_string & inOperand2,
                                                                   const GALGAS_bool & inOperand3,
                                                                   const GALGAS_bool & inOperand4,
                                                                   const GALGAS_uint & inOperand5
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_terminalList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_terminalList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_terminalList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_lstring & in_mTerminalName,
                                                     const GALGAS_lexicalSentValueList & in_mSentAttributeList,
                                                     const GALGAS_string & in_mSyntaxErrorMessage,
                                                     const GALGAS_bool & in_isEndOfTemplateMark,
                                                     const GALGAS_bool & in_atomicSelection,
                                                     const GALGAS_uint & in_mStyleIndex
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalList * p = nullptr ;
  macroMyNew (p, cCollectionElement_terminalList (in_mTerminalName,
                                                  in_mSentAttributeList,
                                                  in_mSyntaxErrorMessage,
                                                  in_isEndOfTemplateMark,
                                                  in_atomicSelection,
                                                  in_mStyleIndex COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                               const GALGAS_lexicalSentValueList & inOperand1,
                                               const GALGAS_string & inOperand2,
                                               const GALGAS_bool & inOperand3,
                                               const GALGAS_bool & inOperand4,
                                               const GALGAS_uint & inOperand5
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_terminalList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalList::setter_append (const GALGAS_lstring inOperand0,
                                         const GALGAS_lexicalSentValueList inOperand1,
                                         const GALGAS_string inOperand2,
                                         const GALGAS_bool inOperand3,
                                         const GALGAS_bool inOperand4,
                                         const GALGAS_uint inOperand5,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_terminalList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                const GALGAS_lexicalSentValueList inOperand1,
                                                const GALGAS_string inOperand2,
                                                const GALGAS_bool inOperand3,
                                                const GALGAS_bool inOperand4,
                                                const GALGAS_uint inOperand5,
                                                const GALGAS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_terminalList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
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

void GALGAS_terminalList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                GALGAS_lexicalSentValueList & outOperand1,
                                                GALGAS_string & outOperand2,
                                                GALGAS_bool & outOperand3,
                                                GALGAS_bool & outOperand4,
                                                GALGAS_uint & outOperand5,
                                                const GALGAS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        outOperand5.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_terminalList) ;
        outOperand0 = p->mObject.mProperty_mTerminalName ;
        outOperand1 = p->mObject.mProperty_mSentAttributeList ;
        outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
        outOperand3 = p->mObject.mProperty_isEndOfTemplateMark ;
        outOperand4 = p->mObject.mProperty_atomicSelection ;
        outOperand5 = p->mObject.mProperty_mStyleIndex ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalList::setter_popFirst (GALGAS_lstring & outOperand0,
                                           GALGAS_lexicalSentValueList & outOperand1,
                                           GALGAS_string & outOperand2,
                                           GALGAS_bool & outOperand3,
                                           GALGAS_bool & outOperand4,
                                           GALGAS_uint & outOperand5,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    outOperand0 = p->mObject.mProperty_mTerminalName ;
    outOperand1 = p->mObject.mProperty_mSentAttributeList ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_isEndOfTemplateMark ;
    outOperand4 = p->mObject.mProperty_atomicSelection ;
    outOperand5 = p->mObject.mProperty_mStyleIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalList::setter_popLast (GALGAS_lstring & outOperand0,
                                          GALGAS_lexicalSentValueList & outOperand1,
                                          GALGAS_string & outOperand2,
                                          GALGAS_bool & outOperand3,
                                          GALGAS_bool & outOperand4,
                                          GALGAS_uint & outOperand5,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    outOperand0 = p->mObject.mProperty_mTerminalName ;
    outOperand1 = p->mObject.mProperty_mSentAttributeList ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_isEndOfTemplateMark ;
    outOperand4 = p->mObject.mProperty_atomicSelection ;
    outOperand5 = p->mObject.mProperty_mStyleIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalList::method_first (GALGAS_lstring & outOperand0,
                                        GALGAS_lexicalSentValueList & outOperand1,
                                        GALGAS_string & outOperand2,
                                        GALGAS_bool & outOperand3,
                                        GALGAS_bool & outOperand4,
                                        GALGAS_uint & outOperand5,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    outOperand0 = p->mObject.mProperty_mTerminalName ;
    outOperand1 = p->mObject.mProperty_mSentAttributeList ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_isEndOfTemplateMark ;
    outOperand4 = p->mObject.mProperty_atomicSelection ;
    outOperand5 = p->mObject.mProperty_mStyleIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalList::method_last (GALGAS_lstring & outOperand0,
                                       GALGAS_lexicalSentValueList & outOperand1,
                                       GALGAS_string & outOperand2,
                                       GALGAS_bool & outOperand3,
                                       GALGAS_bool & outOperand4,
                                       GALGAS_uint & outOperand5,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    outOperand0 = p->mObject.mProperty_mTerminalName ;
    outOperand1 = p->mObject.mProperty_mSentAttributeList ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_isEndOfTemplateMark ;
    outOperand4 = p->mObject.mProperty_atomicSelection ;
    outOperand5 = p->mObject.mProperty_mStyleIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalList GALGAS_terminalList::add_operation (const GALGAS_terminalList & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_terminalList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalList GALGAS_terminalList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_terminalList result = GALGAS_terminalList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalList GALGAS_terminalList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_terminalList result = GALGAS_terminalList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalList GALGAS_terminalList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_terminalList result = GALGAS_terminalList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalList::plusAssign_operation (const GALGAS_terminalList inOperand,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalList::setter_setMTerminalNameAtIndex (GALGAS_lstring inOperand,
                                                          GALGAS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTerminalName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_terminalList::getter_mTerminalNameAtIndex (const GALGAS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mProperty_mTerminalName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalList::setter_setMSentAttributeListAtIndex (GALGAS_lexicalSentValueList inOperand,
                                                               GALGAS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSentAttributeList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList GALGAS_terminalList::getter_mSentAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GALGAS_lexicalSentValueList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mProperty_mSentAttributeList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalList::setter_setMSyntaxErrorMessageAtIndex (GALGAS_string inOperand,
                                                                GALGAS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSyntaxErrorMessage = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_terminalList::getter_mSyntaxErrorMessageAtIndex (const GALGAS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mProperty_mSyntaxErrorMessage ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalList::setter_setIsEndOfTemplateMarkAtIndex (GALGAS_bool inOperand,
                                                                GALGAS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_isEndOfTemplateMark = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_terminalList::getter_isEndOfTemplateMarkAtIndex (const GALGAS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mProperty_isEndOfTemplateMark ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalList::setter_setAtomicSelectionAtIndex (GALGAS_bool inOperand,
                                                            GALGAS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_atomicSelection = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_terminalList::getter_atomicSelectionAtIndex (const GALGAS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mProperty_atomicSelection ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalList::setter_setMStyleIndexAtIndex (GALGAS_uint inOperand,
                                                        GALGAS_uint inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStyleIndex = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_terminalList::getter_mStyleIndexAtIndex (const GALGAS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalList * p = (cCollectionElement_terminalList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalList) ;
    result = p->mObject.mProperty_mStyleIndex ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_terminalList::cEnumerator_terminalList (const GALGAS_terminalList & inEnumeratedObject,
                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalList_2D_element cEnumerator_terminalList::current (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_terminalList::current_mTerminalName (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mProperty_mTerminalName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSentValueList cEnumerator_terminalList::current_mSentAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mProperty_mSentAttributeList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_terminalList::current_mSyntaxErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mProperty_mSyntaxErrorMessage ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_terminalList::current_isEndOfTemplateMark (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mProperty_isEndOfTemplateMark ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_terminalList::current_atomicSelection (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mProperty_atomicSelection ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_terminalList::current_mStyleIndex (LOCATION_ARGS) const {
  const cCollectionElement_terminalList * p = (const cCollectionElement_terminalList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalList) ;
  return p->mObject.mProperty_mStyleIndex ;
}




//--------------------------------------------------------------------------------------------------
//
//     @terminalList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalList ("terminalList",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_terminalList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_terminalList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalList GALGAS_terminalList::extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_terminalList result ;
  const GALGAS_terminalList * p = (const GALGAS_terminalList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_terminalList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexicalExplicitTokenListMap::cMapElement_lexicalExplicitTokenListMap (const GALGAS_lexicalExplicitTokenListMap_2D_element & inValue
                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mTerminal (inValue.mProperty_mTerminal),
mProperty_atomicSelection (inValue.mProperty_atomicSelection),
mProperty_isEndOfTemplateMark (inValue.mProperty_isEndOfTemplateMark) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexicalExplicitTokenListMap::cMapElement_lexicalExplicitTokenListMap (const GALGAS_lstring & inKey,
                                                                                  const GALGAS_lstring & in_mTerminal,
                                                                                  const GALGAS_bool & in_atomicSelection,
                                                                                  const GALGAS_bool & in_isEndOfTemplateMark
                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mTerminal (in_mTerminal),
mProperty_atomicSelection (in_atomicSelection),
mProperty_isEndOfTemplateMark (in_isEndOfTemplateMark) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_lexicalExplicitTokenListMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_lexicalExplicitTokenListMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_lexicalExplicitTokenListMap (mProperty_lkey, mProperty_mTerminal, mProperty_atomicSelection, mProperty_isEndOfTemplateMark COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_lexicalExplicitTokenListMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTerminal" ":") ;
  mProperty_mTerminal.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("atomicSelection" ":") ;
  mProperty_atomicSelection.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("isEndOfTemplateMark" ":") ;
  mProperty_isEndOfTemplateMark.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap::GALGAS_lexicalExplicitTokenListMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap::GALGAS_lexicalExplicitTokenListMap (const GALGAS_lexicalExplicitTokenListMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap & GALGAS_lexicalExplicitTokenListMap::operator = (const GALGAS_lexicalExplicitTokenListMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap GALGAS_lexicalExplicitTokenListMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap GALGAS_lexicalExplicitTokenListMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap_2D_element_3F_ GALGAS_lexicalExplicitTokenListMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalExplicitTokenListMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_lexicalExplicitTokenListMap * p = (cMapElement_lexicalExplicitTokenListMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_lexicalExplicitTokenListMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_lexicalExplicitTokenListMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mTerminal = p->mProperty_mTerminal ;
      element.mProperty_atomicSelection = p->mProperty_atomicSelection ;
      element.mProperty_isEndOfTemplateMark = p->mProperty_isEndOfTemplateMark ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap GALGAS_lexicalExplicitTokenListMap::class_func_mapWithMapToOverride (const GALGAS_lexicalExplicitTokenListMap & inMapToOverride
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap GALGAS_lexicalExplicitTokenListMap::getter_overriddenMap (Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExplicitTokenListMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMap::enterElement (const GALGAS_lexicalExplicitTokenListMap_2D_element & inValue,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_lexicalExplicitTokenListMap * p = nullptr ;
  macroMyNew (p, cMapElement_lexicalExplicitTokenListMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalExplicitTokenListMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                              const GALGAS_lstring & inArgument0,
                                                              const GALGAS_bool & inArgument1,
                                                              const GALGAS_bool & inArgument2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_lexicalExplicitTokenListMap * p = nullptr ;
  macroMyNew (p, cMapElement_lexicalExplicitTokenListMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalExplicitTokenListMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap GALGAS_lexicalExplicitTokenListMap::add_operation (const GALGAS_lexicalExplicitTokenListMap & inOperand,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExplicitTokenListMap result = *this ;
  cEnumerator_lexicalExplicitTokenListMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mTerminal (HERE), enumerator.current_atomicSelection (HERE), enumerator.current_isEndOfTemplateMark (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMap::setter_insertKey (GALGAS_lstring inKey,
                                                           GALGAS_lstring inArgument0,
                                                           GALGAS_bool inArgument1,
                                                           GALGAS_bool inArgument2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_lexicalExplicitTokenListMap * p = nullptr ;
  macroMyNew (p, cMapElement_lexicalExplicitTokenListMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' terminal has been already declared in the list" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_lexicalExplicitTokenListMap_searchKey = "the '%K' terminal is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMap::method_searchKey (GALGAS_lstring inKey,
                                                           GALGAS_lstring & outArgument0,
                                                           GALGAS_bool & outArgument1,
                                                           GALGAS_bool & outArgument2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMap * p = (const cMapElement_lexicalExplicitTokenListMap *) performSearch (inKey,
                                                                                                                       inCompiler,
                                                                                                                       kSearchErrorMessage_lexicalExplicitTokenListMap_searchKey
                                                                                                                       COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
    outArgument0 = p->mProperty_mTerminal ;
    outArgument1 = p->mProperty_atomicSelection ;
    outArgument2 = p->mProperty_isEndOfTemplateMark ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalExplicitTokenListMap::getter_mTerminalForKey (const GALGAS_string & inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalExplicitTokenListMap * p = (const cMapElement_lexicalExplicitTokenListMap *) attributes ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
    result = p->mProperty_mTerminal ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalExplicitTokenListMap::getter_atomicSelectionForKey (const GALGAS_string & inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalExplicitTokenListMap * p = (const cMapElement_lexicalExplicitTokenListMap *) attributes ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
    result = p->mProperty_atomicSelection ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalExplicitTokenListMap::getter_isEndOfTemplateMarkForKey (const GALGAS_string & inKey,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalExplicitTokenListMap * p = (const cMapElement_lexicalExplicitTokenListMap *) attributes ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
    result = p->mProperty_isEndOfTemplateMark ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMap::setter_setMTerminalForKey (GALGAS_lstring inAttributeValue,
                                                                    GALGAS_string inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalExplicitTokenListMap * p = (cMapElement_lexicalExplicitTokenListMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
    p->mProperty_mTerminal = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMap::setter_setAtomicSelectionForKey (GALGAS_bool inAttributeValue,
                                                                          GALGAS_string inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalExplicitTokenListMap * p = (cMapElement_lexicalExplicitTokenListMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
    p->mProperty_atomicSelection = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMap::setter_setIsEndOfTemplateMarkForKey (GALGAS_bool inAttributeValue,
                                                                              GALGAS_string inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalExplicitTokenListMap * p = (cMapElement_lexicalExplicitTokenListMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
    p->mProperty_isEndOfTemplateMark = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexicalExplicitTokenListMap * GALGAS_lexicalExplicitTokenListMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_lexicalExplicitTokenListMap * result = (cMapElement_lexicalExplicitTokenListMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalExplicitTokenListMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_lexicalExplicitTokenListMap::cEnumerator_lexicalExplicitTokenListMap (const GALGAS_lexicalExplicitTokenListMap & inEnumeratedObject,
                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap_2D_element cEnumerator_lexicalExplicitTokenListMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMap * p = (const cMapElement_lexicalExplicitTokenListMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
  return GALGAS_lexicalExplicitTokenListMap_2D_element (p->mProperty_lkey, p->mProperty_mTerminal, p->mProperty_atomicSelection, p->mProperty_isEndOfTemplateMark) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalExplicitTokenListMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalExplicitTokenListMap::current_mTerminal (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMap * p = (const cMapElement_lexicalExplicitTokenListMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
  return p->mProperty_mTerminal ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_lexicalExplicitTokenListMap::current_atomicSelection (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMap * p = (const cMapElement_lexicalExplicitTokenListMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
  return p->mProperty_atomicSelection ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_lexicalExplicitTokenListMap::current_isEndOfTemplateMark (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMap * p = (const cMapElement_lexicalExplicitTokenListMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMap) ;
  return p->mProperty_isEndOfTemplateMark ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalExplicitTokenListMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap ("lexicalExplicitTokenListMap",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalExplicitTokenListMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalExplicitTokenListMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExplicitTokenListMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap GALGAS_lexicalExplicitTokenListMap::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMap result ;
  const GALGAS_lexicalExplicitTokenListMap * p = (const GALGAS_lexicalExplicitTokenListMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalExplicitTokenListMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExplicitTokenListMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@tokenSortedlist' sorted list
//
//--------------------------------------------------------------------------------------------------

class cSortedListElement_tokenSortedlist : public cSortedListElement {
  public: GALGAS_tokenSortedlist_2D_element mObject ;

//--- Constructors
  public: cSortedListElement_tokenSortedlist (const GALGAS_uint & in_mLength,
                                              const GALGAS_string & in_mName,
                                              const GALGAS_string & in_mTerminalName
                                              COMMA_LOCATION_ARGS) ;

  public: cSortedListElement_tokenSortedlist (const GALGAS_tokenSortedlist_2D_element & inObject
                                              COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public: virtual ComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//--------------------------------------------------------------------------------------------------

cSortedListElement_tokenSortedlist::cSortedListElement_tokenSortedlist (const GALGAS_uint & in_mLength,
                                                                        const GALGAS_string & in_mName,
                                                                        const GALGAS_string & in_mTerminalName
                                                                        COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mLength, in_mName, in_mTerminalName) {
}

//--------------------------------------------------------------------------------------------------

cSortedListElement_tokenSortedlist::
cSortedListElement_tokenSortedlist (const GALGAS_tokenSortedlist_2D_element & inObject
                                    COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (inObject) {
}

//--------------------------------------------------------------------------------------------------

bool cSortedListElement_tokenSortedlist::isValid (void) const {
  return mObject.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cSortedListElement * cSortedListElement_tokenSortedlist::copy (void) {
  cSortedListElement * result = nullptr ;
  macroMyNew (result, cSortedListElement_tokenSortedlist (mObject.mProperty_mLength, mObject.mProperty_mName, mObject.mProperty_mTerminalName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cSortedListElement_tokenSortedlist::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLength" ":") ;
  mObject.mProperty_mLength.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mName" ":") ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTerminalName" ":") ;
  mObject.mProperty_mTerminalName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist::GALGAS_tokenSortedlist (void) :
AC_GALGAS_sortedlist () {
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tokenSortedlist::enterElement (const GALGAS_tokenSortedlist_2D_element & inValue,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  cSortedListElement * p = nullptr ;
  macroMyNew (p, cSortedListElement_tokenSortedlist (inValue COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cSortedListElement_tokenSortedlist::compareForSorting (const cSortedListElement * inOperand) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cSortedListElement_tokenSortedlist * operand = (const cSortedListElement_tokenSortedlist *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_tokenSortedlist) ;
  if (result == ComparisonResult::operandEqual) {
    result = mObject.mProperty_mLength.objectCompare (operand->mObject.mProperty_mLength) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mObject.mProperty_mName.objectCompare (operand->mObject.mProperty_mName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist GALGAS_tokenSortedlist::class_func_emptySortedList (LOCATION_ARGS) {
  GALGAS_tokenSortedlist result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist GALGAS_tokenSortedlist::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_tokenSortedlist result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist GALGAS_tokenSortedlist::class_func_sortedListWithValue (const GALGAS_uint & inOperand0,
                                                                               const GALGAS_string & inOperand1,
                                                                               const GALGAS_string & inOperand2
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_tokenSortedlist result = class_func_emptySortedList (THERE) ;
  cSortedListElement * p = nullptr ;
  macroMyNew (p, cSortedListElement_tokenSortedlist (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tokenSortedlist::addAssign_operation (const GALGAS_uint & inOperand0,
                                                  const GALGAS_string & inOperand1,
                                                  const GALGAS_string & inOperand2
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = nullptr ;
    macroMyNew (p, cSortedListElement_tokenSortedlist (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tokenSortedlist::setter_insert (const GALGAS_uint inOperand0,
                                            const GALGAS_string inOperand1,
                                            const GALGAS_string inOperand2,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = nullptr ;
    macroMyNew (p, cSortedListElement_tokenSortedlist (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tokenSortedlist::plusAssign_operation (const GALGAS_tokenSortedlist inOperand,
                                                   Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tokenSortedlist::setter_popSmallest (GALGAS_uint & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_string & outOperand2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_tokenSortedlist * p = (cSortedListElement_tokenSortedlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_tokenSortedlist) ;
    outOperand0 = p->mObject.mProperty_mLength ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mTerminalName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tokenSortedlist::setter_popGreatest (GALGAS_uint & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_string & outOperand2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_tokenSortedlist * p = (cSortedListElement_tokenSortedlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_tokenSortedlist) ;
    outOperand0 = p->mObject.mProperty_mLength ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mTerminalName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tokenSortedlist::method_smallest (GALGAS_uint & outOperand0,
                                              GALGAS_string & outOperand1,
                                              GALGAS_string & outOperand2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_tokenSortedlist * p = (cSortedListElement_tokenSortedlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_tokenSortedlist) ;
    outOperand0 = p->mObject.mProperty_mLength ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mTerminalName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tokenSortedlist::method_greatest (GALGAS_uint & outOperand0,
                                              GALGAS_string & outOperand1,
                                              GALGAS_string & outOperand2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_tokenSortedlist * p = (cSortedListElement_tokenSortedlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_tokenSortedlist) ;
    outOperand0 = p->mObject.mProperty_mLength ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mTerminalName ;
  }
}

//--------------------------------------------------------------------------------------------------

cEnumerator_tokenSortedlist::cEnumerator_tokenSortedlist (const GALGAS_tokenSortedlist & inEnumeratedObject,
                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist_2D_element cEnumerator_tokenSortedlist::current (LOCATION_ARGS) const {
  const cSortedListElement_tokenSortedlist * p = (const cSortedListElement_tokenSortedlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_tokenSortedlist) ;
  return p->mObject ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_tokenSortedlist::current_mLength (LOCATION_ARGS) const {
  const cSortedListElement_tokenSortedlist * p = (const cSortedListElement_tokenSortedlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_tokenSortedlist) ;
  return p->mObject.mProperty_mLength ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_tokenSortedlist::current_mName (LOCATION_ARGS) const {
  const cSortedListElement_tokenSortedlist * p = (const cSortedListElement_tokenSortedlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_tokenSortedlist) ;
  return p->mObject.mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_tokenSortedlist::current_mTerminalName (LOCATION_ARGS) const {
  const cSortedListElement_tokenSortedlist * p = (const cSortedListElement_tokenSortedlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_tokenSortedlist) ;
  return p->mObject.mProperty_mTerminalName ;
}



//--------------------------------------------------------------------------------------------------
//
//     @tokenSortedlist generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tokenSortedlist ("tokenSortedlist",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tokenSortedlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tokenSortedlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tokenSortedlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tokenSortedlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist GALGAS_tokenSortedlist::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_tokenSortedlist result ;
  const GALGAS_tokenSortedlist * p = (const GALGAS_tokenSortedlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_tokenSortedlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tokenSortedlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexicalExplicitTokenListMapMap::cMapElement_lexicalExplicitTokenListMapMap (const GALGAS_lexicalExplicitTokenListMapMap_2D_element & inValue
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mExplicitTokenListMap (inValue.mProperty_mExplicitTokenListMap),
mProperty_mTokenSortedList (inValue.mProperty_mTokenSortedList),
mProperty_mShouldBeGenerated (inValue.mProperty_mShouldBeGenerated) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexicalExplicitTokenListMapMap::cMapElement_lexicalExplicitTokenListMapMap (const GALGAS_lstring & inKey,
                                                                                        const GALGAS_lexicalExplicitTokenListMap & in_mExplicitTokenListMap,
                                                                                        const GALGAS_tokenSortedlist & in_mTokenSortedList,
                                                                                        const GALGAS_bool & in_mShouldBeGenerated
                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mExplicitTokenListMap (in_mExplicitTokenListMap),
mProperty_mTokenSortedList (in_mTokenSortedList),
mProperty_mShouldBeGenerated (in_mShouldBeGenerated) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_lexicalExplicitTokenListMapMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_lexicalExplicitTokenListMapMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_lexicalExplicitTokenListMapMap (mProperty_lkey, mProperty_mExplicitTokenListMap, mProperty_mTokenSortedList, mProperty_mShouldBeGenerated COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_lexicalExplicitTokenListMapMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExplicitTokenListMap" ":") ;
  mProperty_mExplicitTokenListMap.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTokenSortedList" ":") ;
  mProperty_mTokenSortedList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mShouldBeGenerated" ":") ;
  mProperty_mShouldBeGenerated.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMapMap::GALGAS_lexicalExplicitTokenListMapMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMapMap::GALGAS_lexicalExplicitTokenListMapMap (const GALGAS_lexicalExplicitTokenListMapMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMapMap & GALGAS_lexicalExplicitTokenListMapMap::operator = (const GALGAS_lexicalExplicitTokenListMapMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMapMap GALGAS_lexicalExplicitTokenListMapMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMapMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMapMap GALGAS_lexicalExplicitTokenListMapMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMapMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMapMap_2D_element_3F_ GALGAS_lexicalExplicitTokenListMapMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalExplicitTokenListMapMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_lexicalExplicitTokenListMapMap * p = (cMapElement_lexicalExplicitTokenListMapMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_lexicalExplicitTokenListMapMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_lexicalExplicitTokenListMapMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mExplicitTokenListMap = p->mProperty_mExplicitTokenListMap ;
      element.mProperty_mTokenSortedList = p->mProperty_mTokenSortedList ;
      element.mProperty_mShouldBeGenerated = p->mProperty_mShouldBeGenerated ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMapMap GALGAS_lexicalExplicitTokenListMapMap::class_func_mapWithMapToOverride (const GALGAS_lexicalExplicitTokenListMapMap & inMapToOverride
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMapMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMapMap GALGAS_lexicalExplicitTokenListMapMap::getter_overriddenMap (Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExplicitTokenListMapMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMapMap::enterElement (const GALGAS_lexicalExplicitTokenListMapMap_2D_element & inValue,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_lexicalExplicitTokenListMapMap * p = nullptr ;
  macroMyNew (p, cMapElement_lexicalExplicitTokenListMapMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalExplicitTokenListMapMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMapMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                                 const GALGAS_lexicalExplicitTokenListMap & inArgument0,
                                                                 const GALGAS_tokenSortedlist & inArgument1,
                                                                 const GALGAS_bool & inArgument2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_lexicalExplicitTokenListMapMap * p = nullptr ;
  macroMyNew (p, cMapElement_lexicalExplicitTokenListMapMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalExplicitTokenListMapMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMapMap GALGAS_lexicalExplicitTokenListMapMap::add_operation (const GALGAS_lexicalExplicitTokenListMapMap & inOperand,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExplicitTokenListMapMap result = *this ;
  cEnumerator_lexicalExplicitTokenListMapMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mExplicitTokenListMap (HERE), enumerator.current_mTokenSortedList (HERE), enumerator.current_mShouldBeGenerated (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMapMap::setter_insertKey (GALGAS_lstring inKey,
                                                              GALGAS_lexicalExplicitTokenListMap inArgument0,
                                                              GALGAS_tokenSortedlist inArgument1,
                                                              GALGAS_bool inArgument2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_lexicalExplicitTokenListMapMap * p = nullptr ;
  macroMyNew (p, cMapElement_lexicalExplicitTokenListMapMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' token list has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_lexicalExplicitTokenListMapMap_searchKey = "the '%K' token list is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMapMap::method_searchKey (GALGAS_lstring inKey,
                                                              GALGAS_lexicalExplicitTokenListMap & outArgument0,
                                                              GALGAS_tokenSortedlist & outArgument1,
                                                              GALGAS_bool & outArgument2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) performSearch (inKey,
                                                                                                                             inCompiler,
                                                                                                                             kSearchErrorMessage_lexicalExplicitTokenListMapMap_searchKey
                                                                                                                             COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    outArgument0 = p->mProperty_mExplicitTokenListMap ;
    outArgument1 = p->mProperty_mTokenSortedList ;
    outArgument2 = p->mProperty_mShouldBeGenerated ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap GALGAS_lexicalExplicitTokenListMapMap::getter_mExplicitTokenListMapForKey (const GALGAS_string & inKey,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) attributes ;
  GALGAS_lexicalExplicitTokenListMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    result = p->mProperty_mExplicitTokenListMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist GALGAS_lexicalExplicitTokenListMapMap::getter_mTokenSortedListForKey (const GALGAS_string & inKey,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) attributes ;
  GALGAS_tokenSortedlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    result = p->mProperty_mTokenSortedList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalExplicitTokenListMapMap::getter_mShouldBeGeneratedForKey (const GALGAS_string & inKey,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) attributes ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    result = p->mProperty_mShouldBeGenerated ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMapMap::setter_setMExplicitTokenListMapForKey (GALGAS_lexicalExplicitTokenListMap inAttributeValue,
                                                                                   GALGAS_string inKey,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalExplicitTokenListMapMap * p = (cMapElement_lexicalExplicitTokenListMapMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    p->mProperty_mExplicitTokenListMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMapMap::setter_setMTokenSortedListForKey (GALGAS_tokenSortedlist inAttributeValue,
                                                                              GALGAS_string inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalExplicitTokenListMapMap * p = (cMapElement_lexicalExplicitTokenListMapMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    p->mProperty_mTokenSortedList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitTokenListMapMap::setter_setMShouldBeGeneratedForKey (GALGAS_bool inAttributeValue,
                                                                                GALGAS_string inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalExplicitTokenListMapMap * p = (cMapElement_lexicalExplicitTokenListMapMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
    p->mProperty_mShouldBeGenerated = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexicalExplicitTokenListMapMap * GALGAS_lexicalExplicitTokenListMapMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                       const GALGAS_string & inKey
                                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_lexicalExplicitTokenListMapMap * result = (cMapElement_lexicalExplicitTokenListMapMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalExplicitTokenListMapMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_lexicalExplicitTokenListMapMap::cEnumerator_lexicalExplicitTokenListMapMap (const GALGAS_lexicalExplicitTokenListMapMap & inEnumeratedObject,
                                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMapMap_2D_element cEnumerator_lexicalExplicitTokenListMapMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
  return GALGAS_lexicalExplicitTokenListMapMap_2D_element (p->mProperty_lkey, p->mProperty_mExplicitTokenListMap, p->mProperty_mTokenSortedList, p->mProperty_mShouldBeGenerated) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalExplicitTokenListMapMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMap cEnumerator_lexicalExplicitTokenListMapMap::current_mExplicitTokenListMap (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
  return p->mProperty_mExplicitTokenListMap ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tokenSortedlist cEnumerator_lexicalExplicitTokenListMapMap::current_mTokenSortedList (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
  return p->mProperty_mTokenSortedList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_lexicalExplicitTokenListMapMap::current_mShouldBeGenerated (LOCATION_ARGS) const {
  const cMapElement_lexicalExplicitTokenListMapMap * p = (const cMapElement_lexicalExplicitTokenListMapMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalExplicitTokenListMapMap) ;
  return p->mProperty_mShouldBeGenerated ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalExplicitTokenListMapMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap ("lexicalExplicitTokenListMapMap",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalExplicitTokenListMapMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalExplicitTokenListMapMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExplicitTokenListMapMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitTokenListMapMap GALGAS_lexicalExplicitTokenListMapMap::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitTokenListMapMap result ;
  const GALGAS_lexicalExplicitTokenListMapMap * p = (const GALGAS_lexicalExplicitTokenListMapMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalExplicitTokenListMapMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExplicitTokenListMapMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexicalMessageMap::cMapElement_lexicalMessageMap (const GALGAS_lexicalMessageMap_2D_element & inValue
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mLexicalMessage (inValue.mProperty_mLexicalMessage),
mProperty_mMessageIsUsed (inValue.mProperty_mMessageIsUsed) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexicalMessageMap::cMapElement_lexicalMessageMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_lstring & in_mLexicalMessage,
                                                              const GALGAS_bool & in_mMessageIsUsed
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLexicalMessage (in_mLexicalMessage),
mProperty_mMessageIsUsed (in_mMessageIsUsed) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_lexicalMessageMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_lexicalMessageMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_lexicalMessageMap (mProperty_lkey, mProperty_mLexicalMessage, mProperty_mMessageIsUsed COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_lexicalMessageMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalMessage" ":") ;
  mProperty_mLexicalMessage.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mMessageIsUsed" ":") ;
  mProperty_mMessageIsUsed.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageMap::GALGAS_lexicalMessageMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageMap::GALGAS_lexicalMessageMap (const GALGAS_lexicalMessageMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageMap & GALGAS_lexicalMessageMap::operator = (const GALGAS_lexicalMessageMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageMap GALGAS_lexicalMessageMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_lexicalMessageMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageMap GALGAS_lexicalMessageMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalMessageMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageMap_2D_element_3F_ GALGAS_lexicalMessageMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalMessageMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_lexicalMessageMap * p = (cMapElement_lexicalMessageMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_lexicalMessageMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_lexicalMessageMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mLexicalMessage = p->mProperty_mLexicalMessage ;
      element.mProperty_mMessageIsUsed = p->mProperty_mMessageIsUsed ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageMap GALGAS_lexicalMessageMap::class_func_mapWithMapToOverride (const GALGAS_lexicalMessageMap & inMapToOverride
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalMessageMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageMap GALGAS_lexicalMessageMap::getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalMessageMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageMap::enterElement (const GALGAS_lexicalMessageMap_2D_element & inValue,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_lexicalMessageMap * p = nullptr ;
  macroMyNew (p, cMapElement_lexicalMessageMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalMessageMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_lstring & inArgument0,
                                                    const GALGAS_bool & inArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_lexicalMessageMap * p = nullptr ;
  macroMyNew (p, cMapElement_lexicalMessageMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalMessageMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageMap GALGAS_lexicalMessageMap::add_operation (const GALGAS_lexicalMessageMap & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalMessageMap result = *this ;
  cEnumerator_lexicalMessageMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mLexicalMessage (HERE), enumerator.current_mMessageIsUsed (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_lstring inArgument0,
                                                 GALGAS_bool inArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_lexicalMessageMap * p = nullptr ;
  macroMyNew (p, cMapElement_lexicalMessageMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' message has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_lexicalMessageMap_searchKey = "the '%K' message is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_lstring & outArgument0,
                                                 GALGAS_bool & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_lexicalMessageMap * p = (const cMapElement_lexicalMessageMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_lexicalMessageMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
    outArgument0 = p->mProperty_mLexicalMessage ;
    outArgument1 = p->mProperty_mMessageIsUsed ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalMessageMap::getter_mLexicalMessageForKey (const GALGAS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalMessageMap * p = (const cMapElement_lexicalMessageMap *) attributes ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
    result = p->mProperty_mLexicalMessage ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalMessageMap::getter_mMessageIsUsedForKey (const GALGAS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalMessageMap * p = (const cMapElement_lexicalMessageMap *) attributes ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
    result = p->mProperty_mMessageIsUsed ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageMap::setter_setMLexicalMessageForKey (GALGAS_lstring inAttributeValue,
                                                                GALGAS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalMessageMap * p = (cMapElement_lexicalMessageMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
    p->mProperty_mLexicalMessage = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageMap::setter_setMMessageIsUsedForKey (GALGAS_bool inAttributeValue,
                                                               GALGAS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalMessageMap * p = (cMapElement_lexicalMessageMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
    p->mProperty_mMessageIsUsed = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexicalMessageMap * GALGAS_lexicalMessageMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_lexicalMessageMap * result = (cMapElement_lexicalMessageMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalMessageMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_lexicalMessageMap::cEnumerator_lexicalMessageMap (const GALGAS_lexicalMessageMap & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageMap_2D_element cEnumerator_lexicalMessageMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalMessageMap * p = (const cMapElement_lexicalMessageMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
  return GALGAS_lexicalMessageMap_2D_element (p->mProperty_lkey, p->mProperty_mLexicalMessage, p->mProperty_mMessageIsUsed) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalMessageMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalMessageMap::current_mLexicalMessage (LOCATION_ARGS) const {
  const cMapElement_lexicalMessageMap * p = (const cMapElement_lexicalMessageMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
  return p->mProperty_mLexicalMessage ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_lexicalMessageMap::current_mMessageIsUsed (LOCATION_ARGS) const {
  const cMapElement_lexicalMessageMap * p = (const cMapElement_lexicalMessageMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalMessageMap) ;
  return p->mProperty_mMessageIsUsed ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalMessageMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalMessageMap ("lexicalMessageMap",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalMessageMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalMessageMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalMessageMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalMessageMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageMap GALGAS_lexicalMessageMap::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalMessageMap result ;
  const GALGAS_lexicalMessageMap * p = (const GALGAS_lexicalMessageMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalMessageMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalMessageMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalRoutineFormalArgumentList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalRoutineFormalArgumentList : public cCollectionElement {
  public: GALGAS_lexicalRoutineFormalArgumentList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_lexicalRoutineFormalArgumentList (const GALGAS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                               const GALGAS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                               const GALGAS_string & in_mArgumentNameForComment
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalRoutineFormalArgumentList (const GALGAS_lexicalRoutineFormalArgumentList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalRoutineFormalArgumentList::cCollectionElement_lexicalRoutineFormalArgumentList (const GALGAS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                                                                          const GALGAS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                                                                          const GALGAS_string & in_mArgumentNameForComment
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalFormalArgumentMode, in_mLexicalFormalArgumentType, in_mArgumentNameForComment) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalRoutineFormalArgumentList::cCollectionElement_lexicalRoutineFormalArgumentList (const GALGAS_lexicalRoutineFormalArgumentList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLexicalFormalArgumentMode, inElement.mProperty_mLexicalFormalArgumentType, inElement.mProperty_mArgumentNameForComment) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalRoutineFormalArgumentList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalRoutineFormalArgumentList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_lexicalRoutineFormalArgumentList (mObject.mProperty_mLexicalFormalArgumentMode, mObject.mProperty_mLexicalFormalArgumentType, mObject.mProperty_mArgumentNameForComment COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalRoutineFormalArgumentList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalFormalArgumentMode" ":") ;
  mObject.mProperty_mLexicalFormalArgumentMode.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalFormalArgumentType" ":") ;
  mObject.mProperty_mLexicalFormalArgumentType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mArgumentNameForComment" ":") ;
  mObject.mProperty_mArgumentNameForComment.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList::GALGAS_lexicalRoutineFormalArgumentList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList::GALGAS_lexicalRoutineFormalArgumentList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalRoutineFormalArgumentList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalRoutineFormalArgumentList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList::enterElement (const GALGAS_lexicalRoutineFormalArgumentList_2D_element & inValue,
                                                            Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalRoutineFormalArgumentList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::class_func_listWithValue (const GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                                           const GALGAS_lexicalTypeEnum & inOperand1,
                                                                                                           const GALGAS_string & inOperand2
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineFormalArgumentList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_lexicalRoutineFormalArgumentList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalRoutineFormalArgumentList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_lexicalArgumentModeAST & in_mLexicalFormalArgumentMode,
                                                                         const GALGAS_lexicalTypeEnum & in_mLexicalFormalArgumentType,
                                                                         const GALGAS_string & in_mArgumentNameForComment
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRoutineFormalArgumentList * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalRoutineFormalArgumentList (in_mLexicalFormalArgumentMode,
                                                                      in_mLexicalFormalArgumentType,
                                                                      in_mArgumentNameForComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList::addAssign_operation (const GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                   const GALGAS_lexicalTypeEnum & inOperand1,
                                                                   const GALGAS_string & inOperand2
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalRoutineFormalArgumentList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList::setter_append (const GALGAS_lexicalArgumentModeAST inOperand0,
                                                             const GALGAS_lexicalTypeEnum inOperand1,
                                                             const GALGAS_string inOperand2,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalRoutineFormalArgumentList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList::setter_insertAtIndex (const GALGAS_lexicalArgumentModeAST inOperand0,
                                                                    const GALGAS_lexicalTypeEnum inOperand1,
                                                                    const GALGAS_string inOperand2,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_lexicalRoutineFormalArgumentList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_lexicalRoutineFormalArgumentList::setter_removeAtIndex (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                                    GALGAS_lexicalTypeEnum & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
        outOperand0 = p->mObject.mProperty_mLexicalFormalArgumentMode ;
        outOperand1 = p->mObject.mProperty_mLexicalFormalArgumentType ;
        outOperand2 = p->mObject.mProperty_mArgumentNameForComment ;
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

void GALGAS_lexicalRoutineFormalArgumentList::setter_popFirst (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                               GALGAS_lexicalTypeEnum & outOperand1,
                                                               GALGAS_string & outOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    outOperand0 = p->mObject.mProperty_mLexicalFormalArgumentMode ;
    outOperand1 = p->mObject.mProperty_mLexicalFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mArgumentNameForComment ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList::setter_popLast (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                              GALGAS_lexicalTypeEnum & outOperand1,
                                                              GALGAS_string & outOperand2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    outOperand0 = p->mObject.mProperty_mLexicalFormalArgumentMode ;
    outOperand1 = p->mObject.mProperty_mLexicalFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mArgumentNameForComment ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList::method_first (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                            GALGAS_lexicalTypeEnum & outOperand1,
                                                            GALGAS_string & outOperand2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    outOperand0 = p->mObject.mProperty_mLexicalFormalArgumentMode ;
    outOperand1 = p->mObject.mProperty_mLexicalFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mArgumentNameForComment ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList::method_last (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                           GALGAS_lexicalTypeEnum & outOperand1,
                                                           GALGAS_string & outOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    outOperand0 = p->mObject.mProperty_mLexicalFormalArgumentMode ;
    outOperand1 = p->mObject.mProperty_mLexicalFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mArgumentNameForComment ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::add_operation (const GALGAS_lexicalRoutineFormalArgumentList & inOperand,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineFormalArgumentList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineFormalArgumentList result = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineFormalArgumentList result = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineFormalArgumentList result = GALGAS_lexicalRoutineFormalArgumentList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList::plusAssign_operation (const GALGAS_lexicalRoutineFormalArgumentList inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList::setter_setMLexicalFormalArgumentModeAtIndex (GALGAS_lexicalArgumentModeAST inOperand,
                                                                                           GALGAS_uint inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexicalFormalArgumentMode = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalArgumentModeAST GALGAS_lexicalRoutineFormalArgumentList::getter_mLexicalFormalArgumentModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
  GALGAS_lexicalArgumentModeAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    result = p->mObject.mProperty_mLexicalFormalArgumentMode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList::setter_setMLexicalFormalArgumentTypeAtIndex (GALGAS_lexicalTypeEnum inOperand,
                                                                                           GALGAS_uint inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexicalFormalArgumentType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalRoutineFormalArgumentList::getter_mLexicalFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
  GALGAS_lexicalTypeEnum result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    result = p->mObject.mProperty_mLexicalFormalArgumentType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineFormalArgumentList::setter_setMArgumentNameForCommentAtIndex (GALGAS_string inOperand,
                                                                                        GALGAS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mArgumentNameForComment = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexicalRoutineFormalArgumentList::getter_mArgumentNameForCommentAtIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineFormalArgumentList * p = (cCollectionElement_lexicalRoutineFormalArgumentList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
    result = p->mObject.mProperty_mArgumentNameForComment ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_lexicalRoutineFormalArgumentList::cEnumerator_lexicalRoutineFormalArgumentList (const GALGAS_lexicalRoutineFormalArgumentList & inEnumeratedObject,
                                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList_2D_element cEnumerator_lexicalRoutineFormalArgumentList::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineFormalArgumentList * p = (const cCollectionElement_lexicalRoutineFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lexicalArgumentModeAST cEnumerator_lexicalRoutineFormalArgumentList::current_mLexicalFormalArgumentMode (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineFormalArgumentList * p = (const cCollectionElement_lexicalRoutineFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
  return p->mObject.mProperty_mLexicalFormalArgumentMode ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum cEnumerator_lexicalRoutineFormalArgumentList::current_mLexicalFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineFormalArgumentList * p = (const cCollectionElement_lexicalRoutineFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
  return p->mObject.mProperty_mLexicalFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_lexicalRoutineFormalArgumentList::current_mArgumentNameForComment (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineFormalArgumentList * p = (const cCollectionElement_lexicalRoutineFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineFormalArgumentList) ;
  return p->mObject.mProperty_mArgumentNameForComment ;
}




//--------------------------------------------------------------------------------------------------
//
//     @lexicalRoutineFormalArgumentList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList ("lexicalRoutineFormalArgumentList",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRoutineFormalArgumentList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRoutineFormalArgumentList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineFormalArgumentList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineFormalArgumentList result ;
  const GALGAS_lexicalRoutineFormalArgumentList * p = (const GALGAS_lexicalRoutineFormalArgumentList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalRoutineFormalArgumentList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineFormalArgumentList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexicalRoutineMap::cMapElement_lexicalRoutineMap (const GALGAS_lexicalRoutineMap_2D_element & inValue
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mLexicalRoutineFormalArgumentList (inValue.mProperty_mLexicalRoutineFormalArgumentList),
mProperty_mErrorMessageList (inValue.mProperty_mErrorMessageList),
mProperty_mIsExtern (inValue.mProperty_mIsExtern) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexicalRoutineMap::cMapElement_lexicalRoutineMap (const GALGAS_lstring & inKey,
                                                              const GALGAS_lexicalRoutineFormalArgumentList & in_mLexicalRoutineFormalArgumentList,
                                                              const GALGAS_stringlist & in_mErrorMessageList,
                                                              const GALGAS_bool & in_mIsExtern
                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLexicalRoutineFormalArgumentList (in_mLexicalRoutineFormalArgumentList),
mProperty_mErrorMessageList (in_mErrorMessageList),
mProperty_mIsExtern (in_mIsExtern) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_lexicalRoutineMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_lexicalRoutineMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_lexicalRoutineMap (mProperty_lkey, mProperty_mLexicalRoutineFormalArgumentList, mProperty_mErrorMessageList, mProperty_mIsExtern COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_lexicalRoutineMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalRoutineFormalArgumentList" ":") ;
  mProperty_mLexicalRoutineFormalArgumentList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mErrorMessageList" ":") ;
  mProperty_mErrorMessageList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsExtern" ":") ;
  mProperty_mIsExtern.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineMap::GALGAS_lexicalRoutineMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineMap::GALGAS_lexicalRoutineMap (const GALGAS_lexicalRoutineMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineMap & GALGAS_lexicalRoutineMap::operator = (const GALGAS_lexicalRoutineMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineMap GALGAS_lexicalRoutineMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineMap GALGAS_lexicalRoutineMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalRoutineMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineMap_2D_element_3F_ GALGAS_lexicalRoutineMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_lexicalRoutineMap * p = (cMapElement_lexicalRoutineMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_lexicalRoutineMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_lexicalRoutineMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mLexicalRoutineFormalArgumentList = p->mProperty_mLexicalRoutineFormalArgumentList ;
      element.mProperty_mErrorMessageList = p->mProperty_mErrorMessageList ;
      element.mProperty_mIsExtern = p->mProperty_mIsExtern ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineMap GALGAS_lexicalRoutineMap::class_func_mapWithMapToOverride (const GALGAS_lexicalRoutineMap & inMapToOverride
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineMap GALGAS_lexicalRoutineMap::getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineMap::enterElement (const GALGAS_lexicalRoutineMap_2D_element & inValue,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_lexicalRoutineMap * p = nullptr ;
  macroMyNew (p, cMapElement_lexicalRoutineMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalRoutineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                    const GALGAS_lexicalRoutineFormalArgumentList & inArgument0,
                                                    const GALGAS_stringlist & inArgument1,
                                                    const GALGAS_bool & inArgument2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cMapElement_lexicalRoutineMap * p = nullptr ;
  macroMyNew (p, cMapElement_lexicalRoutineMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalRoutineMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineMap GALGAS_lexicalRoutineMap::add_operation (const GALGAS_lexicalRoutineMap & inOperand,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineMap result = *this ;
  cEnumerator_lexicalRoutineMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mLexicalRoutineFormalArgumentList (HERE), enumerator.current_mErrorMessageList (HERE), enumerator.current_mIsExtern (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineMap::setter_insertKey (GALGAS_lstring inKey,
                                                 GALGAS_lexicalRoutineFormalArgumentList inArgument0,
                                                 GALGAS_stringlist inArgument1,
                                                 GALGAS_bool inArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_lexicalRoutineMap * p = nullptr ;
  macroMyNew (p, cMapElement_lexicalRoutineMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' lexical routine has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_lexicalRoutineMap_searchKey = "the '%K' lexical routine is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineMap::method_searchKey (GALGAS_lstring inKey,
                                                 GALGAS_lexicalRoutineFormalArgumentList & outArgument0,
                                                 GALGAS_stringlist & outArgument1,
                                                 GALGAS_bool & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) performSearch (inKey,
                                                                                                   inCompiler,
                                                                                                   kSearchErrorMessage_lexicalRoutineMap_searchKey
                                                                                                   COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    outArgument0 = p->mProperty_mLexicalRoutineFormalArgumentList ;
    outArgument1 = p->mProperty_mErrorMessageList ;
    outArgument2 = p->mProperty_mIsExtern ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineMap::getter_mLexicalRoutineFormalArgumentListForKey (const GALGAS_string & inKey,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) attributes ;
  GALGAS_lexicalRoutineFormalArgumentList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    result = p->mProperty_mLexicalRoutineFormalArgumentList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_lexicalRoutineMap::getter_mErrorMessageListForKey (const GALGAS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) attributes ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    result = p->mProperty_mErrorMessageList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalRoutineMap::getter_mIsExternForKey (const GALGAS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) attributes ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    result = p->mProperty_mIsExtern ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineMap::setter_setMLexicalRoutineFormalArgumentListForKey (GALGAS_lexicalRoutineFormalArgumentList inAttributeValue,
                                                                                  GALGAS_string inKey,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalRoutineMap * p = (cMapElement_lexicalRoutineMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    p->mProperty_mLexicalRoutineFormalArgumentList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineMap::setter_setMErrorMessageListForKey (GALGAS_stringlist inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalRoutineMap * p = (cMapElement_lexicalRoutineMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    p->mProperty_mErrorMessageList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineMap::setter_setMIsExternForKey (GALGAS_bool inAttributeValue,
                                                          GALGAS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalRoutineMap * p = (cMapElement_lexicalRoutineMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
    p->mProperty_mIsExtern = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexicalRoutineMap * GALGAS_lexicalRoutineMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_lexicalRoutineMap * result = (cMapElement_lexicalRoutineMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalRoutineMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_lexicalRoutineMap::cEnumerator_lexicalRoutineMap (const GALGAS_lexicalRoutineMap & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineMap_2D_element cEnumerator_lexicalRoutineMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
  return GALGAS_lexicalRoutineMap_2D_element (p->mProperty_lkey, p->mProperty_mLexicalRoutineFormalArgumentList, p->mProperty_mErrorMessageList, p->mProperty_mIsExtern) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalRoutineMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineFormalArgumentList cEnumerator_lexicalRoutineMap::current_mLexicalRoutineFormalArgumentList (LOCATION_ARGS) const {
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
  return p->mProperty_mLexicalRoutineFormalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_lexicalRoutineMap::current_mErrorMessageList (LOCATION_ARGS) const {
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
  return p->mProperty_mErrorMessageList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_lexicalRoutineMap::current_mIsExtern (LOCATION_ARGS) const {
  const cMapElement_lexicalRoutineMap * p = (const cMapElement_lexicalRoutineMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalRoutineMap) ;
  return p->mProperty_mIsExtern ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalRoutineMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineMap ("lexicalRoutineMap",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRoutineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRoutineMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineMap GALGAS_lexicalRoutineMap::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineMap result ;
  const GALGAS_lexicalRoutineMap * p = (const GALGAS_lexicalRoutineMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalRoutineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalFunctionFormalArgumentList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalFunctionFormalArgumentList : public cCollectionElement {
  public: GALGAS_lexicalFunctionFormalArgumentList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_lexicalFunctionFormalArgumentList (const GALGAS_lexicalTypeEnum & in_mLexicalType,
                                                                const GALGAS_string & in_mArgumentNameForComment
                                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalFunctionFormalArgumentList (const GALGAS_lexicalFunctionFormalArgumentList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalFunctionFormalArgumentList::cCollectionElement_lexicalFunctionFormalArgumentList (const GALGAS_lexicalTypeEnum & in_mLexicalType,
                                                                                                            const GALGAS_string & in_mArgumentNameForComment
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalType, in_mArgumentNameForComment) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalFunctionFormalArgumentList::cCollectionElement_lexicalFunctionFormalArgumentList (const GALGAS_lexicalFunctionFormalArgumentList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLexicalType, inElement.mProperty_mArgumentNameForComment) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalFunctionFormalArgumentList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalFunctionFormalArgumentList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_lexicalFunctionFormalArgumentList (mObject.mProperty_mLexicalType, mObject.mProperty_mArgumentNameForComment COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalFunctionFormalArgumentList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalType" ":") ;
  mObject.mProperty_mLexicalType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mArgumentNameForComment" ":") ;
  mObject.mProperty_mArgumentNameForComment.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList::GALGAS_lexicalFunctionFormalArgumentList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList::GALGAS_lexicalFunctionFormalArgumentList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalFunctionFormalArgumentList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalFunctionFormalArgumentList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionFormalArgumentList::enterElement (const GALGAS_lexicalFunctionFormalArgumentList_2D_element & inValue,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalFunctionFormalArgumentList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::class_func_listWithValue (const GALGAS_lexicalTypeEnum & inOperand0,
                                                                                                             const GALGAS_string & inOperand1
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionFormalArgumentList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalFunctionFormalArgumentList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalFunctionFormalArgumentList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionFormalArgumentList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_lexicalTypeEnum & in_mLexicalType,
                                                                          const GALGAS_string & in_mArgumentNameForComment
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalFunctionFormalArgumentList * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalFunctionFormalArgumentList (in_mLexicalType,
                                                                       in_mArgumentNameForComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionFormalArgumentList::addAssign_operation (const GALGAS_lexicalTypeEnum & inOperand0,
                                                                    const GALGAS_string & inOperand1
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalFunctionFormalArgumentList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionFormalArgumentList::setter_append (const GALGAS_lexicalTypeEnum inOperand0,
                                                              const GALGAS_string inOperand1,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalFunctionFormalArgumentList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionFormalArgumentList::setter_insertAtIndex (const GALGAS_lexicalTypeEnum inOperand0,
                                                                     const GALGAS_string inOperand1,
                                                                     const GALGAS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_lexicalFunctionFormalArgumentList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_lexicalFunctionFormalArgumentList::setter_removeAtIndex (GALGAS_lexicalTypeEnum & outOperand0,
                                                                     GALGAS_string & outOperand1,
                                                                     const GALGAS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
        outOperand0 = p->mObject.mProperty_mLexicalType ;
        outOperand1 = p->mObject.mProperty_mArgumentNameForComment ;
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

void GALGAS_lexicalFunctionFormalArgumentList::setter_popFirst (GALGAS_lexicalTypeEnum & outOperand0,
                                                                GALGAS_string & outOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    outOperand0 = p->mObject.mProperty_mLexicalType ;
    outOperand1 = p->mObject.mProperty_mArgumentNameForComment ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionFormalArgumentList::setter_popLast (GALGAS_lexicalTypeEnum & outOperand0,
                                                               GALGAS_string & outOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    outOperand0 = p->mObject.mProperty_mLexicalType ;
    outOperand1 = p->mObject.mProperty_mArgumentNameForComment ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionFormalArgumentList::method_first (GALGAS_lexicalTypeEnum & outOperand0,
                                                             GALGAS_string & outOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    outOperand0 = p->mObject.mProperty_mLexicalType ;
    outOperand1 = p->mObject.mProperty_mArgumentNameForComment ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionFormalArgumentList::method_last (GALGAS_lexicalTypeEnum & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    outOperand0 = p->mObject.mProperty_mLexicalType ;
    outOperand1 = p->mObject.mProperty_mArgumentNameForComment ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::add_operation (const GALGAS_lexicalFunctionFormalArgumentList & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionFormalArgumentList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionFormalArgumentList result = GALGAS_lexicalFunctionFormalArgumentList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionFormalArgumentList result = GALGAS_lexicalFunctionFormalArgumentList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionFormalArgumentList result = GALGAS_lexicalFunctionFormalArgumentList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionFormalArgumentList::plusAssign_operation (const GALGAS_lexicalFunctionFormalArgumentList inOperand,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionFormalArgumentList::setter_setMLexicalTypeAtIndex (GALGAS_lexicalTypeEnum inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexicalType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalFunctionFormalArgumentList::getter_mLexicalTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
  GALGAS_lexicalTypeEnum result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    result = p->mObject.mProperty_mLexicalType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionFormalArgumentList::setter_setMArgumentNameForCommentAtIndex (GALGAS_string inOperand,
                                                                                         GALGAS_uint inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mArgumentNameForComment = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexicalFunctionFormalArgumentList::getter_mArgumentNameForCommentAtIndex (const GALGAS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionFormalArgumentList * p = (cCollectionElement_lexicalFunctionFormalArgumentList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
    result = p->mObject.mProperty_mArgumentNameForComment ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_lexicalFunctionFormalArgumentList::cEnumerator_lexicalFunctionFormalArgumentList (const GALGAS_lexicalFunctionFormalArgumentList & inEnumeratedObject,
                                                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList_2D_element cEnumerator_lexicalFunctionFormalArgumentList::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionFormalArgumentList * p = (const cCollectionElement_lexicalFunctionFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum cEnumerator_lexicalFunctionFormalArgumentList::current_mLexicalType (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionFormalArgumentList * p = (const cCollectionElement_lexicalFunctionFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
  return p->mObject.mProperty_mLexicalType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_lexicalFunctionFormalArgumentList::current_mArgumentNameForComment (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionFormalArgumentList * p = (const cCollectionElement_lexicalFunctionFormalArgumentList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionFormalArgumentList) ;
  return p->mObject.mProperty_mArgumentNameForComment ;
}




//--------------------------------------------------------------------------------------------------
//
//     @lexicalFunctionFormalArgumentList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList ("lexicalFunctionFormalArgumentList",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionFormalArgumentList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionFormalArgumentList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionFormalArgumentList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionFormalArgumentList::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionFormalArgumentList result ;
  const GALGAS_lexicalFunctionFormalArgumentList * p = (const GALGAS_lexicalFunctionFormalArgumentList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalFunctionFormalArgumentList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionFormalArgumentList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexicalFunctionMap::cMapElement_lexicalFunctionMap (const GALGAS_lexicalFunctionMap_2D_element & inValue
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mLexicalTypeList (inValue.mProperty_mLexicalTypeList),
mProperty_mReturnedLexicalType (inValue.mProperty_mReturnedLexicalType),
mProperty_mReplacementFunctionName (inValue.mProperty_mReplacementFunctionName),
mProperty_mIsExtern (inValue.mProperty_mIsExtern) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexicalFunctionMap::cMapElement_lexicalFunctionMap (const GALGAS_lstring & inKey,
                                                                const GALGAS_lexicalFunctionFormalArgumentList & in_mLexicalTypeList,
                                                                const GALGAS_lexicalTypeEnum & in_mReturnedLexicalType,
                                                                const GALGAS_string & in_mReplacementFunctionName,
                                                                const GALGAS_bool & in_mIsExtern
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLexicalTypeList (in_mLexicalTypeList),
mProperty_mReturnedLexicalType (in_mReturnedLexicalType),
mProperty_mReplacementFunctionName (in_mReplacementFunctionName),
mProperty_mIsExtern (in_mIsExtern) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_lexicalFunctionMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_lexicalFunctionMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_lexicalFunctionMap (mProperty_lkey, mProperty_mLexicalTypeList, mProperty_mReturnedLexicalType, mProperty_mReplacementFunctionName, mProperty_mIsExtern COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_lexicalFunctionMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalTypeList" ":") ;
  mProperty_mLexicalTypeList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mReturnedLexicalType" ":") ;
  mProperty_mReturnedLexicalType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mReplacementFunctionName" ":") ;
  mProperty_mReplacementFunctionName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsExtern" ":") ;
  mProperty_mIsExtern.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionMap::GALGAS_lexicalFunctionMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionMap::GALGAS_lexicalFunctionMap (const GALGAS_lexicalFunctionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionMap & GALGAS_lexicalFunctionMap::operator = (const GALGAS_lexicalFunctionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionMap GALGAS_lexicalFunctionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionMap GALGAS_lexicalFunctionMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalFunctionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionMap_2D_element_3F_ GALGAS_lexicalFunctionMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_lexicalFunctionMap * p = (cMapElement_lexicalFunctionMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_lexicalFunctionMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_lexicalFunctionMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mLexicalTypeList = p->mProperty_mLexicalTypeList ;
      element.mProperty_mReturnedLexicalType = p->mProperty_mReturnedLexicalType ;
      element.mProperty_mReplacementFunctionName = p->mProperty_mReplacementFunctionName ;
      element.mProperty_mIsExtern = p->mProperty_mIsExtern ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionMap GALGAS_lexicalFunctionMap::class_func_mapWithMapToOverride (const GALGAS_lexicalFunctionMap & inMapToOverride
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionMap GALGAS_lexicalFunctionMap::getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionMap::enterElement (const GALGAS_lexicalFunctionMap_2D_element & inValue,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_lexicalFunctionMap * p = nullptr ;
  macroMyNew (p, cMapElement_lexicalFunctionMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalFunctionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                     const GALGAS_lexicalFunctionFormalArgumentList & inArgument0,
                                                     const GALGAS_lexicalTypeEnum & inArgument1,
                                                     const GALGAS_string & inArgument2,
                                                     const GALGAS_bool & inArgument3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_lexicalFunctionMap * p = nullptr ;
  macroMyNew (p, cMapElement_lexicalFunctionMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalFunctionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionMap GALGAS_lexicalFunctionMap::add_operation (const GALGAS_lexicalFunctionMap & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionMap result = *this ;
  cEnumerator_lexicalFunctionMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mLexicalTypeList (HERE), enumerator.current_mReturnedLexicalType (HERE), enumerator.current_mReplacementFunctionName (HERE), enumerator.current_mIsExtern (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionMap::setter_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_lexicalFunctionFormalArgumentList inArgument0,
                                                  GALGAS_lexicalTypeEnum inArgument1,
                                                  GALGAS_string inArgument2,
                                                  GALGAS_bool inArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_lexicalFunctionMap * p = nullptr ;
  macroMyNew (p, cMapElement_lexicalFunctionMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' lexical function has been already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_lexicalFunctionMap_searchKey = "the '%K' lexical function is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionMap::method_searchKey (GALGAS_lstring inKey,
                                                  GALGAS_lexicalFunctionFormalArgumentList & outArgument0,
                                                  GALGAS_lexicalTypeEnum & outArgument1,
                                                  GALGAS_string & outArgument2,
                                                  GALGAS_bool & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_lexicalFunctionMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    outArgument0 = p->mProperty_mLexicalTypeList ;
    outArgument1 = p->mProperty_mReturnedLexicalType ;
    outArgument2 = p->mProperty_mReplacementFunctionName ;
    outArgument3 = p->mProperty_mIsExtern ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList GALGAS_lexicalFunctionMap::getter_mLexicalTypeListForKey (const GALGAS_string & inKey,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) attributes ;
  GALGAS_lexicalFunctionFormalArgumentList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    result = p->mProperty_mLexicalTypeList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum GALGAS_lexicalFunctionMap::getter_mReturnedLexicalTypeForKey (const GALGAS_string & inKey,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) attributes ;
  GALGAS_lexicalTypeEnum result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    result = p->mProperty_mReturnedLexicalType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_lexicalFunctionMap::getter_mReplacementFunctionNameForKey (const GALGAS_string & inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) attributes ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    result = p->mProperty_mReplacementFunctionName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalFunctionMap::getter_mIsExternForKey (const GALGAS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) attributes ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    result = p->mProperty_mIsExtern ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionMap::setter_setMLexicalTypeListForKey (GALGAS_lexicalFunctionFormalArgumentList inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalFunctionMap * p = (cMapElement_lexicalFunctionMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    p->mProperty_mLexicalTypeList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionMap::setter_setMReturnedLexicalTypeForKey (GALGAS_lexicalTypeEnum inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalFunctionMap * p = (cMapElement_lexicalFunctionMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    p->mProperty_mReturnedLexicalType = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionMap::setter_setMReplacementFunctionNameForKey (GALGAS_string inAttributeValue,
                                                                          GALGAS_string inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalFunctionMap * p = (cMapElement_lexicalFunctionMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    p->mProperty_mReplacementFunctionName = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionMap::setter_setMIsExternForKey (GALGAS_bool inAttributeValue,
                                                           GALGAS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_lexicalFunctionMap * p = (cMapElement_lexicalFunctionMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
    p->mProperty_mIsExtern = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexicalFunctionMap * GALGAS_lexicalFunctionMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_lexicalFunctionMap * result = (cMapElement_lexicalFunctionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalFunctionMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_lexicalFunctionMap::cEnumerator_lexicalFunctionMap (const GALGAS_lexicalFunctionMap & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionMap_2D_element cEnumerator_lexicalFunctionMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
  return GALGAS_lexicalFunctionMap_2D_element (p->mProperty_lkey, p->mProperty_mLexicalTypeList, p->mProperty_mReturnedLexicalType, p->mProperty_mReplacementFunctionName, p->mProperty_mIsExtern) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalFunctionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionFormalArgumentList cEnumerator_lexicalFunctionMap::current_mLexicalTypeList (LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
  return p->mProperty_mLexicalTypeList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTypeEnum cEnumerator_lexicalFunctionMap::current_mReturnedLexicalType (LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
  return p->mProperty_mReturnedLexicalType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_lexicalFunctionMap::current_mReplacementFunctionName (LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
  return p->mProperty_mReplacementFunctionName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_lexicalFunctionMap::current_mIsExtern (LOCATION_ARGS) const {
  const cMapElement_lexicalFunctionMap * p = (const cMapElement_lexicalFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalFunctionMap) ;
  return p->mProperty_mIsExtern ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalFunctionMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFunctionMap ("lexicalFunctionMap",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionMap GALGAS_lexicalFunctionMap::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionMap result ;
  const GALGAS_lexicalFunctionMap * p = (const GALGAS_lexicalFunctionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalFunctionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@templateDelimitorList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_templateDelimitorList : public cCollectionElement {
  public: GALGAS_templateDelimitorList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_templateDelimitorList (const GALGAS_lstring & in_mStartString,
                                                    const GALGAS_lstring & in_mEndString,
                                                    const GALGAS_bool & in_mPreservesStartDelimiter
                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_templateDelimitorList (const GALGAS_templateDelimitorList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_templateDelimitorList::cCollectionElement_templateDelimitorList (const GALGAS_lstring & in_mStartString,
                                                                                    const GALGAS_lstring & in_mEndString,
                                                                                    const GALGAS_bool & in_mPreservesStartDelimiter
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mStartString, in_mEndString, in_mPreservesStartDelimiter) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_templateDelimitorList::cCollectionElement_templateDelimitorList (const GALGAS_templateDelimitorList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mStartString, inElement.mProperty_mEndString, inElement.mProperty_mPreservesStartDelimiter) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_templateDelimitorList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_templateDelimitorList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_templateDelimitorList (mObject.mProperty_mStartString, mObject.mProperty_mEndString, mObject.mProperty_mPreservesStartDelimiter COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_templateDelimitorList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mStartString" ":") ;
  mObject.mProperty_mStartString.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndString" ":") ;
  mObject.mProperty_mEndString.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPreservesStartDelimiter" ":") ;
  mObject.mProperty_mPreservesStartDelimiter.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList::GALGAS_templateDelimitorList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList::GALGAS_templateDelimitorList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateDelimitorList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_templateDelimitorList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateDelimitorList::enterElement (const GALGAS_templateDelimitorList_2D_element & inValue,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_templateDelimitorList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                     const GALGAS_lstring & inOperand1,
                                                                                     const GALGAS_bool & inOperand2
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_templateDelimitorList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_templateDelimitorList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_templateDelimitorList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateDelimitorList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_lstring & in_mStartString,
                                                              const GALGAS_lstring & in_mEndString,
                                                              const GALGAS_bool & in_mPreservesStartDelimiter
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_templateDelimitorList * p = nullptr ;
  macroMyNew (p, cCollectionElement_templateDelimitorList (in_mStartString,
                                                           in_mEndString,
                                                           in_mPreservesStartDelimiter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateDelimitorList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_lstring & inOperand1,
                                                        const GALGAS_bool & inOperand2
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_templateDelimitorList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateDelimitorList::setter_append (const GALGAS_lstring inOperand0,
                                                  const GALGAS_lstring inOperand1,
                                                  const GALGAS_bool inOperand2,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_templateDelimitorList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateDelimitorList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                         const GALGAS_lstring inOperand1,
                                                         const GALGAS_bool inOperand2,
                                                         const GALGAS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_templateDelimitorList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_templateDelimitorList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_bool & outOperand2,
                                                         const GALGAS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
        outOperand0 = p->mObject.mProperty_mStartString ;
        outOperand1 = p->mObject.mProperty_mEndString ;
        outOperand2 = p->mObject.mProperty_mPreservesStartDelimiter ;
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

void GALGAS_templateDelimitorList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_bool & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    outOperand0 = p->mObject.mProperty_mStartString ;
    outOperand1 = p->mObject.mProperty_mEndString ;
    outOperand2 = p->mObject.mProperty_mPreservesStartDelimiter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateDelimitorList::setter_popLast (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_bool & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    outOperand0 = p->mObject.mProperty_mStartString ;
    outOperand1 = p->mObject.mProperty_mEndString ;
    outOperand2 = p->mObject.mProperty_mPreservesStartDelimiter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateDelimitorList::method_first (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_bool & outOperand2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    outOperand0 = p->mObject.mProperty_mStartString ;
    outOperand1 = p->mObject.mProperty_mEndString ;
    outOperand2 = p->mObject.mProperty_mPreservesStartDelimiter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateDelimitorList::method_last (GALGAS_lstring & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                GALGAS_bool & outOperand2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    outOperand0 = p->mObject.mProperty_mStartString ;
    outOperand1 = p->mObject.mProperty_mEndString ;
    outOperand2 = p->mObject.mProperty_mPreservesStartDelimiter ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::add_operation (const GALGAS_templateDelimitorList & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_templateDelimitorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_templateDelimitorList result = GALGAS_templateDelimitorList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_templateDelimitorList result = GALGAS_templateDelimitorList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_templateDelimitorList result = GALGAS_templateDelimitorList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateDelimitorList::plusAssign_operation (const GALGAS_templateDelimitorList inOperand,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateDelimitorList::setter_setMStartStringAtIndex (GALGAS_lstring inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStartString = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateDelimitorList::getter_mStartStringAtIndex (const GALGAS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    result = p->mObject.mProperty_mStartString ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateDelimitorList::setter_setMEndStringAtIndex (GALGAS_lstring inOperand,
                                                                GALGAS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndString = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateDelimitorList::getter_mEndStringAtIndex (const GALGAS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    result = p->mObject.mProperty_mEndString ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_templateDelimitorList::setter_setMPreservesStartDelimiterAtIndex (GALGAS_bool inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPreservesStartDelimiter = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_templateDelimitorList::getter_mPreservesStartDelimiterAtIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateDelimitorList * p = (cCollectionElement_templateDelimitorList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
    result = p->mObject.mProperty_mPreservesStartDelimiter ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_templateDelimitorList::cEnumerator_templateDelimitorList (const GALGAS_templateDelimitorList & inEnumeratedObject,
                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList_2D_element cEnumerator_templateDelimitorList::current (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_templateDelimitorList::current_mStartString (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject.mProperty_mStartString ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_templateDelimitorList::current_mEndString (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject.mProperty_mEndString ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_templateDelimitorList::current_mPreservesStartDelimiter (LOCATION_ARGS) const {
  const cCollectionElement_templateDelimitorList * p = (const cCollectionElement_templateDelimitorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateDelimitorList) ;
  return p->mObject.mProperty_mPreservesStartDelimiter ;
}




//--------------------------------------------------------------------------------------------------
//
//     @templateDelimitorList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_templateDelimitorList ("templateDelimitorList",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateDelimitorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateDelimitorList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateDelimitorList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateDelimitorList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateDelimitorList GALGAS_templateDelimitorList::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateDelimitorList result ;
  const GALGAS_templateDelimitorList * p = (const GALGAS_templateDelimitorList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_templateDelimitorList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateDelimitorList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_styleMap::cMapElement_styleMap (const GALGAS_styleMap_2D_element & inValue
                                            COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mComment (inValue.mProperty_mComment),
mProperty_mStyleIndex (inValue.mProperty_mStyleIndex) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_styleMap::cMapElement_styleMap (const GALGAS_lstring & inKey,
                                            const GALGAS_lstring & in_mComment,
                                            const GALGAS_uint & in_mStyleIndex
                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mComment (in_mComment),
mProperty_mStyleIndex (in_mStyleIndex) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_styleMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_styleMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_styleMap (mProperty_lkey, mProperty_mComment, mProperty_mStyleIndex COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_styleMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mComment" ":") ;
  mProperty_mComment.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mStyleIndex" ":") ;
  mProperty_mStyleIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_styleMap::GALGAS_styleMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_styleMap::GALGAS_styleMap (const GALGAS_styleMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_styleMap & GALGAS_styleMap::operator = (const GALGAS_styleMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_styleMap GALGAS_styleMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_styleMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_styleMap GALGAS_styleMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_styleMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_styleMap_2D_element_3F_ GALGAS_styleMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_styleMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_styleMap * p = (cMapElement_styleMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_styleMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_styleMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mComment = p->mProperty_mComment ;
      element.mProperty_mStyleIndex = p->mProperty_mStyleIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_styleMap GALGAS_styleMap::class_func_mapWithMapToOverride (const GALGAS_styleMap & inMapToOverride
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_styleMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_styleMap GALGAS_styleMap::getter_overriddenMap (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_styleMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_styleMap::enterElement (const GALGAS_styleMap_2D_element & inValue,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  cMapElement_styleMap * p = nullptr ;
  macroMyNew (p, cMapElement_styleMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@styleMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_styleMap::addAssign_operation (const GALGAS_lstring & inKey,
                                           const GALGAS_lstring & inArgument0,
                                           const GALGAS_uint & inArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_styleMap * p = nullptr ;
  macroMyNew (p, cMapElement_styleMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@styleMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_styleMap GALGAS_styleMap::add_operation (const GALGAS_styleMap & inOperand,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GALGAS_styleMap result = *this ;
  cEnumerator_styleMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mComment (HERE), enumerator.current_mStyleIndex (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_styleMap::setter_insertKey (GALGAS_lstring inKey,
                                        GALGAS_lstring inArgument0,
                                        GALGAS_uint inArgument1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  cMapElement_styleMap * p = nullptr ;
  macroMyNew (p, cMapElement_styleMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' style is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_styleMap_searchKey = "the '%K' style is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_styleMap::method_searchKey (GALGAS_lstring inKey,
                                        GALGAS_lstring & outArgument0,
                                        GALGAS_uint & outArgument1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) performSearch (inKey,
                                                                                 inCompiler,
                                                                                 kSearchErrorMessage_styleMap_searchKey
                                                                                 COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_styleMap) ;
    outArgument0 = p->mProperty_mComment ;
    outArgument1 = p->mProperty_mStyleIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_styleMap::getter_mCommentForKey (const GALGAS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) attributes ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_styleMap) ;
    result = p->mProperty_mComment ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_styleMap::getter_mStyleIndexForKey (const GALGAS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_styleMap) ;
    result = p->mProperty_mStyleIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_styleMap::setter_setMCommentForKey (GALGAS_lstring inAttributeValue,
                                                GALGAS_string inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_styleMap * p = (cMapElement_styleMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_styleMap) ;
    p->mProperty_mComment = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_styleMap::setter_setMStyleIndexForKey (GALGAS_uint inAttributeValue,
                                                   GALGAS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_styleMap * p = (cMapElement_styleMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_styleMap) ;
    p->mProperty_mStyleIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_styleMap * GALGAS_styleMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                           const GALGAS_string & inKey
                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_styleMap * result = (cMapElement_styleMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_styleMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_styleMap::cEnumerator_styleMap (const GALGAS_styleMap & inEnumeratedObject,
                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_styleMap_2D_element cEnumerator_styleMap::current (LOCATION_ARGS) const {
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_styleMap) ;
  return GALGAS_styleMap_2D_element (p->mProperty_lkey, p->mProperty_mComment, p->mProperty_mStyleIndex) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_styleMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_styleMap::current_mComment (LOCATION_ARGS) const {
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_styleMap) ;
  return p->mProperty_mComment ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_styleMap::current_mStyleIndex (LOCATION_ARGS) const {
  const cMapElement_styleMap * p = (const cMapElement_styleMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_styleMap) ;
  return p->mProperty_mStyleIndex ;
}

//--------------------------------------------------------------------------------------------------
//
//     @styleMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_styleMap ("styleMap",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_styleMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_styleMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_styleMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_styleMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_styleMap GALGAS_styleMap::extractObject (const GALGAS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_styleMap result ;
  const GALGAS_styleMap * p = (const GALGAS_styleMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_styleMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("styleMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexicalTagMap::cMapElement_lexicalTagMap (const GALGAS_lexicalTagMap_2D_element & inValue
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexicalTagMap::cMapElement_lexicalTagMap (const GALGAS_lstring & inKey
                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_lexicalTagMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_lexicalTagMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_lexicalTagMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_lexicalTagMap::description (String & /* ioString */, const int32_t /* inIndentation */) const {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTagMap::GALGAS_lexicalTagMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTagMap::GALGAS_lexicalTagMap (const GALGAS_lexicalTagMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTagMap & GALGAS_lexicalTagMap::operator = (const GALGAS_lexicalTagMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTagMap GALGAS_lexicalTagMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTagMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTagMap GALGAS_lexicalTagMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalTagMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTagMap_2D_element_3F_ GALGAS_lexicalTagMap
::readSubscript__3F_ (const class GALGAS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalTagMap_2D_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_lexicalTagMap * p = (cMapElement_lexicalTagMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GALGAS_lexicalTagMap_2D_element_3F_::init_nil () ;
    }else{
      GALGAS_lexicalTagMap_2D_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTagMap GALGAS_lexicalTagMap::class_func_mapWithMapToOverride (const GALGAS_lexicalTagMap & inMapToOverride
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTagMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTagMap GALGAS_lexicalTagMap::getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalTagMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalTagMap::enterElement (const GALGAS_lexicalTagMap_2D_element & inValue,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_lexicalTagMap * p = nullptr ;
  macroMyNew (p, cMapElement_lexicalTagMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalTagMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalTagMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_lexicalTagMap * p = nullptr ;
  macroMyNew (p, cMapElement_lexicalTagMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@lexicalTagMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTagMap GALGAS_lexicalTagMap::add_operation (const GALGAS_lexicalTagMap & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalTagMap result = *this ;
  cEnumerator_lexicalTagMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalTagMap::setter_insertKey (GALGAS_lstring inKey,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cMapElement_lexicalTagMap * p = nullptr ;
  macroMyNew (p, cMapElement_lexicalTagMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' tag is already declared in %L" ;
  const char * kShadowErrorMessage = "the '%K' tag declaration shadows the tag declared in %L" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_lexicalTagMap_searchKey = "the '%K' tag is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalTagMap::method_searchKey (GALGAS_lstring inKey,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_lexicalTagMap * p = (const cMapElement_lexicalTagMap *) performSearch (inKey,
                                                                                           inCompiler,
                                                                                           kSearchErrorMessage_lexicalTagMap_searchKey
                                                                                           COMMA_THERE) ;
  if (nullptr == p) {
  }else{
    macroValidSharedObject (p, cMapElement_lexicalTagMap) ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_lexicalTagMap * GALGAS_lexicalTagMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                     const GALGAS_string & inKey
                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_lexicalTagMap * result = (cMapElement_lexicalTagMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalTagMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_lexicalTagMap::cEnumerator_lexicalTagMap (const GALGAS_lexicalTagMap & inEnumeratedObject,
                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTagMap_2D_element cEnumerator_lexicalTagMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalTagMap * p = (const cMapElement_lexicalTagMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalTagMap) ;
  return GALGAS_lexicalTagMap_2D_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalTagMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalTagMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTagMap ("lexicalTagMap",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalTagMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalTagMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalTagMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTagMap GALGAS_lexicalTagMap::extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTagMap result ;
  const GALGAS_lexicalTagMap * p = (const GALGAS_lexicalTagMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalTagMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTagMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalTypeEnum lexicalTypeBaseName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_lexicalTypeBaseName (const GALGAS_lexicalTypeEnum & inObject,
                                                   Compiler *
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GALGAS_string ("string") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GALGAS_string ("char") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GALGAS_string ("uint") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GALGAS_string ("uint64") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GALGAS_string ("sint") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GALGAS_string ("sint64") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GALGAS_string ("double") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GALGAS_string ("bigint") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalExpressionAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                         const GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateConditionCode (in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalRoutineOrFunctionFormalInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateRoutineOrFunctionArgument (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalSendDefaultActionAST generateDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                           const GALGAS_string in_inScannerClassName,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateDefaultSendCode (in_inScannerClassName, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateLexicalInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                  const GALGAS_string in_inScannerClassName,
                                                                  const GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateLexicalInstructionCode (in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_lexicalInstructionUsesLoopLocalVariable (const cPtr_lexicalInstructionAST * inObject,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_lexicalInstructionUsesLoopLocalVariable (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRuleAST generateLexicalRuleCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateLexicalRuleCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                           const GALGAS_string in_inScannerClassName,
                                                           const GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateLexicalRuleCode (in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRuleAST lexicalRuleUsesLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_lexicalRuleUsesLoopLocalVar (const cPtr_abstractLexicalRuleAST * inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_lexicalRuleUsesLoopLocalVar (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalExpressionAST generateObjcCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateObjcCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                  const GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateObjcCocoaConditionCode (in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalExpressionAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateSwiftCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                   const GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateSwiftCocoaConditionCode (in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalRoutineOrFunctionFormalInputArgumentAST generateObjcCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateObjcCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateObjcCocoaRoutineOrFunctionArgument (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalRoutineOrFunctionFormalInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateSwiftCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateSwiftCocoaRoutineOrFunctionArgument (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalSendDefaultActionAST generateObjcCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateObjcCocoaDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                    const GALGAS_string in_inScannerClassName,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateObjcCocoaDefaultSendCode (in_inScannerClassName, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalSendDefaultActionAST generateSwiftCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateSwiftCocoaDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                     const GALGAS_string in_inScannerClassName,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateSwiftCocoaDefaultSendCode (in_inScannerClassName, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateObjcCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                    const GALGAS_string in_inScannerClassName,
                                                                    const GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateObjcCocoaInstructionCode (in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@lexicalInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateSwiftCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                     const GALGAS_string in_inScannerClassName,
                                                                     const GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateSwiftCocoaInstructionCode (in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRuleAST generateObjcCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateObjcCocoaCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                         const GALGAS_string in_inScannerClassName,
                                                         const GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateObjcCocoaCode (in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRuleAST generateSwiftCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateSwiftCocoaCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                          const GALGAS_string in_inScannerClassName,
                                                          const GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateSwiftCocoaCode (in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalTypeEnum cppTypeName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_cppTypeName (const GALGAS_lexicalTypeEnum & inObject,
                                           Compiler *
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GALGAS_string ("String") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GALGAS_string ("utf32") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GALGAS_string ("uint32_t") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GALGAS_string ("uint64_t") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GALGAS_string ("int32_t") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GALGAS_string ("int64_t") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GALGAS_string ("double") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GALGAS_string ("BigSigned") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalTypeEnum appendMethodName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_appendMethodName (const GALGAS_lexicalTypeEnum & inObject,
                                                Compiler *
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GALGAS_string ("appendStringAsCLiteralStringConstant") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GALGAS_string ("appendChar") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GALGAS_string ("appendUnsigned") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GALGAS_string ("appendUnsigned") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GALGAS_string ("appendSigned") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GALGAS_string ("appendSigned") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GALGAS_string ("appendDouble") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GALGAS_string ("appendStringAsCLiteralStringConstant") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalTypeEnum appendArgumentOfMethod'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_appendArgumentOfMethod (const GALGAS_lexicalTypeEnum & inObject,
                                                      Compiler *
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GALGAS_string (".decimalString ()") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalTypeEnum initialization'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_initialization (const GALGAS_lexicalTypeEnum & inObject,
                                              Compiler *
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GALGAS_string (".removeAllKeepingCapacity ()") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GALGAS_string (" = TO_UNICODE (0)") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GALGAS_string (" = 0.0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GALGAS_string (" = BigSigned ()") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalTypeEnum cocoaTypeName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_cocoaTypeName (const GALGAS_lexicalTypeEnum & inObject,
                                             Compiler *
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GALGAS_string ("NSMutableString *") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GALGAS_string ("UInt32") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GALGAS_string ("UInt32") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GALGAS_string ("UInt64") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GALGAS_string ("SInt32") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GALGAS_string ("SInt64") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GALGAS_string ("double") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GALGAS_string ("NSMutableString *") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalTypeEnum swiftTypeName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_swiftTypeName (const GALGAS_lexicalTypeEnum & inObject,
                                             Compiler *
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GALGAS_string ("String") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GALGAS_string ("UInt32") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GALGAS_string ("UInt32") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GALGAS_string ("UInt64") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GALGAS_string ("Int32") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GALGAS_string ("Int64") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GALGAS_string ("Double") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GALGAS_string ("String") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalTypeEnum needsReferenceInInputOutputInCocoa'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool extensionGetter_needsReferenceInInputOutputInCocoa (const GALGAS_lexicalTypeEnum & inObject,
                                                                Compiler *
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalTypeEnum cocoaInitializationCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_cocoaInitializationCode (const GALGAS_lexicalTypeEnum & inObject,
                                                       Compiler *
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GALGAS_string ("[[NSMutableString alloc] init]") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GALGAS_string ("0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GALGAS_string ("0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GALGAS_string ("0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GALGAS_string ("0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GALGAS_string ("0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GALGAS_string ("0.0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GALGAS_string ("[[NSMutableString alloc] init]") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalTypeEnum swiftInitializationCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_swiftInitializationCode (const GALGAS_lexicalTypeEnum & inObject,
                                                       Compiler *
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GALGAS_string ("\"\"") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GALGAS_string ("0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GALGAS_string ("0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GALGAS_string ("0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GALGAS_string ("0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GALGAS_string ("0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GALGAS_string ("0.0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GALGAS_string ("\"\"") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalTypeEnum cocoaResetPrefix'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_cocoaResetPrefix (const GALGAS_lexicalTypeEnum & inObject,
                                                Compiler *
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GALGAS_string ("[") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GALGAS_string ("[") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalTypeEnum cocoaReset'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_cocoaReset (const GALGAS_lexicalTypeEnum & inObject,
                                          Compiler *
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GALGAS_string (" setString:@\"\"]") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GALGAS_string (" = 0.0") ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GALGAS_string (" setString:@\"\"]") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalSendDefaultActionAST checkLexicalDefaultAction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalDefaultAction (cPtr_lexicalSendDefaultActionAST * inObject,
                                                    GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalSendDefaultActionAST) ;
    inObject->method_checkLexicalDefaultAction (io_ioLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalExpressionAST checkLexicalExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalExpression (cPtr_lexicalExpressionAST * inObject,
                                                 GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalExpressionAST) ;
    inObject->method_checkLexicalExpression (io_ioLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalFunctionCallArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalFunctionCallArgument (cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                           GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                           GALGAS_lexicalTypeEnum in_inLexicalRoutineFormalArgumentType,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
    inObject->method_checkLexicalFunctionCallArgument (io_ioLexiqueAnalysisContext, in_inLexicalRoutineFormalArgumentType, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRoutineCallArgument (cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                          GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                          GALGAS_lexicalTypeEnum in_inLexicalRoutineFormalArgumentType,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
    inObject->method_checkLexicalRoutineCallArgument (io_ioLexiqueAnalysisContext, in_inLexicalRoutineFormalArgumentType, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@lexicalInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalInstruction (cPtr_lexicalInstructionAST * inObject,
                                                  GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                  GALGAS_lexicalTagMap & io_ioTagMap,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalInstructionAST) ;
    inObject->method_checkLexicalInstruction (io_ioLexiqueAnalysisContext, io_ioTagMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractLexicalRuleAST checkLexicalRule'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRule (cPtr_abstractLexicalRuleAST * inObject,
                                           GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLexicalRuleAST) ;
    inObject->method_checkLexicalRule (io_ioLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @lexicalStructuredSendInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalStructuredSendInstructionAST::cPtr_lexicalStructuredSendInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mLexicalSendSearchList (),
mProperty_mLexicalSendDefaultAction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalStructuredSendInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexicalSendSearchList.printNonNullClassInstanceProperties ("mLexicalSendSearchList") ;
    mProperty_mLexicalSendDefaultAction.printNonNullClassInstanceProperties ("mLexicalSendDefaultAction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalStructuredSendInstructionAST::objectCompare (const GALGAS_lexicalStructuredSendInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalStructuredSendInstructionAST::GALGAS_lexicalStructuredSendInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexicalStructuredSendInstructionAST GALGAS_lexicalStructuredSendInstructionAST::
init_21__21_ (const GALGAS_lexicalSendSearchListAST & in_mLexicalSendSearchList,
              const GALGAS_lexicalSendDefaultActionAST & in_mLexicalSendDefaultAction,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalStructuredSendInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalStructuredSendInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalStructuredSendInstructionAST_init_21__21_ (in_mLexicalSendSearchList, in_mLexicalSendDefaultAction, inCompiler) ;
  const GALGAS_lexicalStructuredSendInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStructuredSendInstructionAST::
lexicalStructuredSendInstructionAST_init_21__21_ (const GALGAS_lexicalSendSearchListAST & in_mLexicalSendSearchList,
                                                  const GALGAS_lexicalSendDefaultActionAST & in_mLexicalSendDefaultAction,
                                                  Compiler * /* inCompiler */) {
  mProperty_mLexicalSendSearchList = in_mLexicalSendSearchList ;
  mProperty_mLexicalSendDefaultAction = in_mLexicalSendDefaultAction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalStructuredSendInstructionAST::GALGAS_lexicalStructuredSendInstructionAST (const cPtr_lexicalStructuredSendInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalStructuredSendInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalStructuredSendInstructionAST GALGAS_lexicalStructuredSendInstructionAST::class_func_new (const GALGAS_lexicalSendSearchListAST & in_mLexicalSendSearchList,
                                                                                                       const GALGAS_lexicalSendDefaultActionAST & in_mLexicalSendDefaultAction
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStructuredSendInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalStructuredSendInstructionAST (in_mLexicalSendSearchList, in_mLexicalSendDefaultAction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST GALGAS_lexicalStructuredSendInstructionAST::readProperty_mLexicalSendSearchList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lexicalSendSearchListAST () ;
  }else{
    cPtr_lexicalStructuredSendInstructionAST * p = (cPtr_lexicalStructuredSendInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStructuredSendInstructionAST) ;
    return p->mProperty_mLexicalSendSearchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSendDefaultActionAST GALGAS_lexicalStructuredSendInstructionAST::readProperty_mLexicalSendDefaultAction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lexicalSendDefaultActionAST () ;
  }else{
    cPtr_lexicalStructuredSendInstructionAST * p = (cPtr_lexicalStructuredSendInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStructuredSendInstructionAST) ;
    return p->mProperty_mLexicalSendDefaultAction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalStructuredSendInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalStructuredSendInstructionAST::cPtr_lexicalStructuredSendInstructionAST (const GALGAS_lexicalSendSearchListAST & in_mLexicalSendSearchList,
                                                                                    const GALGAS_lexicalSendDefaultActionAST & in_mLexicalSendDefaultAction
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mLexicalSendSearchList (),
mProperty_mLexicalSendDefaultAction () {
  mProperty_mLexicalSendSearchList = in_mLexicalSendSearchList ;
  mProperty_mLexicalSendDefaultAction = in_mLexicalSendDefaultAction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalStructuredSendInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST ;
}

void cPtr_lexicalStructuredSendInstructionAST::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalStructuredSendInstructionAST:") ;
  mProperty_mLexicalSendSearchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexicalSendDefaultAction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalStructuredSendInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalStructuredSendInstructionAST (mProperty_mLexicalSendSearchList, mProperty_mLexicalSendDefaultAction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalStructuredSendInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST ("lexicalStructuredSendInstructionAST",
                                                                                           & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalStructuredSendInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalStructuredSendInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalStructuredSendInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalStructuredSendInstructionAST GALGAS_lexicalStructuredSendInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStructuredSendInstructionAST result ;
  const GALGAS_lexicalStructuredSendInstructionAST * p = (const GALGAS_lexicalStructuredSendInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalStructuredSendInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStructuredSendInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalStructuredSendInstructionAST_2D_weak::objectCompare (const GALGAS_lexicalStructuredSendInstructionAST_2D_weak & inOperand) const {
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

GALGAS_lexicalStructuredSendInstructionAST_2D_weak::GALGAS_lexicalStructuredSendInstructionAST_2D_weak (void) :
GALGAS_lexicalInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalStructuredSendInstructionAST_2D_weak & GALGAS_lexicalStructuredSendInstructionAST_2D_weak::operator = (const GALGAS_lexicalStructuredSendInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalStructuredSendInstructionAST_2D_weak::GALGAS_lexicalStructuredSendInstructionAST_2D_weak (const GALGAS_lexicalStructuredSendInstructionAST & inSource) :
GALGAS_lexicalInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalStructuredSendInstructionAST_2D_weak GALGAS_lexicalStructuredSendInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_lexicalStructuredSendInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalStructuredSendInstructionAST GALGAS_lexicalStructuredSendInstructionAST_2D_weak::bang_lexicalStructuredSendInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalStructuredSendInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalStructuredSendInstructionAST) ;
      result = GALGAS_lexicalStructuredSendInstructionAST ((cPtr_lexicalStructuredSendInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalStructuredSendInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST_2D_weak ("lexicalStructuredSendInstructionAST-weak",
                                                                                                   & kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalStructuredSendInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalStructuredSendInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalStructuredSendInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalStructuredSendInstructionAST_2D_weak GALGAS_lexicalStructuredSendInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStructuredSendInstructionAST_2D_weak result ;
  const GALGAS_lexicalStructuredSendInstructionAST_2D_weak * p = (const GALGAS_lexicalStructuredSendInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalStructuredSendInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStructuredSendInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalDropInstructionAST_2D_weak::objectCompare (const GALGAS_lexicalDropInstructionAST_2D_weak & inOperand) const {
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

GALGAS_lexicalDropInstructionAST_2D_weak::GALGAS_lexicalDropInstructionAST_2D_weak (void) :
GALGAS_lexicalInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalDropInstructionAST_2D_weak & GALGAS_lexicalDropInstructionAST_2D_weak::operator = (const GALGAS_lexicalDropInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalDropInstructionAST_2D_weak::GALGAS_lexicalDropInstructionAST_2D_weak (const GALGAS_lexicalDropInstructionAST & inSource) :
GALGAS_lexicalInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalDropInstructionAST_2D_weak GALGAS_lexicalDropInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_lexicalDropInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalDropInstructionAST GALGAS_lexicalDropInstructionAST_2D_weak::bang_lexicalDropInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalDropInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalDropInstructionAST) ;
      result = GALGAS_lexicalDropInstructionAST ((cPtr_lexicalDropInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalDropInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalDropInstructionAST_2D_weak ("lexicalDropInstructionAST-weak",
                                                                                         & kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalDropInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalDropInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalDropInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalDropInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalDropInstructionAST_2D_weak GALGAS_lexicalDropInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalDropInstructionAST_2D_weak result ;
  const GALGAS_lexicalDropInstructionAST_2D_weak * p = (const GALGAS_lexicalDropInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalDropInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalDropInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalErrorInstructionAST_2D_weak::objectCompare (const GALGAS_lexicalErrorInstructionAST_2D_weak & inOperand) const {
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

GALGAS_lexicalErrorInstructionAST_2D_weak::GALGAS_lexicalErrorInstructionAST_2D_weak (void) :
GALGAS_lexicalInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorInstructionAST_2D_weak & GALGAS_lexicalErrorInstructionAST_2D_weak::operator = (const GALGAS_lexicalErrorInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorInstructionAST_2D_weak::GALGAS_lexicalErrorInstructionAST_2D_weak (const GALGAS_lexicalErrorInstructionAST & inSource) :
GALGAS_lexicalInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorInstructionAST_2D_weak GALGAS_lexicalErrorInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_lexicalErrorInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorInstructionAST GALGAS_lexicalErrorInstructionAST_2D_weak::bang_lexicalErrorInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalErrorInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalErrorInstructionAST) ;
      result = GALGAS_lexicalErrorInstructionAST ((cPtr_lexicalErrorInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalErrorInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalErrorInstructionAST_2D_weak ("lexicalErrorInstructionAST-weak",
                                                                                          & kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalErrorInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalErrorInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalErrorInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalErrorInstructionAST_2D_weak GALGAS_lexicalErrorInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalErrorInstructionAST_2D_weak result ;
  const GALGAS_lexicalErrorInstructionAST_2D_weak * p = (const GALGAS_lexicalErrorInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalErrorInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalErrorInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalLogInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalLogInstructionAST::cPtr_lexicalLogInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalLogInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalLogInstructionAST::objectCompare (const GALGAS_lexicalLogInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalLogInstructionAST::GALGAS_lexicalLogInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexicalLogInstructionAST GALGAS_lexicalLogInstructionAST::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalLogInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalLogInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalLogInstructionAST_init (inCompiler) ;
  const GALGAS_lexicalLogInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalLogInstructionAST::
lexicalLogInstructionAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalLogInstructionAST::GALGAS_lexicalLogInstructionAST (const cPtr_lexicalLogInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalLogInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalLogInstructionAST GALGAS_lexicalLogInstructionAST::class_func_new (LOCATION_ARGS) {
  GALGAS_lexicalLogInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalLogInstructionAST (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalLogInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalLogInstructionAST::cPtr_lexicalLogInstructionAST (LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalLogInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalLogInstructionAST ;
}

void cPtr_lexicalLogInstructionAST::description (String & ioString,
                                                 const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@lexicalLogInstructionAST]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalLogInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalLogInstructionAST (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalLogInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalLogInstructionAST ("lexicalLogInstructionAST",
                                                                                & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalLogInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalLogInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalLogInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalLogInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalLogInstructionAST GALGAS_lexicalLogInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalLogInstructionAST result ;
  const GALGAS_lexicalLogInstructionAST * p = (const GALGAS_lexicalLogInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalLogInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalLogInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalLogInstructionAST_2D_weak::objectCompare (const GALGAS_lexicalLogInstructionAST_2D_weak & inOperand) const {
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

GALGAS_lexicalLogInstructionAST_2D_weak::GALGAS_lexicalLogInstructionAST_2D_weak (void) :
GALGAS_lexicalInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalLogInstructionAST_2D_weak & GALGAS_lexicalLogInstructionAST_2D_weak::operator = (const GALGAS_lexicalLogInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalLogInstructionAST_2D_weak::GALGAS_lexicalLogInstructionAST_2D_weak (const GALGAS_lexicalLogInstructionAST & inSource) :
GALGAS_lexicalInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalLogInstructionAST_2D_weak GALGAS_lexicalLogInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_lexicalLogInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalLogInstructionAST GALGAS_lexicalLogInstructionAST_2D_weak::bang_lexicalLogInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalLogInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalLogInstructionAST) ;
      result = GALGAS_lexicalLogInstructionAST ((cPtr_lexicalLogInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalLogInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalLogInstructionAST_2D_weak ("lexicalLogInstructionAST-weak",
                                                                                        & kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalLogInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalLogInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalLogInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalLogInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalLogInstructionAST_2D_weak GALGAS_lexicalLogInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalLogInstructionAST_2D_weak result ;
  const GALGAS_lexicalLogInstructionAST_2D_weak * p = (const GALGAS_lexicalLogInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalLogInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalLogInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalRepeatInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalRepeatInstructionAST::cPtr_lexicalRepeatInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mLexicalWhileBranchList (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalRepeatInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mRepeatedInstructionList.printNonNullClassInstanceProperties ("mRepeatedInstructionList") ;
    mProperty_mLexicalWhileBranchList.printNonNullClassInstanceProperties ("mLexicalWhileBranchList") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalRepeatInstructionAST::objectCompare (const GALGAS_lexicalRepeatInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRepeatInstructionAST::GALGAS_lexicalRepeatInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexicalRepeatInstructionAST GALGAS_lexicalRepeatInstructionAST::
init_21__21__21_ (const GALGAS_lexicalInstructionListAST & in_mRepeatedInstructionList,
                  const GALGAS_lexicalWhileBranchListAST & in_mLexicalWhileBranchList,
                  const GALGAS_location & in_mLocation,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_lexicalRepeatInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalRepeatInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalRepeatInstructionAST_init_21__21__21_ (in_mRepeatedInstructionList, in_mLexicalWhileBranchList, in_mLocation, inCompiler) ;
  const GALGAS_lexicalRepeatInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRepeatInstructionAST::
lexicalRepeatInstructionAST_init_21__21__21_ (const GALGAS_lexicalInstructionListAST & in_mRepeatedInstructionList,
                                              const GALGAS_lexicalWhileBranchListAST & in_mLexicalWhileBranchList,
                                              const GALGAS_location & in_mLocation,
                                              Compiler * /* inCompiler */) {
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mLexicalWhileBranchList = in_mLexicalWhileBranchList ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRepeatInstructionAST::GALGAS_lexicalRepeatInstructionAST (const cPtr_lexicalRepeatInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalRepeatInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRepeatInstructionAST GALGAS_lexicalRepeatInstructionAST::class_func_new (const GALGAS_lexicalInstructionListAST & in_mRepeatedInstructionList,
                                                                                       const GALGAS_lexicalWhileBranchListAST & in_mLexicalWhileBranchList,
                                                                                       const GALGAS_location & in_mLocation
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRepeatInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalRepeatInstructionAST (in_mRepeatedInstructionList, in_mLexicalWhileBranchList, in_mLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalRepeatInstructionAST::readProperty_mRepeatedInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lexicalInstructionListAST () ;
  }else{
    cPtr_lexicalRepeatInstructionAST * p = (cPtr_lexicalRepeatInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRepeatInstructionAST) ;
    return p->mProperty_mRepeatedInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalRepeatInstructionAST::readProperty_mLexicalWhileBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lexicalWhileBranchListAST () ;
  }else{
    cPtr_lexicalRepeatInstructionAST * p = (cPtr_lexicalRepeatInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRepeatInstructionAST) ;
    return p->mProperty_mLexicalWhileBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_lexicalRepeatInstructionAST::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_lexicalRepeatInstructionAST * p = (cPtr_lexicalRepeatInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRepeatInstructionAST) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalRepeatInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalRepeatInstructionAST::cPtr_lexicalRepeatInstructionAST (const GALGAS_lexicalInstructionListAST & in_mRepeatedInstructionList,
                                                                    const GALGAS_lexicalWhileBranchListAST & in_mLexicalWhileBranchList,
                                                                    const GALGAS_location & in_mLocation
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mLexicalWhileBranchList (),
mProperty_mLocation () {
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mLexicalWhileBranchList = in_mLexicalWhileBranchList ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalRepeatInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST ;
}

void cPtr_lexicalRepeatInstructionAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalRepeatInstructionAST:") ;
  mProperty_mRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexicalWhileBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalRepeatInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalRepeatInstructionAST (mProperty_mRepeatedInstructionList, mProperty_mLexicalWhileBranchList, mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalRepeatInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST ("lexicalRepeatInstructionAST",
                                                                                   & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRepeatInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRepeatInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRepeatInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRepeatInstructionAST GALGAS_lexicalRepeatInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRepeatInstructionAST result ;
  const GALGAS_lexicalRepeatInstructionAST * p = (const GALGAS_lexicalRepeatInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalRepeatInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRepeatInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalRepeatInstructionAST_2D_weak::objectCompare (const GALGAS_lexicalRepeatInstructionAST_2D_weak & inOperand) const {
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

GALGAS_lexicalRepeatInstructionAST_2D_weak::GALGAS_lexicalRepeatInstructionAST_2D_weak (void) :
GALGAS_lexicalInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRepeatInstructionAST_2D_weak & GALGAS_lexicalRepeatInstructionAST_2D_weak::operator = (const GALGAS_lexicalRepeatInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRepeatInstructionAST_2D_weak::GALGAS_lexicalRepeatInstructionAST_2D_weak (const GALGAS_lexicalRepeatInstructionAST & inSource) :
GALGAS_lexicalInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRepeatInstructionAST_2D_weak GALGAS_lexicalRepeatInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_lexicalRepeatInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRepeatInstructionAST GALGAS_lexicalRepeatInstructionAST_2D_weak::bang_lexicalRepeatInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRepeatInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalRepeatInstructionAST) ;
      result = GALGAS_lexicalRepeatInstructionAST ((cPtr_lexicalRepeatInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalRepeatInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST_2D_weak ("lexicalRepeatInstructionAST-weak",
                                                                                           & kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRepeatInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRepeatInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRepeatInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRepeatInstructionAST_2D_weak GALGAS_lexicalRepeatInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRepeatInstructionAST_2D_weak result ;
  const GALGAS_lexicalRepeatInstructionAST_2D_weak * p = (const GALGAS_lexicalRepeatInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalRepeatInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRepeatInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalRewindInstructionAST_2D_weak::objectCompare (const GALGAS_lexicalRewindInstructionAST_2D_weak & inOperand) const {
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

GALGAS_lexicalRewindInstructionAST_2D_weak::GALGAS_lexicalRewindInstructionAST_2D_weak (void) :
GALGAS_lexicalInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST_2D_weak & GALGAS_lexicalRewindInstructionAST_2D_weak::operator = (const GALGAS_lexicalRewindInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST_2D_weak::GALGAS_lexicalRewindInstructionAST_2D_weak (const GALGAS_lexicalRewindInstructionAST & inSource) :
GALGAS_lexicalInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST_2D_weak GALGAS_lexicalRewindInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_lexicalRewindInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST GALGAS_lexicalRewindInstructionAST_2D_weak::bang_lexicalRewindInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRewindInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalRewindInstructionAST) ;
      result = GALGAS_lexicalRewindInstructionAST ((cPtr_lexicalRewindInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalRewindInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRewindInstructionAST_2D_weak ("lexicalRewindInstructionAST-weak",
                                                                                           & kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRewindInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRewindInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRewindInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRewindInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST_2D_weak GALGAS_lexicalRewindInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRewindInstructionAST_2D_weak result ;
  const GALGAS_lexicalRewindInstructionAST_2D_weak * p = (const GALGAS_lexicalRewindInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalRewindInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRewindInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractLexicalRoutineActualArgumentAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_abstractLexicalRoutineActualArgumentAST::cPtr_abstractLexicalRoutineActualArgumentAST (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mActualPassingModeLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractLexicalRoutineActualArgumentAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mActualPassingModeLocation.printNonNullClassInstanceProperties ("mActualPassingModeLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_abstractLexicalRoutineActualArgumentAST::objectCompare (const GALGAS_abstractLexicalRoutineActualArgumentAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRoutineActualArgumentAST::GALGAS_abstractLexicalRoutineActualArgumentAST (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRoutineActualArgumentAST::GALGAS_abstractLexicalRoutineActualArgumentAST (const cPtr_abstractLexicalRoutineActualArgumentAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractLexicalRoutineActualArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_abstractLexicalRoutineActualArgumentAST::readProperty_mActualPassingModeLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_abstractLexicalRoutineActualArgumentAST * p = (cPtr_abstractLexicalRoutineActualArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractLexicalRoutineActualArgumentAST) ;
    return p->mProperty_mActualPassingModeLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractLexicalRoutineActualArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_abstractLexicalRoutineActualArgumentAST::cPtr_abstractLexicalRoutineActualArgumentAST (const GALGAS_location & in_mActualPassingModeLocation
                                                                                            COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mActualPassingModeLocation () {
  mProperty_mActualPassingModeLocation = in_mActualPassingModeLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//     @abstractLexicalRoutineActualArgumentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST ("abstractLexicalRoutineActualArgumentAST",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractLexicalRoutineActualArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractLexicalRoutineActualArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractLexicalRoutineActualArgumentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRoutineActualArgumentAST GALGAS_abstractLexicalRoutineActualArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_abstractLexicalRoutineActualArgumentAST result ;
  const GALGAS_abstractLexicalRoutineActualArgumentAST * p = (const GALGAS_abstractLexicalRoutineActualArgumentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractLexicalRoutineActualArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractLexicalRoutineActualArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak::objectCompare (const GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak & inOperand) const {
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

GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak::GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak & GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak::operator = (const GALGAS_abstractLexicalRoutineActualArgumentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak::GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak (const GALGAS_abstractLexicalRoutineActualArgumentAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRoutineActualArgumentAST GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak::bang_abstractLexicalRoutineActualArgumentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractLexicalRoutineActualArgumentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractLexicalRoutineActualArgumentAST) ;
      result = GALGAS_abstractLexicalRoutineActualArgumentAST ((cPtr_abstractLexicalRoutineActualArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractLexicalRoutineActualArgumentAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak ("abstractLexicalRoutineActualArgumentAST-weak",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak result ;
  const GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak * p = (const GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractLexicalRoutineActualArgumentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::objectCompare (const GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak & inOperand) const {
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

GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak (void) :
GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak & GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::operator = (const GALGAS_lexicalAttributeInputOutputArgumentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak (const GALGAS_lexicalAttributeInputOutputArgumentAST & inSource) :
GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::bang_lexicalAttributeInputOutputArgumentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeInputOutputArgumentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalAttributeInputOutputArgumentAST) ;
      result = GALGAS_lexicalAttributeInputOutputArgumentAST ((cPtr_lexicalAttributeInputOutputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalAttributeInputOutputArgumentAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak ("lexicalAttributeInputOutputArgumentAST-weak",
                                                                                                      & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak result ;
  const GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak * p = (const GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalAttributeInputOutputArgumentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeInputOutputArgumentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalFormalInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalFormalInputArgumentAST::cPtr_lexicalFormalInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRoutineActualArgumentAST (inCompiler COMMA_THERE),
mProperty_mRoutineOrFunctionFormalInputArgument () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalFormalInputArgumentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractLexicalRoutineActualArgumentAST::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineOrFunctionFormalInputArgument.printNonNullClassInstanceProperties ("mRoutineOrFunctionFormalInputArgument") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalFormalInputArgumentAST::objectCompare (const GALGAS_lexicalFormalInputArgumentAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFormalInputArgumentAST::GALGAS_lexicalFormalInputArgumentAST (void) :
GALGAS_abstractLexicalRoutineActualArgumentAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexicalFormalInputArgumentAST GALGAS_lexicalFormalInputArgumentAST::
init_21__21_ (const GALGAS_location & in_mActualPassingModeLocation,
              const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mRoutineOrFunctionFormalInputArgument,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalFormalInputArgumentAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalFormalInputArgumentAST (inCompiler COMMA_THERE)) ;
  object->lexicalFormalInputArgumentAST_init_21__21_ (in_mActualPassingModeLocation, in_mRoutineOrFunctionFormalInputArgument, inCompiler) ;
  const GALGAS_lexicalFormalInputArgumentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFormalInputArgumentAST::
lexicalFormalInputArgumentAST_init_21__21_ (const GALGAS_location & in_mActualPassingModeLocation,
                                            const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mRoutineOrFunctionFormalInputArgument,
                                            Compiler * /* inCompiler */) {
  mProperty_mActualPassingModeLocation = in_mActualPassingModeLocation ;
  mProperty_mRoutineOrFunctionFormalInputArgument = in_mRoutineOrFunctionFormalInputArgument ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFormalInputArgumentAST::GALGAS_lexicalFormalInputArgumentAST (const cPtr_lexicalFormalInputArgumentAST * inSourcePtr) :
GALGAS_abstractLexicalRoutineActualArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalFormalInputArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFormalInputArgumentAST GALGAS_lexicalFormalInputArgumentAST::class_func_new (const GALGAS_location & in_mActualPassingModeLocation,
                                                                                           const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mRoutineOrFunctionFormalInputArgument
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFormalInputArgumentAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalFormalInputArgumentAST (in_mActualPassingModeLocation, in_mRoutineOrFunctionFormalInputArgument COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST GALGAS_lexicalFormalInputArgumentAST::readProperty_mRoutineOrFunctionFormalInputArgument (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST () ;
  }else{
    cPtr_lexicalFormalInputArgumentAST * p = (cPtr_lexicalFormalInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFormalInputArgumentAST) ;
    return p->mProperty_mRoutineOrFunctionFormalInputArgument ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalFormalInputArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalFormalInputArgumentAST::cPtr_lexicalFormalInputArgumentAST (const GALGAS_location & in_mActualPassingModeLocation,
                                                                        const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mRoutineOrFunctionFormalInputArgument
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRoutineActualArgumentAST (in_mActualPassingModeLocation COMMA_THERE),
mProperty_mRoutineOrFunctionFormalInputArgument () {
  mProperty_mActualPassingModeLocation = in_mActualPassingModeLocation ;
  mProperty_mRoutineOrFunctionFormalInputArgument = in_mRoutineOrFunctionFormalInputArgument ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalFormalInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST ;
}

void cPtr_lexicalFormalInputArgumentAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalFormalInputArgumentAST:") ;
  mProperty_mActualPassingModeLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRoutineOrFunctionFormalInputArgument.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalFormalInputArgumentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalFormalInputArgumentAST (mProperty_mActualPassingModeLocation, mProperty_mRoutineOrFunctionFormalInputArgument COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalFormalInputArgumentAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST ("lexicalFormalInputArgumentAST",
                                                                                     & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFormalInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFormalInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFormalInputArgumentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFormalInputArgumentAST GALGAS_lexicalFormalInputArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFormalInputArgumentAST result ;
  const GALGAS_lexicalFormalInputArgumentAST * p = (const GALGAS_lexicalFormalInputArgumentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalFormalInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFormalInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalFormalInputArgumentAST_2D_weak::objectCompare (const GALGAS_lexicalFormalInputArgumentAST_2D_weak & inOperand) const {
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

GALGAS_lexicalFormalInputArgumentAST_2D_weak::GALGAS_lexicalFormalInputArgumentAST_2D_weak (void) :
GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFormalInputArgumentAST_2D_weak & GALGAS_lexicalFormalInputArgumentAST_2D_weak::operator = (const GALGAS_lexicalFormalInputArgumentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFormalInputArgumentAST_2D_weak::GALGAS_lexicalFormalInputArgumentAST_2D_weak (const GALGAS_lexicalFormalInputArgumentAST & inSource) :
GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFormalInputArgumentAST_2D_weak GALGAS_lexicalFormalInputArgumentAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_lexicalFormalInputArgumentAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFormalInputArgumentAST GALGAS_lexicalFormalInputArgumentAST_2D_weak::bang_lexicalFormalInputArgumentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFormalInputArgumentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalFormalInputArgumentAST) ;
      result = GALGAS_lexicalFormalInputArgumentAST ((cPtr_lexicalFormalInputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalFormalInputArgumentAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST_2D_weak ("lexicalFormalInputArgumentAST-weak",
                                                                                             & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFormalInputArgumentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFormalInputArgumentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFormalInputArgumentAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalFormalInputArgumentAST_2D_weak GALGAS_lexicalFormalInputArgumentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFormalInputArgumentAST_2D_weak result ;
  const GALGAS_lexicalFormalInputArgumentAST_2D_weak * p = (const GALGAS_lexicalFormalInputArgumentAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalFormalInputArgumentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFormalInputArgumentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalRoutineCallActualArgumentListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalRoutineCallActualArgumentListAST : public cCollectionElement {
  public: GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_lexicalRoutineCallActualArgumentListAST (const GALGAS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument
                                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_lexicalRoutineCallActualArgumentListAST (const GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalRoutineCallActualArgumentListAST::cCollectionElement_lexicalRoutineCallActualArgumentListAST (const GALGAS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument
                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalRoutineActualArgument) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_lexicalRoutineCallActualArgumentListAST::cCollectionElement_lexicalRoutineCallActualArgumentListAST (const GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLexicalRoutineActualArgument) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalRoutineCallActualArgumentListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalRoutineCallActualArgumentListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_lexicalRoutineCallActualArgumentListAST (mObject.mProperty_mLexicalRoutineActualArgument COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalRoutineCallActualArgumentListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLexicalRoutineActualArgument" ":") ;
  mObject.mProperty_mLexicalRoutineActualArgument.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST::GALGAS_lexicalRoutineCallActualArgumentListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST::GALGAS_lexicalRoutineCallActualArgumentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalRoutineCallActualArgumentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalRoutineCallActualArgumentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineCallActualArgumentListAST::enterElement (const GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element & inValue,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::class_func_listWithValue (const GALGAS_abstractLexicalRoutineActualArgumentAST & inOperand0
                                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineCallActualArgumentListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_lexicalRoutineCallActualArgumentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalRoutineCallActualArgumentListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineCallActualArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                const GALGAS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST (in_mLexicalRoutineActualArgument COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineCallActualArgumentListAST::addAssign_operation (const GALGAS_abstractLexicalRoutineActualArgumentAST & inOperand0
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineCallActualArgumentListAST::setter_append (const GALGAS_abstractLexicalRoutineActualArgumentAST inOperand0,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineCallActualArgumentListAST::setter_insertAtIndex (const GALGAS_abstractLexicalRoutineActualArgumentAST inOperand0,
                                                                           const GALGAS_uint inInsertionIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST (inOperand0 COMMA_THERE)) ;
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

void GALGAS_lexicalRoutineCallActualArgumentListAST::setter_removeAtIndex (GALGAS_abstractLexicalRoutineActualArgumentAST & outOperand0,
                                                                           const GALGAS_uint inRemoveIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
        outOperand0 = p->mObject.mProperty_mLexicalRoutineActualArgument ;
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

void GALGAS_lexicalRoutineCallActualArgumentListAST::setter_popFirst (GALGAS_abstractLexicalRoutineActualArgumentAST & outOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mLexicalRoutineActualArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineCallActualArgumentListAST::setter_popLast (GALGAS_abstractLexicalRoutineActualArgumentAST & outOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mLexicalRoutineActualArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineCallActualArgumentListAST::method_first (GALGAS_abstractLexicalRoutineActualArgumentAST & outOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mLexicalRoutineActualArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineCallActualArgumentListAST::method_last (GALGAS_abstractLexicalRoutineActualArgumentAST & outOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
    outOperand0 = p->mObject.mProperty_mLexicalRoutineActualArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::add_operation (const GALGAS_lexicalRoutineCallActualArgumentListAST & inOperand,
                                                                                                              Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineCallActualArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineCallActualArgumentListAST result = GALGAS_lexicalRoutineCallActualArgumentListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineCallActualArgumentListAST result = GALGAS_lexicalRoutineCallActualArgumentListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineCallActualArgumentListAST result = GALGAS_lexicalRoutineCallActualArgumentListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineCallActualArgumentListAST::plusAssign_operation (const GALGAS_lexicalRoutineCallActualArgumentListAST inOperand,
                                                                           Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineCallActualArgumentListAST::setter_setMLexicalRoutineActualArgumentAtIndex (GALGAS_abstractLexicalRoutineActualArgumentAST inOperand,
                                                                                                     GALGAS_uint inIndex,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexicalRoutineActualArgument = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRoutineActualArgumentAST GALGAS_lexicalRoutineCallActualArgumentListAST::getter_mLexicalRoutineActualArgumentAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) attributes.ptr () ;
  GALGAS_abstractLexicalRoutineActualArgumentAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
    result = p->mObject.mProperty_mLexicalRoutineActualArgument ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_lexicalRoutineCallActualArgumentListAST::cEnumerator_lexicalRoutineCallActualArgumentListAST (const GALGAS_lexicalRoutineCallActualArgumentListAST & inEnumeratedObject,
                                                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element cEnumerator_lexicalRoutineCallActualArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (const cCollectionElement_lexicalRoutineCallActualArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRoutineActualArgumentAST cEnumerator_lexicalRoutineCallActualArgumentListAST::current_mLexicalRoutineActualArgument (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (const cCollectionElement_lexicalRoutineCallActualArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
  return p->mObject.mProperty_mLexicalRoutineActualArgument ;
}




//--------------------------------------------------------------------------------------------------
//
//     @lexicalRoutineCallActualArgumentListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST ("lexicalRoutineCallActualArgumentListAST",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRoutineCallActualArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRoutineCallActualArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineCallActualArgumentListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineCallActualArgumentListAST result ;
  const GALGAS_lexicalRoutineCallActualArgumentListAST * p = (const GALGAS_lexicalRoutineCallActualArgumentListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalRoutineCallActualArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineCallActualArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalRoutineCallInstructionAST_2D_weak::objectCompare (const GALGAS_lexicalRoutineCallInstructionAST_2D_weak & inOperand) const {
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

GALGAS_lexicalRoutineCallInstructionAST_2D_weak::GALGAS_lexicalRoutineCallInstructionAST_2D_weak (void) :
GALGAS_lexicalInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallInstructionAST_2D_weak & GALGAS_lexicalRoutineCallInstructionAST_2D_weak::operator = (const GALGAS_lexicalRoutineCallInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallInstructionAST_2D_weak::GALGAS_lexicalRoutineCallInstructionAST_2D_weak (const GALGAS_lexicalRoutineCallInstructionAST & inSource) :
GALGAS_lexicalInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallInstructionAST_2D_weak GALGAS_lexicalRoutineCallInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_lexicalRoutineCallInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallInstructionAST GALGAS_lexicalRoutineCallInstructionAST_2D_weak::bang_lexicalRoutineCallInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalRoutineCallInstructionAST) ;
      result = GALGAS_lexicalRoutineCallInstructionAST ((cPtr_lexicalRoutineCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalRoutineCallInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalRoutineCallInstructionAST_2D_weak ("lexicalRoutineCallInstructionAST-weak",
                                                                                                & kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRoutineCallInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineCallInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRoutineCallInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineCallInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallInstructionAST_2D_weak GALGAS_lexicalRoutineCallInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineCallInstructionAST_2D_weak result ;
  const GALGAS_lexicalRoutineCallInstructionAST_2D_weak * p = (const GALGAS_lexicalRoutineCallInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalRoutineCallInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineCallInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRoutineActualArgumentAST generateObjcCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateObjcCocoaRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                    const GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateObjcCocoaRoutineArgument (in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRoutineActualArgumentAST generateSwiftCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateSwiftCocoaRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                     const GALGAS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateSwiftCocoaRoutineArgument (in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractLexicalRoutineActualArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRoutineCallArgument (cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                          GALGAS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                          GALGAS_lexicalArgumentModeAST in_inLexicalRoutineFormalArgumentMode,
                                                          GALGAS_lexicalTypeEnum in_inLexicalRoutineFormalArgumentType,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLexicalRoutineActualArgumentAST) ;
    inObject->method_checkLexicalRoutineCallArgument (io_ioLexiqueAnalysisContext, in_inLexicalRoutineFormalArgumentMode, in_inLexicalRoutineFormalArgumentType, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractLexicalRoutineActualArgumentAST generateRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateRoutineArgument (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalSelectInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalSelectInstructionAST::cPtr_lexicalSelectInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mLexicalSelectBranchList (),
mProperty_mDefaultInstructionList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalSelectInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexicalSelectBranchList.printNonNullClassInstanceProperties ("mLexicalSelectBranchList") ;
    mProperty_mDefaultInstructionList.printNonNullClassInstanceProperties ("mDefaultInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalSelectInstructionAST::objectCompare (const GALGAS_lexicalSelectInstructionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectInstructionAST::GALGAS_lexicalSelectInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_lexicalSelectInstructionAST GALGAS_lexicalSelectInstructionAST::
init_21__21_ (const GALGAS_lexicalSelectBranchListAST & in_mLexicalSelectBranchList,
              const GALGAS_lexicalInstructionListAST & in_mDefaultInstructionList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalSelectInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalSelectInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalSelectInstructionAST_init_21__21_ (in_mLexicalSelectBranchList, in_mDefaultInstructionList, inCompiler) ;
  const GALGAS_lexicalSelectInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSelectInstructionAST::
lexicalSelectInstructionAST_init_21__21_ (const GALGAS_lexicalSelectBranchListAST & in_mLexicalSelectBranchList,
                                          const GALGAS_lexicalInstructionListAST & in_mDefaultInstructionList,
                                          Compiler * /* inCompiler */) {
  mProperty_mLexicalSelectBranchList = in_mLexicalSelectBranchList ;
  mProperty_mDefaultInstructionList = in_mDefaultInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectInstructionAST::GALGAS_lexicalSelectInstructionAST (const cPtr_lexicalSelectInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalSelectInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectInstructionAST GALGAS_lexicalSelectInstructionAST::class_func_new (const GALGAS_lexicalSelectBranchListAST & in_mLexicalSelectBranchList,
                                                                                       const GALGAS_lexicalInstructionListAST & in_mDefaultInstructionList
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSelectInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalSelectInstructionAST (in_mLexicalSelectBranchList, in_mDefaultInstructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectInstructionAST::readProperty_mLexicalSelectBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lexicalSelectBranchListAST () ;
  }else{
    cPtr_lexicalSelectInstructionAST * p = (cPtr_lexicalSelectInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSelectInstructionAST) ;
    return p->mProperty_mLexicalSelectBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalSelectInstructionAST::readProperty_mDefaultInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lexicalInstructionListAST () ;
  }else{
    cPtr_lexicalSelectInstructionAST * p = (cPtr_lexicalSelectInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSelectInstructionAST) ;
    return p->mProperty_mDefaultInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalSelectInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalSelectInstructionAST::cPtr_lexicalSelectInstructionAST (const GALGAS_lexicalSelectBranchListAST & in_mLexicalSelectBranchList,
                                                                    const GALGAS_lexicalInstructionListAST & in_mDefaultInstructionList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mLexicalSelectBranchList (),
mProperty_mDefaultInstructionList () {
  mProperty_mLexicalSelectBranchList = in_mLexicalSelectBranchList ;
  mProperty_mDefaultInstructionList = in_mDefaultInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalSelectInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectInstructionAST ;
}

void cPtr_lexicalSelectInstructionAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalSelectInstructionAST:") ;
  mProperty_mLexicalSelectBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDefaultInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalSelectInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalSelectInstructionAST (mProperty_mLexicalSelectBranchList, mProperty_mDefaultInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @lexicalSelectInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSelectInstructionAST ("lexicalSelectInstructionAST",
                                                                                   & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSelectInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSelectInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSelectInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectInstructionAST GALGAS_lexicalSelectInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSelectInstructionAST result ;
  const GALGAS_lexicalSelectInstructionAST * p = (const GALGAS_lexicalSelectInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalSelectInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSelectInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalSelectInstructionAST_2D_weak::objectCompare (const GALGAS_lexicalSelectInstructionAST_2D_weak & inOperand) const {
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

GALGAS_lexicalSelectInstructionAST_2D_weak::GALGAS_lexicalSelectInstructionAST_2D_weak (void) :
GALGAS_lexicalInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectInstructionAST_2D_weak & GALGAS_lexicalSelectInstructionAST_2D_weak::operator = (const GALGAS_lexicalSelectInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectInstructionAST_2D_weak::GALGAS_lexicalSelectInstructionAST_2D_weak (const GALGAS_lexicalSelectInstructionAST & inSource) :
GALGAS_lexicalInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectInstructionAST_2D_weak GALGAS_lexicalSelectInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_lexicalSelectInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectInstructionAST GALGAS_lexicalSelectInstructionAST_2D_weak::bang_lexicalSelectInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSelectInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalSelectInstructionAST) ;
      result = GALGAS_lexicalSelectInstructionAST ((cPtr_lexicalSelectInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalSelectInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSelectInstructionAST_2D_weak ("lexicalSelectInstructionAST-weak",
                                                                                           & kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSelectInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSelectInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSelectInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectInstructionAST_2D_weak GALGAS_lexicalSelectInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSelectInstructionAST_2D_weak result ;
  const GALGAS_lexicalSelectInstructionAST_2D_weak * p = (const GALGAS_lexicalSelectInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalSelectInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSelectInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalSimpleSendInstructionAST_2D_weak::objectCompare (const GALGAS_lexicalSimpleSendInstructionAST_2D_weak & inOperand) const {
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

GALGAS_lexicalSimpleSendInstructionAST_2D_weak::GALGAS_lexicalSimpleSendInstructionAST_2D_weak (void) :
GALGAS_lexicalInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST_2D_weak & GALGAS_lexicalSimpleSendInstructionAST_2D_weak::operator = (const GALGAS_lexicalSimpleSendInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST_2D_weak::GALGAS_lexicalSimpleSendInstructionAST_2D_weak (const GALGAS_lexicalSimpleSendInstructionAST & inSource) :
GALGAS_lexicalInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST_2D_weak GALGAS_lexicalSimpleSendInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_lexicalSimpleSendInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST GALGAS_lexicalSimpleSendInstructionAST_2D_weak::bang_lexicalSimpleSendInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSimpleSendInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalSimpleSendInstructionAST) ;
      result = GALGAS_lexicalSimpleSendInstructionAST ((cPtr_lexicalSimpleSendInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalSimpleSendInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST_2D_weak ("lexicalSimpleSendInstructionAST-weak",
                                                                                               & kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSimpleSendInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSimpleSendInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSimpleSendInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalSimpleSendInstructionAST_2D_weak GALGAS_lexicalSimpleSendInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSimpleSendInstructionAST_2D_weak result ;
  const GALGAS_lexicalSimpleSendInstructionAST_2D_weak * p = (const GALGAS_lexicalSimpleSendInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalSimpleSendInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSimpleSendInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalTagInstructionAST_2D_weak::objectCompare (const GALGAS_lexicalTagInstructionAST_2D_weak & inOperand) const {
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

GALGAS_lexicalTagInstructionAST_2D_weak::GALGAS_lexicalTagInstructionAST_2D_weak (void) :
GALGAS_lexicalInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST_2D_weak & GALGAS_lexicalTagInstructionAST_2D_weak::operator = (const GALGAS_lexicalTagInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST_2D_weak::GALGAS_lexicalTagInstructionAST_2D_weak (const GALGAS_lexicalTagInstructionAST & inSource) :
GALGAS_lexicalInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST_2D_weak GALGAS_lexicalTagInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_lexicalTagInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST GALGAS_lexicalTagInstructionAST_2D_weak::bang_lexicalTagInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalTagInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalTagInstructionAST) ;
      result = GALGAS_lexicalTagInstructionAST ((cPtr_lexicalTagInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalTagInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalTagInstructionAST_2D_weak ("lexicalTagInstructionAST-weak",
                                                                                        & kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalTagInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalTagInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalTagInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST_2D_weak GALGAS_lexicalTagInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTagInstructionAST_2D_weak result ;
  const GALGAS_lexicalTagInstructionAST_2D_weak * p = (const GALGAS_lexicalTagInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalTagInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTagInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_lexicalWarningInstructionAST_2D_weak::objectCompare (const GALGAS_lexicalWarningInstructionAST_2D_weak & inOperand) const {
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

GALGAS_lexicalWarningInstructionAST_2D_weak::GALGAS_lexicalWarningInstructionAST_2D_weak (void) :
GALGAS_lexicalInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalWarningInstructionAST_2D_weak & GALGAS_lexicalWarningInstructionAST_2D_weak::operator = (const GALGAS_lexicalWarningInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalWarningInstructionAST_2D_weak::GALGAS_lexicalWarningInstructionAST_2D_weak (const GALGAS_lexicalWarningInstructionAST & inSource) :
GALGAS_lexicalInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalWarningInstructionAST_2D_weak GALGAS_lexicalWarningInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_lexicalWarningInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalWarningInstructionAST GALGAS_lexicalWarningInstructionAST_2D_weak::bang_lexicalWarningInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalWarningInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalWarningInstructionAST) ;
      result = GALGAS_lexicalWarningInstructionAST ((cPtr_lexicalWarningInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @lexicalWarningInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_lexicalWarningInstructionAST_2D_weak ("lexicalWarningInstructionAST-weak",
                                                                                            & kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalWarningInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalWarningInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalWarningInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalWarningInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lexicalWarningInstructionAST_2D_weak GALGAS_lexicalWarningInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalWarningInstructionAST_2D_weak result ;
  const GALGAS_lexicalWarningInstructionAST_2D_weak * p = (const GALGAS_lexicalWarningInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_lexicalWarningInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalWarningInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionDefaultValueEnumAST::GALGAS_optionDefaultValueEnumAST (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GALGAS_optionDefaultValueEnumAST GALGAS_optionDefaultValueEnumAST::class_func_noDefaultValue (UNUSED_LOCATION_ARGS) {
  GALGAS_optionDefaultValueEnumAST result ;
  result.mEnum = Enumeration::enum_noDefaultValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionDefaultValueEnumAST GALGAS_optionDefaultValueEnumAST::class_func_unsignedDefaultValue (UNUSED_LOCATION_ARGS) {
  GALGAS_optionDefaultValueEnumAST result ;
  result.mEnum = Enumeration::enum_unsignedDefaultValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionDefaultValueEnumAST GALGAS_optionDefaultValueEnumAST::class_func_stringDefaultValue (UNUSED_LOCATION_ARGS) {
  GALGAS_optionDefaultValueEnumAST result ;
  result.mEnum = Enumeration::enum_stringDefaultValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionDefaultValueEnumAST::getter_noDefaultValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noDefaultValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionDefaultValueEnumAST::getter_unsignedDefaultValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_unsignedDefaultValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionDefaultValueEnumAST::getter_stringDefaultValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_stringDefaultValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_optionDefaultValueEnumAST [4] = {
  "(not built)",
  "noDefaultValue",
  "unsignedDefaultValue",
  "stringDefaultValue"
} ;

//--------------------------------------------------------------------------------------------------

void GALGAS_optionDefaultValueEnumAST::description (String & ioString,
                                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @optionDefaultValueEnumAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_optionDefaultValueEnumAST [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_optionDefaultValueEnumAST::objectCompare (const GALGAS_optionDefaultValueEnumAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @optionDefaultValueEnumAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionDefaultValueEnumAST ("optionDefaultValueEnumAST",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionDefaultValueEnumAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionDefaultValueEnumAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionDefaultValueEnumAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionDefaultValueEnumAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionDefaultValueEnumAST GALGAS_optionDefaultValueEnumAST::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_optionDefaultValueEnumAST result ;
  const GALGAS_optionDefaultValueEnumAST * p = (const GALGAS_optionDefaultValueEnumAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_optionDefaultValueEnumAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionDefaultValueEnumAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@commandLineOptionListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_commandLineOptionListAST : public cCollectionElement {
  public: GALGAS_commandLineOptionListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_commandLineOptionListAST (const GALGAS_lstring & in_mOptionTypeName,
                                                       const GALGAS_lstring & in_mOptionInternalName,
                                                       const GALGAS_lchar & in_mOptionInvocationLetter,
                                                       const GALGAS_lstring & in_mOptionInvocationString,
                                                       const GALGAS_lstring & in_mOptionComment,
                                                       const GALGAS_lstring & in_mOptionDefaultValue,
                                                       const GALGAS_optionDefaultValueEnumAST & in_mOptionDefaultValueKind
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_commandLineOptionListAST (const GALGAS_commandLineOptionListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_commandLineOptionListAST::cCollectionElement_commandLineOptionListAST (const GALGAS_lstring & in_mOptionTypeName,
                                                                                          const GALGAS_lstring & in_mOptionInternalName,
                                                                                          const GALGAS_lchar & in_mOptionInvocationLetter,
                                                                                          const GALGAS_lstring & in_mOptionInvocationString,
                                                                                          const GALGAS_lstring & in_mOptionComment,
                                                                                          const GALGAS_lstring & in_mOptionDefaultValue,
                                                                                          const GALGAS_optionDefaultValueEnumAST & in_mOptionDefaultValueKind
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionTypeName, in_mOptionInternalName, in_mOptionInvocationLetter, in_mOptionInvocationString, in_mOptionComment, in_mOptionDefaultValue, in_mOptionDefaultValueKind) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_commandLineOptionListAST::cCollectionElement_commandLineOptionListAST (const GALGAS_commandLineOptionListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOptionTypeName, inElement.mProperty_mOptionInternalName, inElement.mProperty_mOptionInvocationLetter, inElement.mProperty_mOptionInvocationString, inElement.mProperty_mOptionComment, inElement.mProperty_mOptionDefaultValue, inElement.mProperty_mOptionDefaultValueKind) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_commandLineOptionListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_commandLineOptionListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_commandLineOptionListAST (mObject.mProperty_mOptionTypeName, mObject.mProperty_mOptionInternalName, mObject.mProperty_mOptionInvocationLetter, mObject.mProperty_mOptionInvocationString, mObject.mProperty_mOptionComment, mObject.mProperty_mOptionDefaultValue, mObject.mProperty_mOptionDefaultValueKind COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_commandLineOptionListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionTypeName" ":") ;
  mObject.mProperty_mOptionTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionInternalName" ":") ;
  mObject.mProperty_mOptionInternalName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionInvocationLetter" ":") ;
  mObject.mProperty_mOptionInvocationLetter.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionInvocationString" ":") ;
  mObject.mProperty_mOptionInvocationString.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionComment" ":") ;
  mObject.mProperty_mOptionComment.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionDefaultValue" ":") ;
  mObject.mProperty_mOptionDefaultValue.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionDefaultValueKind" ":") ;
  mObject.mProperty_mOptionDefaultValueKind.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST::GALGAS_commandLineOptionListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST::GALGAS_commandLineOptionListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_commandLineOptionListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_commandLineOptionListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::enterElement (const GALGAS_commandLineOptionListAST_2D_element & inValue,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_commandLineOptionListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                           const GALGAS_lstring & inOperand1,
                                                                                           const GALGAS_lchar & inOperand2,
                                                                                           const GALGAS_lstring & inOperand3,
                                                                                           const GALGAS_lstring & inOperand4,
                                                                                           const GALGAS_lstring & inOperand5,
                                                                                           const GALGAS_optionDefaultValueEnumAST & inOperand6
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_commandLineOptionListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_commandLineOptionListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_commandLineOptionListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_lstring & in_mOptionTypeName,
                                                                 const GALGAS_lstring & in_mOptionInternalName,
                                                                 const GALGAS_lchar & in_mOptionInvocationLetter,
                                                                 const GALGAS_lstring & in_mOptionInvocationString,
                                                                 const GALGAS_lstring & in_mOptionComment,
                                                                 const GALGAS_lstring & in_mOptionDefaultValue,
                                                                 const GALGAS_optionDefaultValueEnumAST & in_mOptionDefaultValueKind
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_commandLineOptionListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_commandLineOptionListAST (in_mOptionTypeName,
                                                              in_mOptionInternalName,
                                                              in_mOptionInvocationLetter,
                                                              in_mOptionInvocationString,
                                                              in_mOptionComment,
                                                              in_mOptionDefaultValue,
                                                              in_mOptionDefaultValueKind COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                           const GALGAS_lstring & inOperand1,
                                                           const GALGAS_lchar & inOperand2,
                                                           const GALGAS_lstring & inOperand3,
                                                           const GALGAS_lstring & inOperand4,
                                                           const GALGAS_lstring & inOperand5,
                                                           const GALGAS_optionDefaultValueEnumAST & inOperand6
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_commandLineOptionListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::setter_append (const GALGAS_lstring inOperand0,
                                                     const GALGAS_lstring inOperand1,
                                                     const GALGAS_lchar inOperand2,
                                                     const GALGAS_lstring inOperand3,
                                                     const GALGAS_lstring inOperand4,
                                                     const GALGAS_lstring inOperand5,
                                                     const GALGAS_optionDefaultValueEnumAST inOperand6,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_commandLineOptionListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                            const GALGAS_lstring inOperand1,
                                                            const GALGAS_lchar inOperand2,
                                                            const GALGAS_lstring inOperand3,
                                                            const GALGAS_lstring inOperand4,
                                                            const GALGAS_lstring inOperand5,
                                                            const GALGAS_optionDefaultValueEnumAST inOperand6,
                                                            const GALGAS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_commandLineOptionListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
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

void GALGAS_commandLineOptionListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_lchar & outOperand2,
                                                            GALGAS_lstring & outOperand3,
                                                            GALGAS_lstring & outOperand4,
                                                            GALGAS_lstring & outOperand5,
                                                            GALGAS_optionDefaultValueEnumAST & outOperand6,
                                                            const GALGAS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        outOperand5.drop () ;
        outOperand6.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
        outOperand0 = p->mObject.mProperty_mOptionTypeName ;
        outOperand1 = p->mObject.mProperty_mOptionInternalName ;
        outOperand2 = p->mObject.mProperty_mOptionInvocationLetter ;
        outOperand3 = p->mObject.mProperty_mOptionInvocationString ;
        outOperand4 = p->mObject.mProperty_mOptionComment ;
        outOperand5 = p->mObject.mProperty_mOptionDefaultValue ;
        outOperand6 = p->mObject.mProperty_mOptionDefaultValueKind ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_lchar & outOperand2,
                                                       GALGAS_lstring & outOperand3,
                                                       GALGAS_lstring & outOperand4,
                                                       GALGAS_lstring & outOperand5,
                                                       GALGAS_optionDefaultValueEnumAST & outOperand6,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    outOperand0 = p->mObject.mProperty_mOptionTypeName ;
    outOperand1 = p->mObject.mProperty_mOptionInternalName ;
    outOperand2 = p->mObject.mProperty_mOptionInvocationLetter ;
    outOperand3 = p->mObject.mProperty_mOptionInvocationString ;
    outOperand4 = p->mObject.mProperty_mOptionComment ;
    outOperand5 = p->mObject.mProperty_mOptionDefaultValue ;
    outOperand6 = p->mObject.mProperty_mOptionDefaultValueKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_lchar & outOperand2,
                                                      GALGAS_lstring & outOperand3,
                                                      GALGAS_lstring & outOperand4,
                                                      GALGAS_lstring & outOperand5,
                                                      GALGAS_optionDefaultValueEnumAST & outOperand6,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    outOperand0 = p->mObject.mProperty_mOptionTypeName ;
    outOperand1 = p->mObject.mProperty_mOptionInternalName ;
    outOperand2 = p->mObject.mProperty_mOptionInvocationLetter ;
    outOperand3 = p->mObject.mProperty_mOptionInvocationString ;
    outOperand4 = p->mObject.mProperty_mOptionComment ;
    outOperand5 = p->mObject.mProperty_mOptionDefaultValue ;
    outOperand6 = p->mObject.mProperty_mOptionDefaultValueKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::method_first (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_lchar & outOperand2,
                                                    GALGAS_lstring & outOperand3,
                                                    GALGAS_lstring & outOperand4,
                                                    GALGAS_lstring & outOperand5,
                                                    GALGAS_optionDefaultValueEnumAST & outOperand6,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    outOperand0 = p->mObject.mProperty_mOptionTypeName ;
    outOperand1 = p->mObject.mProperty_mOptionInternalName ;
    outOperand2 = p->mObject.mProperty_mOptionInvocationLetter ;
    outOperand3 = p->mObject.mProperty_mOptionInvocationString ;
    outOperand4 = p->mObject.mProperty_mOptionComment ;
    outOperand5 = p->mObject.mProperty_mOptionDefaultValue ;
    outOperand6 = p->mObject.mProperty_mOptionDefaultValueKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::method_last (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_lchar & outOperand2,
                                                   GALGAS_lstring & outOperand3,
                                                   GALGAS_lstring & outOperand4,
                                                   GALGAS_lstring & outOperand5,
                                                   GALGAS_optionDefaultValueEnumAST & outOperand6,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    outOperand0 = p->mObject.mProperty_mOptionTypeName ;
    outOperand1 = p->mObject.mProperty_mOptionInternalName ;
    outOperand2 = p->mObject.mProperty_mOptionInvocationLetter ;
    outOperand3 = p->mObject.mProperty_mOptionInvocationString ;
    outOperand4 = p->mObject.mProperty_mOptionComment ;
    outOperand5 = p->mObject.mProperty_mOptionDefaultValue ;
    outOperand6 = p->mObject.mProperty_mOptionDefaultValueKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::add_operation (const GALGAS_commandLineOptionListAST & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_commandLineOptionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_commandLineOptionListAST result = GALGAS_commandLineOptionListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_commandLineOptionListAST result = GALGAS_commandLineOptionListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_commandLineOptionListAST result = GALGAS_commandLineOptionListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::plusAssign_operation (const GALGAS_commandLineOptionListAST inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::setter_setMOptionTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_commandLineOptionListAST::getter_mOptionTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mProperty_mOptionTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::setter_setMOptionInternalNameAtIndex (GALGAS_lstring inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionInternalName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_commandLineOptionListAST::getter_mOptionInternalNameAtIndex (const GALGAS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mProperty_mOptionInternalName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::setter_setMOptionInvocationLetterAtIndex (GALGAS_lchar inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionInvocationLetter = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_commandLineOptionListAST::getter_mOptionInvocationLetterAtIndex (const GALGAS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GALGAS_lchar result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mProperty_mOptionInvocationLetter ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::setter_setMOptionInvocationStringAtIndex (GALGAS_lstring inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionInvocationString = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_commandLineOptionListAST::getter_mOptionInvocationStringAtIndex (const GALGAS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mProperty_mOptionInvocationString ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::setter_setMOptionCommentAtIndex (GALGAS_lstring inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionComment = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_commandLineOptionListAST::getter_mOptionCommentAtIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mProperty_mOptionComment ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::setter_setMOptionDefaultValueAtIndex (GALGAS_lstring inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionDefaultValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_commandLineOptionListAST::getter_mOptionDefaultValueAtIndex (const GALGAS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mProperty_mOptionDefaultValue ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_commandLineOptionListAST::setter_setMOptionDefaultValueKindAtIndex (GALGAS_optionDefaultValueEnumAST inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionDefaultValueKind = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionDefaultValueEnumAST GALGAS_commandLineOptionListAST::getter_mOptionDefaultValueKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_commandLineOptionListAST * p = (cCollectionElement_commandLineOptionListAST *) attributes.ptr () ;
  GALGAS_optionDefaultValueEnumAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
    result = p->mObject.mProperty_mOptionDefaultValueKind ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_commandLineOptionListAST::cEnumerator_commandLineOptionListAST (const GALGAS_commandLineOptionListAST & inEnumeratedObject,
                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST_2D_element cEnumerator_commandLineOptionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_commandLineOptionListAST::current_mOptionTypeName (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mProperty_mOptionTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_commandLineOptionListAST::current_mOptionInternalName (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mProperty_mOptionInternalName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lchar cEnumerator_commandLineOptionListAST::current_mOptionInvocationLetter (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mProperty_mOptionInvocationLetter ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_commandLineOptionListAST::current_mOptionInvocationString (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mProperty_mOptionInvocationString ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_commandLineOptionListAST::current_mOptionComment (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mProperty_mOptionComment ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_commandLineOptionListAST::current_mOptionDefaultValue (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mProperty_mOptionDefaultValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionDefaultValueEnumAST cEnumerator_commandLineOptionListAST::current_mOptionDefaultValueKind (LOCATION_ARGS) const {
  const cCollectionElement_commandLineOptionListAST * p = (const cCollectionElement_commandLineOptionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_commandLineOptionListAST) ;
  return p->mObject.mProperty_mOptionDefaultValueKind ;
}




//--------------------------------------------------------------------------------------------------
//
//     @commandLineOptionListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_commandLineOptionListAST ("commandLineOptionListAST",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_commandLineOptionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_commandLineOptionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_commandLineOptionListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST GALGAS_commandLineOptionListAST::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_commandLineOptionListAST result ;
  const GALGAS_commandLineOptionListAST * p = (const GALGAS_commandLineOptionListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_commandLineOptionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("commandLineOptionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

