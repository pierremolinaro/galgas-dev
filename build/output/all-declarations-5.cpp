#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_listDeclarationAST_2E_weak::objectCompare (const GGS_listDeclarationAST_2E_weak & inOperand) const {
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

GGS_listDeclarationAST_2E_weak::GGS_listDeclarationAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_listDeclarationAST_2E_weak & GGS_listDeclarationAST_2E_weak::operator = (const GGS_listDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_listDeclarationAST_2E_weak::GGS_listDeclarationAST_2E_weak (const GGS_listDeclarationAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_listDeclarationAST_2E_weak GGS_listDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_listDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listDeclarationAST GGS_listDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_listDeclarationAST result ;
  if (isValid ()) {
    const cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_listDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listDeclarationAST GGS_listDeclarationAST_2E_weak::bang_listDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_listDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_listDeclarationAST) ;
      result = GGS_listDeclarationAST ((cPtr_listDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @listDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listDeclarationAST_2E_weak ("listDeclarationAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_listDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_listDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_listDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listDeclarationAST_2E_weak GGS_listDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_listDeclarationAST_2E_weak result ;
  const GGS_listDeclarationAST_2E_weak * p = (const GGS_listDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_listDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dictDeclarationAST_2E_weak::objectCompare (const GGS_dictDeclarationAST_2E_weak & inOperand) const {
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

GGS_dictDeclarationAST_2E_weak::GGS_dictDeclarationAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_dictDeclarationAST_2E_weak & GGS_dictDeclarationAST_2E_weak::operator = (const GGS_dictDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictDeclarationAST_2E_weak::GGS_dictDeclarationAST_2E_weak (const GGS_dictDeclarationAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_dictDeclarationAST_2E_weak GGS_dictDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_dictDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictDeclarationAST GGS_dictDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_dictDeclarationAST result ;
  if (isValid ()) {
    const cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_dictDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictDeclarationAST GGS_dictDeclarationAST_2E_weak::bang_dictDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_dictDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dictDeclarationAST) ;
      result = GGS_dictDeclarationAST ((cPtr_dictDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @dictDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dictDeclarationAST_2E_weak ("dictDeclarationAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_dictDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dictDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dictDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictDeclarationAST_2E_weak GGS_dictDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_dictDeclarationAST_2E_weak result ;
  const GGS_dictDeclarationAST_2E_weak * p = (const GGS_dictDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dictDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dictDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@insertSetterListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_insertSetterListAST : public cCollectionElement {
  public: GGS_insertSetterListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_insertSetterListAST (const GGS_lstring & in_mInsertMethodName,
                                                  const GGS_lstring & in_mErrorMessage,
                                                  const GGS_lstring & in_mShadowErrorMessage
                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_insertSetterListAST (const GGS_insertSetterListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_insertSetterListAST::cCollectionElement_insertSetterListAST (const GGS_lstring & in_mInsertMethodName,
                                                                                const GGS_lstring & in_mErrorMessage,
                                                                                const GGS_lstring & in_mShadowErrorMessage
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInsertMethodName, in_mErrorMessage, in_mShadowErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_insertSetterListAST::cCollectionElement_insertSetterListAST (const GGS_insertSetterListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInsertMethodName, inElement.mProperty_mErrorMessage, inElement.mProperty_mShadowErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_insertSetterListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_insertSetterListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_insertSetterListAST (mObject.mProperty_mInsertMethodName, mObject.mProperty_mErrorMessage, mObject.mProperty_mShadowErrorMessage COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_insertSetterListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInsertMethodName" ":") ;
  mObject.mProperty_mInsertMethodName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mErrorMessage" ":") ;
  mObject.mProperty_mErrorMessage.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mShadowErrorMessage" ":") ;
  mObject.mProperty_mShadowErrorMessage.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST::GGS_insertSetterListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST::GGS_insertSetterListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST GGS_insertSetterListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_insertSetterListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST GGS_insertSetterListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_insertSetterListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertSetterListAST::plusPlusAssignOperation (const GGS_insertSetterListAST_2E_element & inValue
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_insertSetterListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST GGS_insertSetterListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                           const GGS_lstring & inOperand1,
                                                                           const GGS_lstring & inOperand2
                                                                           COMMA_LOCATION_ARGS) {
  GGS_insertSetterListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_insertSetterListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_insertSetterListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertSetterListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GGS_lstring & in_mInsertMethodName,
                                                         const GGS_lstring & in_mErrorMessage,
                                                         const GGS_lstring & in_mShadowErrorMessage
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_insertSetterListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_insertSetterListAST (in_mInsertMethodName,
                                                         in_mErrorMessage,
                                                         in_mShadowErrorMessage COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertSetterListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                  const GGS_lstring & inOperand1,
                                                  const GGS_lstring & inOperand2
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_insertSetterListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_insertSetterListAST::setter_append (const GGS_lstring inOperand0,
                                             const GGS_lstring inOperand1,
                                             const GGS_lstring inOperand2,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_insertSetterListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_insertSetterListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                    const GGS_lstring inOperand1,
                                                    const GGS_lstring inOperand2,
                                                    const GGS_uint inInsertionIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_insertSetterListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_insertSetterListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
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
    cCollectionElement_insertSetterListAST * p = (cCollectionElement_insertSetterListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_insertSetterListAST) ;
      outOperand0 = p->mObject.mProperty_mInsertMethodName ;
      outOperand1 = p->mObject.mProperty_mErrorMessage ;
      outOperand2 = p->mObject.mProperty_mShadowErrorMessage ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_insertSetterListAST::setter_popFirst (GGS_lstring & outOperand0,
                                               GGS_lstring & outOperand1,
                                               GGS_lstring & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertSetterListAST * p = (cCollectionElement_insertSetterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertSetterListAST) ;
    outOperand0 = p->mObject.mProperty_mInsertMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
    outOperand2 = p->mObject.mProperty_mShadowErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_insertSetterListAST::setter_popLast (GGS_lstring & outOperand0,
                                              GGS_lstring & outOperand1,
                                              GGS_lstring & outOperand2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertSetterListAST * p = (cCollectionElement_insertSetterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertSetterListAST) ;
    outOperand0 = p->mObject.mProperty_mInsertMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
    outOperand2 = p->mObject.mProperty_mShadowErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_insertSetterListAST::method_first (GGS_lstring & outOperand0,
                                            GGS_lstring & outOperand1,
                                            GGS_lstring & outOperand2,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertSetterListAST * p = (cCollectionElement_insertSetterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertSetterListAST) ;
    outOperand0 = p->mObject.mProperty_mInsertMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
    outOperand2 = p->mObject.mProperty_mShadowErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_insertSetterListAST::method_last (GGS_lstring & outOperand0,
                                           GGS_lstring & outOperand1,
                                           GGS_lstring & outOperand2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertSetterListAST * p = (cCollectionElement_insertSetterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertSetterListAST) ;
    outOperand0 = p->mObject.mProperty_mInsertMethodName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
    outOperand2 = p->mObject.mProperty_mShadowErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST GGS_insertSetterListAST::add_operation (const GGS_insertSetterListAST & inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_insertSetterListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST GGS_insertSetterListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_insertSetterListAST result = GGS_insertSetterListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST GGS_insertSetterListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_insertSetterListAST result = GGS_insertSetterListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST GGS_insertSetterListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_insertSetterListAST result = GGS_insertSetterListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertSetterListAST::plusAssignOperation (const GGS_insertSetterListAST inOperand,
                                                   Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertSetterListAST::setter_setMInsertMethodNameAtIndex (GGS_lstring inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_insertSetterListAST * p = (cCollectionElement_insertSetterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_insertSetterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInsertMethodName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_insertSetterListAST::getter_mInsertMethodNameAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_insertSetterListAST * p = (cCollectionElement_insertSetterListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_insertSetterListAST) ;
    result = p->mObject.mProperty_mInsertMethodName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertSetterListAST::setter_setMErrorMessageAtIndex (GGS_lstring inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_insertSetterListAST * p = (cCollectionElement_insertSetterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_insertSetterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mErrorMessage = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_insertSetterListAST::getter_mErrorMessageAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_insertSetterListAST * p = (cCollectionElement_insertSetterListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_insertSetterListAST) ;
    result = p->mObject.mProperty_mErrorMessage ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertSetterListAST::setter_setMShadowErrorMessageAtIndex (GGS_lstring inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_insertSetterListAST * p = (cCollectionElement_insertSetterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_insertSetterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mShadowErrorMessage = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_insertSetterListAST::getter_mShadowErrorMessageAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_insertSetterListAST * p = (cCollectionElement_insertSetterListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_insertSetterListAST) ;
    result = p->mObject.mProperty_mShadowErrorMessage ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @insertSetterListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_insertSetterListAST::DownEnumerator_insertSetterListAST (const GGS_insertSetterListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST_2E_element DownEnumerator_insertSetterListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_insertSetterListAST * p = (const cCollectionElement_insertSetterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertSetterListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_insertSetterListAST::current_mInsertMethodName (LOCATION_ARGS) const {
  const cCollectionElement_insertSetterListAST * p = (const cCollectionElement_insertSetterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertSetterListAST) ;
  return p->mObject.mProperty_mInsertMethodName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_insertSetterListAST::current_mErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_insertSetterListAST * p = (const cCollectionElement_insertSetterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertSetterListAST) ;
  return p->mObject.mProperty_mErrorMessage ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_insertSetterListAST::current_mShadowErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_insertSetterListAST * p = (const cCollectionElement_insertSetterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertSetterListAST) ;
  return p->mObject.mProperty_mShadowErrorMessage ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @insertSetterListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_insertSetterListAST::UpEnumerator_insertSetterListAST (const GGS_insertSetterListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST_2E_element UpEnumerator_insertSetterListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_insertSetterListAST * p = (const cCollectionElement_insertSetterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertSetterListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_insertSetterListAST::current_mInsertMethodName (LOCATION_ARGS) const {
  const cCollectionElement_insertSetterListAST * p = (const cCollectionElement_insertSetterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertSetterListAST) ;
  return p->mObject.mProperty_mInsertMethodName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_insertSetterListAST::current_mErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_insertSetterListAST * p = (const cCollectionElement_insertSetterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertSetterListAST) ;
  return p->mObject.mProperty_mErrorMessage ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_insertSetterListAST::current_mShadowErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_insertSetterListAST * p = (const cCollectionElement_insertSetterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertSetterListAST) ;
  return p->mObject.mProperty_mShadowErrorMessage ;
}




//--------------------------------------------------------------------------------------------------
//     @insertSetterListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertSetterListAST ("insertSetterListAST",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_insertSetterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertSetterListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_insertSetterListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_insertSetterListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST GGS_insertSetterListAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_insertSetterListAST result ;
  const GGS_insertSetterListAST * p = (const GGS_insertSetterListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_insertSetterListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertSetterListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@mapAccessorListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_mapAccessorListAST : public cCollectionElement {
  public: GGS_mapAccessorListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_mapAccessorListAST (const GGS_lstring & in_mName,
                                                 const GGS_lstring & in_mErrorMessage
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_mapAccessorListAST (const GGS_mapAccessorListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_mapAccessorListAST::cCollectionElement_mapAccessorListAST (const GGS_lstring & in_mName,
                                                                              const GGS_lstring & in_mErrorMessage
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_mapAccessorListAST::cCollectionElement_mapAccessorListAST (const GGS_mapAccessorListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mName, inElement.mProperty_mErrorMessage) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_mapAccessorListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_mapAccessorListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_mapAccessorListAST (mObject.mProperty_mName, mObject.mProperty_mErrorMessage COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_mapAccessorListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mName" ":") ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mErrorMessage" ":") ;
  mObject.mProperty_mErrorMessage.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST::GGS_mapAccessorListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST::GGS_mapAccessorListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapAccessorListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_mapAccessorListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapAccessorListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_mapAccessorListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mapAccessorListAST::plusPlusAssignOperation (const GGS_mapAccessorListAST_2E_element & inValue
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_mapAccessorListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapAccessorListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                         const GGS_lstring & inOperand1
                                                                         COMMA_LOCATION_ARGS) {
  GGS_mapAccessorListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_mapAccessorListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_mapAccessorListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mapAccessorListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GGS_lstring & in_mName,
                                                        const GGS_lstring & in_mErrorMessage
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_mapAccessorListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_mapAccessorListAST (in_mName,
                                                        in_mErrorMessage COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mapAccessorListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                 const GGS_lstring & inOperand1
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_mapAccessorListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mapAccessorListAST::setter_append (const GGS_lstring inOperand0,
                                            const GGS_lstring inOperand1,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_mapAccessorListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mapAccessorListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                   const GGS_lstring inOperand1,
                                                   const GGS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_mapAccessorListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mapAccessorListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   const GGS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_mapAccessorListAST * p = (cCollectionElement_mapAccessorListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_mapAccessorListAST) ;
      outOperand0 = p->mObject.mProperty_mName ;
      outOperand1 = p->mObject.mProperty_mErrorMessage ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mapAccessorListAST::setter_popFirst (GGS_lstring & outOperand0,
                                              GGS_lstring & outOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapAccessorListAST * p = (cCollectionElement_mapAccessorListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapAccessorListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mapAccessorListAST::setter_popLast (GGS_lstring & outOperand0,
                                             GGS_lstring & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapAccessorListAST * p = (cCollectionElement_mapAccessorListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapAccessorListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mapAccessorListAST::method_first (GGS_lstring & outOperand0,
                                           GGS_lstring & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapAccessorListAST * p = (cCollectionElement_mapAccessorListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapAccessorListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mapAccessorListAST::method_last (GGS_lstring & outOperand0,
                                          GGS_lstring & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mapAccessorListAST * p = (cCollectionElement_mapAccessorListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mapAccessorListAST) ;
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapAccessorListAST::add_operation (const GGS_mapAccessorListAST & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_mapAccessorListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapAccessorListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_mapAccessorListAST result = GGS_mapAccessorListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapAccessorListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_mapAccessorListAST result = GGS_mapAccessorListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapAccessorListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_mapAccessorListAST result = GGS_mapAccessorListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mapAccessorListAST::plusAssignOperation (const GGS_mapAccessorListAST inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mapAccessorListAST::setter_setMNameAtIndex (GGS_lstring inOperand,
                                                     GGS_uint inIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_mapAccessorListAST * p = (cCollectionElement_mapAccessorListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_mapAccessorListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_mapAccessorListAST::getter_mNameAtIndex (const GGS_uint & inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapAccessorListAST * p = (cCollectionElement_mapAccessorListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_mapAccessorListAST) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mapAccessorListAST::setter_setMErrorMessageAtIndex (GGS_lstring inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_mapAccessorListAST * p = (cCollectionElement_mapAccessorListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_mapAccessorListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mErrorMessage = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_mapAccessorListAST::getter_mErrorMessageAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mapAccessorListAST * p = (cCollectionElement_mapAccessorListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_mapAccessorListAST) ;
    result = p->mObject.mProperty_mErrorMessage ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @mapAccessorListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_mapAccessorListAST::DownEnumerator_mapAccessorListAST (const GGS_mapAccessorListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST_2E_element DownEnumerator_mapAccessorListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_mapAccessorListAST * p = (const cCollectionElement_mapAccessorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapAccessorListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_mapAccessorListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_mapAccessorListAST * p = (const cCollectionElement_mapAccessorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapAccessorListAST) ;
  return p->mObject.mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_mapAccessorListAST::current_mErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_mapAccessorListAST * p = (const cCollectionElement_mapAccessorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapAccessorListAST) ;
  return p->mObject.mProperty_mErrorMessage ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @mapAccessorListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_mapAccessorListAST::UpEnumerator_mapAccessorListAST (const GGS_mapAccessorListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST_2E_element UpEnumerator_mapAccessorListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_mapAccessorListAST * p = (const cCollectionElement_mapAccessorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapAccessorListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_mapAccessorListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_mapAccessorListAST * p = (const cCollectionElement_mapAccessorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapAccessorListAST) ;
  return p->mObject.mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_mapAccessorListAST::current_mErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_mapAccessorListAST * p = (const cCollectionElement_mapAccessorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mapAccessorListAST) ;
  return p->mObject.mProperty_mErrorMessage ;
}




//--------------------------------------------------------------------------------------------------
//     @mapAccessorListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapAccessorListAST ("mapAccessorListAST",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_mapAccessorListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapAccessorListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_mapAccessorListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mapAccessorListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapAccessorListAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_mapAccessorListAST result ;
  const GGS_mapAccessorListAST * p = (const GGS_mapAccessorListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mapAccessorListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapAccessorListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@insertOrReplaceDeclarationListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_insertOrReplaceDeclarationListAST : public cCollectionElement {
  public: GGS_insertOrReplaceDeclarationListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_insertOrReplaceDeclarationListAST (const GGS_location & in_mInsertOrReplaceDeclarationLocation
                                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_insertOrReplaceDeclarationListAST (const GGS_insertOrReplaceDeclarationListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_insertOrReplaceDeclarationListAST::cCollectionElement_insertOrReplaceDeclarationListAST (const GGS_location & in_mInsertOrReplaceDeclarationLocation
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInsertOrReplaceDeclarationLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_insertOrReplaceDeclarationListAST::cCollectionElement_insertOrReplaceDeclarationListAST (const GGS_insertOrReplaceDeclarationListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInsertOrReplaceDeclarationLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_insertOrReplaceDeclarationListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_insertOrReplaceDeclarationListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_insertOrReplaceDeclarationListAST (mObject.mProperty_mInsertOrReplaceDeclarationLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_insertOrReplaceDeclarationListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInsertOrReplaceDeclarationLocation" ":") ;
  mObject.mProperty_mInsertOrReplaceDeclarationLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST::GGS_insertOrReplaceDeclarationListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST::GGS_insertOrReplaceDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST GGS_insertOrReplaceDeclarationListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_insertOrReplaceDeclarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST GGS_insertOrReplaceDeclarationListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_insertOrReplaceDeclarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertOrReplaceDeclarationListAST::plusPlusAssignOperation (const GGS_insertOrReplaceDeclarationListAST_2E_element & inValue
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_insertOrReplaceDeclarationListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST GGS_insertOrReplaceDeclarationListAST::class_func_listWithValue (const GGS_location & inOperand0
                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_insertOrReplaceDeclarationListAST result ;
  if (inOperand0.isValid ()) {
    result = GGS_insertOrReplaceDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_insertOrReplaceDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertOrReplaceDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GGS_location & in_mInsertOrReplaceDeclarationLocation
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_insertOrReplaceDeclarationListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_insertOrReplaceDeclarationListAST (in_mInsertOrReplaceDeclarationLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertOrReplaceDeclarationListAST::addAssignOperation (const GGS_location & inOperand0
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_insertOrReplaceDeclarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_insertOrReplaceDeclarationListAST::setter_append (const GGS_location inOperand0,
                                                           Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_insertOrReplaceDeclarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_insertOrReplaceDeclarationListAST::setter_insertAtIndex (const GGS_location inOperand0,
                                                                  const GGS_uint inInsertionIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_insertOrReplaceDeclarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_insertOrReplaceDeclarationListAST::setter_removeAtIndex (GGS_location & outOperand0,
                                                                  const GGS_uint inRemoveIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_insertOrReplaceDeclarationListAST * p = (cCollectionElement_insertOrReplaceDeclarationListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
      outOperand0 = p->mObject.mProperty_mInsertOrReplaceDeclarationLocation ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_insertOrReplaceDeclarationListAST::setter_popFirst (GGS_location & outOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertOrReplaceDeclarationListAST * p = (cCollectionElement_insertOrReplaceDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mInsertOrReplaceDeclarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_insertOrReplaceDeclarationListAST::setter_popLast (GGS_location & outOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertOrReplaceDeclarationListAST * p = (cCollectionElement_insertOrReplaceDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mInsertOrReplaceDeclarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_insertOrReplaceDeclarationListAST::method_first (GGS_location & outOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertOrReplaceDeclarationListAST * p = (cCollectionElement_insertOrReplaceDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mInsertOrReplaceDeclarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_insertOrReplaceDeclarationListAST::method_last (GGS_location & outOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_insertOrReplaceDeclarationListAST * p = (cCollectionElement_insertOrReplaceDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mInsertOrReplaceDeclarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST GGS_insertOrReplaceDeclarationListAST::add_operation (const GGS_insertOrReplaceDeclarationListAST & inOperand,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_insertOrReplaceDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST GGS_insertOrReplaceDeclarationListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_insertOrReplaceDeclarationListAST result = GGS_insertOrReplaceDeclarationListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST GGS_insertOrReplaceDeclarationListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_insertOrReplaceDeclarationListAST result = GGS_insertOrReplaceDeclarationListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST GGS_insertOrReplaceDeclarationListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_insertOrReplaceDeclarationListAST result = GGS_insertOrReplaceDeclarationListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertOrReplaceDeclarationListAST::plusAssignOperation (const GGS_insertOrReplaceDeclarationListAST inOperand,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertOrReplaceDeclarationListAST::setter_setMInsertOrReplaceDeclarationLocationAtIndex (GGS_location inOperand,
                                                                                                  GGS_uint inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_insertOrReplaceDeclarationListAST * p = (cCollectionElement_insertOrReplaceDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInsertOrReplaceDeclarationLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_insertOrReplaceDeclarationListAST::getter_mInsertOrReplaceDeclarationLocationAtIndex (const GGS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_insertOrReplaceDeclarationListAST * p = (cCollectionElement_insertOrReplaceDeclarationListAST *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
    result = p->mObject.mProperty_mInsertOrReplaceDeclarationLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @insertOrReplaceDeclarationListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_insertOrReplaceDeclarationListAST::DownEnumerator_insertOrReplaceDeclarationListAST (const GGS_insertOrReplaceDeclarationListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST_2E_element DownEnumerator_insertOrReplaceDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_insertOrReplaceDeclarationListAST * p = (const cCollectionElement_insertOrReplaceDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_insertOrReplaceDeclarationListAST::current_mInsertOrReplaceDeclarationLocation (LOCATION_ARGS) const {
  const cCollectionElement_insertOrReplaceDeclarationListAST * p = (const cCollectionElement_insertOrReplaceDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
  return p->mObject.mProperty_mInsertOrReplaceDeclarationLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @insertOrReplaceDeclarationListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_insertOrReplaceDeclarationListAST::UpEnumerator_insertOrReplaceDeclarationListAST (const GGS_insertOrReplaceDeclarationListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST_2E_element UpEnumerator_insertOrReplaceDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_insertOrReplaceDeclarationListAST * p = (const cCollectionElement_insertOrReplaceDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_insertOrReplaceDeclarationListAST::current_mInsertOrReplaceDeclarationLocation (LOCATION_ARGS) const {
  const cCollectionElement_insertOrReplaceDeclarationListAST * p = (const cCollectionElement_insertOrReplaceDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_insertOrReplaceDeclarationListAST) ;
  return p->mObject.mProperty_mInsertOrReplaceDeclarationLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @insertOrReplaceDeclarationListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST ("insertOrReplaceDeclarationListAST",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_insertOrReplaceDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_insertOrReplaceDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_insertOrReplaceDeclarationListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST GGS_insertOrReplaceDeclarationListAST::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_insertOrReplaceDeclarationListAST result ;
  const GGS_insertOrReplaceDeclarationListAST * p = (const GGS_insertOrReplaceDeclarationListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_insertOrReplaceDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertOrReplaceDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @insertMethodMap
//--------------------------------------------------------------------------------------------------

#include "GGS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap::GGS_insertMethodMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap::~ GGS_insertMethodMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap::GGS_insertMethodMap (const GGS_insertMethodMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap & GGS_insertMethodMap::operator = (const GGS_insertMethodMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap GGS_insertMethodMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_insertMethodMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap GGS_insertMethodMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_insertMethodMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_insertMethodMap::getter_hasKey (const GGS_string & inKey
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_insertMethodMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                    const GGS_uint & inLevel
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_insertMethodMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_insertMethodMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_insertMethodMap::getter_locationForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_insertMethodMap::getter_keyList (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_insertMethodMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertMethodMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertMethodMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_insertMethodMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertMethodMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <GGS_GenericMapRoot <GGS_insertMethodMap_2E_element>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_insertMethodMap::performInsert (const GGS_insertMethodMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_insertMethodMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      existingNode = mSharedRoot->overriddenRoot ()->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element>
GGS_insertMethodMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <GGS_GenericMapNode <GGS_insertMethodMap_2E_element>> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <GGS_GenericMapNode <GGS_insertMethodMap_2E_element>>
GGS_insertMethodMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <GGS_GenericMapNode <GGS_insertMethodMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_insertMethodMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element>>
GGS_insertMethodMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_insertMethodMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertMethodMap::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap_2E_element_3F_ GGS_insertMethodMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_insertMethodMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_insertMethodMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_insertMethodMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap GGS_insertMethodMap::class_func_mapWithMapToOverride (const GGS_insertMethodMap & inMapToOverride
                                                                          COMMA_LOCATION_ARGS) {
  GGS_insertMethodMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_insertMethodMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap GGS_insertMethodMap::getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_insertMethodMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertMethodMap::setter_insertKey (GGS_lstring inLKey,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  const GGS_insertMethodMap_2E_element element (inLKey) ;
  const char * kInsertErrorMessage = "the '%K' insert setter is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

static void GGS_insertMethodMap_internalDescription (const TC_Array <SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key'") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_insertMethodMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const TC_Array <SharedGenericPtrWithValueSemantics <GGS_insertMethodMap_2E_element>> array = sortedInfoArray () ;
    GGS_insertMethodMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GGS_GenericMapRoot <GGS_insertMethodMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_insertMethodMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @insertMethodMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_insertMethodMap::DownEnumerator_insertMethodMap (const GGS_insertMethodMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap_2E_element DownEnumerator_insertMethodMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_insertMethodMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @insertMethodMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_insertMethodMap::UpEnumerator_insertMethodMap (const GGS_insertMethodMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap_2E_element UpEnumerator_insertMethodMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_insertMethodMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @insertMethodMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_insertMethodMap ("insertMethodMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_insertMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertMethodMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_insertMethodMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_insertMethodMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap GGS_insertMethodMap::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_insertMethodMap result ;
  const GGS_insertMethodMap * p = (const GGS_insertMethodMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_insertMethodMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertMethodMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @searchMethodMap
//--------------------------------------------------------------------------------------------------

#include "GGS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap::GGS_searchMethodMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap::~ GGS_searchMethodMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap::GGS_searchMethodMap (const GGS_searchMethodMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap & GGS_searchMethodMap::operator = (const GGS_searchMethodMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap GGS_searchMethodMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_searchMethodMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap GGS_searchMethodMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_searchMethodMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_searchMethodMap::getter_hasKey (const GGS_string & inKey
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_searchMethodMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                    const GGS_uint & inLevel
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_searchMethodMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_searchMethodMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_searchMethodMap::getter_locationForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_searchMethodMap::getter_keyList (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_searchMethodMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_searchMethodMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_searchMethodMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_searchMethodMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_searchMethodMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <GGS_GenericMapRoot <GGS_searchMethodMap_2E_element>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_searchMethodMap::performInsert (const GGS_searchMethodMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_searchMethodMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      existingNode = mSharedRoot->overriddenRoot ()->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element>
GGS_searchMethodMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <GGS_GenericMapNode <GGS_searchMethodMap_2E_element>> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <GGS_GenericMapNode <GGS_searchMethodMap_2E_element>>
GGS_searchMethodMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <GGS_GenericMapNode <GGS_searchMethodMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_searchMethodMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element>>
GGS_searchMethodMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_searchMethodMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_searchMethodMap::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap_2E_element_3F_ GGS_searchMethodMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_searchMethodMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_searchMethodMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_searchMethodMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap GGS_searchMethodMap::class_func_mapWithMapToOverride (const GGS_searchMethodMap & inMapToOverride
                                                                          COMMA_LOCATION_ARGS) {
  GGS_searchMethodMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_searchMethodMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap GGS_searchMethodMap::getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_searchMethodMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_searchMethodMap::setter_insertKey (GGS_lstring inLKey,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  const GGS_searchMethodMap_2E_element element (inLKey) ;
  const char * kInsertErrorMessage = "the '%K' search method is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

static void GGS_searchMethodMap_internalDescription (const TC_Array <SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key'") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_searchMethodMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const TC_Array <SharedGenericPtrWithValueSemantics <GGS_searchMethodMap_2E_element>> array = sortedInfoArray () ;
    GGS_searchMethodMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GGS_GenericMapRoot <GGS_searchMethodMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_searchMethodMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @searchMethodMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_searchMethodMap::DownEnumerator_searchMethodMap (const GGS_searchMethodMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap_2E_element DownEnumerator_searchMethodMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_searchMethodMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @searchMethodMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_searchMethodMap::UpEnumerator_searchMethodMap (const GGS_searchMethodMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap_2E_element UpEnumerator_searchMethodMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_searchMethodMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @searchMethodMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_searchMethodMap ("searchMethodMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_searchMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_searchMethodMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_searchMethodMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_searchMethodMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap GGS_searchMethodMap::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_searchMethodMap result ;
  const GGS_searchMethodMap * p = (const GGS_searchMethodMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_searchMethodMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("searchMethodMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_mapDeclarationAST_2E_weak::objectCompare (const GGS_mapDeclarationAST_2E_weak & inOperand) const {
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

GGS_mapDeclarationAST_2E_weak::GGS_mapDeclarationAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_mapDeclarationAST_2E_weak & GGS_mapDeclarationAST_2E_weak::operator = (const GGS_mapDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapDeclarationAST_2E_weak::GGS_mapDeclarationAST_2E_weak (const GGS_mapDeclarationAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_mapDeclarationAST_2E_weak GGS_mapDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_mapDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapDeclarationAST GGS_mapDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_mapDeclarationAST result ;
  if (isValid ()) {
    const cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_mapDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapDeclarationAST GGS_mapDeclarationAST_2E_weak::bang_mapDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_mapDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_mapDeclarationAST) ;
      result = GGS_mapDeclarationAST ((cPtr_mapDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @mapDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mapDeclarationAST_2E_weak ("mapDeclarationAST.weak",
                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_mapDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_mapDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mapDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapDeclarationAST_2E_weak GGS_mapDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_mapDeclarationAST_2E_weak result ;
  const GGS_mapDeclarationAST_2E_weak * p = (const GGS_mapDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mapDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionalTypeDeclarationAST_2E_weak::objectCompare (const GGS_optionalTypeDeclarationAST_2E_weak & inOperand) const {
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

GGS_optionalTypeDeclarationAST_2E_weak::GGS_optionalTypeDeclarationAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalTypeDeclarationAST_2E_weak & GGS_optionalTypeDeclarationAST_2E_weak::operator = (const GGS_optionalTypeDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalTypeDeclarationAST_2E_weak::GGS_optionalTypeDeclarationAST_2E_weak (const GGS_optionalTypeDeclarationAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_optionalTypeDeclarationAST_2E_weak GGS_optionalTypeDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_optionalTypeDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalTypeDeclarationAST GGS_optionalTypeDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_optionalTypeDeclarationAST result ;
  if (isValid ()) {
    const cPtr_optionalTypeDeclarationAST * p = (cPtr_optionalTypeDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_optionalTypeDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalTypeDeclarationAST GGS_optionalTypeDeclarationAST_2E_weak::bang_optionalTypeDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_optionalTypeDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_optionalTypeDeclarationAST) ;
      result = GGS_optionalTypeDeclarationAST ((cPtr_optionalTypeDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @optionalTypeDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalTypeDeclarationAST_2E_weak ("optionalTypeDeclarationAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_optionalTypeDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalTypeDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionalTypeDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionalTypeDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalTypeDeclarationAST_2E_weak GGS_optionalTypeDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_optionalTypeDeclarationAST_2E_weak result ;
  const GGS_optionalTypeDeclarationAST_2E_weak * p = (const GGS_optionalTypeDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionalTypeDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionalTypeDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@sortedListSortDescriptorListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_sortedListSortDescriptorListAST : public cCollectionElement {
  public: GGS_sortedListSortDescriptorListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_sortedListSortDescriptorListAST (const GGS_lstring & in_mSortedAttributeName,
                                                              const GGS_bool & in_mAscending
                                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_sortedListSortDescriptorListAST (const GGS_sortedListSortDescriptorListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_sortedListSortDescriptorListAST::cCollectionElement_sortedListSortDescriptorListAST (const GGS_lstring & in_mSortedAttributeName,
                                                                                                        const GGS_bool & in_mAscending
                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSortedAttributeName, in_mAscending) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_sortedListSortDescriptorListAST::cCollectionElement_sortedListSortDescriptorListAST (const GGS_sortedListSortDescriptorListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSortedAttributeName, inElement.mProperty_mAscending) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_sortedListSortDescriptorListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_sortedListSortDescriptorListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_sortedListSortDescriptorListAST (mObject.mProperty_mSortedAttributeName, mObject.mProperty_mAscending COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_sortedListSortDescriptorListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSortedAttributeName" ":") ;
  mObject.mProperty_mSortedAttributeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAscending" ":") ;
  mObject.mProperty_mAscending.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListSortDescriptorListAST::GGS_sortedListSortDescriptorListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListSortDescriptorListAST::GGS_sortedListSortDescriptorListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListSortDescriptorListAST GGS_sortedListSortDescriptorListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_sortedListSortDescriptorListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListSortDescriptorListAST GGS_sortedListSortDescriptorListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_sortedListSortDescriptorListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedListSortDescriptorListAST::plusPlusAssignOperation (const GGS_sortedListSortDescriptorListAST_2E_element & inValue
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_sortedListSortDescriptorListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListSortDescriptorListAST GGS_sortedListSortDescriptorListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                   const GGS_bool & inOperand1
                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_sortedListSortDescriptorListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_sortedListSortDescriptorListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_sortedListSortDescriptorListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedListSortDescriptorListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GGS_lstring & in_mSortedAttributeName,
                                                                     const GGS_bool & in_mAscending
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_sortedListSortDescriptorListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_sortedListSortDescriptorListAST (in_mSortedAttributeName,
                                                                     in_mAscending COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedListSortDescriptorListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                              const GGS_bool & inOperand1
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_sortedListSortDescriptorListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedListSortDescriptorListAST::setter_append (const GGS_lstring inOperand0,
                                                         const GGS_bool inOperand1,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_sortedListSortDescriptorListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedListSortDescriptorListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                const GGS_bool inOperand1,
                                                                const GGS_uint inInsertionIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_sortedListSortDescriptorListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedListSortDescriptorListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                GGS_bool & outOperand1,
                                                                const GGS_uint inRemoveIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
      outOperand0 = p->mObject.mProperty_mSortedAttributeName ;
      outOperand1 = p->mObject.mProperty_mAscending ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedListSortDescriptorListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                           GGS_bool & outOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
    outOperand0 = p->mObject.mProperty_mSortedAttributeName ;
    outOperand1 = p->mObject.mProperty_mAscending ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedListSortDescriptorListAST::setter_popLast (GGS_lstring & outOperand0,
                                                          GGS_bool & outOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
    outOperand0 = p->mObject.mProperty_mSortedAttributeName ;
    outOperand1 = p->mObject.mProperty_mAscending ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedListSortDescriptorListAST::method_first (GGS_lstring & outOperand0,
                                                        GGS_bool & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
    outOperand0 = p->mObject.mProperty_mSortedAttributeName ;
    outOperand1 = p->mObject.mProperty_mAscending ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedListSortDescriptorListAST::method_last (GGS_lstring & outOperand0,
                                                       GGS_bool & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
    outOperand0 = p->mObject.mProperty_mSortedAttributeName ;
    outOperand1 = p->mObject.mProperty_mAscending ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListSortDescriptorListAST GGS_sortedListSortDescriptorListAST::add_operation (const GGS_sortedListSortDescriptorListAST & inOperand,
                                                                                        Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_sortedListSortDescriptorListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListSortDescriptorListAST GGS_sortedListSortDescriptorListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_sortedListSortDescriptorListAST result = GGS_sortedListSortDescriptorListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListSortDescriptorListAST GGS_sortedListSortDescriptorListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_sortedListSortDescriptorListAST result = GGS_sortedListSortDescriptorListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListSortDescriptorListAST GGS_sortedListSortDescriptorListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_sortedListSortDescriptorListAST result = GGS_sortedListSortDescriptorListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedListSortDescriptorListAST::plusAssignOperation (const GGS_sortedListSortDescriptorListAST inOperand,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedListSortDescriptorListAST::setter_setMSortedAttributeNameAtIndex (GGS_lstring inOperand,
                                                                                 GGS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSortedAttributeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_sortedListSortDescriptorListAST::getter_mSortedAttributeNameAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
    result = p->mObject.mProperty_mSortedAttributeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedListSortDescriptorListAST::setter_setMAscendingAtIndex (GGS_bool inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAscending = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_sortedListSortDescriptorListAST::getter_mAscendingAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sortedListSortDescriptorListAST * p = (cCollectionElement_sortedListSortDescriptorListAST *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
    result = p->mObject.mProperty_mAscending ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @sortedListSortDescriptorListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_sortedListSortDescriptorListAST::DownEnumerator_sortedListSortDescriptorListAST (const GGS_sortedListSortDescriptorListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListSortDescriptorListAST_2E_element DownEnumerator_sortedListSortDescriptorListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_sortedListSortDescriptorListAST * p = (const cCollectionElement_sortedListSortDescriptorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_sortedListSortDescriptorListAST::current_mSortedAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_sortedListSortDescriptorListAST * p = (const cCollectionElement_sortedListSortDescriptorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
  return p->mObject.mProperty_mSortedAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_sortedListSortDescriptorListAST::current_mAscending (LOCATION_ARGS) const {
  const cCollectionElement_sortedListSortDescriptorListAST * p = (const cCollectionElement_sortedListSortDescriptorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
  return p->mObject.mProperty_mAscending ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @sortedListSortDescriptorListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_sortedListSortDescriptorListAST::UpEnumerator_sortedListSortDescriptorListAST (const GGS_sortedListSortDescriptorListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListSortDescriptorListAST_2E_element UpEnumerator_sortedListSortDescriptorListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_sortedListSortDescriptorListAST * p = (const cCollectionElement_sortedListSortDescriptorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_sortedListSortDescriptorListAST::current_mSortedAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_sortedListSortDescriptorListAST * p = (const cCollectionElement_sortedListSortDescriptorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
  return p->mObject.mProperty_mSortedAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_sortedListSortDescriptorListAST::current_mAscending (LOCATION_ARGS) const {
  const cCollectionElement_sortedListSortDescriptorListAST * p = (const cCollectionElement_sortedListSortDescriptorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortedListSortDescriptorListAST) ;
  return p->mObject.mProperty_mAscending ;
}




//--------------------------------------------------------------------------------------------------
//     @sortedListSortDescriptorListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedListSortDescriptorListAST ("sortedListSortDescriptorListAST",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_sortedListSortDescriptorListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListSortDescriptorListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sortedListSortDescriptorListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sortedListSortDescriptorListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListSortDescriptorListAST GGS_sortedListSortDescriptorListAST::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_sortedListSortDescriptorListAST result ;
  const GGS_sortedListSortDescriptorListAST * p = (const GGS_sortedListSortDescriptorListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sortedListSortDescriptorListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedListSortDescriptorListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sortedListDeclarationAST_2E_weak::objectCompare (const GGS_sortedListDeclarationAST_2E_weak & inOperand) const {
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

GGS_sortedListDeclarationAST_2E_weak::GGS_sortedListDeclarationAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListDeclarationAST_2E_weak & GGS_sortedListDeclarationAST_2E_weak::operator = (const GGS_sortedListDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListDeclarationAST_2E_weak::GGS_sortedListDeclarationAST_2E_weak (const GGS_sortedListDeclarationAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_sortedListDeclarationAST_2E_weak GGS_sortedListDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_sortedListDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListDeclarationAST GGS_sortedListDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_sortedListDeclarationAST result ;
  if (isValid ()) {
    const cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_sortedListDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListDeclarationAST GGS_sortedListDeclarationAST_2E_weak::bang_sortedListDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_sortedListDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sortedListDeclarationAST) ;
      result = GGS_sortedListDeclarationAST ((cPtr_sortedListDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @sortedListDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortedListDeclarationAST_2E_weak ("sortedListDeclarationAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_sortedListDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sortedListDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sortedListDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListDeclarationAST_2E_weak GGS_sortedListDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_sortedListDeclarationAST_2E_weak result ;
  const GGS_sortedListDeclarationAST_2E_weak * p = (const GGS_sortedListDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sortedListDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedListDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@sortDescriptorListForGeneration' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_sortDescriptorListForGeneration : public cCollectionElement {
  public: GGS_sortDescriptorListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_sortDescriptorListForGeneration (const GGS_unifiedTypeMapEntry & in_mAttributeTypeIndex,
                                                              const GGS_string & in_mAttributeName,
                                                              const GGS_bool & in_mAscendingOrder
                                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_sortDescriptorListForGeneration (const GGS_sortDescriptorListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_sortDescriptorListForGeneration::cCollectionElement_sortDescriptorListForGeneration (const GGS_unifiedTypeMapEntry & in_mAttributeTypeIndex,
                                                                                                        const GGS_string & in_mAttributeName,
                                                                                                        const GGS_bool & in_mAscendingOrder
                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeTypeIndex, in_mAttributeName, in_mAscendingOrder) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_sortDescriptorListForGeneration::cCollectionElement_sortDescriptorListForGeneration (const GGS_sortDescriptorListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAttributeTypeIndex, inElement.mProperty_mAttributeName, inElement.mProperty_mAscendingOrder) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_sortDescriptorListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_sortDescriptorListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_sortDescriptorListForGeneration (mObject.mProperty_mAttributeTypeIndex, mObject.mProperty_mAttributeName, mObject.mProperty_mAscendingOrder COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_sortDescriptorListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAttributeTypeIndex" ":") ;
  mObject.mProperty_mAttributeTypeIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAttributeName" ":") ;
  mObject.mProperty_mAttributeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAscendingOrder" ":") ;
  mObject.mProperty_mAscendingOrder.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortDescriptorListForGeneration::GGS_sortDescriptorListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_sortDescriptorListForGeneration::GGS_sortDescriptorListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_sortDescriptorListForGeneration GGS_sortDescriptorListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_sortDescriptorListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortDescriptorListForGeneration GGS_sortDescriptorListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_sortDescriptorListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortDescriptorListForGeneration::plusPlusAssignOperation (const GGS_sortDescriptorListForGeneration_2E_element & inValue
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_sortDescriptorListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortDescriptorListForGeneration GGS_sortDescriptorListForGeneration::class_func_listWithValue (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                                                   const GGS_string & inOperand1,
                                                                                                   const GGS_bool & inOperand2
                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_sortDescriptorListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_sortDescriptorListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_sortDescriptorListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortDescriptorListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GGS_unifiedTypeMapEntry & in_mAttributeTypeIndex,
                                                                     const GGS_string & in_mAttributeName,
                                                                     const GGS_bool & in_mAscendingOrder
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_sortDescriptorListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_sortDescriptorListForGeneration (in_mAttributeTypeIndex,
                                                                     in_mAttributeName,
                                                                     in_mAscendingOrder COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortDescriptorListForGeneration::addAssignOperation (const GGS_unifiedTypeMapEntry & inOperand0,
                                                              const GGS_string & inOperand1,
                                                              const GGS_bool & inOperand2
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_sortDescriptorListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sortDescriptorListForGeneration::setter_append (const GGS_unifiedTypeMapEntry inOperand0,
                                                         const GGS_string inOperand1,
                                                         const GGS_bool inOperand2,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_sortDescriptorListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sortDescriptorListForGeneration::setter_insertAtIndex (const GGS_unifiedTypeMapEntry inOperand0,
                                                                const GGS_string inOperand1,
                                                                const GGS_bool inOperand2,
                                                                const GGS_uint inInsertionIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_sortDescriptorListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sortDescriptorListForGeneration::setter_removeAtIndex (GGS_unifiedTypeMapEntry & outOperand0,
                                                                GGS_string & outOperand1,
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
    cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mAttributeTypeIndex ;
      outOperand1 = p->mObject.mProperty_mAttributeName ;
      outOperand2 = p->mObject.mProperty_mAscendingOrder ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sortDescriptorListForGeneration::setter_popFirst (GGS_unifiedTypeMapEntry & outOperand0,
                                                           GGS_string & outOperand1,
                                                           GGS_bool & outOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mAttributeTypeIndex ;
    outOperand1 = p->mObject.mProperty_mAttributeName ;
    outOperand2 = p->mObject.mProperty_mAscendingOrder ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sortDescriptorListForGeneration::setter_popLast (GGS_unifiedTypeMapEntry & outOperand0,
                                                          GGS_string & outOperand1,
                                                          GGS_bool & outOperand2,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mAttributeTypeIndex ;
    outOperand1 = p->mObject.mProperty_mAttributeName ;
    outOperand2 = p->mObject.mProperty_mAscendingOrder ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sortDescriptorListForGeneration::method_first (GGS_unifiedTypeMapEntry & outOperand0,
                                                        GGS_string & outOperand1,
                                                        GGS_bool & outOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mAttributeTypeIndex ;
    outOperand1 = p->mObject.mProperty_mAttributeName ;
    outOperand2 = p->mObject.mProperty_mAscendingOrder ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_sortDescriptorListForGeneration::method_last (GGS_unifiedTypeMapEntry & outOperand0,
                                                       GGS_string & outOperand1,
                                                       GGS_bool & outOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mAttributeTypeIndex ;
    outOperand1 = p->mObject.mProperty_mAttributeName ;
    outOperand2 = p->mObject.mProperty_mAscendingOrder ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_sortDescriptorListForGeneration GGS_sortDescriptorListForGeneration::add_operation (const GGS_sortDescriptorListForGeneration & inOperand,
                                                                                        Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_sortDescriptorListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortDescriptorListForGeneration GGS_sortDescriptorListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_sortDescriptorListForGeneration result = GGS_sortDescriptorListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortDescriptorListForGeneration GGS_sortDescriptorListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_sortDescriptorListForGeneration result = GGS_sortDescriptorListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortDescriptorListForGeneration GGS_sortDescriptorListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_sortDescriptorListForGeneration result = GGS_sortDescriptorListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortDescriptorListForGeneration::plusAssignOperation (const GGS_sortDescriptorListForGeneration inOperand,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortDescriptorListForGeneration::setter_setMAttributeTypeIndexAtIndex (GGS_unifiedTypeMapEntry inOperand,
                                                                                GGS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeTypeIndex = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_sortDescriptorListForGeneration::getter_mAttributeTypeIndexAtIndex (const GGS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) attributes.ptr () ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
    result = p->mObject.mProperty_mAttributeTypeIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortDescriptorListForGeneration::setter_setMAttributeNameAtIndex (GGS_string inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_sortDescriptorListForGeneration::getter_mAttributeNameAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
    result = p->mObject.mProperty_mAttributeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortDescriptorListForGeneration::setter_setMAscendingOrderAtIndex (GGS_bool inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAscendingOrder = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_sortDescriptorListForGeneration::getter_mAscendingOrderAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sortDescriptorListForGeneration * p = (cCollectionElement_sortDescriptorListForGeneration *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
    result = p->mObject.mProperty_mAscendingOrder ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @sortDescriptorListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_sortDescriptorListForGeneration::DownEnumerator_sortDescriptorListForGeneration (const GGS_sortDescriptorListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortDescriptorListForGeneration_2E_element DownEnumerator_sortDescriptorListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_sortDescriptorListForGeneration * p = (const cCollectionElement_sortDescriptorListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_sortDescriptorListForGeneration::current_mAttributeTypeIndex (LOCATION_ARGS) const {
  const cCollectionElement_sortDescriptorListForGeneration * p = (const cCollectionElement_sortDescriptorListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
  return p->mObject.mProperty_mAttributeTypeIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_sortDescriptorListForGeneration::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_sortDescriptorListForGeneration * p = (const cCollectionElement_sortDescriptorListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
  return p->mObject.mProperty_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_sortDescriptorListForGeneration::current_mAscendingOrder (LOCATION_ARGS) const {
  const cCollectionElement_sortDescriptorListForGeneration * p = (const cCollectionElement_sortDescriptorListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
  return p->mObject.mProperty_mAscendingOrder ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @sortDescriptorListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_sortDescriptorListForGeneration::UpEnumerator_sortDescriptorListForGeneration (const GGS_sortDescriptorListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortDescriptorListForGeneration_2E_element UpEnumerator_sortDescriptorListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_sortDescriptorListForGeneration * p = (const cCollectionElement_sortDescriptorListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_sortDescriptorListForGeneration::current_mAttributeTypeIndex (LOCATION_ARGS) const {
  const cCollectionElement_sortDescriptorListForGeneration * p = (const cCollectionElement_sortDescriptorListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
  return p->mObject.mProperty_mAttributeTypeIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_sortDescriptorListForGeneration::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_sortDescriptorListForGeneration * p = (const cCollectionElement_sortDescriptorListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
  return p->mObject.mProperty_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_sortDescriptorListForGeneration::current_mAscendingOrder (LOCATION_ARGS) const {
  const cCollectionElement_sortDescriptorListForGeneration * p = (const cCollectionElement_sortDescriptorListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sortDescriptorListForGeneration) ;
  return p->mObject.mProperty_mAscendingOrder ;
}




//--------------------------------------------------------------------------------------------------
//     @sortDescriptorListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sortDescriptorListForGeneration ("sortDescriptorListForGeneration",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_sortDescriptorListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortDescriptorListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sortDescriptorListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sortDescriptorListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortDescriptorListForGeneration GGS_sortDescriptorListForGeneration::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_sortDescriptorListForGeneration result ;
  const GGS_sortDescriptorListForGeneration * p = (const GGS_sortDescriptorListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sortDescriptorListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortDescriptorListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structDeclarationAST_2E_weak::objectCompare (const GGS_structDeclarationAST_2E_weak & inOperand) const {
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

GGS_structDeclarationAST_2E_weak::GGS_structDeclarationAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_structDeclarationAST_2E_weak & GGS_structDeclarationAST_2E_weak::operator = (const GGS_structDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_structDeclarationAST_2E_weak::GGS_structDeclarationAST_2E_weak (const GGS_structDeclarationAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_structDeclarationAST_2E_weak GGS_structDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_structDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structDeclarationAST GGS_structDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_structDeclarationAST result ;
  if (isValid ()) {
    const cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_structDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structDeclarationAST GGS_structDeclarationAST_2E_weak::bang_structDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_structDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_structDeclarationAST) ;
      result = GGS_structDeclarationAST ((cPtr_structDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @structDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structDeclarationAST_2E_weak ("structDeclarationAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_structDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_structDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_structDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structDeclarationAST_2E_weak GGS_structDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_structDeclarationAST_2E_weak result ;
  const GGS_structDeclarationAST_2E_weak * p = (const GGS_structDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_structDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractExtensionGetterAST_2E_weak::objectCompare (const GGS_abstractExtensionGetterAST_2E_weak & inOperand) const {
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

GGS_abstractExtensionGetterAST_2E_weak::GGS_abstractExtensionGetterAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionGetterAST_2E_weak & GGS_abstractExtensionGetterAST_2E_weak::operator = (const GGS_abstractExtensionGetterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionGetterAST_2E_weak::GGS_abstractExtensionGetterAST_2E_weak (const GGS_abstractExtensionGetterAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionGetterAST_2E_weak GGS_abstractExtensionGetterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractExtensionGetterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionGetterAST GGS_abstractExtensionGetterAST_2E_weak::unwrappedValue (void) const {
  GGS_abstractExtensionGetterAST result ;
  if (isValid ()) {
    const cPtr_abstractExtensionGetterAST * p = (cPtr_abstractExtensionGetterAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractExtensionGetterAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionGetterAST GGS_abstractExtensionGetterAST_2E_weak::bang_abstractExtensionGetterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractExtensionGetterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractExtensionGetterAST) ;
      result = GGS_abstractExtensionGetterAST ((cPtr_abstractExtensionGetterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractExtensionGetterAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionGetterAST_2E_weak ("abstractExtensionGetterAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractExtensionGetterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractExtensionGetterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractExtensionGetterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionGetterAST_2E_weak GGS_abstractExtensionGetterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_abstractExtensionGetterAST_2E_weak result ;
  const GGS_abstractExtensionGetterAST_2E_weak * p = (const GGS_abstractExtensionGetterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractExtensionGetterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionGetterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@formalInputParameterListForGeneration' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_formalInputParameterListForGeneration : public cCollectionElement {
  public: GGS_formalInputParameterListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_formalInputParameterListForGeneration (const GGS_lstring & in_mFormalSelector,
                                                                    const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                    const GGS_string & in_mFormalArgumentCppName,
                                                                    const GGS_lstring & in_mFormalArgumentName,
                                                                    const GGS_bool & in_mIsConstant
                                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_formalInputParameterListForGeneration (const GGS_formalInputParameterListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_formalInputParameterListForGeneration::cCollectionElement_formalInputParameterListForGeneration (const GGS_lstring & in_mFormalSelector,
                                                                                                                    const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                                                    const GGS_string & in_mFormalArgumentCppName,
                                                                                                                    const GGS_lstring & in_mFormalArgumentName,
                                                                                                                    const GGS_bool & in_mIsConstant
                                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalArgumentType, in_mFormalArgumentCppName, in_mFormalArgumentName, in_mIsConstant) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_formalInputParameterListForGeneration::cCollectionElement_formalInputParameterListForGeneration (const GGS_formalInputParameterListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalSelector, inElement.mProperty_mFormalArgumentType, inElement.mProperty_mFormalArgumentCppName, inElement.mProperty_mFormalArgumentName, inElement.mProperty_mIsConstant) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_formalInputParameterListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_formalInputParameterListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_formalInputParameterListForGeneration (mObject.mProperty_mFormalSelector, mObject.mProperty_mFormalArgumentType, mObject.mProperty_mFormalArgumentCppName, mObject.mProperty_mFormalArgumentName, mObject.mProperty_mIsConstant COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_formalInputParameterListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalSelector" ":") ;
  mObject.mProperty_mFormalSelector.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentType" ":") ;
  mObject.mProperty_mFormalArgumentType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentCppName" ":") ;
  mObject.mProperty_mFormalArgumentCppName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentName" ":") ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsConstant" ":") ;
  mObject.mProperty_mIsConstant.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration::GGS_formalInputParameterListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration::GGS_formalInputParameterListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration GGS_formalInputParameterListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_formalInputParameterListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration GGS_formalInputParameterListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_formalInputParameterListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalInputParameterListForGeneration::plusPlusAssignOperation (const GGS_formalInputParameterListForGeneration_2E_element & inValue
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_formalInputParameterListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration GGS_formalInputParameterListForGeneration::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                               const GGS_unifiedTypeMapEntry & inOperand1,
                                                                                                               const GGS_string & inOperand2,
                                                                                                               const GGS_lstring & inOperand3,
                                                                                                               const GGS_bool & inOperand4
                                                                                                               COMMA_LOCATION_ARGS) {
  GGS_formalInputParameterListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GGS_formalInputParameterListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_formalInputParameterListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalInputParameterListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                           const GGS_lstring & in_mFormalSelector,
                                                                           const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                           const GGS_string & in_mFormalArgumentCppName,
                                                                           const GGS_lstring & in_mFormalArgumentName,
                                                                           const GGS_bool & in_mIsConstant
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_formalInputParameterListForGeneration (in_mFormalSelector,
                                                                           in_mFormalArgumentType,
                                                                           in_mFormalArgumentCppName,
                                                                           in_mFormalArgumentName,
                                                                           in_mIsConstant COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalInputParameterListForGeneration::addAssignOperation (const GGS_lstring & inOperand0,
                                                                    const GGS_unifiedTypeMapEntry & inOperand1,
                                                                    const GGS_string & inOperand2,
                                                                    const GGS_lstring & inOperand3,
                                                                    const GGS_bool & inOperand4
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_formalInputParameterListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalInputParameterListForGeneration::setter_append (const GGS_lstring inOperand0,
                                                               const GGS_unifiedTypeMapEntry inOperand1,
                                                               const GGS_string inOperand2,
                                                               const GGS_lstring inOperand3,
                                                               const GGS_bool inOperand4,
                                                               Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_formalInputParameterListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalInputParameterListForGeneration::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                      const GGS_unifiedTypeMapEntry inOperand1,
                                                                      const GGS_string inOperand2,
                                                                      const GGS_lstring inOperand3,
                                                                      const GGS_bool inOperand4,
                                                                      const GGS_uint inInsertionIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_formalInputParameterListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalInputParameterListForGeneration::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                      GGS_unifiedTypeMapEntry & outOperand1,
                                                                      GGS_string & outOperand2,
                                                                      GGS_lstring & outOperand3,
                                                                      GGS_bool & outOperand4,
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
    cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mFormalSelector ;
      outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
      outOperand2 = p->mObject.mProperty_mFormalArgumentCppName ;
      outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
      outOperand4 = p->mObject.mProperty_mIsConstant ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalInputParameterListForGeneration::setter_popFirst (GGS_lstring & outOperand0,
                                                                 GGS_unifiedTypeMapEntry & outOperand1,
                                                                 GGS_string & outOperand2,
                                                                 GGS_lstring & outOperand3,
                                                                 GGS_bool & outOperand4,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentCppName ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand4 = p->mObject.mProperty_mIsConstant ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalInputParameterListForGeneration::setter_popLast (GGS_lstring & outOperand0,
                                                                GGS_unifiedTypeMapEntry & outOperand1,
                                                                GGS_string & outOperand2,
                                                                GGS_lstring & outOperand3,
                                                                GGS_bool & outOperand4,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentCppName ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand4 = p->mObject.mProperty_mIsConstant ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalInputParameterListForGeneration::method_first (GGS_lstring & outOperand0,
                                                              GGS_unifiedTypeMapEntry & outOperand1,
                                                              GGS_string & outOperand2,
                                                              GGS_lstring & outOperand3,
                                                              GGS_bool & outOperand4,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentCppName ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand4 = p->mObject.mProperty_mIsConstant ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalInputParameterListForGeneration::method_last (GGS_lstring & outOperand0,
                                                             GGS_unifiedTypeMapEntry & outOperand1,
                                                             GGS_string & outOperand2,
                                                             GGS_lstring & outOperand3,
                                                             GGS_bool & outOperand4,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentCppName ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand4 = p->mObject.mProperty_mIsConstant ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration GGS_formalInputParameterListForGeneration::add_operation (const GGS_formalInputParameterListForGeneration & inOperand,
                                                                                                    Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_formalInputParameterListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration GGS_formalInputParameterListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_formalInputParameterListForGeneration result = GGS_formalInputParameterListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration GGS_formalInputParameterListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_formalInputParameterListForGeneration result = GGS_formalInputParameterListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration GGS_formalInputParameterListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_formalInputParameterListForGeneration result = GGS_formalInputParameterListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalInputParameterListForGeneration::plusAssignOperation (const GGS_formalInputParameterListForGeneration inOperand,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalInputParameterListForGeneration::setter_setMFormalSelectorAtIndex (GGS_lstring inOperand,
                                                                                  GGS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalSelector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_formalInputParameterListForGeneration::getter_mFormalSelectorAtIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    result = p->mObject.mProperty_mFormalSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalInputParameterListForGeneration::setter_setMFormalArgumentTypeAtIndex (GGS_unifiedTypeMapEntry inOperand,
                                                                                      GGS_uint inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_formalInputParameterListForGeneration::getter_mFormalArgumentTypeAtIndex (const GGS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    result = p->mObject.mProperty_mFormalArgumentType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalInputParameterListForGeneration::setter_setMFormalArgumentCppNameAtIndex (GGS_string inOperand,
                                                                                         GGS_uint inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentCppName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_formalInputParameterListForGeneration::getter_mFormalArgumentCppNameAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    result = p->mObject.mProperty_mFormalArgumentCppName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalInputParameterListForGeneration::setter_setMFormalArgumentNameAtIndex (GGS_lstring inOperand,
                                                                                      GGS_uint inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_formalInputParameterListForGeneration::getter_mFormalArgumentNameAtIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalInputParameterListForGeneration::setter_setMIsConstantAtIndex (GGS_bool inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsConstant = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_formalInputParameterListForGeneration::getter_mIsConstantAtIndex (const GGS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalInputParameterListForGeneration * p = (cCollectionElement_formalInputParameterListForGeneration *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
    result = p->mObject.mProperty_mIsConstant ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @formalInputParameterListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_formalInputParameterListForGeneration::DownEnumerator_formalInputParameterListForGeneration (const GGS_formalInputParameterListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration_2E_element DownEnumerator_formalInputParameterListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_formalInputParameterListForGeneration::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_formalInputParameterListForGeneration::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_formalInputParameterListForGeneration::current_mFormalArgumentCppName (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentCppName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_formalInputParameterListForGeneration::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_formalInputParameterListForGeneration::current_mIsConstant (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject.mProperty_mIsConstant ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @formalInputParameterListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_formalInputParameterListForGeneration::UpEnumerator_formalInputParameterListForGeneration (const GGS_formalInputParameterListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration_2E_element UpEnumerator_formalInputParameterListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_formalInputParameterListForGeneration::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_formalInputParameterListForGeneration::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_formalInputParameterListForGeneration::current_mFormalArgumentCppName (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentCppName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_formalInputParameterListForGeneration::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_formalInputParameterListForGeneration::current_mIsConstant (LOCATION_ARGS) const {
  const cCollectionElement_formalInputParameterListForGeneration * p = (const cCollectionElement_formalInputParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalInputParameterListForGeneration) ;
  return p->mObject.mProperty_mIsConstant ;
}




//--------------------------------------------------------------------------------------------------
//     @formalInputParameterListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalInputParameterListForGeneration ("formalInputParameterListForGeneration",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_formalInputParameterListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalInputParameterListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_formalInputParameterListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_formalInputParameterListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration GGS_formalInputParameterListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_formalInputParameterListForGeneration result ;
  const GGS_formalInputParameterListForGeneration * p = (const GGS_formalInputParameterListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_formalInputParameterListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalInputParameterListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractExtensionMethodAST_2E_weak::objectCompare (const GGS_abstractExtensionMethodAST_2E_weak & inOperand) const {
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

GGS_abstractExtensionMethodAST_2E_weak::GGS_abstractExtensionMethodAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionMethodAST_2E_weak & GGS_abstractExtensionMethodAST_2E_weak::operator = (const GGS_abstractExtensionMethodAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionMethodAST_2E_weak::GGS_abstractExtensionMethodAST_2E_weak (const GGS_abstractExtensionMethodAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionMethodAST_2E_weak GGS_abstractExtensionMethodAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractExtensionMethodAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionMethodAST GGS_abstractExtensionMethodAST_2E_weak::unwrappedValue (void) const {
  GGS_abstractExtensionMethodAST result ;
  if (isValid ()) {
    const cPtr_abstractExtensionMethodAST * p = (cPtr_abstractExtensionMethodAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractExtensionMethodAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionMethodAST GGS_abstractExtensionMethodAST_2E_weak::bang_abstractExtensionMethodAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractExtensionMethodAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractExtensionMethodAST) ;
      result = GGS_abstractExtensionMethodAST ((cPtr_abstractExtensionMethodAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractExtensionMethodAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionMethodAST_2E_weak ("abstractExtensionMethodAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractExtensionMethodAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractExtensionMethodAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractExtensionMethodAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionMethodAST_2E_weak GGS_abstractExtensionMethodAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_abstractExtensionMethodAST_2E_weak result ;
  const GGS_abstractExtensionMethodAST_2E_weak * p = (const GGS_abstractExtensionMethodAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractExtensionMethodAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionMethodAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@formalParameterListForGeneration' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_formalParameterListForGeneration : public cCollectionElement {
  public: GGS_formalParameterListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_formalParameterListForGeneration (const GGS_lstring & in_mFormalSelector,
                                                               const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                               const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                               const GGS_lstring & in_mFormalArgumentName,
                                                               const GGS_string & in_mFormalArgumentCppName
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_formalParameterListForGeneration (const GGS_formalParameterListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_formalParameterListForGeneration::cCollectionElement_formalParameterListForGeneration (const GGS_lstring & in_mFormalSelector,
                                                                                                          const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                                                          const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                                          const GGS_lstring & in_mFormalArgumentName,
                                                                                                          const GGS_string & in_mFormalArgumentCppName
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalArgumentPassingMode, in_mFormalArgumentType, in_mFormalArgumentName, in_mFormalArgumentCppName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_formalParameterListForGeneration::cCollectionElement_formalParameterListForGeneration (const GGS_formalParameterListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalSelector, inElement.mProperty_mFormalArgumentPassingMode, inElement.mProperty_mFormalArgumentType, inElement.mProperty_mFormalArgumentName, inElement.mProperty_mFormalArgumentCppName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_formalParameterListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_formalParameterListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_formalParameterListForGeneration (mObject.mProperty_mFormalSelector, mObject.mProperty_mFormalArgumentPassingMode, mObject.mProperty_mFormalArgumentType, mObject.mProperty_mFormalArgumentName, mObject.mProperty_mFormalArgumentCppName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_formalParameterListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalSelector" ":") ;
  mObject.mProperty_mFormalSelector.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentPassingMode" ":") ;
  mObject.mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentType" ":") ;
  mObject.mProperty_mFormalArgumentType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentName" ":") ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentCppName" ":") ;
  mObject.mProperty_mFormalArgumentCppName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration::GGS_formalParameterListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration::GGS_formalParameterListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration GGS_formalParameterListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_formalParameterListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration GGS_formalParameterListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_formalParameterListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterListForGeneration::plusPlusAssignOperation (const GGS_formalParameterListForGeneration_2E_element & inValue
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_formalParameterListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration GGS_formalParameterListForGeneration::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                     const GGS_formalArgumentPassingModeAST & inOperand1,
                                                                                                     const GGS_unifiedTypeMapEntry & inOperand2,
                                                                                                     const GGS_lstring & inOperand3,
                                                                                                     const GGS_string & inOperand4
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_formalParameterListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GGS_formalParameterListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_formalParameterListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GGS_lstring & in_mFormalSelector,
                                                                      const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                      const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                      const GGS_lstring & in_mFormalArgumentName,
                                                                      const GGS_string & in_mFormalArgumentCppName
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_formalParameterListForGeneration (in_mFormalSelector,
                                                                      in_mFormalArgumentPassingMode,
                                                                      in_mFormalArgumentType,
                                                                      in_mFormalArgumentName,
                                                                      in_mFormalArgumentCppName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterListForGeneration::addAssignOperation (const GGS_lstring & inOperand0,
                                                               const GGS_formalArgumentPassingModeAST & inOperand1,
                                                               const GGS_unifiedTypeMapEntry & inOperand2,
                                                               const GGS_lstring & inOperand3,
                                                               const GGS_string & inOperand4
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_formalParameterListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterListForGeneration::setter_append (const GGS_lstring inOperand0,
                                                          const GGS_formalArgumentPassingModeAST inOperand1,
                                                          const GGS_unifiedTypeMapEntry inOperand2,
                                                          const GGS_lstring inOperand3,
                                                          const GGS_string inOperand4,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_formalParameterListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterListForGeneration::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                 const GGS_formalArgumentPassingModeAST inOperand1,
                                                                 const GGS_unifiedTypeMapEntry inOperand2,
                                                                 const GGS_lstring inOperand3,
                                                                 const GGS_string inOperand4,
                                                                 const GGS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_formalParameterListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterListForGeneration::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                 GGS_formalArgumentPassingModeAST & outOperand1,
                                                                 GGS_unifiedTypeMapEntry & outOperand2,
                                                                 GGS_lstring & outOperand3,
                                                                 GGS_string & outOperand4,
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
    cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mFormalSelector ;
      outOperand1 = p->mObject.mProperty_mFormalArgumentPassingMode ;
      outOperand2 = p->mObject.mProperty_mFormalArgumentType ;
      outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
      outOperand4 = p->mObject.mProperty_mFormalArgumentCppName ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterListForGeneration::setter_popFirst (GGS_lstring & outOperand0,
                                                            GGS_formalArgumentPassingModeAST & outOperand1,
                                                            GGS_unifiedTypeMapEntry & outOperand2,
                                                            GGS_lstring & outOperand3,
                                                            GGS_string & outOperand4,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand4 = p->mObject.mProperty_mFormalArgumentCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterListForGeneration::setter_popLast (GGS_lstring & outOperand0,
                                                           GGS_formalArgumentPassingModeAST & outOperand1,
                                                           GGS_unifiedTypeMapEntry & outOperand2,
                                                           GGS_lstring & outOperand3,
                                                           GGS_string & outOperand4,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand4 = p->mObject.mProperty_mFormalArgumentCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterListForGeneration::method_first (GGS_lstring & outOperand0,
                                                         GGS_formalArgumentPassingModeAST & outOperand1,
                                                         GGS_unifiedTypeMapEntry & outOperand2,
                                                         GGS_lstring & outOperand3,
                                                         GGS_string & outOperand4,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand4 = p->mObject.mProperty_mFormalArgumentCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterListForGeneration::method_last (GGS_lstring & outOperand0,
                                                        GGS_formalArgumentPassingModeAST & outOperand1,
                                                        GGS_unifiedTypeMapEntry & outOperand2,
                                                        GGS_lstring & outOperand3,
                                                        GGS_string & outOperand4,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentPassingMode ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand3 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand4 = p->mObject.mProperty_mFormalArgumentCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration GGS_formalParameterListForGeneration::add_operation (const GGS_formalParameterListForGeneration & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_formalParameterListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration GGS_formalParameterListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_formalParameterListForGeneration result = GGS_formalParameterListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration GGS_formalParameterListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_formalParameterListForGeneration result = GGS_formalParameterListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration GGS_formalParameterListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_formalParameterListForGeneration result = GGS_formalParameterListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterListForGeneration::plusAssignOperation (const GGS_formalParameterListForGeneration inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterListForGeneration::setter_setMFormalSelectorAtIndex (GGS_lstring inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalSelector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_formalParameterListForGeneration::getter_mFormalSelectorAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    result = p->mObject.mProperty_mFormalSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterListForGeneration::setter_setMFormalArgumentPassingModeAtIndex (GGS_formalArgumentPassingModeAST inOperand,
                                                                                        GGS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentPassingMode = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalArgumentPassingModeAST GGS_formalParameterListForGeneration::getter_mFormalArgumentPassingModeAtIndex (const GGS_uint & inIndex,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  GGS_formalArgumentPassingModeAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    result = p->mObject.mProperty_mFormalArgumentPassingMode ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterListForGeneration::setter_setMFormalArgumentTypeAtIndex (GGS_unifiedTypeMapEntry inOperand,
                                                                                 GGS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_formalParameterListForGeneration::getter_mFormalArgumentTypeAtIndex (const GGS_uint & inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    result = p->mObject.mProperty_mFormalArgumentType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterListForGeneration::setter_setMFormalArgumentNameAtIndex (GGS_lstring inOperand,
                                                                                 GGS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_formalParameterListForGeneration::getter_mFormalArgumentNameAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterListForGeneration::setter_setMFormalArgumentCppNameAtIndex (GGS_string inOperand,
                                                                                    GGS_uint inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentCppName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_formalParameterListForGeneration::getter_mFormalArgumentCppNameAtIndex (const GGS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalParameterListForGeneration * p = (cCollectionElement_formalParameterListForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
    result = p->mObject.mProperty_mFormalArgumentCppName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @formalParameterListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_formalParameterListForGeneration::DownEnumerator_formalParameterListForGeneration (const GGS_formalParameterListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration_2E_element DownEnumerator_formalParameterListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_formalParameterListForGeneration::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalArgumentPassingModeAST DownEnumerator_formalParameterListForGeneration::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_formalParameterListForGeneration::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_formalParameterListForGeneration::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_formalParameterListForGeneration::current_mFormalArgumentCppName (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentCppName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @formalParameterListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_formalParameterListForGeneration::UpEnumerator_formalParameterListForGeneration (const GGS_formalParameterListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration_2E_element UpEnumerator_formalParameterListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_formalParameterListForGeneration::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalArgumentPassingModeAST UpEnumerator_formalParameterListForGeneration::current_mFormalArgumentPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentPassingMode ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_formalParameterListForGeneration::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_formalParameterListForGeneration::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_formalParameterListForGeneration::current_mFormalArgumentCppName (LOCATION_ARGS) const {
  const cCollectionElement_formalParameterListForGeneration * p = (const cCollectionElement_formalParameterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalParameterListForGeneration) ;
  return p->mObject.mProperty_mFormalArgumentCppName ;
}




//--------------------------------------------------------------------------------------------------
//     @formalParameterListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalParameterListForGeneration ("formalParameterListForGeneration",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_formalParameterListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_formalParameterListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_formalParameterListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration GGS_formalParameterListForGeneration::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_formalParameterListForGeneration result ;
  const GGS_formalParameterListForGeneration * p = (const GGS_formalParameterListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_formalParameterListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalParameterListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractExtensionSetterAST_2E_weak::objectCompare (const GGS_abstractExtensionSetterAST_2E_weak & inOperand) const {
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

GGS_abstractExtensionSetterAST_2E_weak::GGS_abstractExtensionSetterAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionSetterAST_2E_weak & GGS_abstractExtensionSetterAST_2E_weak::operator = (const GGS_abstractExtensionSetterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionSetterAST_2E_weak::GGS_abstractExtensionSetterAST_2E_weak (const GGS_abstractExtensionSetterAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionSetterAST_2E_weak GGS_abstractExtensionSetterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractExtensionSetterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionSetterAST GGS_abstractExtensionSetterAST_2E_weak::unwrappedValue (void) const {
  GGS_abstractExtensionSetterAST result ;
  if (isValid ()) {
    const cPtr_abstractExtensionSetterAST * p = (cPtr_abstractExtensionSetterAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractExtensionSetterAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionSetterAST GGS_abstractExtensionSetterAST_2E_weak::bang_abstractExtensionSetterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractExtensionSetterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractExtensionSetterAST) ;
      result = GGS_abstractExtensionSetterAST ((cPtr_abstractExtensionSetterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractExtensionSetterAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractExtensionSetterAST_2E_weak ("abstractExtensionSetterAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractExtensionSetterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractExtensionSetterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractExtensionSetterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionSetterAST_2E_weak GGS_abstractExtensionSetterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_abstractExtensionSetterAST_2E_weak result ;
  const GGS_abstractExtensionSetterAST_2E_weak * p = (const GGS_abstractExtensionSetterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractExtensionSetterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionSetterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum equatableComparableExtension
//--------------------------------------------------------------------------------------------------

GGS_equatableComparableExtension::GGS_equatableComparableExtension (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_equatableComparableExtension GGS_equatableComparableExtension::class_func_equatable (UNUSED_LOCATION_ARGS) {
  GGS_equatableComparableExtension result ;
  result.mEnum = Enumeration::enum_equatable ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_equatableComparableExtension GGS_equatableComparableExtension::class_func_comparable (UNUSED_LOCATION_ARGS) {
  GGS_equatableComparableExtension result ;
  result.mEnum = Enumeration::enum_comparable ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_equatableComparableExtension [3] = {
  "(not built)",
  "equatable",
  "comparable"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_equatableComparableExtension::getter_isEquatable (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_equatable == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_equatableComparableExtension::getter_isComparable (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_comparable == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_equatableComparableExtension::description (String & ioString,
                                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @equatableComparableExtension: ") ;
  ioString.appendCString (gEnumNameArrayFor_equatableComparableExtension [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @equatableComparableExtension generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_equatableComparableExtension ("equatableComparableExtension",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_equatableComparableExtension::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_equatableComparableExtension ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_equatableComparableExtension::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_equatableComparableExtension (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_equatableComparableExtension GGS_equatableComparableExtension::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_equatableComparableExtension result ;
  const GGS_equatableComparableExtension * p = (const GGS_equatableComparableExtension *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_equatableComparableExtension *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("equatableComparableExtension", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @equatableExtensionMap
//--------------------------------------------------------------------------------------------------

#include "GGS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap::GGS_equatableExtensionMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap::~ GGS_equatableExtensionMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap::GGS_equatableExtensionMap (const GGS_equatableExtensionMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap & GGS_equatableExtensionMap::operator = (const GGS_equatableExtensionMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap GGS_equatableExtensionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_equatableExtensionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap GGS_equatableExtensionMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_equatableExtensionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_equatableExtensionMap::getter_hasKey (const GGS_string & inKey
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_equatableExtensionMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                          const GGS_uint & inLevel
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_equatableExtensionMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_equatableExtensionMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_equatableExtensionMap::getter_locationForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_equatableExtensionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_equatableExtensionMap::getter_keyList (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_equatableExtensionMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_equatableExtensionMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_equatableExtensionMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_equatableExtensionMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_equatableExtensionMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <GGS_GenericMapRoot <GGS_equatableExtensionMap_2E_element>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_equatableExtensionMap::performInsert (const GGS_equatableExtensionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_equatableExtensionMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      existingNode = mSharedRoot->overriddenRoot ()->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_equatableExtensionMap_2E_element>
GGS_equatableExtensionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <GGS_GenericMapNode <GGS_equatableExtensionMap_2E_element>> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_equatableExtensionMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_equatableExtensionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <GGS_GenericMapNode <GGS_equatableExtensionMap_2E_element>>
GGS_equatableExtensionMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <GGS_GenericMapNode <GGS_equatableExtensionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_equatableExtensionMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_equatableExtensionMap_2E_element>>
GGS_equatableExtensionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_equatableExtensionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_equatableExtensionMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_equatableExtensionMap::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element_3F_ GGS_equatableExtensionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_equatableExtensionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_equatableExtensionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_equatableExtensionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_equatableExtensionMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mExtension = info->mProperty_mExtension ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap GGS_equatableExtensionMap::class_func_mapWithMapToOverride (const GGS_equatableExtensionMap & inMapToOverride
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_equatableExtensionMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_equatableExtensionMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap GGS_equatableExtensionMap::getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_equatableExtensionMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_equatableExtensionMap::setter_insertKey (GGS_lstring inLKey,
                                                  GGS_equatableComparableExtension inArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  const GGS_equatableExtensionMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' type is already declared equatable or commarable in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_equatableExtensionMap::setter_removeKey (GGS_lstring inLKey,
                                                  GGS_equatableComparableExtension & outArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  SharedGenericPtrWithValueSemantics <GGS_equatableExtensionMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const char * kRemoveErrorMessage = "internal error ('%K' type)" ;
    const String key = inLKey.mProperty_string.stringValue () ;
    insulate (THERE) ;
    info = mSharedRoot->removeAndReturnRemovedInfo (key) ;
    if (info.isNil ()) {
      TC_UniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kRemoveErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mExtension ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_equatableComparableExtension GGS_equatableExtensionMap::getter_mExtensionForKey (const GGS_string & inKey,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_equatableComparableExtension result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_equatableExtensionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mExtension ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_equatableExtensionMap::setter_setMExtensionForKey (GGS_equatableComparableExtension inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_equatableExtensionMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mExtension = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_equatableExtensionMap_internalDescription (const TC_Array <SharedGenericPtrWithValueSemantics <GGS_equatableExtensionMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key'") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mExtension:") ;
    inArray (i COMMA_HERE)->mProperty_mExtension.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_equatableExtensionMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const TC_Array <SharedGenericPtrWithValueSemantics <GGS_equatableExtensionMap_2E_element>> array = sortedInfoArray () ;
    GGS_equatableExtensionMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GGS_GenericMapRoot <GGS_equatableExtensionMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_equatableExtensionMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @equatableExtensionMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_equatableExtensionMap::DownEnumerator_equatableExtensionMap (const GGS_equatableExtensionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element DownEnumerator_equatableExtensionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_equatableExtensionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_equatableComparableExtension DownEnumerator_equatableExtensionMap::current_mExtension (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mExtension ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @equatableExtensionMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_equatableExtensionMap::UpEnumerator_equatableExtensionMap (const GGS_equatableExtensionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element UpEnumerator_equatableExtensionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_equatableExtensionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_equatableComparableExtension UpEnumerator_equatableExtensionMap::current_mExtension (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mExtension ;
}


//--------------------------------------------------------------------------------------------------
//     @equatableExtensionMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_equatableExtensionMap ("equatableExtensionMap",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_equatableExtensionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_equatableExtensionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_equatableExtensionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_equatableExtensionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap GGS_equatableExtensionMap::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_equatableExtensionMap result ;
  const GGS_equatableExtensionMap * p = (const GGS_equatableExtensionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_equatableExtensionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("equatableExtensionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_equatableExtensionAST_2E_weak::objectCompare (const GGS_equatableExtensionAST_2E_weak & inOperand) const {
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

GGS_equatableExtensionAST_2E_weak::GGS_equatableExtensionAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionAST_2E_weak & GGS_equatableExtensionAST_2E_weak::operator = (const GGS_equatableExtensionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionAST_2E_weak::GGS_equatableExtensionAST_2E_weak (const GGS_equatableExtensionAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionAST_2E_weak GGS_equatableExtensionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_equatableExtensionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionAST GGS_equatableExtensionAST_2E_weak::unwrappedValue (void) const {
  GGS_equatableExtensionAST result ;
  if (isValid ()) {
    const cPtr_equatableExtensionAST * p = (cPtr_equatableExtensionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_equatableExtensionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionAST GGS_equatableExtensionAST_2E_weak::bang_equatableExtensionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_equatableExtensionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_equatableExtensionAST) ;
      result = GGS_equatableExtensionAST ((cPtr_equatableExtensionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @equatableExtensionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_equatableExtensionAST_2E_weak ("equatableExtensionAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_equatableExtensionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_equatableExtensionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_equatableExtensionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_equatableExtensionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionAST_2E_weak GGS_equatableExtensionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_equatableExtensionAST_2E_weak result ;
  const GGS_equatableExtensionAST_2E_weak * p = (const GGS_equatableExtensionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_equatableExtensionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("equatableExtensionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@semanticInstructionListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_semanticInstructionListAST : public cCollectionElement {
  public: GGS_semanticInstructionListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_semanticInstructionListAST (const GGS_semanticInstructionAST & in_mInstruction
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_semanticInstructionListAST (const GGS_semanticInstructionListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_semanticInstructionListAST::cCollectionElement_semanticInstructionListAST (const GGS_semanticInstructionAST & in_mInstruction
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_semanticInstructionListAST::cCollectionElement_semanticInstructionListAST (const GGS_semanticInstructionListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_semanticInstructionListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_semanticInstructionListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_semanticInstructionListAST (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_semanticInstructionListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstruction" ":") ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST::GGS_semanticInstructionListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST::GGS_semanticInstructionListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_semanticInstructionListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_semanticInstructionListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_semanticInstructionListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_semanticInstructionListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListAST::plusPlusAssignOperation (const GGS_semanticInstructionListAST_2E_element & inValue
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_semanticInstructionListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_semanticInstructionListAST::class_func_listWithValue (const GGS_semanticInstructionAST & inOperand0
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_semanticInstructionListAST result ;
  if (inOperand0.isValid ()) {
    result = GGS_semanticInstructionListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_semanticInstructionListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GGS_semanticInstructionAST & in_mInstruction
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticInstructionListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_semanticInstructionListAST (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListAST::addAssignOperation (const GGS_semanticInstructionAST & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticInstructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListAST::setter_append (const GGS_semanticInstructionAST inOperand0,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticInstructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListAST::setter_insertAtIndex (const GGS_semanticInstructionAST inOperand0,
                                                           const GGS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticInstructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListAST::setter_removeAtIndex (GGS_semanticInstructionAST & outOperand0,
                                                           const GGS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_semanticInstructionListAST * p = (cCollectionElement_semanticInstructionListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
      outOperand0 = p->mObject.mProperty_mInstruction ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListAST::setter_popFirst (GGS_semanticInstructionAST & outOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListAST * p = (cCollectionElement_semanticInstructionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListAST::setter_popLast (GGS_semanticInstructionAST & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListAST * p = (cCollectionElement_semanticInstructionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListAST::method_first (GGS_semanticInstructionAST & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListAST * p = (cCollectionElement_semanticInstructionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListAST::method_last (GGS_semanticInstructionAST & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListAST * p = (cCollectionElement_semanticInstructionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_semanticInstructionListAST::add_operation (const GGS_semanticInstructionListAST & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_semanticInstructionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_semanticInstructionListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_semanticInstructionListAST result = GGS_semanticInstructionListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_semanticInstructionListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_semanticInstructionListAST result = GGS_semanticInstructionListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_semanticInstructionListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_semanticInstructionListAST result = GGS_semanticInstructionListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListAST::plusAssignOperation (const GGS_semanticInstructionListAST inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListAST::setter_setMInstructionAtIndex (GGS_semanticInstructionAST inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticInstructionListAST * p = (cCollectionElement_semanticInstructionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionAST GGS_semanticInstructionListAST::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListAST * p = (cCollectionElement_semanticInstructionListAST *) attributes.ptr () ;
  GGS_semanticInstructionAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @semanticInstructionListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_semanticInstructionListAST::DownEnumerator_semanticInstructionListAST (const GGS_semanticInstructionListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST_2E_element DownEnumerator_semanticInstructionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_semanticInstructionListAST * p = (const cCollectionElement_semanticInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionAST DownEnumerator_semanticInstructionListAST::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_semanticInstructionListAST * p = (const cCollectionElement_semanticInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
  return p->mObject.mProperty_mInstruction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @semanticInstructionListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_semanticInstructionListAST::UpEnumerator_semanticInstructionListAST (const GGS_semanticInstructionListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST_2E_element UpEnumerator_semanticInstructionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_semanticInstructionListAST * p = (const cCollectionElement_semanticInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionAST UpEnumerator_semanticInstructionListAST::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_semanticInstructionListAST * p = (const cCollectionElement_semanticInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticInstructionListAST) ;
  return p->mObject.mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//     @semanticInstructionListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionListAST ("semanticInstructionListAST",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticInstructionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticInstructionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticInstructionListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_semanticInstructionListAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_semanticInstructionListAST result ;
  const GGS_semanticInstructionListAST * p = (const GGS_semanticInstructionListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticInstructionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extensionGetterAST_2E_weak::objectCompare (const GGS_extensionGetterAST_2E_weak & inOperand) const {
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

GGS_extensionGetterAST_2E_weak::GGS_extensionGetterAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterAST_2E_weak & GGS_extensionGetterAST_2E_weak::operator = (const GGS_extensionGetterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterAST_2E_weak::GGS_extensionGetterAST_2E_weak (const GGS_extensionGetterAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_extensionGetterAST_2E_weak GGS_extensionGetterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_extensionGetterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterAST GGS_extensionGetterAST_2E_weak::unwrappedValue (void) const {
  GGS_extensionGetterAST result ;
  if (isValid ()) {
    const cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_extensionGetterAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterAST GGS_extensionGetterAST_2E_weak::bang_extensionGetterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_extensionGetterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extensionGetterAST) ;
      result = GGS_extensionGetterAST ((cPtr_extensionGetterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @extensionGetterAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterAST_2E_weak ("extensionGetterAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionGetterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionGetterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionGetterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterAST_2E_weak GGS_extensionGetterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_extensionGetterAST_2E_weak result ;
  const GGS_extensionGetterAST_2E_weak * p = (const GGS_extensionGetterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionGetterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@semanticInstructionListForGeneration' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_semanticInstructionListForGeneration : public cCollectionElement {
  public: GGS_semanticInstructionListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_semanticInstructionListForGeneration (const GGS_semanticInstructionForGeneration & in_mInstruction
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_semanticInstructionListForGeneration (const GGS_semanticInstructionListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_semanticInstructionListForGeneration::cCollectionElement_semanticInstructionListForGeneration (const GGS_semanticInstructionForGeneration & in_mInstruction
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_semanticInstructionListForGeneration::cCollectionElement_semanticInstructionListForGeneration (const GGS_semanticInstructionListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_semanticInstructionListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_semanticInstructionListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_semanticInstructionListForGeneration (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_semanticInstructionListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstruction" ":") ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration::GGS_semanticInstructionListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration::GGS_semanticInstructionListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_semanticInstructionListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_semanticInstructionListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_semanticInstructionListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_semanticInstructionListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListForGeneration::plusPlusAssignOperation (const GGS_semanticInstructionListForGeneration_2E_element & inValue
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_semanticInstructionListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_semanticInstructionListForGeneration::class_func_listWithValue (const GGS_semanticInstructionForGeneration & inOperand0
                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_semanticInstructionListForGeneration result ;
  if (inOperand0.isValid ()) {
    result = GGS_semanticInstructionListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_semanticInstructionListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GGS_semanticInstructionForGeneration & in_mInstruction
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticInstructionListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_semanticInstructionListForGeneration (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListForGeneration::addAssignOperation (const GGS_semanticInstructionForGeneration & inOperand0
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticInstructionListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListForGeneration::setter_append (const GGS_semanticInstructionForGeneration inOperand0,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticInstructionListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListForGeneration::setter_insertAtIndex (const GGS_semanticInstructionForGeneration inOperand0,
                                                                     const GGS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticInstructionListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListForGeneration::setter_removeAtIndex (GGS_semanticInstructionForGeneration & outOperand0,
                                                                     const GGS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_semanticInstructionListForGeneration * p = (cCollectionElement_semanticInstructionListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mInstruction ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListForGeneration::setter_popFirst (GGS_semanticInstructionForGeneration & outOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListForGeneration * p = (cCollectionElement_semanticInstructionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListForGeneration::setter_popLast (GGS_semanticInstructionForGeneration & outOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListForGeneration * p = (cCollectionElement_semanticInstructionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListForGeneration::method_first (GGS_semanticInstructionForGeneration & outOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListForGeneration * p = (cCollectionElement_semanticInstructionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListForGeneration::method_last (GGS_semanticInstructionForGeneration & outOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListForGeneration * p = (cCollectionElement_semanticInstructionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_semanticInstructionListForGeneration::add_operation (const GGS_semanticInstructionListForGeneration & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_semanticInstructionListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_semanticInstructionListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_semanticInstructionListForGeneration result = GGS_semanticInstructionListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_semanticInstructionListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_semanticInstructionListForGeneration result = GGS_semanticInstructionListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_semanticInstructionListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_semanticInstructionListForGeneration result = GGS_semanticInstructionListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListForGeneration::plusAssignOperation (const GGS_semanticInstructionListForGeneration inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListForGeneration::setter_setMInstructionAtIndex (GGS_semanticInstructionForGeneration inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticInstructionListForGeneration * p = (cCollectionElement_semanticInstructionListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration GGS_semanticInstructionListForGeneration::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticInstructionListForGeneration * p = (cCollectionElement_semanticInstructionListForGeneration *) attributes.ptr () ;
  GGS_semanticInstructionForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @semanticInstructionListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_semanticInstructionListForGeneration::DownEnumerator_semanticInstructionListForGeneration (const GGS_semanticInstructionListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration_2E_element DownEnumerator_semanticInstructionListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_semanticInstructionListForGeneration * p = (const cCollectionElement_semanticInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration DownEnumerator_semanticInstructionListForGeneration::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_semanticInstructionListForGeneration * p = (const cCollectionElement_semanticInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
  return p->mObject.mProperty_mInstruction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @semanticInstructionListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_semanticInstructionListForGeneration::UpEnumerator_semanticInstructionListForGeneration (const GGS_semanticInstructionListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration_2E_element UpEnumerator_semanticInstructionListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_semanticInstructionListForGeneration * p = (const cCollectionElement_semanticInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionForGeneration UpEnumerator_semanticInstructionListForGeneration::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_semanticInstructionListForGeneration * p = (const cCollectionElement_semanticInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticInstructionListForGeneration) ;
  return p->mObject.mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//     @semanticInstructionListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionListForGeneration ("semanticInstructionListForGeneration",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_semanticInstructionListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_semanticInstructionListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticInstructionListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_semanticInstructionListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_semanticInstructionListForGeneration result ;
  const GGS_semanticInstructionListForGeneration * p = (const GGS_semanticInstructionListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticInstructionListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extensionMethodAST_2E_weak::objectCompare (const GGS_extensionMethodAST_2E_weak & inOperand) const {
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

GGS_extensionMethodAST_2E_weak::GGS_extensionMethodAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodAST_2E_weak & GGS_extensionMethodAST_2E_weak::operator = (const GGS_extensionMethodAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodAST_2E_weak::GGS_extensionMethodAST_2E_weak (const GGS_extensionMethodAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_extensionMethodAST_2E_weak GGS_extensionMethodAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_extensionMethodAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodAST GGS_extensionMethodAST_2E_weak::unwrappedValue (void) const {
  GGS_extensionMethodAST result ;
  if (isValid ()) {
    const cPtr_extensionMethodAST * p = (cPtr_extensionMethodAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_extensionMethodAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodAST GGS_extensionMethodAST_2E_weak::bang_extensionMethodAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_extensionMethodAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extensionMethodAST) ;
      result = GGS_extensionMethodAST ((cPtr_extensionMethodAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @extensionMethodAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodAST_2E_weak ("extensionMethodAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionMethodAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionMethodAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionMethodAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodAST_2E_weak GGS_extensionMethodAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_extensionMethodAST_2E_weak result ;
  const GGS_extensionMethodAST_2E_weak * p = (const GGS_extensionMethodAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionMethodAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extensionSetterAST_2E_weak::objectCompare (const GGS_extensionSetterAST_2E_weak & inOperand) const {
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

GGS_extensionSetterAST_2E_weak::GGS_extensionSetterAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterAST_2E_weak & GGS_extensionSetterAST_2E_weak::operator = (const GGS_extensionSetterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterAST_2E_weak::GGS_extensionSetterAST_2E_weak (const GGS_extensionSetterAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_extensionSetterAST_2E_weak GGS_extensionSetterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_extensionSetterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterAST GGS_extensionSetterAST_2E_weak::unwrappedValue (void) const {
  GGS_extensionSetterAST result ;
  if (isValid ()) {
    const cPtr_extensionSetterAST * p = (cPtr_extensionSetterAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_extensionSetterAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterAST GGS_extensionSetterAST_2E_weak::bang_extensionSetterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_extensionSetterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extensionSetterAST) ;
      result = GGS_extensionSetterAST ((cPtr_extensionSetterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @extensionSetterAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterAST_2E_weak ("extensionSetterAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionSetterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionSetterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionSetterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterAST_2E_weak GGS_extensionSetterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_extensionSetterAST_2E_weak result ;
  const GGS_extensionSetterAST_2E_weak * p = (const GGS_extensionSetterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionSetterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_initializerAST_2E_weak::objectCompare (const GGS_initializerAST_2E_weak & inOperand) const {
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

GGS_initializerAST_2E_weak::GGS_initializerAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_initializerAST_2E_weak & GGS_initializerAST_2E_weak::operator = (const GGS_initializerAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerAST_2E_weak::GGS_initializerAST_2E_weak (const GGS_initializerAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_initializerAST_2E_weak GGS_initializerAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_initializerAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerAST GGS_initializerAST_2E_weak::unwrappedValue (void) const {
  GGS_initializerAST result ;
  if (isValid ()) {
    const cPtr_initializerAST * p = (cPtr_initializerAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_initializerAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerAST GGS_initializerAST_2E_weak::bang_initializerAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_initializerAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_initializerAST) ;
      result = GGS_initializerAST ((cPtr_initializerAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @initializerAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_initializerAST_2E_weak ("initializerAST.weak",
                                                                              & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_initializerAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_initializerAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_initializerAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_initializerAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_initializerAST_2E_weak GGS_initializerAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_initializerAST_2E_weak result ;
  const GGS_initializerAST_2E_weak * p = (const GGS_initializerAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_initializerAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("initializerAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_overridingAbstractExtensionGetterAST_2E_weak::objectCompare (const GGS_overridingAbstractExtensionGetterAST_2E_weak & inOperand) const {
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

GGS_overridingAbstractExtensionGetterAST_2E_weak::GGS_overridingAbstractExtensionGetterAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_overridingAbstractExtensionGetterAST_2E_weak & GGS_overridingAbstractExtensionGetterAST_2E_weak::operator = (const GGS_overridingAbstractExtensionGetterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingAbstractExtensionGetterAST_2E_weak::GGS_overridingAbstractExtensionGetterAST_2E_weak (const GGS_overridingAbstractExtensionGetterAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_overridingAbstractExtensionGetterAST_2E_weak GGS_overridingAbstractExtensionGetterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_overridingAbstractExtensionGetterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingAbstractExtensionGetterAST GGS_overridingAbstractExtensionGetterAST_2E_weak::unwrappedValue (void) const {
  GGS_overridingAbstractExtensionGetterAST result ;
  if (isValid ()) {
    const cPtr_overridingAbstractExtensionGetterAST * p = (cPtr_overridingAbstractExtensionGetterAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_overridingAbstractExtensionGetterAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingAbstractExtensionGetterAST GGS_overridingAbstractExtensionGetterAST_2E_weak::bang_overridingAbstractExtensionGetterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_overridingAbstractExtensionGetterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overridingAbstractExtensionGetterAST) ;
      result = GGS_overridingAbstractExtensionGetterAST ((cPtr_overridingAbstractExtensionGetterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @overridingAbstractExtensionGetterAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST_2E_weak ("overridingAbstractExtensionGetterAST.weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_overridingAbstractExtensionGetterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_overridingAbstractExtensionGetterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_overridingAbstractExtensionGetterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingAbstractExtensionGetterAST_2E_weak GGS_overridingAbstractExtensionGetterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_overridingAbstractExtensionGetterAST_2E_weak result ;
  const GGS_overridingAbstractExtensionGetterAST_2E_weak * p = (const GGS_overridingAbstractExtensionGetterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_overridingAbstractExtensionGetterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingAbstractExtensionGetterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_overridingAbstractExtensionMethodAST_2E_weak::objectCompare (const GGS_overridingAbstractExtensionMethodAST_2E_weak & inOperand) const {
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

GGS_overridingAbstractExtensionMethodAST_2E_weak::GGS_overridingAbstractExtensionMethodAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_overridingAbstractExtensionMethodAST_2E_weak & GGS_overridingAbstractExtensionMethodAST_2E_weak::operator = (const GGS_overridingAbstractExtensionMethodAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingAbstractExtensionMethodAST_2E_weak::GGS_overridingAbstractExtensionMethodAST_2E_weak (const GGS_overridingAbstractExtensionMethodAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_overridingAbstractExtensionMethodAST_2E_weak GGS_overridingAbstractExtensionMethodAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_overridingAbstractExtensionMethodAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingAbstractExtensionMethodAST GGS_overridingAbstractExtensionMethodAST_2E_weak::unwrappedValue (void) const {
  GGS_overridingAbstractExtensionMethodAST result ;
  if (isValid ()) {
    const cPtr_overridingAbstractExtensionMethodAST * p = (cPtr_overridingAbstractExtensionMethodAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_overridingAbstractExtensionMethodAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingAbstractExtensionMethodAST GGS_overridingAbstractExtensionMethodAST_2E_weak::bang_overridingAbstractExtensionMethodAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_overridingAbstractExtensionMethodAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overridingAbstractExtensionMethodAST) ;
      result = GGS_overridingAbstractExtensionMethodAST ((cPtr_overridingAbstractExtensionMethodAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @overridingAbstractExtensionMethodAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST_2E_weak ("overridingAbstractExtensionMethodAST.weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_overridingAbstractExtensionMethodAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_overridingAbstractExtensionMethodAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_overridingAbstractExtensionMethodAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingAbstractExtensionMethodAST_2E_weak GGS_overridingAbstractExtensionMethodAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_overridingAbstractExtensionMethodAST_2E_weak result ;
  const GGS_overridingAbstractExtensionMethodAST_2E_weak * p = (const GGS_overridingAbstractExtensionMethodAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_overridingAbstractExtensionMethodAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingAbstractExtensionMethodAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_overridingAbstractExtensionSetterAST_2E_weak::objectCompare (const GGS_overridingAbstractExtensionSetterAST_2E_weak & inOperand) const {
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

GGS_overridingAbstractExtensionSetterAST_2E_weak::GGS_overridingAbstractExtensionSetterAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_overridingAbstractExtensionSetterAST_2E_weak & GGS_overridingAbstractExtensionSetterAST_2E_weak::operator = (const GGS_overridingAbstractExtensionSetterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingAbstractExtensionSetterAST_2E_weak::GGS_overridingAbstractExtensionSetterAST_2E_weak (const GGS_overridingAbstractExtensionSetterAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_overridingAbstractExtensionSetterAST_2E_weak GGS_overridingAbstractExtensionSetterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_overridingAbstractExtensionSetterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingAbstractExtensionSetterAST GGS_overridingAbstractExtensionSetterAST_2E_weak::unwrappedValue (void) const {
  GGS_overridingAbstractExtensionSetterAST result ;
  if (isValid ()) {
    const cPtr_overridingAbstractExtensionSetterAST * p = (cPtr_overridingAbstractExtensionSetterAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_overridingAbstractExtensionSetterAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingAbstractExtensionSetterAST GGS_overridingAbstractExtensionSetterAST_2E_weak::bang_overridingAbstractExtensionSetterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_overridingAbstractExtensionSetterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overridingAbstractExtensionSetterAST) ;
      result = GGS_overridingAbstractExtensionSetterAST ((cPtr_overridingAbstractExtensionSetterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @overridingAbstractExtensionSetterAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST_2E_weak ("overridingAbstractExtensionSetterAST.weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_overridingAbstractExtensionSetterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_overridingAbstractExtensionSetterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_overridingAbstractExtensionSetterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingAbstractExtensionSetterAST_2E_weak GGS_overridingAbstractExtensionSetterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_overridingAbstractExtensionSetterAST_2E_weak result ;
  const GGS_overridingAbstractExtensionSetterAST_2E_weak * p = (const GGS_overridingAbstractExtensionSetterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_overridingAbstractExtensionSetterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingAbstractExtensionSetterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_overridingExtensionGetterAST_2E_weak::objectCompare (const GGS_overridingExtensionGetterAST_2E_weak & inOperand) const {
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

GGS_overridingExtensionGetterAST_2E_weak::GGS_overridingExtensionGetterAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionGetterAST_2E_weak & GGS_overridingExtensionGetterAST_2E_weak::operator = (const GGS_overridingExtensionGetterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionGetterAST_2E_weak::GGS_overridingExtensionGetterAST_2E_weak (const GGS_overridingExtensionGetterAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionGetterAST_2E_weak GGS_overridingExtensionGetterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_overridingExtensionGetterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionGetterAST GGS_overridingExtensionGetterAST_2E_weak::unwrappedValue (void) const {
  GGS_overridingExtensionGetterAST result ;
  if (isValid ()) {
    const cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_overridingExtensionGetterAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionGetterAST GGS_overridingExtensionGetterAST_2E_weak::bang_overridingExtensionGetterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_overridingExtensionGetterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overridingExtensionGetterAST) ;
      result = GGS_overridingExtensionGetterAST ((cPtr_overridingExtensionGetterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @overridingExtensionGetterAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionGetterAST_2E_weak ("overridingExtensionGetterAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_overridingExtensionGetterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionGetterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_overridingExtensionGetterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_overridingExtensionGetterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionGetterAST_2E_weak GGS_overridingExtensionGetterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_overridingExtensionGetterAST_2E_weak result ;
  const GGS_overridingExtensionGetterAST_2E_weak * p = (const GGS_overridingExtensionGetterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_overridingExtensionGetterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionGetterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_overridingExtensionMethodAST_2E_weak::objectCompare (const GGS_overridingExtensionMethodAST_2E_weak & inOperand) const {
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

GGS_overridingExtensionMethodAST_2E_weak::GGS_overridingExtensionMethodAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionMethodAST_2E_weak & GGS_overridingExtensionMethodAST_2E_weak::operator = (const GGS_overridingExtensionMethodAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionMethodAST_2E_weak::GGS_overridingExtensionMethodAST_2E_weak (const GGS_overridingExtensionMethodAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionMethodAST_2E_weak GGS_overridingExtensionMethodAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_overridingExtensionMethodAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionMethodAST GGS_overridingExtensionMethodAST_2E_weak::unwrappedValue (void) const {
  GGS_overridingExtensionMethodAST result ;
  if (isValid ()) {
    const cPtr_overridingExtensionMethodAST * p = (cPtr_overridingExtensionMethodAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_overridingExtensionMethodAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionMethodAST GGS_overridingExtensionMethodAST_2E_weak::bang_overridingExtensionMethodAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_overridingExtensionMethodAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overridingExtensionMethodAST) ;
      result = GGS_overridingExtensionMethodAST ((cPtr_overridingExtensionMethodAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @overridingExtensionMethodAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionMethodAST_2E_weak ("overridingExtensionMethodAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_overridingExtensionMethodAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionMethodAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_overridingExtensionMethodAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_overridingExtensionMethodAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionMethodAST_2E_weak GGS_overridingExtensionMethodAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_overridingExtensionMethodAST_2E_weak result ;
  const GGS_overridingExtensionMethodAST_2E_weak * p = (const GGS_overridingExtensionMethodAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_overridingExtensionMethodAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionMethodAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_overridingExtensionSetterAST_2E_weak::objectCompare (const GGS_overridingExtensionSetterAST_2E_weak & inOperand) const {
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

GGS_overridingExtensionSetterAST_2E_weak::GGS_overridingExtensionSetterAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionSetterAST_2E_weak & GGS_overridingExtensionSetterAST_2E_weak::operator = (const GGS_overridingExtensionSetterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionSetterAST_2E_weak::GGS_overridingExtensionSetterAST_2E_weak (const GGS_overridingExtensionSetterAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionSetterAST_2E_weak GGS_overridingExtensionSetterAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_overridingExtensionSetterAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionSetterAST GGS_overridingExtensionSetterAST_2E_weak::unwrappedValue (void) const {
  GGS_overridingExtensionSetterAST result ;
  if (isValid ()) {
    const cPtr_overridingExtensionSetterAST * p = (cPtr_overridingExtensionSetterAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_overridingExtensionSetterAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionSetterAST GGS_overridingExtensionSetterAST_2E_weak::bang_overridingExtensionSetterAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_overridingExtensionSetterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overridingExtensionSetterAST) ;
      result = GGS_overridingExtensionSetterAST ((cPtr_overridingExtensionSetterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @overridingExtensionSetterAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overridingExtensionSetterAST_2E_weak ("overridingExtensionSetterAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_overridingExtensionSetterAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionSetterAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_overridingExtensionSetterAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_overridingExtensionSetterAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionSetterAST_2E_weak GGS_overridingExtensionSetterAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_overridingExtensionSetterAST_2E_weak result ;
  const GGS_overridingExtensionSetterAST_2E_weak * p = (const GGS_overridingExtensionSetterAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_overridingExtensionSetterAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingExtensionSetterAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum typeKindEnum
//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum::GGS_typeKindEnum (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum GGS_typeKindEnum::class_func_classType (const GGS_bool & inAssociatedValue0
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum result ;
  result.mEnum = Enumeration::enum_classType ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKindEnum_2E_classType (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum GGS_typeKindEnum::class_func_weakReferenceType (const GGS_unifiedTypeMapEntry & inAssociatedValue0
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum result ;
  result.mEnum = Enumeration::enum_weakReferenceType ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKindEnum_2E_weakReferenceType (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum GGS_typeKindEnum::class_func_enumType (const GGS_constantIndexMap & inAssociatedValue0
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum result ;
  result.mEnum = Enumeration::enum_enumType ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKindEnum_2E_enumType (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum GGS_typeKindEnum::class_func_listType (UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum result ;
  result.mEnum = Enumeration::enum_listType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum GGS_typeKindEnum::class_func_sortedListType (UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum result ;
  result.mEnum = Enumeration::enum_sortedListType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum GGS_typeKindEnum::class_func_mapType (UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum result ;
  result.mEnum = Enumeration::enum_mapType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum GGS_typeKindEnum::class_func_sharedMapType (UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum result ;
  result.mEnum = Enumeration::enum_sharedMapType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum GGS_typeKindEnum::class_func_sharedMapEntryType (UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum result ;
  result.mEnum = Enumeration::enum_sharedMapEntryType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum GGS_typeKindEnum::class_func_listMapType (UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum result ;
  result.mEnum = Enumeration::enum_listMapType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum GGS_typeKindEnum::class_func_boolsetType (UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum result ;
  result.mEnum = Enumeration::enum_boolsetType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum GGS_typeKindEnum::class_func_structType (UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum result ;
  result.mEnum = Enumeration::enum_structType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum GGS_typeKindEnum::class_func_graphType (UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum result ;
  result.mEnum = Enumeration::enum_graphType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum GGS_typeKindEnum::class_func_externType (UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum result ;
  result.mEnum = Enumeration::enum_externType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum GGS_typeKindEnum::class_func_otherType (UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum result ;
  result.mEnum = Enumeration::enum_otherType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum GGS_typeKindEnum::class_func_packageType (UNUSED_LOCATION_ARGS) {
  GGS_typeKindEnum result ;
  result.mEnum = Enumeration::enum_packageType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum::method_extractClassType (GGS_bool & outAssociatedValue_isReference,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_classType) {
    outAssociatedValue_isReference.drop () ;
    String s ;
    s.appendCString ("method @typeKindEnum.classType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKindEnum_2E_classType *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_isReference = ptr->mProperty_isReference ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum::method_extractWeakReferenceType (GGS_unifiedTypeMapEntry & outAssociatedValue_referenceType,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_weakReferenceType) {
    outAssociatedValue_referenceType.drop () ;
    String s ;
    s.appendCString ("method @typeKindEnum.weakReferenceType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKindEnum_2E_weakReferenceType *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_referenceType = ptr->mProperty_referenceType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum::method_extractEnumType (GGS_constantIndexMap & outAssociatedValue_constantMap,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_enumType) {
    outAssociatedValue_constantMap.drop () ;
    String s ;
    s.appendCString ("method @typeKindEnum.enumType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKindEnum_2E_enumType *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_constantMap = ptr->mProperty_constantMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_classType_3F_ GGS_typeKindEnum::getter_getClassType (UNUSED_LOCATION_ARGS) const {
  GGS_typeKindEnum_2E_classType_3F_ result ;
  if (mEnum == Enumeration::enum_classType) {
    const auto ptr = (const GGS_typeKindEnum_2E_classType *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKindEnum_2E_classType (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum::getAssociatedValuesFor_classType (GGS_bool & out_isReference) const {
  const auto ptr = (const GGS_typeKindEnum_2E_classType *) mAssociatedValues.associatedValuesPointer () ;
  out_isReference = ptr->mProperty_isReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_weakReferenceType_3F_ GGS_typeKindEnum::getter_getWeakReferenceType (UNUSED_LOCATION_ARGS) const {
  GGS_typeKindEnum_2E_weakReferenceType_3F_ result ;
  if (mEnum == Enumeration::enum_weakReferenceType) {
    const auto ptr = (const GGS_typeKindEnum_2E_weakReferenceType *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKindEnum_2E_weakReferenceType (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum::getAssociatedValuesFor_weakReferenceType (GGS_unifiedTypeMapEntry & out_referenceType) const {
  const auto ptr = (const GGS_typeKindEnum_2E_weakReferenceType *) mAssociatedValues.associatedValuesPointer () ;
  out_referenceType = ptr->mProperty_referenceType ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum_2E_enumType_3F_ GGS_typeKindEnum::getter_getEnumType (UNUSED_LOCATION_ARGS) const {
  GGS_typeKindEnum_2E_enumType_3F_ result ;
  if (mEnum == Enumeration::enum_enumType) {
    const auto ptr = (const GGS_typeKindEnum_2E_enumType *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKindEnum_2E_enumType (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum::getAssociatedValuesFor_enumType (GGS_constantIndexMap & out_constantMap) const {
  const auto ptr = (const GGS_typeKindEnum_2E_enumType *) mAssociatedValues.associatedValuesPointer () ;
  out_constantMap = ptr->mProperty_constantMap ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_typeKindEnum [16] = {
  "(not built)",
  "classType",
  "weakReferenceType",
  "enumType",
  "listType",
  "sortedListType",
  "mapType",
  "sharedMapType",
  "sharedMapEntryType",
  "listMapType",
  "boolsetType",
  "structType",
  "graphType",
  "externType",
  "otherType",
  "packageType"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKindEnum::getter_isClassType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_classType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKindEnum::getter_isWeakReferenceType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_weakReferenceType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKindEnum::getter_isEnumType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_enumType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKindEnum::getter_isListType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_listType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKindEnum::getter_isSortedListType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_sortedListType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKindEnum::getter_isMapType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_mapType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKindEnum::getter_isSharedMapType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_sharedMapType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKindEnum::getter_isSharedMapEntryType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_sharedMapEntryType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKindEnum::getter_isListMapType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_listMapType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKindEnum::getter_isBoolsetType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_boolsetType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKindEnum::getter_isStructType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_structType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKindEnum::getter_isGraphType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_graphType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKindEnum::getter_isExternType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_externType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKindEnum::getter_isOtherType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_otherType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKindEnum::getter_isPackageType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_packageType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindEnum::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("<enum @typeKindEnum: ") ;
  ioString.appendCString (gEnumNameArrayFor_typeKindEnum [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKindEnum::objectCompare (const GGS_typeKindEnum & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_classType: {
        const auto left = (GGS_typeKindEnum_2E_classType *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKindEnum_2E_classType *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_weakReferenceType: {
        const auto left = (GGS_typeKindEnum_2E_weakReferenceType *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKindEnum_2E_weakReferenceType *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_enumType: {
        const auto left = (GGS_typeKindEnum_2E_enumType *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKindEnum_2E_enumType *) inOperand.mAssociatedValues.associatedValuesPointer () ;
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
//     @typeKindEnum generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum ("typeKindEnum",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKindEnum::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindEnum ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKindEnum::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKindEnum (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum GGS_typeKindEnum::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_typeKindEnum result ;
  const GGS_typeKindEnum * p = (const GGS_typeKindEnum *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKindEnum *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindEnum", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @propertyMap
//--------------------------------------------------------------------------------------------------

#include "GGS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_propertyMap::GGS_propertyMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap::~ GGS_propertyMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap::GGS_propertyMap (const GGS_propertyMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap & GGS_propertyMap::operator = (const GGS_propertyMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap GGS_propertyMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_propertyMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap GGS_propertyMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_propertyMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyMap::getter_hasKey (const GGS_string & inKey
                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                const GGS_uint & inLevel
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_propertyMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_propertyMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_propertyMap::getter_locationForKey (const GGS_string & inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_propertyMap::getter_keyList (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_propertyMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <GGS_GenericMapRoot <GGS_propertyMap_2E_element>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::performInsert (const GGS_propertyMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_propertyMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      existingNode = mSharedRoot->overriddenRoot ()->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element>
GGS_propertyMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <GGS_GenericMapNode <GGS_propertyMap_2E_element>> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <GGS_GenericMapNode <GGS_propertyMap_2E_element>>
GGS_propertyMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <GGS_GenericMapNode <GGS_propertyMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_propertyMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element>>
GGS_propertyMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_propertyMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element_3F_ GGS_propertyMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_propertyMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_propertyMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_propertyMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mAccessControl = info->mProperty_mAccessControl ;
      element.mProperty_mIsConstant = info->mProperty_mIsConstant ;
      element.mProperty_mPropertyType = info->mProperty_mPropertyType ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap GGS_propertyMap::class_func_mapWithMapToOverride (const GGS_propertyMap & inMapToOverride
                                                                  COMMA_LOCATION_ARGS) {
  GGS_propertyMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_propertyMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap GGS_propertyMap::getter_overriddenMap (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_propertyMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::setter_insertKey (GGS_lstring inLKey,
                                        GGS_AccessControl inArgument0,
                                        GGS_bool inArgument1,
                                        GGS_unifiedTypeMapEntry inArgument2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  const GGS_propertyMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2) ;
  const char * kInsertErrorMessage = "the '%K' property has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::method_searchKey (GGS_lstring inLKey,
                                        GGS_AccessControl & outArgument0,
                                        GGS_bool & outArgument1,
                                        GGS_unifiedTypeMapEntry & outArgument2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      TC_UniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' property is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    outArgument0 = info->mProperty_mAccessControl ;
    outArgument1 = info->mProperty_mIsConstant ;
    outArgument2 = info->mProperty_mPropertyType ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_AccessControl GGS_propertyMap::getter_mAccessControlForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_AccessControl result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mAccessControl ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyMap::getter_mIsConstantForKey (const GGS_string & inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIsConstant ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_propertyMap::getter_mPropertyTypeForKey (const GGS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntry result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mPropertyType ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::setter_setMAccessControlForKey (GGS_AccessControl inValue,
                                                      GGS_string inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_propertyMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mAccessControl = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::setter_setMIsConstantForKey (GGS_bool inValue,
                                                   GGS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_propertyMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIsConstant = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::setter_setMPropertyTypeForKey (GGS_unifiedTypeMapEntry inValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_propertyMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mPropertyType = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_propertyMap_internalDescription (const TC_Array <SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key'") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mAccessControl:") ;
    inArray (i COMMA_HERE)->mProperty_mAccessControl.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIsConstant:") ;
    inArray (i COMMA_HERE)->mProperty_mIsConstant.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mPropertyType:") ;
    inArray (i COMMA_HERE)->mProperty_mPropertyType.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const TC_Array <SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element>> array = sortedInfoArray () ;
    GGS_propertyMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GGS_GenericMapRoot <GGS_propertyMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_propertyMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @propertyMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_propertyMap::DownEnumerator_propertyMap (const GGS_propertyMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element DownEnumerator_propertyMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_propertyMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl DownEnumerator_propertyMap::current_mAccessControl (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAccessControl ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_propertyMap::current_mIsConstant (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsConstant ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_propertyMap::current_mPropertyType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mPropertyType ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @propertyMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_propertyMap::UpEnumerator_propertyMap (const GGS_propertyMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element UpEnumerator_propertyMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_propertyMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl UpEnumerator_propertyMap::current_mAccessControl (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAccessControl ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_propertyMap::current_mIsConstant (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsConstant ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_propertyMap::current_mPropertyType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mPropertyType ;
}


//--------------------------------------------------------------------------------------------------
//     @propertyMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMap ("propertyMap",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap GGS_propertyMap::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_propertyMap result ;
  const GGS_propertyMap * p = (const GGS_propertyMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @classFunctionMap
//--------------------------------------------------------------------------------------------------

#include "GGS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap::GGS_classFunctionMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap::~ GGS_classFunctionMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap::GGS_classFunctionMap (const GGS_classFunctionMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap & GGS_classFunctionMap::operator = (const GGS_classFunctionMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap GGS_classFunctionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_classFunctionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap GGS_classFunctionMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_classFunctionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classFunctionMap::getter_hasKey (const GGS_string & inKey
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classFunctionMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                     const GGS_uint & inLevel
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_classFunctionMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_classFunctionMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_classFunctionMap::getter_locationForKey (const GGS_string & inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_classFunctionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_classFunctionMap::getter_keyList (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_classFunctionMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_classFunctionMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <GGS_GenericMapRoot <GGS_classFunctionMap_2E_element>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap::performInsert (const GGS_classFunctionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_classFunctionMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      existingNode = mSharedRoot->overriddenRoot ()->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_classFunctionMap_2E_element>
GGS_classFunctionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <GGS_GenericMapNode <GGS_classFunctionMap_2E_element>> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_classFunctionMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_classFunctionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <GGS_GenericMapNode <GGS_classFunctionMap_2E_element>>
GGS_classFunctionMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <GGS_GenericMapNode <GGS_classFunctionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_classFunctionMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_classFunctionMap_2E_element>>
GGS_classFunctionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_classFunctionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_classFunctionMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap_2E_element_3F_ GGS_classFunctionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_classFunctionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_classFunctionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_classFunctionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_classFunctionMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mArgumentTypeList = info->mProperty_mArgumentTypeList ;
      element.mProperty_mHasCompilerArgument = info->mProperty_mHasCompilerArgument ;
      element.mProperty_mReturnedType = info->mProperty_mReturnedType ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap GGS_classFunctionMap::class_func_mapWithMapToOverride (const GGS_classFunctionMap & inMapToOverride
                                                                            COMMA_LOCATION_ARGS) {
  GGS_classFunctionMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_classFunctionMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap GGS_classFunctionMap::getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_classFunctionMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap::setter_insertKey (GGS_lstring inLKey,
                                             GGS_functionSignature inArgument0,
                                             GGS_bool inArgument1,
                                             GGS_unifiedTypeMapEntry inArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  const GGS_classFunctionMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2) ;
  const char * kInsertErrorMessage = "the '%K' class function has been already defined" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap::method_searchKey (GGS_lstring inLKey,
                                             GGS_functionSignature & outArgument0,
                                             GGS_bool & outArgument1,
                                             GGS_unifiedTypeMapEntry & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_classFunctionMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      TC_UniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' class function is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    outArgument0 = info->mProperty_mArgumentTypeList ;
    outArgument1 = info->mProperty_mHasCompilerArgument ;
    outArgument2 = info->mProperty_mReturnedType ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap::setter_insertOrReplace (GGS_lstring inLKey,
                                                   GGS_functionSignature inArgument0,
                                                   GGS_bool inArgument1,
                                                   GGS_unifiedTypeMapEntry inArgument2
                                                   COMMA_LOCATION_ARGS) {
  const GGS_classFunctionMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2) ;
  insulate (THERE) ;
  OptionalSharedRef <GGS_GenericMapNode <GGS_classFunctionMap_2E_element>> unusedExistingNode ;
  const bool allowReplacing = true ;
  mSharedRoot->insertOrReplaceInfo (element, allowReplacing, unusedExistingNode COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature GGS_classFunctionMap::getter_mArgumentTypeListForKey (const GGS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_functionSignature result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_classFunctionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mArgumentTypeList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classFunctionMap::getter_mHasCompilerArgumentForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_classFunctionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mHasCompilerArgument ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_classFunctionMap::getter_mReturnedTypeForKey (const GGS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntry result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_classFunctionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mReturnedType ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap::setter_setMArgumentTypeListForKey (GGS_functionSignature inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_classFunctionMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mArgumentTypeList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap::setter_setMHasCompilerArgumentForKey (GGS_bool inValue,
                                                                 GGS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_classFunctionMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mHasCompilerArgument = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap::setter_setMReturnedTypeForKey (GGS_unifiedTypeMapEntry inValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_classFunctionMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mReturnedType = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_classFunctionMap_internalDescription (const TC_Array <SharedGenericPtrWithValueSemantics <GGS_classFunctionMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key'") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mArgumentTypeList:") ;
    inArray (i COMMA_HERE)->mProperty_mArgumentTypeList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mHasCompilerArgument:") ;
    inArray (i COMMA_HERE)->mProperty_mHasCompilerArgument.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mReturnedType:") ;
    inArray (i COMMA_HERE)->mProperty_mReturnedType.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_classFunctionMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const TC_Array <SharedGenericPtrWithValueSemantics <GGS_classFunctionMap_2E_element>> array = sortedInfoArray () ;
    GGS_classFunctionMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GGS_GenericMapRoot <GGS_classFunctionMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_classFunctionMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @classFunctionMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_classFunctionMap::DownEnumerator_classFunctionMap (const GGS_classFunctionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap_2E_element DownEnumerator_classFunctionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_classFunctionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature DownEnumerator_classFunctionMap::current_mArgumentTypeList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mArgumentTypeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_classFunctionMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHasCompilerArgument ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_classFunctionMap::current_mReturnedType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mReturnedType ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @classFunctionMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_classFunctionMap::UpEnumerator_classFunctionMap (const GGS_classFunctionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap_2E_element UpEnumerator_classFunctionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_classFunctionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature UpEnumerator_classFunctionMap::current_mArgumentTypeList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mArgumentTypeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_classFunctionMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHasCompilerArgument ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_classFunctionMap::current_mReturnedType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mReturnedType ;
}


//--------------------------------------------------------------------------------------------------
//     @classFunctionMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classFunctionMap ("classFunctionMap",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_classFunctionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classFunctionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classFunctionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classFunctionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFunctionMap GGS_classFunctionMap::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_classFunctionMap result ;
  const GGS_classFunctionMap * p = (const GGS_classFunctionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classFunctionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classFunctionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @getterMap
//--------------------------------------------------------------------------------------------------

#include "GGS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_getterMap::GGS_getterMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap::~ GGS_getterMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap::GGS_getterMap (const GGS_getterMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap & GGS_getterMap::operator = (const GGS_getterMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap GGS_getterMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_getterMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap GGS_getterMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_getterMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_getterMap::getter_hasKey (const GGS_string & inKey
                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_getterMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                              const GGS_uint & inLevel
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_getterMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_getterMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_getterMap::getter_locationForKey (const GGS_string & inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_getterMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_getterMap::getter_keyList (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_getterMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_getterMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <GGS_GenericMapRoot <GGS_getterMap_2E_element>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap::performInsert (const GGS_getterMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_getterMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      existingNode = mSharedRoot->overriddenRoot ()->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_getterMap_2E_element>
GGS_getterMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <GGS_GenericMapNode <GGS_getterMap_2E_element>> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_getterMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_getterMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <GGS_GenericMapNode <GGS_getterMap_2E_element>>
GGS_getterMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <GGS_GenericMapNode <GGS_getterMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_getterMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_getterMap_2E_element>>
GGS_getterMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_getterMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_getterMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap_2E_element_3F_ GGS_getterMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_getterMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_getterMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_getterMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_getterMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mKind = info->mProperty_mKind ;
      element.mProperty_mArgumentTypeList = info->mProperty_mArgumentTypeList ;
      element.mProperty_mDeclarationLocation = info->mProperty_mDeclarationLocation ;
      element.mProperty_mHasCompilerArgument = info->mProperty_mHasCompilerArgument ;
      element.mProperty_mReturnedType = info->mProperty_mReturnedType ;
      element.mProperty_mQualifier = info->mProperty_mQualifier ;
      element.mProperty_mGetterNameThatObsoletesInvokationName = info->mProperty_mGetterNameThatObsoletesInvokationName ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap GGS_getterMap::class_func_mapWithMapToOverride (const GGS_getterMap & inMapToOverride
                                                              COMMA_LOCATION_ARGS) {
  GGS_getterMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_getterMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap GGS_getterMap::getter_overriddenMap (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_getterMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap::setter_insertKey (GGS_lstring inLKey,
                                      GGS_methodKind inArgument0,
                                      GGS_functionSignature inArgument1,
                                      GGS_location inArgument2,
                                      GGS_bool inArgument3,
                                      GGS_unifiedTypeMapEntry inArgument4,
                                      GGS_methodQualifier inArgument5,
                                      GGS_string inArgument6,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  const GGS_getterMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6) ;
  const char * kInsertErrorMessage = "the '%K' getter is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap::method_searchKey (GGS_lstring inLKey,
                                      GGS_methodKind & outArgument0,
                                      GGS_functionSignature & outArgument1,
                                      GGS_location & outArgument2,
                                      GGS_bool & outArgument3,
                                      GGS_unifiedTypeMapEntry & outArgument4,
                                      GGS_methodQualifier & outArgument5,
                                      GGS_string & outArgument6,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_getterMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      TC_UniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' getter is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
  }else{
    outArgument0 = info->mProperty_mKind ;
    outArgument1 = info->mProperty_mArgumentTypeList ;
    outArgument2 = info->mProperty_mDeclarationLocation ;
    outArgument3 = info->mProperty_mHasCompilerArgument ;
    outArgument4 = info->mProperty_mReturnedType ;
    outArgument5 = info->mProperty_mQualifier ;
    outArgument6 = info->mProperty_mGetterNameThatObsoletesInvokationName ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_getterMap::setter_insertOrReplace (GGS_lstring inLKey,
                                            GGS_methodKind inArgument0,
                                            GGS_functionSignature inArgument1,
                                            GGS_location inArgument2,
                                            GGS_bool inArgument3,
                                            GGS_unifiedTypeMapEntry inArgument4,
                                            GGS_methodQualifier inArgument5,
                                            GGS_string inArgument6
                                            COMMA_LOCATION_ARGS) {
  const GGS_getterMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6) ;
  insulate (THERE) ;
  OptionalSharedRef <GGS_GenericMapNode <GGS_getterMap_2E_element>> unusedExistingNode ;
  const bool allowReplacing = true ;
  mSharedRoot->insertOrReplaceInfo (element, allowReplacing, unusedExistingNode COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodKind GGS_getterMap::getter_mKindForKey (const GGS_string & inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_methodKind result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_getterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mKind ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_functionSignature GGS_getterMap::getter_mArgumentTypeListForKey (const GGS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_functionSignature result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_getterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mArgumentTypeList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_getterMap::getter_mDeclarationLocationForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_getterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mDeclarationLocation ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_getterMap::getter_mHasCompilerArgumentForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_getterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mHasCompilerArgument ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_getterMap::getter_mReturnedTypeForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntry result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_getterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mReturnedType ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_methodQualifier GGS_getterMap::getter_mQualifierForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_methodQualifier result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_getterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mQualifier ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_getterMap::getter_mGetterNameThatObsoletesInvokationNameForKey (const GGS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_getterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mGetterNameThatObsoletesInvokationName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_getterMap::setter_setMKindForKey (GGS_methodKind inValue,
                                           GGS_string inKey,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_getterMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mKind = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_getterMap::setter_setMArgumentTypeListForKey (GGS_functionSignature inValue,
                                                       GGS_string inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_getterMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mArgumentTypeList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_getterMap::setter_setMDeclarationLocationForKey (GGS_location inValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_getterMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mDeclarationLocation = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_getterMap::setter_setMHasCompilerArgumentForKey (GGS_bool inValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_getterMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mHasCompilerArgument = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_getterMap::setter_setMReturnedTypeForKey (GGS_unifiedTypeMapEntry inValue,
                                                   GGS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_getterMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mReturnedType = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_getterMap::setter_setMQualifierForKey (GGS_methodQualifier inValue,
                                                GGS_string inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_getterMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mQualifier = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_getterMap::setter_setMGetterNameThatObsoletesInvokationNameForKey (GGS_string inValue,
                                                                            GGS_string inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_getterMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mGetterNameThatObsoletesInvokationName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_getterMap_internalDescription (const TC_Array <SharedGenericPtrWithValueSemantics <GGS_getterMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key'") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mKind:") ;
    inArray (i COMMA_HERE)->mProperty_mKind.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mArgumentTypeList:") ;
    inArray (i COMMA_HERE)->mProperty_mArgumentTypeList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mDeclarationLocation:") ;
    inArray (i COMMA_HERE)->mProperty_mDeclarationLocation.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mHasCompilerArgument:") ;
    inArray (i COMMA_HERE)->mProperty_mHasCompilerArgument.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mReturnedType:") ;
    inArray (i COMMA_HERE)->mProperty_mReturnedType.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mQualifier:") ;
    inArray (i COMMA_HERE)->mProperty_mQualifier.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mGetterNameThatObsoletesInvokationName:") ;
    inArray (i COMMA_HERE)->mProperty_mGetterNameThatObsoletesInvokationName.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_getterMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const TC_Array <SharedGenericPtrWithValueSemantics <GGS_getterMap_2E_element>> array = sortedInfoArray () ;
    GGS_getterMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GGS_GenericMapRoot <GGS_getterMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_getterMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @getterMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_getterMap::DownEnumerator_getterMap (const GGS_getterMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap_2E_element DownEnumerator_getterMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_getterMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodKind DownEnumerator_getterMap::current_mKind (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature DownEnumerator_getterMap::current_mArgumentTypeList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mArgumentTypeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_getterMap::current_mDeclarationLocation (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDeclarationLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_getterMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHasCompilerArgument ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_getterMap::current_mReturnedType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mReturnedType ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier DownEnumerator_getterMap::current_mQualifier (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mQualifier ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_getterMap::current_mGetterNameThatObsoletesInvokationName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mGetterNameThatObsoletesInvokationName ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @getterMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_getterMap::UpEnumerator_getterMap (const GGS_getterMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap_2E_element UpEnumerator_getterMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_getterMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodKind UpEnumerator_getterMap::current_mKind (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature UpEnumerator_getterMap::current_mArgumentTypeList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mArgumentTypeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_getterMap::current_mDeclarationLocation (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDeclarationLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_getterMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHasCompilerArgument ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_getterMap::current_mReturnedType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mReturnedType ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier UpEnumerator_getterMap::current_mQualifier (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mQualifier ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_getterMap::current_mGetterNameThatObsoletesInvokationName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mGetterNameThatObsoletesInvokationName ;
}


//--------------------------------------------------------------------------------------------------
//     @getterMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_getterMap ("getterMap",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_getterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_getterMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getterMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterMap GGS_getterMap::extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GGS_getterMap result ;
  const GGS_getterMap * p = (const GGS_getterMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @setterMap
//--------------------------------------------------------------------------------------------------

#include "GGS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_setterMap::GGS_setterMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap::~ GGS_setterMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap::GGS_setterMap (const GGS_setterMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap & GGS_setterMap::operator = (const GGS_setterMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap GGS_setterMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_setterMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap GGS_setterMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_setterMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_setterMap::getter_hasKey (const GGS_string & inKey
                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_setterMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                              const GGS_uint & inLevel
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_setterMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_setterMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_setterMap::getter_locationForKey (const GGS_string & inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_setterMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_setterMap::getter_keyList (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_setterMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_setterMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_setterMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_setterMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_setterMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <GGS_GenericMapRoot <GGS_setterMap_2E_element>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_setterMap::performInsert (const GGS_setterMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_setterMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      existingNode = mSharedRoot->overriddenRoot ()->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_setterMap_2E_element>
GGS_setterMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <GGS_GenericMapNode <GGS_setterMap_2E_element>> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_setterMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_setterMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <GGS_GenericMapNode <GGS_setterMap_2E_element>>
GGS_setterMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <GGS_GenericMapNode <GGS_setterMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_setterMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_setterMap_2E_element>>
GGS_setterMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_setterMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_setterMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_setterMap::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap_2E_element_3F_ GGS_setterMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_setterMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_setterMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_setterMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_setterMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mKind = info->mProperty_mKind ;
      element.mProperty_mParameterList = info->mProperty_mParameterList ;
      element.mProperty_mHasCompilerArgument = info->mProperty_mHasCompilerArgument ;
      element.mProperty_mQualifier = info->mProperty_mQualifier ;
      element.mProperty_mErrorMessage = info->mProperty_mErrorMessage ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap GGS_setterMap::class_func_mapWithMapToOverride (const GGS_setterMap & inMapToOverride
                                                              COMMA_LOCATION_ARGS) {
  GGS_setterMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_setterMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap GGS_setterMap::getter_overriddenMap (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_setterMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_setterMap::setter_insertKey (GGS_lstring inLKey,
                                      GGS_methodKind inArgument0,
                                      GGS_formalParameterSignature inArgument1,
                                      GGS_bool inArgument2,
                                      GGS_methodQualifier inArgument3,
                                      GGS_string inArgument4,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  const GGS_setterMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4) ;
  const char * kInsertErrorMessage = "the '%K' setter is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_setterMap::method_searchKey (GGS_lstring inLKey,
                                      GGS_methodKind & outArgument0,
                                      GGS_formalParameterSignature & outArgument1,
                                      GGS_bool & outArgument2,
                                      GGS_methodQualifier & outArgument3,
                                      GGS_string & outArgument4,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_setterMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      TC_UniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' setter is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    outArgument0 = info->mProperty_mKind ;
    outArgument1 = info->mProperty_mParameterList ;
    outArgument2 = info->mProperty_mHasCompilerArgument ;
    outArgument3 = info->mProperty_mQualifier ;
    outArgument4 = info->mProperty_mErrorMessage ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_setterMap::setter_insertOrReplace (GGS_lstring inLKey,
                                            GGS_methodKind inArgument0,
                                            GGS_formalParameterSignature inArgument1,
                                            GGS_bool inArgument2,
                                            GGS_methodQualifier inArgument3,
                                            GGS_string inArgument4
                                            COMMA_LOCATION_ARGS) {
  const GGS_setterMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4) ;
  insulate (THERE) ;
  OptionalSharedRef <GGS_GenericMapNode <GGS_setterMap_2E_element>> unusedExistingNode ;
  const bool allowReplacing = true ;
  mSharedRoot->insertOrReplaceInfo (element, allowReplacing, unusedExistingNode COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodKind GGS_setterMap::getter_mKindForKey (const GGS_string & inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_methodKind result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_setterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mKind ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_setterMap::getter_mParameterListForKey (const GGS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_formalParameterSignature result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_setterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mParameterList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_setterMap::getter_mHasCompilerArgumentForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_setterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mHasCompilerArgument ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_methodQualifier GGS_setterMap::getter_mQualifierForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_methodQualifier result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_setterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mQualifier ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_setterMap::getter_mErrorMessageForKey (const GGS_string & inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_setterMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mErrorMessage ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_setterMap::setter_setMKindForKey (GGS_methodKind inValue,
                                           GGS_string inKey,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_setterMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mKind = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_setterMap::setter_setMParameterListForKey (GGS_formalParameterSignature inValue,
                                                    GGS_string inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_setterMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mParameterList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_setterMap::setter_setMHasCompilerArgumentForKey (GGS_bool inValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_setterMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mHasCompilerArgument = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_setterMap::setter_setMQualifierForKey (GGS_methodQualifier inValue,
                                                GGS_string inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_setterMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mQualifier = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_setterMap::setter_setMErrorMessageForKey (GGS_string inValue,
                                                   GGS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_setterMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mErrorMessage = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_setterMap_internalDescription (const TC_Array <SharedGenericPtrWithValueSemantics <GGS_setterMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key'") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mKind:") ;
    inArray (i COMMA_HERE)->mProperty_mKind.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mParameterList:") ;
    inArray (i COMMA_HERE)->mProperty_mParameterList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mHasCompilerArgument:") ;
    inArray (i COMMA_HERE)->mProperty_mHasCompilerArgument.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mQualifier:") ;
    inArray (i COMMA_HERE)->mProperty_mQualifier.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mErrorMessage:") ;
    inArray (i COMMA_HERE)->mProperty_mErrorMessage.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_setterMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const TC_Array <SharedGenericPtrWithValueSemantics <GGS_setterMap_2E_element>> array = sortedInfoArray () ;
    GGS_setterMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GGS_GenericMapRoot <GGS_setterMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_setterMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @setterMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_setterMap::DownEnumerator_setterMap (const GGS_setterMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap_2E_element DownEnumerator_setterMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_setterMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodKind DownEnumerator_setterMap::current_mKind (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature DownEnumerator_setterMap::current_mParameterList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_setterMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHasCompilerArgument ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier DownEnumerator_setterMap::current_mQualifier (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mQualifier ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_setterMap::current_mErrorMessage (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mErrorMessage ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @setterMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_setterMap::UpEnumerator_setterMap (const GGS_setterMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap_2E_element UpEnumerator_setterMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_setterMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodKind UpEnumerator_setterMap::current_mKind (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature UpEnumerator_setterMap::current_mParameterList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_setterMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHasCompilerArgument ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier UpEnumerator_setterMap::current_mQualifier (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mQualifier ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_setterMap::current_mErrorMessage (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mErrorMessage ;
}


//--------------------------------------------------------------------------------------------------
//     @setterMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterMap ("setterMap",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_setterMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_setterMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_setterMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterMap GGS_setterMap::extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GGS_setterMap result ;
  const GGS_setterMap * p = (const GGS_setterMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_setterMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setterMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @instanceMethodMap
//--------------------------------------------------------------------------------------------------

#include "GGS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap::GGS_instanceMethodMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap::~ GGS_instanceMethodMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap::GGS_instanceMethodMap (const GGS_instanceMethodMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap & GGS_instanceMethodMap::operator = (const GGS_instanceMethodMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap GGS_instanceMethodMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_instanceMethodMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap GGS_instanceMethodMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_instanceMethodMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_instanceMethodMap::getter_hasKey (const GGS_string & inKey
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_instanceMethodMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                      const GGS_uint & inLevel
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_instanceMethodMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_instanceMethodMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_instanceMethodMap::getter_locationForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_instanceMethodMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_instanceMethodMap::getter_keyList (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_instanceMethodMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_instanceMethodMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <GGS_GenericMapRoot <GGS_instanceMethodMap_2E_element>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap::performInsert (const GGS_instanceMethodMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_instanceMethodMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      existingNode = mSharedRoot->overriddenRoot ()->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_instanceMethodMap_2E_element>
GGS_instanceMethodMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <GGS_GenericMapNode <GGS_instanceMethodMap_2E_element>> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_instanceMethodMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_instanceMethodMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <GGS_GenericMapNode <GGS_instanceMethodMap_2E_element>>
GGS_instanceMethodMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <GGS_GenericMapNode <GGS_instanceMethodMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_instanceMethodMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_instanceMethodMap_2E_element>>
GGS_instanceMethodMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_instanceMethodMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_instanceMethodMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap_2E_element_3F_ GGS_instanceMethodMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_instanceMethodMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_instanceMethodMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_instanceMethodMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_instanceMethodMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mKind = info->mProperty_mKind ;
      element.mProperty_mParameterList = info->mProperty_mParameterList ;
      element.mProperty_mDeclarationLocation = info->mProperty_mDeclarationLocation ;
      element.mProperty_mHasCompilerArgument = info->mProperty_mHasCompilerArgument ;
      element.mProperty_mQualifier = info->mProperty_mQualifier ;
      element.mProperty_mErrorMessage = info->mProperty_mErrorMessage ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap GGS_instanceMethodMap::class_func_mapWithMapToOverride (const GGS_instanceMethodMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GGS_instanceMethodMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_instanceMethodMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap GGS_instanceMethodMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_instanceMethodMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap::setter_insertKey (GGS_lstring inLKey,
                                              GGS_methodKind inArgument0,
                                              GGS_formalParameterSignature inArgument1,
                                              GGS_location inArgument2,
                                              GGS_bool inArgument3,
                                              GGS_methodQualifier inArgument4,
                                              GGS_string inArgument5,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const GGS_instanceMethodMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5) ;
  const char * kInsertErrorMessage = "the '%K' instance method is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap::method_searchKey (GGS_lstring inLKey,
                                              GGS_methodKind & outArgument0,
                                              GGS_formalParameterSignature & outArgument1,
                                              GGS_location & outArgument2,
                                              GGS_bool & outArgument3,
                                              GGS_methodQualifier & outArgument4,
                                              GGS_string & outArgument5,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_instanceMethodMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      TC_UniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' instance method is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
  }else{
    outArgument0 = info->mProperty_mKind ;
    outArgument1 = info->mProperty_mParameterList ;
    outArgument2 = info->mProperty_mDeclarationLocation ;
    outArgument3 = info->mProperty_mHasCompilerArgument ;
    outArgument4 = info->mProperty_mQualifier ;
    outArgument5 = info->mProperty_mErrorMessage ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap::method_searchInheritedKey (GGS_lstring inLKey,
                                                       GGS_methodKind & outArgument0,
                                                       GGS_formalParameterSignature & outArgument1,
                                                       GGS_location & outArgument2,
                                                       GGS_bool & outArgument3,
                                                       GGS_methodQualifier & outArgument4,
                                                       GGS_string & outArgument5,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_instanceMethodMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      TC_UniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "as the '%K' method is tagged as 'override', it should be declared in the super class" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
  }else{
    outArgument0 = info->mProperty_mKind ;
    outArgument1 = info->mProperty_mParameterList ;
    outArgument2 = info->mProperty_mDeclarationLocation ;
    outArgument3 = info->mProperty_mHasCompilerArgument ;
    outArgument4 = info->mProperty_mQualifier ;
    outArgument5 = info->mProperty_mErrorMessage ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_methodKind GGS_instanceMethodMap::getter_mKindForKey (const GGS_string & inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_methodKind result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_instanceMethodMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mKind ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_instanceMethodMap::getter_mParameterListForKey (const GGS_string & inKey,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_formalParameterSignature result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_instanceMethodMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mParameterList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_instanceMethodMap::getter_mDeclarationLocationForKey (const GGS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_instanceMethodMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mDeclarationLocation ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_instanceMethodMap::getter_mHasCompilerArgumentForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_instanceMethodMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mHasCompilerArgument ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_methodQualifier GGS_instanceMethodMap::getter_mQualifierForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_methodQualifier result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_instanceMethodMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mQualifier ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_instanceMethodMap::getter_mErrorMessageForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_instanceMethodMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mErrorMessage ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap::setter_setMKindForKey (GGS_methodKind inValue,
                                                   GGS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_instanceMethodMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mKind = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap::setter_setMParameterListForKey (GGS_formalParameterSignature inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_instanceMethodMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mParameterList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap::setter_setMDeclarationLocationForKey (GGS_location inValue,
                                                                  GGS_string inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_instanceMethodMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mDeclarationLocation = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap::setter_setMHasCompilerArgumentForKey (GGS_bool inValue,
                                                                  GGS_string inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_instanceMethodMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mHasCompilerArgument = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap::setter_setMQualifierForKey (GGS_methodQualifier inValue,
                                                        GGS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_instanceMethodMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mQualifier = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap::setter_setMErrorMessageForKey (GGS_string inValue,
                                                           GGS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_instanceMethodMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mErrorMessage = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_instanceMethodMap_internalDescription (const TC_Array <SharedGenericPtrWithValueSemantics <GGS_instanceMethodMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key'") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mKind:") ;
    inArray (i COMMA_HERE)->mProperty_mKind.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mParameterList:") ;
    inArray (i COMMA_HERE)->mProperty_mParameterList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mDeclarationLocation:") ;
    inArray (i COMMA_HERE)->mProperty_mDeclarationLocation.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mHasCompilerArgument:") ;
    inArray (i COMMA_HERE)->mProperty_mHasCompilerArgument.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mQualifier:") ;
    inArray (i COMMA_HERE)->mProperty_mQualifier.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mErrorMessage:") ;
    inArray (i COMMA_HERE)->mProperty_mErrorMessage.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_instanceMethodMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const TC_Array <SharedGenericPtrWithValueSemantics <GGS_instanceMethodMap_2E_element>> array = sortedInfoArray () ;
    GGS_instanceMethodMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GGS_GenericMapRoot <GGS_instanceMethodMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_instanceMethodMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @instanceMethodMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_instanceMethodMap::DownEnumerator_instanceMethodMap (const GGS_instanceMethodMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap_2E_element DownEnumerator_instanceMethodMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_instanceMethodMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodKind DownEnumerator_instanceMethodMap::current_mKind (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature DownEnumerator_instanceMethodMap::current_mParameterList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_instanceMethodMap::current_mDeclarationLocation (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDeclarationLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_instanceMethodMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHasCompilerArgument ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier DownEnumerator_instanceMethodMap::current_mQualifier (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mQualifier ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_instanceMethodMap::current_mErrorMessage (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mErrorMessage ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @instanceMethodMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_instanceMethodMap::UpEnumerator_instanceMethodMap (const GGS_instanceMethodMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap_2E_element UpEnumerator_instanceMethodMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_instanceMethodMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodKind UpEnumerator_instanceMethodMap::current_mKind (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature UpEnumerator_instanceMethodMap::current_mParameterList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_instanceMethodMap::current_mDeclarationLocation (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDeclarationLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_instanceMethodMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHasCompilerArgument ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier UpEnumerator_instanceMethodMap::current_mQualifier (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mQualifier ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_instanceMethodMap::current_mErrorMessage (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mErrorMessage ;
}


//--------------------------------------------------------------------------------------------------
//     @instanceMethodMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_instanceMethodMap ("instanceMethodMap",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_instanceMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_instanceMethodMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_instanceMethodMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_instanceMethodMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_instanceMethodMap GGS_instanceMethodMap::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_instanceMethodMap result ;
  const GGS_instanceMethodMap * p = (const GGS_instanceMethodMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_instanceMethodMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("instanceMethodMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @classMethodMap
//--------------------------------------------------------------------------------------------------

#include "GGS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap::GGS_classMethodMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap::~ GGS_classMethodMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap::GGS_classMethodMap (const GGS_classMethodMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap & GGS_classMethodMap::operator = (const GGS_classMethodMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap GGS_classMethodMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_classMethodMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap GGS_classMethodMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_classMethodMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classMethodMap::getter_hasKey (const GGS_string & inKey
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classMethodMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                   const GGS_uint & inLevel
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_classMethodMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_classMethodMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_classMethodMap::getter_locationForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_classMethodMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_classMethodMap::getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_classMethodMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMethodMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMethodMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_classMethodMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMethodMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <GGS_GenericMapRoot <GGS_classMethodMap_2E_element>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_classMethodMap::performInsert (const GGS_classMethodMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_classMethodMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      existingNode = mSharedRoot->overriddenRoot ()->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_classMethodMap_2E_element>
GGS_classMethodMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <GGS_GenericMapNode <GGS_classMethodMap_2E_element>> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_classMethodMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_classMethodMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <GGS_GenericMapNode <GGS_classMethodMap_2E_element>>
GGS_classMethodMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <GGS_GenericMapNode <GGS_classMethodMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_classMethodMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_classMethodMap_2E_element>>
GGS_classMethodMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_classMethodMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_classMethodMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMethodMap::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap_2E_element_3F_ GGS_classMethodMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_classMethodMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_classMethodMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_classMethodMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_classMethodMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mParameterList = info->mProperty_mParameterList ;
      element.mProperty_mHasCompilerArgument = info->mProperty_mHasCompilerArgument ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap GGS_classMethodMap::class_func_mapWithMapToOverride (const GGS_classMethodMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_classMethodMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_classMethodMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap GGS_classMethodMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_classMethodMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMethodMap::setter_insertKey (GGS_lstring inLKey,
                                           GGS_formalParameterSignature inArgument0,
                                           GGS_bool inArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  const GGS_classMethodMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' type proc is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMethodMap::method_searchKey (GGS_lstring inLKey,
                                           GGS_formalParameterSignature & outArgument0,
                                           GGS_bool & outArgument1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_classMethodMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      TC_UniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' type proc is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mParameterList ;
    outArgument1 = info->mProperty_mHasCompilerArgument ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_classMethodMap::setter_insertOrReplace (GGS_lstring inLKey,
                                                 GGS_formalParameterSignature inArgument0,
                                                 GGS_bool inArgument1
                                                 COMMA_LOCATION_ARGS) {
  const GGS_classMethodMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  insulate (THERE) ;
  OptionalSharedRef <GGS_GenericMapNode <GGS_classMethodMap_2E_element>> unusedExistingNode ;
  const bool allowReplacing = true ;
  mSharedRoot->insertOrReplaceInfo (element, allowReplacing, unusedExistingNode COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_classMethodMap::getter_mParameterListForKey (const GGS_string & inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_formalParameterSignature result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_classMethodMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mParameterList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classMethodMap::getter_mHasCompilerArgumentForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_classMethodMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mHasCompilerArgument ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_classMethodMap::setter_setMParameterListForKey (GGS_formalParameterSignature inValue,
                                                         GGS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_classMethodMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mParameterList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_classMethodMap::setter_setMHasCompilerArgumentForKey (GGS_bool inValue,
                                                               GGS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_classMethodMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mHasCompilerArgument = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_classMethodMap_internalDescription (const TC_Array <SharedGenericPtrWithValueSemantics <GGS_classMethodMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key'") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mParameterList:") ;
    inArray (i COMMA_HERE)->mProperty_mParameterList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mHasCompilerArgument:") ;
    inArray (i COMMA_HERE)->mProperty_mHasCompilerArgument.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_classMethodMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const TC_Array <SharedGenericPtrWithValueSemantics <GGS_classMethodMap_2E_element>> array = sortedInfoArray () ;
    GGS_classMethodMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GGS_GenericMapRoot <GGS_classMethodMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_classMethodMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @classMethodMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_classMethodMap::DownEnumerator_classMethodMap (const GGS_classMethodMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap_2E_element DownEnumerator_classMethodMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_classMethodMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature DownEnumerator_classMethodMap::current_mParameterList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_classMethodMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHasCompilerArgument ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @classMethodMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_classMethodMap::UpEnumerator_classMethodMap (const GGS_classMethodMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap_2E_element UpEnumerator_classMethodMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_classMethodMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature UpEnumerator_classMethodMap::current_mParameterList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_classMethodMap::current_mHasCompilerArgument (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHasCompilerArgument ;
}


//--------------------------------------------------------------------------------------------------
//     @classMethodMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classMethodMap ("classMethodMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_classMethodMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classMethodMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classMethodMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classMethodMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMethodMap GGS_classMethodMap::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_classMethodMap result ;
  const GGS_classMethodMap * p = (const GGS_classMethodMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classMethodMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classMethodMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @subscriptMap
//--------------------------------------------------------------------------------------------------

#include "GGS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap::GGS_subscriptMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap::~ GGS_subscriptMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap::GGS_subscriptMap (const GGS_subscriptMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap & GGS_subscriptMap::operator = (const GGS_subscriptMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap GGS_subscriptMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_subscriptMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap GGS_subscriptMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_subscriptMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_subscriptMap::getter_hasKey (const GGS_string & inKey
                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_subscriptMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                 const GGS_uint & inLevel
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_subscriptMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_subscriptMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_subscriptMap::getter_locationForKey (const GGS_string & inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_subscriptMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_subscriptMap::getter_keyList (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_subscriptMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_subscriptMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <GGS_GenericMapRoot <GGS_subscriptMap_2E_element>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap::performInsert (const GGS_subscriptMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_subscriptMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      existingNode = mSharedRoot->overriddenRoot ()->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_subscriptMap_2E_element>
GGS_subscriptMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <GGS_GenericMapNode <GGS_subscriptMap_2E_element>> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_subscriptMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_subscriptMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <GGS_GenericMapNode <GGS_subscriptMap_2E_element>>
GGS_subscriptMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <GGS_GenericMapNode <GGS_subscriptMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_subscriptMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_subscriptMap_2E_element>>
GGS_subscriptMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_subscriptMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_subscriptMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element_3F_ GGS_subscriptMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_subscriptMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_subscriptMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_subscriptMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_subscriptMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_argumentTypeList = info->mProperty_argumentTypeList ;
      element.mProperty_valueType = info->mProperty_valueType ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap GGS_subscriptMap::class_func_mapWithMapToOverride (const GGS_subscriptMap & inMapToOverride
                                                                    COMMA_LOCATION_ARGS) {
  GGS_subscriptMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_subscriptMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap GGS_subscriptMap::getter_overriddenMap (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_subscriptMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap::setter_insertKey (GGS_lstring inLKey,
                                         GGS_functionSignature inArgument0,
                                         GGS_unifiedTypeMapEntry inArgument1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  const GGS_subscriptMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' subscript has been already defined" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap::method_searchKey (GGS_lstring inLKey,
                                         GGS_functionSignature & outArgument0,
                                         GGS_unifiedTypeMapEntry & outArgument1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_subscriptMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      TC_UniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' subscript is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_argumentTypeList ;
    outArgument1 = info->mProperty_valueType ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_functionSignature GGS_subscriptMap::getter_argumentTypeListForKey (const GGS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_functionSignature result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_subscriptMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_argumentTypeList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_subscriptMap::getter_valueTypeForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntry result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_subscriptMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_valueType ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap::setter_setArgumentTypeListForKey (GGS_functionSignature inValue,
                                                         GGS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_subscriptMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_argumentTypeList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap::setter_setValueTypeForKey (GGS_unifiedTypeMapEntry inValue,
                                                  GGS_string inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_subscriptMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_valueType = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_subscriptMap_internalDescription (const TC_Array <SharedGenericPtrWithValueSemantics <GGS_subscriptMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key'") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("argumentTypeList:") ;
    inArray (i COMMA_HERE)->mProperty_argumentTypeList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("valueType:") ;
    inArray (i COMMA_HERE)->mProperty_valueType.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const TC_Array <SharedGenericPtrWithValueSemantics <GGS_subscriptMap_2E_element>> array = sortedInfoArray () ;
    GGS_subscriptMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GGS_GenericMapRoot <GGS_subscriptMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_subscriptMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @subscriptMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_subscriptMap::DownEnumerator_subscriptMap (const GGS_subscriptMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element DownEnumerator_subscriptMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_subscriptMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature DownEnumerator_subscriptMap::current_argumentTypeList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_argumentTypeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_subscriptMap::current_valueType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_valueType ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @subscriptMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_subscriptMap::UpEnumerator_subscriptMap (const GGS_subscriptMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element UpEnumerator_subscriptMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_subscriptMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature UpEnumerator_subscriptMap::current_argumentTypeList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_argumentTypeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_subscriptMap::current_valueType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_valueType ;
}


//--------------------------------------------------------------------------------------------------
//     @subscriptMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_subscriptMap ("subscriptMap",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_subscriptMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subscriptMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_subscriptMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_subscriptMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap GGS_subscriptMap::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_subscriptMap result ;
  const GGS_subscriptMap * p = (const GGS_subscriptMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_subscriptMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subscriptMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@enumerationDescriptorList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_enumerationDescriptorList : public cCollectionElement {
  public: GGS_enumerationDescriptorList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_enumerationDescriptorList (const GGS_unifiedTypeMapEntry & in_mEnumeratedType,
                                                        const GGS_string & in_mEnumerationName
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_enumerationDescriptorList (const GGS_enumerationDescriptorList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_enumerationDescriptorList::cCollectionElement_enumerationDescriptorList (const GGS_unifiedTypeMapEntry & in_mEnumeratedType,
                                                                                            const GGS_string & in_mEnumerationName
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEnumeratedType, in_mEnumerationName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_enumerationDescriptorList::cCollectionElement_enumerationDescriptorList (const GGS_enumerationDescriptorList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEnumeratedType, inElement.mProperty_mEnumerationName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_enumerationDescriptorList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_enumerationDescriptorList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_enumerationDescriptorList (mObject.mProperty_mEnumeratedType, mObject.mProperty_mEnumerationName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_enumerationDescriptorList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEnumeratedType" ":") ;
  mObject.mProperty_mEnumeratedType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEnumerationName" ":") ;
  mObject.mProperty_mEnumerationName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptorList::GGS_enumerationDescriptorList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptorList::GGS_enumerationDescriptorList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptorList GGS_enumerationDescriptorList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_enumerationDescriptorList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptorList GGS_enumerationDescriptorList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_enumerationDescriptorList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationDescriptorList::plusPlusAssignOperation (const GGS_enumerationDescriptorList_2E_element & inValue
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_enumerationDescriptorList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptorList GGS_enumerationDescriptorList::class_func_listWithValue (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                                       const GGS_string & inOperand1
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_enumerationDescriptorList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_enumerationDescriptorList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_enumerationDescriptorList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationDescriptorList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GGS_unifiedTypeMapEntry & in_mEnumeratedType,
                                                               const GGS_string & in_mEnumerationName
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_enumerationDescriptorList * p = nullptr ;
  macroMyNew (p, cCollectionElement_enumerationDescriptorList (in_mEnumeratedType,
                                                               in_mEnumerationName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationDescriptorList::addAssignOperation (const GGS_unifiedTypeMapEntry & inOperand0,
                                                        const GGS_string & inOperand1
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_enumerationDescriptorList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationDescriptorList::setter_append (const GGS_unifiedTypeMapEntry inOperand0,
                                                   const GGS_string inOperand1,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_enumerationDescriptorList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationDescriptorList::setter_insertAtIndex (const GGS_unifiedTypeMapEntry inOperand0,
                                                          const GGS_string inOperand1,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_enumerationDescriptorList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationDescriptorList::setter_removeAtIndex (GGS_unifiedTypeMapEntry & outOperand0,
                                                          GGS_string & outOperand1,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
      outOperand0 = p->mObject.mProperty_mEnumeratedType ;
      outOperand1 = p->mObject.mProperty_mEnumerationName ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationDescriptorList::setter_popFirst (GGS_unifiedTypeMapEntry & outOperand0,
                                                     GGS_string & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mEnumeratedType ;
    outOperand1 = p->mObject.mProperty_mEnumerationName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationDescriptorList::setter_popLast (GGS_unifiedTypeMapEntry & outOperand0,
                                                    GGS_string & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mEnumeratedType ;
    outOperand1 = p->mObject.mProperty_mEnumerationName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationDescriptorList::method_first (GGS_unifiedTypeMapEntry & outOperand0,
                                                  GGS_string & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mEnumeratedType ;
    outOperand1 = p->mObject.mProperty_mEnumerationName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationDescriptorList::method_last (GGS_unifiedTypeMapEntry & outOperand0,
                                                 GGS_string & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mEnumeratedType ;
    outOperand1 = p->mObject.mProperty_mEnumerationName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptorList GGS_enumerationDescriptorList::add_operation (const GGS_enumerationDescriptorList & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_enumerationDescriptorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptorList GGS_enumerationDescriptorList::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_enumerationDescriptorList result = GGS_enumerationDescriptorList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptorList GGS_enumerationDescriptorList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_enumerationDescriptorList result = GGS_enumerationDescriptorList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptorList GGS_enumerationDescriptorList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_enumerationDescriptorList result = GGS_enumerationDescriptorList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationDescriptorList::plusAssignOperation (const GGS_enumerationDescriptorList inOperand,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationDescriptorList::setter_setMEnumeratedTypeAtIndex (GGS_unifiedTypeMapEntry inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEnumeratedType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_enumerationDescriptorList::getter_mEnumeratedTypeAtIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    result = p->mObject.mProperty_mEnumeratedType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationDescriptorList::setter_setMEnumerationNameAtIndex (GGS_string inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEnumerationName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_enumerationDescriptorList::getter_mEnumerationNameAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_enumerationDescriptorList * p = (cCollectionElement_enumerationDescriptorList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
    result = p->mObject.mProperty_mEnumerationName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @enumerationDescriptorList
//--------------------------------------------------------------------------------------------------

DownEnumerator_enumerationDescriptorList::DownEnumerator_enumerationDescriptorList (const GGS_enumerationDescriptorList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptorList_2E_element DownEnumerator_enumerationDescriptorList::current (LOCATION_ARGS) const {
  const cCollectionElement_enumerationDescriptorList * p = (const cCollectionElement_enumerationDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_enumerationDescriptorList::current_mEnumeratedType (LOCATION_ARGS) const {
  const cCollectionElement_enumerationDescriptorList * p = (const cCollectionElement_enumerationDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
  return p->mObject.mProperty_mEnumeratedType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_enumerationDescriptorList::current_mEnumerationName (LOCATION_ARGS) const {
  const cCollectionElement_enumerationDescriptorList * p = (const cCollectionElement_enumerationDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
  return p->mObject.mProperty_mEnumerationName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @enumerationDescriptorList
//--------------------------------------------------------------------------------------------------

UpEnumerator_enumerationDescriptorList::UpEnumerator_enumerationDescriptorList (const GGS_enumerationDescriptorList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptorList_2E_element UpEnumerator_enumerationDescriptorList::current (LOCATION_ARGS) const {
  const cCollectionElement_enumerationDescriptorList * p = (const cCollectionElement_enumerationDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_enumerationDescriptorList::current_mEnumeratedType (LOCATION_ARGS) const {
  const cCollectionElement_enumerationDescriptorList * p = (const cCollectionElement_enumerationDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
  return p->mObject.mProperty_mEnumeratedType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_enumerationDescriptorList::current_mEnumerationName (LOCATION_ARGS) const {
  const cCollectionElement_enumerationDescriptorList * p = (const cCollectionElement_enumerationDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_enumerationDescriptorList) ;
  return p->mObject.mProperty_mEnumerationName ;
}




//--------------------------------------------------------------------------------------------------
//     @enumerationDescriptorList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationDescriptorList ("enumerationDescriptorList",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enumerationDescriptorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDescriptorList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumerationDescriptorList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumerationDescriptorList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDescriptorList GGS_enumerationDescriptorList::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_enumerationDescriptorList result ;
  const GGS_enumerationDescriptorList * p = (const GGS_enumerationDescriptorList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumerationDescriptorList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDescriptorList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures::GGS_typeFeatures (void) :
AC_GALGAS_root (),
mFlags (0),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures::GGS_typeFeatures (const uint64_t inFlags) :
AC_GALGAS_root (),
mFlags (inFlags),
mIsValid (true) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (0) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_infixAddOperator (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 0) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_infixSubOperator (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 1) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_infixMulOperator (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 2) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_infixDivOperator (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 3) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_infixModOperator (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 4) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_infixShiftOperator (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 5) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_prefixPlusOperator (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 6) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_prefixMinusOperator (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 7) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_prefixTildeOperator (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 8) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_incDecOperator (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 9) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_infixAndOperator (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 10) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_infixOrOperator (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 11) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_infixXorOperator (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 12) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_prefixNotOperator (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 13) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_equatable (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 14) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_comparable (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 15) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_referenceEquatable (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 16) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 17) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 18) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 19) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_divAssignOperatorWithExpression (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 20) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_xorAssignOperatorWithExpression (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 21) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_orAssignOperatorWithExpression (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 22) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_andAssignOperatorWithExpression (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 23) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_infixAddOperatorNoOVF (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 24) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_infixSubOperatorNoOVF (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 25) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_infixMulOperatorNoOVF (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 26) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_infixDivOperatorNoOVF (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 27) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_prefixMinusOperatorNoOVF (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 28) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_incDecOperatorNoOVF (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 29) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 30) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_doNotGenererateObjectCompare (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 31) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 32) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_generateCopyConstructorAndAssignmentOperator (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 33) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_generateSynthetizedInitializer (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 34) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::class_func_clonable (UNUSED_LOCATION_ARGS) {
  return GGS_typeFeatures (uint64_t (1) << 35) ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeFeatures::isValid (void) const {
  return mIsValid ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeFeatures::getter_contains (const GGS_typeFeatures & inOperand
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_bool ((mFlags & inOperand.mFlags) != 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeFeatures::andAssignOperation (const GGS_typeFeatures inOperand,
                                           class Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags &= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeFeatures::orAssignOperation (const GGS_typeFeatures inOperand,
                                          class Compiler * /* inCompiler */
                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags |= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeFeatures::xorAssignOperation (const GGS_typeFeatures inOperand,
                                           class Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags ^= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeFeatures::minusAssignOperation (const GGS_typeFeatures inOperand,
                                             class Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags &= ~ inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::operator_or (const GGS_typeFeatures & inOperand
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GGS_typeFeatures (mFlags | inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::operator_and (const GGS_typeFeatures & inOperand
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GGS_typeFeatures (mFlags & inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::operator_xor (const GGS_typeFeatures & inOperand
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GGS_typeFeatures (mFlags ^ inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::substract_operation (const GGS_typeFeatures & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GGS_typeFeatures (mFlags & ~ inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::operator_tilde (UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result ;
  if (mIsValid) {
    result = GGS_typeFeatures (uint64_t (0xFFFFFFFFF) ^ mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeFeatures::description (String & ioString,
                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("<boolset @typeFeatures:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    if ((mFlags & (uint64_t (1) << 0)) != 0) {
      ioString.appendCString (" infixAddOperator") ;
    }
    if ((mFlags & (uint64_t (1) << 1)) != 0) {
      ioString.appendCString (" infixSubOperator") ;
    }
    if ((mFlags & (uint64_t (1) << 2)) != 0) {
      ioString.appendCString (" infixMulOperator") ;
    }
    if ((mFlags & (uint64_t (1) << 3)) != 0) {
      ioString.appendCString (" infixDivOperator") ;
    }
    if ((mFlags & (uint64_t (1) << 4)) != 0) {
      ioString.appendCString (" infixModOperator") ;
    }
    if ((mFlags & (uint64_t (1) << 5)) != 0) {
      ioString.appendCString (" infixShiftOperator") ;
    }
    if ((mFlags & (uint64_t (1) << 6)) != 0) {
      ioString.appendCString (" prefixPlusOperator") ;
    }
    if ((mFlags & (uint64_t (1) << 7)) != 0) {
      ioString.appendCString (" prefixMinusOperator") ;
    }
    if ((mFlags & (uint64_t (1) << 8)) != 0) {
      ioString.appendCString (" prefixTildeOperator") ;
    }
    if ((mFlags & (uint64_t (1) << 9)) != 0) {
      ioString.appendCString (" incDecOperator") ;
    }
    if ((mFlags & (uint64_t (1) << 10)) != 0) {
      ioString.appendCString (" infixAndOperator") ;
    }
    if ((mFlags & (uint64_t (1) << 11)) != 0) {
      ioString.appendCString (" infixOrOperator") ;
    }
    if ((mFlags & (uint64_t (1) << 12)) != 0) {
      ioString.appendCString (" infixXorOperator") ;
    }
    if ((mFlags & (uint64_t (1) << 13)) != 0) {
      ioString.appendCString (" prefixNotOperator") ;
    }
    if ((mFlags & (uint64_t (1) << 14)) != 0) {
      ioString.appendCString (" equatable") ;
    }
    if ((mFlags & (uint64_t (1) << 15)) != 0) {
      ioString.appendCString (" comparable") ;
    }
    if ((mFlags & (uint64_t (1) << 16)) != 0) {
      ioString.appendCString (" referenceEquatable") ;
    }
    if ((mFlags & (uint64_t (1) << 17)) != 0) {
      ioString.appendCString (" plusAssignOperatorWithExpression") ;
    }
    if ((mFlags & (uint64_t (1) << 18)) != 0) {
      ioString.appendCString (" minusAssignOperatorWithExpression") ;
    }
    if ((mFlags & (uint64_t (1) << 19)) != 0) {
      ioString.appendCString (" mulAssignOperatorWithExpression") ;
    }
    if ((mFlags & (uint64_t (1) << 20)) != 0) {
      ioString.appendCString (" divAssignOperatorWithExpression") ;
    }
    if ((mFlags & (uint64_t (1) << 21)) != 0) {
      ioString.appendCString (" xorAssignOperatorWithExpression") ;
    }
    if ((mFlags & (uint64_t (1) << 22)) != 0) {
      ioString.appendCString (" orAssignOperatorWithExpression") ;
    }
    if ((mFlags & (uint64_t (1) << 23)) != 0) {
      ioString.appendCString (" andAssignOperatorWithExpression") ;
    }
    if ((mFlags & (uint64_t (1) << 24)) != 0) {
      ioString.appendCString (" infixAddOperatorNoOVF") ;
    }
    if ((mFlags & (uint64_t (1) << 25)) != 0) {
      ioString.appendCString (" infixSubOperatorNoOVF") ;
    }
    if ((mFlags & (uint64_t (1) << 26)) != 0) {
      ioString.appendCString (" infixMulOperatorNoOVF") ;
    }
    if ((mFlags & (uint64_t (1) << 27)) != 0) {
      ioString.appendCString (" infixDivOperatorNoOVF") ;
    }
    if ((mFlags & (uint64_t (1) << 28)) != 0) {
      ioString.appendCString (" prefixMinusOperatorNoOVF") ;
    }
    if ((mFlags & (uint64_t (1) << 29)) != 0) {
      ioString.appendCString (" incDecOperatorNoOVF") ;
    }
    if ((mFlags & (uint64_t (1) << 30)) != 0) {
      ioString.appendCString (" plusEqualOperatorWithFieldListNeedsCompilerArg") ;
    }
    if ((mFlags & (uint64_t (1) << 31)) != 0) {
      ioString.appendCString (" doNotGenererateObjectCompare") ;
    }
    if ((mFlags & (uint64_t (1) << 32)) != 0) {
      ioString.appendCString (" generateDescriptionGetterUtilityMethod") ;
    }
    if ((mFlags & (uint64_t (1) << 33)) != 0) {
      ioString.appendCString (" generateCopyConstructorAndAssignmentOperator") ;
    }
    if ((mFlags & (uint64_t (1) << 34)) != 0) {
      ioString.appendCString (" generateSynthetizedInitializer") ;
    }
    if ((mFlags & (uint64_t (1) << 35)) != 0) {
      ioString.appendCString (" clonable") ;
    }
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeFeatures generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeFeatures ("typeFeatures",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeFeatures::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeFeatures ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeFeatures::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeFeatures (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeFeatures GGS_typeFeatures::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_typeFeatures result ;
  const GGS_typeFeatures * p = (const GGS_typeFeatures *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeFeatures *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeFeatures", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@functionSignature' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_functionSignature : public cCollectionElement {
  public: GGS_functionSignature_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_functionSignature (const GGS_lstring & in_mFormalSelector,
                                                const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                const GGS_string & in_mFormalArgumentName,
                                                const GGS_bool & in_isConstant
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_functionSignature (const GGS_functionSignature_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_functionSignature::cCollectionElement_functionSignature (const GGS_lstring & in_mFormalSelector,
                                                                            const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                            const GGS_string & in_mFormalArgumentName,
                                                                            const GGS_bool & in_isConstant
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalArgumentType, in_mFormalArgumentName, in_isConstant) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_functionSignature::cCollectionElement_functionSignature (const GGS_functionSignature_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalSelector, inElement.mProperty_mFormalArgumentType, inElement.mProperty_mFormalArgumentName, inElement.mProperty_isConstant) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_functionSignature::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_functionSignature::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_functionSignature (mObject.mProperty_mFormalSelector, mObject.mProperty_mFormalArgumentType, mObject.mProperty_mFormalArgumentName, mObject.mProperty_isConstant COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_functionSignature::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalSelector" ":") ;
  mObject.mProperty_mFormalSelector.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentType" ":") ;
  mObject.mProperty_mFormalArgumentType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentName" ":") ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("isConstant" ":") ;
  mObject.mProperty_isConstant.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature::GGS_functionSignature (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature::GGS_functionSignature (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature GGS_functionSignature::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_functionSignature (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature GGS_functionSignature::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_functionSignature (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionSignature::plusPlusAssignOperation (const GGS_functionSignature_2E_element & inValue
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_functionSignature (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature GGS_functionSignature::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                       const GGS_unifiedTypeMapEntry & inOperand1,
                                                                       const GGS_string & inOperand2,
                                                                       const GGS_bool & inOperand3
                                                                       COMMA_LOCATION_ARGS) {
  GGS_functionSignature result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GGS_functionSignature (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_functionSignature::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionSignature::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GGS_lstring & in_mFormalSelector,
                                                       const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                       const GGS_string & in_mFormalArgumentName,
                                                       const GGS_bool & in_isConstant
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_functionSignature * p = nullptr ;
  macroMyNew (p, cCollectionElement_functionSignature (in_mFormalSelector,
                                                       in_mFormalArgumentType,
                                                       in_mFormalArgumentName,
                                                       in_isConstant COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionSignature::addAssignOperation (const GGS_lstring & inOperand0,
                                                const GGS_unifiedTypeMapEntry & inOperand1,
                                                const GGS_string & inOperand2,
                                                const GGS_bool & inOperand3
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_functionSignature (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_functionSignature::setter_append (const GGS_lstring inOperand0,
                                           const GGS_unifiedTypeMapEntry inOperand1,
                                           const GGS_string inOperand2,
                                           const GGS_bool inOperand3,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_functionSignature (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_functionSignature::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                  const GGS_unifiedTypeMapEntry inOperand1,
                                                  const GGS_string inOperand2,
                                                  const GGS_bool inOperand3,
                                                  const GGS_uint inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_functionSignature (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_functionSignature::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                  GGS_unifiedTypeMapEntry & outOperand1,
                                                  GGS_string & outOperand2,
                                                  GGS_bool & outOperand3,
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
    cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_functionSignature) ;
      outOperand0 = p->mObject.mProperty_mFormalSelector ;
      outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
      outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
      outOperand3 = p->mObject.mProperty_isConstant ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_functionSignature::setter_popFirst (GGS_lstring & outOperand0,
                                             GGS_unifiedTypeMapEntry & outOperand1,
                                             GGS_string & outOperand2,
                                             GGS_bool & outOperand3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand3 = p->mObject.mProperty_isConstant ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_functionSignature::setter_popLast (GGS_lstring & outOperand0,
                                            GGS_unifiedTypeMapEntry & outOperand1,
                                            GGS_string & outOperand2,
                                            GGS_bool & outOperand3,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand3 = p->mObject.mProperty_isConstant ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_functionSignature::method_first (GGS_lstring & outOperand0,
                                          GGS_unifiedTypeMapEntry & outOperand1,
                                          GGS_string & outOperand2,
                                          GGS_bool & outOperand3,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand3 = p->mObject.mProperty_isConstant ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_functionSignature::method_last (GGS_lstring & outOperand0,
                                         GGS_unifiedTypeMapEntry & outOperand1,
                                         GGS_string & outOperand2,
                                         GGS_bool & outOperand3,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand3 = p->mObject.mProperty_isConstant ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature GGS_functionSignature::add_operation (const GGS_functionSignature & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_functionSignature result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature GGS_functionSignature::getter_subListWithRange (const GGS_range & inRange,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_functionSignature result = GGS_functionSignature::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature GGS_functionSignature::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_functionSignature result = GGS_functionSignature::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature GGS_functionSignature::getter_subListToIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_functionSignature result = GGS_functionSignature::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionSignature::plusAssignOperation (const GGS_functionSignature inOperand,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionSignature::setter_setMFormalSelectorAtIndex (GGS_lstring inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalSelector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_functionSignature::getter_mFormalSelectorAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    result = p->mObject.mProperty_mFormalSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionSignature::setter_setMFormalArgumentTypeAtIndex (GGS_unifiedTypeMapEntry inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_functionSignature::getter_mFormalArgumentTypeAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    result = p->mObject.mProperty_mFormalArgumentType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionSignature::setter_setMFormalArgumentNameAtIndex (GGS_string inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_functionSignature::getter_mFormalArgumentNameAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_functionSignature::setter_setIsConstantAtIndex (GGS_bool inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_isConstant = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_functionSignature::getter_isConstantAtIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    result = p->mObject.mProperty_isConstant ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @functionSignature
//--------------------------------------------------------------------------------------------------

DownEnumerator_functionSignature::DownEnumerator_functionSignature (const GGS_functionSignature & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature_2E_element DownEnumerator_functionSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_functionSignature::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_functionSignature::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject.mProperty_mFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_functionSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_functionSignature::current_isConstant (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject.mProperty_isConstant ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @functionSignature
//--------------------------------------------------------------------------------------------------

UpEnumerator_functionSignature::UpEnumerator_functionSignature (const GGS_functionSignature & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature_2E_element UpEnumerator_functionSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_functionSignature::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_functionSignature::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject.mProperty_mFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_functionSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_functionSignature::current_isConstant (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject.mProperty_isConstant ;
}




//--------------------------------------------------------------------------------------------------
//     @functionSignature generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionSignature ("functionSignature",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_functionSignature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionSignature ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionSignature::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionSignature (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionSignature GGS_functionSignature::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_functionSignature result ;
  const GGS_functionSignature * p = (const GGS_functionSignature *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionSignature *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionSignature", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum headerKind
//--------------------------------------------------------------------------------------------------

GGS_headerKind::GGS_headerKind (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_headerKind GGS_headerKind::class_func_noHeader (UNUSED_LOCATION_ARGS) {
  GGS_headerKind result ;
  result.mEnum = Enumeration::enum_noHeader ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerKind GGS_headerKind::class_func_oneHeader (UNUSED_LOCATION_ARGS) {
  GGS_headerKind result ;
  result.mEnum = Enumeration::enum_oneHeader ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerKind GGS_headerKind::class_func_twoHeaders (UNUSED_LOCATION_ARGS) {
  GGS_headerKind result ;
  result.mEnum = Enumeration::enum_twoHeaders ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_headerKind [4] = {
  "(not built)",
  "noHeader",
  "oneHeader",
  "twoHeaders"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_headerKind::getter_isNoHeader (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noHeader == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_headerKind::getter_isOneHeader (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_oneHeader == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_headerKind::getter_isTwoHeaders (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_twoHeaders == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerKind::description (String & ioString,
                                  const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @headerKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_headerKind [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_headerKind::objectCompare (const GGS_headerKind & inOperand) const {
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
//     @headerKind generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_headerKind ("headerKind",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_headerKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_headerKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_headerKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerKind GGS_headerKind::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_headerKind result ;
  const GGS_headerKind * p = (const GGS_headerKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_headerKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("headerKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@typeKindEnum string'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_string (const GGS_typeKindEnum & inObject,
                                   Compiler *
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_typeKindEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_typeKindEnum::Enumeration::invalid:
    break ;
  case GGS_typeKindEnum::Enumeration::enum_classType:
    {
      GGS_bool extractedValue_3778_isReference_0 ;
      temp_0.getAssociatedValuesFor_classType (extractedValue_3778_isReference_0) ;
      GGS_string temp_1 ;
      const GalgasBool test_2 = extractedValue_3778_isReference_0.boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        temp_1 = GGS_string ("reference class") ;
      }else if (GalgasBool::boolFalse == test_2) {
        temp_1 = GGS_string ("value class") ;
      }
      result_result = temp_1 ;
    }
    break ;
  case GGS_typeKindEnum::Enumeration::enum_enumType:
    {
      GGS_constantIndexMap extractedValue_3884__0 ;
      temp_0.getAssociatedValuesFor_enumType (extractedValue_3884__0) ;
      result_result = GGS_string ("enumeration") ;
    }
    break ;
  case GGS_typeKindEnum::Enumeration::enum_listType:
    {
      result_result = GGS_string ("list") ;
    }
    break ;
  case GGS_typeKindEnum::Enumeration::enum_sortedListType:
    {
      result_result = GGS_string ("sorted list") ;
    }
    break ;
  case GGS_typeKindEnum::Enumeration::enum_mapType:
    {
      result_result = GGS_string ("map") ;
    }
    break ;
  case GGS_typeKindEnum::Enumeration::enum_sharedMapType:
    {
      result_result = GGS_string ("shared map") ;
    }
    break ;
  case GGS_typeKindEnum::Enumeration::enum_sharedMapEntryType:
    {
      result_result = GGS_string ("shared map entry") ;
    }
    break ;
  case GGS_typeKindEnum::Enumeration::enum_listMapType:
    {
      result_result = GGS_string ("list map") ;
    }
    break ;
  case GGS_typeKindEnum::Enumeration::enum_structType:
    {
      result_result = GGS_string ("struct") ;
    }
    break ;
  case GGS_typeKindEnum::Enumeration::enum_boolsetType:
    {
      result_result = GGS_string ("boolset") ;
    }
    break ;
  case GGS_typeKindEnum::Enumeration::enum_graphType:
    {
      result_result = GGS_string ("graph") ;
    }
    break ;
  case GGS_typeKindEnum::Enumeration::enum_otherType:
    {
      result_result = GGS_string ("other") ;
    }
    break ;
  case GGS_typeKindEnum::Enumeration::enum_externType:
    {
      result_result = GGS_string ("extern") ;
    }
    break ;
  case GGS_typeKindEnum::Enumeration::enum_packageType:
    {
      result_result = GGS_string ("package") ;
    }
    break ;
  case GGS_typeKindEnum::Enumeration::enum_weakReferenceType:
    {
      GGS_unifiedTypeMapEntry extractedValue_4473__0 ;
      temp_0.getAssociatedValuesFor_weakReferenceType (extractedValue_4473__0) ;
      result_result = GGS_string ("weak reference") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@typeFeatures generateCppObjectComparison'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_generateCppObjectComparison (const GGS_typeFeatures & inObject,
                                                      Compiler *
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  const GGS_typeFeatures temp_0 = inObject ;
  result_result = temp_0.getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("unified-type-definition.galgas", 147)).operator_or (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("unified-type-definition.galgas", 147)) COMMA_SOURCE_FILE ("unified-type-definition.galgas", 147)).operator_or (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("unified-type-definition.galgas", 147)) COMMA_SOURCE_FILE ("unified-type-definition.galgas", 147)) COMMA_SOURCE_FILE ("unified-type-definition.galgas", 147)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------

GGS_localVariableAttributes::GGS_localVariableAttributes (void) :
AC_GALGAS_root (),
mFlags (0),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableAttributes::GGS_localVariableAttributes (const uint64_t inFlags) :
AC_GALGAS_root (),
mFlags (inFlags),
mIsValid (true) {
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableAttributes GGS_localVariableAttributes::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_localVariableAttributes (0) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableAttributes GGS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (UNUSED_LOCATION_ARGS) {
  return GGS_localVariableAttributes (uint64_t (1) << 0) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableAttributes GGS_localVariableAttributes::class_func_rejectDeclaredStateAsFinalState (UNUSED_LOCATION_ARGS) {
  return GGS_localVariableAttributes (uint64_t (1) << 1) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableAttributes GGS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (UNUSED_LOCATION_ARGS) {
  return GGS_localVariableAttributes (uint64_t (1) << 2) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableAttributes GGS_localVariableAttributes::class_func_acceptReadStateAsFinalState (UNUSED_LOCATION_ARGS) {
  return GGS_localVariableAttributes (uint64_t (1) << 3) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableAttributes GGS_localVariableAttributes::class_func_warnsOnAnyAcces (UNUSED_LOCATION_ARGS) {
  return GGS_localVariableAttributes (uint64_t (1) << 4) ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableAttributes GGS_localVariableAttributes::class_func_suggestDeclareUnusedParameterAsUnused (UNUSED_LOCATION_ARGS) {
  return GGS_localVariableAttributes (uint64_t (1) << 5) ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_localVariableAttributes::isValid (void) const {
  return mIsValid ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_localVariableAttributes::getter_contains (const GGS_localVariableAttributes & inOperand
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inOperand.isValid ()) {
    result = GGS_bool ((mFlags & inOperand.mFlags) != 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVariableAttributes::andAssignOperation (const GGS_localVariableAttributes inOperand,
                                                      class Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags &= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localVariableAttributes::orAssignOperation (const GGS_localVariableAttributes inOperand,
                                                     class Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags |= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localVariableAttributes::xorAssignOperation (const GGS_localVariableAttributes inOperand,
                                                      class Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags ^= inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_localVariableAttributes::minusAssignOperation (const GGS_localVariableAttributes inOperand,
                                                        class Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mFlags &= ~ inOperand.mFlags ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableAttributes GGS_localVariableAttributes::operator_or (const GGS_localVariableAttributes & inOperand
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_localVariableAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GGS_localVariableAttributes (mFlags | inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableAttributes GGS_localVariableAttributes::operator_and (const GGS_localVariableAttributes & inOperand
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_localVariableAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GGS_localVariableAttributes (mFlags & inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableAttributes GGS_localVariableAttributes::operator_xor (const GGS_localVariableAttributes & inOperand
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_localVariableAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GGS_localVariableAttributes (mFlags ^ inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableAttributes GGS_localVariableAttributes::substract_operation (const GGS_localVariableAttributes & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_localVariableAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GGS_localVariableAttributes (mFlags & ~ inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableAttributes GGS_localVariableAttributes::operator_tilde (UNUSED_LOCATION_ARGS) const {
  GGS_localVariableAttributes result ;
  if (mIsValid) {
    result = GGS_localVariableAttributes (uint64_t (0x3F) ^ mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVariableAttributes::description (String & ioString,
                                               const int32_t /* inIndentation */) const {
  ioString.appendCString ("<boolset @localVariableAttributes:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    if ((mFlags & (uint64_t (1) << 0)) != 0) {
      ioString.appendCString (" rejectWriteInInitializedAndReadStates") ;
    }
    if ((mFlags & (uint64_t (1) << 1)) != 0) {
      ioString.appendCString (" rejectDeclaredStateAsFinalState") ;
    }
    if ((mFlags & (uint64_t (1) << 2)) != 0) {
      ioString.appendCString (" acceptInitializedStateAsFinalState") ;
    }
    if ((mFlags & (uint64_t (1) << 3)) != 0) {
      ioString.appendCString (" acceptReadStateAsFinalState") ;
    }
    if ((mFlags & (uint64_t (1) << 4)) != 0) {
      ioString.appendCString (" warnsOnAnyAcces") ;
    }
    if ((mFlags & (uint64_t (1) << 5)) != 0) {
      ioString.appendCString (" suggestDeclareUnusedParameterAsUnused") ;
    }
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @localVariableAttributes generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableAttributes ("localVariableAttributes",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_localVariableAttributes::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableAttributes ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVariableAttributes::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVariableAttributes (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableAttributes GGS_localVariableAttributes::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_localVariableAttributes result ;
  const GGS_localVariableAttributes * p = (const GGS_localVariableAttributes *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVariableAttributes *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableAttributes", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum localVarValuation
//--------------------------------------------------------------------------------------------------

GGS_localVarValuation::GGS_localVarValuation (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_localVarValuation GGS_localVarValuation::class_func_invalid (UNUSED_LOCATION_ARGS) {
  GGS_localVarValuation result ;
  result.mEnum = Enumeration::enum_invalid ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation GGS_localVarValuation::class_func_declared (const GGS_bool & inAssociatedValue0
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_localVarValuation result ;
  result.mEnum = Enumeration::enum_declared ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_localVarValuation_2E_declared (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation GGS_localVarValuation::class_func_initialized (UNUSED_LOCATION_ARGS) {
  GGS_localVarValuation result ;
  result.mEnum = Enumeration::enum_initialized ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation GGS_localVarValuation::class_func_read (UNUSED_LOCATION_ARGS) {
  GGS_localVarValuation result ;
  result.mEnum = Enumeration::enum_read ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation GGS_localVarValuation::class_func_mutated (UNUSED_LOCATION_ARGS) {
  GGS_localVarValuation result ;
  result.mEnum = Enumeration::enum_mutated ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarValuation::method_extractDeclared (GGS_bool & outAssociatedValue_usedInSubscope,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_declared) {
    outAssociatedValue_usedInSubscope.drop () ;
    String s ;
    s.appendCString ("method @localVarValuation.declared invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_localVarValuation_2E_declared *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_usedInSubscope = ptr->mProperty_usedInSubscope ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation_2E_declared_3F_ GGS_localVarValuation::getter_getDeclared (UNUSED_LOCATION_ARGS) const {
  GGS_localVarValuation_2E_declared_3F_ result ;
  if (mEnum == Enumeration::enum_declared) {
    const auto ptr = (const GGS_localVarValuation_2E_declared *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_localVarValuation_2E_declared (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarValuation::getAssociatedValuesFor_declared (GGS_bool & out_usedInSubscope) const {
  const auto ptr = (const GGS_localVarValuation_2E_declared *) mAssociatedValues.associatedValuesPointer () ;
  out_usedInSubscope = ptr->mProperty_usedInSubscope ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_localVarValuation [6] = {
  "(not built)",
  "invalid",
  "declared",
  "initialized",
  "read",
  "mutated"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_localVarValuation::getter_isInvalid (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_invalid == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_localVarValuation::getter_isDeclared (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_declared == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_localVarValuation::getter_isInitialized (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_initialized == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_localVarValuation::getter_isRead (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_read == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_localVarValuation::getter_isMutated (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_mutated == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localVarValuation::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("<enum @localVarValuation: ") ;
  ioString.appendCString (gEnumNameArrayFor_localVarValuation [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVarValuation::objectCompare (const GGS_localVarValuation & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_declared: {
        const auto left = (GGS_localVarValuation_2E_declared *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_localVarValuation_2E_declared *) inOperand.mAssociatedValues.associatedValuesPointer () ;
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
//     @localVarValuation generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVarValuation ("localVarValuation",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_localVarValuation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVarValuation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVarValuation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVarValuation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation GGS_localVarValuation::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_localVarValuation result ;
  const GGS_localVarValuation * p = (const GGS_localVarValuation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVarValuation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVarValuation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @scopeLocalVarMap
//--------------------------------------------------------------------------------------------------

#include "GGS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap::GGS_scopeLocalVarMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap::~ GGS_scopeLocalVarMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap::GGS_scopeLocalVarMap (const GGS_scopeLocalVarMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap & GGS_scopeLocalVarMap::operator = (const GGS_scopeLocalVarMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap GGS_scopeLocalVarMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_scopeLocalVarMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap GGS_scopeLocalVarMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_scopeLocalVarMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_scopeLocalVarMap::getter_hasKey (const GGS_string & inKey
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_scopeLocalVarMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                     const GGS_uint & inLevel
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_scopeLocalVarMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_scopeLocalVarMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_scopeLocalVarMap::getter_locationForKey (const GGS_string & inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_scopeLocalVarMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_scopeLocalVarMap::getter_keyList (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_scopeLocalVarMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeLocalVarMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeLocalVarMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_scopeLocalVarMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeLocalVarMap::insulate (LOCATION_ARGS) {
  if (mSharedRoot.isNotNil ()) {
    mSharedRoot->invalidateCacheSortedArray () ;
    if (!mSharedRoot->isUniquelyReferenced ()) {
      auto p = OptionalSharedRef <GGS_GenericMapRoot <GGS_scopeLocalVarMap_2E_element>>::make (THERE) ;
      mSharedRoot->duplicateTo (p COMMA_THERE) ;
      mSharedRoot = p ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeLocalVarMap::performInsert (const GGS_scopeLocalVarMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    insulate (THERE) ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_scopeLocalVarMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      existingNode = mSharedRoot->overriddenRoot ()->searchNode (lkey.mProperty_string.stringValue()) ;
      if (existingNode.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_scopeLocalVarMap_2E_element>
GGS_scopeLocalVarMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    const OptionalSharedRef <GGS_GenericMapNode <GGS_scopeLocalVarMap_2E_element>> node = mSharedRoot->searchNode (inKey) ;
    if (node.isNil ()) {
      return SharedGenericPtrWithValueSemantics <GGS_scopeLocalVarMap_2E_element> () ;
    }else{
      return node->mSharedInfo ;
    }
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_scopeLocalVarMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

OptionalSharedRef <GGS_GenericMapNode <GGS_scopeLocalVarMap_2E_element>>
GGS_scopeLocalVarMap::nodeForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->searchNode (inKey) ;
  }else{
    return OptionalSharedRef <GGS_GenericMapNode <GGS_scopeLocalVarMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_scopeLocalVarMap::count (void) const  {
  if (mSharedRoot.isNil ()) {
    return 0 ;
  }else{
    return mSharedRoot->count () ;
  }
}

//--------------------------------------------------------------------------------------------------

TC_Array <SharedGenericPtrWithValueSemantics <GGS_scopeLocalVarMap_2E_element>>
GGS_scopeLocalVarMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return TC_Array <SharedGenericPtrWithValueSemantics <GGS_scopeLocalVarMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_scopeLocalVarMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeLocalVarMap::findNearestKey (const String & inKey,
                                  TC_UniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap_2E_element_3F_ GGS_scopeLocalVarMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_scopeLocalVarMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_scopeLocalVarMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_scopeLocalVarMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_scopeLocalVarMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mType = info->mProperty_mType ;
      element.mProperty_mCppName = info->mProperty_mCppName ;
      element.mProperty_mNameForCheckingFormalParameterUsing = info->mProperty_mNameForCheckingFormalParameterUsing ;
      element.mProperty_mAttributes = info->mProperty_mAttributes ;
      element.mProperty_mState = info->mProperty_mState ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap GGS_scopeLocalVarMap::class_func_mapWithMapToOverride (const GGS_scopeLocalVarMap & inMapToOverride
                                                                            COMMA_LOCATION_ARGS) {
  GGS_scopeLocalVarMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GGS_GenericMapRoot <GGS_scopeLocalVarMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap GGS_scopeLocalVarMap::getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_scopeLocalVarMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeLocalVarMap::setter_insertKey (GGS_lstring inLKey,
                                             GGS_unifiedTypeMapEntry inArgument0,
                                             GGS_string inArgument1,
                                             GGS_string inArgument2,
                                             GGS_localVariableAttributes inArgument3,
                                             GGS_localVarValuation inArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  const GGS_scopeLocalVarMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4) ;
  const char * kInsertErrorMessage = "the '%K' local variable is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeLocalVarMap::method_searchKey (GGS_lstring inLKey,
                                             GGS_unifiedTypeMapEntry & outArgument0,
                                             GGS_string & outArgument1,
                                             GGS_string & outArgument2,
                                             GGS_localVariableAttributes & outArgument3,
                                             GGS_localVarValuation & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_scopeLocalVarMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      TC_UniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' local variable" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    outArgument0 = info->mProperty_mType ;
    outArgument1 = info->mProperty_mCppName ;
    outArgument2 = info->mProperty_mNameForCheckingFormalParameterUsing ;
    outArgument3 = info->mProperty_mAttributes ;
    outArgument4 = info->mProperty_mState ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_scopeLocalVarMap::setter_removeKey (GGS_lstring inLKey,
                                             GGS_unifiedTypeMapEntry & outArgument0,
                                             GGS_string & outArgument1,
                                             GGS_string & outArgument2,
                                             GGS_localVariableAttributes & outArgument3,
                                             GGS_localVarValuation & outArgument4,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  SharedGenericPtrWithValueSemantics <GGS_scopeLocalVarMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const char * kRemoveErrorMessage = "there is no '%K' local variable" ;
    const String key = inLKey.mProperty_string.stringValue () ;
    insulate (THERE) ;
    info = mSharedRoot->removeAndReturnRemovedInfo (key) ;
    if (info.isNil ()) {
      TC_UniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kRemoveErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    outArgument0 = info->mProperty_mType ;
    outArgument1 = info->mProperty_mCppName ;
    outArgument2 = info->mProperty_mNameForCheckingFormalParameterUsing ;
    outArgument3 = info->mProperty_mAttributes ;
    outArgument4 = info->mProperty_mState ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_scopeLocalVarMap::getter_mTypeForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntry result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_scopeLocalVarMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mType ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_scopeLocalVarMap::getter_mCppNameForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_scopeLocalVarMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mCppName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_scopeLocalVarMap::getter_mNameForCheckingFormalParameterUsingForKey (const GGS_string & inKey,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_scopeLocalVarMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mNameForCheckingFormalParameterUsing ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_localVariableAttributes GGS_scopeLocalVarMap::getter_mAttributesForKey (const GGS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_localVariableAttributes result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_scopeLocalVarMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mAttributes ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_localVarValuation GGS_scopeLocalVarMap::getter_mStateForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_localVarValuation result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_scopeLocalVarMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mState ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_scopeLocalVarMap::setter_setMTypeForKey (GGS_unifiedTypeMapEntry inValue,
                                                  GGS_string inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_scopeLocalVarMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mType = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_scopeLocalVarMap::setter_setMCppNameForKey (GGS_string inValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_scopeLocalVarMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mCppName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_scopeLocalVarMap::setter_setMNameForCheckingFormalParameterUsingForKey (GGS_string inValue,
                                                                                 GGS_string inKey,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_scopeLocalVarMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mNameForCheckingFormalParameterUsing = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_scopeLocalVarMap::setter_setMAttributesForKey (GGS_localVariableAttributes inValue,
                                                        GGS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_scopeLocalVarMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mAttributes = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_scopeLocalVarMap::setter_setMStateForKey (GGS_localVarValuation inValue,
                                                   GGS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulate (THERE) ;
    const String key = inKey.stringValue () ;
    OptionalSharedRef <GGS_GenericMapNode <GGS_scopeLocalVarMap_2E_element>> node = nodeForKey (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mState = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_scopeLocalVarMap_internalDescription (const TC_Array <SharedGenericPtrWithValueSemantics <GGS_scopeLocalVarMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key'") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mType:") ;
    inArray (i COMMA_HERE)->mProperty_mType.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mCppName:") ;
    inArray (i COMMA_HERE)->mProperty_mCppName.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mNameForCheckingFormalParameterUsing:") ;
    inArray (i COMMA_HERE)->mProperty_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mAttributes:") ;
    inArray (i COMMA_HERE)->mProperty_mAttributes.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mState:") ;
    inArray (i COMMA_HERE)->mProperty_mState.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_scopeLocalVarMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const TC_Array <SharedGenericPtrWithValueSemantics <GGS_scopeLocalVarMap_2E_element>> array = sortedInfoArray () ;
    GGS_scopeLocalVarMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GGS_GenericMapRoot <GGS_scopeLocalVarMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_scopeLocalVarMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @scopeLocalVarMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_scopeLocalVarMap::DownEnumerator_scopeLocalVarMap (const GGS_scopeLocalVarMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap_2E_element DownEnumerator_scopeLocalVarMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_scopeLocalVarMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_scopeLocalVarMap::current_mType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_scopeLocalVarMap::current_mCppName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mCppName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_scopeLocalVarMap::current_mNameForCheckingFormalParameterUsing (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mNameForCheckingFormalParameterUsing ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableAttributes DownEnumerator_scopeLocalVarMap::current_mAttributes (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAttributes ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation DownEnumerator_scopeLocalVarMap::current_mState (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mState ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @scopeLocalVarMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_scopeLocalVarMap::UpEnumerator_scopeLocalVarMap (const GGS_scopeLocalVarMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap_2E_element UpEnumerator_scopeLocalVarMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_scopeLocalVarMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_scopeLocalVarMap::current_mType (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_scopeLocalVarMap::current_mCppName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mCppName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_scopeLocalVarMap::current_mNameForCheckingFormalParameterUsing (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mNameForCheckingFormalParameterUsing ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableAttributes UpEnumerator_scopeLocalVarMap::current_mAttributes (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAttributes ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVarValuation UpEnumerator_scopeLocalVarMap::current_mState (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mState ;
}


//--------------------------------------------------------------------------------------------------
//     @scopeLocalVarMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scopeLocalVarMap ("scopeLocalVarMap",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_scopeLocalVarMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scopeLocalVarMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_scopeLocalVarMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_scopeLocalVarMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_scopeLocalVarMap GGS_scopeLocalVarMap::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_scopeLocalVarMap result ;
  const GGS_scopeLocalVarMap * p = (const GGS_scopeLocalVarMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_scopeLocalVarMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("scopeLocalVarMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

